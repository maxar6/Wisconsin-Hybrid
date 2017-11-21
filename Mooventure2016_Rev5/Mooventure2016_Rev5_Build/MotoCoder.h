
/* MotoCoder.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2017-11-20 13:47:38 */
/* Copyright: 2017 Woodward. */


#ifndef MOTOCODER_H
#define MOTOCODER_H



#include <MotoCoder_Services_CRC.h>
#include <ComputeSecurity_API.h>
#include <MotoCoder_Callbacks.h>
#include <MotoCoder_IO.h>
#include <Processor_CompilerDefn.h>
#include <Module_Generic.h>
#include <MotoCoder_Types.h>
#include <MotoCoder_CAN.h>
#include <MotoCoder_DataStore.h>
	


#define MemReadSynch(destInDirectAddress, src, sizeInBytes) Memory_ReadSynch(destInDirectAddress, src, (NativeVar_U)sizeInBytes)
#define MemWriteSynch(dest, srcInDirectAddress, sizeInBytes) Memory_WriteSynch(dest, srcInDirectAddress, (NativeVar_U)sizeInBytes)


  /* Main Application */
extern void Module_Shutdown(boolean_T shutdownPower);
extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us, uint32_T *upper32Bits_us);
extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T u32Time_us);
extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
extern void RandomNumber_Get(uint32_T* out_pNumber);
extern void Interrupt_Enable(void);
extern void Interrupt_Disable(void);
extern void Timer_Watchdog_Refresh(void);


#endif

