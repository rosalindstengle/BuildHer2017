// Capacitive Touch Sensor Tutorial
 
// When Sig Output is high, touch sensor is being pressed
#define ctsPin 2// Pin for capactitive touch sensor
 
int LED = 13;

 
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);  
  pinMode(ctsPin, INPUT);
}
 
void loop() {
  int ctsValue = digitalRead(ctsPin);
  if (ctsValue == HIGH){
    digitalWrite(LED, HIGH);
    Serial.println("TOUCHED");
  }
  else{
    digitalWrite(LED,LOW);
    Serial.println("not touched");
  } 
  delay(500);
  
}

