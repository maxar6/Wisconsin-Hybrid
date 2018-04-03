/*
 * Trigger_FGND_TDC_EVENT_7097p0004.c
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

void Trigger_FGND_TDC_EVENT_7097p0004(void)
{
  /* Named constants for Stateflow: '<S785>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s738_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S738>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S740>/Switch1' incorporates:
       *  Constant: '<S740>/Constant1'
       *  Sum: '<S740>/Sum'
       */
      if (BaseEngineController_A02_B.s738_CrankCounter >= 1.0) {
        BaseEngineController_A02_B.s740_Switch1 = 0U;
      } else {
        /* Sum: '<S740>/Sum' incorporates:
         *  Constant: '<S740>/Constant'
         *  UnitDelay: '<S740>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_A02_B.s740_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S740>/Sum' */
        BaseEngineController_A02_B.s740_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S740>/Switch1' */
    }
  }
}
