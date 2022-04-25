/*
Enlace TInkercad
https://www.tinkercad.com/things/0g13RYPFAtK-grand-waasa/editel?sharecode=xid7pV1uLvk0ANg8YNyyLKGwu6-clDUTGh2xhsc4HTU
*/

# define led 3
int i;
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
    i = 0;
    while (i <= 255)
    {
        analogWrite(led, i);
        delay(50);
        i = i + 5;
    }

   	i = 255;
    while (i >= 0)
    {
        analogWrite(led, i);
        delay(50);
        i = i - 5;
    }
}
