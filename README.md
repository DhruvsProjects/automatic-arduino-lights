# automatic-arduino-lights
A basic arduino project to create an automatic lighting system while understanding the working of a photoresistor.

Components needed:
1) A microcontroller (An Arduino UNO R3 was used in this project)
2) Jumper wires
3) Resistor(Resistance depending on the sensitvity of lights based on your application)
4) Photoresistor
5) Breadboard
We will be using the built in LED of the arduino (which is assigned to pin 13 for most boards) as using an LED close to the photoresistor will cause interference 
**Circuit Diagram**:
![image](https://github.com/user-attachments/assets/e041cecb-885c-4760-85d8-0e786f7efb88)

***Code:***
```

// PROJECT BY DhruvProjects : https://github.com/DhruvsProjects
int photo = A1;   //Attatching the photoresistor to pin A1
int led = 13;   //Attatching the built in led to pin 13 (LED_BUILTIN can also be used)
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);   //Starting Serial communication
pinMode(photo,INPUT); //Declaring pin A1 as an input
pinMode(led,OUTPUT);  //Declaring the builtin LED as an output
}

void loop() {
  // put your main code here, to run repeatedly:
int lightValue = analogRead(photo); //Using AnalogRead to recieve data from the photoresistor
Serial.println(lightValue); //Displaying readings on serial monitor
if (lightValue<=550){
  digitalWrite(led,HIGH);   // If light levels fall below a certain threshold, the built in LED will be turned on

}
else{
  digitalWrite(led,LOW);    //// If light levels go above a certain threshold, the built in LED will be turned off
}
delay(100); 
}

```

   

   
