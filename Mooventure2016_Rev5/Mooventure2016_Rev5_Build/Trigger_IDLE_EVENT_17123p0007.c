/*
 * Trigger_IDLE_EVENT_17123p0007.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2141
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 21:19:10 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_IDLE_EVENT_17123p0007(void)
{
  if (Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1) {
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
          extern boolean_T CCP1_Receive(boolean_T *extended, uint32_T *id,
            uint8_T *length, uint8_T data[]);
          boolean_T msg_valid = CCP1_Receive
            (&Mooventure2016_Rev5_B.s9_ReadCANRaw_o3,
             &Mooventure2016_Rev5_B.s9_ReadCANRaw_o4,
             &Mooventure2016_Rev5_B.s9_ReadCANRaw_o5,
             Mooventure2016_Rev5_B.s9_ReadCANRaw_o6);
          Mooventure2016_Rev5_B.s9_ReadCANRaw_o1 = msg_valid;
          if (msg_valid) {
            Mooventure2016_Rev5_B.s9_ReadCANRaw_o2 = 0;
          } else {
            if ((Mooventure2016_Rev5_B.s9_ReadCANRaw_o2 + 1) >
                Mooventure2016_Rev5_B.s9_ReadCANRaw_o2)
              Mooventure2016_Rev5_B.s9_ReadCANRaw_o2++;
          }
        }

        /* <S9>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
        {
          extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

          /* Request */
          if (Mooventure2016_Rev5_B.s9_ReadCANRaw_o1) {
            if (Mooventure2016_Rev5_B.s10_motohawk_calibration3 !=
                mh_CCP1_CCPHandlerInstance.StationID) {
              mh_CCP1_CCPHandlerInstance.StationID =
                Mooventure2016_Rev5_B.s10_motohawk_calibration3;
              mh_InitCCP(&mh_CCP1_CCPHandlerConfig,
                         &mh_CCP1_CCPHandlerInstance);
            }

            mh_CCP1_CCPHandlerInstance.id =
              Mooventure2016_Rev5_B.s10_motohawk_calibration;
            mh_CCP1_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(Mooventure2016_Rev5_B.s9_ReadCANRaw_o5,
                          Mooventure2016_Rev5_B.s9_ReadCANRaw_o6,
                          &mh_CCP1_CCPHandlerConfig, &mh_CCP1_CCPHandlerInstance);
          }
        }

        /* S-Function (motohawk_sfun_code_cover): '<S9>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(1);
        }

        s9_iter++;
      } while (Mooventure2016_Rev5_B.s9_ReadCANRaw_o1 && (s9_iter <= 5));

      /* End of Outputs for SubSystem: '<S6>/While new CCP Command' */

      /* S-Function (motohawk_sfun_code_cover): '<S6>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(0);
      }
    }
  }
}
