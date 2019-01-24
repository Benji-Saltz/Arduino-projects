#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;

void still() {
  for (int i=0; i<64 ; i++){
    myservo1.write(90);
    myservo2.write(90);
    myservo3.write(90);
    myservo4.write(90);
    myservo5.write(90);
    myservo6.write(90);
    myservo7.write(90);
  }
}
void setup() {
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  myservo7.attach(8);

}

void loop() {
  still();

}
