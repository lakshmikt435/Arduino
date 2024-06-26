const int temppin=A0;
const int buzzerpin=8;
const float threshold=5.0;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerpin,OUTPUT);
}
void loop()
{
  digitalWrite(buzzerpin,LOW);
  int sensorvalue=analogRead(temppin);
  float temp=sensorvalue*(3.0/1023.0)*10;
  Serial.println("Temperature : ");
  Serial.println(temp);
  Serial.print("Celsius");
  if(temp>threshold)
  {
    digitalWrite(buzzerpin,HIGH);
  }
  else
  {
    digitalWrite(buzzerpin,LOW);
  }
  delay(1000);
}
