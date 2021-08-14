/*


To watch out full tutorial video of this project, head on to our YouTube channel
https://www.youtube.com/techiesms

Code modified by team techiesms on 14th August 2021


*/
#define OSX 0
#define WINDOWS 1



#include <Keyboard.h>


// change this to match your platform:
int platform = OSX;

// Init function
void setup()
{
  // Begining the stream
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);


}

// Unused
void loop() {
  //  while (digitalRead(2) == HIGH) {
  //    // do nothing until pin 2 goes low
  //    delay(500);
  //  }



  switch (platform) {
    case OSX:
      // Press CMD + Space to open spotlight
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(' ');
      Keyboard.releaseAll();
      break;
    case WINDOWS:
      // Press CMD + r to open spotlight
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      Keyboard.releaseAll();
      break;
  }
  delay(100);

  // Type Google Chrome
  Keyboard.print("Chrome");

  delay(100);

  typeKey(KEY_RETURN);
  delay(1000);

  typeKey(KEY_RETURN);
  delay(3000);


  Keyboard.print("https://www.youtube.com/techiesms?sub_confirmation=1");
  delay(500);

  typeKey(KEY_RETURN);

  delay(5000);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  while (true);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
