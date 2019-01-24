#include <Keypad.h>
#include <LiquidCrystal.h>
double num1 = 0;
double num2 = 0;
double total = 0;
boolean numnew = false;
boolean addition = false;
boolean subraction = false;
boolean multiply = false;
boolean divide = false;
boolean isfloat = false;
int digits = 1;
int space = 0;


const byte numRows = 4; //number of rows on the keypad
const byte numCols = 4; //number of columns on the keypad

//keymap defines the key pressed according to the row and columns
char keymap[numRows][numCols] =
{
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', 'x'},
  {'.', '0', '=', '/'}
};

//Code that shows the the keypad connections to the Arduino terminals
byte rowPins[numRows] = {36, 34, 32, 30}; //Rows 0 to 3
byte colPins[numCols] = {28, 26, 24, 22};    //Columns 0 to 3

//initializes an instance of the Keypad class
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

LiquidCrystal lcd (8, 9, 4, 5, 6, 7);  // select the pins used on the LCD panel

void setup() {
  lcd.begin(16, 2);
  lcd.print(" ");
}



void LcdClearLine(int r) {
  lcd.setCursor(0, r);
  for (int i = 0; i < 16; i = i + 1) {
    lcd.print(" ");
  }
}



//If key is pressed, this key is stored in 'keypressed' variable and printed out
void loop() {
  char keypressed = myKeypad.getKey();
  /*if (keypressed != NO_KEY) {
    lcd.setCursor(0, 1);   // Place the cursor on the 0 position of the row 1
    lcd.print(keypressed);    //Print variable times which increase (+1)every time the loop is executed
    delay(500);
    }*/
  if (keypressed == '+') {
    addition = true;
    subraction = false;
    multiply = false;
    divide = false;
    numnew = true;
    isfloat = false;
    digits = 1;

  }
  else if (keypressed == '-') {
    addition = false;
    subraction = true;
    multiply = false;
    divide = false;
    numnew = true;
    isfloat = false;
    digits = 1;
  }
  else if (keypressed == 'x') {
    multiply = true;
    addition = false;
    subraction = false;
    divide = false;
    numnew = true;
    isfloat = false;
    digits = 1;
  }
  else if (keypressed == '/') {
    addition = false;
    subraction = false;
    multiply = false;
    divide = true;
    numnew = true;
    isfloat = false;
    digits = 1;
  }
  else if (keypressed == '.') {
    isfloat = true;
  }

  else if (keypressed >= '0' && keypressed <= '9') {
    if (numnew == true) {
      if (isfloat) {
        num2 = (num2 * (pow(10,digits)) + keypressed - '0') / (pow(10,digits));
        digits += 1;
      }
      else {
        num2 = num2 * 10  + keypressed - '0';
      }
      LcdClearLine(0);
      LcdClearLine(1);
      lcd.setCursor(0, 0);
      lcd.print("Enter a Number: ");
      lcd.setCursor(0, 1);
      lcd.print(num2);
    }
    else {
      if (isfloat) {
        num1 = (num1 * (pow(10,digits)) + keypressed - '0') / (pow(10,digits));
        digits += 1;
      }
      else {
        num1 = num1 * 10  + keypressed - '0';
      }

      LcdClearLine(0);
      LcdClearLine(1);
      //LcdClearLine(total);
      lcd.setCursor(0, 0);
      lcd.print("Enter a Number: ");
      lcd.setCursor(0, 1);
      lcd.print(num1);
    }
  }



  else if (keypressed == '=' ) {
    if (addition == true) {
      LcdClearLine(0);
      lcd.setCursor(0, 0);
      lcd.print(String(num1) + " + " + String(num2));
      total = num1 + num2;
      isfloat = false;
      digits = 1;
    }
    else if (subraction == true) {
      LcdClearLine(0);
      lcd.setCursor(0, 0);
      lcd.print(String(num1) + " - " + String(num2));
      total = num1 - num2;
      isfloat = false;
      digits = 1;
    }
    else if (multiply == true) {
      LcdClearLine(0);
      lcd.setCursor(0, 0);
      lcd.print(String(num1) + " x " + String(num2));
      total = num1 * num2;
      isfloat = false;
      digits = 1;
    }
    else if (divide == true) {
      LcdClearLine(0);
      lcd.setCursor(0, 0);
      lcd.print(String(num1) + " / " + String(num2));
      total = num1 / num2;
      isfloat = false;
      digits = 1;
    }

    LcdClearLine(1);
    lcd.setCursor(0, 1);
    lcd.print(char('='));
    lcd.print(total);
    if (num1 == 4 && num2 == 1 && subraction == true) {
      lcd.print(" Quick Maths");
    }
    num1 = 0;
    num2 = 0;
    numnew = false;
    addition == false;
    subraction == false;
    multiply == false;
    divide == false;
  }




}

