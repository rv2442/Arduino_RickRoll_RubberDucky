/*************************
 * HID Keyboard Browser Example
 * 
 * For use with HIDKeyboard.h Arduino library
 *    https://github.com/SFE-Chris/UNO-HIDKeyboard-Library
 *
 * NOTE: This sketch will not work on it's own. Please see the github 
 * page for info on how to turn the UNO into a keyboard. 
 * 
 * In Windows 7, sends keypresses to open a browser and type in it. 
 *************************/

#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

void setup() {
  keyboard.begin(); // Start communication
  delay(200);
}

void loop() {
  delay(10); 
  keyboard.pressSpecialKey(GUI); // Press the GUI (Windows) key
  keyboard.releaseKey(); // Release the GUI key
  delay(200); // Wait for the Start Button to open 
  keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Type URL into run window followed by a carriage return.

  delay(100);
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  delay(7000);

  
  keyboard.pressSpecialKey(GUI); // Press the GUI (Windows) key
  keyboard.releaseKey(); // Release the GUI key
  delay(1000); // Wait for the Start Button to open
  keyboard.print("cmd"); // Type "run" followed by a carriage return

  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  delay(1000);
  
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();

  delay(3000);
  keyboard.print("@echo off");
  delay(1000);
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  delay(1000);
  keyboard.print("powershell -Command \"& {Add-Type -AssemblyName System.Windows.Forms; [System.Windows.Forms.MessageBox]::Show('YOU HAVE BEEN HACKED! JSR', 'WARNING', 'OK', [System.Windows.Forms.MessageBoxIcon]::Information);}\"");

  delay(2000);
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  delay(3000);
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();


  delay(1000); // Wait 
  keyboard.print("cmd"); // Type "cmd" 

  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  delay(1000);
  
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();

  delay(3000);
  keyboard.print("shutdown /s"); // shutdown

  delay(2000);
  keyboard.pressSpecialKey(0,ENTER);
  keyboard.releaseKey();
  

  

  
  while(1); // pause

}
