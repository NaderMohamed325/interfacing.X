/* 
 * File:   ecu_button.h
 * Author: xcite
 *
 * Created on December 7, 2023, 7:22 PM
 */

#ifndef ECU_BUTTON_H
#define	ECU_BUTTON_H


/*----------------INCLUDES-------------------*/
#include "ecu_button_cfg.h"
#include "../../MCAL_LAYER/GPIO/hal_gpio.h" // Include the GPIO hardware abstraction layer
/*-----------------MACROS--------------------*/



/*--------------MACROS_FUNCTIONS-----------*/

/*------------DATA_TYPES-------------------*/
typedef enum {
    BUTTON_PRESSED = 0,
    BUTTON_RELEASED,
} button_state_t;

typedef enum {
    BUTTON_ACTVE_HIGH = 0,
    BUTTON_ACTIVE_LOW,
} button_active_t;

typedef struct {
    pin_config_t pin_config;
    button_active_t button_active;
    button_state_t button_state;
} button_t;


/*------------FUNCTIONS_DECLARATION--------*/
Std_ReturnType button_intialize(const button_t *button);
Std_ReturnType button_read_state(const button_t *button, button_state_t *button_state);


#endif	/* ECU_BUTTON_H */

