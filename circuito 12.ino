/*
Enlace tinkercad
https://www.tinkercad.com/things/9wi25uVbuJz-copy-of-circuito-8/editel?sharecode=UR6l5SPeLLOPdEZXisVS31CqMWuGDXXFSOFud9gnRKY
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
  	int valor = 0;
  	Serial.println("Introduce un numero entre 0 y 9");
  	while(Serial.available() <= 0)
    {
      // esperando
    }
  	valor = Serial.parseInt();
  	while(Serial.available() > 0)
    {
      int novale = Serial.parseInt();
    }
 	switch (valor)
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
  			break;
      }
    }
}
