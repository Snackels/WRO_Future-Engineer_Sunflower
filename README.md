# The best of the best Documentation for WRO Future Engineer 2023 in the entire multiverse 😆😆
by Team *YBR-GPA4.0* (The name was inspired by our first letter of our nickname, So it G stand for Gain, A stand for Atom, and we think that it will sound better if we add P so its mean Grade per attitude.)


![](https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929)


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

Designing a robot is sometimes difficult. We need to design every part we intend to use, making it small, lightweight, fast, and effective. If it's too heavy, the robot will be slower. If it's too big, evading obstacles will be challenging. If it's ineffective, it won't be able to detect walls, obstacles, or walk properly. That's why we need to balance the robot, keeping it not too heavy, small, and fast to accomplish its mission.

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

The ultrasonic sensor plays a crucial role in guiding the robot's navigation by detecting distances between the robot and obstacles. This enables the robot to skillfully avoid walls in its path.
<br><br>

- **7.4 voltage Lipo-Battery** : 7.4 voltage 2 cell Lipo-Battery.
<image src="https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/3e07fe06-67d6-42c9-b6bc-7b74ce8ed4a2.png" width = "400">

The power source for our robot. This battery is the Lithium Polymer type, normally we use at 8.3 and recharge at 7.2 to save the battery life and for safety
<br><br>

- **Controller** : Arduino UNO
<image src= "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/dc87b47a-040f-46f3-abf0-2871e494e817.png" width = "400">

The Arduino UNO controller acts as the pivotal point where we upload our robot's program, effectively functioning as the brain of our creation
<br><br>

- **Extension Board** : Arduino Sensor Shield V5.0 and Shield L298P Motor Driver with GPIO

(This is Sensor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/7daea972-eb14-4f4b-a7fa-51d35aa0b2af.png" width = "400">

(This is Motor-Shield)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/86a15f9b-dd0d-4367-aeed-81c72b622e60.png" width = "400">

Both of these shields serve a similar purpose by offering additional ports that enable our robot to connect with motors, sensors, and batteries. 
<br><br>

- **Light Sensor** : Blue light sensor from INEX, Red light sensor from Design By Sopon

(blue sensor)

<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/a3c43af5-2394-4fa1-a570-c3f70362796d" width = "400">

 (red sensor)
 
<image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/c3e92edd-0ece-4372-a2be-4aa417b8ce14.png" width = "400">

Light sensors play a crucial role in helping robots know where to stop and give order to other component. But what's interesting is that we use two different colors for these lines: red and blue. This choice lets the robot not only see the lines but also figure out whether they are red or blue. This extra bit of information helps the robot know how many times it have orbit around the race field, making it smarter and better equipped for the race.
<br><br>

- **GyroCompass** :gy-25

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/0a7b5f42-313d-4249-b86b-bdcaad4175f5.png" width = "400">

This component equips the robot with the ability to discern its current orientation, thereby enabling it to determine the appropriate direction for turning.
<br><br>

- **Camera** :Pixy2.0

  <image src = "https://github.com/Snackels/WRO_Future-Engineer/assets/92850241/ea42d632-7cc2-4c4f-b491-2879ae6f25ec.png" width = "400">

The camera serves the purpose of identifying color blocks (obstacles) and transmitting corresponding signals to the robot. For instance, upon detecting a red block, it instructs the robot to veer to the right. Conversely, when a green block is detected, it signals the robot to navigate towards the left, but if it doesn't detect any color it will go forward. 
<br><br>
### Our robot wiring diagram 
# **Part 3: Program explaination**

### Main_program_no_obstacles
### Function_no_obstacles
### Main_program_obstacles
### Function_obstacles
