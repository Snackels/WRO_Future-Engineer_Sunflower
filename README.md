# Documentation for WRO Future Engineer 2023
by Team *Sunflower* 🌻🌻🌻


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
- Team information
- Design Process
- Program Explanation

<br><br><br><br>

# **Part 1: About our team.**
*YBR-Sunflower* is a team of three. All the team members are students at Yothinburana School. 
Here are the team members.
1. Vorawet Narkglom, 15 years old, programmer.

2. Sakolnat Raktaengan, 15 years old, robot designer.

3. Vichaiwat Koonsap, 15 years old, document designer.
# **Part 2: Robot design.**
### The Robot

Designing a good robot is indeed a challenging task as it requires a lot of consideration and planning to ensure it can move swiftly and follow specific rules. One of the primary requirements is that the robot must be a four-wheeled vehicle with one driving axle and one steering actuator, which is why we carefully chose these components. After selecting all the necessary components, we had to figure out how to make them all fit together. For instance, we placed the gyro around the middle-top of the robot to get the most accurate output, while the camera was positioned at the back-top to detect objects quickly.

We also included a separate button to start the program quickly and avoid accidentally moving the robot while trying to push the start button. Our robot has two servos, one on the bottom front and one on the top front. The bottom front servo is used to steer the wheel, and we had to remake the front part of the robot because we faced a problem during the national round. The robot was too slim, and when we steered too much, it acted like a brake, making it difficult to maneuver. So, we made the robot slightly larger to prevent this issue.

Finally, we added a top servo that rotates our ultrasonic. Initially, we thought of using two ultrasonics, but we realized that the waves could hit each other, making the received data inaccurate. Therefore, we designed our robot to have a single ultrasonic, which ensured that the data we received was precise. 

Additionally, the rules also said that:

The vehicle's dimensions must not exceed 300x200 mm, with a height limit of 300 mm.
The weight of the vehicle must not exceed 1.5 kilograms.

<br>

### Our robot components

- ## **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Motor.png" width = "400">

### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Voltage           | 9 V      |

### Mechanical Specifications

| Specification     | Value    |
|-------------------|----------|
| Speed             | 380 rpm  |
| Maximum torque    | 40 Ncm   |

<br><br>

- ## **Servo** : GEEKSERVO 2kg 360 Degrees servo.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Servo%201.png" width = "400">

### Electrical Specifications

| Specification     | Value    |
|-------------------|----------|
| Working voltage   | 3.3V~6V  |
| Rated voltage     | 4.8V     |
| Rated current     | 200mA    |
| Stall current     | 700mA    |
| Sliding current   | 450mA    |

### Mechanical Specifications

| Specification     | Value     |
|-------------------|-----------|
| Maximum torque    | 500g.cm   |
| Angle speed       | 60°/0.12s |

<br><br>

- ## **Gearbox** : Technic, gear differential with inner tabs and closed center, 28 bevel teeth
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Gear_3.png" width = "400">

<br><br>

- ## **Wheel** : Lego 49.5 × 20 tire and 30 × 20 rim
<image src = "https://github.com/LEST0808/Sunflower-Photos/blob/main/Wheel.png" width = "400">

<br><br>

- ## **Ultra sonic sensor** : Gravity URM 09 ultrasonic distance sensor.
<image src="https://github.com/LEST0808/POP32ph/blob/main/117270007.png" width = "400">

### Electrical Specifications

| Specification                   | Value                  |
|---------------------------------|------------------------|
| Supply Voltage                  | 3.3~5.5V DC            |
| Operating Current               | 20mA                   |

### Performance Specifications

| Specification                   | Value                  |
|---------------------------------|------------------------|
| Operating Temperature Range      | -10°C to +70°C          |
| Measurement Range                | 2cm to 500cm (can be set) |
| Resolution                       | 1cm                    |
| Accuracy                         | 1%                     |
| Frequency                        | 50Hz Max               |

<br><br>

- ## **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Bat.png" width = "400">

### Specification

| Specification                   | Value                                        |
|---------------------------------|----------------------------------------------|
| 2 cells Voltage                  | 7.4V                                         |
| Capacity                         | 1100mAh 30C                                  |
| Charging Current                 | Up to 5 times the capacity (5C)             |
| Connectors                       | JST type, easily disconnectable              |

<br><br>

