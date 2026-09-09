# IR Sensor Object Detection

A simple Arduino project that uses an **IR sensor module** to detect whether an object is present in front of the sensor.

The detection status is displayed on the **Serial Monitor** in real time.

## Features

* Detects objects using an IR sensor
* Displays the detection status on the Serial Monitor
* Displays **"Object Detected"** when an object is detected
* Displays **"No Object Detected"** when no object is detected


## 🛠️ Components Required

* Arduino UNO
* IR Sensor Module
* Breadboard (optional)
* Jumper Wires

## 🔌 Connections

| IR Sensor | Arduino UNO |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| OUT       | D2          |

## ⚙️ How It Works

The IR sensor module uses infrared light to detect objects.

The Arduino reads the sensor's digital output using `digitalRead()`.

For most common IR obstacle sensor modules:

```text
LOW  → Object Detected
HIGH → No Object Detected
```

The Arduino continuously checks the sensor output and prints the corresponding message to the Serial Monitor.

