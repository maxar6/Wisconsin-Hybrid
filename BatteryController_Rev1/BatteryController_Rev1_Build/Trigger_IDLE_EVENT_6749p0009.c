/*
 * Trigger_IDLE_EVENT_6749p0009.c
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

void Trigger_IDLE_EVENT_6749p0009(void)
{
  if (BatteryController_Rev1_DWork.s1_motohawk_trigger1_DWORK1) {
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
          } MHCAN_queue_CCP_BAT;

          extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
            uint32_T *tail, S_CANMessage *messageObj);
          boolean_T retval = MHCAN_dequeue((MHCAN_queue *) &MHCAN_queue_CCP_BAT,
            4, &queue_tail, &messageObj);
          BatteryController_Rev1_B.s9_ReadCANRaw_o1 = retval;
          if ((BatteryController_Rev1_B.s9_ReadCANRaw_o2 + 1) >
              BatteryController_Rev1_B.s9_ReadCANRaw_o2)
            BatteryController_Rev1_B.s9_ReadCANRaw_o2++;
          if (retval) {
            BatteryController_Rev1_B.s9_ReadCANRaw_o3 = ((messageObj.eFlags &
              CAN_MESSAGE_EXTENDED) != 0);
            BatteryController_Rev1_B.s9_ReadCANRaw_o4 = messageObj.u4MessageID;
            if (messageObj.u1Length > 8) {
              messageObj.u1Length = 8;
            }

            BatteryController_Rev1_B.s9_ReadCANRaw_o5 = messageObj.u1Length;
            for (i=0; i < messageObj.u1Length; i++) {
              BatteryController_Rev1_B.s9_ReadCANRaw_o6[i] =
                messageObj.u1DataArr[i];
            }

            BatteryController_Rev1_B.s9_ReadCANRaw_o2 = 0;
          }
        }

        /* <S9>/motohawk_sfun_ccp_protocol: CCP Protocol CCP_BAT */
        {
          extern S_CCPHandlerInstance mh_CCP_BAT_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_CCP_BAT_CCPHandlerConfig;

          /* Request */
          if (BatteryController_Rev1_B.s9_ReadCANRaw_o1) {
            if (BatteryController_Rev1_B.s10_motohawk_calibration3 !=
                mh_CCP_BAT_CCPHandlerInstance.StationID) {
              mh_CCP_BAT_CCPHandlerInstance.StationID =
                BatteryController_Rev1_B.s10_motohawk_calibration3;
              mh_InitCCP(&mh_CCP_BAT_CCPHandlerConfig,
                         &mh_CCP_BAT_CCPHandlerInstance);
            }

            mh_CCP_BAT_CCPHandlerInstance.id =
              BatteryController_Rev1_B.s10_motohawk_calibration;
            mh_CCP_BAT_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(BatteryController_Rev1_B.s9_ReadCANRaw_o5,
                          BatteryController_Rev1_B.s9_ReadCANRaw_o6,
                          &mh_CCP_BAT_CCPHandlerConfig,
                          &mh_CCP_BAT_CCPHandlerInstance);
          }
        }

        /* S-Function (motohawk_sfun_code_cover): '<S9>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(1);
        }

        s9_iter++;
      } while (BatteryController_Rev1_B.s9_ReadCANRaw_o1 && (s9_iter <= 5));

      /* End of Outputs for SubSystem: '<S6>/While new CCP Command' */

      /* S-Function (motohawk_sfun_code_cover): '<S6>/motohawk_code_coverage' */
      /* Code Coverage Test: BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(0);
      }
    }
  }
}
