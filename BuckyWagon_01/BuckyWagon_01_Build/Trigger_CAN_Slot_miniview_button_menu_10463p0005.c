/*
 * Trigger_CAN_Slot_miniview_button_menu_10463p0005.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1575
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Apr 18 08:31:45 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_CAN_Slot_miniview_button_menu_10463p0005(void)
{
  /* Output and update for function-call system: '<S181>/Subsystem' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S196>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_miniview_button_menu;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_miniview_button_menu,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      BuckyWagon_01_B.s196_menuasserted = (boolean_T) tmp0;
      BuckyWagon_01_B.s196_menucount = (uint8_T) tmp1;
    }
  }
}
