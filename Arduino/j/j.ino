#include <Servo.h>
//lights
//first letter represents a light which the second represents if its red or green.
int ar = 2;
int ag = 3;
int br = 4;
int bg = 5;
int cr = 6;
int cg = 7;
int dr = 8;
int dg = 9;
int er = 10;
int eg = 11;
int fr = 12;
int fg = 13;
int gr = 22;
int gg = 24;
int hr = 26;
int hg = 28;
int ir = 30;
int ig = 31;
//buttons
int button1 = 33;
int buttonstate1 = 0;
int button2 = 34;
int buttonstate2 = 0;
int button3 = 35;
int buttonstate3 = 0;
int button4 = 36;
int buttonstate4 = 0;
int button5 = 37;
int buttonstate5 = 0;
int button6 = 38;
int buttonstate6 = 0;
int button7 = 39;
int buttonstate7 = 0;
int button8 = 40;
int buttonstate8 = 0;
int button9 = 41;
int buttonstate9 = 0;
int buttonred = 42;
int buttonstatered = 0;
int buttongreen = 43;
int buttonstategreen = 0;
int buttondecide = 44;
int buttonstatedecide = 0;
boolean red = false;
boolean red1 = false;
boolean red2 = false;
boolean red3 = false;
boolean red4 = false;
boolean red5 = false;
boolean red6 = false;
boolean red7 = false;
boolean red8 = false;
boolean red9 = false;
boolean green = false;
boolean green1 = false;
boolean green2 = false;
boolean green3 = false;
boolean green4 = false;
boolean green5 = false;
boolean green6 = false;
boolean green7 = false;
boolean green8 = false;
boolean green9 = false;
///////////////////////////////////////////
//void decide(){
//
//}
void LED1RED() {
  if (red && buttonstate1 == 0 ) {
    red = false;
    red1 = true;
    digitalWrite(ar, HIGH);
    digitalWrite(ag, LOW);
    Serial.println("red1");
  }
}
void LED1GREEN() {
  if (green && buttonstate1 == 0 ) {
    green = false;
    green1 = true;
    digitalWrite(ar, LOW);
    digitalWrite(ag, HIGH);
    Serial.println("green1");
  }
}

