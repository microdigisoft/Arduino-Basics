// The setup function runs once when you press reset or power the board
void setup()
{
  // Initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// The loop function runs over and over again forever.
void loop()
{
  digitalWrite(13, HIGH); // Set the LED ON
  delay(1000); // Wait for a second
  digitalWrite(13, LOW); // Set the LED OFF
  delay(1000); // Wait for a second
}