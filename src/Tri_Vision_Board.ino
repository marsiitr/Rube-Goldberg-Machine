#include<Stepper.h>
#define out 51
#define s2 52
#define s3 53
int red=0,blue=0,green=0;
const int spr=200;
Stepper S(spr,22,24,26,28);

void color()
{
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);

  red=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
  digitalWrite(s3,HIGH);
  blue=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
  digitalWrite(s2,HIGH);
  green=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
}

void motor(int k)
{
  Serial.print(k);
  Serial.print(" ");
  Serial.print(spr/3);
  Serial.print("\n");
  if(k==1)            //red
  {
    S.step(spr/6);
    delay(500);
    S.step(-spr/6);
    return;
  }
  else if(k==2)   //blue
  {
    S.step(spr/2);
    delay(500);
    S.step(-spr/2);
    return;
  }
  else if(k==3)  //green
  {
    S.step(-spr/6);
    delay(500);
    S.step(spr/6);
    return;
  }
  else
    return;
  
}

void setup() {
 S.setSpeed(60);
 Serial.begin(9600);
 pinMode(s2,OUTPUT);
 pinMode(s3,OUTPUT);
 pinMode(out,INPUT);
}

void loop() {
  int k=0;
  color();
 Serial.print("Red = ");
 Serial.print(red,DEC);
 Serial.print("Blue = ");
 Serial.print(blue,DEC);
 Serial.print("Green = ");
 Serial.print(green,DEC);
 Serial.print("\n");

if(blue<red && blue<green )
{
  Serial.print("BLUE");
  k=2;
}
else if(green<red && green <blue )
{
  Serial.print("GREEN");
  k=3;
}
else if(red<green && red<blue )
{
  Serial.print("RED");
  k=1;
}
else
 Serial.print("PROBLEM"); 
  Serial.print("\n");
  motor(k);
  k=0;
delay(2000);
}
