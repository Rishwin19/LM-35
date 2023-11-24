#include <elapsedMillis.h>     //funtion to replace delay();

bool ledState = false;        //set a default false value;

elapsedMillis timeElapsed;  

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);  // Read LM35 sensor value
  float temperature = (sensorValue * 0.0048828125) * 100.0;  // Convert sensor value to temperature in Celsius.100 should be the value used but i am having some difficulties using the online simulator and the values are exeeding beyond 200. To round it of to 20 i used 10.
  Serial.print(temperature);
  Serial.print("C    ");
 
  if (temperature < 30) {       //threshod temparature checking.
    manageLED(250);             
  } else {
    manageLED(125);
  }
}

void manageLED(int interval) {    //function to adjust the blinking of LED.
  if (timeElapsed >= interval) {
    timeElapsed = 0;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(13, ledState);
  }
}
