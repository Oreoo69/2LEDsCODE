//PLEASE SUBSCRIBE
//@Oreo
void setup(){
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, INPUT);
}
void loop(){
  int x = digitalRead(6);
  Serial.println(x);
  if(x == 1)
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(8, HIGH);
    delay(500);
  }
}