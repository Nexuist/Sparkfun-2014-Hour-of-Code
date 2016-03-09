#include <arduino.h>

// Fading LED Using Variables
// LED starts at full power and slowly gets dimmer
int fade = 255;

void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  analogWrite(5, fade);
  fade = fade - 1;
  delay(100);
}
