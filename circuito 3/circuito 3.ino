/*
Enlace Tinkercad
https://www.tinkercad.com/things/aVf3voD0RnS-circuito-3/editel?sharecode=sIJgj-BU-9ryngiTrJYLNZ9GjYWv7pbMAMjMX5H6ezQ
*/




#define rojo_peatones 7
#define verde_peatones 6

#define verde_sem 9
#define amarillo_sem 10
#define rojo_sem 11

#define boton 12
#define tiempo 1000

int estado = 0;

void setup()
{
    pinMode(rojo_peatones, OUTPUT);
    pinMode(verde_peatones, OUTPUT);
    pinMode(verde_sem, OUTPUT);
    pinMode(amarillo_sem, OUTPUT);
    pinMode(rojo_sem, OUTPUT);
    pinMode(boton, INPUT);
    Serial.begin(9600);
}



void loop() 
{
  	digitalWrite(verde_sem, HIGH);
  	digitalWrite(rojo_peatones, HIGH);
    if (digitalRead(boton) == HIGH)
    {
      digitalWrite(verde_sem, LOW);
      digitalWrite(amarillo_sem, HIGH);
      digitalWrite(rojo_peatones, LOW);
      digitalWrite(verde_peatones, HIGH);
      delay(1000);
      digitalWrite(amarillo_sem, LOW);
      digitalWrite(rojo_sem, HIGH);
      delay(1000);
      digitalWrite(rojo_sem, LOW);
      digitalWrite(amarillo_sem, HIGH);
      digitalWrite(verde_peatones,LOW);
      digitalWrite(amarillo_sem, LOW);
      delay(1000);
      //digitalWrite(verde_sem, HIGH);
      //digitalWrite(rojo_peatones, HIGH);
    }
}