- ## **Light Sensor** : Virus III by Design By Sopon
<image src = "https://github.com/LEST0808/POP32ph/blob/main/Virus.png" width = "400">
<br><br>

- ## **Touch Sensor** : ZX-Switch 01 by INEX
<image src = "https://github.com/LEST0808/POP32ph/blob/main/ZX%20switch.png" width = "400">

- ## **GyroCompass** :GY-25

<image src = "https://github.com/LEST0808/POP32ph/blob/main/gy25-tilt-sngle-sensor-oky3254.png" width = "400">

### Specification

#### Power and Communication

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| Power supply              | 3-5V (internal low dropout regulator)          |
| Used Chip                 | MCU+MPU6050                                     |
| Communication mode        | Serial communication (baud 9600, 115200), IIC communication |
| Operating Current         | 15 mA                                          |

#### Angular Measurement

| Specification             | Value                                           |
|---------------------------|-------------------------------------------------|
| Angular Resolution        | 0.01°                                           |
| Direct Data               | YAW ROLL PITCH                                 |
| Measuring range of axes   | -180 to +180 degrees                           |
| Resolution                | 0.01 degrees                                  |
| Frequency Response        | 100Hz (115200bps)                              |
| Operating Temperature     | -20 to 85°C                                    |

<br><br>

- ## **Camera** :Pixy2.0

<image src = "https://github.com/LEST0808/POP32ph/blob/main/Pixy-2.png" width = "400">

### Specification

#### Display

| Specification     | Value       |
|-------------------|-------------|
| Resolution        | 1296 x 976   |

#### Processor and Memory

| Specification     | Value       |
|-------------------|-------------|
| Processor         | NXP LPC4330 |
| Clock Speed       | 204 MHz     |
| RAM               | 264KB       |
| Flash             | 2 MB        |

#### Performance

| Specification     | Value       |
|-------------------|-------------|
| Framerate         | 60 fps      |

#### Connectivity

| Specification     | Value       |
|-------------------|-------------|
| Connection        | USB, UART, SPI, I²C |

<br><br>

- ## **Controller** :POP-32i , a 32bit controller
<image src = "https://github.com/LEST0808/POP32ph/blob/main/POP-32i-001.png" width = "400">

### Specification
### Main Specification

#### Microcontroller

| Specification           | Value                                           |
|-------------------------|-------------------------------------------------|
| Microcontroller         | 32-bit STM32F103CBT6                            |
| Flash Memory            | 128KB (reprogrammable up to 10,000 times)       |
| RAM                     | 20KB                                            |

#### Clock and Ports

| Specification           | Value                                           |
|-------------------------|-------------------------------------------------|
| Clock Signal            | 20MHz (ceramic resonator)                       |
| JST 3-Pin Ports         | 11 points for sensors and peripherals          |
| LED Indicators          | Power, low battery alert, USB connection status |
| RESET Switch            | RESET Switch Included                                        |
| USB Port                | For program downloading and data communication  |
| Power Input             | 6V to 9V, with on/off switch                    |
| Battery Compatibility   | Up to 2-cell lithium polymer batteries (7.4V to 8.4V) |
| Voltage Regulation      | Supplies 3.3V to microcontroller, OLED display, and I/O ports |
| Digital/Analog Ports    | 9 digital/analog I/O ports (A0 to A8)          |
| I2C Ports               | 2 sets supporting I2C bus (SDA and SCL)        |
| UART Port               | Sequential data communication (RxD, TxD)       |

#### Motor Control

| Specification           | Value                                           |
|-------------------------|-------------------------------------------------|
| Motor Driver Circuit    | 4 channels, supports 3V to 12V motors          |
| Current Handling        | 1.5A continuous, 2A max per channel             |
| Overcurrent Protection  | Included                                        |

#### Servo Motors, Sound, Display, Input

| Specification           | Value                                           |
|-------------------------|-------------------------------------------------|
| Servo Motor Ports       | 6 ports for driving servo motors                |
| Speaker                 | Piezo speaker for sound (connected to PB5)     |
| OLED Display            | 1.5-inch OLED, 128x64 pixels, communicates via I2C |
| Push Buttons and Knob   | OK, SW-A, SW-B push buttons, adjustable knob    |

- ## **Step-down** : HW-360 V6.0
<img src = "https://github.com/LEST0808/POP32ph/blob/main/Stepdown.png" width = "400">

### Specification

#### Input

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Input voltage           | DC 4.0 ~ 38V                           |

