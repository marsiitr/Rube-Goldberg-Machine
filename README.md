<p align="justify">
  <h1>Rube-Goldberg-Machine</h1>
  <h2>Srishti 2020</h2>
</p>

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/LED_Matrix.jpg" alt="LED Matrix">
  <i>LED Matrix</i>
</p>

<p align="justify">
  <h2>Abstract</h2>
  <p>A Rube Goldberg Machine is a contraption intentionally designed to perform a simple task in an indirect and overly complicated way. The aim of this project is to depict the life of a college student through a similar complex assembly of mechanical and electronic components linked with each other creating a metaphor between humans and machines.</p>
</p>

<p align="justify">
  <h2>Motivation</h2>
  <p>College life may seem to be full of excitement and surprises for a layman, but little do he know of the struggles that the student had to face to reach that milestone and the difficulties that are masked by the brand college name. So our team of 5 freshers decided to cover the important moments of the journey beginning with exams to the major events of 1st year and what we think is to come next for us. We attempt to display it in a visually appealing format making use of our mechanical and electronics expertise.</p>
</p>

<p align="justify">
  <h2>Workflow</h2>
</p>

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Flowchart.png" alt="Flowchart">
  <i>Schematic Flow Chart of the Machine</i>
</p>

<p align="justify">
  
* The entire project is divided into 8 major elements depicting a distinct phase in the life of a student who is represented by spherical balls of different sizes. 

* The Tower of Exams(Inclined Pathway) illustrates the ups and downs, successes, and failures in each of the competitive exams. 

* The First LDR Gate represents the path to the major JEE Exam after which students seek admission to colleges through counselling and finally enter college after years of hard work.

* Similar to the biped bot, the students stumble here and there in the college exploring various things and then comes the first major college cultural fest of their lives, THOMSO, depicted using LED Cube. 

* Entering the next semester, students are overwhelmed with all the campus groups releasing recruitment notices.

* After this stressful and dilemmatic process comes the adventurous trip which is depicted by the bridge (Lakshman Jhula,  Rishikesh). 

* Next comes the second semester’s Mid-Term Examinations and following End-Term Examinations which is well shown by the Trivision Billboard. 

* Summer breaks are depicted by the Ball lifting mechanism and the journey goes on for the next and their next batch of freshers as our Rube Goldberg machine works in a loop.

</p>

<p align="justify">
  <h2>Mechanical Aspect of the Design</h2>
  <p>Rubber balls 3 of radius 2.5 cm and 3 of radius 3 cm each are used to denote the students.<br>The following steps help one understand the journey by providing a mechanical description of every component:<br>
  
* **Tower of Exams:** A vertical assembly of MDF towers inter-connected via loophole paths describes the difficult journey before getting into IIT.
<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Mechanical%20Design/Inclined%20Pathway/Inclined_Pathway_Cad.png" alt="Tower of Exams"><br>
  <i>Tower of Exams</i>
</p>
  
* A smooth MDF path transitions into the LDR Gate triggering the **Line-following car**. Running on a parallel track is another MDF platform taking each ball to the chain lift.
  </p>

  <p align="center">
    <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Line_Following_Car.png" alt="Line Following Car"><br>
    <i>Line Following Car</i>
  </p>

  <p>
 * Line-follower traverses through the loop and then triggers the Biped Bot.
  
 * **Biped bot** is a working prototype of a two-legged robot built with an assembly of 3 acrylic pulleys linked with elastic bands and 6mm steel rods, propelled by using a simple DC motor. It mounts an Arduino Uno on one side used to control the motor via a motor driver.
  </p>

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Mechanical%20Design/Biped%20Bot/Biped_Cad.PNG" alt="Biped Bot"><br>
  <i>Biped Bot</i>
</p>

<p>
  
* Biped Bot passes through the LDR gate triggers the LED Matrix.

* Meanwhile, the balls approach the **Group Recruitment Phase** where they pass through a series of loopholes and get segregated as per their size.

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Mechanical%20Design/Group%20Recruitment/Group_Recruitment_Cad.PNG" alt="Group Recruitment Phase"><br>
  <i>Group Recruitment Phase</i>
</p>

