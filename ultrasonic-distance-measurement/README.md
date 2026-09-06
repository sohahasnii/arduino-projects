# Ultrasonic Distance Measurement

A basic Arduino project that demonstrates how to **measure distance using an HC-SR04 ultrasonic sensor**.

The measured distance is displayed on the **Serial Monitor**.

## 🛠️ Components Required

* Arduino UNO
* HC-SR04 ultrasonic sensor
* Jumper wires
* Breadboard

## 🔌 Pin Connections

| HC-SR04 | Arduino UNO |
| ------- | ----------- |
| VCC     | 5V          |
| TRIG    | D9          |
| ECHO    | D10         |
| GND     | GND         |

## ⚙️ How It Works

The HC-SR04 sends an ultrasonic pulse and waits for the reflected pulse to return.

Arduino measures the time taken by the pulse and calculates the distance using the speed of sound.

### Example Output

```text
Distance: 25.43 cm
Distance: 24.98 cm
Distance: 25.12 cm
```

## 🎯 Purpose

This project introduces beginners to distance sensors and demonstrates how Arduino can measure physical distances using ultrasonic waves.
