/*
Enlace Tinkercad
https://www.tinkercad.com/things/3IiveoaOuKE-copy-of-circuito-9/editel?sharecode=QCfORCjJIPqhjbk1wijcwsdijc0UHH2FRfAFBnSZ8B0
*/


#define PIN_TONO A0
#define VERDE 5
#define AMARILLO 2
#define ROJO 4

void setup()
{
  pinMode(PIN_TONO, INPUT);
  pinMode(VERDE,OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(ROJO, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldr=analogRead(PIN_TONO);
  Serial.println(ldr);
  if(ldr >= 1017)
  {
    int ldr=analogRead(PIN_TONO);
  	Serial.println(ldr);
    digitalWrite(VERDE, LOW);
    digitalWrite(AMARILLO, LOW);
    digitalWrite(ROJO, HIGH);
  }
  else if(ldr >= 500)
  {
    int ldr=analogRead(PIN_TONO);
  	Serial.println(ldr);
    digitalWrite(VERDE, LOW);
    digitalWrite(ROJO, LOW);
    digitalWrite(AMARILLO, HIGH);
  }
  else
  {
    int ldr=analogRead(PIN_TONO);
  	Serial.println(ldr);
    digitalWrite(ROJO, LOW);
    digitalWrite(AMARILLO, LOW);
    digitalWrite(VERDE, HIGH);
  }
}
