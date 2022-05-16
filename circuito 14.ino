/*
Enlace Tinkercad
https://www.tinkercad.com/things/bgGGDPiEPd6-tomas-palma-sanchez-/editel?sharecode=--EzJIOiGhWq05xM5TJBhd1Vlw6u9NhLpDSO6yoaeBE
*/

long valor(int triggerPin, int echoPin)
  
{
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
pinMode(echoPin, INPUT);
return pulseIn(echoPin, HIGH);
}

void setup()
{
Serial.begin(9600);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(11, OUTPUT);
}

void loop()
{
  int dist = 0.01723 * valor(5, 4);
  Serial.println(dist);
  if (dist < 75) 
  {
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  tone(11, 523, 500); 
  delay(500); 
  } 
  else 
  {
    if (0.01723 * valor(5, 4) < 125) 
    {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    tone(11, 523, 500); 
    delay(1000); 
    }
    else 
    {
    noTone(11);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    }
  }
}
