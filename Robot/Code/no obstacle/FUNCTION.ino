void zeroYaw() {
  Serial1.begin(115200);
  delay(100);
  // Sets data rate to 115200 bps
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X54);
  delay(100);
  // pitch correction roll angle
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X55);
  delay(100);
  // zero degree heading
  Serial1.write(0XA5);
  delay(10);
  Serial1.write(0X52);
  delay(100);
  // automatic mode
}
bool get_BURRITO() {
  while (Serial1.available()) {
    rxBuf[rxCnt] = Serial1.read();
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
int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}
float wrap(float x, float min, float max) {
  while (x > max || x < min) {
    if (x > max) {
      x = x - abs(max - min);
    }
    if (x < min) {
      x = x + abs(max - min);
    }
  }
  return x;
}
float min(float a, float b) {
  if (a >= b) {
    return b;
  } else {
    return a;
  }
}
float max(float a, float b) {
  if (a <= b) {
    return b;
  } else {
    return a;
  }
}
float getDistance() {
  return min(mapf(analogRead(ULTRA_PIN), 0, 4098, 0, 500), 50);
}
void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 90;
  } else if (mode_steer == 'R') {
    middle_degree = 0;
  } else if (mode_steer == 'L' || mode_steer == 'U') {
    middle_degree = 180;
  } else {
  }
  Servo_Value = ((max(min(middle_degree + degree, 180), 0)) / 2);
  servo(5, Servo_Value);
}
void steering_servo(int degree) {
  SteerServo = ((90 + max(min(degree, 40), -40)) / 2);
  servo(2,SteerServo);
}
void motor_and_steer(int degree) {
  degree = max(min(degree, 40), -40);
  steering_servo(degree);
  motor_steer  = (map(abs(degree), 0, 40, 40, 40));
}
void line_detection() {
  int blue_value = analogRead(BLUE_SEN);
  if (TURN == 'U') {
    int red_value = analogRead(RED_SEN);
    if (blue_value < 2000 || red_value < 950) {
      int lowest_red_sen = red_value;
      long timer_line = millis();
      while (millis() - timer_line < 100) {
        int red_value = analogRead(RED_SEN);
        if (red_value < lowest_red_sen) {
          lowest_red_sen = red_value;
        }
      }
      if (lowest_red_sen > 950) {
        // Red
        TURN = 'L';
        compass_offset += 90;
        s = 1;
        // beep();
      } else {
        // Blue
        TURN = 'R';
        compass_offset -= 90;
        s = -1;
        // beep();
        // delay(100);
        // beep();
        // delay(100);
        // beep();
      }
      halt_detect_line_timer = millis();
      count++;
    }
  } else {
    if (millis() - halt_detect_line_timer > 1000) {
      if (blue_value < 2000) {
        if (TURN == 'R') {
          compass_offset -= 90;
        } else {
          compass_offset += 90;
        }
        halt_detect_line_timer = millis();
        count++;
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