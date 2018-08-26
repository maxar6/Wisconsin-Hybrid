/*
 * Trigger_FGND_TDC_EVENT_5811p0002.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1639
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 19:54:14 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_5811p0002(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S347>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S367>/Switch' incorporates:
       *  Constant: '<S367>/Constant1'
       *  Constant: '<S368>/Constant'
       *  RelationalOperator: '<S368>/RelOp'
       *  Sum: '<S367>/Sum'
       */
      if (BaseEngineController_A02_B.s347_UnitDelay == 2) {
        /* Sum: '<S367>/Sum' incorporates:
         *  Constant: '<S367>/Constant'
         *  UnitDelay: '<S367>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_DWork.s367_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S367>/Sum' */
        BaseEngineController_A02_B.s367_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_B.s367_Switch = 0U;
      }

      /* End of Switch: '<S367>/Switch' */

      /* Update for UnitDelay: '<S367>/CrankCounter' */
      BaseEngineController_A02_DWork.s367_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s367_Switch;
    }
  }
}
