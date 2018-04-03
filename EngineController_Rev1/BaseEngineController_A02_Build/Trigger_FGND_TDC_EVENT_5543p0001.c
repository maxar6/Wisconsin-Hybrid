/*
 * Trigger_FGND_TDC_EVENT_5543p0001.c
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

void Trigger_FGND_TDC_EVENT_5543p0001(void)
{
  /* Named constants for Stateflow: '<S785>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S319>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S339>/Switch' incorporates:
       *  Constant: '<S339>/Constant1'
       *  Constant: '<S340>/Constant'
       *  RelationalOperator: '<S340>/RelOp'
       *  Sum: '<S339>/Sum'
       */
      if (BaseEngineController_A02_B.s319_UnitDelay == 2) {
        /* Sum: '<S339>/Sum' incorporates:
         *  Constant: '<S339>/Constant'
         *  UnitDelay: '<S339>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_DWork.s339_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S339>/Sum' */
        BaseEngineController_A02_B.s339_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_B.s339_Switch = 0U;
      }

      /* End of Switch: '<S339>/Switch' */

      /* Update for UnitDelay: '<S339>/CrankCounter' */
      BaseEngineController_A02_DWork.s339_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s339_Switch;
    }
  }
}
