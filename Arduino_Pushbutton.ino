 const int buttonPin = 4; //Pin4 for interfacing push button
    
 const int ledPin = 3;  //Pin to connect the LED
  
  //Variables
    int buttonState = 0;
void setup() {
  pinMode(ledPin, OUTPUT); 
     
  pinMode(buttonPin, INPUT);
   
    }

   void loop() {
    //Read button state
    buttonState = digitalRead(buttonPin);

    // If button pressed...
     if (buttonState == HIGH) {
    // turn led on
      digitalWrite(ledPin, HIGH);
      }
       else
   //turn led off
      digitalWrite(ledPin, LOW);
      }
    }
