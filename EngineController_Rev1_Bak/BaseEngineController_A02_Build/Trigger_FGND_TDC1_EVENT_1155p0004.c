/*
 * Trigger_FGND_TDC1_EVENT_1155p0004.c
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

void Trigger_FGND_TDC1_EVENT_1155p0004(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S99>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S109>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s109_CutArray[i] =
          BaseEngineController_A02_B.s99_MultiportSwitch[i];
      }

      /* End of Inport: '<S109>/CutArray' */

      /* Sum: '<S109>/Sum1' incorporates:
       *  Constant: '<S109>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_A02_B.s99_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S109>/Sum1' */

      /* Switch: '<S109>/Switch' incorporates:
       *  Constant: '<S109>/Constant10'
       *  Constant: '<S109>/Constant11'
       *  RelationalOperator: '<S109>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_A02_B.s109_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s109_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S109>/Switch' */

      /* Sum: '<S109>/Sum2' incorporates:
       *  Constant: '<S109>/Constant1'
       *  RelationalOperator: '<S109>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_A02_B.s109_Switch == 4) +
        BaseEngineController_A02_B.s99_UnitDelay2;

      /* Switch: '<S109>/Switch1' incorporates:
       *  Constant: '<S109>/Constant2'
       *  Constant: '<S109>/Constant3'
       *  RelationalOperator: '<S109>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_A02_B.s109_Switch1 = 1.0;
      } else {
        BaseEngineController_A02_B.s109_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S109>/Switch1' */
    }
  }
}
