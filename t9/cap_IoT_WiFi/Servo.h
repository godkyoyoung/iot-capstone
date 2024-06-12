#include<Servo.h> 

Servo myServo;      

void setup() 
{
  myServo.attach(9); 
}

void loop() 
{
  for(int angle=0; angle<180; angle++)
  {
    myServo.write(angle);
    delay(100);
  } 
}