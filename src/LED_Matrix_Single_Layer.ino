#define b1 22
#define b2 24
#define b3 26
#define b4 28
#define b5 30
#define b6 32
#define b7 34
#define b8 36
#define b9 38
#define b10 40
#define b11 21
#define b12 44
#define b13 46
#define b14 48
#define b15 50
#define b16 52

void off(){
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(b4,LOW);
  digitalWrite(b5,LOW);
  digitalWrite(b6,LOW);
  digitalWrite(b7,LOW);
  digitalWrite(b8,LOW);
  digitalWrite(b9,LOW);
  digitalWrite(b10,LOW);
  digitalWrite(b11,LOW);
  digitalWrite(b12,LOW);
  digitalWrite(b13,LOW);
  digitalWrite(b14,LOW);
  digitalWrite(b15,LOW);
  digitalWrite(b16,LOW);
}

void state1(){
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(b3,HIGH);
  digitalWrite(b4,HIGH);
  digitalWrite(b5,HIGH);
  digitalWrite(b6,LOW);
  digitalWrite(b7,LOW);
  digitalWrite(b8,HIGH);
  digitalWrite(b9,HIGH);
  digitalWrite(b10,LOW);
  digitalWrite(b11,LOW);
  digitalWrite(b12,HIGH);
  digitalWrite(b13,HIGH);
  digitalWrite(b14,HIGH);
  digitalWrite(b15,HIGH);
  digitalWrite(b16,HIGH);
}

void state2(){
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(b4,LOW);
  digitalWrite(b5,LOW);
  digitalWrite(b6,HIGH);
  digitalWrite(b7,HIGH);
  digitalWrite(b8,LOW);
  digitalWrite(b9,LOW);
  digitalWrite(b10,HIGH);
  digitalWrite(b11,HIGH);
  digitalWrite(b12,LOW);
  digitalWrite(b13,LOW);
  digitalWrite(b14,LOW);
  digitalWrite(b15,LOW);
  digitalWrite(b16,LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(b4,OUTPUT);
  pinMode(b5,OUTPUT);
  pinMode(b6,OUTPUT);
  pinMode(b7,OUTPUT);
  pinMode(b8,OUTPUT);
  pinMode(b9,OUTPUT);
  pinMode(b10,OUTPUT);
  pinMode(b12,OUTPUT);
  pinMode(b13,OUTPUT);
  pinMode(b14,OUTPUT);
  pinMode(b15,OUTPUT);
  pinMode(b16,OUTPUT);
}

void loop() {
  state1();
  delay(200);
  state2();
  delay(200);
}
