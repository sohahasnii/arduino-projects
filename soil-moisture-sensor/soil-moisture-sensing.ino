// Soil Moisture Sensor using Arduino UNO

#define SOIL_SENSOR A0

// Adjust this value according to your sensor
#define MOISTURE_THRESHOLD 500

void setup() {
  Serial.begin(9600);
}

void loop() {

  int moistureValue = analogRead(SOIL_SENSOR);

  Serial.print("Moisture Sensor Value: ");
  Serial.println(moistureValue);

  if (moistureValue < MOISTURE_THRESHOLD) {
    Serial.println("Moisture Present");
  }
  else {
    Serial.println("No Moisture Detected");
  }

  Serial.println("----------------------");

  delay(1000);
}
