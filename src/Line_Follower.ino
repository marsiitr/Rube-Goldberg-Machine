#include<SoftwareSerial.h>
int kp=15;                      
int kd=10;
int baseSpeed=50;
int maxSpeed=75;
int serialEn=2;
int pwm1=6;                     
int dir1=12;                  // Motor 1 direction
int pwm2=5;
int dir2=3;                   // Motor 2 direction
int base=35;
int pos;                      // Position detected by the LSA

SoftwareSerial SoftSerial(8, 7);

void setup() {
  pinMode(pwm1, OUTPUT);
  digitalWrite(serialEn,HIGH);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,HIGH);
  pinMode(pwm2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT); 
  pinMode(serialEn,OUTPUT);  
  SoftSerial.begin(38400);
  Serial.begin(38400); 
}

int lastError = 0;    

void loop() {
  digitalWrite(serialEn,LOW);
  Serial.println("abcd");
  while(!SoftSerial.available()){
    //Serial.println("abcd");
  }
while(SoftSerial.available()){
  pos=SoftSerial.read();
  Serial.println(pos);
}

if(pos == 255) {
  analogWrite(pwm1,0);
  analogWrite(pwm2,0);
}
else {
    int error = pos - base;   
    int motorSpeed = kp * error + kd * (error - lastError);   
    lastError = error;    
    int rightMotorSpeed = baseSpeed - motorSpeed;
    int leftMotorSpeed = baseSpeed + motorSpeed;
    if(rightMotorSpeed > maxSpeed) rightMotorSpeed = maxSpeed; 
    if(leftMotorSpeed > maxSpeed) leftMotorSpeed = maxSpeed;
    if(rightMotorSpeed < 0) rightMotorSpeed = 0;
    if(leftMotorSpeed < 0) leftMotorSpeed = 0;
    analogWrite(pwm2,rightMotorSpeed);
    analogWrite(pwm1,leftMotorSpeed);
    Serial.println(pos);
  }
}
