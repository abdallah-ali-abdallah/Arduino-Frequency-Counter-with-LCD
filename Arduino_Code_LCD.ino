/*
  Arduino Frequency Counter (up to 64 Mhz) with LCD
  By: Abdallah Ali 
  Date: Aug-2014
  Licence: CC-BY-NC V.4

  
  Note: This counter use chip 74xx93 (counter) as a frequency divider by 8
  the maximum bandwidth for arduino is 8 Mhz and we can multiply this number
  the new maximum rate is determined by the counter maximum clock rate
  for example: 
  
  chip 74-LS-93 has (Max clock = 42 Mhz) - so you can measure up to 42 Mhz
  chip 74-HC-93 has (Max clock = 64 Mhz) - so you can measure up to 64 Mhz
  
  Note: Minmum input voltage is 2 volt
		Maximum input voltage is 5.1 volt
		
  This project Based on counter Library by:  
  
  Martin Nawrath KHM LAB3
  Kunsthochschule f¸r Medien Kˆln
  Academy of Media Arts
  http://www.khm.de
  http://interface.khm.de/index.php/labor/experimente/	
 */
 
 
#include <FreqCounter.h>

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 6, 4, 3, 2);
// pin number was designed for the PCB

unsigned long frq;
int cnt;


void setup() 
{
  lcd.begin(16, 2);
}


void loop() {


  // wait if any serial is going on
  FreqCounter::f_comp=10;   // Cal Value / Calibrate with professional Freq Counter
  FreqCounter::start(1000);  // values to control resoulation, where  10, 100 or 1000 ms are practicable for a resolution of 100, 10 and 1 Hz 

  while (FreqCounter::f_ready == 0) 

  frq=FreqCounter::f_freq;

  lcd.setCursor(0, 0);
  lcd.print("Frequency(Hz):");
  lcd.setCursor(4, 1);
  lcd.print(frq*8);   
  delay(100);

}  
