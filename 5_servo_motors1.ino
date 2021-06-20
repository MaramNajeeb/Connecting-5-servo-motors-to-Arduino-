// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
int R1=0,R2=0,R3=0,R4=0,R5=0;
int R11=0,R22=0,R33=0,R44=0,R55=0;
int ang=0;


Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;


void setup()
{
  motor1.attach(6); // pin number
  motor2.attach(5);
  motor3.attach(4);
  motor4.attach(3);
  motor5.attach(2);


}

void loop()
{
  //_______ Task 1 _______
  
  for (ang=0;ang<=90;ang+=1){
     
    motor1.write(ang);
    motor2.write(ang);
    motor3.write(ang);
    motor4.write(ang);
    motor5.write(ang);
    delay(15);
  }
  for (ang=90;ang>=0;ang-=1){
    motor1.write(ang);
    motor2.write(ang);
    motor3.write(ang);
    motor4.write(ang);
    motor5.write(ang);
    delay(15);
  }
 
  
  // _______ Task 2 _______
  /*
  R1=analogRead(A4); //read the value from the Potentiometer
  R2=analogRead(A3);
  R3=analogRead(A2);
  R4=analogRead(A1);  
  R5=analogRead(A0);
  
  R11=map(R1,0,1023,0,180); //servo can only rotate b/t 0 and 180 degrees
  R22=map(R2,0,1023,0,180);
  R33=map(R3,0,1023,0,180);
  R44=map(R4,0,1023,0,180);
  R55=map(R5,0,1023,0,180);
    
    motor1.write(R11);
    motor2.write(R22);
    motor3.write(R33);
    motor4.write(R44);
    motor5.write(R55);
  
  delay(500);*/

  }