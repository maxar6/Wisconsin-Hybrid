/*
 * MotoHawk_IO.c
 *
 * Code generation for model "BatteryController_Rev1.mdl".
 *
 * Model version              : 1.590
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 09:42:57 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoHawk_IO.h"

/* S-Function Block: <S218>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_ECUP_DataStore()) = -1;
  if (((int32_T) RES_ECUP) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_ECUP)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ECUP_DataStore()) = ((int32_T) RES_ECUP);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ECUP;
      if (SUCCESS(sErrorResult))
        ain_create_ECUP = 0;
      else
        ain_create_ECUP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ECUP_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ECUP_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ECUP;
      if (SUCCESS(sErrorResult))
        ain_read_ECUP = 0;
      else
        ain_read_ECUP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S218>/motohawk_dout Resource: DOut2268p0004 */
NativeError_S DOut2268p0004_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 52)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut2268p0004_DataStore()) = ((int16_T) 52);
  } else {
    (init_resource_DOut2268p0004_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut2268p0004;
    if (SUCCESS(sErrorResult))
      dout_create_DOut2268p0004 = 0;
    else
      dout_create_DOut2268p0004 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut2268p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut2268p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut2268p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut2268p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut2268p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut2268p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S44>/motohawk_ain Resource: Current_Sensor */
NativeError_S Current_Sensor_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_Current_Sensor_DataStore()) = -1;
  if (((int32_T) RES_AN1M) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_AN1M)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Current_Sensor_DataStore()) = ((int32_T) RES_AN1M);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Current_Sensor;
      if (SUCCESS(sErrorResult))
        ain_create_Current_Sensor = 0;
      else
        ain_create_Current_Sensor = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S Current_Sensor_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Current_Sensor_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Current_Sensor_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue << (2);
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Current_Sensor;
      if (SUCCESS(sErrorResult))
        ain_read_Current_Sensor = 0;
      else
        ain_read_Current_Sensor = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S44>/motohawk_ain1 Resource: V5V_Reference */
NativeError_S V5V_Reference_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_V5V_Reference_DataStore()) = -1;
  if (((int32_T) RES_XDRP) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_XDRP)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_V5V_Reference_DataStore()) = ((int32_T) RES_XDRP);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_V5V_Reference;
      if (SUCCESS(sErrorResult))
        ain_create_V5V_Reference = 0;
      else
        ain_create_V5V_Reference = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S V5V_Reference_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_V5V_Reference_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_V5V_Reference_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue << (2);
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_V5V_Reference;
      if (SUCCESS(sErrorResult))
        ain_read_V5V_Reference = 0;
      else
        ain_read_V5V_Reference = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S88>/motohawk_dout1 Resource: DOut953p0001 */
NativeError_S DOut953p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 13)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut953p0001_DataStore()) = ((int16_T) 13);
  } else {
    (init_resource_DOut953p0001_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut953p0001;
    if (SUCCESS(sErrorResult))
      dout_create_DOut953p0001 = 0;
    else
      dout_create_DOut953p0001 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut953p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut953p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut953p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut953p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut953p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut953p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S88>/motohawk_dout2 Resource: DOut954p0001 */
NativeError_S DOut954p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 12)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut954p0001_DataStore()) = ((int16_T) 12);
  } else {
    (init_resource_DOut954p0001_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut954p0001;
    if (SUCCESS(sErrorResult))
      dout_create_DOut954p0001 = 0;
    else
      dout_create_DOut954p0001 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut954p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut954p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut954p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut954p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut954p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut954p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S88>/motohawk_dout3 Resource: DOut955p0001 */
NativeError_S DOut955p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 14)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut955p0001_DataStore()) = ((int16_T) 14);
  } else {
    (init_resource_DOut955p0001_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut955p0001;
    if (SUCCESS(sErrorResult))
      dout_create_DOut955p0001 = 0;
    else
      dout_create_DOut955p0001 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut955p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut955p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut955p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut955p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut955p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut955p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

void EST1_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable)
{
  if (((init_resource_EST1_PWMOutput_DataStore()) < 0) && (((int16_T) RES_EST1) >=
       0)) {
    /* Initialize PWM Output with initial frequency and duty_cycle */
    S_PWMCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.uValidAttributesMask = USE_PWM_DYNAMIC_ON_CREATE |
      USE_PWM_MIN_FREQUENCY;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE |
      USE_PWM_FREQUENCY | USE_PWM_CONDITION;
    CreateInfo.pfDiagCback = 0;
    CreateInfo.uDiagCbackUserData = 0;
    CreateInfo.u4MinFrequency = 200;
    CreateInfo.DynamicObj.eResourceCondition = (enable) ? RES_ENABLED :
      RES_DISABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_EST1)),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_EST1_PWMOutput_DataStore()) = ((int16_T) RES_EST1);
    } else {
      (init_resource_EST1_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_EST1_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_EST1_PWMOutput = 0;
      else
        pwm_create_EST1_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_EST1_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    DynamicObj.uValidAttributesMask |= USE_PWM_CONDITION;
    DynamicObj.eResourceCondition = (enable) ? RES_ENABLED : RES_DISABLED;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_EST1_PWMOutput_DataStore())), &DynamicObj, BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_EST1_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_EST1_PWMOutput = 0;
      else
        pwm_set_EST1_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void EST1_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_EST1_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void EST1_PWMOutput_PWMOutput_Create()
{
  (init_resource_EST1_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S88>/motohawk_dout4 Resource: DOut956p0001 */
NativeError_S DOut956p0001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  S_DiscreteOutCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eState = RES_OFF;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
    USE_DISCRETE_STATE;
  CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
  sErrorResult = CreateResource((E_ModuleResource) (((int16_T) 15)), &CreateInfo,
    BEHAVIOUR_DISCRETE_OUT);
  if (SUCCESS(sErrorResult)) {
    (init_resource_DOut956p0001_DataStore()) = ((int16_T) 15);
  } else {
    (init_resource_DOut956p0001_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut956p0001;
    if (SUCCESS(sErrorResult))
      dout_create_DOut956p0001 = 0;
    else
      dout_create_DOut956p0001 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut956p0001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut956p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut956p0001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut956p0001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut956p0001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut956p0001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}
