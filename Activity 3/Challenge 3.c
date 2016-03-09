#include <arduino.h>

// Pins 9, 10, 11
// Control RGB levels of the LED below D10
void setup() {
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

void loop() {
	analogWrite(9, 64);
	analogWrite(10, 128);
	analogWrite(11, 192);
	delay(100);
	analogWrite(10, 0);
	delay(500);
}
