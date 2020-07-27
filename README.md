# Rube Goldberg Machine (Srishti 2020)

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/LED_Matrix.jpg" alt="LED Matrix">
  <i>LED Matrix</i>
</p>


## Abstract
A Rube Goldberg Machine is a contraption intentionally designed to perform a simple task in an indirect and overly complicated way. The aim of this project is to depict the life of a college student through a similar complex assembly of mechanical and electronic components linked with each other creating a metaphor between humans and machines.

## Motivation
College life may seem to be full of excitement and surprises for a layman, but little do he know of the struggles that the student had to face to reach that milestone and the difficulties that are masked by the brand college name. So our team of 5 freshers decided to cover the important moments of the journey beginning with exams to the major events of 1st year and what we think is to come next for us. We attempt to display it in a visually appealing format making use of our mechanical and electronics expertise.

## Workflow

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Flowchart.png" alt="Flowchart">
  <i>Schematic Flow Chart of the Machine</i>
</p>

* The entire project is divided into 8 major elements depicting a distinct phase in the life of a student who is represented by spherical balls of different sizes. 

* The Tower of Exams(Inclined Pathway) illustrates the ups and downs, successes, and failures in each of the competitive exams. 

* The First LDR Gate represents the path to the major JEE Exam after which students seek admission to colleges through counselling and finally enter college after years of hard work.

* Similar to the biped bot, the students stumble here and there in the college exploring various things many of which are new to them and then comes the first major college cultural          
  fest of their lives, THOMSO, depicted using LED Cube. The matrix laden with its bright colors succeeds in depicting the aura of the fest. 

* Entering the next semester, students are overwhelmed with all the groups releasing recruitment notices. This period involves a lot of stress and confusion, but it is fun                         
  nevertheless. 

* After this stressful and dilemmatic process comes the adventurous trip which is depicted by the bridge (Lakshman Jhula,  Rishikesh). 

* Next comes the second semester’s Mid-Term Examinations and following End-Term Examinations which is well shown by the Trivision Billboard. 

* Then we all head back to our respective hometowns for spending the summer breaks that is depicted by the Ball lifting mechanism and the journey goes on for the next and their next        
  batch of freshers as our Rube Goldberg machine works in a loop.

## Mechanical Aspect of the Design
Rubber balls 3 of radius 2.5 cm and 3 of radius 3 cm each are used to denote the students.
The following steps help one understand the journey by providing a mechanical description of every component:
* **Tower of Exams:** A vertical assembly of MDF towers inter-connected via loophole paths describes the difficult journey before getting into IIT.
* A smooth MDF path transitions into the LDR Gate triggering the **Line-following car**. Running on a parallel track is another MDF platform taking each ball to the chain lift.

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Line_Following_Car.png" alt="Line Following Car"><br>
  <i>Line Following Car</i>
</p>

* Line-follower traverses through the loop and then triggers the Biped Bot.
* **Biped bot** is a working prototype of a two-legged robot built with an assembly of 3 acrylic pulleys linked with elastic bands and 6mm steel rods, propelled by using a simple DC motor. It mounts an Arduino Uno on one side used to control the motor via a motor driver.

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Biped_Cad.PNG" alt="Biped Bot"><br>
  <i>Biped Bot</i>
</p>

