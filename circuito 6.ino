/*
Enlace Tinkercad
https://www.tinkercad.com/things/eQeTcthVf7f-circuito-6/editel?sharecode=anw-LXv4YqBjaHYQPKrAzbSrjVh4Qb84y9YNGNhTq1k
*/

#define boton 2

#define inicio 12
void setup()
{
  pinMode(boton, INPUT);
  for(int p = 3; p<12; p++)
  {
    pinMode(p,OUTPUT);
  }
}


void izq()
{
// NO FUNCIONA; METODO TRADICIONAL
//   for(int p = inicio; p<=2 ; p--)
//   {
//   	digitalWrite(p,HIGH);
//     delay(500);
//     digitalWrite(p,LOW);
//   }
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  
}
void der()
{
  for(int p = 2; p<12 ; p++)
  {
    digitalWrite(p,HIGH);
    delay(500);
    digitalWrite(p,LOW);
  }
}

void loop()
{
  if(digitalRead(boton) == HIGH)
  {
   	izq();
  }
  if(digitalRead(boton)== LOW)
  {
    der();
  }
}
