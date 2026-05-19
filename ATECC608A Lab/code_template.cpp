// Download the library at: http://librarymanager/All#SparkFun_ATECCX08a
#include <Wire.h>
#include <SparkFun_ATECCX08a_Arduino_Library.h>

// Instantiate the cryptographic co-processor object
ATECCX08A atecc;

void setup() {
  Wire.begin();
  Serial.begin(115200);
  
  while (!Serial) delay(100);
  
  Serial.println(F("ATECC608A Lab - True Random Number Generator (TRNG)"));

  // TODO 1: Initialize the atecc object using the .begin() method.

  // Check if it connects. If it fails to, print an error and halt.
  


  /* --- YOUR CODE HERE --- */
  


}

void loop() {
  // TODO 2: Command the co-processor to generate 32 bytes of true random data.

  // Hint: updateRandom32Bytes()
  


  /* --- YOUR CODE HERE --- */



  Serial.print("Hardware TRNG (32 Bytes): ");
  
  // TODO 3: The random bytes are now stored in an array inside atecc.random32Bytes.

  // Create a for-loop to iterate through all 32 bytes of this array.

  // Inside the loop, print each byte formatted as HEX to the serial monitor.
  


  /* --- YOUR CODE HERE --- */
  


  Serial.println();
  delay(3000);
}