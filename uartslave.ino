void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    char data_rcvd = Serial.read();//read data from the Rx pin in the arduino.
    printf("%s",data_rcvd);  
  }
  
  

}