#include<LiquidCrystal.h>
#include<DHT.h>

LiquidCrystal lcd(12,11,5,4,3,2);
DHT dht(8,DHT11);

double Light (int RawADC0)
{
  double Vout=RawADC0*0.0048828125;
  int lux=500/(10*((5-Vout)/Vout));//use this equation if the LDR is in the upper part of the divider
  //int lux=(2500/Vout-500)/10;
  return lux;
}

void setup() {
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  if(isnan(hum) || isnan(temp))
    lcd.print("Sensor failiure");
  else{
    lcd.print("Humidity: ");
    lcd.print(hum);
    lcd.print("%");
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print(" C");
  }
    
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Light Intensity:");
  lcd.setCursor(0,1);
  lcd.print(int(Light(analogRead(A0))));
  lcd.print(" Lux");
  delay(5000);
}
