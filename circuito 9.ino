/*
Enlace Tinkercad
https://www.tinkercad.com/things/2wnGvouIJsp-circuito-9/editel?sharecode=UJsajsoQZh1kSVA39YTa_4HuSGH9_fcTYmwF7lCe9ao
*/

#define PIN_TONO A0
#define PIN_LED 5 

void setup()
{
  pinMode (PIN_TONO, INPUT);
  pinMode (PIN_LED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldr=analogRead(PIN_TONO);
  Serial.println(ldr);
  if(ldr >= 1017)
  {
    digitalWrite(PIN_LED, HIGH);
  }
  else if(ldr <= 488)
  {
    digitalWrite(PIN_LED, LOW);
  }
}
