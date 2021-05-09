/***************************************************************************************
 *  File:main.c
 *  Copyright (C) 2018 ALHASAN ALKHATIB
 *
 *  date: June,2018
 *  Author: ALHASAN ALKHATIB
 *
 *  Description:Password security System To control a Relay
 *              using 16*16 Keypad and 16*2 LCD Display
 *              with ARM CORTEX -M4 TM4C123G Microprocessor  (Main file)
 ***************************************************************************************/

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "inc/hw_gpio.h"
#include "driverlib/interrupt.h"
#include "inc/hw_ints.h"
#include "HASLCD_JR.h"
#include "HAS_Keypad_Password.h"



int main()
{
	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ| SYSCTL_OSC_MAIN);
    has_lcd_4bitsetup();
    KeyPad_Lcd_Setup();
    KeyPad_Setup();
    while(1)
    {
                KeyPad_wait();
    	        KeyPad_PassWord_Confirm();

    }

}
