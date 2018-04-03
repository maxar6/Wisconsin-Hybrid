/*
 * Trigger_CAN_Slot_miniview_button_down_2043p0004.c
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

void Trigger_CAN_Slot_miniview_button_down_2043p0004(void)
{
  /* Output and update for function-call system: '<S199>/Subsystem' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S220>/Read CAN Message' */
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
      BuckyWagon_01_B.s220_downasserted = (boolean_T) tmp0;
      BuckyWagon_01_B.s220_downcount = (uint8_T) tmp1;
    }
  }
}
