int leds[4] = {2, 3, 4, 5};
int k = 0;
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

  Serial.begin(9600);

}

void loop() {
  k++;
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], LOW);
  }
  if (k >= 8 && k % 8 == 0) {
    digitalWrite(leds[4], HIGH);
  }
  if (k >= 4 && k % 8 % 4 == 0) {
    digitalWrite(leds[3], HIGH);
  }

  if (k >= 2 && k % 8 % 4 % 2 == 0) {
    digitalWrite(leds[2], HIGH);
  }
  if (k >= 1 && k % 8 % 4 % 2 == 1) {
    digitalWrite(leds[1], HIGH);
  }
  if (k == 16) {
    k == 0;
  }
  delay(1000);
  Serial.print(k);

}

