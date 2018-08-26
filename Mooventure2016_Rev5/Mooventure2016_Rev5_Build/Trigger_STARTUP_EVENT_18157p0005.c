/*
 * Trigger_STARTUP_EVENT_18157p0005.c
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

void Trigger_STARTUP_EVENT_18157p0005(void)
{
  {
    /* Output and update for function-call system: '<S9>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration3' */
    Mooventure2016_Rev5_B.s10_motohawk_calibration3 =
      (CCP1_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration' */
    Mooventure2016_Rev5_B.s10_motohawk_calibration = (CCP1TxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S10>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern void CCP1_SetIDFilter(uint32_T id, uint32_T id_mask);
      CCP1_SetIDFilter((CCP1RxID_DataStore()), (CCP1RxIDMask_DataStore()));
    }

    /* S-Function (motohawk_sfun_code_cover): '<S10>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }
  }
}
