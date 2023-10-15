#include <POP32.h>
#include "Mapf.h"
#include <PID_v2.h>
//Gyro variable
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];
//Ultrasonic
int const ULTRA_PIN = 2;
// Light Sensors
int const RED_SEN = 0;
int const BLUE_SEN = 1;
//button
int const BUTTON = 3;
//Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
int count = 0;
int Servo_Value;
int SteerServo;
int motor_steer;
int s = 1;
// Specify the links and initial tuning parameters
PID_v2 compassPID(0.7, 0, 0.045, PID::Direct);
void setup() {
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  // check_leds();
  steering_servo(0);
  ultra_servo(0,'F')
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
  zeroYaw();
  oled.text(0, 0, "SUNFLOWER");
  oled.show();
  // beep();
}

void loop() {
  // 💀💀💀
  // -\(￣ε(#￣)/-
  // Serial.println(pvYaw);
  motor(4, 50);
  while (analogRead(BUTTON) > 500) {
    get_BURRITO();
    line_detection();
    int wall_distance = getDistance();
    motor_and_steer((1 * s) * compassPID.Run((pvYaw * s) + ((wall_distance - 25) * 2) * ((float(TURN == 'TURN') - 0.2) * 2)));
    ultra_servo(-pvYaw, TURN);
    if (count >= 12) {

      long timer01 = millis();
      while (millis() - timer01 < 1000) {
        get_BURRITO();
        line_detection();
        steering_servo((1 * s) * compassPID.Run((pvYaw * s) + ((wall_distance - 25) * 2) * ((float(TURN == 'TURN') - 0.2) * 2)));
        ultra_servo(-pvYaw, TURN);
      }
      motor(4,0);
      while (true) {
      }
    }
  }
    while (analogRead(BUTTON) <= 500)
      ;
    motor(4, 0);
    while (analogRead(BUTTON) > 500)
      ;
    while (analogRead(BUTTON) <= 500)
      ;
  }
