/*
Enlace tinkercad
https://www.tinkercad.com/things/grWHL9ynkl4-copy-of-circuito-8/editel?sharecode=91_uFQcd-zt6_SZvNejkLblhypv_6ppHSog2Oy9WOeM
*/

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
bool pulsado = true;

int contador = 0;
#define tiempo 500


void setup()
{
  for(int p = 2; p<9; p++)
  {
    pinMode(p,OUTPUT);
  }
  pinMode(9, INPUT);
  Serial.begin(9600);
  cero();
}

void cero()
{
  	digitalWrite(A, LOW);
  	digitalWrite(B, LOW);
  	digitalWrite(C, LOW);
  	digitalWrite(D, LOW);
  	digitalWrite(E, LOW);
  	digitalWrite(F, LOW);
  	digitalWrite(G, HIGH);
}
  
void uno()
{
  	digitalWrite(A, HIGH);
  	digitalWrite(B, LOW);
  	digitalWrite(C, LOW);
  	digitalWrite(D, HIGH);
  	digitalWrite(E, HIGH);
  	digitalWrite(F, HIGH);
  	digitalWrite(G, HIGH);
}

void dos()
{
  	digitalWrite(A, LOW);
  	digitalWrite(B, LOW);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, LOW);
  	digitalWrite(E, LOW);
  	digitalWrite(F, HIGH);
  	digitalWrite(G, LOW);
}

void tres()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
 
void cuatro()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void cinco()
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void seis()
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void siete()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void ocho()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void nueve()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
 
 

 
 
void loop()
{
  	
  	//Serial.println(digitalRead(8));
 	if(digitalRead(9) == HIGH)
 	{
     	pulsado = true;
   		contador++;
    }
  	if(pulsado)
    {
      	delay(tiempo);
      	Serial.println(contador);
      	// Serial.println("Dentro del bucle");
      	pulsado = false;
 	switch (contador)
 	{
      	case 0:
      {
        	cero();
        	break;
      }
   		case 1:
      {
  			uno();
  			break;
      }
  		case 2:
      {
      		dos();
  			break;
      }
  		case 3:
      {
  			tres();
  			break;
      }
  		case 4:
      {
  			cuatro();
  			break;
      }
  		case 5:
      {
  			cinco();
  			break;
      }
  		case 6:
      {
  			seis();
  			break;
      }
  		case 7:
      {
  			siete();
  			break;
      }
  		case 8:
      {
  			ocho();
  			break;
      }
  		case 9:
      {
  			nueve();
        	contador = -1;
  			break;
      }
    }
 	}
}
