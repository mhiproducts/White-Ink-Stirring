// WIMS Motor/Agitation Motor Assembly Code
// This example uses an Arduino two-channel relay to control the WIMS pump/agitation motor within a specified period.

// Authored by: Trevor Snodgrass
// Last Modified: 2016

int pumpActivationPin = 7; // Pin to Activate Pump
int potPin = A0;           // Connect a potentiometer to analog pin A0

void setup() {
  pinMode(pumpActivationPin, OUTPUT);
  digitalWrite(pumpActivationPin, HIGH); // Ensure the pump is initially deactivated
}

void controlMotor(int activationTime) {
  digitalWrite(pumpActivationPin, LOW);
  delay(activationTime);
  digitalWrite(pumpActivationPin, HIGH);
  delay(activationTime);
}

void loop() {
  int activationTime = analogRead(potPin); // Read the potentiometer value
  controlMotor(activationTime);
}
