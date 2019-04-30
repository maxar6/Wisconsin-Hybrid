/*
 * Trigger_IDLE_EVENT_15467p0004.c
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

void Trigger_IDLE_EVENT_15467p0004(void)
{
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S8>/CCP Command Driver' */
    {
      int32_T s13_iter;

      /* Outputs for Iterator SubSystem: '<S10>/While new CCP Command' incorporates:
       *  WhileIterator: '<S13>/While Iterator'
       */
      s13_iter = 1;
      do {
        /* S-Function (motohawk_sfun_read_can_raw): '<S13>/Read CAN Raw' */
        /* MotoHawk Read CAN Raw */
        {
          S_CANMessage messageObj;
          int i;
          static uint32_T queue_tail = 0;
          extern struct {
            uint32_T head;
            S_CANMessage messages[4];
          } MHCAN_queue_CCP1;

          extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
            uint32_T *tail, S_CANMessage *messageObj);
          boolean_T retval = MHCAN_dequeue((MHCAN_queue *) &MHCAN_queue_CCP1, 4,
            &queue_tail, &messageObj);
          BuckyWagon_01_B.s13_ReadCANRaw_o1 = retval;
          if ((BuckyWagon_01_B.s13_ReadCANRaw_o2 + 1) >
              BuckyWagon_01_B.s13_ReadCANRaw_o2)
            BuckyWagon_01_B.s13_ReadCANRaw_o2++;
          if (retval) {
            BuckyWagon_01_B.s13_ReadCANRaw_o3 = ((messageObj.eFlags &
              CAN_MESSAGE_EXTENDED) != 0);
            BuckyWagon_01_B.s13_ReadCANRaw_o4 = messageObj.u4MessageID;
            if (messageObj.u1Length > 8) {
              messageObj.u1Length = 8;
            }

            BuckyWagon_01_B.s13_ReadCANRaw_o5 = messageObj.u1Length;
            for (i=0; i < messageObj.u1Length; i++) {
              BuckyWagon_01_B.s13_ReadCANRaw_o6[i] = messageObj.u1DataArr[i];
            }

            BuckyWagon_01_B.s13_ReadCANRaw_o2 = 0;
          }
        }

        /* <S13>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
        {
          extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

          /* Request */
          if (BuckyWagon_01_B.s13_ReadCANRaw_o1) {
            if (BuckyWagon_01_B.s14_motohawk_calibration3 !=
                mh_CCP1_CCPHandlerInstance.StationID) {
              mh_CCP1_CCPHandlerInstance.StationID =
                BuckyWagon_01_B.s14_motohawk_calibration3;
              mh_InitCCP(&mh_CCP1_CCPHandlerConfig,
                         &mh_CCP1_CCPHandlerInstance);
            }

            mh_CCP1_CCPHandlerInstance.id =
              BuckyWagon_01_B.s14_motohawk_calibration;
            mh_CCP1_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(BuckyWagon_01_B.s13_ReadCANRaw_o5,
                          BuckyWagon_01_B.s13_ReadCANRaw_o6,
                          &mh_CCP1_CCPHandlerConfig, &mh_CCP1_CCPHandlerInstance);
          }
        }

        /* S-Function (motohawk_sfun_code_cover): '<S13>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(1);
        }

        s13_iter++;
      } while (BuckyWagon_01_B.s13_ReadCANRaw_o1 && (s13_iter <= 5));

      /* End of Outputs for SubSystem: '<S10>/While new CCP Command' */

      /* S-Function (motohawk_sfun_code_cover): '<S10>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(0);
      }
    }
  }
}
