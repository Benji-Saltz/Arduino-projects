#include <Servo.h>

Servo myservoTL;//Top Left Motor
Servo myservoBR;//Bottom Right Motor
Servo myservoTR;//Top Right Motor
Servo myservoBL;//Bottom Left Motor
Servo myservoL;// Left Movement Motor
Servo myservoR;// Right Movement Motor
Servo myservoC;// Center Motor, Crane
int button=10; // button that allows "Up" function (crane up and down)
int buttonstate=0;


void forward() {// reponsible for forward movement
      for (int i=0; i<64 ; i++){
    myservoTL.write(0);
    myservoBR.write(180);
    myservoTR.write(0);
    myservoBL.write(180);
    Serial.print("Forward");
    delay(10);
  }
}

void backward() {// responsible for backward movement 
  for (int i=0; i<122 ; i++){
    myservoTL.write(180);
    myservoBR.write(0);
    myservoTR.write(180);
    myservoBL.write(0);
    Serial.print("Backward");
    delay(10);
  }
}

//void left() {//responsible for left movement 
//  for (int i=0; i<122 ; i++){
//    myservoL.write(180);
//    myservoR.write(180);
//Serial.print("Left");
//  }
//}

//void right() {//responsible for right movement 
//  for (int i=0; i<64 ; i++){
//    myservoR.write(0);
//    myservoL.write(0);
//Serial.print("Right");
//  }
//}

//void up() {//responsible for up and down of crane
//  for (int i=0; i<122 ; i++){
//    myservoC.write(180);
// Serial.print("Up");
//    delay(40) // allows crane to drop 
//    myservoC.write(0);
// Serial.print("Down");

//
//  }
//}

void stilly() {//acts to stop motors when no directions are in place or only x-axis is used

    myservoTL.write(90);
    myservoBR.write(90);
    myservoTR.write(90);
    myservoBL.write(90);
    Serial.print("StillY");

}
//void stillx() { // acts to stop motors when no directions are in place or only y-axis is used
//
//    myservoL.write(90);
//    myservoR.write(90);
//Serial.print("StillX");
//
//
//}
void setup() {
  myservoTL.attach(2);
  myservoBR.attach(3);
  myservoTR.attach(4);
  myservoBL.attach(5);
  myservoL.attach(6);
  myservoR.attach(7);
  myservoC.attach(8);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  //pinMode(button,INPUT_PULLUP);
  //Serial.begin(9600);
}
void loop() {
  //buttonstate=digitalRead(button); // two lines that allow movement for checking button
  //Serial.println(buttonstate);//prints button state
  int yIn=analogRead(A6);// senses where in the y axis the direction corresponds to
  //int xIn=analogRead(A7); // senses where in the x axis the direction corresponds to
  if (yIn>700) {// if joystick is moved in the down direction

    forward();
  } else if (yIn<300) {// if joystick is moved in the up direciton

    backward();
  }else{

  stilly(); // sits still otherwise
  }
//  if (xIn>700) { // if joystick is moved in the right direction
//
//    right();
//  } else if (xIn<300) {// if joystick is moved in the left direction
//
//    left();
//  } else{
//
//  stillx();// otherwise sits still
//  }
//if (buttonstate==1){// if button in joystick is pressed
  //up();
 
//}
}




