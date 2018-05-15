
/* MotoCoder_Timer.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-04-22 15:56:02 */
/* Copyright: 2018 Woodward. */


#ifndef MOTOCODER_TIMER_H
#define MOTOCODER_TIMER_H



#include <MotoCoder.h>
	
/* Timer Functions */
extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us, uint32_T *upper32Bits_us);
extern void Timer_FreeRunningCounter_ResetTime(void);
extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T u32Time_us);

#endif

