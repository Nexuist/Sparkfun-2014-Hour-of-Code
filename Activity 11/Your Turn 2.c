#include <arduino.h>

const float thermalAlert = 80.0;
const int temperaturePin = A0;	// Temperature sensor is connected to A0
const int redLEDPin = 9;		// Red LED is connected to pin 9
const int greenLEDPin = 11;		// Green LED is connected to pin 11

void setup()
{
	pinMode(temperaturePin, INPUT);
	pinMode(redLEDPin, OUTPUT);
	pinMode(greenLEDPin, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	long rawTemp = analogRead(temperaturePin);
	float voltage = rawTemp * (5 / 1023.0);
	Serial.print("Voltage: ");
	Serial.print(voltage);
	Serial.println(" V");
	float celsius = (voltage - 0.5) * 100;
	Serial.print("Celsius: ");	// Print "Celsius: "
	Serial.print(celsius);		// Print the celsius temp
	Serial.println(" °C");		// Print " °C" and a new line
	float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	Serial.print("Fahrenheit: ");	// Print "Fahrenheit: "
	Serial.print(fahrenheit);		// print the fahrenheit temp
	Serial.println(" °F");			// Print " °F" and a new line
	Serial.println();				// Print a blank line
  float kelvin = fahrenheit + 273.15;
  Serial.print("Kelvin: ");	// Print "Kelvin: "
	Serial.print(kelvin);		// print the kelvin temp
	Serial.println(" °K");			// Print " °K" and a new line
	Serial.println();				// Print a blank line
	if (fahrenheit >= thermalAlert)
	{
		digitalWrite(redLEDPin, HIGH);
		digitalWrite(greenLEDPin, LOW);
	}
	else
	{
		digitalWrite(redLEDPin, LOW);
		digitalWrite(greenLEDPin, HIGH);
	}

	delay(1000);	// Wait a second between readings
}
