// PROJECT BY DhruvProjects : https://github.com/DhruvsProjects
int photo = A1; //Attaching the photoresistor to pin A1
int led = 13; //Attaching the built-in led to pin 13 (LED_BUILTIN can also be used)
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Starting Serial communication
  pinMode(photo, INPUT); //Declaring pin A1 as an input
  pinMode(led, OUTPUT); //Declaring the built-in LED as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(photo); //Using AnalogRead to recieve data from the photoresistor
  Serial.println(lightValue); //Displaying readings on serial monitor
  if (lightValue <= 550) {
    digitalWrite(led, HIGH); // If light levels fall below a certain threshold, the built-in LED will be turned on

  } else {
    digitalWrite(led, LOW); // If light levels go above a certain threshold, the built-in LED will be turned off
  }
  delay(100); //short delay for stability
}
