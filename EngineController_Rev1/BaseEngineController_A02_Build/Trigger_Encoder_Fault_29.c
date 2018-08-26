/*
 * Trigger_Encoder_Fault_29.c
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

void Trigger_Encoder_Fault_29(void)
{
  /* Output and update for function-call system: '<S535>/motohawk_model_probe_eval_f' */

  /* Sum: '<S542>/Sum' incorporates:
   *  Constant: '<S542>/Constant'
   *  UnitDelay: '<S542>/Unit Delay'
   */
  BaseEngineController_A02_B.s542_Sum = 1U +
    BaseEngineController_A02_DWork.s542_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S542>/Unit Delay' */
  BaseEngineController_A02_DWork.s542_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s542_Sum;
}
