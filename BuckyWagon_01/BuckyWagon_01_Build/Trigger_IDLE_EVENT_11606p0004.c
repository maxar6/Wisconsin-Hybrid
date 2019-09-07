/*
 * Trigger_IDLE_EVENT_11606p0004.c
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

void Trigger_IDLE_EVENT_11606p0004(void)
{
  if (BuckyWagon_01_DWork.s8_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S8>/CCP IDLE Processing' */
    {
      /* local block i/o variables */
      int8_T rtb_f;

      /* Outputs for Function Call SubSystem: '<S8>/CCP IDLE Processing' incorporates:
       *  TriggerPort: '<S12>/f'
       */
      rtb_f = 2;

      /* <S12>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
      {
        extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
        extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

        /* Is the CCP Master waiting on a checksum calculation? */
        mh_ProcessCCPChecksum(&mh_CCP1_CCPHandlerConfig,
                              &mh_CCP1_CCPHandlerInstance);
      }

      /* S-Function (motohawk_sfun_code_cover): '<S12>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(4);
      }
    }
  }
}
