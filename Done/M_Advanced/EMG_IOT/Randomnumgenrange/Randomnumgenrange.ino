int randomNumber;void setup(){

Serial.begin(9600);

}

void loop(){

randomNumber=random(100,500);

Serial.println(randomNumber);

delay(1000);

}