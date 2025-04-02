const int pinoSensor = 2;
const int pinoLampada = 4;

bool estadoLampada = LOW;

void setup()
{
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLampada, OUTPUT);
  digitalWrite(pinoLampada, estadoLampada);
}

void loop()
{
  bool sensorAtivado = digitalRead(pinoSensor); 

  if(sensorAtivado && estadoLampada == LOW) {
    estadoLampada = HIGH;
    digitalWrite(pinoLampada, HIGH);
  } 
  else if (!sensorAtivado && estadoLampada == HIGH) {
    estadoLampada = LOW;
    digitalWrite(pinoLampada, LOW);
  }

  delay(100);
}
