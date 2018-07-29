/*
 * MotoHawk_CAN.c
 *
 */

#include "MotoHawk_CAN.h"

boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T length, const
  uint8_T data[])
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  uint8_T i;
  messageObj.eFlags = (extended) ? CAN_MESSAGE_EXTENDED : CAN_MESSAGE_STANDARD;
  messageObj.u4MessageID = id;
  messageObj.u1Length = length;
  for (i=0; i < length; i++) {
    messageObj.u1DataArr[i] = data[i];
  }

  while (i < 8) {
    messageObj.u1DataArr[i] = 0;
    i++;
  }

  sErrorResult = TransmitOnTouCAN(RES_CAN1, TOUCAN_BUFF0, &messageObj, 0, 0);

  {
    extern uint8_T can_tx_err_CAN_1_0_19;
    if (SUCCESS(sErrorResult))
      can_tx_err_CAN_1_0_19 = 0;
    else
      can_tx_err_CAN_1_0_19 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return(SUCCESS(sErrorResult));
}

void CAN_1_CAN_Fault(boolean_T *bus_passive, uint8_T *err_tx_ctr, uint8_T
                     *err_rx_ctr)
{
  S_CANReadResourceAttributes Attribs;
  Attribs.uValidAttributesMask = USE_CAN_ERROR_STATUS;
  GetResourceAttributesBEHAVIOUR_TOUCAN(RES_CAN1, &Attribs);
  if (bus_passive)
    *bus_passive = ((Attribs.ErrorStatusObj.eErrorMask & CAN_HW_FCS) != 0);
  if (err_tx_ctr)
    *err_tx_ctr = Attribs.ErrorStatusObj.u1TXECTR;
  if (err_rx_ctr)
    *err_rx_ctr = Attribs.ErrorStatusObj.u1RXECTR;
}

boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T length, const
  uint8_T data[])
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  uint8_T i;
  messageObj.eFlags = (extended) ? CAN_MESSAGE_EXTENDED : CAN_MESSAGE_STANDARD;
  messageObj.u4MessageID = id;
  messageObj.u1Length = length;
  for (i=0; i < length; i++) {
    messageObj.u1DataArr[i] = data[i];
  }

  while (i < 8) {
    messageObj.u1DataArr[i] = 0;
    i++;
  }

  sErrorResult = TransmitOnTouCAN(RES_CAN2, TOUCAN_BUFF0, &messageObj, 0, 0);

  {
    extern uint8_T can_tx_err_CAN_2_0_20;
    if (SUCCESS(sErrorResult))
      can_tx_err_CAN_2_0_20 = 0;
    else
      can_tx_err_CAN_2_0_20 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return(SUCCESS(sErrorResult));
}

void CAN_2_CAN_Fault(boolean_T *bus_passive, uint8_T *err_tx_ctr, uint8_T
                     *err_rx_ctr)
{
  S_CANReadResourceAttributes Attribs;
  Attribs.uValidAttributesMask = USE_CAN_ERROR_STATUS;
  GetResourceAttributesBEHAVIOUR_TOUCAN(RES_CAN2, &Attribs);
  if (bus_passive)
    *bus_passive = ((Attribs.ErrorStatusObj.eErrorMask & CAN_HW_FCS) != 0);
  if (err_tx_ctr)
    *err_tx_ctr = Attribs.ErrorStatusObj.u1TXECTR;
  if (err_rx_ctr)
    *err_rx_ctr = Attribs.ErrorStatusObj.u1RXECTR;
}
