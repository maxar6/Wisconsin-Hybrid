/*
 * Trigger_CAN_Slot_miniview_button_down_2150p0001.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1520
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 23 14:25:32 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_CAN_Slot_miniview_button_down_2150p0001(void)
{
  /* Output and update for function-call system: '<S202>/Subsystem' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_miniview_button_down;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_miniview_button_down,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      BuckyWagon_01_B.s223_downasserted = (boolean_T) tmp0;
      BuckyWagon_01_B.s223_downcount = (uint8_T) tmp1;
    }
  }
}