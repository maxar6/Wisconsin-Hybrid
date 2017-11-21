/*
 * Trigger_FGND_TDC_EVENT_4171p001.c
 *
 * Real-Time Workshop code generation for Simulink model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1510
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_4171p001(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S370>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S391>/Switch' incorporates:
       *  Constant: '<S391>/Constant'
       *  Constant: '<S391>/Constant1'
       *  Constant: '<S392>/Constant'
       *  RelationalOperator: '<S392>/RelOp'
       *  Sum: '<S391>/Sum'
       *  UnitDelay: '<S391>/CrankCounter'
       */
      if (BaseEngineController_A02_B.s370_UnitDelay == 2) {
        tmp = BaseEngineController_A02_DWork.s391_CrankCounter_DSTATE + 1;
        if ((uint32_T)tmp > 255U) {
          BaseEngineController_A02_B.s391_Switch = MAX_uint8_T;
        } else {
          BaseEngineController_A02_B.s391_Switch = (uint8_T)tmp;
        }
      } else {
        BaseEngineController_A02_B.s391_Switch = 0U;
      }

      /* Update for UnitDelay: '<S391>/CrankCounter' */
      BaseEngineController_A02_DWork.s391_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s391_Switch;
    }
  }
}
