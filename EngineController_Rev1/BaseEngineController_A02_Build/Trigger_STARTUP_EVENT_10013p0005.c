/*
 * Trigger_STARTUP_EVENT_10013p0005.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1640
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_STARTUP_EVENT_10013p0005(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S9>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration3' */
    BaseEngineController_A02_B.s10_motohawk_calibration3 =
      (Engine_Controller_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration' */
    BaseEngineController_A02_B.s10_motohawk_calibration =
      (Engine_ControllerTxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S10>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern uint32_T RxSlot_Engine_Controller_ID;
      extern uint32_T RxSlot_Engine_Controller_IDMask;
      RxSlot_Engine_Controller_ID = (Engine_ControllerRxID_DataStore());
      RxSlot_Engine_Controller_IDMask = (Engine_ControllerRxIDMask_DataStore());
    }
  }
}
