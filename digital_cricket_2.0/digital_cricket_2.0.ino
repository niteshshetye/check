int button1=2; //button for batsman consider b1
int button2=3; //button for batsman consider b2
int button3=4; //button for batsman consider b3
int button4=5; //button for batsman consider b4
int button5=6; //button for batsman consider b5
int button6=7; //button for batsman consider b6
int button7=8; //button for bowler consider b1
int button8=9; //button for bowler consider b2
int button9=10; //button for bowler consider b3
int button10=11; //button for bowler consider b4
int button11=12; //button for bowler consider b5
int button12=13; //button for bowler consider b6
int a=0; //runs per button
int sum=0;//total runs
int wickets = 0;//Wickets
void setup() 
{
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
  pinMode(button6,INPUT);
  pinMode(button7,INPUT);
  pinMode(button8,INPUT);
  pinMode(button9,INPUT);
  pinMode(button10,INPUT);
  pinMode(button11,INPUT);
  pinMode(button12,INPUT);
  Serial.begin(9600);
  
}


void loop() 
{
  while (wickets<10)
  {
  if ((digitalRead(button1)==HIGH and digitalRead(button7)== HIGH) or ((digitalRead(button2) == HIGH and digitalRead(button8)== HIGH)) or ((digitalRead(button3) == HIGH and digitalRead(button9)== HIGH)) or ((digitalRead(button4) == HIGH and digitalRead(button10)== HIGH)) or ((digitalRead(button5) == HIGH and digitalRead(button11)== HIGH)) or ((digitalRead(button6) == HIGH and digitalRead(button12)== HIGH)))
  {
    Serial.write("OUT!");
    delay(2000);
    wickets = wickets+1;
    sum=a;
    Serial.println(sum);
    a = 0;
  }
  else 
  {
    if (digitalRead(button1)== HIGH)
    {
      a = a+1;
      Serial.println(a);
      delay(2000);
    }
    else if (digitalRead(button2) == HIGH)
    {
      a = a+2;
      Serial.println(a);
      delay(2000);
    }
    else if (digitalRead(button3)== HIGH)
    {
      a = a+3;
      Serial.println(a);
      delay(2000);
    }
    else if (digitalRead(button4)== HIGH)
    {
      a = a+4;
      Serial.println(a);
      delay(2000);
    }
    else if (digitalRead(button5)== HIGH)
    {
      a = a+5;
      Serial.println(a);
      delay(2000);
    }
    else if (digitalRead(button6)== HIGH)
    {
      a = a+6;
      Serial.println(a);
      delay(2000);
    }
  }
  }
  if (wickets == 3)
  {
    exit("Thank You For Playing");
  }
} 
