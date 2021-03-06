/*
 * Trigger_FGND_5XRTI_PERIODIC_1409p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1640
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1409p0004(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S14>/Spark Advance to Start Angle' */

    /* Sum: '<S24>/Sum' incorporates:
     *  Constant: '<S24>/deg//rev'
     *  Constant: '<S24>/min//msec'
     *  Product: '<S24>/Product1'
     *  Product: '<S24>/Product2'
     */
    BaseEngineController_A02_B.s24_Sum = BaseEngineController_A02_B.s543_Sum1 *
      360.0 / 60000.0 * BaseEngineController_A02_B.s122_Sum +
      BaseEngineController_A02_B.s128_SparkAdv;
  }
}
