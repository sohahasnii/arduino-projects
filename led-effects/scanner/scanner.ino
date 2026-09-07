// LED Scanner
//forward and reverse simulataneously i.e back-and-forth
// LEDs: D2, D3, D4, D5, D6

int leds[] = {2, 3, 4, 5, 6};
int ledCount = 5;
int delayTime = 150;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  // Forward
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], HIGH);
    delay(delayTime);
    digitalWrite(leds[i], LOW);
  }

  // Reverse
  for (int i = ledCount - 2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(delayTime);
    digitalWrite(leds[i], LOW);
  }
}
