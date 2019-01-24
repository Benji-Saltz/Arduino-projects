/*
// TCS230 color recognition sensor 
// Sensor connection pins to Arduino are shown in comments

Color Sensor      Arduino
-----------      --------

 VCC               5V
 GND               GND
 s0                8
 s1                9
 s2                12
 s3                11
 OUT               10
 OE                GND
*/
#include <Servo.h>

Servo myservo1;
Servo myservo2;

const int s0 = 2;  
const int s1 = 3;  
const int s2 = 4;  
const int s3 = 5;  
const int out = 6;  
int redPinOn = 1; //initialize colour pins
int bluePinOn = 2;
int greenPinOn = 3;
// colour variables  
int red = 0;  
int green = 0;  
int blue = 0;  

void forward() {
  for (int i=0; i<122 ; i++){
    myservo1.write(180);
    myservo2.write(0);

  }
}
void right() {
  for (int i=0; i<64 ; i++){
    myservo1.write(0);
    myservo2.write(0);

  }
}
void left() {
  for (int i=0; i<64 ; i++){
    myservo1.write(180);
    myservo2.write(180);

  }
}

void backwards() {
  for (int i=0; i<64 ; i++){
    myservo1.write(0);
    myservo2.write(180);

  }
}
void setup()   
{  
  Serial.begin(9600); //initialize serial monitor
  myservo1.attach(10);
  myservo2.attach(11);
  pinMode(s0, OUTPUT);  
  pinMode(s1, OUTPUT);  
  pinMode(s2, OUTPUT);  
  pinMode(s3, OUTPUT);  
  pinMode(out, INPUT);
  pinMode(redPinOn, OUTPUT);  
  pinMode(bluePinOn, OUTPUT); 
  pinMode(greenPinOn, OUTPUT); 

  digitalWrite(s0, HIGH);  
  digitalWrite(s1, HIGH);
}  
    
void loop() 
{   
  color(); //recieve colours from
  delay(100);
  digitalWrite(redPinOn, LOW); //write low to all the colour pins sent to arm
  digitalWrite(bluePinOn, LOW);
  digitalWrite(greenPinOn, LOW);
Serial.print("R Intensity:");  //print colour intensities
Serial.print(red, DEC);  
Serial.print(" G Intensity: ");  
Serial.print(green, DEC);  
Serial.print(" B Intensity : ");  
Serial.print(blue, DEC);  
Serial.println();  

  if (red < blue && red < green && red < 10) // if red is less then all other colours (therefore red colour)
  {  
digitalWrite(redPinOn, HIGH); //write high to red colour on arm
Serial.println(redPinOn); //print red pin
  right();
  Serial.println("Right");
  }  

  else if (blue < red && blue < green) // if blue is less then all other colours (therefore blue colour)  
  {    
 digitalWrite(bluePinOn, HIGH);  //write high to blue colour on arm
 Serial.println(bluePinOn); //print blue pin
  left(); 
  Serial.println("left");
  }  

  else if (green < red && green < blue)  // if green is less then all other colours (therefore green colour)
  {  
  
 digitalWrite(greenPinOn, HIGH);  //write high to green colour on arm
Serial.println(greenPinOn); //print green pin
forward();
Serial.println("forward"); 
  }
}  
 
    
void color()  // recieve colour intensities from sensor
{    
  digitalWrite(s2, LOW);  
  digitalWrite(s3, LOW);  
  //count OUT, pRed, RED  
  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s3, HIGH);  
  //count OUT, pBLUE, BLUE  
  blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s2, HIGH);  
  //count OUT, pGreen, GREEN  
  green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
}
