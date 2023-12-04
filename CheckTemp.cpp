// C++ code
//
int temperatureSensor = A0 ;
void setup()
{
  Serial.begin(9600);
  
    
}

void loop()
{
  int reading = analogRead(temperatureSensor);
    //make the reading into voltage
float voltage = reading * (5.0 / 1023.0);
   //convert the voltage variable into celsiuse
  
float temperature =  (voltage - 0.5) * 100.0 ;
  // how display the temprtue in the serial monitor
  
  Serial.println(temperature);
  delay(1000);
}
