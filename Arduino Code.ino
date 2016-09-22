int dTime = 500;

void setup() {
  pinMode(1,OUTPUT); //Declare pin 1 to be an output
  pinMode(2,OUTPUT); //Declare pin 2 to be an output
  pinMode(3,OUTPUT); //Declare pin 3 to be an output

}


void loop(){
  int r = rand() % 4; //Set r equivalent to the remainder of a random number divided by 4

  digitalWrite(r,HIGH); //Turn on a random pin
  delay(dTime); //Wait for dTime
  digitalWrite(r,LOW); //Turn off that same random pin
  delay(dTime); //Wait dTime

}
