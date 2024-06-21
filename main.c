#include "driverlib.h"
#include "device.h"
#include "can_bsw.h"
//#include "board.h"
//#include "c2000ware_libraries.h"

/**
 * main.c
 */
int main(void)
{
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();
    can_init(CHANNEL_0_E, BAUDRATE_500_E);
    EINT;
    ERTM;
    uint16_t msgData[8] = {0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8};
    while(1)
    {
        can_sendData(CHANNEL_0_E, 1, 0x7AA, CAN_MSG_FRAME_STD, 8, msgData);
        DEVICE_DELAY_US(100);
    }
	return 0;
}
