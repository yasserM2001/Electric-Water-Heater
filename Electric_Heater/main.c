/*
 * Electric_Heater.c
 *
 * Created: 1/30/2023 1:30:06 AM
 * Author : moham
 */ 


#include "StateMachine.h"
#include "WaterHeater_Control.h"


int main(void)
{
	WaterHeater_Control_Init();
	SM_Init();
	
    while (1) 
    {
		SM();
    }
}




