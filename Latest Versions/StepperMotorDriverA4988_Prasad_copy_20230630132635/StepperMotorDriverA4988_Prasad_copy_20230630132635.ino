// Define pin connections & motor's steps per revolution
const int dirPin = 2;
const int stepPin = 3;
const int stepsPerRevolution = 200;
int numberOfCycles = 10; // Number of cycles wanted
int cyclesDone = 0; // Counter

void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  delay(10000); // Wait time before first cycle in milliseconds
}
void loop()
{
  if(cyclesDone < numberOfCycles){
    // Set motor direction clockwise
    digitalWrite(dirPin, HIGH);

    // Spin motor 
    for(int x = 0; x < (8); x++) // Put  intended strain in mm divided by 0.565 in nested brackets
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(16000); //Higher number results in slower speed.
      digitalWrite(stepPin, LOW);
      delayMicroseconds(16000);//Higher number results in slower speed.
    }
    delay(500); // Wait a second between turning
    
    // Set motor direction counterclockwise
    digitalWrite(dirPin, LOW);

    // Spin motor 
    for(int x = 0; x < (8); x++)// Put  intended strain in mm divided by 0.565 in nested brackets
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(16000);//Higher number results in slower speed.
      digitalWrite(stepPin, LOW);
      delayMicroseconds(16000);//Higher number results in slower speed. vf
    }
    cyclesDone++;
  }
  delay(500); // Wait half a second
}



































//
///*
// Stepper Motor Control - one step at a time
//
// This program drives a unipolar or bipolar stepper motor.
// The motor is attached to digital pins 8 - 11 of the Arduino.
//
// The motor will step one step at a time, very slowly.  You can use this to
// test that you've got the four wires of your stepper wired to the correct
// pins. If wired correctly, all steps should be in the same direction.
//
// Use this also to count the number of steps per revolution of your motor,
// if you don't know it.  Then plug that number into the oneRevolution
// example to see if you got it right.
//
// Created 30 Nov. 2009
// by Tom Igoe
//
// */
//
//#include <Stepper.h>
//
//const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
//// for your motor
//
//// initialize the stepper library on pins 8 through 11:
//Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
//
//int stepCount = 0;         // number of steps the motor has taken
//
//void setup() {
//  // initialize the serial port:
//  Serial.begin(9600);
//  myStepper.setSpeed(60);
//}
//
//void loop() {
//  // step one step:
//  //myStepper.step(1);
//  //Serial.print("steps:");
//  //Serial.println(stepCount);
//  //stepCount++;
//  //delay(500);
//  myStepper.step(stepsPerRevolution);
//  delay(500);
//  myStepper.step(-stepsPerRevolution);
//  delay(500);
//}
