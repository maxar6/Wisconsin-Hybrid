/*
 * Trigger_FGND_MID_TDC_EVENT_6623p0005.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1579
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Feb 16 15:06:38 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_MID_TDC_EVENT_6623p0005(void)
{
  /* Named constants for Stateflow: '<S785>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1) {
    /* Output and update for function-call system: '<S513>/MID_TDC' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain_read;

      /* S-Function Block: <S562>/motohawk_ain_read Resource: MAPSensorPin */
      {
        extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        MAPSensorPin_AnalogInput_Get(&rtb_motohawk_ain_read, NULL);
      }

      /* DataTypeConversion: '<S562>/Data Type Conversion' incorporates:
       *  S-Function (motohawk_sfun_ain_read): '<S562>/motohawk_ain_read'
       */
      BaseEngineController_A02_B.s513_Merge = (real_T)rtb_motohawk_ain_read;
    }
  }
}
