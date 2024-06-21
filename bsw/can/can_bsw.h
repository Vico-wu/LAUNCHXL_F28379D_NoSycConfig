/*
 * can_bsw.h
 *
 *  Created on: Jun 21, 2024
 *      Author: wqu3wx
 */

#ifndef BSW_CAN_CAN_BSW_H_
#define BSW_CAN_CAN_BSW_H_
#include <stdint.h>
#include "can.h"
#define CAN_ERR_NO_ERRORS_DU16 0U
#define CAN_ERR_UNKNOWN_BAUDRATE_DU16 1U
#define CAN_ERR_CHNL_DU16 14U
typedef enum can_baudRate_t
{
    BAUDRATE_125_E, BAUDRATE_250_E, BAUDRATE_500_E, BAUDRATE_1000_E
} can_baudRate_te;
typedef enum can_chnl_t
{
    CHANNEL_0_E, CHANNEL_1_E
} can_chnl_te;

extern uint16_t can_init(can_chnl_te chnl_e, can_baudRate_te baudRate_e);
extern uint16_t can_sendData(can_chnl_te chnl_e, uint16_t databoxNum_u16,
                             uint32_t id_u32, CAN_MsgFrameType format_u16,
                             uint16_t numBytes_u16, uint16_t *data_pau16);


//extern uint16_t can_initTxDatabox(uint32_t chnl_u32, uint16_t databoxNum_u16,
//                                  uint16 format_u16);
//extern uint16_t can_initRxDatabox(uint32_t chnl_u32, uint16_t databoxNum_u16,
//                                  uint32 id_u32, uint16 format_u16,
//                                  uint16 numBytes_u16,);

#endif /* BSW_CAN_CAN_BSW_H_ */
