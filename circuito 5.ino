/* 
Enlace Tinkercad
https://www.tinkercad.com/things/bZdwqdBzeEj-brave-curcan-kasi/editel?sharecode=2fTFN41US1NrThV--KHrreWv1gnOGeK6Sn2pWLd2dWQ
*/

#define led1 7
#define led2 2
#define led3 8
#define led4 4


#define tiempo 500

#define boton 1
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
	while(digitalRead(boton) == HIGH)
    {
      digitalWrite(led1, HIGH);
      delay(tiempo);
      digitalWrite(led1, LOW);
      delay(tiempo);
      digitalWrite(led2, HIGH);
      delay(tiempo);
      digitalWrite(led2, LOW);
    }
  	while(digitalRead(boton) == LOW)
    {
      digitalWrite(led3, HIGH);
      delay(tiempo);
      digitalWrite(led3, LOW);
      delay(tiempo);
      digitalWrite(led4, HIGH);
      delay(tiempo);
      digitalWrite(led4, LOW);
    }
}