#### Output

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Output voltage          | DC 1.25V ~ 36V continuously adjustable |
| Output current          | Max 5A                                 |
| Output power            | Up to 75W                              |

#### Measurements

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Voltmeter error         | ± 0.05V                               |
| Measure range           | 0 ~ 40V                               |

#### Performance

| Specification           | Value                                  |
|-------------------------|----------------------------------------|
| Conversion efficiency   | Up to 96%                              |
| Load regulation         | S (I) ≤ 0.8%                           |
| Voltage Regulation      | S (u) ≤ 0.8%                           |

<br><br>
### Our robot wiring diagram 


# **Part 3: Program explanation**

We have developed two programs for our upcoming competition. Each program is designed for a different round - the qualification round and the final round. The first program includes two subprograms that are also included in the program for the final round. Each subprogram is made up of a main program and a function. 

### First Section [qualification round]
```c++
#include "Mapf.h"
#include <Servo.h>
#include <PID_v2.h>
#include <POP32.h>
```
In our program, we begin by including several libraries. One such library is Mapf.h, which extends the Arduino map() function and provides floating point reading from function mapf() and changes any ADC resolution input reading to any voltage output with mapf_ADC(). Another library we include is servo.h, which enables our controller boards to control a variety of servo motors. This library is capable of controlling a great number of servos. Additionally, we use PID_v2.h, which is a PID controller that seeks to keep some input variable close to a desired setpoint by adjusting an output. The way in which it does this can be 'tuned' by adjusting three parameters (P, I, D). Lastly, we require POP32.h, which is our custom controller library. We need these libraries to be able to write an Arduino code into this controller.

```c++
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
```

### Second Section [qualification round]
```c++
PID_v2 compassPID(0.75, 0, 0.035, PID::Direct);

int x = 1;

```
In this section, we use the library we included earlier which is PID_v2. This is how we keep the robot walking straight. It uses the compass to control the robot to turn left or right to prevent crashing the wall. And then, the part ```Int x = 1; ``` is how the robot walk on both side without crashing. The x = 1 is a variable which we use to multiply later in our program. 
### Third Section [qualification round]
```c++
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
```
This is the Void Setup part of our program. On the first line it is where we start the PID on earlier section. And then, ```SetOutputLimit``` is where we set the limit of compass, normally compass can turn at 360 degrees. Now, we change it -180 to 180 degrees which make it easier to control. Next line ```SetSampleTime``` defines how often the PID controller will perform its calculations and apply control actions. In our code, we set it to 10. The ```pinMode``` is an Arduino function that is used to configure the behavior of a specific pin on an Arduino board. We set servos as output, ultrasonic as input, sensors as input, and button as input. ```Serial.begin(115200)``` function is a commonly used instruction in Arduino programming. It is used to initialize serial communication between the Arduino board and a connected computer or another device. And the steering and ultra servo part are 0 because when we started the program, we need the servos to get in place for start. Then, the part of ```analogRead(3)```, its our button, when the analogRead(3) more than 500 mean the button is being push then the compass will set into zero yaw or if the button is not being pushed the robot will do nothing.

<br><br>

### Third Section [qualification round]
```c++
void loop() {
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
```
We will start with the ```motor(4,20);```, it's the code which we use to start the motor, the number 4 indicates which motor we want to use in this case we put the motor wire in motor port 4. We started off at speed 20 to avoid the robot front wheel floating, we started with speed 20 for 400 milliseccond. After that we go to the speed 100 on the code ```motor(4,100):```. Next line is stared with the button, if the button is pressed the robot will get IMU from the function ```getTaco``` then it will start detecting the line with ```line_detection``` function. After that, the code ```int wall_distance = getDistance(); ``` is used to get the distance between the wall and robot, the ```getDistance();``` is a function we use to measure the distance with ultrasonic. The ```motor and steer``` part is used to calculate the right steering degree using the x variable we set in second section and the distance between the wall. the ultrasonic will turn into the wall once we cross the red or blue line. And if the robot crossed 12 lines it will start counting with timer for 1000 millisecond or 1 second. Then the robot will get IMU, turn to right degree and then it will stop.
### Function [qualification round]
```c++
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
int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}
bool getTaco() {
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
float min(float a, float b) {
  if (a >= b) {
    return b;
  } else {
    return a;
  }
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
float max(float a, float b) {
  if (a <= b) {
    return b;
  } else {
    return a;
  }
}
float getDistance() {
  return min(mapf(analogRead(ULTRA_PIN), 0, 4096, 0, 400), 50);
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
    //(❁´◡`❁);
    }
  Servo_Value = ((max(min(middle_degree + degree, 180), 0)) / 2);
  servo(5, Servo_Value);
}

