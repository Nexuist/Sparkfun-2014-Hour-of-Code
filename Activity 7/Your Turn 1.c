#include <arduino.h>

int led = 4;
int speed = 100;

void setup() {
  // Buttons
  pinMode(2, INPUT);
  pinMode(12, INPUT);
  // LEDs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

voi loop() {
  speed = (digitalRead(2) == HIGH) ? 150: 50; // Change speed depending D2
  if (digitalRead(12) == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
    led = led + 1;
    if (led > 8) {
      led = 4; // Reset when out of range
    }
    digitalWrite(led, HIGH);
    delay(speed);
  }

}
