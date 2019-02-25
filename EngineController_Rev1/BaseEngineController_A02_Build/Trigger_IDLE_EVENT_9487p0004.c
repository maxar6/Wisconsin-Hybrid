/*
 * Trigger_IDLE_EVENT_9487p0004.c
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

void Trigger_IDLE_EVENT_9487p0004(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s1_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP Command Driver' */
    {
      int32_T s9_iter;

      /* Outputs for Iterator SubSystem: '<S6>/While new CCP Command' incorporates:
       *  WhileIterator: '<S9>/While Iterator'
       */
      s9_iter = 1;
      do {
        /* S-Function (motohawk_sfun_read_can_raw): '<S9>/Read CAN Raw' */
        /* MotoHawk Read CAN Raw */
        {
          S_CANMessage messageObj;
          int i;
          static uint32_T queue_tail = 0;
          extern struct {
            uint32_T head;
            S_CANMessage messages[4];
          } MHCAN_queue_Engine_Controller;

          extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
            uint32_T *tail, S_CANMessage *messageObj);
          boolean_T retval = MHCAN_dequeue((MHCAN_queue *)
            &MHCAN_queue_Engine_Controller, 4, &queue_tail, &messageObj);
          BaseEngineController_A02_B.s9_ReadCANRaw_o1 = retval;
          if ((BaseEngineController_A02_B.s9_ReadCANRaw_o2 + 1) >
              BaseEngineController_A02_B.s9_ReadCANRaw_o2)
            BaseEngineController_A02_B.s9_ReadCANRaw_o2++;
          if (retval) {
            BaseEngineController_A02_B.s9_ReadCANRaw_o3 = ((messageObj.eFlags &
              CAN_MESSAGE_EXTENDED) != 0);
            BaseEngineController_A02_B.s9_ReadCANRaw_o4 = messageObj.u4MessageID;
            if (messageObj.u1Length > 8) {
              messageObj.u1Length = 8;
            }

            BaseEngineController_A02_B.s9_ReadCANRaw_o5 = messageObj.u1Length;
            for (i=0; i < messageObj.u1Length; i++) {
              BaseEngineController_A02_B.s9_ReadCANRaw_o6[i] =
                messageObj.u1DataArr[i];
            }

            BaseEngineController_A02_B.s9_ReadCANRaw_o2 = 0;
          }
        }

        /* <S9>/motohawk_sfun_ccp_protocol: CCP Protocol Engine_Controller */
        {
          extern S_CCPHandlerInstance mh_Engine_Controller_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_Engine_Controller_CCPHandlerConfig;

          /* Request */
          if (BaseEngineController_A02_B.s9_ReadCANRaw_o1) {
            if (BaseEngineController_A02_B.s10_motohawk_calibration3 !=
                mh_Engine_Controller_CCPHandlerInstance.StationID) {
              mh_Engine_Controller_CCPHandlerInstance.StationID =
                BaseEngineController_A02_B.s10_motohawk_calibration3;
              mh_InitCCP(&mh_Engine_Controller_CCPHandlerConfig,
                         &mh_Engine_Controller_CCPHandlerInstance);
            }

            mh_Engine_Controller_CCPHandlerInstance.id =
              BaseEngineController_A02_B.s10_motohawk_calibration;
            mh_Engine_Controller_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(BaseEngineController_A02_B.s9_ReadCANRaw_o5,
                          BaseEngineController_A02_B.s9_ReadCANRaw_o6,
                          &mh_Engine_Controller_CCPHandlerConfig,
                          &mh_Engine_Controller_CCPHandlerInstance);
          }
        }

        s9_iter++;
      } while (BaseEngineController_A02_B.s9_ReadCANRaw_o1 && (s9_iter <= 5));

      /* End of Outputs for SubSystem: '<S6>/While new CCP Command' */
    }
  }
}
