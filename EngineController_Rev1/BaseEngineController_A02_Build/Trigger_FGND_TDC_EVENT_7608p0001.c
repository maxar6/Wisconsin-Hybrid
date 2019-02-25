/*
 * Trigger_FGND_TDC_EVENT_7608p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1640
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_7608p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S789>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S791>/Switch1' incorporates:
       *  Constant: '<S791>/Constant1'
       *  Sum: '<S791>/Sum'
       */
      if (BaseEngineController_A02_B.s789_CrankCounter >= 1.0) {
        BaseEngineController_A02_B.s791_Switch1 = 0U;
      } else {
        /* Sum: '<S791>/Sum' incorporates:
         *  Constant: '<S791>/Constant'
         *  UnitDelay: '<S791>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_A02_B.s791_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S791>/Sum' */
        BaseEngineController_A02_B.s791_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S791>/Switch1' */
    }
  }
}
