# Environmental Sensing Lab Instructions

**Required Kit Parts:** 1x Microcontroller, 1x Breadboard, 1x GY-BMP280 Sensor, 4x Jumper Wires.

---

## Lab Objectives & Goals

### Conceptual Goal
Understand how analog physical properties, e.g., temperature and air pressure, are converted into digital data that an embedded CPU can process.

### Practical Goal
Learn how to wire an I2C bus (VCC, GND, SDA, SCL).

### Programming Goal
Practice using existing libraries to abstract complex hardware registers, reading data, and outputting it to a serial monitor.

---

## Wiring Instructions

---

### 1) Place the Component on the Breadboard
1. Pick up the **GY-BMP280 sensor** and make sure the header pins are pre-soldered facing downward.
2. Insert the board firmly into the middle section of the breadboard. 
3. Ensure the board sits across the center divider groove of the breadboard, or ensure each pin occupies its own independent row.   

*If all pins are plugged into the exact same 5-hole row on one side of the breadboard, they will short-circuit.*

---

### 2) Connect Pin-to-Pin
Locate the labels printed directly on the GY-BMP280 breakout board, and run 4 male-to-male jumper wires to the microcontroller based on the map below:

| GY-BMP280 Pin | Microcontroller Pin | Function |
| :--- | :--- | :--- |
| **GND** | **GND** | Ground / Negative |
| **VCC** | **3.3V** | 3.3V Power Supply |
| **SDA** | **SDA** | I2C Serial Data Line |
| **SCL** | **SCL** | I2C Serial Clock Line |

---

### Visual Checklist
Before plugging the microcontroller's USB-C cable into your laptop, scan the board and confirm:
- Is the power wire securely plugged into the 3.3V pin and absolutely NOT the 5V/VIN pin?
- Are the SDA and SCL data lines independent and connected to the correct corresponding I2C pins on your microcontroller?
- Is every jumper wire pushed completely down into the breadboard to ensure a reliable data connection?

*Once verified, proceed to plug in the USB cable and open the Arduino IDE to upload the code.*

---

## TODO: Code
Fill out the TODO blocks to initialize the environmental sensor and fetch the real-time temperature and pressure data values.