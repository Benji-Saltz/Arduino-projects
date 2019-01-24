#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo yourServo;


void setup() {
  myservo1.attach(10);
  myservo2.attach(11);
  yourServo.attach(A1);
}
void loop() {
  for (int i=0; i<122 ; i++){
    myservo1.write(random(180));
    myservo2.write(random (180));
  yourServo.write(random(180));
    delay(200);
       myservo1.write(random(300));
    myservo2.write(random (300));
  yourServo.write(random(300));
  }
}



