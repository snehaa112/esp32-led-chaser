# ESP32 - LED Blinking in Series

7 LEDs blinking one after another using ESP32 and Arduino IDE.

### Hardware Required
- ESP32 DevKitC
- 7x LEDs
- 7x Resistors (220Ω)
- Breadboard
- Jumper Wires

### Circuit Connection
- LED1 -> GPIO 15
- LED2 -> GPIO 2
- LED3 -> GPIO 5
- LED4 -> GPIO 18
- LED5 -> GPIO 19
- LED6 -> GPIO 21
- LED7 -> GPIO 23
- All LED Cathodes (-) -> 220Ω Resistor -> GND

### How to Run
1. Connect LEDs as per circuit
2. Open `led_chaser.ino` in Arduino IDE
3. Select Board: ESP32 Dev Module
4. Select Port and Click Upload

### Working
LEDs blink in order: 15 -> 2 -> 5 -> 18 -> 19 -> 21 -> 23
Each LED stays ON for 100ms then OFF.
