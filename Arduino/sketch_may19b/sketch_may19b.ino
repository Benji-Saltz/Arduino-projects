#include <Servo.h>

Servo myservo1;
Servo myservo2;

void forward() {
  for (int i=0; i<122 ; i++){
    myservo1.write(180);
    myservo2.write(0);
    delay(20);
  }
  delay(200);
}

void right() {
  for (int i=0; i<64 ; i++){
    myservo1.write(0);
    myservo2.write(0);
    delay(20);
  }
  delay(200);
}

void left() {
  for (int i=0; i<64 ; i++){
    myservo1.write(180);
    myservo2.write(180);
    delay(20);
  }
  delay(200);
}

void backwards() {
  for (int i=0; i<64 ; i++){
    myservo1.write(0);
    myservo2.write(180);
    delay(20);
  }
  delay(200);
}
void setup() {
  myservo1.attach(10);
  myservo2.attach(11);
}

void still() {
  for (int i=0; i<64 ; i++){
    myservo1.write(90);
    myservo2.write(90);
    delay(20);
  }
  delay(200);
}

void loop() {
  forward(); 
  left(); 
  right();
  backwards();
  still();
}

