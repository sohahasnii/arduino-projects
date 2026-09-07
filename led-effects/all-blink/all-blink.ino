// All LED Blink
// LEDs: D2, D3, D4, D5, D6

int leds[] = {2, 3, 4, 5, 6};
int ledCount = 5;
int delayTime = 500;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  // Turn all LEDs ON
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], HIGH);
  }

  delay(delayTime);

  // Turn all LEDs OFF
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], LOW);
  }

  delay(delayTime);
}
