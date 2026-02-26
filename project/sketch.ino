int led = 21;


void setup()
{
 pinMode(led, OUTPUT); //função de saída de pino 13 
}

void loop()
{
 digitalWrite(led, HIGH); //acende o led
 delay(2000); //por 2 segundos
 digitalWrite(led, LOW); // apaga o led
 delay(2000); //por 2 segundos
}