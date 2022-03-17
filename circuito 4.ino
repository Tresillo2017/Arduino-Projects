/*
Enlace Tinkercad
https://www.tinkercad.com/things/3kMUbugylKa-copy-of-circuito-3/editel?sharecode=L7rgydotQXRBwvv5CX6eFqPULusGcW09OYphogjNPNw
*/




#define rojo_peatones 7
#define verde_peatones 6

#define verde_sem 9
#define amarillo_sem 10
#define rojo_sem 11

#define boton 12
#define tiempo 1000
#define buzz 4

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
      tone(buzz, 1000);
      delay(500);
      noTone(buzz);
      delay(1000);
      digitalWrite(amarillo_sem, LOW);
      tone(buzz,1000);
      delay(500);
      noTone(buzz);
      digitalWrite(rojo_sem, HIGH);
      tone(buzz, 1000);
      delay(500);
      noTone(buzz);
      delay(1000);
      digitalWrite(rojo_sem, LOW);
      digitalWrite(amarillo_sem, HIGH);
      digitalWrite(verde_peatones,LOW);
      digitalWrite(amarillo_sem, LOW);
      delay(100);
      //digitalWrite(verde_sem, HIGH);
      //digitalWrite(rojo_peatones, HIGH);
    }
}