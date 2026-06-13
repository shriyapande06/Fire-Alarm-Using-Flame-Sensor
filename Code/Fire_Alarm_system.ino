const int flamePin = 2;
const int buzzerPin = 8;
const int relayPin = 7;
const int ledPin = 13;

void setup()
{
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  Serial.println("Fire Alarm System Started");
}

void loop()
{
  int flameStatus = digitalRead(flamePin);

  if (flameStatus == LOW)
  {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);

    Serial.println("FIRE DETECTED!");
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);

    Serial.println("Area Safe");
  }

  delay(100);
}