
/* MotoCoder_CAN.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-09-07 17:16:53 */
/* Copyright: 2018 Woodward. */


#ifndef MOTOCODER_CAN_H
#define MOTOCODER_CAN_H



#include <MotoCoder_Types.h>
	
/* CAN Interface for CAN_1 */
extern void CAN_1_Error_Status_Get(boolean_T* inout_bBusPassivePtr, uint8_T* inout_uTXErrorCountPtr, uint8_T* inout_uRXErrorCountPtr);
extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T length, const uint8_T data[]);
extern uint32_T CAN_1_TransmitQueueDepth(void);
extern boolean_T RxSlot_3024p0002_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3025p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3026p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3443p0007_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3681p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3796p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3950p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3951p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3952p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3953p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_4155p0004_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CCP1_SetIDFilter(uint32_T id, uint32_T id_mask);
extern boolean_T CCP1_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_1_KeySuite_SetIDFilter(uint32_T id, uint32_T id_mask);
extern boolean_T CAN_1_KeySuite_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_1_Create(void);/* CAN Interface for CAN_2 */
extern void CAN_2_Error_Status_Get(boolean_T* inout_bBusPassivePtr, uint8_T* inout_uTXErrorCountPtr, uint8_T* inout_uRXErrorCountPtr);
extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T length, const uint8_T data[]);
extern uint32_T CAN_2_TransmitQueueDepth(void);
extern boolean_T RxSlot_3683p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_2_KeySuite_SetIDFilter(uint32_T id, uint32_T id_mask);
extern boolean_T CAN_2_KeySuite_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_2_Create(void);/* CAN Interface for CAN_3 */
extern void CAN_3_Error_Status_Get(boolean_T* inout_bBusPassivePtr, uint8_T* inout_uTXErrorCountPtr, uint8_T* inout_uRXErrorCountPtr);
extern boolean_T CAN_3_Transmit(boolean_T extended, uint32_T id, uint8_T length, const uint8_T data[]);
extern uint32_T CAN_3_TransmitQueueDepth(void);
extern boolean_T RxSlot_3227p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3228p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3229p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3230p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3231p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3232p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3233p0005_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3680p0004_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3682p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern boolean_T RxSlot_3893p0001_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_3_KeySuite_SetIDFilter(uint32_T id, uint32_T id_mask);
extern boolean_T CAN_3_KeySuite_Receive(boolean_T *extended, uint32_T *id, uint8_T *length, uint8_T data[]);
extern void CAN_3_Create(void);

#endif

