/*
 * Trigger_IDLE_EVENT_6803p0001.c
 *
 * Code generation for model "BatteryController_Rev1.mdl".
 *
 * Model version              : 1.590
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 09:42:57 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

void Trigger_IDLE_EVENT_6803p0001(void)
{
  if (BatteryController_Rev1_DWork.s4_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP IDLE Processing' */
    {
      /* local block i/o variables */
      int8_T rtb_f;

      /* Outputs for Function Call SubSystem: '<S4>/CCP IDLE Processing' incorporates:
       *  TriggerPort: '<S8>/f'
       */
      rtb_f = 2;

      /* <S8>/motohawk_sfun_ccp_protocol: CCP Protocol CCP_BAT */
      {
        extern S_CCPHandlerInstance mh_CCP_BAT_CCPHandlerInstance;
        extern S_CCPHandlerConfig mh_CCP_BAT_CCPHandlerConfig;

        /* Is the CCP Master waiting on a checksum calculation? */
        mh_ProcessCCPChecksum(&mh_CCP_BAT_CCPHandlerConfig,
                              &mh_CCP_BAT_CCPHandlerInstance);
      }

      /* S-Function (motohawk_sfun_code_cover): '<S8>/motohawk_code_coverage' */
      /* Code Coverage Test: BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(4);
      }
    }
  }
}
