
const int buttonPin1 = 2;  
const int buttonPin2 = 3;  
const int buttonPin3 = 4;  

const int ledPin1 = 5;     
const int ledPin2 = 6;    
const int ledPin3 = 7;     

void setup() {
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  
  
  if (buttonState1 == HIGH) {
    digitalWrite(ledPin1, HIGH);  
  } else {
    digitalWrite(ledPin1, LOW);   
  }
  
 
  if (buttonState2 == HIGH) {
    digitalWrite(ledPin2, HIGH);  
  } else {
    digitalWrite(ledPin2, LOW);   
  }
  
  
  if (buttonState3 == HIGH) {
    digitalWrite(ledPin3, HIGH);  
  } else {
    digitalWrite(ledPin3, LOW);  
  }
}