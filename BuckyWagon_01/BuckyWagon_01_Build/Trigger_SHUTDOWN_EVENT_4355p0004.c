/*
 * Trigger_SHUTDOWN_EVENT_4355p0004.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1530
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Jul 29 18:42:46 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_SHUTDOWN_EVENT_4355p0004(void)
{
  {
    /* Output and update for function-call system: '<Root>/shutdown' */

    /* S-Function (motohawk_sfun_vdogauge_reset): '<S5>/VDO Gauge Reset' */
    /* VDO Gauge Reset */
    {
      extern NativeError_S VDOGaugeService_GaugeChain_Reset(void);
      VDOGaugeService_GaugeChain_Reset();
    }
  }
}
