/*
 * Trigger_FGND_TDC_EVENT_7280p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1615
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Apr 07 14:22:48 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_7280p0004(void)
{
  /* Named constants for Stateflow: '<S805>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s752_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S752>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S754>/Switch1' incorporates:
       *  Constant: '<S754>/Constant1'
       *  Sum: '<S754>/Sum'
       */
      if (BaseEngineController_A02_B.s752_CrankCounter >= 1.0) {
        BaseEngineController_A02_B.s754_Switch1 = 0U;
      } else {
        /* Sum: '<S754>/Sum' incorporates:
         *  Constant: '<S754>/Constant'
         *  UnitDelay: '<S754>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_A02_B.s754_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S754>/Sum' */
        BaseEngineController_A02_B.s754_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S754>/Switch1' */
    }
  }
}
