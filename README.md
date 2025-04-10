# LED Brightness Control with PWM on Olimex ESP32-EVB

This project demonstrates how to control an LED using **Pulse Width Modulation (PWM)** with 5 discrete brightness levels on the **Olimex ESP32-EVB** development board. The implementation is done using **PlatformIO** in the Arduino framework.

## 📦 Hardware Used

- Olimex ESP32-EVB
- 1x LED
- 1x 120 Ohm resistor (connected in series with the LED)
- Breadboard and jumper wires (optional)

## ⚙️ How It Works

The LED is connected to **GPIO 21**, which is configured as a PWM output. The brightness of the LED changes in 5 steps, increasing and then decreasing in a loop. Each step is triggered at **50 ms intervals**, controlled using the `millis()` function (non-blocking delay).

PWM (Pulse Width Modulation) allows simulating analog output by switching the digital pin on and off rapidly. The duty cycle (how long the signal stays high) determines the perceived brightness.

## ⏱️ Timing and PWM Logic

- 5 brightness levels: 20%, 40%, 60%, 80%, 100%
- Controlled using `analogWrite(pin, value)` where value ranges from 0–255
- Uses `millis()` for non-blocking time tracking with a 50ms interval

## 🔌 Circuit Diagram

<img src="images//board.jpg" alt="LED Circuit Diagram" width="400"/>

**Note:** Make sure to connect the anode of the LED to GPIO 21 through the 120-ohm resistor, and the cathode to GND.
