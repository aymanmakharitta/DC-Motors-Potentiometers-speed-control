// C++ code
//
int buttony=9;
int buttong=8;
int botchy=A1;
int botchg=A0;
int mottorg=3;
int mottory=5;
int x=0;
int y=0;
void setup()
{
  pinMode(buttony,INPUT);  pinMode(buttong,INPUT);
  pinMode(botchy,INPUT);  pinMode(botchg,INPUT);
  pinMode(mottory,OUTPUT);  pinMode(mottorg,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
    
   if (Serial.available()){
  char reading=Serial.read();
   if (reading=='r'){x=1;}
     else if (reading=='l'){y=1;}
     else if (reading=='s'){x=0;y=0;}
    
    }
  if (digitalRead(buttony)==HIGH||x==1){
    analogWrite(mottory,analogRead(botchy)/4);}
 else if (digitalRead(buttony)==LOW||x==0){
    analogWrite(mottory,0);}
  

  if (digitalRead(buttong)==HIGH||y==1){
    analogWrite(mottorg,analogRead(botchg)/4);}
  else if (digitalRead(buttong)==LOW||y==0){
    analogWrite(mottorg,0);}
}