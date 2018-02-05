/*
 * Trigger_Encoder_Fault_28.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1553
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Jan 24 11:43:49 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_Encoder_Fault_28(void)
{
  /* Output and update for function-call system: '<S534>/motohawk_model_probe_eval_f' */

  /* Sum: '<S541>/Sum' incorporates:
   *  Constant: '<S541>/Constant'
   *  UnitDelay: '<S541>/Unit Delay'
   */
  BaseEngineController_A02_B.s541_Sum = 1U +
    BaseEngineController_A02_DWork.s541_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S541>/Unit Delay' */
  BaseEngineController_A02_DWork.s541_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s541_Sum;
}
