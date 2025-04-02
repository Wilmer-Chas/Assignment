#include <Arduino.h>

int ledBlue = 2;
int potentiometerPin = A0;


void setup()
{
  pinMode(ledBlue, OUTPUT);
  pinMode(potentiometerPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.println(analogRead(potentiometerPin));
  delay(100);
  if(analogRead(potentiometerPin) > 500)
  {
      digitalWrite(ledBlue, LOW);
  }
  else
   {
      digitalWrite(ledBlue, HIGH);
   }
}