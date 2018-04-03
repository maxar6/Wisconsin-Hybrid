/*
 * Trigger_BGND_BASEx20_PERIODIC_4177p0001.c
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

void Trigger_BGND_BASEx20_PERIODIC_4177p0001(void)
{
  {
    /* Output and update for function-call system: '<Root>/onTimeCount' */

    /* S-Function (motohawk_sfun_data_write): '<S4>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_data_def): '<S4>/motohawk_data_def'
     *  Sum: '<S4>/Sum'
     *  Constant: '<S4>/Constant'
     *  S-Function (motohawk_sfun_data_def): '<S4>/motohawk_data_def'
     *  S-Function (motohawk_sfun_data_read): '<S4>/motohawk_data_read'
     */
    /* Write to Data Storage as scalar: (Dynamic Reference) */
    {
      uint32_T *input_ref;
      input_ref = (void *) &(totalOnTime_DataStore());
      if (input_ref) {
        *input_ref = (1U + (((uint32_T *) &(totalOnTime_DataStore())) ?
                            (*((uint32_T *) &(totalOnTime_DataStore()))) : 0));
      }
    }
  }
}
