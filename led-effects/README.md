# 💡 LED Effects Collection

A beginner-friendly Arduino project containing **multiple LED lighting effects** in a single program.

Instead of learning only a basic LED blink or chaser, this project demonstrates different ways to control LEDs using **digital output and PWM brightness control**.

## ✨ LED Effects Included

| #  | Effect                  | What You Learn             |
| -- | ----------------------- | -------------------------- |
| 1  | Forward Chaser          | Sequential LED control     |
| 2  | Reverse Chaser          | Reverse sequencing         |
| 3  | Scanner                 | Back-and-forth movement    |
| 4  | All Blink               | Multiple digital outputs   |
| 5  | Fade In/Out             | PWM brightness control     |
| 6  | Individual Glow         | Smooth LED fading          |
| 7  | Breathing Effect        | Gradual brightness changes |
| 8  | Alternating LEDs        | Pattern-based control      |
| 9  | Fast Chaser             | Timing control             |
| 10 | Random LEDs             | Random number generation   |



## 🛠️ Components Required

* Arduino UNO
* 5 × LEDs
* 5 × 220Ω resistors
* Breadboard
* Jumper wires
* USB cable



## 🔌 Connections

| LED   | Arduino Pin |
| ----- | ----------- |
| LED 1 | D3          |
| LED 2 | D5          |
| LED 3 | D6          |
| LED 4 | D9          |
| LED 5 | D10         |

For every LED:


Arduino Pin → 220Ω Resistor → LED Anode (+)
LED Cathode (-) → GND


### ⚠️ Important

The LEDs are connected to **PWM-capable pins** because some effects use `analogWrite()` to control brightness.

On an Arduino UNO, the PWM pins are: D3, D5, D6, D9, D10, D11

## 🧠 How It Works

The program stores all LED pins inside an array: int leds[] = {3, 5, 6, 9, 10};
This allows the same code to control multiple LEDs using loops.

For example:
for (int i = 0; i < numberOfLEDs; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
}
The program contains separate functions for each LED effect.

## 🔆 Digital vs PWM Control

### Digital Control
digitalWrite(leds[i], HIGH);
Digital control allows the LED to be: ON OFF

### PWM Brightness Control
analogWrite(leds[i], brightness);
The brightness can be controlled from:
0 → OFF
255 → Full brightness
This makes effects such as **fade, glow, and breathing** possible.

## 🎛️ Changing the Speed

The normal LED effects use:
int delayTime = 150;

### Faster
int delayTime = 50;

### Slower
int delayTime = 500;

Experiment with different values to create your own LED patterns.


## 🚀 Ideas to Improve the Project

After getting the basic version working, try adding:

*  Push button to switch between effects
*  Potentiometer to control speed
*  Potentiometer to control brightness
*  Serial Monitor menu for selecting effects
*  RGB LED effects
*  LEDs synchronized with music
*  Bluetooth-controlled LED patterns
*  ESP32-controlled LED effects
*  More complex LED animations

## 📚 Concepts Learned

This project helps practice:

* `pinMode()`
* `digitalWrite()`
* `analogWrite()`
* PWM
* `delay()`
* Arrays
* `for` loops
* Functions
* Conditional statements
* Random numbers
* LED brightness control
* Basic Arduino programming


## 🤝 Contributing

Contributions are welcome!

**Part of an Arduino Beginner Projects collection — learning electronics and programming one project at a time.**
