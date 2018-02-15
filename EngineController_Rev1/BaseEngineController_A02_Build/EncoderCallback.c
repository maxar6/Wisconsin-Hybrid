/*
 * EncoderCallback.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1566
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 15 13:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Application.h"

uint8_T motohawk_encoder_status = 0;
uint8_T motohawk_encoder_fault = 0;
void EncoderStateCallback(E_EncoderStatus in_eEncoderStatus, NativePtrSizedInt_U
  in_uAppDataToSendOnNotify)
{
  motohawk_encoder_status = (uint8_T) in_eEncoderStatus;
}

void EncoderDiagnosticsCallback(E_EncoderError in_eEncoderError,
  NativePtrSizedInt_U in_uAppDataToSendOnNotify)
{
  motohawk_encoder_fault = ((uint8_T) in_eEncoderError) + 1;

  {
    extern void ReSyncAfterCrankUnsync_19(void);
    ReSyncAfterCrankUnsync_19();
  }

  {
    extern void Trigger_Encoder_Fault_26(void);
    Trigger_Encoder_Fault_26();
  }
}
