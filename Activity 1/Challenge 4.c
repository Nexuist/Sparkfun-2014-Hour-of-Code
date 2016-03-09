#include <arduino.h>

// Other LEDs
// Changed pin from 13 to 10
// Changed delay from 25 to 500
void setup() {
	pinMode(10, OUTPUT);
}

void loop() {
	digitalWrite(10, HIGH);
	delay(500);
	digitalWrite(10, LOW);
	delay(500);
}
