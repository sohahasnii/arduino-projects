# Temperature & Humidity Sensing

A basic Arduino project that demonstrates how to **measure temperature and humidity using a DHT11 sensor**.

The sensor readings are displayed on the **Serial Monitor**.

## 🛠️ Components Required

* Arduino UNO
* DHT11 temperature & humidity sensor
* Jumper wires
* Breadboard

## 🔌 Pin Connections

| DHT11 | Arduino UNO |
| ----- | ----------- |
| VCC   | 5V          |
| DATA  | D2          |
| GND   | GND         |

## ⚙️ How It Works

The DHT11 sensor measures the surrounding **temperature and relative humidity**.

Arduino reads the sensor data and prints the values to the Serial Monitor every 2 seconds.

### Example Output

```text
Temperature: 28.00 °C
Humidity: 62.00 %
--------------------
```

## 🎯 Purpose

This project introduces beginners to environmental sensors and demonstrates how Arduino can collect and display real-world data.
