// IR Sensor Object Detection
// Arduino UNO

#define IR_SENSOR 2

void setup() {
  Serial.begin(9600);

  pinMode(IR_SENSOR, INPUT);

  Serial.println("IR Sensor Started");
  Serial.println("----------------------");
}

void loop() {

  int sensorState = digitalRead(IR_SENSOR);

  if (sensorState == LOW) {
    Serial.println("Object Detected");
  }
  else {
    Serial.println("No Object Detected");
  }

  delay(500);
}
