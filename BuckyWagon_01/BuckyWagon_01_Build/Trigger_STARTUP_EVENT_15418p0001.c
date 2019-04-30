/*
 * Trigger_STARTUP_EVENT_15418p0001.c
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

void Trigger_STARTUP_EVENT_15418p0001(void)
{
  {
    /* Output and update for function-call system: '<S13>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration3' */
    BuckyWagon_01_B.s14_motohawk_calibration3 = (CCP1_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration' */
    BuckyWagon_01_B.s14_motohawk_calibration = (CCP1TxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S14>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern uint32_T RxSlot_CCP1_ID;
      extern uint32_T RxSlot_CCP1_IDMask;
      RxSlot_CCP1_ID = (CCP1RxID_DataStore());
      RxSlot_CCP1_IDMask = (CCP1RxIDMask_DataStore());
    }

    /* S-Function (motohawk_sfun_code_cover): '<S14>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }
  }
}
