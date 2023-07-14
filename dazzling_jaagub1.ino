
int red=2;
int green=4;
int yellow=7;
int reading=0;
int market=0;
int counter=0;
int button=8;

void setup()
{
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(button,INPUT); 
}

void loop()
{
  reading=digitalRead(button);
  if(reading!= market){
    if(reading==HIGH){
      counter++;}
  }
  market=reading;
  if(counter==1)
  {digitalWrite(red,HIGH);}
  
  
  if(counter==2)
  {digitalWrite(green,HIGH);} 
  
   if(counter==3)
  {digitalWrite(yellow,HIGH);}
  if(counter==4)
  {counter=0;
   digitalWrite(red,LOW);
   digitalWrite(green,LOW);
   digitalWrite(yellow,LOW);
  }
}