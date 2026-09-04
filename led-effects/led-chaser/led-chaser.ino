// LED Chaser
// Turns LEDs ON one after another to create a chasing effect.

// LED pins
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

// Delay between LEDs
int delayTime = 200;

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {

  // Turn LEDs ON one by one
  digitalWrite(led1, HIGH);
  delay(delayTime);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(delayTime);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(delayTime);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(delayTime);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
  delay(delayTime);
  digitalWrite(led5, LOW);
}
