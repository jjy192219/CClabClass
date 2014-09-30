int led = 13;
int buttonPin = 2;
int buttonState = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  
  Serial.begin(9600);
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  buttonState = digitalRead(buttonPin);
  
  if(buttonState ==HIGH){
     digitalWrite(led, HIGH);
     delay(1000);
  }  
  else{
    digitalWrite(led, LOW);   
    delay(1000);              
  }
}
