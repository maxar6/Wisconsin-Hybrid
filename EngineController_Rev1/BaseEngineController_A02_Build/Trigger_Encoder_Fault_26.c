/*
 * Trigger_Encoder_Fault_26.c
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

void Trigger_Encoder_Fault_26(void)
{
  /* Output and update for function-call system: '<S497>/motohawk_model_probe_eval_f' */

  /* Sum: '<S504>/Sum' incorporates:
   *  Constant: '<S504>/Constant'
   *  UnitDelay: '<S504>/Unit Delay'
   */
  BaseEngineController_A02_B.s504_Sum = 1U +
    BaseEngineController_A02_DWork.s504_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S504>/Unit Delay' */
  BaseEngineController_A02_DWork.s504_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s504_Sum;
}
