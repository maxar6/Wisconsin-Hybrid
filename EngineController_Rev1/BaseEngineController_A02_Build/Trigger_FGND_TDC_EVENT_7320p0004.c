/*
 * Trigger_FGND_TDC_EVENT_7320p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1553
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Jan 24 11:43:49 2018
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
  /* Named constants for Stateflow: '<S822>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s356_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S356>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S377>/Switch' incorporates:
       *  Constant: '<S377>/Constant1'
       *  Constant: '<S378>/Constant'
       *  RelationalOperator: '<S378>/RelOp'
       *  Sum: '<S377>/Sum'
       */
      if (BaseEngineController_A02_B.s356_UnitDelay == 2) {
        /* Sum: '<S377>/Sum' incorporates:
         *  Constant: '<S377>/Constant'
         *  UnitDelay: '<S377>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_DWork.s377_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S377>/Sum' */
        BaseEngineController_A02_B.s377_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_B.s377_Switch = 0U;
      }

      /* End of Switch: '<S377>/Switch' */

      /* Update for UnitDelay: '<S377>/CrankCounter' */
      BaseEngineController_A02_DWork.s377_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s377_Switch;
    }
  }
}
