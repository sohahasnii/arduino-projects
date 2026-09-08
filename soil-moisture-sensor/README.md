# 🌱 Soil Moisture Sensor

A simple Arduino project that uses a **soil moisture sensor** to detect whether moisture is present in the soil.

The sensor reading is displayed on the **Serial Monitor**, making it easy to observe the moisture condition in real time.

## Features

* Detects moisture in soil
* Displays sensor readings on the Serial Monitor
* Displays **"Moisture Present"** when moisture is detected
* Displays **"No Moisture Detected"** when the soil is dry
* Uses an adjustable moisture threshold

## 🛠️ Components Required

* Arduino UNO
* Soil Moisture Sensor
* Jumper Wires
* Breadboard (optional)

## 🔌 Connections

| Soil Moisture Sensor | Arduino UNO |
| -------------------- | ----------- |
| VCC                  | 5V          |
| GND                  | GND         |
| AO                   | A0          |

## ⚙️ How It Works

The soil moisture sensor produces an analog value depending on the moisture level of the soil.

The Arduino reads this value using the `analogRead()` function and compares it with a predefined threshold.

```cpp
if (moistureValue < MOISTURE_THRESHOLD)
```

If the reading indicates sufficient moisture:

```text
Moisture Present
```

If the soil is dry:

```text
No Moisture Detected
```

## 🖥️ Serial Monitor Output

Example when moisture is detected:

```text
Moisture Sensor Value: 380
Moisture Present
----------------------
```

Example when the soil is dry:

```text
Moisture Sensor Value: 720
No Moisture Detected
----------------------
```

The Serial Monitor should be set to:

```text
9600 baud
```

## 🔧 Adjusting the Threshold

The detection threshold can be changed in the code:

```cpp
#define MOISTURE_THRESHOLD 500
```

The correct value depends on the particular sensor and soil conditions.

To find a suitable threshold, observe the sensor values when the sensor is:

* In dry soil
* In moist soil
Then choose a value between the two readings.


