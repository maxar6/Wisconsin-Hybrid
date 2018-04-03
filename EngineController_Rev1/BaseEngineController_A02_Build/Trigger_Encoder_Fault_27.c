/*
 * Trigger_Encoder_Fault_27.c
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

void Trigger_Encoder_Fault_27(void)
{
  /* Output and update for function-call system: '<S499>/motohawk_model_probe_eval_f' */

  /* Sum: '<S506>/Sum' incorporates:
   *  Constant: '<S506>/Constant'
   *  UnitDelay: '<S506>/Unit Delay'
   */
  BaseEngineController_A02_B.s506_Sum = 1U +
    BaseEngineController_A02_DWork.s506_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S506>/Unit Delay' */
  BaseEngineController_A02_DWork.s506_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s506_Sum;
}