void LED2RED() {
  if (red && buttonstate2 == 0 ) {
    red = false;
    red2 = true;
    digitalWrite(br, HIGH);
    digitalWrite(bg, LOW);
    Serial.println("red2");
  }
}
void LED2GREEN() {
  if (green && buttonstate2 == 0 ) {
    green = false;
    green2 = true;
    digitalWrite(br, LOW);
    digitalWrite(bg, HIGH);
    Serial.println("green1");
  }
}
void LED3RED() {
  if (red && buttonstate3 == 0 ) {
    red = false;
    red3 = true;
    digitalWrite(cr, HIGH);
    digitalWrite(cg, LOW);
    Serial.println("red3");
  }
}
void LED3GREEN() {
  if (green && buttonstate3 == 0 ) {
    green = false;
    green3 = true;
    digitalWrite(cr, LOW);
    digitalWrite(cg, HIGH);
    Serial.println("green3");
  }
}
void LED4RED() {
  if (red && buttonstate4 == 0 ) {
    red = false;
    red4 = true;
    digitalWrite(dr, HIGH);
    digitalWrite(dg, LOW);
    Serial.println("red4");
  }
}
void LED4GREEN() {
  if (green && buttonstate4 == 0 ) {
    green = false;
    green4 = true;
    digitalWrite(dr, LOW);
    digitalWrite(dg, HIGH);
    Serial.println("green4");
  }
}
void LED5RED() {
  if (red && buttonstate5 == 0 ) {
    red = false;
    red5 = true;
    digitalWrite(er, HIGH);
    digitalWrite(eg, LOW);
    Serial.println("red5");
  }
}
void LED5GREEN() {
  if (green && buttonstate5 == 0 ) {
    green = false;
    green5 = true;
    digitalWrite(er, LOW);
    digitalWrite(eg, HIGH);
    Serial.println("green5");
  }
}
void LED6RED() {
  if (red && buttonstate6 == 0 ) {
    red = false;
    red6 = true;
    digitalWrite(fr, HIGH);
    digitalWrite(fg, LOW);
    Serial.println("red6");
  }
}
void LED6GREEN() {
  if (green && buttonstate6 == 0 ) {
    green = false;
    green6 = true;
    digitalWrite(fr, LOW);
    digitalWrite(fg, HIGH);
    Serial.println("green6");
  }
}
void LED7RED() {
  if (red && buttonstate7 == 0 ) {
    red = false;
    red7 = true;
    digitalWrite(gr, HIGH);
    digitalWrite(gg, LOW);
    Serial.println("red7");
  }
}
void LED7GREEN() {
  if (green && buttonstate7 == 0 ) {
    green = false;
    green7 = true;
    digitalWrite(gr, LOW);
    digitalWrite(gg, HIGH);
    Serial.println("green7");
  }
}
void LED8RED() {
  if (red && buttonstate8 == 0 ) {
    red8 = false;
    digitalWrite(hr, HIGH);
    digitalWrite(hg, LOW);
    Serial.println("red8");
  }
}
void LED8GREEN() {
  if (green && buttonstate8 == 0 ) {
    green = false;
    green8 = true;
    digitalWrite(hr, LOW);
    digitalWrite(hg, HIGH);
    Serial.println("green8");
  }
}
void LED9RED() {
  if (red && buttonstate9 == 0 ) {
    red = false;
    red9 = true;
    digitalWrite(ir, HIGH);
    digitalWrite(ig, LOW);
    Serial.println("red9");
  }
}
void LED9GREEN() {
  if (green && buttonstate9 == 0 ) {
    green = false;
    green9 = true;
    digitalWrite(ir, LOW);
    digitalWrite(ig, HIGH);
    Serial.println("green9");
  }
}
void winRED() {
  //horizontal win
  if (red1 == true && red2 == true && red3 == true) {
    digitalWrite(ar, HIGH);
    digitalWrite(br, HIGH);
    digitalWrite(cr, HIGH);
    delay(500);
    digitalWrite(ar, LOW);
    digitalWrite(br, LOW);
    digitalWrite(cr, LOW);
  }
  if (red4 == true && red5 == true && red6 == true) {
    digitalWrite(dr, HIGH);
    digitalWrite(er, HIGH);
    digitalWrite(fr, HIGH);
    delay(500);
    digitalWrite(dr, LOW);
    digitalWrite(er, LOW);
    digitalWrite(fr, LOW);
  }
  if (red7 == true && red8 == true && red9 == true) {
        digitalWrite(gr, LOW);
    digitalWrite(hr, LOW);
    digitalWrite(ir, LOW);
        delay(500);
    digitalWrite(gr, HIGH);
    digitalWrite(hr, HIGH);
    digitalWrite(ir, HIGH);
    delay(500);
  }
  //vertical win
  if (red1 == true && red4 == true && red7 == true) {
    digitalWrite(ar, HIGH);
    digitalWrite(dr, HIGH);
    digitalWrite(gr, HIGH);
    delay(500);
    digitalWrite(ar, LOW);
    digitalWrite(dr, LOW);
    digitalWrite(gr, LOW);
  }
  if (red2 == true && red5 == true && red8 == true) {
    digitalWrite(br, HIGH);
    digitalWrite(er, HIGH);
    digitalWrite(hr, HIGH);
    delay(500);
    digitalWrite(br, LOW);
    digitalWrite(er, LOW);
    digitalWrite(hr, LOW);
  }
  if (red3 == true && red6 == true && red9 == true) {
    digitalWrite(br, HIGH);
    digitalWrite(er, HIGH);
    digitalWrite(ir, HIGH);
    delay(500);
    digitalWrite(br, LOW);
    digitalWrite(er, LOW);
    digitalWrite(ir, LOW);
  }
  //diagonal win
  if (red1 == true && red5 == true && red9 == true) {
    digitalWrite(ar, HIGH);
    digitalWrite(er, HIGH);
    digitalWrite(ir, HIGH);
    delay(500);
    digitalWrite(ar, LOW);
    digitalWrite(er, LOW);
    digitalWrite(ir, LOW);
  }
  if (red3 == true && red5 == true && red7 == true) {
    digitalWrite(cr, HIGH);
    digitalWrite(er, HIGH);
    digitalWrite(gr, HIGH);
    delay(500);
    digitalWrite(cr, LOW);
    digitalWrite(er, LOW);
    digitalWrite(gr, LOW);
  }
}
void winGREEN() {
  //horizontal win
  if (green1 == true && green2 == true && green3 == true) {
    digitalWrite(ag, HIGH);
    digitalWrite(bg, HIGH);
    digitalWrite(cg, HIGH);
    delay(500);
    digitalWrite(ag, LOW);
    digitalWrite(bg, LOW);
    digitalWrite(cg, LOW);
  }
  if (green4 == true && green5 == true && green6 == true) {
    digitalWrite(dg, HIGH);
    digitalWrite(eg, HIGH);
    digitalWrite(fg, HIGH);
    delay(500);
    digitalWrite(dg, LOW);
    digitalWrite(eg, LOW);
    digitalWrite(fg, LOW);
  }
  if (green7 == true && green8 == true && green9 == true) {
     digitalWrite(gg, LOW);
    digitalWrite(hg, LOW);
    digitalWrite(ig, LOW);
        delay(500);
    digitalWrite(gg, HIGH);
    digitalWrite(hg, HIGH);
    digitalWrite(ig, HIGH);
  }
  //vertical win
  if (green1 == true && green4 == true && green7 == true) {
    digitalWrite(ag, HIGH);
    digitalWrite(dg, HIGH);
    digitalWrite(gg, HIGH);
    delay(500);
    digitalWrite(ag, LOW);
    digitalWrite(dg, LOW);
    digitalWrite(gg, LOW);
  }
  if (green2 == true && green5 == true && green8 == true) {
    digitalWrite(bg, HIGH);
    digitalWrite(eg, HIGH);
    digitalWrite(hg, HIGH);
    delay(500);
    digitalWrite(bg, LOW);
    digitalWrite(eg, LOW);
    digitalWrite(hg, LOW);
  }
  if (green3 == true && green6 == true && green9 == true) {
    digitalWrite(bg, HIGH);
    digitalWrite(eg, HIGH);
    digitalWrite(ig, HIGH);
    delay(500);
    digitalWrite(bg, LOW);
    digitalWrite(eg, LOW);
    digitalWrite(ig, LOW);
  }
  //diagonal win
  if (green1 == true && green5 == true && green9 == true) {
    digitalWrite(ag, HIGH);
    digitalWrite(eg, HIGH);
    digitalWrite(ig, HIGH);
    delay(500);
    digitalWrite(ag, LOW);
    digitalWrite(eg, LOW);
    digitalWrite(ig, LOW);
  }
  if (green3 == true && green5 == true && green7 == true) {
    digitalWrite(cg, HIGH);
    digitalWrite(eg, HIGH);
    digitalWrite(gg, HIGH);
    delay(500);
    digitalWrite(cg, LOW);
    digitalWrite(eg, LOW);
    digitalWrite(gg, LOW);
  }
}
void setup() {
  Serial.begin(9600);
  pinMode(ar, OUTPUT);
  pinMode(ag, OUTPUT);
  pinMode(br, OUTPUT);
  pinMode(bg, OUTPUT);
  pinMode(cr, OUTPUT);
  pinMode(cg, OUTPUT);
  pinMode(dr, OUTPUT);
  pinMode(dg, OUTPUT);
  pinMode(er, OUTPUT);
  pinMode(eg, OUTPUT);
  pinMode(fr, OUTPUT);
  pinMode(fg, OUTPUT);
  pinMode(gr, OUTPUT);
  pinMode(gg, OUTPUT);
  pinMode(hr, OUTPUT);
  pinMode(hg, OUTPUT);
  pinMode(ir, OUTPUT);
  pinMode(ig, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  pinMode(button9, INPUT);
  pinMode(buttonred, INPUT);
  pinMode(buttongreen, INPUT);
}
void loop() {
  buttonstatered = digitalRead(buttonred);
  buttonstategreen = digitalRead(buttongreen);
  buttonstate1 = digitalRead(button1);
  buttonstate2 = digitalRead(button2);
  buttonstate3 = digitalRead(button3);
  buttonstate4 = digitalRead(button4);
  buttonstate5 = digitalRead(button5);
  buttonstate6 = digitalRead(button6);
  buttonstate7 = digitalRead(button7);
  buttonstate8 = digitalRead(button8);
  buttonstate9 = digitalRead(button9);
  Serial.print(buttonstatered);
  Serial.print(" ");
  Serial.println(buttonstategreen);
  //  Serial.println(buttonstate1);
  //  Serial.println(buttonstate2);
  //  Serial.println(buttonstate3);
  //  Serial.println(buttonstate4);
  //  Serial.println(buttonstate5);
  //  Serial.println(buttonstate6);
  //  Serial.println(buttonstate7);
  //  Serial.println(buttonstate8);
  //  Serial.println(buttonstate9);

  if (buttonstatered == 0) {
    red = true;
  }
  if (buttonstategreen == 0) {
    green = true;
  }
  //red
  LED1RED();
  LED2RED();
  LED3RED();
  LED4RED();
  LED5RED();
  LED6RED();
  LED7RED();
  LED8RED();
  LED9RED();
  //green
  LED1GREEN();
  LED2GREEN();
  LED3GREEN();
  LED4GREEN();
  LED5GREEN();
  LED6GREEN();
  LED7GREEN();
  LED8GREEN();
  LED9GREEN();
  //winning
  winGREEN();
  winRED();
  //make a randomizer which chooses who goes first. A button which will make the light red or green randomly.
}
