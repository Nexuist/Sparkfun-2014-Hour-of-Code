#include <arduino.h>

void setup() {
  pinMode(A3, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int soundValue = analogRead(A3);
  int r, g, b;
  Serial.println(soundValue);
  if (soundValue <= 341) {
    r = 0;
    g = 0;
    b = 255;
  }
  else if (soundValue <= 682) {
    r = 0;
    g = 255;
    b = 0;
  }
  else if (soundValue <= 1023) {
    r = 255;
    g = 255;
    b = 0;
  }
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
  delay(100);
}
