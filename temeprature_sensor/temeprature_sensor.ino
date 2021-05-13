#include <LiquidCrystal.h>
float temp1;
float temp2;
float q;
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print(" Digital ");
  lcd.setCursor(0,1);
  lcd.print(" Heat Flux ");
  lcd.clear();
  delay (3000);
 
}

void loop() 
{            
              lcd.display(); 
              lcd.setCursor(0,0);            
              temp1=analogRead(A0);
              temp2=analogRead(A1);
              temp1 =temp1 * 0.48828125;
              temp2 =temp2 * 0.48828125;                              
              q= 378*(temp2-temp1)/0.1 ;
              lcd.setCursor(0,0);
              lcd.print("Heat Flux ");
              lcd.setCursor(0,1);
              lcd.print(q);
              lcd.setCursor(9,1);
              lcd.print("W/m^2");
              delay(5000);
             
              
  
  }
