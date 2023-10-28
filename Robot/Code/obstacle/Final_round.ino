#include <POP32.h>
#include "Mapf.h"
#include <PID_v2.h>
#include <Pixy2I2C.h>
Pixy2I2C pixy;

long pixy_timer;
//Gyro variable
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
//Ultrasonic
int const ULTRA_PIN = 2;
// Light Sensors
int const RED_SEN = 1;
int const BLUE_SEN = 0;
//button
int const BUTTON = 3;
//Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
bool found_block = false;
int lines_detect_num = 0;
int Servo_Value;
int SteerServo;
int count = 0;
// Blocks config
char Blocks_TURN = 'U';
float avoidance_degree = 0;
long timer_block_decay;
float found_block_factor;
bool checked_last_block = false;
char last_block = 'U';
char before_last_block = 'U';
bool checked_before_last_block = false;
//turnaround
float LastBlock = 20;
//set side
int x = 1;
int y = 35;
int z = 1;
int f;
PID_v2 compassPID(0.81, 0, 0.029, PID::Direct);
void setup() {
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  pixy.init();
  // check_leds();
  steering_servo(0);
  ultra_servo(0, 'F');
  while (analogRead(BUTTON) > 500)
    ;
  zeroYaw();
  oled.text(4, 6, "SUNFLOWER");
  oled.show();
  while (analogRead(BUTTON) <= 500)
    ;
}

void loop() {
  long countdown_stop = millis();
  long ultra_delay;
  // long uTURN_delay;
  // long Uturn_delay;
  while (analogRead(BUTTON) > 500) {

    getTaco();
    ultra_servo(-pvYaw, TURN);
    line_detection();
    float distance_wall = getDistance();
    if (count == 1) {
      if (ultra_delay == 0) {
        ultra_delay = millis();
        if (distance_wall < 20) {
          distance_wall = y;
        } else {
          distance_wall = getDistance();
        }
      }
      if (millis() - ultra_delay > 500) {
        distance_wall = getDistance();
        count = 0;
        ultra_delay = 0;
      }
    }
    float steering_degree = (1 * x * z) * compassPID.Run((x * z * pvYaw) + ((distance_wall - y)) * ((float(Blocks_TURN == 'TURN') - 0.5) * 2));
    if (millis() - pixy_timer > 50) {
      avoidance_degree = calculate_avoidance();
      pixy_timer = millis();
    }
    int final_degree = map(max(found_block, found_block_factor), 1, 0, mapf(min(max(distance_wall, 5), 30), 5, 30, steering_degree, -1.515 * avoidance_degree), steering_degree);
    while (lines_detect_num == 7) {
      if ((millis() - halt_detect_line_timer > 10 && millis() - halt_detect_line_timer < 300) && lines_detect_num == 7 && !checked_before_last_block) {
        // Stops everything
        if (before_last_block == 'R') {
          LastBlock = LastBlock * 1;
        } else if (before_last_block == 'L') {
          LastBlock = LastBlock * -1;
        } else  {
          LastBlock = LastBlock * 1;
        }
        checked_before_last_block = true;
      }
      if ((millis() - halt_detect_line_timer > 1500 && millis() - halt_detect_line_timer < 1700) && lines_detect_num == 7 && !checked_last_block) {
        if (last_block == 'R') {
          f = 1;
          steering_servo(avoidance_degree * LastBlock);
          motor(4, 50);
          delay(800);
          if (TURN == 'L') {
            TURN = 'R';
            compass_offset -= 180;
          } else {
            TURN = 'L';
            compass_offset += 180;
          }
          checked_last_block = true;
          lines_detect_num += 2;
          break;
        }
      } else {
        break;
      }
    }
    if (millis() - countdown_stop > 1500) {
      motor(4, 0);
      while (true)
        ;
    }
    if (lines_detect_num < 12) {
      countdown_stop = millis();
    }
    motor_and_steer(final_degree);
  }
  motor(4, 0);
  while (analogRead(BUTTON) <= 500)
    ;
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
}
