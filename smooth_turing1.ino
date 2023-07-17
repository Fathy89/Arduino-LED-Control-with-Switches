// C++ code
// 
int amount =5; 
int j ; 
int b1;
int b2 ;
int count1 =1;
int count2= 1; 
void setup()
{
pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,INPUT);
pinMode(13,INPUT);

}

void loop()
{ b1=digitalRead(13); 
  b2=digitalRead(12); 
  if(b1==1){
    if(count1==1){
 analogWrite(9,255);
      analogWrite(10,128); count1++ ;}
 else if (b1==0&&count1==2)
   for(int i=255,j=127;i>=0,j>=0;j--,i--){
      analogWrite(13,i);
      analogWrite(12,j);}
 delay(50) ; count1==1;
}
      if (b2==1)
{ if(count2==1){
 analogWrite(5,255);
  analogWrite(6,128); count2++ ; }}
    else if (b2==0&&count2==2)
      for(int i=255,j=128;i>=0,j>=0;i--,j--){
      analogWrite(13,i);
      analogWrite(12,j);
 delay(50) ; count2==1;}

}

