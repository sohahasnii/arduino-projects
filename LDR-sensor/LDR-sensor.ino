#define LDR_SENSOR A0

void setup() {
  Serial.begin(9600);
  Serial.println("----------------------");
}

void loop() {
  int ldrValue = analogRead(LDR_SENSOR);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < 500) {
    Serial.println("Light Status: Dark");
  } else {
    Serial.println("Light Status: Bright");
  }

  Serial.println("----------------------");

  delay(1000);
}
