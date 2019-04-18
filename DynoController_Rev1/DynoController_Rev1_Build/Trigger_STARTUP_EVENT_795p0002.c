/*
 * Trigger_STARTUP_EVENT_795p0002.c
 *
 * Code generation for model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.309
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 28 16:20:04 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_STARTUP_EVENT_795p0002(void)
{
  {
    /* Output and update for function-call system: '<Root>/startup' */

    /* S-Function (motohawk_sfun_vdogauge_reset): '<S3>/VDO Gauge Reset' */
    /* VDO Gauge Reset */
    {
      extern NativeError_S VDOGaugeService_GaugeChain_Reset(void);
      VDOGaugeService_GaugeChain_Reset();
    }
  }
}
