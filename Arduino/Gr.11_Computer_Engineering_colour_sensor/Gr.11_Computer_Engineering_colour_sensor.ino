#define s0 4
#define s1 5
#define s2 6
#define s3 7
#define sensorOut 8

int frequency=0;

void setup() {
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(sensorOut,INPUT);

  digitalWrite(s0,HIGH);
  digitalWrite(s1,LOW);

  Serial.begin(9600);

}

void loop() {
  
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);

  frequency= pulseIn(sensorOut, LOW);
  //frequency=map(frequency,25,70,255,0);
  Serial.print("R= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(100);
  
  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);
  
  frequency=pulseIn(sensorOut,LOW);
  //frequency=map(frequency,25,70,255,0);
  Serial.print("G= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(100);
  
   digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);
  
  frequency=pulseIn(sensorOut,LOW);
  //frequency=map(frequency,25,70,255,0);
  Serial.print("B= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(100); 
  

}
