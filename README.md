# Digispark Duckduino Fileless
[Rubber Ducky](https://shop.hak5.org/products/usb-rubber-ducky-deluxe) using a [Digispark](http://digistump.com/products/1) to execute a [fileless](https://en.wikipedia.org/wiki/Fileless_malware) [PowerShell](https://en.wikipedia.org/wiki/PowerShell) script from [C&amp;C](https://en.wikipedia.org/wiki/Botnet#Command_and_control).

Thanks to [byt3m](https://github.com/byt3m) and [longinox](https://longinox.blogspot.com/).

## Test it
  * Buy a [Digispark](https://www.amazon.es/s?k=Digispark)
  * Install [Digistump Drivers](https://github.com/digistump/DigistumpArduino/releases)
  * Install [Arduino IDE](https://www.arduino.cc/en/software)
  * Add an additional Board URL to Aruduino IDE preferences. Go to File -> Preferences -> Additional Boards Managers URLs -> Add "http://digistump.com/package_digistump_index.json" -> Ok
  * Install Digistump AVR Boards. Tools -> Board -> Boards Manager -> Search "Digistump AVR Boards" -> Install -> Close
  * Select the board. Tools -> Board -> Digistump AVR Boards -> Digispark (Default - 16.5mhz)
  * Install DigisparkKeyboard library. Download [DigisparkKeyboard zip](https://github.com/ernesto-xload/DigisparkKeyboard/archive/refs/heads/master.zip) and extrat into "%localappdata%/Arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard" folder
  * Open "Digispark-Duckduino-Fileless/Firmware.ino" from this repository and flash it
  * Enjoy 👌

## Links
  * https://shop.hak5.org/products/usb-rubber-ducky-deluxe
  * http://digistump.com/products/1
  * https://github.com/digistump/DigistumpArduino
  * https://github.com/ernesto-xload/DigisparkKeyboard
  * https://github.com/CedArctic/DigiSpark-Scripts