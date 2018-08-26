/*
 * Trigger_STARTUP_EVENT_11381p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1639
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 19:54:14 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_STARTUP_EVENT_11381p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S9>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration3' */
    BaseEngineController_A02_B.s10_motohawk_calibration3 =
      (CCP1_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration' */
    BaseEngineController_A02_B.s10_motohawk_calibration = (CCP1TxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S10>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern uint32_T RxSlot_CCP1_ID;
      extern uint32_T RxSlot_CCP1_IDMask;
      RxSlot_CCP1_ID = (CCP1RxID_DataStore());
      RxSlot_CCP1_IDMask = (CCP1RxIDMask_DataStore());
    }
  }
}
