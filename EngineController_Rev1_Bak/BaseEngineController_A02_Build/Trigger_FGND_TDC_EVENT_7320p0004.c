/*
 * Trigger_FGND_TDC_EVENT_7320p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1524
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 03:08:50 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_7320p0004(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S370>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S391>/Switch' incorporates:
       *  Constant: '<S391>/Constant1'
       *  Constant: '<S392>/Constant'
       *  RelationalOperator: '<S392>/RelOp'
       *  Sum: '<S391>/Sum'
       */
      if (BaseEngineController_A02_B.s370_UnitDelay == 2) {
        /* Sum: '<S391>/Sum' incorporates:
         *  Constant: '<S391>/Constant'
         *  UnitDelay: '<S391>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_DWork.s391_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S391>/Sum' */
        BaseEngineController_A02_B.s391_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_B.s391_Switch = 0U;
      }

      /* End of Switch: '<S391>/Switch' */

      /* Update for UnitDelay: '<S391>/CrankCounter' */
      BaseEngineController_A02_DWork.s391_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s391_Switch;
    }
  }
}
