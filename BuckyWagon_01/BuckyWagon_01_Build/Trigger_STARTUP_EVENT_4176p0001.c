/*
 * Trigger_STARTUP_EVENT_4176p0001.c
 *
 * Real-Time Workshop code generation for Simulink model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1518
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_STARTUP_EVENT_4176p0001(void)
{
  {
    /* Output and update for function-call system: '<Root>/startup' */

    /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_data_def): '<S6>/motohawk_data_def'
     *  Sum: '<S6>/Sum'
     *  S-Function (motohawk_sfun_data_def): '<S6>/motohawk_data_def'
     *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
     *  Constant: '<S6>/Constant'
     */
    /* Write to Data Storage as scalar: (Dynamic Reference) */
    {
      uint32_T *input_ref;
      input_ref = (void *) &(startupCount_DataStore());
      if (input_ref) {
        *input_ref = (1U + (((uint32_T *) &(startupCount_DataStore())) ?
                            (*((uint32_T *) &(startupCount_DataStore()))) : 0));
      }
    }

    /* S-Function (motohawk_sfun_vdogauge_reset): '<S6>/VDO Gauge Reset' */
    /* VDO Gauge Reset */
    {
      extern NativeError_S VDOGaugeService_GaugeChain_Reset(void);
      VDOGaugeService_GaugeChain_Reset();
    }
  }
}
