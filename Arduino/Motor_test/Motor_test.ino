#include <Servo.h>
Servo myservo1;
  int pos=0;
Servo myservo2;
void setup() {
myservo1.attach(9);
myservo2.attach(8);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo1.write(pos);
  myservo2.write(pos);
  pos++;

}
