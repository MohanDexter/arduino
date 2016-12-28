//Powered by dexter
int irleft;
int irright;
void setup() 
{
  // put your setup code here, to run once:
pinMode(A0,OUTPUT);// Left LED
pinMode(A1,OUTPUT);// Right LED
pinMode(A2,OUTPUT);// LDR LDR
pinMode(A3,OUTPUT);//Right LDR
pinMode(A4,INPUT);// Left LDR 
pinMode(A5,INPUT);//Right LDR
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
analogWrite(A0,225);
analogWrite(A1,225);
analogWrite(A2,225);
analogWrite(A3,225);
Serial.begin(9600);
}
void loop() 
{
 digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  // put your main code here, to run repeatedly:
irright= analogRead(A4);
irleft= analogRead(A5);

if(irright>900)
{
Serial.println("r");
right();
}
 
else if (irleft>900)
{
Serial.println("l");
left();
}
else
{
Serial.println("s");

}

}

void right()
{Serial.println("r");
irright= analogRead(A4);
irleft= analogRead(A5);
digitalWrite(4,LOW);
if(irright>900)
{
right();
}
else
{
  Serial.println("s");
loop();
}
}

void left()
{Serial.println("l");
irright= analogRead(A4);
irleft= analogRead(A5);
digitalWrite(5,LOW);
if(irleft>900)
{
left();
}
else{
  Serial.println("s");
loop();
}
}


