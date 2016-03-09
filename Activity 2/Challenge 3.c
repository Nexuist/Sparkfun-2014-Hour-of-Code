#include <arduino.h>

// All On
// Control the output of all pins 4-8 through one function: toggle()
void setup() {
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);
}

void toggle(uint8_t pinLevel) {
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	digitalWrite(8, HIGH);
}

void loop() {
	toggle(HIGH);
	delay(500);
	toggle(LOW);
	delay(500);
}
