# Waveshare Esp32s3 Touch LCD 3.49 template
The Waveshare Esp32s3 touch 3.49 module is a fine board well eqipped and with a nice 640x172 display.

Unfortunately, is not fully supported by the mayority of the library, and the board is not listed in the one supported by Esp Arduino. This is a template for the above board to create your own project with LVGL on PIOarduino.

# setting up
VSCode with PIOarduino. Platform Espressif 32 ver 55.3.34
Clone this repo in VS
Add the latest LVGL and SensorLib library files into the Lib folder. 
Copy the waveshare-esp32-s3-touch-349.json file from the board directory into the C:\Users\...\.platformio\platforms\espressif32\boards folder.

