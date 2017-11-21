/*
 * Trigger_Encoder_Fault_31.c
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

void Trigger_Encoder_Fault_31(void)
{
  /* Output and update for function-call system: '<S548>/motohawk_model_probe_eval_f' */

  /* Sum: '<S555>/Sum' incorporates:
   *  Constant: '<S555>/Constant'
   *  UnitDelay: '<S555>/Unit Delay'
   */
  BaseEngineController_A02_B.s555_Sum = 1U +
    BaseEngineController_A02_DWork.s555_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S555>/Unit Delay' */
  BaseEngineController_A02_DWork.s555_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s555_Sum;
}
