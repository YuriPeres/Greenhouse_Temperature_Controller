/*
 * Author: Yuri Peres
 * GitHub: https://github.com/YuriPeres
 */

 const byte SENSOR_TEMP = A0;
 const byte MOTOR_PIN = 9;
 const byte LED_PIN = 10;
 const byte BUZZER_PIN = 11;
 
 void setup() {
   pinMode(SENSOR_TEMP, INPUT);
   pinMode(MOTOR_PIN, OUTPUT);
   pinMode(LED_PIN, OUTPUT);
   pinMode(BUZZER_PIN, OUTPUT);
   
   Serial.begin(9600);
 }
 
 void loop() {
   int sensorValue = analogRead(SENSOR_TEMP);
   
   float voltage = sensorValue * (5.0 / 1023.0);
   float temperature = (voltage - 0.5) * 100;
   
   Serial.println("===================");
   Serial.print("Temperature: ");
   Serial.print(temperature, 2);
   Serial.println("C");
   Serial.println("===================");
   
   int motor_speed = 0;
   
   
   if (temperature >= 30) {
     Serial.println("|-- Engine on --|");
   }
   if (temperature >= 30 && temperature < 40) {
     motor_speed = 128; 
   } else if (temperature >= 40 && temperature < 50) {
     motor_speed = 200;
   } else if (temperature >= 50) {
     motor_speed = 255; 
     digitalWrite(LED_PIN, HIGH);
     digitalWrite(BUZZER_PIN, HIGH);
     Serial.println("| WARNING: Harmful temperature! |");
   } else {
     motor_speed = 0;
     Serial.println("|-- Engine off --|");
   }
 
   analogWrite(MOTOR_PIN, motor_speed);
   
   if (temperature < 50) {
     digitalWrite(LED_PIN, LOW);
     digitalWrite(BUZZER_PIN, LOW);
   }
 
   delay(2500);
 }