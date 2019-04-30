/*
 * Trigger_BGND_BASEx20_PERIODIC_3977p0004.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1586
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 29 19:20:54 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_BGND_BASEx20_PERIODIC_3977p0004(void)
{
  {
    /* Output and update for function-call system: '<Root>/onTimeCount' */
    {
      /* local block i/o variables */
      uint32_T rtb_Sum_b;

      /* Sum: '<S5>/Sum' incorporates:
       *  Constant: '<S5>/Constant'
       *  S-Function (motohawk_sfun_data_def): '<S5>/motohawk_data_def'
       *  S-Function (motohawk_sfun_data_read): '<S5>/motohawk_data_read'
       */
      rtb_Sum_b = 1U + (((uint32_T *) &(totalOnTime_DataStore())) ? (*((uint32_T
        *) &(totalOnTime_DataStore()))) : 0);

      /* S-Function (motohawk_sfun_data_write): '<S5>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_data_def): '<S5>/motohawk_data_def'
       */
      /* Write to Data Storage as scalar: (Dynamic Reference) */
      {
        uint32_T *input_ref;
        input_ref = (void *) &(totalOnTime_DataStore());
        if (input_ref) {
          *input_ref = rtb_Sum_b;
        }
      }
    }
  }
}
