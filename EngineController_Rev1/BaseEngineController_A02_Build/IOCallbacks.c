/*
 * IOCallbacks.c
 *
 * Real-Time Workshop code generation for Simulink model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1510
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CommonInclude.h"
#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void DiscreteOut_DiagnosticCallback_FuelPumpPin(S_DiscreteOutDiagInfo const
  *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify)
{
  switch (diagPtr->eDiagStatus)
  {
   case RES_STATUS_OK:
    (DiscreteOut_FaultStatus_FuelPumpPin_DataStore()) = 0;
    break;

   case RES_STATUS_FAULT:
    (DiscreteOut_FaultStatus_FuelPumpPin_DataStore()) = 1;
    break;

   default:
    (DiscreteOut_FaultStatus_FuelPumpPin_DataStore()) = 2;
    break;
  }
}

void DiscreteOut_DiagnosticCallback_OilPumpPin(S_DiscreteOutDiagInfo const
  *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify)
{
  switch (diagPtr->eDiagStatus)
  {
   case RES_STATUS_OK:
    (DiscreteOut_FaultStatus_OilPumpPin_DataStore()) = 0;
    break;

   case RES_STATUS_FAULT:
    (DiscreteOut_FaultStatus_OilPumpPin_DataStore()) = 1;
    break;

   default:
    (DiscreteOut_FaultStatus_OilPumpPin_DataStore()) = 2;
    break;
  }
}

void DiscreteOut_DiagnosticCallback_O2_Heater(S_DiscreteOutDiagInfo const
  *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify)
{
  switch (diagPtr->eDiagStatus)
  {
   case RES_STATUS_OK:
    (DiscreteOut_FaultStatus_O2_Heater_DataStore()) = 0;
    break;

   case RES_STATUS_FAULT:
    (DiscreteOut_FaultStatus_O2_Heater_DataStore()) = 1;
    break;

   default:
    (DiscreteOut_FaultStatus_O2_Heater_DataStore()) = 2;
    break;
  }
}

int32_T SparkSeqDiag_21_Count = 0;
int32_T SparkSeqDiag_21_LastPin = -1;
uint8_T SparkSeqDiag_21_Short[8];
uint8_T SparkSeqDiag_21_Open[8];
uint16_T SparkSeqDiag_21_OpenADC[8];
uint16_T SparkSeqDiag_21_OnTime[8];
void SparkSeqDiagCallback_21(S_SeqOutDiagReportPtr report, NativePtrSizedInt_U
  userData)
{
  int32_T pin_number = (int32_T) userData;

  /* Check for short circuit */
  if (report->DiagReportObj.EST.u1ValidDataMask & HAS_SHORT_CCT_EST_DIAG) {
    SparkSeqDiag_21_OnTime[pin_number] =
      report->DiagReportObj.EST.ShortDataObj.u2OnTimeInMicroSecs;
    if (report->DiagReportObj.EST.ShortDataObj.b1Occurred == 0) {
      SparkSeqDiag_21_Short[pin_number] = 1;/* Fault */
    } else {
      SparkSeqDiag_21_Short[pin_number] = 0;/* No Fault */
    }
  } else {
    SparkSeqDiag_21_Short[pin_number] = 2;/* Indeterminate */
  }

  /* Check for open circuit */
  if (report->DiagReportObj.EST.u1ValidDataMask & HAS_OPEN_CCT_EST_DIAG) {
    SparkSeqDiag_21_OpenADC[pin_number] =
      report->DiagReportObj.EST.OpenDataObj.uADCSample;
    if (report->DiagReportObj.EST.OpenDataObj.uADCSample >= 1023) {
      SparkSeqDiag_21_Short[pin_number] = 1;/* Short to Power */
      SparkSeqDiag_21_Open[pin_number] = 0;/* Not Open */
    } else if (report->DiagReportObj.EST.OpenDataObj.uADCSample <= 10) {
      SparkSeqDiag_21_Short[pin_number] = 1;/* Short to Ground */
      SparkSeqDiag_21_Open[pin_number] = 0;/* Not Open */
    } else if (report->DiagReportObj.EST.OpenDataObj.uADCSample >
               (EST_OpenThreshold_DataStore())) {
      SparkSeqDiag_21_Short[pin_number] = 0;/* Not Shorted */
      SparkSeqDiag_21_Open[pin_number] = 1;/* Open Fault */
    } else {
      SparkSeqDiag_21_Short[pin_number] = 0;/* Not Shorted */
      SparkSeqDiag_21_Open[pin_number] = 0;/* Not Open */
    }
  } else {
    SparkSeqDiag_21_Open[pin_number] = 2;/* Indeterminate */
  }

  SparkSeqDiag_21_Count++;
  SparkSeqDiag_21_LastPin = pin_number;
}

void ReSyncAfterCrankUnsync_21(void)
{
  extern NativeError_S ReapplySeqOutCond(E_ModuleResource);
  extern uint8_T motohawk_encoder_fault;
  if (motohawk_encoder_fault == 1) {
    if ((EST_SequenceType_DataStore()) == 2) {
      int i;
      int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
      for (i=0; i < half_cylinders; i++) {
        ReapplySeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i));
      }
    } else if ((EST_SequenceType_DataStore()) == 3) {
      ReapplySeqOutCond((E_ModuleResource) (EST_InitialPin_DataStore()));
    }
  }
}
