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

- Design process
- Program explaination
- Team photos
- Vehicle photos
- Link to our work

<br><br><br><br>

# **Part 1: About our team**
This team include 2 member. 

1st member is Mr.Vorawet Narkglom ,15 years old, who is grade 10 and study at Yothinburana School English Program. The main programmer and the mechanic of our team

2nd member is Mr.Vichaiwat Koonsap ,15 years old, a grade 10 and currently studying at Yothinburana School in the Regular Program. The co-Programmer and the main mechanic of our team.


We both had been participating a lot of competition in Thailand and in the International stage.


# **Part 2: Design process**
### The Robot

Designing a robot is sometimes difficult. We need to design every part we intend to use, making it small, lightweight, fast, and effective. If it's too heavy, the robot will be slower. If it's too big, evading obstacles will take a lot of space. If it's ineffective, it won't be able to detect walls, obstacles, or walk properly. That's why we need to balance the robot, keeping it not too heavy, small, and fast to accomplish its mission.

For this competition, there are rules regarding robot design, which include a requirement that the vehicle must be a four-wheeled vehicle with one driving axle and one steering actuator of any type. The use of a camera is highly recommended due to the mission's nature.

Additionally, the rules also said that:

The vehicle's dimensions must not exceed 300x200 mm, with a height limit of 300 mm.
The weight of the vehicle must not exceed 1.5 kilograms.

<br>

### Our robot components

- **Driving motor** : Power functions Large-motor made by LEGO™.
<image src="https://www.lego.com/cdn/cs/set/assets/blt3289051a0e80fa54/88003.jpg?fit=bounds&format=jpg&quality=80&width=1500&height=1500&dpr=1" width = "400">

A fast and incredibly user-friendly motor. Just a few minutes of soldering the wires, and we are ready to use it. Among all the motors, we chose this one because it is neither too fast nor too slow, and it is quite easy to attach to the robot frame. It can be adjusted for Lego and Arduino by soldering.
<br><br>

- **Steering Servo** : GEEKSERVO-270  a 180 degree servo.
<image src="https://thepihut.com/cdn/shop/products/geekservo-building-brick-180-rotation-block-servo-geekservo-104134-28717056917699_1000x.jpg?v=1646869335" width = "400">

We chose this servo because it is pretty easy to attach to our robot frame and got the right degree we needed to use for steering which is 180 degree.
<br><br>

- **Servo** : GEEKSERVO building Brick Compatible 180 degree rotation servo.
<image src="https://inex.co.th/home/wp-content/uploads/2020/11/KSERVO-270-0.jpg" width = "400">

We chose this servo because it has 180 degree rotation that is perfect for rotating the **Ultra sonic sensor** and it fit perfectly in our robot.
<br><br>

- **Ultra sonic sensor** : Gravity URM 09 ultrasonic distance sensor.
<image src="https://robotools.in/wp-content/uploads/2022/10/DFRobot-Gravity-URM09-Analog-Ultrasonic-Sensor-5-1-1200x900.jpg" width = "400">

The ultrasonic sensor plays a crucial role in guiding the robot's navigation by detecting distances between the robot and obstacles. This enables the robot to skillfully avoid walls in its path. But to use the sensor we need to attach at the right position not too high and make it right turning degree
<br><br>

- **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/4b0e6cb0-ba45-4377-bb51-b34038d68638.png" width = "400">

The power source for our robot. This battery is the Lithium Polymer type, normally we use at 8.3 and recharge at 7.2 to save the battery life and for safety
<br><br>

- **Controller** : Arduino UNO
<image src= "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/1aa8ad01-aed2-400d-bedc-cf12a5509554.png" width = "400">

The Arduino UNO controller acts as the pivotal point where we upload our robot's program, effectively functioning as the brain of our creation
<br><br>

- **Extension Board** : Arduino Sensor Shield V5.0 and Shield L298P Motor Driver with GPIO

(This is Sensor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/8bca8501-e413-4c90-b3cd-c1d8a952c01f.png" width = "400">

(This is Motor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/a4035997-f954-492f-9825-8ec2eba8713b.png" width = "400">

Both of these shields serve a similar purpose by offering additional ports that enable our robot to connect with motors, sensors, and batteries. 
<br><br>

- **Light Sensor** : Blue light sensor from INEX, Red light sensor from Design By Sopon

(blue sensor)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/950eeb1d-ead4-4641-aa64-07414d3dd939.png" width = "400">

 (red sensor)
 
<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/b7f66634-942b-4f5c-b01d-777ba5d78d62.png" width = "400">

Light sensors play a crucial role in helping robots know where to stop and give order to other component. But what's interesting is that we use two different colors for these lines: red and blue. This choice lets the robot not only see the lines but also figure out whether they are red or blue. This extra bit of information helps the robot know how many times it have orbit around the race field, making it smarter and better equipped for the race.
<br><br>

- **GyroCompass** :gy-25

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/ed4a0af9-6420-498d-9d8f-a17c8bb455b0.png" width = "400">

This component equips the robot with the ability to discern its current orientation, thereby enabling it to determine the appropriate direction for turning.
<br><br>

- **Camera** :Pixy2.0

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/bf7a29f9-a2cf-4b85-a056-3f12b4e75966.png" width = "400">

The camera serves the purpose of identifying color blocks (obstacles) and transmitting corresponding signals to the robot. For instance, upon detecting a red block, it instructs the robot to veer to the right. Conversely, when a green block is detected, it signals the robot to navigate towards the left, but if it doesn't detect any color it will go forward. 
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
