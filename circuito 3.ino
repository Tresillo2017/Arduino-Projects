/*
Enlace Tinkercad

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
    if (digitalRead(boton) == HIGH)
    {
      	estado == 1;
      	if (estado == 0) estado =1;
      	else estado = 1;
      	if (estado == 1)
        {
        	digitalWrite(rojo_sem,HIGH);
        	digitalWrite(amarillo_sem,LOW);
        	digitalWrite(verde_sem,LOW);
        	digitalWrite(verde_peatones,HIGH);
          	delay(tiempo); //5s
        	digitalWrite(rojo_peatones, LOW);
        	Serial.print("Boton pulsado\n");
        	delay(tiempo); //5s
        }
      	else
        {
      	digitalWrite(rojo_peatones, HIGH);
        digitalWrite(verde_peatones, LOW);
        digitalWrite(verde_sem, HIGH);
    	digitalWrite(rojo_sem, LOW);
    	digitalWrite(amarillo_sem, LOW);
    	delay(tiempo); // Espera por 0.5 segundo
    	digitalWrite(verde_sem, LOW);
    	digitalWrite(rojo_sem, LOW);
    	digitalWrite(amarillo_sem, HIGH);
    	delay(tiempo); //Espera por 0.9 segundos
    	digitalWrite(verde_sem, LOW);
    	digitalWrite(rojo_sem, HIGH);
    	digitalWrite(amarillo_sem, LOW);
    	delay (tiempo); //Espera por 1 segundos
        }
    }

}