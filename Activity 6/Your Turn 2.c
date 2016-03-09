#include <arduino.h>

int fade = 0;
bool increase = true;

void setup() {
	pinMode(10, OUTPUT);
}

void loop()
{
	if (increase == true) {
		fade = fade + 20;
	}
	else {
		fade = fade = fade - 20;
	}
	if (fade >= 255) {
		increase = false;
	}
	if (fade <= 0) {
		increase = true;
	}
}
