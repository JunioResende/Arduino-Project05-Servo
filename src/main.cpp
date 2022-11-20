#include <Arduino.h>

#include <Servo.h>

int pinServo = 9;

int time = 500;

Servo myServo;

void setup()
{
  Serial.begin(9600);
  myServo.attach(pinServo);
}

void loop()
{
  myServo.write(0);
  delay(time);
  myServo.write(90);
  delay(time);
  myServo.write(180);
  delay(time);
}