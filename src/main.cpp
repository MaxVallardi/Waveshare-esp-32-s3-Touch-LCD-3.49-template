#include <Arduino.h>
#include "user_config.h"
#include "lvgl_port.h"
#include "esp_sleep.h"
#include "i2c_bsp.h"
#include "lcd_bl_pwm_bsp.h"
#include "button_bsp.h"
#include "adc_bsp.h"
#include "driver/gpio.h"
#include "rtc_bsp.h"

#include "ui.h"  // Include the UI layout generated with EEZ Studio

/*
static bool device_powered_on = true;
static bool allow_shutdown = true;
static bool ignore_next_release = false;
static bool woke_from_deep_sleep = false;
static constexpr gpio_num_t POWER_BUTTON_GPIO = GPIO_NUM_16;
*/
void setup()
{
  

  i2c_master_Init();
  Serial.begin(115200);
  //rtc_bsp_init();

  button_Init();
  //adc_bsp_init(); 
  
  
  lvgl_port_init();
  lvgl_port_run_with_gui(ui_init); // Launch the LVGL GUI created in EEZ Studio
  lcd_bl_pwm_bsp_init(LCD_PWM_MODE_255);
  setUpduty(LCD_PWM_MODE_200);
}

void loop()
{
  
}
