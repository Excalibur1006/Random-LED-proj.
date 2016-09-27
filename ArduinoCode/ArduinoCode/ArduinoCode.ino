int redLEDpin= 13;  //declaring red LED pin
int greenLEDpin= 12;  //declaring variable for green LED pin
int orngLEDpin= 11; //decalring variable for orange LED pin
int localRandNum = 0;  //declaring paramiters for random number
int recvRandNum = 0;  //decalring variable for recieved random number
int delayOffTime= 1000;  //red LED off time
int delayOnTime= 1000; //red LED on time
int x= 13;

#include  <Wire.h>

void setup() {

  pinMode(redLEDpin,OUTPUT);
  pinMode(greenLEDpin,OUTPUT);
  pinMode(orngLEDpin,OUTPUT);
  Serial.begin(9600);
 
  Wire.begin(8); //join i2c bus (address optional for master)

}

void loop() {
  localRandNum = random(11,14); 
  Wire.beginTransmission(9);  //transmit to device #8
  Wire.write(randNum);        //sends variable "x" to master
  Wire.endTransmission(); //stop transmitting
  
                                                                                                                                                                                                                                                                                                          
  Serial.println(randNum);  //prints random number to serial monitor
  digitalWrite(randNum,HIGH);  //applying analog voltage to red LED
  delay(delayOnTime); //applying red on time delay
  digitalWrite(randNum,LOW);  //applying analog voltage to red LED
  delay(delayOffTime);  //applying red off time delay
    
}  
  
  
  

