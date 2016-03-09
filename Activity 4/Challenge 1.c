#include <arduino.h>

// Fading Violets
// Alternate between green, yellow, and red colors like a traffic light
void setup() {
  pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

void setRGB(int r, int g, int b) {
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
}

void loop() {
  // Green
  setRGB(0, 255, 0);
  delay(1);
  // Yellow
  setRGB(210, 219, 29);
  delay(1);
  // Red
  setRGB(255, 0, 0);
  delay(2);
}
