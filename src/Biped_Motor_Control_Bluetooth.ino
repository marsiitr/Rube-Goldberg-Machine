#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(5, 6);    // (TXD, RXD) of HC-06
char BT_input;                    // To store input character received via BT.
int motorPin1 = 8;                // Pin 2 on L293D IC
int motorPin2 = 9;                // Pin 7 on L293D IC

void setup() {
  BlueTooth.begin(9600);  
  Serial.begin(9600);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  if (BlueTooth.available()) {
   BT_input=BlueTooth.read();
    if (BT_input=='s') {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, LOW);    
      Serial.println("Motor is Off");
    }
    else if (BT_input=='b') {
      digitalWrite(motorPin1, LOW);   
      digitalWrite(motorPin2, HIGH);  
      Serial.println("Motor is rotating left");
    }
    else if (BT_input=='f') {
      digitalWrite(motorPin1, HIGH); 
      digitalWrite(motorPin2, LOW); 
      Serial.println("Motor is rotating right");
    }
   else if (BT_input=='r') {
      digitalWrite(motorPin1, HIGH); 
      digitalWrite(motorPin2, LOW); 
      Serial.println("Motor is rotating right");
    }
    else if (BT_input=='l') {
      digitalWrite(motorPin1, LOW); 
      digitalWrite(motorPin2, HIGH);     
      Serial.println("Motor is rotating Left");
    }
  }
}
