/*
 * Trigger_FGND_TDC1_EVENT_14692p0002.c
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

void Trigger_FGND_TDC1_EVENT_14692p0002(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S99>/SequencyCutMachine' */
    {
      real_T rtb_Sum2;
      int32_T i;
      uint8_T rtb_Sum1_l_0;

      /* Inport: '<S109>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s109_CutArray[i] =
          BaseEngineController_A02_B.s99_MultiportSwitch[i];
      }

      /* Sum: '<S109>/Sum1' incorporates:
       *  Constant: '<S109>/Constant'
       */
      i = BaseEngineController_A02_B.s99_UnitDelay1 + 1;
      if ((uint32_T)i > 255U) {
        rtb_Sum1_l_0 = MAX_uint8_T;
      } else {
        rtb_Sum1_l_0 = (uint8_T)i;
      }

      /* Switch: '<S109>/Switch' incorporates:
       *  Constant: '<S109>/Constant10'
       *  Constant: '<S109>/Constant11'
       *  RelationalOperator: '<S109>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l_0) {
        BaseEngineController_A02_B.s109_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s109_Switch = rtb_Sum1_l_0;
      }

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
    }
  }
}
