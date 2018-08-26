/*
 * Trigger_FGND_TDC1_EVENT_1156p0004.c
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

void Trigger_FGND_TDC1_EVENT_1156p0004(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S107>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S117>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s117_CutArray[i] =
          BaseEngineController_A02_B.s107_MultiportSwitch[i];
      }

      /* End of Inport: '<S117>/CutArray' */

      /* Sum: '<S117>/Sum1' incorporates:
       *  Constant: '<S117>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_A02_B.s107_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S117>/Sum1' */

      /* Switch: '<S117>/Switch' incorporates:
       *  Constant: '<S117>/Constant10'
       *  Constant: '<S117>/Constant11'
       *  RelationalOperator: '<S117>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_A02_B.s117_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s117_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S117>/Switch' */

      /* Sum: '<S117>/Sum2' incorporates:
       *  Constant: '<S117>/Constant1'
       *  RelationalOperator: '<S117>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_A02_B.s117_Switch == 4) +
        BaseEngineController_A02_B.s107_UnitDelay2;

      /* Switch: '<S117>/Switch1' incorporates:
       *  Constant: '<S117>/Constant2'
       *  Constant: '<S117>/Constant3'
       *  RelationalOperator: '<S117>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_A02_B.s117_Switch1 = 1.0;
      } else {
        BaseEngineController_A02_B.s117_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S117>/Switch1' */
    }
  }
}
