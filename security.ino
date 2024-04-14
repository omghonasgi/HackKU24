#include <LiquidCrystal.h>
#include <Servo.h>
#include <Bonezegei_DHT11.h>

Servo myservo;

const int echo = 10;
const int trig = 9;
const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
const int serv = 6;
const int nums[] = {16738455, 16724175, 16718055, 16743045, 16716015, 16726215, 16734885, 16728765, 16730805, 16732845};

long duration;
Bonezegei_DHT11 dht(8);
int distance;
int pos = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  lcd.begin(16, 2);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
  myservo.attach(6);
}

// Code for supersonic sensor to detect if something is there and how far it is
void ultra(){
  lcd.clear();
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);

  distance = duration * .03 / 4;
  if (distance >= 422){
    lcd.print("No object found");
  }
  else{
    lcd.print(distance);
    lcd.print(" Inches Away");    
  }
  delay(10);
}

//checks for infrared signal to see if there would be a fire
void fire(){
  if (dht.getData()) {
    float Farenheit = dht.getTemperature(true);
    if (Farenheit > 120){
      lcd.setCursor(0, 1);
      lcd.print("There is a fire");
    } else{
      lcd.setCursor(0, 1);
      lcd.print("No fire detected");
    }
  }
  delay(10);
}


void loop() {
  
  for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degrees
    ultra();
    fire();
    myservo.write(pos);              
    delay(250);                       
  }
  for (pos = 180; pos >= 0; pos -= 10) { // goes from 180 degrees to 0 degrees
    ultra();
    fire();
    myservo.write(pos);             
    delay(250);                      
  }
}

