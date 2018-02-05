/*
 * MotoHawk_CAN.h
 *
 */

#include "CommonInclude.h"

extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T length,
  const uint8_T data[]);
extern void CAN_1_CAN_Fault(boolean_T *bus_passive, uint8_T *err_tx_ctr, uint8_T
  *err_rx_ctr);
extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T length,
  const uint8_T data[]);
extern void CAN_2_CAN_Fault(boolean_T *bus_passive, uint8_T *err_tx_ctr, uint8_T
  *err_rx_ctr);
