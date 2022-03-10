/*
Enlace Tinkercad
https://www.tinkercad.com/things/9sMqw70Y9Hk-copy-of-semaforo-1/editel?sharecode=37aNWS8SyPC3EKnuJE9e59TauVp-96WMBPo85Le2j7k
*/


void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(4000); // Espera por 4 segundo
  digitalWrite(8, LOW); 
  digitalWrite(6, HIGH);
  delay (3000); //Espera por 3 segundos 
  digitalWrite(6, LOW);
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH);
  delay(2000); // Espera por 2 segundos
}