const int LEDPin = 11;// Intialize Pin11 for connecting LED
const int LDRPin = A0;// Initialize PIN A0 LDR PIN
void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);// Define LED pin as output
  pinMode(LDRPin, INPUT);// Define LDR pin as input 
}
void loop() {

  int ldrStatus = analogRead(LDRPin); // read LDR lignt intensity as analog value
// Control LED based on LDR light intensity
  if (ldrStatus <= 500) {

    digitalWrite(ledPin, HIGH);

    Serial.print(" LIGHT ON : ");

    Serial.println(ldrStatus);

  } else {

    digitalWrite(ledPin, LOW);

    Serial.print("LIGHT OFF: ");

    Serial.println(ldrStatus);// Print LDR analog value on serial port
  }
}