* The balls then trigger the final LDR gate activating the **Tri-Vision Billboard**.It is an assembly of 3 triangular prism-shaped boxes made using MDF and L-brackets mounted on a gear each through steel shafts held in place using a Plywood base and are free to rotate about its axis. A stepper motor is coupled with a driving gear, which transmits the actuation to all the three parts of the billboard, also employing two idler gears, so that all the prisms rotate in the same direction and in phase with each other. The gears and the base have been carefully 3d printed in the Tinkering Lab. [Reference](https://www.youtube.com/watch?v=uCx9riKxTvY&feature=youtu.be) (Heavily modified from the mentioned reference).
</p>

![Trivision Bill Board](https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Mechanical%20Design/Trivision%20Bill%20Board/Trivision_Cad2.png) ![Gear 3D print](https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Trivision_Gears_3d_print.png)

<p>
  
* In the end, a **chain lift mechanism** lifts the balls back to level 1. The mechanism uses a 48-inch ladder chain and sprockets powered by a 12V DC motor. [Reference](https://www.youtube.com/watch?v=E2Yy66IbVuw&feature=youtu.be)
</p>
</p>

<p align="justify">
  <h2>Electronics Aspect of the Design</h2>
  <h3>Microcontroller</h3>
  <p>Arduino Uno 2560 R3 is used as the microcontroller board in each of the bots.</p>
  <h3>Hardware Architecture of the Line Following Car</h3>
</p>

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

<p align="justify">
  <h3>LSA08 Settings:</h3>
  <p>LINEMODE: Dark-ON detecting black line in white background.
  
  THRESHOLD: 7
  
  JUNCTION WIDTH: 8
  
  LSA gives 1 byte output data ranging from 0-70 with 35 being the base level.
  
  <h3>Working Principle</h3>
</p>

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Line.png" alt="LSA Sensor Logic"><br>
  <i>LSA Sensor Logic</i>
</p>

<p align="justify">
  <p>The car remains stable and follows the straight line if Level=35.
  For Level<35 : Speed of the left motor increases such that it comes back on track by moving to the right.
  For Level>35 : Speed of the right motor increases such that it comes back on track by moving to the left.</p>
    <h3>PID</h3>
    <p>PID is short for proportional, integral, and derivative. The PID is used to correct the error of the bot while traversing.
The correction value is given as

Correction = kp(error) + kd(error- previous_error)
<h3>Biped Bot</h3>
<p>A DC motor interconnected to three pulleys using bands which is responsible for the movement of a bipedal bot was driven by a motor driver which is connected to the Arduino Uno, battery, and also to HC-05 (which is used to pair Bluetooth) through a common ground. HC - 05 is also connected to the Arduino Uno through which the instructions given from the phone via Bluetooth can be transmitted to the Arduino Uno and so to the Motor Driver. The speed of the motor and direction can be controlled using the Bluetooth module.</p>

<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Bluetooth_Module.png" alt="Biped Bluetooth Module Connections"><br>
  <i>Biped Bluetooth Module Connections</i>
</p>
<h3>LED Matrix</h3>
<p>It is a cube matrix built using 64 Light Emitting Diodes(LEDs, blue coloured) carefully soldered, and is capable of displaying various patterns as per the code fed into it.</p>
<h3>Trivision Billboard</h3>
<p>Uses a stepper motor to control the movement of the steel shafts about its axis controlled through the L298A motor driver.</p>
<h3>Chain Lift</h3>
<p>Uses a 12V DC Gear motor to rotate the chain vertically stabilized via sprockets.</p>
<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/Chain_Lift.png" alt="Chain Lift"><br>
  <i>Chain Lift</i>
</p>
<h3>LDR Gate</h3>
<p>A simple setup of an LDR along with an Arduino Uno board is used to trigger elements in various places throughout the loop.</p>
<p align="center">
  <img src="https://github.com/prady39/Rube-Goldberg-Machine/blob/master/Images%20and%20Videos/Images/LDR.png" alt="LDR"><br>
  <i>LDR Connections</i>
</p>
<h3>Motor Driver</h3>
<p>We have used the Cytron MDD10A and L298A motor drivers. MDD10A is a dual-channel version of the MDD10C. Like MDD10C, MDD10A also supports locked-antiphase and sign-magnitude PWM signal.</p>
</p>

<p align="justify">
  <h2>Cost Structure</h2>
</p>


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
|Total Cost|    | 20300  |

<p align="justify">
  <h2>Applications</h2>
  <p>The project succeeds in providing a visual description of a student's life.</p>
  <h2>Limitations</h2>
  <p>
  
* Some of the systems are not mechanically and electronically robust. For eg: The platforms used to carry the balls are hand-crafted and hence prone to obstruct the paths.

* Although an attempt was made to automate all the things and create a loop, several phases in the project still require manual handling. For eg: We need to collect the balls sorted and collected in the group recruitment phase and place them back in the starting point.

* Due to the Covid-19 pandemic, the actual Srishti event got cancelled. This created the most terrible impact as our team could not manufacture some of the parts like the chain lift mechanism. 
</p>
<h2>Future Improvement</h2>
<p>
  
* Manufacture the remaining components and make the project display-ready.

* Include several components for automating the process. A Ball-collecting bot making use of OpenCV for ball detection can be made to address this issue. It will significantly help to reduce the amount of manual work required to make the platforms.
</p>
<h2>Team Members</h2>
<p>
  
* [Pradnesh Chavan](https://github.com/prady39)
* [Rohit Kulkarni](https://github.com/roku01)               
* [Shruti Gour](https://github.com/ShrutiGour)
* [Shubham Kumar](https://github.com/shubhamr2701)
* [Stuti Lilani](https://github.com/stuts23)
  
</p>
<h2>Mentors</h2>
<p>
  
- [Kshitij Bithel](https://github.com/KSHITIJBITHEL)
- Tabish Madni
- [Yashutosh Bansal](https://github.com/yashutoshbansal)

</p>
<h2>References</h2>
<p>
  
- [Chain Lift](https://www.youtube.com/watch?v=E2Yy66IbVuw&feature=youtu.be)
- [Tri Vision Bill Board](https://www.youtube.com/watch?v=uCx9riKxTvY&feature=youtu.be)
- [Bluetooth Module](https://roboindia.com/tutorials/motor-control-with-bluetooth-module-hc-05/)
- [Line Follower Simulation](https://www.youtube.com/watch?v=vfwxKjOr-7o)
- [Line Following Car](https://tutorial.cytron.io/2015/07/31/line-following-robot-using-lsa08-serial-mode-digital-output/)

</p>


