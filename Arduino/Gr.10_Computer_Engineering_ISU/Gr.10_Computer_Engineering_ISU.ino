int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int speeda = 0;
int speedb = 0;
int speedc = 0;
int speedd = 0;
int speede = 0;
int speedf = 0;
int k = int(random(1, 6));
int button=9;
int buttonstate = 0;
void setup() {
  // put your setup code here, to run once:
  //motors
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
    pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   buttonstate = digitalRead(button);
  Serial.println(buttonstate);
  if(buttonstate==1){
all();
  }
}
//speed
void stage1{
  digitalWrite(a, HIGH);
  speeda = 10;
  digitalWrite(b, HIGH);
  speedb = 7;
  digitalWrite(c, HIGH);
  speedc = 3;
  digitalWrite(d, HIGH);
  speedd = 8;
  digitalWrite(e, HIGH);
  speede = 4;
  digitalWrite(f, HIGH);
  delay = 200;
}
void stage2{
  digitalWrite(a, HIGH);
  speeda = 4;
  digitalWrite(b, HIGH);
  speedb = 6;
  digitalWrite(c, HIGH);
  speedc = 1;
  digitalWrite(d, HIGH);
  speedd = 8;
  digitalWrite(e, HIGH);
  speede = 2;
  digitalWrite(f, HIGH);
  delay = 200;
}
void stage3{
  digitalWrite(a, HIGH);
  speeda = 2;
  digitalWrite(b, HIGH);
  speedb = 8;
  digitalWrite(c, HIGH);
  speedc = 3;
  digitalWrite(d, HIGH);
  speedd = 9;
  digitalWrite(e, HIGH);
  speede = 4;
  digitalWrite(f, HIGH);
  delay = 200;
}
void stage4{
  digitalWrite(a, HIGH);
  speeda = 6;
  digitalWrite(b, HIGH);
  speedb = 10;
  digitalWrite(c, HIGH);
  speedc = 3;
  digitalWrite(d, HIGH);
  speedd = 9;
  digitalWrite(e, HIGH);
  speede = 1;
  digitalWrite(f, HIGH);
  delay = 200;
}
void stage5{
  digitalWrite(a, HIGH);
  speeda = 6;
  digitalWrite(b, HIGH);
  speedb = 2;
  digitalWrite(c, HIGH);
  speedc = 10;
  digitalWrite(d, HIGH);
  speedd = 2;
  digitalWrite(e, HIGH);
  speede = 3;
  digitalWrite(f, HIGH);
  delay = 200;
}
void all() {
  int k = int(random(1, 7));
  if (k == 1) {
    stage1();
  } else if (k == 2) {
    stage2():
    } else if (k == 3) {
    stage3();
  } else if (k == 4) {
    stage4();
  } else if (k == 5) {
    stage5();
  } else if (k == 6) {
    stage6();
  }
}

