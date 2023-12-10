/* 
 * File:   App.c
 * Author: Nader Mohamed Nader
 *
 * Created on October 29, 2023, 2:01 PM
 */

// Ensure the correct oscillator frequency is defined
#define _XTAL_FREQ 8000000 // Replace with your oscillator frequency (e.g., 8MHz)

#include "app.h"

/*----------------------------------MEMORY_AC--------------------------------------*/
// It seems like you're defining register addresses for different ports and their corresponding bits.
// Consider using the predefined register names provided by the compiler for better readability.

/*----------------------------------DATA-TYPES---------------------------------------*/
#define LATC_REG (*((volatile LATC_REG*)0xF8B))

/*----------------------------------MAIN_APP---------------------------------------*/

// It looks like you're attempting to define an LED structure, but it's incomplete.
Led_t led1 = {
    .port_index = PORTC_INDEX,
    .pin_index = PIN0,
    .led_status = LED_ON,
};
Led_t led2 = {
    .port_index = PORTC_INDEX,
    .pin_index = PIN1,
    .led_status = LED_ON,
};
Led_t led3 = {
    .port_index = PORTC_INDEX,
    .pin_index = PIN2,
    .led_status = LED_ON,
};
button_t button1={
  .pin_config.pin= PIN0,
  .pin_config.port=PORTD_INDEX,
  .pin_config.direction=GPIO_INPUT,
  .pin_config.logic=GPIO_LOW,
  .button_active=BUTTON_ACTVE_HIGH,
  .button_state=BUTTON_RELEASED,
};
button_t button2={
  .pin_config.pin= PIN1,
  .pin_config.port=PORTD_INDEX,
  .pin_config.direction=GPIO_INPUT,
  .pin_config.logic=GPIO_HIGH,
  .button_active=BUTTON_ACTIVE_LOW,
  .button_state=BUTTON_RELEASED,
};

// Consider completing the Led_t structure definition.

void Application_initialize(void);

int main() {
    Application_initialize();
    while (1) {
        led_toggle_status(&led1);
        led_toggle_status(&led2);
        led_toggle_status(&led3);
        __delay_ms(200);
    }

    return 0;
}

void Application_initialize(void) {
    led_intialize(&led1);
    led_intialize(&led2);
    led_intialize(&led3);

}
