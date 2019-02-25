/*
 * Trigger_IDLE_EVENT_10038p0005.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1640
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_IDLE_EVENT_10038p0005(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s4_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP IDLE Processing' */
    {
      /* local block i/o variables */
      int8_T rtb_f;

      /* Outputs for Function Call SubSystem: '<S4>/CCP IDLE Processing' incorporates:
       *  TriggerPort: '<S8>/f'
       */
      rtb_f = 2;

      /* <S8>/motohawk_sfun_ccp_protocol: CCP Protocol Engine_Controller */
      {
        extern S_CCPHandlerInstance mh_Engine_Controller_CCPHandlerInstance;
        extern S_CCPHandlerConfig mh_Engine_Controller_CCPHandlerConfig;

        /* Is the CCP Master waiting on a checksum calculation? */
        mh_ProcessCCPChecksum(&mh_Engine_Controller_CCPHandlerConfig,
                              &mh_Engine_Controller_CCPHandlerInstance);
      }
    }
  }
}
