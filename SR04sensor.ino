#include <Servo.h>
int Trigpin = 2;
int Echopin = 3;
Servo myserv;

void setup() {
  // put your setup code here, to run once:
  myserv.attach(9);
  Serial.begin(9600);
  pinMode(Trigpin,OUTPUT);
  pinMode(Echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW); 
  delayMicroseconds(2); 
  digitalWrite(2, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(2, LOW); 
  float cm = pulseIn(3, HIGH) / 58.00;
  Serial.println(cm);
  if (cm < 10){
    myserv.write(160);
    delay(2000);
    myserv.write(20);
  }
  else{
    myserv.write(20);
  }
}
