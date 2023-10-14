void zeroYaw() {
  Serial.begin(115200);
  delay(100);
  // Sets data rate to 115200 bps
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X54);
  delay(100);
  // pitch correction roll angle
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X55);
  delay(100);
  // zero degree heading
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X52);
  delay(100);
  // automatic mode
}
int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}
bool getIMU() {
  while (Serial.available()) {
    rxBuf[rxCnt] = Serial.read();
    if (rxCnt == 0 && rxBuf[0] != 0xAA) return;
    rxCnt++;
    if (rxCnt == 8) {  // package is complete
      rxCnt = 0;
      if (rxBuf[0] == 0xAA && rxBuf[7] == 0x55) {  // data package is correct
        pvYaw = (int16_t)(rxBuf[1] << 8 | rxBuf[2]) / 100.f;
        // pvPitch = (int16_t)(rxBuf[3] << 8 | rxBuf[4]) / 100.f;
        // pvRoll = (int16_t)(rxBuf[5] << 8 | rxBuf[6]) / 100.f;
        pvYaw = wrapValue(pvYaw + compass_offset, -179, 180);
        return true;
      }
    }
  }
  return false;
}
float getDistance() {
  return min(mapf(analogRead(ULTRA_PIN), 0, 1023, 0, 500), 50);
}

void motor(int speed) {
  if (speed > 0) {
    digitalWrite(INB, LOW);
  } else {
    digitalWrite(INB, HIGH);
  }
  analogWrite(ENB, map(speed, 0, 100, 0, 225));
}
void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 135;
  } else if (mode_steer == 'R') {
    middle_degree = 45;
  } else if (mode_steer == 'L' || mode_steer == 'U') {
    middle_degree = 225;
  } else {
  }
  myservo.write(mapf(max(min(middle_degree + degree, 225), 45), 0, 270, 0, 180));
}

void steering_servo(int degree) {
  myservo2.write((90 + max(min(degree, 45), -45)) / 2);
}
void motor_and_steer(int degree) {
  degree = max(min(degree, 45), -45);
  steering_servo(degree);
  motor(map(abs(degree), 0, 45, 30, 25));
}
void beep() {
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
}

void line_detection() {
  int blue_value = analogRead(BLUE_SEN);
  found_block_factor = min(max(mapf(millis() - timer_block_decay, 0, 1000, 1, 0), 0), 1);
  if (TURN == 'U') {
    int red_value = analogRead(RED_SEN);
    if (blue_value < 700 || red_value < 167) {
      int lowest_red_sen = red_value;
      long timer_line = millis();
      while (millis() - timer_line < 100) {
        int red_value = analogRead(RED_SEN);
        if (red_value < lowest_red_sen) {
          lowest_red_sen = red_value;
        }
      }
      if (lowest_red_sen > 167) {
        // Red
        TURN = 'R';
        compass_offset += 90;
        // ultra_servo(0, 'L');
      } else {
        // Blue
        TURN = 'L';
        compass_offset -= 90;
        // ultra_servo(0, 'R');
      }
      lines_detect_num++;
      halt_detect_line_timer = millis();
    }
  } else {
    if (millis() - halt_detect_line_timer > 2500) {
      if (blue_value < 700) {
        if (TURN == 'L') {
          compass_offset -= 90;
        } else {
          compass_offset += 90;
        }
        halt_detect_line_timer = millis();
        lines_detect_num++;
      }
    }
  }
}

void check_leds() {
  while (true) {
    Serial.print("Blue: ");
    Serial.print(analogRead(BLUE_SEN));
    Serial.print("   Red: ");
    Serial.println(analogRead(RED_SEN));
    line_detection();
  }
}
float calculate_avoidance() {
  int blocks = pixy.ccc.getBlocks();

  found_block = false;  //TODO: I wrote a bug and it works.

  if (blocks) {
    int signature = -1;       // Signature of the object you want to detect
    int targetHeight = 10;    // Height of the object in centimeters
    float focalLength = 2.3;  // Focal length of the camera in centimeters
    float cameraFOV = 80.0;   // Field of view of the camera in degrees

    int largestBlockIndex = -1;
    int largestBlockArea = 0;

    for (int i = 0; i < blocks; i++) {
      if (pixy.ccc.blocks[i].m_height > 1.33 * float(pixy.ccc.blocks[i].m_width)) {
        int objectArea = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;
        found_block = true;
        if (objectArea > largestBlockArea) {
          largestBlockIndex = i;
          largestBlockArea = objectArea;
          signature = pixy.ccc.blocks[i].m_signature;
        }
      }
    }

    if (signature != -1) {
      int objectHeight = pixy.ccc.blocks[largestBlockIndex].m_height;
      float distance = (targetHeight * focalLength * 100) / objectHeight;

      float blockCenterX = pixy.ccc.blocks[largestBlockIndex].m_x;
      float blockCenterY = pixy.ccc.blocks[largestBlockIndex].m_y;

      float deltaX = blockCenterX - pixy.frameWidth / 2;
      float deltaY = blockCenterY - pixy.frameHeight / 2;

      float detected_degree = deltaX * 40 / pixy.frameWidth;

      float blockPositionX = distance * sin(degreesToRadians(detected_degree));
      float blockPositionY = distance * cos(degreesToRadians(detected_degree)) - 17;

      if (signature == 1) {
        avoidance_degree = max(radiansToDegree(atan2(blockPositionX + 9, blockPositionY)), 5);
        Blocks_TURN = 'R';
      } else {
        avoidance_degree = min(radiansToDegree(atan2(blockPositionX - 9, blockPositionY)), -5);
        Blocks_TURN = 'L';
      }


      // Serial.print("Detected degree: ");
      // Serial.print(detected_degree);
      // Serial.println(" degree ");
      // Serial.print("Position (X, Y): ");
      // Serial.print(blockPositionX);
      // Serial.print(", ");
      // Serial.print(blockPositionY);
      // Serial.print(" cm   Degree rotate: ");
      // Serial.println(avoidance_degree);
    }
  }

  return avoidance_degree;
}

float degreesToRadians(double degrees) {
  return degrees * PI / 180.0;
}

float radiansToDegree(double raidans) {
  return raidans / PI * 180.0;
}