/*
 * Trigger_FGND_TDC_EVENT_5695p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1626
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Apr 22 15:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_5695p0004(void)
{
  /* Named constants for Stateflow: '<S808>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S325>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S345>/Switch' incorporates:
       *  Constant: '<S345>/Constant1'
       *  Constant: '<S346>/Constant'
       *  RelationalOperator: '<S346>/RelOp'
       *  Sum: '<S345>/Sum'
       */
      if (BaseEngineController_A02_B.s325_UnitDelay == 2) {
        /* Sum: '<S345>/Sum' incorporates:
         *  Constant: '<S345>/Constant'
         *  UnitDelay: '<S345>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_DWork.s345_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S345>/Sum' */
        BaseEngineController_A02_B.s345_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_B.s345_Switch = 0U;
      }

      /* End of Switch: '<S345>/Switch' */

      /* Update for UnitDelay: '<S345>/CrankCounter' */
      BaseEngineController_A02_DWork.s345_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s345_Switch;
    }
  }
}
