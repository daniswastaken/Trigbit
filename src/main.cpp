#include <Arduino.h>


int red = 13;

void setup() {
  pinMode(red, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalRead(red);


}