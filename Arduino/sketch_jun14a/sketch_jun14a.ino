int button1 = 28;
int buttonstate1 = 0;
int button2 = 29;
int buttonstate2 = 0;
int button3 = 30;
int buttonstate3 = 0;
int button4 = 37;
int buttonstate4 = 0;
int button5 = 38;
int buttonstate5 = 0;
int button6 = 39;
int buttonstate6 = 0;
int button7 = 46;
int buttonstate7 = 0;
int button8 = 47;
int buttonstate8 = 0;
int button9 = 48;
int buttonstate9 = 0;
int buttonred = 49;
int buttonstatered = 0;
int buttongreen = 50;
int buttonstategreen = 0;
//decide
int buttondecide = 2;
int buttonstatedecide = 0;
int decideRED = 3;
int decideGREEN = 4;
void setup() {
  // put your setup code here, to run once:
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
  pinMode(buttondecide, INPUT);
//  pinMode(buttonrestart, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
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
  buttonstatedecide = digitalRead(buttondecide);
 // buttonstaterestart = digitalRead(buttonrestart);

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

}
