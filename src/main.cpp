#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_ADDR   0x3C
Adafruit_SSD1306 lcd(128, 64, &Wire, -1);

int red = 13;

void setup() {
  pinMode(red, INPUT);

  lcd.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  lcd.clearDisplay();
  lcd.setTextColor(WHITE);
  lcd.setTextSize(2);
  lcd.setCursor(25, 25); // x y
  lcd.println("Trigbit");
  lcd.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalRead(red);


}