#include <Stepper.h>
const int stepsPerRevolution =120;
Stepper myStepper (stepsPerRevolution,8,9,10,11);
int stepCount = 0;



void setup()
{

  Serial.begin(9600);
           
  
}

void loop()
{
  
 int sensorReading=analogRead(A0);
 int motorSpeed =map(sensorReading,0,1023,0,250);
  if (motorSpeed >0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution /100);
    Serial.println(sensorReading);
  
  
  }
      }
