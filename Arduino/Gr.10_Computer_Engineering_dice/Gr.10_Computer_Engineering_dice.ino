int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int k = int(random(1, 6));
int button = 9;
int buttonstate = 0;
//int dicePins[] = {one, two, three, four, five, six};
void setup() {
  //  for (int i = 0; i < 5; i++) {
  //    pinMode(dicePins[i], OUTPUT);
  //  }
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);

}
void one() {
  digitalWrite(d, HIGH);
  delay(1000);
  digitalWrite(d, LOW);
}
void two() {
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
}
void three() {
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
}
void four() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void five() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void six() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void all() {
  int k = int(random(1, 7));
  if (k == 1) {
    one();
  } else if (k == 2) {
    two();
  } else if (k == 3) {
    three();
  } else if (k == 4) {
    four();
  } else if (k == 5) {
    five();
  } else if (k == 6) {
    six();
  }
}


void loop() {
  buttonstate = digitalRead(button);
  Serial.println(buttonstate);
  if (buttonstate == 0) {
    one();
    two();
    three();
    four();
    five();
    six();
  }
  if (buttonstate == 1) {
    all();
  }


}

