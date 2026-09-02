// Pin connected to the LED
int led = 7;

// Delay time in milliseconds
int delayTime = 5000;

void setup() {
  // Set the LED pin as an output
  pinMode(led, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(led, HIGH);

  // Wait for 5 seconds
  delay(delayTime);

  // Turn the LED OFF
  digitalWrite(led, LOW);

  // Wait for 5 seconds
  delay(delayTime);
}
