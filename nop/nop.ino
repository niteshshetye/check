
#include <Keypad.h>
float temp1;
float temp2;
float q;
int k1=235.56;
int k2=300.56;
int k3=275.36;
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop()
{
              
              
              char key = keypad.getKey();
              int k;
              if(key==1)
              {
                k=k1;
              }
              else if(key==2)
              {
                k=k2;
              }
              else if(key==3)
              {
                k=k3;
              }
              Serial.println(k);
              
  
  
}
