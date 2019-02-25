/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S218>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S218>/motohawk_dout Resource: MPRD */
extern NativeError_S DOut2268p0004_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut2268p0004_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut2268p0004_DiscreteOutput_Create(void);

/* S-Function Block: <S44>/motohawk_ain Resource: Current_Sensor */
NativeError_S Current_Sensor_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Current_Sensor_AnalogInput_Create(void);

/* S-Function Block: <S44>/motohawk_ain1 Resource: V5V_Reference */
NativeError_S V5V_Reference_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S V5V_Reference_AnalogInput_Create(void);

/* S-Function Block: <S88>/motohawk_dout1 Resource: FUEL 2 */
extern NativeError_S DOut953p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut953p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut953p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S88>/motohawk_dout2 Resource: FUEL 1 */
extern NativeError_S DOut954p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut954p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut954p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S88>/motohawk_dout3 Resource: FUEL 3 */
extern NativeError_S DOut955p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut955p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut955p0001_DiscreteOutput_Create(void);

/* S-Function Block: <S88>/motohawk_pwm Resource: EST1_PWMOutput */
void EST1_PWMOutput_PWMOutput_Create(void);
void EST1_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable);
void EST1_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S88>/motohawk_dout4 Resource: FUEL 4 */
extern NativeError_S DOut956p0001_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut956p0001_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut956p0001_DiscreteOutput_Create(void);

#endif
