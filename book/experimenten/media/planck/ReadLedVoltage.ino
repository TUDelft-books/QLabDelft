// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int sensorValue2 = analogRead(A5);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);

  if (voltage2 == 0.00){
    delay(10);
    if (voltage2 == 0.00){
      delay(10);
      if (voltage2 == 0.00){
      delay(2000);
      
        //while (true) {}
      }
    }
  }
  // print out the value you read:
  Serial.println(voltage);
  Serial.println(voltage2);
  delay(10);
}
