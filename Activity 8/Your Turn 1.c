#include <arduino.h>

long multiplier = 1;

void setup() {
  pinMode(12, INPUT);
  Serial.begin(9600);
  Serial.println("Powers of 2!");
}

void loop() {
  if (digitalRead(12) == HIGH) {
    Serial.println(multiplier);
    multiplier *= 2;
    if (multiplier >= 1073741824) {
      multiplier = 1;
    }
    delay(250);
  }
}
