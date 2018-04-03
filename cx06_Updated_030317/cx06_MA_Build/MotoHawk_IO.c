/*
 * MotoHawk_IO.c
 *
 * Real-Time Workshop code generation for Simulink model "cx06_MA.mdl".
 *
 * Model version              : 1.1504
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoHawk_IO.h"

/* S-Function Block: <S17>/motohawk_ain1 Resource: AC_Pres */
uint8_T AC_Pres_ain_create_err;
NativeError_S AC_Pres_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((AC_Pres_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_AC_Pres_DataStore()) = -1;
  if ((AC_Pres_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((AC_Pres_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_AC_Pres_DataStore()) = (AC_Pres_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_AC_Pres;
      if (SUCCESS(sErrorResult))
        ain_create_AC_Pres = 0;
      else
        ain_create_AC_Pres = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    AC_Pres_ain_create_err = 0;
  else
    AC_Pres_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S AC_Pres_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_AC_Pres_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_AC_Pres_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_AC_Pres;
      if (SUCCESS(sErrorResult))
        ain_read_AC_Pres = 0;
      else
        ain_read_AC_Pres = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) AC_Pres_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S18>/motohawk_ain2 Resource: CruiseButtons */
uint8_T CruiseButtons_ain_create_err;
NativeError_S CruiseButtons_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((CruiseButtons_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_CruiseButtons_DataStore()) = -1;
  if ((CruiseButtons_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((CruiseButtons_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_CruiseButtons_DataStore()) = (CruiseButtons_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_CruiseButtons;
      if (SUCCESS(sErrorResult))
        ain_create_CruiseButtons = 0;
      else
        ain_create_CruiseButtons = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    CruiseButtons_ain_create_err = 0;
  else
    CruiseButtons_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S CruiseButtons_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_CruiseButtons_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_CruiseButtons_DataStore())), &HowToGetObj,
      &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_CruiseButtons;
      if (SUCCESS(sErrorResult))
        ain_read_CruiseButtons = 0;
      else
        ain_read_CruiseButtons = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) CruiseButtons_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S25>/motohawk_ain4 Resource: Accel1 */
uint8_T Accel1_ain_create_err;
NativeError_S Accel1_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Accel1_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Accel1_DataStore()) = -1;
  if ((Accel1_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Accel1_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Accel1_DataStore()) = (Accel1_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Accel1;
      if (SUCCESS(sErrorResult))
        ain_create_Accel1 = 0;
      else
        ain_create_Accel1 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Accel1_ain_create_err = 0;
  else
    Accel1_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Accel1_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Accel1_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Accel1_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Accel1;
      if (SUCCESS(sErrorResult))
        ain_read_Accel1 = 0;
      else
        ain_read_Accel1 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Accel1_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S25>/motohawk_ain1 Resource: Accel2 */
uint8_T Accel2_ain_create_err;
NativeError_S Accel2_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Accel2_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Accel2_DataStore()) = -1;
  if ((Accel2_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Accel2_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Accel2_DataStore()) = (Accel2_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Accel2;
      if (SUCCESS(sErrorResult))
        ain_create_Accel2 = 0;
      else
        ain_create_Accel2 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Accel2_ain_create_err = 0;
  else
    Accel2_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Accel2_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Accel2_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Accel2_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Accel2;
      if (SUCCESS(sErrorResult))
        ain_read_Accel2 = 0;
      else
        ain_read_Accel2 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Accel2_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S26>/motohawk_ain2 Resource: Brake */
uint8_T Brake_ain_create_err;
NativeError_S Brake_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Brake_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Brake_DataStore()) = -1;
  if ((Brake_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Brake_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Brake_DataStore()) = (Brake_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Brake;
      if (SUCCESS(sErrorResult))
        ain_create_Brake = 0;
      else
        ain_create_Brake = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Brake_ain_create_err = 0;
  else
    Brake_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Brake_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Brake_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Brake_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Brake;
      if (SUCCESS(sErrorResult))
        ain_read_Brake = 0;
      else
        ain_read_Brake = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Brake_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S26>/motohawk_ain6 Resource: BrakeBackUp */
uint8_T BrakeBackUp_ain_create_err;
NativeError_S BrakeBackUp_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((BrakeBackUp_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_BrakeBackUp_DataStore()) = -1;
  if ((BrakeBackUp_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((BrakeBackUp_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_BrakeBackUp_DataStore()) = (BrakeBackUp_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_BrakeBackUp;
      if (SUCCESS(sErrorResult))
        ain_create_BrakeBackUp = 0;
      else
        ain_create_BrakeBackUp = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    BrakeBackUp_ain_create_err = 0;
  else
    BrakeBackUp_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S BrakeBackUp_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_BrakeBackUp_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_BrakeBackUp_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_BrakeBackUp;
      if (SUCCESS(sErrorResult))
        ain_read_BrakeBackUp = 0;
      else
        ain_read_BrakeBackUp = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) BrakeBackUp_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S27>/motohawk_ain3 Resource: Clutch */
uint8_T Clutch_ain_create_err;
NativeError_S Clutch_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((Clutch_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_Clutch_DataStore()) = -1;
  if ((Clutch_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((Clutch_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Clutch_DataStore()) = (Clutch_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_Clutch;
      if (SUCCESS(sErrorResult))
        ain_create_Clutch = 0;
      else
        ain_create_Clutch = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Clutch_ain_create_err = 0;
  else
    Clutch_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Clutch_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_Clutch_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_Clutch_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_Clutch;
      if (SUCCESS(sErrorResult))
        ain_read_Clutch = 0;
      else
        ain_read_Clutch = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Clutch_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S27>/motohawk_ain5 Resource: ClutchBackup */
uint8_T ClutchBackup_ain_create_err;
NativeError_S ClutchBackup_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((ClutchBackup_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_ClutchBackup_DataStore()) = -1;
  if ((ClutchBackup_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((ClutchBackup_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ClutchBackup_DataStore()) = (ClutchBackup_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_ClutchBackup;
      if (SUCCESS(sErrorResult))
        ain_create_ClutchBackup = 0;
      else
        ain_create_ClutchBackup = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    ClutchBackup_ain_create_err = 0;
  else
    ClutchBackup_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S ClutchBackup_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_ClutchBackup_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_ClutchBackup_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_ClutchBackup;
      if (SUCCESS(sErrorResult))
        ain_read_ClutchBackup = 0;
      else
        ain_read_ClutchBackup = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) ClutchBackup_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S20>/motohawk_ain3 Resource: FuelLevel */
uint8_T FuelLevel_ain_create_err;
NativeError_S FuelLevel_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  if ((FuelLevel_ref_DataStore())) {
    CreateInfo.uValidAttributesMask |= USE_ALTERNATE_REFERENCE;
  }

  (init_resource_FuelLevel_DataStore()) = -1;
  if ((FuelLevel_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((FuelLevel_DataStore())),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_FuelLevel_DataStore()) = (FuelLevel_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_FuelLevel;
      if (SUCCESS(sErrorResult))
        ain_create_FuelLevel = 0;
      else
        ain_create_FuelLevel = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    FuelLevel_ain_create_err = 0;
  else
    FuelLevel_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S FuelLevel_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_FuelLevel_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_FuelLevel_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_FuelLevel;
      if (SUCCESS(sErrorResult))
        ain_read_FuelLevel = 0;
      else
        ain_read_FuelLevel = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) FuelLevel_ain_create_err;
  }

  return sErrorResult;
}

NativeError_S MAF_Input_FrequencyInput_Create(void)
{
  NativeError_S sErrorResult = RESOURCE_NOT_CREATED;
  S_FreqInCreateResourceAttributes CreateInfo;
  CreateInfo.uValidAttributesMask = USE_FREQIN_EDGE | USE_FREQIN_ALIAS |
    USE_FREQIN_SIGNAL | USE_FREQIN_DYNAMIC_ON_CREATE | USE_FREQIN_FREQUENCY ;
  CreateInfo.eEdgeToDetect = (E_FreqInEdgeDetect)
    (MAF_Input_EdgeDetect_DataStore());
  CreateInfo.eAliasProtectionMode = (E_FreqInAliasProtectMode)
    (MAF_Input_AliasProtect_DataStore());
  CreateInfo.eSignalInterface = (E_FreqInSignalInterface)
    (MAF_Input_Interface_DataStore());
  CreateInfo.DynamicObj.uValidAttributesMask = USE_FREQIN_CONDITION ;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  if ((MAF_Input_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) ((MAF_Input_DataStore())),
      &CreateInfo, BEHAVIOUR_FREQIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_MAF_Input_DataStore()) = (MAF_Input_DataStore());
    } else {
      (init_resource_MAF_Input_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T freq_in_create_MAF_Input;
      if (SUCCESS(sErrorResult))
        freq_in_create_MAF_Input = 0;
      else
        freq_in_create_MAF_Input = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S MAF_Input_FrequencyInput_Get(uint32_T *frequency, int16_T
  *duty_cycle)
{
  NativeError_S sError = ERROR_FAIL;
  S_FreqInGetResourceAttributes retval;
  retval.uValidAttributesMask = USE_FREQIN_FREQUENCY;
  sError = GetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_MAF_Input_DataStore())), &retval);

  {
    extern uint8_T freq_in_read_MAF_Input;
    if (SUCCESS(sError))
      freq_in_read_MAF_Input = 0;
    else
      freq_in_read_MAF_Input = (uint8_T) GetErrorCode(sError);
  }

  if (FAILED(sError)) {
    /* There was a problem so apply some default data */
    retval.uFrequency = 0;
    retval.sDutyCycle = 0;
  }

  if (frequency != NULL) {
    *frequency = retval.uFrequency;
  }

  if (duty_cycle != NULL) {
    *duty_cycle = 0;
  }

  return sError;
}

void MAF_Input_FrequencyInput_Period_Raw_Get32Bit(uint32_T* const
  out_pu32PeriodCnts, uint32_T* const out_pu32DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get32Bit((E_ModuleResource)
    ((init_resource_MAF_Input_DataStore())), out_pu32PeriodCnts,
    out_pu32DutyCycleCnts);
}

void MAF_Input_FrequencyInput_Period_Raw_Get16Bit(uint16_T* const
  out_pu16PeriodCnts, uint16_T* const out_pu16DutyCycleCnts)
{
  FrequencyInput_Period_Raw_Get16Bit((E_ModuleResource)
    ((init_resource_MAF_Input_DataStore())), out_pu16PeriodCnts,
    out_pu16DutyCycleCnts);
}

void MAF_Input_FrequencyInput_TriggerOnPulseCnt_Set(uint8_T uDesiredPulseCnt)
{
  S_FreqInResourceAttributes setInfo;
  setInfo.uValidAttributesMask = USE_FREQIN_NOTIFY_SAMPLES;
  setInfo.uEdgeNotifySamples = uDesiredPulseCnt;
  SetResourceAttributesBEHAVIOUR_FREQIN((E_ModuleResource)
    ((init_resource_MAF_Input_DataStore())), &setInfo);
}

/* S-Function Block: <S22>/motohawk_din Resource: Neutral */
uint8_T Neutral_din_create_err;
NativeError_S Neutral_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 0;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_Neutral_DataStore()) = -1;
  if ((Neutral_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (Neutral_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Neutral_DataStore()) = (Neutral_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_Neutral;
      if (SUCCESS(sErrorResult))
        din_create_Neutral = 0;
      else
        din_create_Neutral = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Neutral_din_create_err = 0;
  else
    Neutral_din_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Neutral_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_Neutral_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_Neutral_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_Neutral;
      if (SUCCESS(sErrorResult))
        din_read_Neutral = 0;
      else
        din_read_Neutral = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Neutral_din_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S22>/motohawk_din1 Resource: Reverse */
uint8_T Reverse_din_create_err;
NativeError_S Reverse_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 0;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_Reverse_DataStore()) = -1;
  if ((Reverse_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (Reverse_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Reverse_DataStore()) = (Reverse_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_Reverse;
      if (SUCCESS(sErrorResult))
        din_create_Reverse = 0;
      else
        din_create_Reverse = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    Reverse_din_create_err = 0;
  else
    Reverse_din_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S Reverse_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_Reverse_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_Reverse_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_Reverse;
      if (SUCCESS(sErrorResult))
        din_read_Reverse = 0;
      else
        din_read_Reverse = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) Reverse_din_create_err;
  }

  return sErrorResult;
}

void EST6_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable)
{
  if (((init_resource_EST6_PWMOutput_DataStore()) < 0) && (((int16_T) RES_EST6) >=
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
    CreateInfo.u4MinFrequency = 100;
    CreateInfo.DynamicObj.eResourceCondition = (enable) ? RES_ENABLED :
      RES_DISABLED;
    CreateInfo.DynamicObj.u4Frequency = freq;
    CreateInfo.DynamicObj.s2DutyCycle = duty;
    sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_EST6)),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_EST6_PWMOutput_DataStore()) = ((int16_T) RES_EST6);
    } else {
      (init_resource_EST6_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_EST6_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_EST6_PWMOutput = 0;
      else
        pwm_create_EST6_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_EST6_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    DynamicObj.uValidAttributesMask |= USE_PWM_CONDITION;
    DynamicObj.eResourceCondition = (enable) ? RES_ENABLED : RES_DISABLED;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_EST6_PWMOutput_DataStore())), &DynamicObj, BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_EST6_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_EST6_PWMOutput = 0;
      else
        pwm_set_EST6_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void EST6_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_EST6_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void EST6_PWMOutput_PWMOutput_Create()
{
  (init_resource_EST6_PWMOutput_DataStore()) = -1;
}

void IPT_EPO_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable)
{
  if (((init_resource_IPT_EPO_PWMOutput_DataStore()) < 0) && ((IPT_EPO_DataStore
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
    sErrorResult = CreateResource((E_ModuleResource) ((IPT_EPO_DataStore())),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_IPT_EPO_PWMOutput_DataStore()) = (IPT_EPO_DataStore());
    } else {
      (init_resource_IPT_EPO_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_IPT_EPO_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_IPT_EPO_PWMOutput = 0;
      else
        pwm_create_IPT_EPO_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_IPT_EPO_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_IPT_EPO_PWMOutput_DataStore())), &DynamicObj,
      BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_IPT_EPO_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_IPT_EPO_PWMOutput = 0;
      else
        pwm_set_IPT_EPO_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void IPT_EPO_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_IPT_EPO_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void IPT_EPO_PWMOutput_PWMOutput_Create()
{
  (init_resource_IPT_EPO_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S4>/motohawk_din Resource: ESTOP */
NativeError_S ESTOP_DigitalInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_SwitchCreateResourceAttributes CreateInfo;
  CreateInfo.ePolarity = RES_POL_ACTIVE_HIGH;
  CreateInfo.eSwitchPullUp = (E_SwitchPullUp) 1;
  CreateInfo.uSampleRateInMilliSecs = 0;/* Default is to not de-bounce the digital input */
  CreateInfo.DynamicObj.eAssertionThreshold = THRESH_DIGITAL;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_SWITCH_CONDITION |
    USE_SWITCH_ASSERT_THRESH;
  CreateInfo.uValidAttributesMask = USE_SWITCH_DYNAMIC_ON_CREATE |
    USE_SWITCH_POLARITY | USE_SWITCH_PULLUP_STRENGTH |
    USE_SWITCH_DEBOUNCE_SAMPLE_RATE;
  (init_resource_ESTOP_DataStore()) = -1;
  if ((ESTOP_DataStore()) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (ESTOP_DataStore()),
      &CreateInfo, BEHAVIOUR_SWITCH);
    if (SUCCESS(sErrorResult)) {
      (init_resource_ESTOP_DataStore()) = (ESTOP_DataStore());
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T din_create_ESTOP;
      if (SUCCESS(sErrorResult))
        din_create_ESTOP = 0;
      else
        din_create_ESTOP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S ESTOP_DigitalInput_Get(boolean_T *out, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  if ((init_resource_ESTOP_DataStore()) >= 0) {
    E_ResourceState ResourceState;
    NativeError_S sErrorResult;
    sErrorResult = GetSwitchResourceState((E_ModuleResource)
      (init_resource_ESTOP_DataStore()), &ResourceState);
    if (SUCCESS(sErrorResult)) {
      *out = (ResourceState != RES_OFF);
    } else {
      *out = 0;
    }

    {
      extern uint8_T din_read_ESTOP;
      if (SUCCESS(sErrorResult))
        din_read_ESTOP = 0;
      else
        din_read_ESTOP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

/* S-Function Block: <S4>/motohawk_ain5 Resource: ECUP */
uint8_T ECUP_ain_create_err;
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

  if (SUCCESS(sErrorResult))
    ECUP_ain_create_err = 0;
  else
    ECUP_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
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

  if (status != NULL) {
    *status = (uint16_T) ECUP_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S4>/motohawk_ain1 Resource: DRVP */
uint8_T DRVP_ain_create_err;
NativeError_S DRVP_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_DRVP_DataStore()) = -1;
  if (((int32_T) RES_DRVP) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_DRVP)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_DRVP_DataStore()) = ((int32_T) RES_DRVP);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_DRVP;
      if (SUCCESS(sErrorResult))
        ain_create_DRVP = 0;
      else
        ain_create_DRVP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (SUCCESS(sErrorResult))
    DRVP_ain_create_err = 0;
  else
    DRVP_ain_create_err = (uint8_T) GetErrorCode(sErrorResult);
  return sErrorResult;
}

NativeError_S DRVP_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_DRVP_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_DRVP_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_DRVP;
      if (SUCCESS(sErrorResult))
        ain_read_DRVP = 0;
      else
        ain_read_DRVP = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  if (status != NULL) {
    *status = (uint16_T) DRVP_ain_create_err;
  }

  return sErrorResult;
}

/* S-Function Block: <S2>/motohawk_ain1 Resource: AN10M */
NativeError_S AN10M_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_AN10M_DataStore()) = -1;
  if (((int32_T) RES_AN10M) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_AN10M)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_AN10M_DataStore()) = ((int32_T) RES_AN10M);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_AN10M;
      if (SUCCESS(sErrorResult))
        ain_create_AN10M = 0;
      else
        ain_create_AN10M = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S AN10M_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_AN10M_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_AN10M_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_AN10M;
      if (SUCCESS(sErrorResult))
        ain_read_AN10M = 0;
      else
        ain_read_AN10M = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

void INJ5D_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable)
{
  if (((init_resource_INJ5D_PWMOutput_DataStore()) < 0) && (((int16_T) RES_INJ5D)
       >= 0)) {
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
    sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ5D)),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_INJ5D_PWMOutput_DataStore()) = ((int16_T) RES_INJ5D);
    } else {
      (init_resource_INJ5D_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_INJ5D_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_INJ5D_PWMOutput = 0;
      else
        pwm_create_INJ5D_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_INJ5D_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_INJ5D_PWMOutput_DataStore())), &DynamicObj, BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_INJ5D_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_INJ5D_PWMOutput = 0;
      else
        pwm_set_INJ5D_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void INJ5D_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_INJ5D_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void INJ5D_PWMOutput_PWMOutput_Create()
{
  (init_resource_INJ5D_PWMOutput_DataStore()) = -1;
}

void INJ11D_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T brake,
  boolean_T enable)
{
  if (((init_resource_INJ11D_PWMOutput_DataStore()) < 0) && (((int16_T)
        RES_INJ11D) >= 0)) {
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
    sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ11D)),
      &CreateInfo, BEHAVIOUR_PWM);
    if (SUCCESS(sErrorResult)) {
      (init_resource_INJ11D_PWMOutput_DataStore()) = ((int16_T) RES_INJ11D);
    } else {
      (init_resource_INJ11D_PWMOutput_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T pwm_create_INJ11D_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_create_INJ11D_PWMOutput = 0;
      else
        pwm_create_INJ11D_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  } else if ((init_resource_INJ11D_PWMOutput_DataStore()) >= 0) {
    NativeError_S sErrorResult;

    /* Update PWM output with modified frequency and duty_cycle */
    S_PWMResourceAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_PWM_DUTYCYCLE | USE_PWM_FREQUENCY;
    DynamicObj.u4Frequency = freq;
    DynamicObj.s2DutyCycle = duty;
    sErrorResult = SetResourceAttributes((E_ModuleResource)
      ((init_resource_INJ11D_PWMOutput_DataStore())), &DynamicObj, BEHAVIOUR_PWM);

    {
      extern uint8_T pwm_set_INJ11D_PWMOutput;
      if (SUCCESS(sErrorResult))
        pwm_set_INJ11D_PWMOutput = 0;
      else
        pwm_set_INJ11D_PWMOutput = (uint8_T) GetErrorCode(sErrorResult);
    }
  }
}

void INJ11D_PWMOutput_PWMOutput_Stop()
{
  S_PWMResourceAttributes DynamicObj;
  DynamicObj.uValidAttributesMask = USE_PWM_CONDITION;
  DynamicObj.eResourceCondition = RES_DISABLED;
  SetResourceAttributes((E_ModuleResource)
                        ((init_resource_INJ11D_PWMOutput_DataStore())),
                        &DynamicObj, BEHAVIOUR_PWM);
}

void INJ11D_PWMOutput_PWMOutput_Create()
{
  (init_resource_INJ11D_PWMOutput_DataStore()) = -1;
}

/* S-Function Block: <S2>/motohawk_ain Resource: AN11M */
NativeError_S AN11M_AnalogInput_Create(void)
{
  NativeError_S sErrorResult = ERROR_RESOURCE_NOT_CREATED;
  S_AnalogInCreateAttributes CreateInfo;
  CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
  CreateInfo.DynamicObj.uValidAttributesMask = USE_ANALOG_CONDITION;
  CreateInfo.uValidAttributesMask = USE_ANALOG_DYNAMIC_ON_CREATE;
  (init_resource_AN11M_DataStore()) = -1;
  if (((int32_T) RES_AN11M) >= 0) {
    sErrorResult = CreateResource((E_ModuleResource) (((int32_T) RES_AN11M)),
      &CreateInfo, BEHAVIOUR_ANALOGIN);
    if (SUCCESS(sErrorResult)) {
      (init_resource_AN11M_DataStore()) = ((int32_T) RES_AN11M);
    } else {
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T ain_create_AN11M;
      if (SUCCESS(sErrorResult))
        ain_create_AN11M = 0;
      else
        ain_create_AN11M = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S AN11M_AnalogInput_Get(uint16_T *adc, uint16_T *status)
{
  NativeError_S sErrorResult = ERROR_FAIL;
  uint16_T Result;
  if ((init_resource_AN11M_DataStore()) >= 0) {
    S_AnalogHowToGet HowToGetObj;
    S_AnalogResult AnalogResultObj;
    HowToGetObj.uValidAttributesMask = 0;
    sErrorResult = GetResourceValueBEHAVIOUR_ANALOGIN((E_ModuleResource)
      ((init_resource_AN11M_DataStore())), &HowToGetObj, &AnalogResultObj);
    if (SUCCESS(sErrorResult)) {
      *adc = AnalogResultObj.uADCValue ;
    } else {
      *adc = 0;
    }

    {
      extern uint8_T ain_read_AN11M;
      if (SUCCESS(sErrorResult))
        ain_read_AN11M = 0;
      else
        ain_read_AN11M = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  return sErrorResult;
}

NativeError_S Urea_Injector_OneShotOutput_Create(void)
{
  {
    S_OneShotCreateResourceAttributes CreateInfo;
    NativeError_S sErrorResult;
    CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
    CreateInfo.DynamicObj.eState = RES_OFF;
    CreateInfo.DynamicObj.uValidAttributesMask = USE_ONESHOT_COND |
      USE_ONESHOT_STATE;
    CreateInfo.uValidAttributesMask = USE_ONESHOT_DYNAMIC_ON_CREATE;
    sErrorResult = CreateResource((E_ModuleResource) ((Urea_Injector_DataStore())),
      &CreateInfo, BEHAVIOUR_ONESHOT);
    if (SUCCESS(sErrorResult)) {
      (init_resource_Urea_Injector_DataStore()) = (Urea_Injector_DataStore());
    } else {
      (init_resource_Urea_Injector_DataStore()) = -1;
      LogNativeError(sErrorResult);
    }

    {
      extern uint8_T oneshot_create_Urea_Injector;
      if (SUCCESS(sErrorResult))
        oneshot_create_Urea_Injector = 0;
      else
        oneshot_create_Urea_Injector = (uint8_T) GetErrorCode(sErrorResult);
    }

    return sErrorResult;
  }
}

NativeError_S Urea_Injector_OneShotOutput_Set(int32_T dur_us, boolean_T cancel)
{
  {
    if ((init_resource_Urea_Injector_DataStore()) >= 0) {
      S_OneShotResourceAttributes DynamicObj;
      if (cancel) {
        DynamicObj.eState = RES_OFF;
      } else {
        DynamicObj.eState = RES_ON;
      }

      DynamicObj.s4Duration = dur_us;
      DynamicObj.uValidAttributesMask = USE_ONESHOT_STATE | USE_ONESHOT_DURATION;
      SetResourceAttributes((E_ModuleResource)
                            ((init_resource_Urea_Injector_DataStore())),
                            &DynamicObj, BEHAVIOUR_ONESHOT);
    }
  }

  return SUCCESS_OK;
}
