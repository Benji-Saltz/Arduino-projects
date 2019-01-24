
//Date: 5/24/16
//By: Benji Saltz & Joel Fairbanks
//Description: Bobot uses light sensors to follow directions
#include <Servo.h>
//light sensors connect to the bobot through here
int ldrPin1 = A3;
int ldrPin2 = A4;
//pins that connect lights to bobot
int a = 2;
int b = 13;
// seperate reads for both light dependant resistors
int ldrRead1;
int ldrRead2;
// creates sound
int buzzer = 7;
//move wheels
Servo myservo1;
Servo myservo2;
//function which moves bobot forward and turns on lights
void forward() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  for (int i = 0; i < 122 ; i++) {
    myservo1.write(180);
    myservo2.write(0);
  }
}




void right() {
  //function which moves bobot right and turns on the right light on
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  for (int i = 0; i < 64 ; i++) {
    myservo1.write(0);
    myservo2.write(0);
  }
}



void left() {
  //function which moves bobot left and turns the left light on
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  for (int i = 0; i < 64 ; i++) {
    myservo1.write(180);
    myservo2.write(180);
  }
}



void backwards() {
  //function which moves bobot backwards and flickers lights and turns on siren
  for (int i = 0; i < 64 ; i++) {
    myservo1.write(0);
    myservo2.write(180);
  }
  tone(buzzer, 600);
  delay(250);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  tone(buzzer, 500);
  delay(250);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

}

// sets motors to not move while lights turn off
void still() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  myservo1.write(90);
  myservo2.write(90);
}
//sets up motors, lights and the buzzer
void setup() {
  Serial.begin (9600);
  myservo1.attach(10);
  myservo2.attach(11);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

// where commands and functions are inputted
void loop() {
  //where light dependant resistors are used to input functions 
  ldrRead1 = analogRead (ldrPin1);
  ldrRead2 = analogRead (ldrPin2);
  Serial.println (ldrRead1);
  //when both LDR are covered, the bobot uses function backwards
  if (ldrRead1 < 150 && ldrRead2 < 150) {
    backwards();
  } 
  // when the right LDR senses more light,the bobot uses function right
  else if (ldrRead1 - ldrRead2 < -100) {
    right();
  }
   // when the left LDR senses more light, the bobot uses function left
  else if (ldrRead1 - ldrRead2 > 100) {
    left();
  }
//when both LDR sense light, the bobot uses function forward
  else if (ldrRead2 > 350 && ldrRead1 > 350 ) {
    forward();
  }
  else {
    //when both LDR are neural, the bobot uses function still
    still();
  }
//turns off buzzer if not used
  noTone(buzzer);

}

