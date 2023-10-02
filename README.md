# The best of the best Documentation for WRO Future Engineer 2023 in the entire multiverse 😆😆
by Team *YBR-GPA4.0* (The name was inspired by our first letter of our nickname, So it G stand for Gain, A stand for Atom, and we think that it will sound better if we add P so its mean Grade per attitude.)


![]([https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929](http://www2.yothinburana.ac.th/website/images/logo1.png))


<p align="center">
  <img src="https://ybrobot.club/image/YB%20Robot%20logo.png" width="200"/>
</p>
<p align="center">
<b>By Yothinburana School Robot Club</b>
</p>
<br><br><br><br>

## Our works (Youtube Links): 
https://youtu.be/MBe6ZsyGE-E


<br>


### This Github repository contains:
- Team information
- Design process
- Program explaination

<br><br><br><br>

# **Part 1: About our team.**
*YBR-Sunflower* is a team of three. All the team members are students at Yothinburana School. 
Here are team members.
1. Vorawet Narkglom, 15 years old, main programmer.

2. Sakolnat Raktaengan, 15 years old, robot designer.

3. Vichaiwat Koonsap, 15 years old, document designer.
# **Part 2: Robot design.**
### The Robot

Designing a robot is sometimes difficult. We need to design every part we intend to use, making it small, lightweight, fast, and effective. If it's too heavy, the robot will be slower. If it's too big, evading obstacles will take a lot of space. If it's ineffective, it won't be able to detect walls, obstacles, or walk properly. That's why we need to balance the robot, keeping it not too heavy, small, and fast to accomplish its mission.

For this competition, there are rules regarding robot design, which include a requirement that the vehicle must be a four-wheeled vehicle with one driving axle and one steering actuator of any type. The use of a camera is highly recommended due to the mission's nature.

Additionally, the rules also said that:

The vehicle's dimensions must not exceed 300x200 mm, with a height limit of 300 mm.
The weight of the vehicle must not exceed 1.5 kilograms.

<br>

### Our robot components

- ## **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://www.lego.com/cdn/cs/set/assets/blt3289051a0e80fa54/88003.jpg?fit=bounds&format=jpg&quality=80&width=1500&height=1500&dpr=1" width = "400">

A fast and incredibly user-friendly motor. Just a few minutes of soldering the wires, and we are ready to use it. Among all the motors, we chose this one because it is neither too fast nor too slow, and it is quite easy to attach to the robot frame. It can be adjusted for Lego and Arduino by soldering.

### Specification
- Speed : 380 rpm
- Maximum torque : 40 Ncm
- Voltage : 9 v

<br><br>

- ## **Servo** : GEEKSERVO-270  a 180 degree servo.
<image src="https://thepihut.com/cdn/shop/products/geekservo-building-brick-180-rotation-block-servo-geekservo-104134-28717056917699_1000x.jpg?v=1646869335" width = "400">

We chose this servo because it is pretty easy to attach to our robot frame and got the right degree we needed to use for steering and ultrasonic which is 180 degree.

### Specification
- Working voltage: 3.3V~6V
- Rated voltage: 4.8V
- Rated current: 200ma
- Stall current: 700ma
- Sliding current: 450ma
- Maximum torque: 500g.cm
- Angle speed: 60°/0.12s
<br><br>

- ## **Ultra sonic sensor** : Gravity URM 09 ultrasonic distance sensor.
<image src="https://robotools.in/wp-content/uploads/2022/10/DFRobot-Gravity-URM09-Analog-Ultrasonic-Sensor-5-1-1200x900.jpg" width = "400">

The ultrasonic sensor plays a crucial role in guiding the robot's navigation by detecting distances between the robot and obstacles. This enables the robot to skillfully avoid walls in its path. But to use the sensor we need to attach at the right position not too high and make it right turning degree

### Specification
- Supply Voltage: 3.3~5.5V DC
- Operating Current: 20mA
- Operating Temperature Range:  -10℃～＋70℃
- Measurement Range: 2cm～500cm (can be set)
- Resolution: 1cm
- Accuracy: 1%
- Frequency: 50Hz Max
<br><br>

- ## **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/4b0e6cb0-ba45-4377-bb51-b34038d68638.png" width = "400">

The power source for our robot. This battery is the Lithium Polymer type, normally we use at 8.3 and recharge at 7.2 to save the battery life and for safety

### Specification
- 2 cells voltage: 7.4V
- Capacity: 1100mAh 30C
- Can be charged at a current of up to 5 times the capacity (5C)
- Connectors are in a JST type that can be easily disconnected.
<br><br>

- ## **Light Sensor** : Blue light sensor from INEX, Red light sensor from Design By Sopon

(blue sensor)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/950eeb1d-ead4-4641-aa64-07414d3dd939.png" width = "400">

 (red sensor)
 
<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/b7f66634-942b-4f5c-b01d-777ba5d78d62.png" width = "400">

Light sensors play a crucial role in helping robots know where to stop and give order to other component. But what's interesting is that we use two different colors for these lines: red and blue. This choice lets the robot not only see the lines but also figure out whether they are red or blue. This extra bit of information helps the robot know how many times it have orbit around the race field, making it smarter and better equipped for the race.
<br><br>

- ## **GyroCompass** :GY-25

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/ed4a0af9-6420-498d-9d8f-a17c8bb455b0.png" width = "400">

This component equips the robot with the ability to discern its current orientation, thereby enabling it to determine the appropriate direction for turning.

### Specification
- Measuring range of axes: -180 to +180 degrees
- Resolution: 0.01 degrees Frequency Response: 100HZ (115200bps)
- Operating Current: 15 mA
- Operating Temperature: -20 to 85 °C
<br><br>

- ## **Camera** :Pixy2.0

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/bf7a29f9-a2cf-4b85-a056-3f12b4e75966.png" width = "400">

The camera serves the purpose of identifying color blocks (obstacles) and transmitting corresponding signals to the robot. For instance, upon detecting a red block, it instructs the robot to veer to the right. Conversely, when a green block is detected, it signals the robot to navigate towards the left, but if it doesn't detect any color it will go forward. 

### Specification
- Resolution : 1296 x 976
- Processor: NXP LPC4330
- Cloak speed : 204 MHz
- Ram : 264KB
- Flash : 2 MB
- Framerate : 60 fps
- Connection : USB, UART, SPI, I²C
<br><br>

- ## **Controller** :POP-32 , a 32bit controller
<image src = "https://github.com/LEST0808/LEST0808/blob/main/POP32.png" width = "400">

This controller is 32bit which make the reaction time faster, more accurate, better multitasking, and etc.

### Specification
- Microcontroller: Uses a 32-bit STM32F103CBT6 microcontroller with 128KB of flash memory for new programs, which can be programmed up to 10,000 times. It has 20KB of RAM.

- Clock Signal: The clock signal is 20MHz from a ceramic resonator.

- JST 3-Pin Ports: It has JST 3-pin connectors with 11 points for connecting sensors and peripheral devices.

- LED Indicators: Includes LED indicators for power status, low battery alert, and USB port connection status.

- RESET Switch: Features a RESET switch.

- USB Port: Provides a USB port for program downloading and data communication with a computer.

- Power Input: Has a power input port via a screw terminal block that accepts power from 6V to 9V with an on/off switch for power control.

- Battery Compatibility: Designed for use with maximum 2-cell lithium polymer batteries (7.4V to a maximum of 8.4V).

- Voltage Regulation: Includes a voltage regulation circuit to supply 3.3V to the microcontroller, OLED display, and main input/output ports.

- Digital and Analog Ports: Offers 9 digital or analog input/output ports, including A0 to A8 (corresponding to PA0 to PA7 and PB0), for receiving external signals.

- I2C Ports: Provides 2 sets of digital ports supporting I2C bus (SDA and SCL) using PH4 connectors arranged in GROVE format.

- UART Port: Includes a UART port for sequential data communication, with one set of ports on PB7 (RxD) and PB6 (TxD).

- Motor Driver Circuit: Features a motor driver circuit with 4 channels and LED status indicators, supporting motors from 3V to 12V. It can continuously drive a current of 1.5A per channel, with a maximum of 2A per channel, and includes overcurrent protection.

- Servo Motor Ports: Offers 6 servo motor ports for driving servo motors.

- Speaker: Includes a piezo speaker for generating sound, connected to PB5.

- OLED Display: Features a 1.5-inch OLED display with a resolution of 128 x 64 pixels, capable of displaying graphics and text. It communicates via I2C.

- Push Buttons and Knob: Includes push buttons (OK, SW-A, SW-B) and an adjustable knob (KNOB) for input and testing.

<br><br>
### Our robot wiring diagram 
# **Part 3: Program explaination**

To use the program we must install these program:
- **[Arduino IDE 2.1.1]** : For Programming your Arduino UNO
- **[Pixymon V2]** : For displaying and configuring your Pixy

And these are require library:                                                  

#include  "Mapf.h"

#include  <Servo.h>

#include  <PID_v2.h>

#include  <Pixy2I2C.h>

To install library, you can use library manager in **tools** bar in your Arduino application. But for Pixy library we must download from this website : https://pixycam.com/downloads-pixy2/
Library is require to be able to communicate with servo, sensor, or even some functions.

### Main_program_no_obstacles
https://github.com/Snackels/WRO_Future-Engineer/blob/main/scr/no%20obstacle/Main_no_obj.ino
We will use the ultra sonic sensor to calculate the distance of robot and the wall to not be too close or too far

### Function_no_obstacles
https://github.com/Snackels/WRO_Future-Engineer/blob/main/scr/no%20obstacle/function.ino
The robot will keep on the range with the wall by calculating gyro sensor to steering degree and it will make the robot maintain distance with the wall with PID for short or Proportional Integral Derivative.

### Main_program_obstacles
https://github.com/Snackels/WRO_Future-Engineer/blob/main/scr/obstacle/Main_obj.ino
We use camera, gyro, and ultrasonic to calculate the steering degree.

### Function_obstacles
https://github.com/Snackels/WRO_Future-Engineer/blob/main/scr/obstacle/function.ino
The robot will still use PID but it will add the avoidance degree.
