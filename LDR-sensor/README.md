# LDR Light Sensor with Arduino

A simple Arduino project that uses an **LDR (Light Dependent Resistor)** to detect the surrounding light level.

The LDR gives an analog value based on the amount of light falling on it. The Arduino reads this value and displays the light level and status on the Serial Monitor.

## Features

* Measures surrounding light intensity
* Uses analog input
* Displays the LDR sensor value
* Detects whether the environment is **Dark** or **Bright**
* Simple beginner-friendly Arduino project

## 🧰 Components Required

* Arduino UNO
* LDR Sensor Module
* Jumper Wires
* USB Cable

## 🔌 Connections

| LDR Module | Arduino UNO |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| AO         | A0          |

## ⚙️ How It Works

1. The LDR detects the amount of light falling on its surface.
2. The sensor produces an analog voltage based on the light level.
3. Arduino reads this voltage using `analogRead()`.
4. The reading is converted into a value between **0 and 1023**.
5. The value is displayed on the Serial Monitor.
6. A simple threshold is used to determine whether the environment is dark or bright.

