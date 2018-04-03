/*
 * Trigger_FGND_5XRTI_PERIODIC_1268p0004.c
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

void Trigger_FGND_5XRTI_PERIODIC_1268p0004(void)
{
  /* Named constants for Stateflow: '<S785>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Advance to Start Angle' */

    /* Sum: '<S15>/Sum' incorporates:
     *  Constant: '<S15>/deg//rev'
     *  Constant: '<S15>/min//msec'
     *  Product: '<S15>/Product1'
     *  Product: '<S15>/Product2'
     */
    BaseEngineController_A02_B.s15_Sum = BaseEngineController_A02_B.s507_Sum1 *
      360.0 / 60000.0 * BaseEngineController_A02_B.s108_Sum +
      BaseEngineController_A02_B.s114_SparkAdv;
  }
}
