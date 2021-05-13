int button1=1; //button for batsman consider b1
int button2=2; //button for batsman consider b2
int button3=4; //button for bowler consider b1
int button4=5; //button for bowler consider b2
int a=0; //total runs
int n1=0; //runs per button
void setup() 
{
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(a,OUTPUT);
}

void loop()
{
  if (digitalRead(button1)==digitalRead(button3) )//batsman b1= bowler b1 
  {
     Serial.print("OUT"); 
  }
  else if (digitalRead(button1)==digitalRead(button4))//batsman b1= bowler b2
  {
    n1=1;
    a=a+n1;
    Serial.print("a");
  }
  else if (digitalRead(button2)==digitalRead(button3))// batsman b2=bowler b1
  {
    n1=2;
    a=a+n1;
    Serial.print("a");
  }
  else if (digitalRead(button2)==digitalRead(button4))//batsman b2=bowler b2
  {
     Serial.print("OUT");
  }
  else 
  {
     Serial.print("DEAD BALL");
  }
}
