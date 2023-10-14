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