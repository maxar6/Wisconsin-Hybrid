
/* MotoCoder_IO.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-09-07 17:16:53 */
/* Copyright: 2018 Woodward. */


#ifndef MOTOCODER_IO_H
#define MOTOCODER_IO_H



#include <MotoCoder_Callbacks.h>
#include <MotoCoder_Types.h>
#include <MotoCoder_DataStore.h>
	
extern boolean_T ESTOP2_DigitalInput_Get(void);extern void DOut4475p0004_DiscreteOutput_Set(boolean_T value);extern void DOut4476p0004_DiscreteOutput_Set(boolean_T value);extern void DOut4485p0004_DiscreteOutput_Set(boolean_T value);extern void DOut4486p0004_DiscreteOutput_Set(boolean_T value);extern void DOut4487p0004_DiscreteOutput_Set(boolean_T value);extern void DOut4702p0002_DiscreteOutput_Set(boolean_T value);extern void DOut4703p0002_DiscreteOutput_Set(boolean_T value);extern void DOut4706p0002_DiscreteOutput_Set(boolean_T value);extern NativeError_S VISTA_1_Register_Write(NativeVar_U eReg, void const* pData, NativeVar_U uNumRegs);
extern NativeError_S VISTA_1_Register_Read(NativeVar_U eReg, void* out_pBuffer, NativeVar_U uNumRegs);extern uint16_T DRVP_AnalogInput_Get(void);extern int32_T AN14_AnalogInput_Get(void);
extern uint16_T AN2_AnalogInput_Get(void);
extern uint16_T AN3_AnalogInput_Get(void);
extern uint16_T AN23_AnalogInput_Get(void);
extern uint16_T AN22_AnalogInput_Get(void);
extern uint16_T AN15_AnalogInput_Get(void);
extern uint16_T ECUP_AnalogInput_Get(void);extern void H1m_PWMOutput_Create(void);
extern boolean_T H1m_PWMOutput_Set(uint32_T frequency, int16_T dutyCycle, boolean_T brake, boolean_T enable);extern boolean_T H1m_PWMOutput_PWMOutput_Set(uint32_T frequency, int16_T dutyCycle, boolean_T brake, boolean_T enable);extern NativeError_S DOut4477p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4477p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4478p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4478p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4479p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4479p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4480p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4480p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4481p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4481p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4482p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4482p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4483p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4483p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4484p0004_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4484p0004_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4701p0002_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4701p0002_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4704p0002_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4704p0002_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut4705p0002_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut4705p0002_DiscreteOutput_Set(boolean_T value);
extern NativeError_S DOut5853p0002_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void DOut5853p0002_DiscreteOutput_Set(boolean_T value);
extern NativeError_S H1_InhibitB_DiscreteOutput_Get(boolean_T* const out_pValue);
extern void H1_InhibitB_DiscreteOutput_Set(boolean_T value);
extern NativeError_S ODRC_DiscreteOutput_Get(boolean_T* const out_pValue);
extern NativeError_S DOut4705p0002_DiagDisable_DiscreteOutput_Get(boolean_T* const out_pValue);/* Create all I/O resources */
extern void IO_Create(void);/* Stop all I/O by putting each resource into a safe state */
extern void IO_Stop(void);

#endif

