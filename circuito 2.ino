/*
Enlace Tinkercad
https://www.tinkercad.com/things/2eUxTDnIKlI-copy-of-semaforo-de-coches-y-peatones-con-boton/editel?sharecode=WPQtRHhw2hHwhphROBdE2Q64i1Cl3QRtQfUQG_QxrQA
*/




void setup()
{
    pinMode(13, OUTPUT);
    pinMode(12, INPUT);
    Serial.begin(9600);
}

void loop()
{
    if (digitalRead(12) == HIGH)
    {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(2, HIGH);
        Serial.print("Boton pulsado\n");
        delay(5000); // 5s
    }
    else
    {

        digitalWrite(3, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(3, LOW);
        delay(500); // Espera por 0.5 segundo
        digitalWrite(2, HIGH);
        delay(900); // Espera por 0.9 segundos
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(4, HIGH);
        delay(1000); // Espera por 1 segundos
        digitalWrite(4, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, HIGH);
        delay(400); // Espera por 0.4 segundos
    }
}