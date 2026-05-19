// Download the library at: http://librarymanager/All#SparkFun_ATECCX08a
#include <Wire.h>
#include <SparkFun_ATECCX08a_Arduino_Library.h> 

ATECCX08A atecc;

void setup() {
  Wire.begin();
  Serial.begin(115200);
  while (!Serial) delay(100);
  
  Serial.println(F("ATECC608A Lab - True Random Number Generator (TRNG)"));

  // TODO 1: Initialize the atecc object

  if (atecc.begin() == true) {
    Serial.println(F("ATECC608A Connected Successfully"));
  } 
  
  else {
    Serial.println(F("Device not found. Check I2C wiring."));
    while (1);
  }
}

void loop() {
  // TODO 2: Command the co-processor to generate 32 bytes of true random data.
  atecc.updateRandom32Bytes();

  Serial.print("Hardware TRNG (32 Bytes): ");
  
  // TODO 3: Iterate through the array and print in HEX format.
  for (int i = 0; i < 32; i++) {
    // If the hex value is < 0x10, add a prefix 0 for formatting.
    if (atecc.random32Bytes[i] < 0x10){ 
        Serial.print("0");
    }

    Serial.print(atecc.random32Bytes[i], HEX);
  }
  
  Serial.println();
  delay(3000);
}