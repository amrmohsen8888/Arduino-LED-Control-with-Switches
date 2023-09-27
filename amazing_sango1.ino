int led1= 3;
 int led2 = 5;
 int led3 = 6;
 int bt1 = 8;

 int led4 = 9;
 int led5 = 10;
 int led6 = 11;
 int bt2 = 2;

 int on = HIGH;
 int off = LOW;
  
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(bt1, INPUT);
  
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(bt2, INPUT);
}

void loop()
{
  if(digitalRead(bt1)==off)
  {
    analogWrite(led1, 128);
    analogWrite(led2, 255);
    analogWrite(led3, 0);
  }
  else
  {
    analogWrite(led4, 0);
    analogWrite(led5, 0);
    analogWrite(led6, 0);
  }
  
  if(digitalRead(bt2)==off)
  {
    analogWrite(led4, 255);
    analogWrite(led5, 0);
    analogWrite(led6, 128);
  }
  else
  {
    analogWrite(led4, 0);
    analogWrite(led5, 0);
    analogWrite(led6, 0);
  }
}