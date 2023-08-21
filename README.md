# The Documentation for WRO Future Engineer 2023


![](https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929)


<p align="center">
  <img src="https://ybrobot.club/image/YB%20Robot%20logo.png" width="200"/>
</p>
<p align="center">
<b>By Yothinburana School Robot Club</b>
</p>
<br><br><br><br>

## Our works (Youtube Links): 



<br>


### This Github repository contains:

- Design process
- Program explaination
- Team photos
- Vehicle photos
- Link to our work

<br><br><br><br>

# **Part 1: Design process**

### The Robot

Designing a robot is difficult sometime. We need to design for every part we want to use and make it small , lightweight, fast, and effective.

For this competition, There are rules about designing a robot, which contain a part that the vehicle must be a 4 wheeled vehicle with one driving axle and one steering actuator
of any type. And the camera is highly recommended due to the mission.

And the rules also said 

The vehicle’s dimensions must not exceed 300x200 mm and 300 mm in height.
The weight of the vehicle must not exceed 1.5 kilograms.

<br>

### Our robot components

- **Driving motor** : Power functions L-motor made by LEGO.
<image src="https://www.lego.com/cdn/cs/set/assets/blt3289051a0e80fa54/88003.jpg?fit=bounds&format=jpg&quality=80&width=1500&height=1500&dpr=1" width = "400">

A fast and very easy to use motor. Among all the motor we chose this one because it is fast enough and it is easy to attach to the robot fame.
<br><br>

- **Steering Servo** : GEEKSERVO-270  a 180 degree servo.
<image src="https://thepihut.com/cdn/shop/products/geekservo-building-brick-180-rotation-block-servo-geekservo-104134-28717056917699_1000x.jpg?v=1646869335" width = "400">

We chose this servo because it is easy to attach to  our robot fame and got the right degree we needed to use which is 180 degree.
<br><br>

- **Servo** : GEEKSERVO building Brick Compatible 180 degree rotation servo.
<image src="https://inex.co.th/home/wp-content/uploads/2020/11/KSERVO-270-0.jpg" width = "400">

We chose this servo because it has 180 degree rotation that is perfect for rotating the **Ultra sonic sensor** and it fit perfectly in our robot.
<br><br>

- **Ultra sonic sensor** : Gravity URM 09 ultrasonic distance sensor.
<image src="https://robotools.in/wp-content/uploads/2022/10/DFRobot-Gravity-URM09-Analog-Ultrasonic-Sensor-5-1-1200x900.jpg" width = "400">

Ultra sonic help the robot to avoid the wall and the object by detecting the distance between the robot and obstacle.
<br><br>

- **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/3e07fe06-67d6-42c9-b6bc-7b74ce8ed4a2.png" width = "400">

The power source for our robot.
<br><br>

- **Controller** : Arduino UNO
<image src= "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/dc87b47a-040f-46f3-abf0-2871e494e817.png" width = "400">

This controller(Arduino UNO) is where we upload our program to robot it function as a brain of our robot.
<br><br>

- **Extension Board** : Arduino Sensor Shield V5.0 and Shield L298P Motor Driver with GPIO

