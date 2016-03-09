#include <arduino.h>

int sensorValue;
int led = 4;

void setup() {
  // Slider
  pinMode(A3, INPUT);
  // LEDs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(led, LOW);
  sensorValue = analogRead(A3);
  if (sensorValue <= 204) {
    led = 4;
  }
  else if (sensorValue >= 204) {
    led = 5;
  }
  else if (sensorValue >= 408) {
    led = 6;
  }
  else if (sensorValue >= 612) {
    led = 7;
  }
  else if (sensorValue >= 816) {
    led = 8;
  }
  digitalWrite(led, HIGH);
}
