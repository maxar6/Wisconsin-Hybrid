/*
 * Trigger_FGND_TDC1_EVENT_1156p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1566
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 15 13:55:33 2018
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
  /* Named constants for Stateflow: '<S778>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S93>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S103>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s103_CutArray[i] =
          BaseEngineController_A02_B.s93_MultiportSwitch[i];
      }

      /* End of Inport: '<S103>/CutArray' */

      /* Sum: '<S103>/Sum1' incorporates:
       *  Constant: '<S103>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_A02_B.s93_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S103>/Sum1' */

      /* Switch: '<S103>/Switch' incorporates:
       *  Constant: '<S103>/Constant10'
       *  Constant: '<S103>/Constant11'
       *  RelationalOperator: '<S103>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_A02_B.s103_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s103_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S103>/Switch' */

      /* Sum: '<S103>/Sum2' incorporates:
       *  Constant: '<S103>/Constant1'
       *  RelationalOperator: '<S103>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_A02_B.s103_Switch == 4) +
        BaseEngineController_A02_B.s93_UnitDelay2;

      /* Switch: '<S103>/Switch1' incorporates:
       *  Constant: '<S103>/Constant2'
       *  Constant: '<S103>/Constant3'
       *  RelationalOperator: '<S103>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_A02_B.s103_Switch1 = 1.0;
      } else {
        BaseEngineController_A02_B.s103_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S103>/Switch1' */
    }
  }
}
