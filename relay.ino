int relayPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin,HIGH);
  delay(250);
  digitalWrite(relayPin,LOW);
  delay(250);
}
