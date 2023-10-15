int ledPins[] = {2,3,4,5,6};
  void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);


}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPins[0], HIGH);  // turn ON the LED on in ascending
  delay(1000); 
  digitalWrite(ledPins[1], HIGH);
  delay(1000); 
  digitalWrite(ledPins[2], HIGH);
  delay(1000); 
  digitalWrite(ledPins[3], HIGH);
  delay(1000); 
  digitalWrite(ledPins[4], HIGH);
  delay(1000); 
  digitalWrite(ledPins[4], LOW);// turn on the LED in descending 
  delay(1000);
  digitalWrite(ledPins[3], LOW);
  delay(1000);
  digitalWrite(ledPins[2], LOW);
  delay(1000);
  digitalWrite(ledPins[1], LOW);
  delay(1000);
  digitalWrite(ledPins[0], LOW);
  delay(1000);// wait for one second
}
