/*
 * Trigger_STARTUP_EVENT_4288p0005.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1520
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 23 14:25:32 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_STARTUP_EVENT_4288p0005(void)
{
  {
    /* Output and update for function-call system: '<Root>/startup' */
    {
      /* local block i/o variables */
      uint32_T rtb_Sum_jk;

      /* Sum: '<S6>/Sum' incorporates:
       *  Constant: '<S6>/Constant'
       *  S-Function (motohawk_sfun_data_def): '<S6>/motohawk_data_def'
       *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
       */
      rtb_Sum_jk = 1U + (((uint32_T *) &(startupCount_DataStore())) ?
                         (*((uint32_T *) &(startupCount_DataStore()))) : 0);

      /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_data_def): '<S6>/motohawk_data_def'
       */
      /* Write to Data Storage as scalar: (Dynamic Reference) */
      {
        uint32_T *input_ref;
        input_ref = (void *) &(startupCount_DataStore());
        if (input_ref) {
          *input_ref = rtb_Sum_jk;
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
}
