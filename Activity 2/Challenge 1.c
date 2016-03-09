#include <arduino.h>

// Smooth Marquee
// Minimal delay between setting a pin to LOW and setting another pin to HIGH
void setup() {
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);
}

void toggle(int pin) {
	digitalWrite(pin, HIGH);
	delay(500);
	digitalWrite(pin, LOW);
}

void loop() {
	toggle(4);
	toggle(5);
	toggle(6);
	toggle(7);
	toggle(8);
}
