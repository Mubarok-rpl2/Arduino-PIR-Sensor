int pirsensor = 0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  pirsensor = digitalRead(2);
  if (pirsensor == HIGH){
   digitalWrite(13,HIGH);
}
else {
  digitalWrite(13,LOW);
}
  delay(10); // Wait for 1000 millisecond(s)
}