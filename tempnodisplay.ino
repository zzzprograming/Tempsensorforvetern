#include <Wire.h> //I2C
#include <SparkFun_TMP117.h>//spark fun library
TMP117 sensor;

void setup() {
  Serial.begin(115200); // start serial communication at 115200 baud
  Wire.setClock(400000); // set cloack speed to be fastest for better communication
  Serial.println("Display without OLED Screen");
  if(sensor.begin()==true)
  {
    serial.println("Begin");
  }
  else
  {
    serial.println("device is nto found");
    while(1);
  }
}


void loop() {
  if (sensor.dataReady()==true
  {

  Serial.print("Current temp: ");
  Serial.print(sensor.readTempC()); //function to read temp
  Serial.println(" °C");
  delay(1000);//delay added for easier readings
  }
}

