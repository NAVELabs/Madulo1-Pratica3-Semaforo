int ledVerde = 3;
int ledAmarelo = 4;
int ledVermelho = 5;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
}