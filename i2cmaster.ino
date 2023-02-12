#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(7);                // join i2c bus with address #07h
  Serial.begin(9600);
  
}
byte cipher[2][6]={{88,91,66,79,78,89},{89,66,93,78,88,95}};
//byte i=0,j=0;
void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(7);//begin data transmission to slave devicewith address 07h
  for(int i=0;i<2;i++){
    for(int j=0;j<6;j++){
      Wire.write(cipher[i][j]);
    }
  }
  Wire.endTransmission();
  delay(100);
  
  
  
}
