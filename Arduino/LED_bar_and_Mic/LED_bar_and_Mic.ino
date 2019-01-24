int micPin = A15;    // the AO if the Sound Sensor (MIC) is connected to A15(Mega) – change to A5 for Uno
int micReading;     // the analog reading from the Analog Pin
//int led [10]= {30,32,34,36,38,40,42,44,46,48};
int led[] = {30, 32, 34, 36, 38, 40, 42, 44, 46, 48};
void setup() {
  pinMode (micPin, INPUT);
  for (int i = 0; i < 10; i++) {
    pinMode(led[i], OUTPUT);
  }
  Serial.begin(9600); // Start the Serial monitor
}
void loop() {
  micReading = analogRead(micPin);
  int scale = map(micReading, 0, 1023, 0, 10);
  Serial.print(micReading);  Serial.print("        ");
  Serial.print(scale);   Serial.println();
  //delay(300); // necessary to read the new values
  for (int i = 0; i <= scale; i++) {
    digitalWrite(led[i], HIGH);
    delay(1);
  }
  for (int i = 0; i <= scale; i++) {
    digitalWrite(led[i], LOW);
  }
}


