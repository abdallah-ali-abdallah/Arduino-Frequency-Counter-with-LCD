Arduino-Frequency-Counter-with-LCD
==================================

Arduino Frequency Counter with LCD Everything is Embedded on a single Layer PCB
with maximum frequency input 64 Mhz

  Arduino Frequency Counter (up to 64 Mhz) with LCD
  By: Abdallah Ali 
  Date: Aug-2014
  Licence: CC-BY-NC V.4
  E-mail: 

  
  Note: This counter use chip 74xx93 (counter) as a frequency divider by 8
  the maximum bandwidth for arduino to count is 8 Mhz and we can multiply this number 
  using 74xx93 or any other counter chip.
  
  the new bandwidth is determined by the counter maximum clock rate
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
