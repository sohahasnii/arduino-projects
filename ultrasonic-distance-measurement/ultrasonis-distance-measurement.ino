// Ultrasonic Distance Measurement
// HC-SR04 Trig -> D9
// HC-SR04 Echo -> D10

#define TRIG_PIN 9
#define ECHO_PIN 10

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.println("Ultrasonic Distance Sensor");
}

void loop() {
  // Make sure the trigger pin is LOW
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond pulse
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure the echo time
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in centimeters
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
