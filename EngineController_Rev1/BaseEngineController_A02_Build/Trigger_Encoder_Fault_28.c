/*
 * Trigger_Encoder_Fault_28.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1626
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Apr 22 15:55:33 2018
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
  /* Output and update for function-call system: '<S512>/motohawk_model_probe_eval_f' */

  /* Sum: '<S519>/Sum' incorporates:
   *  Constant: '<S519>/Constant'
   *  UnitDelay: '<S519>/Unit Delay'
   */
  BaseEngineController_A02_B.s519_Sum = 1U +
    BaseEngineController_A02_DWork.s519_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S519>/Unit Delay' */
  BaseEngineController_A02_DWork.s519_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s519_Sum;
}
