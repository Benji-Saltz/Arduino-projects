/*This code prints the key pressed on the keypad to the LCD display*/
#include <Keypad.h>
#include <LiquidCrystal.h>

const byte numRows= 4; //number of rows on the keypad
const byte numCols= 4;  //number of columns on the keypad

//keymap defines the key pressed according to the row and columns 
char keymap[numRows][numCols]= 
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

//Code that shows the the keypad connections to the Arduino terminals
byte rowPins[numRows] = {36,34,32,30};   //Rows 0 to 3
byte colPins[numCols] = {28,26,24,22};       //Columns 0 to 3

//initializes an instance of the Keypad class
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

LiquidCrystal lcd (8, 9, 4, 5, 6, 7);  // select the pins used on the LCD panel

void setup() {
       lcd.begin(16,2);
       lcd.print("Number");
}






//If key is pressed, this key is stored in 'keypressed' variable and printed out
void loop() {
      char keypressed = myKeypad.getKey();
      if (keypressed != NO_KEY) {
          lcd.setCursor(0,1);    // Place the cursor on the 0 position of the row 1
          lcd.print(keypressed);    //Print variable times which increase (+1)every time the loop is executed 
          delay(500);
     }
}

