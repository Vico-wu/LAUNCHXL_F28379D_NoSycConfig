/*
 * can_bsw.c
 *
 *  Created on: Jun 21, 2024
 *      Author: wqu3wx
 */
#include "can_bsw.h"
#include "can.h"
#include "device.h"
uint16_t can_getPreScaler(can_baudRate_te baudRate_e);
uint32_t can_getRxGPIO(can_chnl_te chnl_e);
uint32_t can_getTxGPIO(can_chnl_te chnl_e);
uint32_t can_getBase(can_chnl_te chnl_e);
uint32_t can_getBoxIdx(uint32_t Id_u32);
uint16_t can_init(can_chnl_te chnl_e, can_baudRate_te baudRate_e)
{
    uint16_t prescaler_u16 = can_getPreScaler(baudRate_e);
    uint32_t base_u32 = can_getBase(chnl_e);
    uint32_t pinTx_u32 = can_getTxGPIO(chnl_e);
    uint32_t pinRx_u32 = can_getRxGPIO(chnl_e);
    GPIO_setPinConfig(pinRx_u32);
    GPIO_setPinConfig(pinTx_u32);
    CAN_initModule(base_u32);
    CAN_setBitTiming(base_u32, prescaler_u16, 0, 15, 7, 3);
    CAN_startModule(base_u32);
    return 0;
}


uint16_t can_sendData(can_chnl_te chnl_e, uint16_t databoxNum_u16, uint32_t id_u32, CAN_MsgFrameType format_u16,
                      uint16_t numBytes_u16, uint16_t *data_pau16)
{
    uint32_t base = can_getBase(chnl_e);

    CAN_setupMessageObject(base, databoxNum_u16, id_u32, format_u16, CAN_MSG_OBJ_TYPE_TX, 0, 0, numBytes_u16);

    CAN_sendMessage(base, databoxNum_u16, numBytes_u16, data_pau16);

    return 0;
}

uint32_t can_getBase(can_chnl_te chnl_e)
{
    switch (chnl_e)
    {
    case CHANNEL_0_E:
        return CANB_BASE;
    case CHANNEL_1_E:
        return CANA_BASE;
    default:
        return CANB_BASE;
    }
}
uint32_t can_getTxGPIO(can_chnl_te chnl_e)
{
    switch (chnl_e)
    {
    case CHANNEL_0_E:
        return DEVICE_GPIO_CFG_CANTXB;
    case CHANNEL_1_E:
        return DEVICE_GPIO_CFG_CANTXA;
    default:
        return DEVICE_GPIO_CFG_CANTXB;
    }
}
uint32_t can_getRxGPIO(can_chnl_te chnl_e)
{
    switch (chnl_e)
    {
    case CHANNEL_0_E:
        return DEVICE_GPIO_CFG_CANRXB;
    case CHANNEL_1_E:
        return DEVICE_GPIO_CFG_CANRXA;
    default:
        return DEVICE_GPIO_CFG_CANRXB;
    }
}
uint16_t can_getPreScaler(can_baudRate_te baudRate_e)
{
    switch (baudRate_e)
    {
    case BAUDRATE_125_E:
        return 63;
    case BAUDRATE_250_E:
        return 31;
    case BAUDRATE_500_E:
        return 15;
    case BAUDRATE_1000_E:
        return 7;
    default:
        return 15;
    }
}


