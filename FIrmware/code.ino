#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// This code currently only prints the speed out, but is easily modified to control the motor
// The LCD Screen isn't programmed fully yet - SOON TBC
// I'll do this asap - I want to prioritize getting the PCB reviewed however. ar
int en_a = 5;
int en_b = 7;

int en_a_last; 
int en_a_value;
int en_b_value;
int encoder_position; 

int motor_duty;


LiquidCrystal_I2C lcd(0x27, 20, 4)


void setup() {
  pinMode(en_a, INPUT);
  pinMode(en_b, INPUT);
  en_a_last = digitalRead(en_a);
  Serial.begin(9600);

  lcd.init(); 
  lcd.backlight(); 
  lcd.setCursor(5, 0); 
  lcd.print("Sorting Screws...")
}

void loop() {
  en_a_value = digitalRead(en_a);
  
    if (en_a_value != en_a_last) {

      en_b_value = digitalRead(en_b);

      if (en_b_value != en_a_last) {
        //therefore encoder a switched values first
        if (encoder_position != 21){
          encoder_position++;
        }
        else if (encoder_position = 21) {
          encoder_position = 20;
        }
      }

      else {
        //other direction
        if (encoder_position != 0) {
          encoder_position--;
          
        }
        else {
          encoder_position = 0;
        }
      }

      Serial.print("Encoder Position: ");
      Serial.println(encoder_position);
      motor_duty = map(encoder_position, 0, 20, 0, 150);
      Serial.println(motor_duty);
    }
  en_a_last = digitalRead(en_a);
}
