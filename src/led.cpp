#include "led.h"

int greenLed = 14;
int redLed = 12;
int buzzer = 13;

void falseLed()
{
    tone(buzzer, 1200, 500);
    noTone(buzzer);
    digitalWrite(redLed, LOW);
    delay(400);
    digitalWrite(redLed, HIGH);
    delay(300);
    tone(buzzer, 1200, 500);
    noTone(buzzer);
    digitalWrite(redLed, LOW);
    delay(400);
    digitalWrite(redLed, HIGH);
}

void trueLed()
{
    tone(buzzer, 1000, 240);
    noTone(buzzer);
    digitalWrite(greenLed, LOW);
    delay(150);
    digitalWrite(greenLed, HIGH);
    delay(100);
    tone(buzzer, 1000, 240);
    noTone(buzzer);
    digitalWrite(greenLed, LOW);
    delay(150);
    digitalWrite(greenLed, HIGH);
}

void initLed()
{
    // led
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(buzzer, OUTPUT);

    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, HIGH);
}