* Biped Bot passes through the LDR gate triggers the LED Matrix.
* Meanwhile, the balls approach the **Group Recruitment Phase** where they pass through a series of loopholes and get segregated as per their size.
* Balls then trigger the final LDR gate activating the **Tri-Vision Billboard**.It is an assembly of 3 triangular prism-shaped boxes made using MDF and L-brackets mounted on a gear each through steel shafts held in place using a Plywood base and are free to rotate about its axis. A stepper motor is coupled with a driving gear, which transmits the actuation to all the three parts of the billboard, also employing two idler gears, so that all the prisms rotate in the same direction and in phase with each other. The gears and the base have been carefully 3d printed in the Tinkering Lab. [Reference](https://www.youtube.com/watch?v=uCx9riKxTvY&feature=youtu.be) (Heavily modified from the mentioned reference).

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Trivision_Cad.PNG" alt="Trivision Bill Board"><br>
  <i>Trivision Bill Board</i>
</p>

* In the end, a **chain lift mechanism** lifts the balls back to level 1. The mechanism uses a 48-inch ladder chain and sprockets powered by a 12V DC motor. [Reference](https://www.youtube.com/watch?v=E2Yy66IbVuw&feature=youtu.be)

## Electronics Aspect of the Design

### Microcontroller
Arduino Uno 2560 R3 is used as the microcontroller board in each of the bots.

### Hardware Architecture of the Line Following Car

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Line_Follower_Without_LSA.jpg" alt="Connections without the LSA"><br>
  <i>Connections without the LSA</i>
</p>

### LSA Connections to Arduino
| LSA08 pin | Arduino Uno board |
|:-----:|:------------------:|
| 1 | RX (pin 0) |
| 2 | TX (pin 1)|
| 3 | Digital (pin 2) |
| 4 | Not Used |
| 5 | Digital (pin 4)|
| 6 | Not Used |
| 7 | Not Used|
| 8 | Not Used |
| 9 | Vin |
| 10 | GND |

### LSA08 Settings:
LINEMODE: Dark-ON detecting black line in white background.
THRESHOLD: 7
JUNCTION WIDTH: 8
LSA gives 1 byte output data ranging from 0-70 with 35 being the base level.

### Working Principle

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Line.png" alt="LSA Sensor Logic"><br>
  <i>LSA Sensor Logic</i>
</p>

The car remains stable and follows the straight line if Level=35.
For Level<35 : Speed of the left motor increases such that it comes back on track by moving to the right.
For Level>35 : Speed of the right motor increases such that it comes back on track by moving to the left.

### PID
PID is short for proportional, integral, and derivative. The PID is used to correct the error of the bot while traversing.
The correction value is given as

Correction = kp(error) + kd(error- previous_error)


### Biped Bot
A DC motor interconnected to three pulleys using bands which is responsible for the movement of a bipedal bot was driven by a motor driver which is connected to the Arduino Uno, battery, and also to HC-05 (which is used to pair Bluetooth) through a common ground. HC - 05 is also connected to the Arduino Uno through which the instructions given from the phone via Bluetooth can be transmitted to the Arduino Uno and so to the Motor Driver. The speed of the motor and direction can be controlled using the Bluetooth module.

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Bluetooth_Module.png" alt="Biped Bluetooth Module Connections"><br>
  <i>Biped Bluetooth Module Connections</i>
</p>

### LED Matrix
It is a cube matrix built using 64 Light Emitting Diodes(LEDs, blue coloured) carefully soldered, and is capable of displaying various patterns as per the code fed into it.

### Trivision Billboard
Uses a stepper motor to control the movement of the steel shafts about its axis controlled through the L298A motor driver.

### Chain Lift
Uses a 12V DC Gear motor to rotate the chain vertically stabilized via sprockets.

### Motor Driver
We have used the Cytron MDD10A and L298A motor drivers. MDD10A is a dual-channel version of the MDD10C. Like MDD10C, MDD10A also supports locked-antiphase and sign-magnitude PWM signal.

## Cost Structure

| Components | Quantity | Cost (in INR) |
|:----------------------------------:|:-------:|:------------:|
| Auto-Calibrating Line Sensor LSA08 | 1 | 5000 |
| Arduino Uno Rev3 | 5 | 2000 |
| Digital LDR Module | 4 | 400 |
| LED | 64 | 100 |
| Cytron Dual Channel Enhanced 13Amp DC Motor Driver | 4 | 8000 |
| LiPo Battery 11.1V | 5 | 1500 |
| Motor Bracket | 2 | 200 |
| DC Motor | 1 | 300 |
| Stepper Motor | 1 | 500 |
| HC-05 | 1 | 300 |
| 48 inch Stainless Steel Ladder Chain | 1 | 1000 |
|Other components|    | 1000  |

Total Cost - 21500

## Aplications
The project succeeds in providing a visual description of a student's life.

## Limitations
* Some of the systems are not mechanically and electronically robust. For eg: The platforms used to carry the balls are hand-crafted and hence prone to obstruct the paths.
* Although an attempt was made to automate all the things and create a loop, several phases in the project still require manual handling. For eg: We need to collect the balls sorted and collected in the group recruitment phase and place them back in the starting point.
* Due to the Covid-19 pandemic, the actual Srishti event got cancelled. This created the most terrible impact as our team could not manufacture some of the parts like the chain lift mechanism. 

## Future Improvement
* Manufacture the remaining components and make the project display-ready.
* Include several components for automating the process. A Ball-collecting bot making use of OpenCV for ball detection can be made to address this issue. It will significantly help to reduce the amount of manual work required to make the platforms.

## Team Members
* [Pradnesh Chavan](https://github.com/prady39)
* [Rohit Kulkarni](https://github.com/roku01)               
* [Shruti Gour](https://github.com/ShrutiGour)
* [Shubham Kumar](https://github.com/shubhamr2701)
* [Stuti Lilani](https://github.com/stuts23)

### Mentors
- [Kshitij Bithel](https://github.com/KSHITIJBITHEL)
- Tabish Madni
- [Yashutosh Bansal](https://github.com/yashutoshbansal)

### References
- [Chain Lift](https://www.youtube.com/watch?v=E2Yy66IbVuw&feature=youtu.be)
- [Tri Vision Bill Board](https://www.youtube.com/watch?v=uCx9riKxTvY&feature=youtu.be)
- [Bluetooth Module](https://roboindia.com/tutorials/motor-control-with-bluetooth-module-hc-05/)
- [Line Follower Simulation](https://www.youtube.com/watch?v=vfwxKjOr-7o)
- [Line Following Car](https://tutorial.cytron.io/2015/07/31/line-following-robot-using-lsa08-serial-mode-digital-output/)




