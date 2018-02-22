/*This simple program developed for measuring four sensor generated voltage and prfesented it on 16x2 LCD */
// basically tried for four gas sensors 
//data lines for lcd-5,4,3,2
//control lines 12 11 must connect with 4, 6 of LCD


#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
 {
  Serial.begin(9600);
  lcd.begin (16, 2);
  const int sensor1 = A0;
  const int sensor2 = A1;
  const int sensor3 = A2;
  const int sensor4 = A3;
}

void loop() 

{
  
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A1);
  int sensor3 = analogRead(A2);
  int sensor4 = analogRead(A3);
  float voltage1 = sensor1 * (5.0 / 1023.0);
  float voltage2 = sensor2 * (5.0 / 1023.0);
  float voltage3 = sensor3 * (5.0 / 1023.0);
  float voltage4 = sensor4 * (5.0 / 1023.0);
  

  Serial.print("sensor1 = ");
  Serial.println(sensor1);
  Serial.print("Volt1 = ");
  Serial.println(voltage1);
  
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.blink();
  lcd.print("Sensor1=");
  lcd.setCursor(8, 1);
  lcd.println(voltage1);
  lcd.setCursor(12, 1);
  lcd.print("V");
  delay(1000);



  Serial.print("sensor2= ");
  Serial.println (sensor2);
  Serial.print("Volt2 =");
  Serial.println(voltage2);
  lcd.setCursor(0, 1);
  lcd.blink();
  lcd.print("Sensor2=");
  lcd.setCursor(8, 1);
  lcd.println(voltage2);
  lcd.setCursor(12, 1);
  lcd.print("V");
  delay(1000);

  
  Serial.print("sensor3 = ");
  Serial.println (sensor3);
  Serial.print("Volt3 =");
  Serial.println(voltage3);
  lcd.setCursor(0,0);
  lcd.blink();
  lcd.print("Sensor3=");
  lcd.setCursor(8, 0);
  lcd.println(voltage3);
  lcd.setCursor(12, 0);
  lcd.print("V");
  delay(1000);        

  
  Serial.print("sensor4 = ");
  Serial.println (sensor4);
  Serial.print("Volt4 =");
  Serial.println(voltage4);
  lcd.setCursor(0,1);
  lcd.blink();
  lcd.print("Sensor4=");
  lcd.setCursor(8, 0);
  lcd.println(voltage4);
  lcd.setCursor(12, 0);
  lcd.print("V");
  delay(1000);  
     }
