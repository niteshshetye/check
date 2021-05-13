int button1=1; //button for batsman consider b1
int button2=2; //button for batsman consider b2
int button3=3; //button for batsman consider b3
int button4=4; //button for batsman consider b4
int button5=5; //button for batsman consider b5
int button6=6; //button for batsman consider b6
int button7=7; //button for bowler consider b1
int button8=8; //button for bowler consider b2
int button9=9; //button for bowler consider b3
int button10=10; //button for bowler consider b4
int button11=11; //button for bowler consider b5
int button12=12; //button for bowler consider b6
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
  
  if ((digitalRead(button1)==LOW and digitalRead(button7)== LOW) or ((digitalRead(button2) == LOW and digitalRead(button8)== LOW)) or ((digitalRead(button3) == LOW and digitalRead(button9)== LOW)) or ((digitalRead(button4) == LOW and digitalRead(button10)== LOW)) or ((digitalRead(button5) == LOW and digitalRead(button11)== LOW)) or ((digitalRead(button6) == LOW and digitalRead(button12)== LOW)))
  {
    Serial.print("OUT! Next Batsman's Turn");
    wickets = wickets+1;
    Serial.print(a);
    a = 0;
   
  }
  else 
  {
    if (digitalRead(button1)== LOW)
    {
      a = a+1;
      Serial.print(a);
    }
    else if (digitalRead(button2) == LOW)
    {
      a = a+2;
      Serial.print(a);
    }
    else if (digitalRead(button3)== LOW)
    {
      a = a+3;
      Serial.print(a);
    }
    else if (digitalRead(button4)== LOW)
    {
      a = a+4;
      Serial.print(a);
    }
    else if (digitalRead(button5)== LOW)
    {
      a = a+5;
      Serial.print(a);
    }
    else if (digitalRead(button6)== LOW)
    {
      a = a+6;
      Serial.print(a);
    }
  }
  if (wickets == 3)
  {
    exit(0);
  }
} 
