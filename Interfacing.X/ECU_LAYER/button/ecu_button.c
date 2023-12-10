/* 
 * File:   ecu_button.c
 * Author: xcite
 *
 * Created on December 7, 2023, 7:22 PM
 */
#include "ecu_button.h"

Std_ReturnType button_intialize(const button_t *button) {
    Std_ReturnType ret = E_OK;
    if((NULL==button)){
        ret=E_NOT_OK;
    }
    else
    {
        
    }
    return ret;
}

Std_ReturnType button_read_state(const button_t *button, button_state_t *button_state) {
  Std_ReturnType ret = E_OK;
    if((NULL==button)||(NULL==button_state)){
        ret=E_NOT_OK;
    }
    else
    {
        
    }
    return ret;
}
