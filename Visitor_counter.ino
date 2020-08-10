
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int inputPin1 = 7;                // choose the pin for the LED
int inputPin2 = 6;               // choose the input pin (for PIR sensor)
int pir1State = LOW;             // we start, assuming no motion detected
int pir2State = LOW;
int val1 = 0;                    // variable for reading the pin status
int val2 = 0;
int count=0;
void IN()
{
    count++;
    lcd.clear();
    lcd.print("Person In Room:");
    lcd.setCursor(0,1);
    lcd.print(count);
    delay(1000);
}

void OUT()
{
  count--;
    lcd.clear();
    lcd.print("Person In Room:");
    lcd.setCursor(0,1);
    lcd.print(count);
    delay(1000);
}


void setup() {
  lcd.begin(16, 2);
  lcd.print("visitor counter!!");
  delay(1000);
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
   lcd.clear();
  lcd.print("Person In Room:");
  lcd.setCursor(0,1);
  lcd.print(count);
  Serial.begin(9600);
  
}

void loop() {
  val1 = digitalRead(inputPin1);// read input value
  val2 = digitalRead(inputPin2);
  
  if(val1==1)
  {
    \\delay(900);
    while(val2==0){
      val2 = digitalRead(inputPin2);
      Serial.println(val2);
    };
    if(val2==1)
    { 
      val1 = digitalRead(inputPin1);
     if(val1==0)
    { delay(10);
      IN();
    }}}; 
   delay(0);
   val1 = digitalRead(inputPin1);
  val2 = digitalRead(inputPin2);
  delay(1100);
  if(val1==0){if(val2==1)
  {
    delay(100);
    while(val1==0){
      val1 = digitalRead(inputPin1);
      Serial.print(val1);
    };
    if(val1==1)
    { 
      val2 = digitalRead(inputPin2);
     if(val2==0)
    {
      OUT();
     }}}}; 
}
 
