# ATECC608A Lab Instructions

**Required Kit Parts:** 1x Microcontroller, 1x Breadboard, 1x ATECC608A Breakout, 4x Jumper Wires.

---

## Lab Objectives & Goals

### Conceptual Goal #1
Understand why standard deterministic microcontrollers are bad at generating secure cryptographic keys on their own. Learn how a secure co-processor uses physical entropy, via analog noise, to generate unbreakable True Random Numbers.

### Conceptual Goal #2
Understand the architectural benefit of offloading intensive tasks (like cryptography) to a dedicated co-processor to save CPU cycles and power.

### Programming Goal
Use the SparkFun ATECCX08a library to request a 32-byte True Random Number and format it into a readable hexadecimal string.

---

## Wiring Instructions
**Warning:** Double check the microcontroller's pinout before turning on the power. The ATECC608A is a 3.3V-only logic device. Connecting the VCC or SDA/SCL to a 5V supply line will break the cryptographic chip.

---

### 1) Place the Component on the Breadboard
1. Pick up the **ATECC608A board** and make sure the header pins are pre-soldered facing downward.
2. Insert the board firmly into the middle section of the breadboard. 
3. Ensure the board sits between the center divider groove of the breadboard (columns E and F), or ensure each pin occupies its own independent row.   

**If all pins are plugged into the exact same 5-hole row on one side of the breadboard, they will short-circuit.*

---

### 2): Connect Pin-to-Pin
Locate the labels printed directly on the ATECC608A breakout board, and run 4 male-to-male jumper wires to the microcontroller based on the map below:

| ATECC608A Pin | Microcontroller Pin | Function |
| :--- | :--- | :--- |
| **GND** | **GND** | Ground / Negative |
| **VCC** (or 3.3V) | **3.3V** | 3.3V Power Supply |
| **SDA** | **SDA** | I2C Serial Data Line |
| **SCL** | **SCL** | I2C Serial Clock Line |

---

### Visual Checklist
Before plugging the microcontroller's USB-C cable into your laptop, scan the board and confirm:
- Is the red wire plugged into 3.3V and absolutely NOT the 5V/VIN pin?
- Are the SDA and SCL wires independent?
- Is every jumper wire pushed completely down into the breadboard?

*Once verified, proceed to plug in the USB cable and open the Arduino IDE to upload the code

---

## TODO: Code
Fill out the TODO blocks to initialize the co-processor and fetch the random bytes.