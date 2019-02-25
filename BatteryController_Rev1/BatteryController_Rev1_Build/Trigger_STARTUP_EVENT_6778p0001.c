/*
 * Trigger_STARTUP_EVENT_6778p0001.c
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

void Trigger_STARTUP_EVENT_6778p0001(void)
{
  {
    /* Output and update for function-call system: '<S9>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration3' */
    BatteryController_Rev1_B.s10_motohawk_calibration3 =
      (CCP_BAT_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration' */
    BatteryController_Rev1_B.s10_motohawk_calibration = (CCP_BATTxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S10>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern uint32_T RxSlot_CCP_BAT_ID;
      extern uint32_T RxSlot_CCP_BAT_IDMask;
      RxSlot_CCP_BAT_ID = (CCP_BATRxID_DataStore());
      RxSlot_CCP_BAT_IDMask = (CCP_BATRxIDMask_DataStore());
    }

    /* S-Function (motohawk_sfun_code_cover): '<S10>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }
  }
}
