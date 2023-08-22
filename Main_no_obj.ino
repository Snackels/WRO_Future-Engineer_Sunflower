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