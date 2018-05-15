/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S808>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S808>/motohawk_dout Resource: MPRD */
extern NativeError_S DOut8020p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut8020p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut8020p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S576>/motohawk_ain Resource: MAPSensorPin */
NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S MAPSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S602>/motohawk_ain Resource: ECTSensorPin */
NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECTSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S602>/motohawk_ain1 Resource: IATSensorPin */
NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S IATSensorPin_AnalogInput_Create(void);

/* S-Function Block: <S362>/motohawk_ain1 Resource: OilPresPin */
NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S OilPresPin_AnalogInput_Create(void);

/* S-Function Block: <S362>/motohawk_ain14 Resource: SysVoltage */
NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SysVoltage_AnalogInput_Create(void);

/* S-Function Block: <S364>/motohawk_ain6 Resource: TPS1AnalogInput */
NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS1AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S364>/motohawk_ain9 Resource: TPS2AnalogInput */
NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S TPS2AnalogInput_AnalogInput_Create(void);

/* S-Function Block: <S363>/motohawk_ain3 Resource: PostO2Pin */
NativeError_S PostO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S PostO2Pin_AnalogInput_Create(void);
extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle);
extern NativeError_S MAF_Pin_FrequencyInput_Create(void);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void MAF_Pin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);
extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
  int16_T *duty_cycle);
extern NativeError_S FuelSensorPin_FrequencyInput_Create(void);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts);
extern void FuelSensorPin_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts);

/* S-Function Block: <S362>/motohawk_ain4 Resource: EGRPin */
NativeError_S EGRPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S EGRPin_AnalogInput_Create(void);

/* S-Function Block: <S677>/motohawk_dout Resource: FUELP */
extern NativeError_S DOut7481p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut7481p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut7481p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S678>/motohawk_pwm1 Resource: ETCPin_PWMOutput */
void ETCPin_PWMOutput_PWMOutput_Create(void);
void ETCPin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void ETCPin_PWMOutput_PWMOutput_Stop(void);
void ETCPin_PWMOutput_PWMOutput_Outputs(uint8_T * fault_addr, int16_T
  * current_addr);

/* S-Function Block: <S680>/motohawk_dout Resource: OILP */
extern NativeError_S DOut7765p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut7765p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut7765p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S681>/motohawk_dout Resource: EST 1 */
extern NativeError_S DOut7775p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut7775p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut7775p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S362>/motohawk_ain2 Resource: FuelPresPin */
NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S FuelPresPin_AnalogInput_Create(void);

/* S-Function Block: <S362>/motohawk_ain3 Resource: SensVoltSensorPin */
NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S SensVoltSensorPin_AnalogInput_Create(void);
NativeError_S ONESHOT_OneShotOutput_Set(int32_T dur_us, boolean_T cancel);
NativeError_S ONESHOT_OneShotOutput_Create(void);

#endif
