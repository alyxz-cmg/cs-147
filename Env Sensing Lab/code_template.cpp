// Download the library at: http://librarymanager/All#Adafruit_BMP280
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

// Instantiate the sensor object
Adafruit_BMP280 bmp; 

void setup() {
  Serial.begin(9600);

  while (!Serial) delay(100);
  
  Serial.println(F("Environmental Sensor Lab"));

  // Hint: the GY-BMP280 module usually has an I2C address of 0x76.

  // TODO 1: Initialize the sensor using bmp.begin(). 

  // Prints an error and halt the program if it fails.
  


  /* --- YOUR CODE HERE --- */
  


}

void loop() {
  // TODO 2: Call the library function to read the Temperature. Save it to a float.



  /* --- YOUR CODE HERE --- */
  


  // TODO 3: Call the library function to read the Pressure. Save it to a float.



  /* --- YOUR CODE HERE --- */




  // TODO 4: Print both values to the Serial Monitor with Celsius and Pascal units.



  /* --- YOUR CODE HERE --- */



  delay(2000);
}