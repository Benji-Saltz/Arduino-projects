//7 segment display
int segg=2;
int segf=3;
int sega=4;
int segb=5;
int sege=6;
int segd=7;
int segc=8;

void setup(){
  pinMode(sega,OUTPUT);
  pinMode(segb,OUTPUT);
  pinMode(segc,OUTPUT);
  pinMode(segd,OUTPUT);
  pinMode(sege,OUTPUT);
  pinMode(segf,OUTPUT);
  pinMode(segg,OUTPUT);
}
void zero(){
  digitalWrite(sega,HIGH);
  digitalWrite(segf,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);
  digitalWrite(sege,HIGH);
  digitalWrite(segb,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segf,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);
  digitalWrite(sege,LOW);
  digitalWrite(segb,LOW);
}
void one(){
  digitalWrite(segb,HIGH);
  digitalWrite(segc,HIGH);
  delay(500);
  digitalWrite(segb,LOW);
  digitalWrite(segc,LOW);
}
void two(){
  digitalWrite(sega,HIGH);
  digitalWrite(segb,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(sege,HIGH);
  digitalWrite(segd,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segb,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(sege,LOW);
  digitalWrite(segd,LOW);
}
void three(){
  digitalWrite(sega,HIGH);
  digitalWrite(segb,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segb,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);
}
void four(){
  digitalWrite(segf,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segb,HIGH);
  digitalWrite(segc,HIGH);
  delay(500);
  digitalWrite(segf,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segb,LOW);
  digitalWrite(segc,LOW);
}
void five(){
  digitalWrite(sega,HIGH);
  digitalWrite(segf,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segf,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);
}
void six(){
  digitalWrite(sega,HIGH);
  digitalWrite(segf,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);
  digitalWrite(sege,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segf,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);
  digitalWrite(sege,LOW);
}
void seven(){
  digitalWrite(sega,HIGH);
  digitalWrite(segb,HIGH);
  digitalWrite(segc,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segb,LOW);
  digitalWrite(segc,LOW);
}
void eight(){
  digitalWrite(sega,HIGH);
  digitalWrite(segf,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);
  digitalWrite(sege,HIGH);
  digitalWrite(segb,HIGH);
  delay(500);
  digitalWrite(sega,LOW);
  digitalWrite(segf,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);
  digitalWrite(sege,LOW);
  digitalWrite(segb,LOW);
}
void nine(){
  digitalWrite(sega,HIGH);
  digitalWrite(segf,HIGH);
  digitalWrite(segg,HIGH);
  digitalWrite(segc,HIGH);
  digitalWrite(segd,HIGH);  
  digitalWrite(segb,HIGH);
  delay(500);
   digitalWrite(sega,LOW);
  digitalWrite(segf,LOW);
  digitalWrite(segg,LOW);
  digitalWrite(segc,LOW);
  digitalWrite(segd,LOW);  
  digitalWrite(segb,LOW);
}
void loop(){
  zero();
//  delay(500);
  one();
//  delay(500);
  two();
//  delay(500);
  three();
//  delay(500);
  four();
//  delay(500);
  five();
//  delay(500);
  six();
//  delay(500);
  seven();
//  delay(500);
  eight();
//  delay(500);
  nine();
//  delay(500);
}
