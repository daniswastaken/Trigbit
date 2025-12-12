#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

int red = 13;

void setup() {
  pinMode(red, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalRead(red);


}