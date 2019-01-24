#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

int frequencyR = 0;
int frequencyG = 0;
int frequencyB = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  Serial.begin(9600);
}

void loop() {
  colour();


}
void colour() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  frequencyR = pulseIn(sensorOut, LOW);
  Serial.print("R= ");
  Serial.print(frequencyR);
  Serial.print(" ");
  delay(500);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  frequencyG = pulseIn(sensorOut, LOW);
  Serial.print("G= ");
  Serial.print(frequencyG);
  Serial.print(" ");
  delay(500);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  frequencyB = pulseIn(sensorOut, LOW);
  Serial.print("B= ");
  Serial.print(frequencyB);
  Serial.println(" ");
  delay(500);
  if (frequencyR >= 26 && frequencyR <= 27 && frequencyG >= 30 && frequencyG <= 31 &&  frequencyB >= 25 && frequencyB <= 26) {
    Serial.print("Yellow");
  }
  if (frequencyR >= 30 && frequencyR <= 31 && frequencyG >= 33 && frequencyG <= 34 &&  frequencyB >= 26 && frequencyB <= 27) {
    Serial.print("Brown");
  }
  if (frequencyR >= 30 && frequencyR <= 31 && frequencyG >= 31 && frequencyG <= 32 &&  frequencyB >= 23 && frequencyB <= 24) {
    Serial.print("Blue");
  }
  if (frequencyR >= 30 && frequencyR <= 32 && frequencyG >= 31 && frequencyG <= 32 &&  frequencyB >= 25 && frequencyB <= 26) {
    Serial.print("Green");
  }
  if (frequencyR >= 29 && frequencyR <= 30 && frequencyG >= 32 && frequencyG <= 33 &&  frequencyB >= 25 && frequencyB <= 26) {
    Serial.print("Red");
  }
  if (frequencyR >= 27 && frequencyR <= 28 && frequencyG >= 32 && frequencyG <= 33 &&  frequencyB >= 25 && frequencyB <= 26) {
    Serial.print("Orange");
  }
}


