/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S17>/motohawk_ain1 Resource: AC_Pres */
NativeError_S AC_Pres_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S AC_Pres_AnalogInput_Create(void);

/* S-Function Block: <S18>/motohawk_ain2 Resource: CruiseButtons */
NativeError_S CruiseButtons_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S CruiseButtons_AnalogInput_Create(void);

/* S-Function Block: <S25>/motohawk_ain4 Resource: Accel1 */
NativeError_S Accel1_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Accel1_AnalogInput_Create(void);

/* S-Function Block: <S25>/motohawk_ain1 Resource: Accel2 */
NativeError_S Accel2_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Accel2_AnalogInput_Create(void);

/* S-Function Block: <S26>/motohawk_ain2 Resource: Brake */
NativeError_S Brake_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Brake_AnalogInput_Create(void);

/* S-Function Block: <S26>/motohawk_ain6 Resource: BrakeBackUp */
NativeError_S BrakeBackUp_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S BrakeBackUp_AnalogInput_Create(void);

/* S-Function Block: <S27>/motohawk_ain3 Resource: Clutch */
NativeError_S Clutch_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Clutch_AnalogInput_Create(void);

/* S-Function Block: <S27>/motohawk_ain5 Resource: ClutchBackup */
NativeError_S ClutchBackup_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ClutchBackup_AnalogInput_Create(void);

/* S-Function Block: <S20>/motohawk_ain3 Resource: FuelLevel */
NativeError_S FuelLevel_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S FuelLevel_AnalogInput_Create(void);
extern NativeError_S MAF_Input_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S MAF_Input_FrequencyInput_Create(void);
extern void MAF_Input_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void MAF_Input_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S22>/motohawk_din Resource: Neutral */
NativeError_S Neutral_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S Neutral_DigitalInput_Create(void);

/* S-Function Block: <S22>/motohawk_din1 Resource: Reverse */
NativeError_S Reverse_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S Reverse_DigitalInput_Create(void);

/* S-Function Block: <S75>/motohawk_pwm1 Resource: EST6_PWMOutput */
void EST6_PWMOutput_PWMOutput_Create(void);
void EST6_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void EST6_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S75>/motohawk_pwm Resource: IPT_EPO_PWMOutput */
void IPT_EPO_PWMOutput_PWMOutput_Create(void);
void IPT_EPO_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void IPT_EPO_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S4>/motohawk_din Resource: ESTOP */
NativeError_S ESTOP_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S ESTOP_DigitalInput_Create(void);

/* S-Function Block: <S4>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S4>/motohawk_ain1 Resource: DRVP */
NativeError_S DRVP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S DRVP_AnalogInput_Create(void);

/* S-Function Block: <S2>/motohawk_ain1 Resource: AN10M */
NativeError_S AN10M_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S AN10M_AnalogInput_Create(void);

/* S-Function Block: <S2>/motohawk_pwm Resource: INJ5D_PWMOutput */
void INJ5D_PWMOutput_PWMOutput_Create(void);
void INJ5D_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void INJ5D_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S2>/motohawk_pwm1 Resource: INJ11D_PWMOutput */
void INJ11D_PWMOutput_PWMOutput_Create(void);
void INJ11D_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void INJ11D_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S2>/motohawk_ain Resource: AN11M */
NativeError_S AN11M_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S AN11M_AnalogInput_Create(void);
NativeError_S Urea_Injector_OneShotOutput_Set(int32_T dur_us, boolean_T cancel);
NativeError_S Urea_Injector_OneShotOutput_Create(void);

#endif
