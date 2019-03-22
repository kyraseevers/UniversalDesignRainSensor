void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  if(sensorValue < 950 && sensorValue > 800){
    digitalWrite(11, HIGH);
    delay(20);
    digitalWrite(11, LOW);
    delay(20);
  } else if(sensorValue < 800){
    digitalWrite(11, HIGH);
  } else{
    digitalWrite(11, LOW);
  }
  // print out the value you read:
  Serial.println(sensorValue);
  delay(2000);        // delay in between reads for stability
}
