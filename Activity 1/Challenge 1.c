#include <arduino.h>

// Double Time
// Fastest visible blink - 25ms
// Frequency - 1/50
void setup() {
	pinMode(13, OUTPUT);
}

void loop() {
	digitalWrite(13, HIGH);
	delay(25);
	digitalWrite(13, LOW);
	delay(25);
}
