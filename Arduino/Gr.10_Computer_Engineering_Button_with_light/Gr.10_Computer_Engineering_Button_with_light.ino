int led1=3;
int led2=2;
int button=4;
int buttonstate=0;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}
void loop(){
  buttonstate=digitalRead(button);
  Serial.println(buttonstate);
  if (buttonstate==1){
    digitalWrite(led1,HIGH); 
    delay(500);
       digitalWrite(led1,LOW); 
       delay(500);
  }
  else{
       digitalWrite(led2,HIGH);
       delay(500);
       digitalWrite(led2,LOW); 
       delay(500); 
  }
}

