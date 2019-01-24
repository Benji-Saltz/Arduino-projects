int irPin = 2;

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irRead = digitalRead (irPin);
  Serial.println(irRead);
  delay(500);
}

