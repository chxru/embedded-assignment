#include <avr/io.h>
#include <Arduino.h>
#include <SoftwareSerial.h>

int main()
{
  // initializing serial communication with PC
  Serial.begin(9600);

  // initializing serial communication with Mega
  SoftwareSerial MegaSerial = SoftwareSerial(8, 9);

  // initializing serial communication with FPS
  SoftwareSerial FPSSerial = SoftwareSerial(10, 11);
}