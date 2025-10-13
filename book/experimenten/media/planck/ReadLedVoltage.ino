// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A0 and A5:
  int sensorValue = analogRead(A0); // over the led + resistor
  int sensorValue2 = analogRead(A5); // over the resistor

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);

  // print the voltages measured
  Serial.println(voltage);
  Serial.println(voltage2);
  delay(1);

  // check if voltage has dropped to zero
  if (sensorValue2 <= 1 ){
    delay(1);
    sensorValue2 = analogRead(A5); 
    // read again and double check
    if (sensorValue2 <= 1 ){
      // if still zero, then stall or loop forever
      while (true){
        delay(10);
        sensorValue = analogRead(A0);
        // stall until button is pressed (sensorValue should be max) and break out of this loop.
        if (sensorValue >= 800){
          break;
        }
      }
    }
  }
  
}