void steering_servo(int degree) {
  SteerServo_Value = ((90 + max(min(degree, 50), -50)) / 2);
  servo(2, SteerServo_Value);
}

void motor_and_steer(int degree) {
  degree = max(min(degree, 45), -45);
  steering_servo(degree);
  motor_steer = (map(abs(degree), 0, 45, 40, 40));
}


void line_detection() {
  int wall_distance = getDistance();
  int blue_value = analogRead(BLUE_SEN);
  if (TURN == 'U') {
    int red_value = analogRead(RED_SEN);
    if (blue_value < 1200 || red_value < 600) {
      int lowest_red_sen = red_value;
      long timer_line = millis();
      while (millis() - timer_line < 100) {
        int red_value = analogRead(RED_SEN);
        if (red_value < lowest_red_sen) {
          lowest_red_sen = red_value;
        }
      }
      if (lowest_red_sen > 600) {
        // Blue
        TURN = 'L';
        compass_offset += 90;
        x = 1;
        // motor_and_steer(-1 * compassPID.Run(-pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
        // ultra_servo(-pvYaw,'R');
      } else {
        // Red
        TURN = 'R';
        compass_offset -= 90;
        x = -1;
        // motor_and_steer(1 * compassPID.Run(pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'L') - 0.5) * 2)));
        // ultra_servo(-pvYaw,'L');
      }
      halt_detect_line_timer = millis();
      count++;
    }
  } else {
    if (millis() - halt_detect_line_timer > 1000) {
      if (blue_value < 1200) {
        if (TURN == 'R') {
          compass_offset -= 90;
        // motor_and_steer(1 * compassPID.Run(pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'L') - 0.5) * 2)));
        // ultra_servo(-pvYaw,'L');
        } else {
          compass_offset += 90;
        // motor_and_steer(-1 * compassPID.Run(-pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
        // ultra_servo(-pvYaw,'R');
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
```
This is all the function of our program.

### `zeroyaw`
- **Description**: This function is for the compass, used to reset the compass to 0 degrees. It's essential to ensure consistent behavior each time the robot runs.

### `wrapValue`
- **Description**: Ensures that a value remains within specified minimum and maximum bounds. If the value exceeds these bounds, it wraps around to the other end of the range.

### `getTaco`
- **Description**: This function is used to get data from the IMU (Inertial Measurement Unit). It processes incoming data in a specific format, extracts yaw information, and ensures it stays within a defined range. It returns `true` when it successfully processes valid data and `false` otherwise.

### `min`
- **Description**: Takes two floating-point numbers, `a` and `b`, as input and returns the smaller of the two.

### `wrap`
- **Description**: Ensures that a floating-point value `x` we set in the second section stays within a specified range defined by `min` and `max`. If `x` goes outside this range, it wraps around to the other end until it's within the bounds.

### `max`
- **Description**: A simple utility function for finding the maximum value between two floating-point numbers. It returns the larger of the two values.

### `getDistance`
- **Description**: This function is used to measure the distance between the wall and the robot using an ultrasonic sensor. It provides a simple way to obtain distance data.

### `ultra_servo`
- **Description**: This function controls a servo motor's position based on the desired degree and the mode_steer parameter, which determines the middle degree position. It ensures that the servo's position is within the valid range for servo control.

### `steering_servo`
- **Description**: This function controls a servo motor's position based on the desired degree. It ensures that the servo's position is within a valid range for servo control.

### `motor_and_steer`
- **Description**: This function takes a degree value, clamps it within a specified range, and controls both the steering and motor. The steering servo is controlled based on the clamped degree, and the motor_steer value is set based on the absolute degree.

### `line_detection`
- **Description**: This function is responsible for detecting lines and making decisions about steering behavior and the TURN mode based on sensor readings and timing.

### `check_leds`
- **Description**: This function is used for checking reflection light on the field. Since each field may have different brightness levels, it is essential to continuously monitor and report sensor readings from the blue and red sensors. Additionally, this function calls the `line_detection` function to make real-time decisions based on sensor data.
