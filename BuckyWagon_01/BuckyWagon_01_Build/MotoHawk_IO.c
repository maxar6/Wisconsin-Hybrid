/*
 * MotoHawk_IO.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1530
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Jul 29 18:42:46 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoHawk_IO.h"

/* S-Function Block: <S366>/motohawk_ain5 Resource: ECUP */
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

/* S-Function Block: <S366>/motohawk_dout Resource: DOut4296p0004 */
NativeError_S DOut4296p0004_DiscreteOutput_Create(void)
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
    (init_resource_DOut4296p0004_DataStore()) = ((int16_T) 52);
  } else {
    (init_resource_DOut4296p0004_DataStore()) = -1;
    LogNativeError(sErrorResult);
  }

  {
    extern uint8_T dout_create_DOut4296p0004;
    if (SUCCESS(sErrorResult))
      dout_create_DOut4296p0004 = 0;
    else
      dout_create_DOut4296p0004 = (uint8_T) GetErrorCode(sErrorResult);
  }

  return sErrorResult;
}

NativeError_S DOut4296p0004_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut4296p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut4296p0004_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut4296p0004_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut4296p0004_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut4296p0004_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S14>/motohawk_dout1 Resource: DOut177p001 */
NativeError_S DOut177p001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((ReverseOut_Pin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((ReverseOut_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut177p001_DataStore()) = (ReverseOut_Pin_DataStore());
    } else {
      (init_resource_DOut177p001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut177p001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut177p001 = 0;
      else
        dout_create_DOut177p001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut177p001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut177p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut177p001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut177p001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut177p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut177p001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

void Fan_Pin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_Fan_Pin_PWMOutput_DataStore()) < 0) && ((Fan_Pin_DataStore
        ()) >= 0)) {
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
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) ((Fan_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Fan_Pin_PWMOutput_DataStore()) = (Fan_Pin_DataStore());
    } else {
      (init_resource_Fan_Pin_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_Fan_Pin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_Fan_Pin_PWMOutput = 0;
      else
        pwm_create_Fan_Pin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_Fan_Pin_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_Fan_Pin_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_Fan_Pin_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_Fan_Pin_PWMOutput = 0;
      else
        pwm_set_Fan_Pin_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void Fan_Pin_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_Fan_Pin_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void Fan_Pin_PWMOutput_PWMOutput_Create()
{
  (init_resource_Fan_Pin_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S14>/motohawk_dout2 Resource: DOut178p001 */
NativeError_S DOut178p001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((DCDCInhibit_Out_Pin_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource)
      ((DCDCInhibit_Out_Pin_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut178p001_DataStore()) = (DCDCInhibit_Out_Pin_DataStore());
    } else {
      (init_resource_DOut178p001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut178p001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut178p001 = 0;
      else
        dout_create_DOut178p001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut178p001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut178p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut178p001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut178p001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut178p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut178p001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S14>/motohawk_dout3 Resource: DOut179p001 */
NativeError_S DOut179p001_DiscreteOutput_Create(void)
{
  NativeError_S sErrorResult;
  if ((Brake_Light_Out_DataStore()) >= 0) {
    S_DiscreteOutCreateAttributes CreateInfo;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
      USE_DISCRETE_STATE;
    CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((Brake_Light_Out_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DOut179p001_DataStore()) = (Brake_Light_Out_DataStore());
    } else {
      (init_resource_DOut179p001_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T dout_create_DOut179p001;
      if (SUCCESS(sErrorResult))
        dout_create_DOut179p001 = 0;
      else
        dout_create_DOut179p001 = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else {
    sErrorResult = ERROR_FAIL;
  }

  return sErrorResult;
}

NativeError_S DOut179p001_DiscreteOutput_Set(boolean_T in)
{
  if ((init_resource_DOut179p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut179p001_DataStore())), (in) ? RES_ON : RES_OFF);
  }

  return ERROR_FAIL;                   /* Return an error */
}

NativeError_S DOut179p001_DiscreteOutputPushPull_Set(int8_T in)
{
  if ((init_resource_DOut179p001_DataStore()) >= 0) {
    return SetDiscreteOutState((E_ModuleResource)
      ((init_resource_DOut179p001_DataStore())), ((in) < 0) ? RES_ON_REVERSE :
                               (((in) > 0) ? RES_ON : RES_OFF));
  }

  return ERROR_FAIL;                   /* Return an error */
}

/* S-Function Block: <S12>/motohawk_din Resource: EStop_Switch_Pin */
NativeError_S EStop_Switch_Pin_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 2;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_EStop_Switch_Pin_DataStore()) = -1;
  if ((EStop_Switch_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (EStop_Switch_Pin_DataStore
                                   ()), &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_EStop_Switch_Pin_DataStore()) = (EStop_Switch_Pin_DataStore
        ());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_EStop_Switch_Pin;
      if (SUCCESS(sErrorResult))
        din_create_EStop_Switch_Pin = 0;
      else
        din_create_EStop_Switch_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S EStop_Switch_Pin_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_EStop_Switch_Pin_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_EStop_Switch_Pin_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_EStop_Switch_Pin;
      if (SUCCESS(sErrorResult))
        din_read_EStop_Switch_Pin = 0;
      else
        din_read_EStop_Switch_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S12>/motohawk_ain2 Resource: Reverse_Switch_Pin */
NativeError_S Reverse_Switch_Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Reverse_Switch_Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Reverse_Switch_Pin_DataStore()) = -1;
  if ((Reverse_Switch_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource)
      ((Reverse_Switch_Pin_DataStore())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Reverse_Switch_Pin_DataStore()) =
        (Reverse_Switch_Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Reverse_Switch_Pin;
      if (SUCCESS(sErrorResult))
        ain_create_Reverse_Switch_Pin = 0;
      else
        ain_create_Reverse_Switch_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Reverse_Switch_Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Reverse_Switch_Pin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Reverse_Switch_Pin;
      if (SUCCESS(sErrorResult))
        ain_read_Reverse_Switch_Pin = 0;
      else
        ain_read_Reverse_Switch_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S12>/motohawk_ain Resource: Accel_Pedal_Pin */
NativeError_S Accel_Pedal_Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Accel_Pedal_Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Accel_Pedal_Pin_DataStore()) = -1;
  if ((Accel_Pedal_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Accel_Pedal_Pin_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Accel_Pedal_Pin_DataStore()) = (Accel_Pedal_Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Accel_Pedal_Pin;
      if (SUCCESS(sErrorResult))
        ain_create_Accel_Pedal_Pin = 0;
      else
        ain_create_Accel_Pedal_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Accel_Pedal_Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Accel_Pedal_Pin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Accel_Pedal_Pin;
      if (SUCCESS(sErrorResult))
        ain_read_Accel_Pedal_Pin = 0;
      else
        ain_read_Accel_Pedal_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S12>/motohawk_ain1 Resource: Brake_Pedal_Pin */
NativeError_S Brake_Pedal_Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Brake_Pedal_Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Brake_Pedal_Pin_DataStore()) = -1;
  if ((Brake_Pedal_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Brake_Pedal_Pin_DataStore
                                    ())), &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Brake_Pedal_Pin_DataStore()) = (Brake_Pedal_Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Brake_Pedal_Pin;
      if (SUCCESS(sErrorResult))
        ain_create_Brake_Pedal_Pin = 0;
      else
        ain_create_Brake_Pedal_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Brake_Pedal_Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Brake_Pedal_Pin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Brake_Pedal_Pin;
      if (SUCCESS(sErrorResult))
        ain_read_Brake_Pedal_Pin = 0;
      else
        ain_read_Brake_Pedal_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S12>/motohawk_ain5 Resource: LV_Voltage_Pin */
NativeError_S LV_Voltage_Pin_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((LV_Voltage_Pin_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_LV_Voltage_Pin_DataStore()) = -1;
  if ((LV_Voltage_Pin_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((LV_Voltage_Pin_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_LV_Voltage_Pin_DataStore()) = (LV_Voltage_Pin_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_LV_Voltage_Pin;
      if (SUCCESS(sErrorResult))
        ain_create_LV_Voltage_Pin = 0;
      else
        ain_create_LV_Voltage_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_LV_Voltage_Pin_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_LV_Voltage_Pin_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_LV_Voltage_Pin;
      if (SUCCESS(sErrorResult))
        ain_read_LV_Voltage_Pin = 0;
      else
        ain_read_LV_Voltage_Pin = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

#define MOTOCODER_VDOGAUGE_SERVICE_GAUGE_PID_ARRAY_INSTANTIATE(Name, in_u8VDOGAUGE_TACHOMETER_PID, in_u8VDOGAUGE_COOLANT_TEMP_PID, in_u8VDOGAUGE_FUEL_TANK_1_LEVEL_PID, in_u8VDOGAUGE_OIL_TEMP_PID, in_u8VDOGAUGE_OIL_TANK_LEVEL_PID, in_u8VDOGAUGE_OIL_PRESS_PID, in_u8VDOGAUGE_BLOCK_PRESS_PID, in_u8VDOGAUGE_FUEL_FLOW_PID, in_u8VDOGAUGE_BATT_VOLT_PID, in_u8VDOGAUGE_VEHICLE_SPEED_PID, in_u8VDOGAUGE_STEERING_ANGLE_PID, in_u8VDOGAUGE_TRIM_POSITION_PID, in_u8VDOGAUGE_FRESHWATER_LEVEL_PID, in_u8VDOGAUGE_WASTE_WATER_LEVEL_PID, in_u8VDOGAUGE_FUEL_TANK_2_LEVEL_PID, in_u8VDOGAUGE_FUEL_PRESS_PID, in_u8VDOGAUGE_RPM_SYNC_PID, in_u8VDOGAUGE_OIL_TEMP_GEAR_PID, in_u8VDOGAUGE_EXHAUST_TEMP_PID, in_u8VDOGAUGE_FRESHWATER_PRESS_PID, in_u8VDOGAUGE_SEAWATER_PRESS_PID, in_u8VDOGAUGE_BOOST_PRESS_PID, in_u8VDOGAUGE_OIL_PRESS_GEAR_PID, in_u8VDOGAUGE_LOAD_PID, in_u8VDOGAUGE_FWD_REAR_AXLE_TEMP_PID, in_u8VDOGAUGE_REAR_REAR_AXLE_TEMP_PID, in_u8VDOGAUGE_BOOST_INLET_TEMP_A_PID, in_u8VDOGAUGE_BOOST_INLET_TEMP_B_PID, in_u8VDOGAUGE_BREAK_PRESS_1_PID, in_u8VDOGAUGE_SEAWATER_TEMP_PID, in_u8VDOGAUGE_SEA_DEPTH_PID, in_u8VDOGAUGE_UNITLESS_SPEED_PID, in_u8VDOGAUGE_TRIM_NMEA_2000_PID, in_u8VDOGAUGE_LED_ALARM_PID, in_u8VDOGAUGE_ENGINE_HOUR_LCD_PID, in_u8VDOGAUGE_DRIVE_ANGLE_PID, in_u8VDOGAUGE_STAR_TAB_ANGLE_PID, in_u8VDOGAUGE_PORT_TAB_ANGLE_PID, in_u8VDOGAUGE_GEAR_DISPLAY_PID, in_u8VDOGAUGE_CENTER_TAB_ANGLE_PID) const uint8_T Name[NUM_VDOGAUGE_MESSAGES] = { in_u8VDOGAUGE_TACHOMETER_PID, in_u8VDOGAUGE_COOLANT_TEMP_PID, in_u8VDOGAUGE_FUEL_TANK_1_LEVEL_PID, in_u8VDOGAUGE_OIL_TEMP_PID, in_u8VDOGAUGE_OIL_TANK_LEVEL_PID, in_u8VDOGAUGE_OIL_PRESS_PID, in_u8VDOGAUGE_BLOCK_PRESS_PID, in_u8VDOGAUGE_FUEL_FLOW_PID, in_u8VDOGAUGE_BATT_VOLT_PID, in_u8VDOGAUGE_VEHICLE_SPEED_PID, in_u8VDOGAUGE_STEERING_ANGLE_PID, in_u8VDOGAUGE_TRIM_POSITION_PID, in_u8VDOGAUGE_FRESHWATER_LEVEL_PID, in_u8VDOGAUGE_WASTE_WATER_LEVEL_PID, in_u8VDOGAUGE_FUEL_TANK_2_LEVEL_PID, in_u8VDOGAUGE_FUEL_PRESS_PID, in_u8VDOGAUGE_RPM_SYNC_PID, in_u8VDOGAUGE_OIL_TEMP_GEAR_PID, in_u8VDOGAUGE_EXHAUST_TEMP_PID, in_u8VDOGAUGE_FRESHWATER_PRESS_PID, in_u8VDOGAUGE_SEAWATER_PRESS_PID, in_u8VDOGAUGE_BOOST_PRESS_PID, in_u8VDOGAUGE_OIL_PRESS_GEAR_PID, in_u8VDOGAUGE_LOAD_PID, in_u8VDOGAUGE_FWD_REAR_AXLE_TEMP_PID, in_u8VDOGAUGE_REAR_REAR_AXLE_TEMP_PID, in_u8VDOGAUGE_BOOST_INLET_TEMP_A_PID, in_u8VDOGAUGE_BOOST_INLET_TEMP_B_PID, in_u8VDOGAUGE_BREAK_PRESS_1_PID, in_u8VDOGAUGE_SEAWATER_TEMP_PID, in_u8VDOGAUGE_SEA_DEPTH_PID, in_u8VDOGAUGE_UNITLESS_SPEED_PID, in_u8VDOGAUGE_TRIM_NMEA_2000_PID, in_u8VDOGAUGE_LED_ALARM_PID, in_u8VDOGAUGE_ENGINE_HOUR_LCD_PID, in_u8VDOGAUGE_DRIVE_ANGLE_PID, in_u8VDOGAUGE_STAR_TAB_ANGLE_PID, in_u8VDOGAUGE_PORT_TAB_ANGLE_PID, in_u8VDOGAUGE_GEAR_DISPLAY_PID, in_u8VDOGAUGE_CENTER_TAB_ANGLE_PID, VDOGAUGE_PID_BROADCAST, VDOGAUGE_PID_BROADCAST };

MOTOCODER_VDOGAUGE_SERVICE_GAUGE_PID_ARRAY_INSTANTIATE(g_u8VDOGaugeServicePIDArr,
  VDOGAUGE_PID_TACHOMETER,
  VDOGAUGE_PID_COOLANT_TEMP,
  VDOGAUGE_PID_FUEL_TANK_1_LEVEL,
  VDOGAUGE_PID_OIL_TEMP,
  VDOGAUGE_PID_OIL_TANK_LEVEL,
  VDOGAUGE_PID_OIL_PRESS,
  VDOGAUGE_PID_BLOCK_PRESS,
  VDOGAUGE_PID_FUEL_FLOW,
  VDOGAUGE_PID_BATT_VOLT,
  VDOGAUGE_PID_VEHICLE_SPEED,
  VDOGAUGE_PID_STEERING_ANGLE,
  VDOGAUGE_PID_TRIM_POSITION,
  VDOGAUGE_PID_FRESHWATER_LEVEL,
  VDOGAUGE_PID_WASTE_WATER_LEVEL,
  VDOGAUGE_PID_FUEL_TANK_2_LEVEL,
  VDOGAUGE_PID_FUEL_PRESS,
  VDOGAUGE_PID_RPM_SYNC,
  VDOGAUGE_PID_OIL_TEMP_GEAR,
  VDOGAUGE_PID_EXHAUST_TEMP,
  VDOGAUGE_PID_FRESHWATER_PRESS,
  VDOGAUGE_PID_SEAWATER_PRESS,
  VDOGAUGE_PID_BOOST_PRESS,
  VDOGAUGE_PID_OIL_PRESS_GEAR,
  VDOGAUGE_PID_LOAD,
  VDOGAUGE_PID_FWD_REAR_AXLE_TEMP,
  VDOGAUGE_PID_REAR_REAR_AXLE_TEMP,
  VDOGAUGE_PID_BOOST_INLET_TEMP_A,
  VDOGAUGE_PID_BOOST_INLET_TEMP_B,
  VDOGAUGE_PID_BREAK_PRESS_1,
  VDOGAUGE_PID_SEAWATER_TEMP,
  VDOGAUGE_PID_SEA_DEPTH,
  VDOGAUGE_PID_UNITLESS_SPEED,
  VDOGAUGE_PID_TRIM_NMEA_2000,
  VDOGAUGE_PID_LED_ALARM,
  VDOGAUGE_PID_ENGINE_HOUR_LCD,
  VDOGAUGE_PID_DRIVE_ANGLE,
  VDOGAUGE_PID_STAR_TAB_ANGLE,
  VDOGAUGE_PID_PORT_TAB_ANGLE,
  VDOGAUGE_PID_GEAR_DISPLAY,
  VDOGAUGE_PID_CENTER_TAB_ANGLE);
typedef struct {
  uint8_T high_byte;
  uint8_T low_byte;
  uint8_T PID;
  uint8_T bFull;
  uint8_T cmd;
} S_GaugeQueueEntry;

S_GaugeQueueEntry EZLinkTxQueue[128] = {
  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0 },
};

uint8_T EZLinkTxQueueDepth = 0;
uint8_T EZLinkTxQueueDepth_Max = 0;
uint8_T EZLinkTxQueueHead = 0;
uint8_T EZLinkTxQueueTail = 0;
static void GaugeChain_VDOGaugeService_Callback(E_ModuleResource res,
  NativePtrSizedInt_U in_uAppData, uint1 in_u1BytesSent);
void GaugeChain_EZLinkOutput_Create()
{
  NativeError_S error;
  S_EZLinkResourceAttributes DynamicObj = { 0 };

  S_EZLinkCreateResourceAttributes CreateObj = { 0 };

  CreateObj.DynamicObj.uValidAttributesMask = USE_EZLINK_CONDITION;
  CreateObj.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateObj.uValidAttributesMask = USE_EZLINK_DYNAMIC_ON_CREATE;
  error = CreateResource((E_ModuleResource)RES_TACH,&CreateObj,BEHAVIOUR_EZLINK);

  {
    extern uint8_T mh_EZlink;
    if (SUCCESS(error))
      mh_EZlink = 0;
    else
      mh_EZlink = (uint8_T) GetErrorCode(error);
  }
}

boolean_T GaugeChain_VDOGaugeService_AddToQueue(E_VDOGaugeMessage in_eMessage,
  int16_T in_s16Data)
{
  /* Check if queue is full */
  uint8_T tmp_EZLinkTxQueueTail = 0;
  if (EZLinkTxQueueDepth < 128) {
    tmp_EZLinkTxQueueTail = EZLinkTxQueueTail;
    if (tmp_EZLinkTxQueueTail >= 127) {/* Move to next message to transmit */
      tmp_EZLinkTxQueueTail = 0;
    } else {
      tmp_EZLinkTxQueueTail++;
    }

    DISABLE();

    /* If the next entry is NOT full, then fill it */
    if (EZLinkTxQueue[tmp_EZLinkTxQueueTail].bFull == 0) {
      EZLinkTxQueueTail = tmp_EZLinkTxQueueTail;
      EZLinkTxQueue[EZLinkTxQueueTail].bFull = 1;
      EZLinkTxQueue[EZLinkTxQueueTail].cmd = VDOGAUGE_SELECTED_OEM;
      if (in_eMessage == VDOGAUGE_ILLUMINATION) {
        EZLinkTxQueue[EZLinkTxQueueTail].cmd |= VDOGAUGE_COMM_ILL;
      } else if (in_eMessage == VDOGAUGE_RESET) {
        EZLinkTxQueue[EZLinkTxQueueTail].cmd |= VDOGAUGE_COMM_STEPPER_ZERO;
      } else {
        EZLinkTxQueue[EZLinkTxQueueTail].cmd |= VDOGAUGE_COMM_PARAM;
      }

      EZLinkTxQueue[EZLinkTxQueueTail].high_byte = in_s16Data >> 8;
      EZLinkTxQueue[EZLinkTxQueueTail].low_byte = in_s16Data;
      EZLinkTxQueue[EZLinkTxQueueTail].PID =
        g_u8VDOGaugeServicePIDArr[in_eMessage];
      EZLinkTxQueueDepth++;
      if (EZLinkTxQueueDepth > EZLinkTxQueueDepth_Max) {
        EZLinkTxQueueDepth_Max = EZLinkTxQueueDepth;
      }

      if (EZLinkTxQueueDepth == 1) {
        EZLinkTxQueueHead = EZLinkTxQueueTail;
      }

      {
        extern uint8_T MaxQueueDepth;
        MaxQueueDepth = (uint8_T) EZLinkTxQueueDepth_Max;
      }
    }

    {
      uint8_T status;
      NativeError_S error = 7;
      if (EZLinkTxQueue[EZLinkTxQueueHead].bFull) {
        error = GetEZLinkResourceStatus(RES_TACH, &status);
        if (status == 0 && SUCCESS(error)) {
          static uint8_T buf[640];
          static S_EZLinkTransmitData data;
          data.pData = &buf[0];
          data.u1NumBytesToTX = 0;
          data.uAppDataDeliveredOnNotify = 0;
          data.pfNotify = GaugeChain_VDOGaugeService_Callback;
          do {
            buf[0 + data.u1NumBytesToTX] = EZLinkTxQueue[EZLinkTxQueueHead].PID;
            buf[1 + data.u1NumBytesToTX] = EZLinkTxQueue[EZLinkTxQueueHead].cmd;
            buf[2 + data.u1NumBytesToTX] = EZLinkTxQueue[EZLinkTxQueueHead].
              high_byte;
            buf[3 + data.u1NumBytesToTX] = EZLinkTxQueue[EZLinkTxQueueHead].
              low_byte;
            buf[4 + data.u1NumBytesToTX] = 0;
            buf[4 + data.u1NumBytesToTX] -= buf[0 + data.u1NumBytesToTX];
            buf[4 + data.u1NumBytesToTX] -= buf[1 + data.u1NumBytesToTX];
            buf[4 + data.u1NumBytesToTX] -= buf[2 + data.u1NumBytesToTX];
            buf[4 + data.u1NumBytesToTX] -= buf[3 + data.u1NumBytesToTX];
            data.u1NumBytesToTX += 5;
            EZLinkTxQueue[EZLinkTxQueueHead].bFull = 0;
            EZLinkTxQueue[EZLinkTxQueueHead].cmd = 0;
            EZLinkTxQueue[EZLinkTxQueueHead].high_byte = 0;
            EZLinkTxQueue[EZLinkTxQueueHead].low_byte = 0;
            EZLinkTxQueue[EZLinkTxQueueHead].PID = (E_VDOGaugeMessage) 0;
            if (EZLinkTxQueueHead >= 127) {/* Move to next message to transmit */
              EZLinkTxQueueHead = 0;
            } else {
              EZLinkTxQueueHead++;
            }

            EZLinkTxQueueDepth--;
          } while (EZLinkTxQueueDepth > 0 && data.u1NumBytesToTX < 255);

          error = TransmitEZLinkData(RES_TACH, &data);

          {
            extern uint8_T GaugeChain_EZlinkTx;
            if (SUCCESS(error))
              GaugeChain_EZlinkTx = 0;
            else
              GaugeChain_EZlinkTx = (uint8_T) GetErrorCode(error);
          }
        } else {
        }
      } else {
        {
          extern uint32_T GaugeChain_EZLinkNoPendingTxCounter;
          GaugeChain_EZLinkNoPendingTxCounter++;
        }
      }
    }

    UNDISABLE();
  } else {
    /* if queue is full, then do nothing */
  }

  return(1);
}

NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write(E_VDOGaugeMessage
  in_eMessage, int16_T in_s16Data, E_VDOGaugePriority in_ePriority)
{
  NativeError_S error = 7;
  GaugeChain_VDOGaugeService_AddToQueue(in_eMessage, in_s16Data);
  return(error);
}

NativeError_S VDOGaugeService_GaugeChain_Illumination_Set(E_VDOGaugeBrightness
  in_eLevel)
{
  NativeError_S error = 7;
  static E_VDOGaugeBrightness mh_ezBrightness = (E_VDOGaugeBrightness) 9;
  if (in_eLevel != mh_ezBrightness) {
    mh_ezBrightness = in_eLevel;
    GaugeChain_VDOGaugeService_AddToQueue(VDOGAUGE_ILLUMINATION, in_eLevel);
  }

  return(error);
}

NativeError_S VDOGaugeService_GaugeChain_Reset(void)
{
  NativeError_S error = 7;
  GaugeChain_VDOGaugeService_AddToQueue(VDOGAUGE_RESET, 0);
  return(error);
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   ::
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
static void GaugeChain_VDOGaugeService_Callback(E_ModuleResource res,
  NativePtrSizedInt_U in_uAppData, uint1 in_u1BytesSent)
{
  {
    extern uint32_T GaugeChain_EZLinkCallbackCounter;
    GaugeChain_EZLinkCallbackCounter++;
  }
}
