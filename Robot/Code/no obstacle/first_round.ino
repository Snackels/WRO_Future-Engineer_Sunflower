//Red white2597 blue1701 red2103
//brue white2997 blue1397 red1040
#include "Mapf.h"
#include <Servo.h>
#include <PID_v2.h>
#include <POP32.h>

Servo servo1;
Servo servo2;

//  Compass Variables
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];

//  Motor B
// int const ENB = 11;
// int const INB = 13;

//  Buzzer
// int const BUZZER = 4;

//  Servos
int const STEER_SRV = 2;
int const ULTRA_SRV = 5;

//  Ultrasonic Sensor
int const ULTRA_PIN = 2;

//  Light Sensors
int const RED_SEN = 0;
int const BLUE_SEN = 1;

//  Button
int const BUTTON = 3;

//  Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
int Servo_Value;
int SteerServo_Value;
int motor_steer;
int count = 0;

// Specify the links and initial tuning parameters
PID_v2 compassPID(0.75, 0, 0.035, PID::Direct);

int x = 1;

void setup() {
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  // pinMode(BUZZER, OUTPUT);
  //pinMode(ENB, OUTPUT);
  //pinMode(INB, OUTPUT);
  pinMode(STEER_SRV, OUTPUT);
  pinMode(ULTRA_SRV, OUTPUT);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  // while (Serial)
  //   ;
  // servo1.attach(STEER_SRV, 600, 2400);
  // servo2.attach(ULTRA_SRV, 600, 2400);
  steering_servo(0);
  ultra_servo(0, 'L');
  // Serial.print("Button: ");
  // Serial.println(analogRead(BUTTON));
  //check_leds();
  while (analogRead(3) > 500)
    ;
  zeroYaw();
  while (analogRead(3) <= 500)
    ;
}

void loop() {
  // ultra_servo(0, 'R');
  //servo(5,'R');
  //ultra_servo(0, 'R');
  // float wall_distance = getDistance();
  // Serial.println(wall_distance);
  // getTaco();
  // Serial.println(pvYaw);
  //(❁´◡`❁);
  motor(4, 20);
  delay(400);
  motor(4, 100);
  while (analogRead(BUTTON) > 500) {
    getTaco();
    line_detection();
    int wall_distance = getDistance();
    motor_and_steer((1 * x) * compassPID.Run((x * pvYaw) + ((wall_distance - 15.5) * 1.2) * ((float(TURN == 'TURN') - 0.5) * 2)));
    ultra_servo(-pvYaw, TURN);
    if (count >= 12) {
      long timer01 = millis();
      while (millis() - timer01 < 1000) {
        getTaco();
        line_detection();
        motor_and_steer((1 * x) * compassPID.Run((x * pvYaw) + ((wall_distance - 15.5) * 1.2) * ((float(TURN == 'TURN') - 0.5) * 2)));
        ultra_servo(-pvYaw, TURN);
      }
      motor(4, 0);
      while (true) {
      }
    }
    // motor_and_steer(-1 * compassPID.Run(-pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
    // ultra_servo(-pvYaw,'TURN');
  }
  motor(4, 0);
  while (analogRead(BUTTON) <= 500)
    ;
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
}