(This is Sensor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/7daea972-eb14-4f4b-a7fa-51d35aa0b2af.png" width = "400">

(This is Motor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/86a15f9b-dd0d-4367-aeed-81c72b622e60.png" width = "400">

Both of the shield have the similar function which provide more port and allow our robot to use motor,sensor and battery. 
<br><br>

- **Light Sensor** : Blue light sensor from INEX, Red light sensor from Design By Sopon

(blue sensor)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/a3c43af5-2394-4fa1-a570-c3f70362796d" width = "400">

 (red sensor)
 
<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/c3e92edd-0ece-4372-a2be-4aa417b8ce14.png" width = "400">

These light sensor is use to detect the line from the race field the reason for us to use two different color is that the robot can know the which line is red or blue.
<br><br>

- **GyroCompass** :gy-25

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/0a7b5f42-313d-4249-b86b-bdcaad4175f5.png" width = "400">

This component is for the robot to know which direction is it facing at the moment and it is use to tell which side the robot should turn.
<br><br>

- **Camera** :Pixy2.0

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/ea42d632-7cc2-4c4f-b491-2879ae6f25ec.png" width = "400">

The camera is use to detect the color block(obstacle) and send the signal to the robot what side it need to avoid the block like when it see red block it tell the robot it need to swirl right and when it see green it tell to swirl left side instead.   
<br><br>
### Our robot wiring diagram 
# **Part 2: Program explaination**

### Main_program_no_obstacles

#include <Servo.h>
#include "Mapf.h"
#include <PID_v2.h>
#include <Pixy2I2C.h>
Pixy2I2C pixy;
Servo myservo;
Servo myservo2;
//  Compass Variable
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
//  Motor B
int const ENB = 11;
int const INB = 13;
//  Ultrasonic Sensor
int const ULTRA_PIN = 2;
//  da servo
int const STEER_SRV = 9;
int const ULTRA_SRV = 8;
//  Light Sensors
int const RED_SEN = 1;
int const BLUE_SEN = 0;
//button
int const BUTTON = 3;
//  Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
bool found_block = false;
int count = 0;
//I have no idea what this does
PID_v2 compassPID(0.37, 0, 0.07, PID::Direct);

void setup() {
  // put your setup code here, to run once:
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  //pidMode
  pinMode(ENB, OUTPUT);
  pinMode(INB, OUTPUT);
  pinMode(STEER_SRV, OUTPUT);
  pinMode(ULTRA_SRV, OUTPUT);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  while (!Serial)
    ;
  myservo.attach(ULTRA_SRV, 600, 2400);
  myservo2.attach(STEER_SRV, 500, 2500);
  steering_servo(0);
  ultra_servo(0, 'L');
  //check_leds();

  //re-rotation
  while (analogRead(BUTTON) > 500)
    ;
  zeroYaw();
  while (analogRead(BUTTON) <= 500)
    ;
}

void loop() {

  motor(60);
  while (analogRead(BUTTON) > 500) {
    getIMU();
    line_detection();
    steering_servo(-1 * compassPID.Run(pvYaw + ((getDistance() - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
    ultra_servo(-pvYaw, TURN);
    if (count >= 12) {

      long timer01 = millis();
      while (millis() - timer01 < 590) {
        getIMU();
        line_detection();
        steering_servo(-1 * compassPID.Run(pvYaw + ((getDistance() - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
        ultra_servo(-pvYaw, TURN);
      }
      motor(0);
      while (true) {
      }
    }
  }
  while (analogRead(BUTTON) <= 500)
    ;
  motor(0);
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
}
### Function_no_obstacles

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
  motor(map(abs(degree), 0, 45, 35, 40));
}

void line_detection() {
  int blue_value = analogRead(BLUE_SEN);
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
      halt_detect_line_timer = millis();
      count++;
    }
  } else {
    if (millis() - halt_detect_line_timer > 1000) {
      if (blue_value < 700) {
        if (TURN == 'L') {
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
float calculate_avoidance() {
  int blocks = pixy.ccc.getBlocks();


  if (blocks) {
    found_block = true;
    int signature = -1;       // Signature of the object you want to detect
    int targetHeight = 10;    // Height of the object in centimeters
    float focalLength = 2.3;  // Focal length of the camera in centimeters
    float cameraFOV = 80.0;   // Field of view of the camera in degrees

    float avoidance_degree = 0;

    int largestBlockIndex = -1;
    int largestBlockArea = 0;

    for (int i = 0; i < blocks; i++) {
      // if (pixy.ccc.blocks[i].m_signature == targetSignature) {
      int objectArea = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;

      if (objectArea > largestBlockArea) {
        largestBlockIndex = i;
        largestBlockArea = objectArea;
        signature = pixy.ccc.blocks[i].m_signature;
      }
      // }
    }

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
      avoidance_degree = max(radiansToDegree(atan2(blockPositionX + 7, blockPositionY)), 0);
    } else {
      avoidance_degree = min(radiansToDegree(atan2(blockPositionX - 7, blockPositionY)), 0);
    }
    return avoidance_degree;
    // Serial.print("Detected degree: ");
    // Serial.print(detected_degree);
    // Serial.println(" degree ");
    // Serial.print("Position (X, Y): ");
    // Serial.print(blockPositionX);
    // Serial.print(", ");
    // Serial.print(blockPositionY);
    // Serial.print(" cm   Degree rotate: ");
    // Serial.println(avoidance_degree);
  } else {
    found_block = false;
    return 0;
  }
}

float degreesToRadians(double degrees) {
  return degrees * PI / 180.0;
}

float radiansToDegree(double raidans) {
  return raidans / PI * 180.0;
}
### Main_program_obstacles

#include <Servo.h>
#include "Mapf.h"
#include <PID_v2.h>
#include <Pixy2I2C.h>
Pixy2I2C pixy;
long pixy_timer;
Servo myservo;
Servo myservo2;
//  Compass Variable
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
//  Motor B
int const ENB = 11;
int const INB = 13;
//  Ultrasonic Sensor
int const ULTRA_PIN = 2;
//  da servo
int const STEER_SRV = 9;
int const ULTRA_SRV = 8;
//  Light Sensors
int const RED_SEN = 1;
int const BLUE_SEN = 0;
//  Buzzer
int const BUZZER = 4;
//button
int const BUTTON = 3;
//  Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
bool found_block = false;
int lines_detect_num = 0;

// Blocks config
char Blocks_TURN = 'U';
float avoidance_degree = 0;
long timer_block_decay;
float found_block_factor;
//I have no idea what this does
PID_v2 compassPID(0.68, 0, 0.06, PID::Direct);

void setup() {
  // put your setup code here, to run once:
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  //pidMode
  pinMode(BUZZER, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(INB, OUTPUT);
  pinMode(STEER_SRV, OUTPUT);
  pinMode(ULTRA_SRV, OUTPUT);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  pixy.init();
  while (!Serial)
    ;
  myservo.attach(ULTRA_SRV, 600, 2400);
  myservo2.attach(STEER_SRV, 500, 2500);
  steering_servo(0);
  ultra_servo(0, 'L');
  // check_leds();
  while (analogRead(BUTTON) > 500)
    ;

  while (analogRead(BUTTON) <= 500)
    ;
  zeroYaw();
  beep();
}


void loop() {
  long countdown_stop = millis();
  while (analogRead(BUTTON) > 500) {

    getIMU();
    ultra_servo(-pvYaw, Blocks_TURN);
    line_detection();
    float distance_wall = getDistance();
    float steering_degree = -1 * compassPID.Run(pvYaw + ((distance_wall - 20)) * ((float(Blocks_TURN == 'R') - 0.5) * 2));
    if (millis() - pixy_timer > 50) {
      avoidance_degree = calculate_avoidance();
      pixy_timer = millis();
    }
    // int final_degree = (found_block || (found_block_factor > 0) ? mapf(min(max(distance_wall, 10), 45), 10, 45, steering_degree, avoidance_degree) : steering_degree);
    int final_degree = map(max(found_block, found_block_factor), 1, 0, mapf(min(max(distance_wall, 10), 45), 10, 45, steering_degree, 2.3 * avoidance_degree), steering_degree);
    // steering_servo(steering_degree);
    steering_servo(avoidance_degree);
    if (millis() - countdown_stop > 3000) {
      // Stops everything
      motor(0);
      while (true)
        ;
    }
    if (lines_detect_num < 12) {
      countdown_stop = millis();
    }
    motor_and_steer(final_degree);
  }
  motor(0);
  while (analogRead(BUTTON) <= 500)
    ;
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
}
### Function_obstacles

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
