int touch = 13;
int sensorstate=0;
int relay=11;
void setup() {
  // put your setup code here, to run once:
pinMode(touch,INPUT);
pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 if (sensorstate==1){
  digitalWrite(relay, HIGH);
 }else{
  digitalWrite(relay,LOW);
 }

  touch= digitalRead(touch);
  Serial.println(sensorstate);
  

  // put your main code here, to run repeatedly:

}
