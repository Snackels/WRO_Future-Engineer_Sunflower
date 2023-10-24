# Documentation for WRO Future Engineer 2023
by Team *Sunflower* 🌻🌻🌻


![]([https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929](http://www2.yothinburana.ac.th/website/images/logo1.png))


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

Designing a good robot is indeed a challenging task as it requires a lot of consideration and planning to ensure it can move swiftly and follow specific rules. One of the primary requirements is that the robot must be a four-wheeled vehicle with one driving axle and one steering actuator, which is why we carefully chose these components. After selecting all the necessary components, we had to figure out how to make them all fit together. For instance, we placed the compass around the middle-top of the robot to get the most accurate output, while the camera was positioned at the back-top to detect objects quickly.

We also included a separate button to start the program quickly and avoid accidentally moving the robot while trying to push the start button. Our robot has two servos, one on the bottom front and one on the top front. The bottom front servo is used to steer the wheel, and we had to remake the front part of the robot because we faced a problem during the national round. The robot was too slim, and when we steered too much, it acted like a brake, making it difficult to maneuver. So, we made the robot slightly larger to prevent this issue.

Finally, we added a top servo that rotates our ultrasonic. Initially, we thought of using two ultrasonics, but we realized that the waves could hit each other, making the received data inaccurate. Therefore, we designed our robot to have a single ultrasonic, which ensured that the data we received was precise. 

Additionally, the rules also said that:

The vehicle's dimensions must not exceed 300x200 mm, with a height limit of 300 mm.
The weight of the vehicle must not exceed 1.5 kilograms.

<br>

### Our robot components

- ## **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Motor.png" width = "400">

### Specification
- Speed: 380 rpm
- Maximum torque : 40 Ncm
- Voltage: 9 v

<br><br>

- ## **Servo** : GEEKSERVO-270  a 180 degree servo.
<image src="https://github.com/LEST0808/POP32ph/blob/main/Servo.png" width = "400">

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
<image src="" width = "400">

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
<image src="https://github.com/LEST0808/POP32ph/blob/main/Bat.png" width = "400">

### Specification
- 2 cells Voltage: 7.4V
- Capacity: 1100mAh 30C
- Can be charged at a current of up to 5 times the capacity (5C)
- Connectors are in a JST type that can be easily disconnected.
<br><br>

- ## **Light Sensor** : Virus III by Design By Sopon
<image src = "https://github.com/LEST0808/POP32ph/blob/main/Virus.png" width = "400">
<br><br>

- ## **Touch Sensor** : ZX-Switch 01 by INEX
<image src = "https://github.com/LEST0808/POP32ph/blob/main/ZX%20switch.png" width = "400">

- ## **GyroCompass** :GY-25

<image src = "https://github.com/LEST0808/POP32ph/blob/main/Gy25%201.png" width = "400">

### Specification
- Measuring range of axes: -180 to +180 degrees
- Resolution: 0.01 degrees Frequency Response: 100HZ (115200bps)
- Operating Current: 15 mA
- Operating Temperature: -20 to 85 °C
<br><br>

- ## **Camera** :Pixy2.0

<image src = "https://github.com/LEST0808/POP32ph/blob/main/Pixy.png" width = "400">

### Specification
- Resolution: 1296 x 976
- Processor: NXP LPC4330
- Cloak speed: 204 MHz
- Ram: 264KB
- Flash: 2 MB
- Framerate: 60 fps
- Connection: USB, UART, SPI, I²C
<br><br>

- ## **Controller** :POP-32 , a 32bit controller
<image src = "https://github.com/LEST0808/POP32ph/blob/main/PoP.png" width = "400">

### Specification
- Microcontroller: Uses a 32-bit STM32F103CBT6 microcontroller with 128KB of flash memory for new programs, which can be programmed up to 10,000 times. It has 20KB of RAM.
- Clock Signal: The clock signal is 20MHz from a ceramic resonator.
- JST 3-Pin Ports: It has JST 3-pin connectors with 11 points for connecting sensors and peripheral devices.
- LED Indicators: Includes LED indicators for power status, low battery alert, and USB port connection status.
- RESET Switch: Features a RESET switch.
- USB Port: Provides a USB port for program downloading and data communication with a computer.
- Power Input: Has a power input port via a screw terminal block that accepts power from 6V to 9V with an on/off switch for power control.
- Battery Compatibility: Designed for use with a maximum of 2-cell lithium polymer batteries (7.4V to a maximum of 8.4V).
- Voltage Regulation: Includes a voltage regulation circuit to supply 3.3V to the microcontroller, OLED display, and main input/output ports.
- Digital and Analog Ports: Offers 9 digital or analog input/output ports, including A0 to A8 (corresponding to PA0 to PA7 and PB0), for receiving external signals.
- I2C Ports: Provides 2 sets of digital ports supporting I2C bus (SDA and SCL) using PH4 connectors arranged in GROVE format.
- UART Port: Includes a UART port for sequential data communication, with one set of ports on PB7 (RxD) and PB6 (TxD).
- Motor Driver Circuit: Features a motor driver circuit with 4 channels and LED status indicators, supporting motors from 3V to 12V. It can continuously drive a current of 1.5A per channel, with a maximum of 2A per channel, and includes overcurrent protection.
- Servo Motor Ports: Offers 6 servo motor ports for driving servo motors.
- Speaker: Includes a piezo speaker for generating sound, connected to PB5.
- OLED Display: Features a 1.5-inch OLED display with a resolution of 128 x 64 pixels, capable of displaying graphics and text. It communicates via I2C.
- Push Buttons and Knob: Includes push buttons (OK, SW-A, SW-B) and an adjustable knob (KNOB) for input and testing.

- ## **Step down** : HW-360 V6.0
<img src = "https://github.com/LEST0808/POP32ph/blob/main/HW316.png" width = "400">

### Specification
- Input voltage: DC 4.0 ~ 38V                                                             
- Output voltage: DC 1.25V ~ 36V continuously adjustable 
- Output current: max 5A, 
- Output power: up to 75W
- Voltmeter error: ± 0.05V
- Measure range: 0 ~ 40V 
- Conversion efficiency: up to 96%
- Load regulation: S (I) ≤ 0.8%
- Voltage Regulation: S (u) ≤ 0.8%

<br><br>
### Our robot wiring diagram 


# **Part 3: Program explanation**

We have developed two programs for our upcoming competition. Each program is designed for a different round - the qualification round and the final round. The first program includes two subprograms that are also included in the program for the final round. Each subprogram is made up of a main program and a function. 

### First Section [qualification round]
In the first section or before void setup in our program, we declare all the libraries and variables that we will be using in the program. The libraries that we use include POP32.h, which is the library for our controller, PID_V2.h, which is for PID (Proportional-Integral-Derivative controller), and Mapf.h, which provides floating-point reading from function mapf() and changes any ADC resolution input reading to any voltage output with mapf_ADC(). The variables declared include Gyro variable, Ultrasonic pin, Light sensor pin, Button pin, and field config that does not represent any pin. These variables will be used in the program later.

 ### Second Section [qualification round]
In the second section, which is void setup, we put the program to 0 or reset the robot to where we want it to be before we run void loop. Next, we declare pinMode to input or output. Inputs are the data we receive, such as ultrasonic data, which checks the wall and returns how far it is from the wall. Outputs are for components such as servos, where we send data out so that the component can perform the action that we send out. However, in this case, the POP32.h library already declares all of those (motor and servo), so we don't have to declare them again. After we reset everything, we put the switch program so that it starts when we push the program. The switch program works in a simple way: when we push the button, the button receives the data (input), and then it starts doing the command we give next.

 ### Third Section [qualification round]
In the third section(void loop), we begin with using some emojis and emoticons. This is an essential part of the program as it can help boost the programmer's brainpower. If you don't believe me, you can take a look at the program. It can be found on line 48 of the code, Link to the program --> "https://github.com/Snackels/WRO_Future-Engineer_Sunflower/blob/main/Robot/Code/no%20obstacle/No-object.ino." The next part involves obtaining data from the IMU, which is similar to fetching data from a compass. However, if you can't locate the 'get_IMU' function in our program, don't be surprised. The coder might have changed its name to 'get_BURRITO' for some inexplicable reason, possibly due to hunger. Now, joking aside, we have the 'motor_and_steer' function in the formula, which looks like this:

#### ((1 * s) * compassPID.Run((pvYaw * s) + ((wall_distance - 25) * 2) * ((float(TURN == 'TURN') - 0.2) * 2)));

In this formula, 's' is actually a variable that multiplies with '1.' What is 's'? It's essentially a numerical value that changes depending on the color of the line the robot detects first. For instance, if it sees a blue line first, the 's' variable becomes -1, making the entire formula negative. You might be wondering why we need this - it's to ensure that the robot faces the same way on both sides.

Now, about 'compassPID,' 'wall_distance,' and 'pvYaw' - they are all components that help the robot stay in the middle of the race field. We multiply 'pvYaw' and 's' together to calculate the precise center of the field. 'pvYaw' represents the robot's position along the x-axis. The compass provides three variables - Yaw, Roll, and Pitch, each representing a different axis. In our case, we're interested in the x-axis, which is why we use 'Yaw.'

Lastly, let's talk about the 'line count' program. This program counts 12 lines and predicts when the robot needs to stop based on a timer. The timer starts counting when the robot crosses the 12th line. And that's it for the 'void loop' function!

### Function [qualification round]
