int emitter = 5;               // IR LED on pin 5
int reciever = 6;              // IR Detector on pin 6
int irRead = 1;
int led = 13;                  // Flashing LED on pin 13. Can use internal.

void setup() {
  pinMode(reciever, INPUT);    
  pinMode(emitter, OUTPUT);     
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tone(emitter, 38500, 8); // send a signal with 38.5 kHz for 1 ms
  delay(1);
  irRead = digitalRead (reciever);

  Serial.println(irRead);
// If event is detected
  if (irRead == 0)       
  {
    digitalWrite (led, HIGH);
    delay(100);
    digitalWrite (led, LOW);
  }
// If no event is detected
  else 
  {
    digitalWrite (led, LOW);
    delay(10);
  }
  delay(500);
}

