/*
 * Trigger_STARTUP_EVENT_8213p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1522
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 23 13:00:54 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_STARTUP_EVENT_8213p0001(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S562>/Once at Startup' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain;

      /* S-Function Block: <S607>/motohawk_ain Resource: MAPSensorPin */
      {
        extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        MAPSensorPin_AnalogInput_Get(&rtb_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S607>/Data Type Conversion' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S607>/motohawk_ain'
       */
      BaseEngineController_A02_B.s562_Merge = (real_T)rtb_motohawk_ain;
    }
  }
}
