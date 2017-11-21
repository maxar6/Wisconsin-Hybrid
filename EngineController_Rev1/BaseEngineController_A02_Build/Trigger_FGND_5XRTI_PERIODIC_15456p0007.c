/*
 * Trigger_FGND_5XRTI_PERIODIC_15456p0007.c
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

void Trigger_FGND_5XRTI_PERIODIC_15456p0007(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Advance to Start Angle' */

    /* Sum: '<S16>/Sum' incorporates:
     *  Constant: '<S16>/deg//rev'
     *  Constant: '<S16>/min//msec'
     *  Product: '<S16>/Product1'
     *  Product: '<S16>/Product2'
     */
    BaseEngineController_A02_B.s16_Sum = BaseEngineController_A02_B.s556_Sum1 *
      360.0 / 60000.0 * BaseEngineController_A02_B.s114_Sum +
      BaseEngineController_A02_B.s120_SparkAdv;
  }
}
