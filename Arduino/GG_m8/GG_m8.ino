int ldrPin = A0;
int Rpin=A2;
int Gpin=A3;
int Bpin=A4;
int ldrRead;              

void setup() {
Serial.begin (9600);   
}
void loop() {
ldrRead = analogRead (ldrPin);

 
Serial.print ( "Analog reading = " );
Serial.print (ldrRead);

if (ldrRead < 150) { 
  analogWrite(Rpin,255);
    analogWrite(Gpin,0);
      analogWrite(Bpin,0);
Serial.println ( " - Dark " );

} else if (ldrRead < 500) {
    analogWrite(Gpin,255);
       analogWrite(Rpin,0);
      analogWrite(Bpin,0);
Serial.println ( " – Light " );

} else if (ldrRead < 700) {
    analogWrite(Bpin,255);
       analogWrite(Gpin,0);
      analogWrite(Rpin,0);
Serial.println ( " – Bright " );

} else {
Serial.println ( " – Very Bright " );
}
delay (1000);}

