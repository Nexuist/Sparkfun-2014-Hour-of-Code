#include <arduino.h>

void setup() {
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(A1);
  int r, g, b;
  Serial.println(lightValue);
  if (lightValue <= 341) {
    r = 0;
    g = 0;
    b = 255;
  }
  else if (lightValue <= 682) {
    r = 0;
    g = 255;
    b = 0;
  }
  else if (lightValue <= 1023) {
    r = 255;
    g = 255;
    b = 0;
  }
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
  delay(100);
}
