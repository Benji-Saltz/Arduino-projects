int row[] = {30, 34, 42}; //anodes
int col[] = {46, 48, 50}; //cathodes

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], OUTPUT);
  }
  allOff();//call the function that turns all the LEDs off.
}

void loop() {
  //  digitalWrite(row[1], HIGH); //row[0] and row[2] turn on the two LEDs on the same col
  //  digitalWrite(col[1], LOW); //col[0] and col[2] turn on the two LEDs on the same row
  type1();
  delay(100);
  type2();
  delay(100);
}
void allOff() {
  for (int i = 0; i < 3; i++) { // sets all the columns to HIGH and all the rows to LOW.}

    int data1 [3][3] = {
      {1, 0, 1},
      {0, 1, 0},
      {1, 0, 1},
    };
  };
}
void type1() {
  for (int i = 0; i < 3; i++) { // sets all the columns to HIGH and all the rows to LOW.}

    int data1 [3][3] = {
      {1, 1, 1},
      {0, 0, 0},
      {1, 1, 1},
    };
  };
  digitalWrite(row[3], HIGH);
  digitalWrite(col[3], LOW);
}
void type2() {
  for (int i = 0; i < 3; i++) { // sets all the columns to HIGH and all the rows to LOW.}

    int data1 [3][3] = {
      {0, 0, 0},
      {1, 1, 1},
      {0, 0, 0},
    };
  };
  delay(100);
  digitalWrite(row[3], HIGH);
  digitalWrite(col[3], LOW);
}
//void loop(){
//  showPattern(data1); //send the pattern data 1 as a parameter to be shown
//  allOff();
//  delay(100); //pause between patterns
//}
void showPattern(int thisData[3][3]) {   //passing a 2D array as a parameter
  for (int time = 1; time < 100; time++) {
    for (int i = 0; i < 3; i++) {
      //turn all LEDs off, turn this row HIGH
      for (int j = 0; j < 3; j++) {
        if (thisData [i][j] == 1) {
          // turn this columns LOW
          delay(1);
        }
        else {
          digitalWrite (col[j], HIGH);
        }
      }
      delay(1);
    }   //close all the brackets before testing the function
  }
}


