
#include <LiquidCrystal.h>   

LiquidCrystal lcd(13, 12, 11, 10, 9, 8, 7);

void setup() {
  
  analogReference(DEFAULT);
  pinMode(A0, INPUT);         
  lcd.begin(16, 2);           

}
void loop() {
  float i ;                   
  int   YL69 ;

  i = analogRead(A0);                
  YL69 = 100 - (i * 100) / 1023 ;    
  lcd.clear();                       
  lcd.print("SM amount= ");          
  lcd.print(YL69);                   
  lcd.print("%");                    
  lcd.setCursor(2, 1);               
  lcd.print("Mohammad Amin");         
  delay(500);                        
}