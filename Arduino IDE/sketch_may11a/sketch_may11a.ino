int (pinrojo) = 8;
int (pinambar) = 10;
int (pinverde)=13;
int (pinverdepeatones)=5;
int (pinrojopeatones)=4;
int (pulsador) = 2;
int(buzz)= 3;
void setup()
{
  pinMode(pinrojo, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(pinambar, OUTPUT);
  pinMode(pinverde, OUTPUT);
  pinMode(pinverdepeatones, OUTPUT);
  pinMode(pinrojopeatones, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop()
{
  digitalWrite(pinrojo , LOW);
  digitalWrite(pinambar , LOW);
  digitalWrite(pinverde , HIGH);
  digitalWrite(pinrojopeatones , HIGH);
  digitalWrite(pinverdepeatones , LOW);
  if (digitalRead (pulsador)== HIGH)
  {  
    digitalWrite(pinverde, LOW);
    digitalWrite(pinambar, HIGH);
    delay(1000);
    digitalWrite(pinambar, LOW);
    digitalWrite(pinrojo, HIGH);    
    digitalWrite(pinverdepeatones, HIGH);
    digitalWrite(pinrojopeatones, LOW);
    digitalWrite(buzz, HIGH);
    delay(750);
    digitalWrite(buzz, LOW);
    delay(750);
	digitalWrite(buzz, HIGH);
    delay(750);
    digitalWrite(buzz, LOW);
    delay(750);
	digitalWrite(buzz, HIGH);
    delay(750);
    digitalWrite(buzz, LOW);
    delay(750);
	digitalWrite(buzz, HIGH);
    delay(750);
    digitalWrite(buzz, LOW);
    delay(750);
    digitalWrite(buzz, HIGH);
    delay(750);
    digitalWrite(buzz, LOW);
   
   }
}
