/*
 * Trigger_SHUTDOWN_EVENT_3504p0009.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1596
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Sep 07 17:36:03 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_SHUTDOWN_EVENT_3504p0009(void)
{
  {
    /* Output and update for function-call system: '<Root>/shutdown' */

    /* S-Function (motohawk_sfun_vdogauge_reset): '<S6>/VDO Gauge Reset' */
    /* VDO Gauge Reset */
    {
      extern NativeError_S VDOGaugeService_GaugeChain_Reset(void);
      VDOGaugeService_GaugeChain_Reset();
    }
  }
}
