int redLEDpin= 13;  //declaring red LED pin
int redOffTime= 500;  //red LED off time
int redOnTime= 500; //red LED on time
int greenLEDpin= 12;  //declaring variable for green LED pin
int greenOffTime= 500; //green LED off time
int greenOnTime= 500;  //green LED on time
int orngLEDpin= 11; //decalring variable for orange LED pin
int orngOnTime=2000;  //orange LED on time
int orngOffTime= 2000;  //orange LED off time
int LEDvoltOn= 255;  //declaring LED on voltage
int LEDvoltOff= 0;  //declaring LED off voltage
long randNum;  //declaring int for random number



void setup() {
 pinMode(OUTPUT,redLEDpin); //declaring red LED pin
 pinMode(OUTPUT,greenLEDpin); //declaring green LED pin
 pinMode(OUTPUT,orngLEDpin);  //declaring orange LED pin
 Serial.begin(9600);  //declaring baud rate of 9600
}

void loop() {
  randNum = random(11,14);  //declaring paramiters for random number
  Serial.println(randNum);  //prints random number to serial monitor
  if(randNum = 13){ //if random number = 13 do this
    analogWrite(redLEDpin,LEDvoltOn);  //applying analog voltage to red LED
    delay(redOnTime); //applying red on time delay
    analogWrite(redLEDpin,LEDvoltOff);  //applying analog voltage to red LED
    delay(redOffTime);  //applying red off time delay
  }

  else if(randNum = 12) {   //If random number = 12 then do this
    analogWrite(greenLEDpin,LEDvoltOn);  //applying analog voltage to green LED
    delay(greenOnTime); //applying green on time delay
    analogWrite(greenLEDpin,LEDvoltOff);  //applying analog voltage to green LED
    delay(greenOffTime);  //applying green off time delay
  }

  else{ //if the above are false do this
    analogWrite(orngLEDpin,LEDvoltOn);  //applying analog voltage to orange LED
    delay(orngOnTime);  //applying orange on time delay
    analogWrite(orngLEDpin,LEDvoltOff); //applying analog voltage to orange LED
    delay(orngOffTime); //applying orange off time delay
  }
  delay(1000);
}
