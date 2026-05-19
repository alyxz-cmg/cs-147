// Download the library at: http://librarymanager/All#Adafruit_BMP280
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; 

void setup() {
  Serial.begin(9600);

  while (!Serial) delay(100);

  Serial.println(F("Environmental Sensor Lab"));

  // TODO 1
  if (!bmp.begin(0x76)) {
    Serial.println(F("Could not find a sensor."));

    while (1);
  }
}

void loop() {
  // TODO 2 & 3
  float temp = bmp.readTemperature();
  float pressure = bmp.readPressure();

  // TODO 4: Print data
  Serial.print(F("Temperature: "));
  Serial.print(temp);
  Serial.println(F(" C"));

  Serial.print(F("Pressure: "));
  Serial.print(pressure);
  Serial.println(F(" Pa"));
  
  Serial.println();

  delay(2000);
}