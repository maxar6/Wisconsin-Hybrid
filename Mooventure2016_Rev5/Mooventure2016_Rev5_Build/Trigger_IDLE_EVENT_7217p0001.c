/*
 * Trigger_IDLE_EVENT_7217p0001.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2161
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 17:16:08 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_IDLE_EVENT_7217p0001(void)
{
  if (Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP IDLE Processing' */
    {
      /* local block i/o variables */
      int8_T rtb_f;

      /* Outputs for Function Call SubSystem: '<S4>/CCP IDLE Processing' incorporates:
       *  TriggerPort: '<S8>/f'
       */
      rtb_f = 2;

      /* <S8>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
      {
        extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
        extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

        /* Is the CCP Master waiting on a checksum calculation? */
        mh_ProcessCCPChecksum(&mh_CCP1_CCPHandlerConfig,
                              &mh_CCP1_CCPHandlerInstance);
      }

      /* S-Function (motohawk_sfun_code_cover): '<S8>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(4);
      }
    }
  }
}
