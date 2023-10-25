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
