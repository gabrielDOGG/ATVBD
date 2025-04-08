// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(2000); // ligado por 1000 millisegundos
  digitalWrite(9, LOW);
  delay(2000); // apagado por 1000 millisegundos)
  
  digitalWrite(10, HIGH);
  delay(3000); // ligado por 1000 millisegundos
  digitalWrite(10, LOW);
  delay(3000); // apagado por 1000 millisegundos)
  
  digitalWrite(11, HIGH);
  delay(4000); // ligado por 1000 millisegundos
  digitalWrite(11, LOW);
  delay(4000); // apagado por 1000 millisegundos)
  
  digitalWrite(12, HIGH);
  delay(5000); // ligado por 1000 millisegundos
  digitalWrite(12, LOW);
  delay(5000); // apagado por 1000 millisegundos)
}