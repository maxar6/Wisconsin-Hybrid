/*
 * File: cx06_MA_MainState.c
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA_MainState.h"

/* Include model header file for global data */
#include "cx06_MA.h"
#include "cx06_MA_private.h"

/* Named constants for Stateflow: '<S4>/Chart' */
#define cx06_MA_IN_Estop               (1U)
#define cx06_MA_IN_On_j                (2U)
#define cx06_MA_IN_PowerDown           (3U)
#define cx06_MA_IN_PowerUp             (4U)
#define cx06_MA_IN_ShutDown            (5U)

/* Initial conditions for function-call system: '<Root>/MainState' */
void cx06_MA_MainState_Init(void)
{
  /* InitializeConditions for Stateflow: '<S4>/Chart' */
  cx06_MA_DWork.s57_is_active_c2_cx06_MA = 0U;
  cx06_MA_DWork.s57_is_c2_cx06_MA = 0U;
  cx06_MA_B.s57_MS_State = 0U;
  cx06_MA_B.s57_MPRD = FALSE;
  cx06_MA_B.s57_Shutdown = TRUE;
  cx06_MA_DWork.s57_PowerUpEventCounter = 0U;
  cx06_MA_B.s57_PowerUp = FALSE;
  cx06_MA_DWork.s57_PowerDownEventCounter = 0U;
  cx06_MA_B.s57_PowerDown = FALSE;
}

/* Start for function-call system: '<Root>/MainState' */
void cx06_MA_MainState_Start(void)
{
  /* Start for trigger SubSystem: '<S4>/Call Startup Event' */

  /* Start for S-Function (fcncallgen): '<S56>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S56>/Post Shutdown two ticks before MPRD off'
   */

  /* end of Start for SubSystem: '<S4>/Call Startup Event' */

  /* Start for trigger SubSystem: '<S4>/Post Shutdown two ticks before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S60>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S60>/Post Shutdown two ticks before MPRD off'
   */

  /* end of Start for SubSystem: '<S4>/Post Shutdown two ticks before MPRD off' */

  /* Start for trigger SubSystem: '<S4>/Save NV Vars one tick before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S61>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S61>/Save NV Vars one tick before MPRD off'
   */

  /* end of Start for SubSystem: '<S4>/Save NV Vars one tick before MPRD off' */

  /* Start for trigger SubSystem: '<S4>/Shutdown power on ECU565-128' */

  /* Start for S-Function (fcncallgen): '<S62>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S62>/Shutdown power on ECU565-128'
   */

  /* end of Start for SubSystem: '<S4>/Shutdown power on ECU565-128' */

  /* Start for S-Function (motohawk_sfun_dout): '<S4>/motohawk_dout' */

  /* S-Function Block: MPRD */
  {
    (init_resource_MPRD_DataStore()) = -1;
  }

  /* Start for trigger SubSystem: '<S58>/Clear' */

  /* Start for S-Function (fcncallgen): '<S67>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S4>/motohawk_restore_nvmem'
   */

  /* end of Start for SubSystem: '<S58>/Clear' */

  /* Start for trigger SubSystem: '<S59>/Clear' */

  /* Start for S-Function (fcncallgen): '<S68>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S4>/motohawk_store_nvmem'
   */

  /* end of Start for SubSystem: '<S59>/Clear' */
}

/* Output and update for function-call system: '<Root>/MainState' */
void cx06_MA_MainState(void)
{
  /* local block i/o variables */
  uint16_T rtb_motohawk_ain1_o2;
  boolean_T rtb_motohawk_din;
  boolean_T rtb_Merge_gw;
  boolean_T rtb_RelationalOperator_g4;
  boolean_T rtb_LogicalOperator3_c;

  /* S-Function Block: <S4>/motohawk_din Resource: ESTOP */
  {
    extern NativeError_S ESTOP_DigitalInput_Get(boolean_T *out, uint16_T *status);
    ESTOP_DigitalInput_Get(&rtb_motohawk_din, NULL);
  }

  /* Logic: '<S4>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S4>/motohawk_calibration'
   *  S-Function (motohawk_sfun_din): '<S4>/motohawk_din'
   */
  cx06_MA_B.s4_LogicalOperator = (((uint8_T)(ESTOP_Invert_DataStore())) != 0) ^
    rtb_motohawk_din;

  /* S-Function Block: <S4>/motohawk_ain5 Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&cx06_MA_B.s4_motohawk_ain5_o1,
                         &cx06_MA_B.s4_motohawk_ain5_o2);
  }

  /* RelationalOperator: '<S4>/Relational Operator' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  rtb_RelationalOperator_g4 = (cx06_MA_B.s4_motohawk_ain5_o1 >= 100);

  /* Stateflow: '<S4>/Chart' incorporates:
   *  Constant: '<S4>/Constant'
   */
  /* Gateway: MainState/Chart */
  /* During: MainState/Chart */
  if (cx06_MA_DWork.s57_is_active_c2_cx06_MA == 0) {
    /* Entry: MainState/Chart */
    cx06_MA_DWork.s57_is_active_c2_cx06_MA = 1U;

    /* Transition: '<S57>:6' */
    /* Event: '<S57>:22' */
    cx06_MA_DWork.s57_PowerUpEventCounter =
      cx06_MA_DWork.s57_PowerUpEventCounter + 1U;

    /* Entry 'PowerUp': '<S57>:1' */
    cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_PowerUp;
  } else {
    switch (cx06_MA_DWork.s57_is_c2_cx06_MA) {
     case cx06_MA_IN_Estop:
      /* During 'Estop': '<S57>:3' */
      if ((int32_T)cx06_MA_B.s4_LogicalOperator == 0) {
        /* Transition: '<S57>:10' */
        /* Exit 'Estop': '<S57>:3' */
        /* Entry 'On': '<S57>:2' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_On_j;
      } else if ((int32_T)rtb_RelationalOperator_g4 == 0) {
        /* Transition: '<S57>:12' */
        /* Exit 'Estop': '<S57>:3' */
        /* Entry 'PowerDown': '<S57>:4' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_PowerDown;
      } else {
        cx06_MA_B.s57_MS_State = 2U;
        cx06_MA_B.s57_MPRD = FALSE;
      }
      break;

     case cx06_MA_IN_On_j:
      /* During 'On': '<S57>:2' */
      if ((int32_T)rtb_RelationalOperator_g4 == 0) {
        /* Transition: '<S57>:11' */
        /* Exit 'On': '<S57>:2' */
        /* Entry 'PowerDown': '<S57>:4' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_PowerDown;
      } else if ((int32_T)cx06_MA_B.s4_LogicalOperator == 1) {
        /* Transition: '<S57>:9' */
        /* Exit 'On': '<S57>:2' */
        /* Entry 'Estop': '<S57>:3' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_Estop;
      } else {
        cx06_MA_B.s57_MS_State = 1U;
        cx06_MA_B.s57_MPRD = TRUE;
      }
      break;

     case cx06_MA_IN_PowerDown:
      /* During 'PowerDown': '<S57>:4' */
      if (((int32_T)rtb_RelationalOperator_g4 == 1) && ((int32_T)
           cx06_MA_B.s4_LogicalOperator == 0)) {
        /* Transition: '<S57>:15' */
        /* Exit 'PowerDown': '<S57>:4' */
        /* Entry 'On': '<S57>:2' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_On_j;
      } else {
        /* Transition: '<S57>:13' */
        /* Exit 'PowerDown': '<S57>:4' */
        /* Entry 'ShutDown': '<S57>:5' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_ShutDown;
        cx06_MA_B.s57_Shutdown = FALSE;
      }
      break;

     case cx06_MA_IN_PowerUp:
      /* During 'PowerUp': '<S57>:1' */
      if ((int32_T)cx06_MA_B.s4_LogicalOperator == 0) {
        /* Transition: '<S57>:7' */
        /* Exit 'PowerUp': '<S57>:1' */
        /* Entry 'On': '<S57>:2' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_On_j;
      } else if ((int32_T)cx06_MA_B.s4_LogicalOperator == 1) {
        /* Transition: '<S57>:8' */
        /* Exit 'PowerUp': '<S57>:1' */
        /* Entry 'Estop': '<S57>:3' */
        cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_Estop;
      } else {
        cx06_MA_B.s57_MS_State = 0U;
        cx06_MA_B.s57_MPRD = FALSE;
      }
      break;

     case cx06_MA_IN_ShutDown:
      /* During 'ShutDown': '<S57>:5' */
      cx06_MA_B.s57_MPRD = FALSE;
      break;

     default:
      /* Transition: '<S57>:6' */
      /* Event: '<S57>:22' */
      cx06_MA_DWork.s57_PowerUpEventCounter =
        cx06_MA_DWork.s57_PowerUpEventCounter + 1U;

      /* Entry 'PowerUp': '<S57>:1' */
      cx06_MA_DWork.s57_is_c2_cx06_MA = cx06_MA_IN_PowerUp;
      break;
    }
  }

  if (cx06_MA_DWork.s57_PowerUpEventCounter > 0U) {
    cx06_MA_B.s57_PowerUp = !cx06_MA_B.s57_PowerUp;
    cx06_MA_DWork.s57_PowerUpEventCounter =
      cx06_MA_DWork.s57_PowerUpEventCounter - 1U;
  }

  if (cx06_MA_DWork.s57_PowerDownEventCounter > 0U) {
    cx06_MA_B.s57_PowerDown = !cx06_MA_B.s57_PowerDown;
    cx06_MA_DWork.s57_PowerDownEventCounter =
      cx06_MA_DWork.s57_PowerDownEventCounter - 1U;
  }

  /* Outputs for trigger SubSystem: '<S4>/Call Startup Event' incorporates:
   *  TriggerPort: '<S56>/Trigger'
   */
  if ((!cx06_MA_B.s57_PowerUp) &&
      (cx06_MA_PrevZCSigState.CallStartupEvent_Trig_ZCE != ZERO_ZCSIG)) {
    /* S-Function (fcncallgen): '<S56>/Function-Call Generator' incorporates:
     *  SubSystem: '<S56>/Post Shutdown two ticks before MPRD off'
     */

    /* S-Function Block: <S66>/motohawk_event_call */
    {
      /* post the event */
      PostEvent(STARTUP_EVENT);
    }
  }

  cx06_MA_PrevZCSigState.CallStartupEvent_Trig_ZCE = (uint8_T)
    (cx06_MA_B.s57_PowerUp ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S4>/Call Startup Event' */

  /* Outputs for trigger SubSystem: '<S4>/Post Shutdown two ticks before MPRD off' incorporates:
   *  TriggerPort: '<S60>/Trigger'
   */
  if ((!cx06_MA_B.s57_PowerDown) &&
      (cx06_MA_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (fcncallgen): '<S60>/Function-Call Generator' incorporates:
     *  SubSystem: '<S60>/Post Shutdown two ticks before MPRD off'
     */

    /* S-Function Block: <S69>/motohawk_event_call */
    {
      /* post the event */
      PostEvent(SHUTDOWN_EVENT);
    }
  }

  cx06_MA_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE = (uint8_T)
    (cx06_MA_B.s57_PowerDown ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S4>/Post Shutdown two ticks before MPRD off' */

  /* Outputs for trigger SubSystem: '<S4>/Save NV Vars one tick before MPRD off' incorporates:
   *  TriggerPort: '<S61>/Trigger'
   */
  if ((!cx06_MA_B.s57_Shutdown) &&
      (cx06_MA_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (fcncallgen): '<S61>/Function-Call Generator' incorporates:
     *  SubSystem: '<S61>/Save NV Vars one tick before MPRD off'
     */

    /* S-Function (motohawk_sfun_store_nvmem): '<S70>/motohawk_event_call' */
    {
      extern void NonVolatile_StoreNonVolatile(void);
      NonVolatile_StoreNonVolatile();
    }
  }

  cx06_MA_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE = (uint8_T)
    (cx06_MA_B.s57_Shutdown ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S4>/Save NV Vars one tick before MPRD off' */

  /* UnitDelay: '<S4>/Unit Delay1' */
  rtb_RelationalOperator_g4 = cx06_MA_DWork.s4_UnitDelay1_DSTATE;

  /* Outputs for trigger SubSystem: '<S4>/Shutdown power on ECU565-128' incorporates:
   *  TriggerPort: '<S62>/Trigger'
   */
  if ((!cx06_MA_DWork.s4_UnitDelay1_DSTATE) &&
      (cx06_MA_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE != ZERO_ZCSIG))
  {
    /* S-Function (fcncallgen): '<S62>/Function-Call Generator' incorporates:
     *  SubSystem: '<S62>/Shutdown power on ECU565-128'
     */

    /* S-Function Block: <S71>/motohawk_shutdown_power */
    {
      /* Shut off power on PCM-128.  Other modules will ignore this call */
      SendCloseOSMessage();
    }
  }

  cx06_MA_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = (uint8_T)
    (rtb_RelationalOperator_g4 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S4>/Shutdown power on ECU565-128' */

  /* S-Function (motohawk_sfun_data_write): '<S4>/motohawk_data_write' */
  /* Write to Data Storage as scalar: mainState */
  {
    mainState_DataStore() = cx06_MA_B.s57_MS_State;
  }

  /* S-Function (motohawk_sfun_dout): '<S4>/motohawk_dout' */
  /* S-Function Block: MPRD */
  {
  }

  /* Logic: '<S4>/Logical Operator3' incorporates:
   *  UnitDelay: '<S4>/Unit Delay2'
   */
  rtb_LogicalOperator3_c = (cx06_MA_B.s57_MPRD ||
    cx06_MA_DWork.s4_UnitDelay2_DSTATE);

  /* If: '<S63>/If' incorporates:
   *  ActionPort: '<S72>/Action Port'
   *  ActionPort: '<S73>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S63>/override_enable'
   *  SubSystem: '<S63>/NewValue'
   *  SubSystem: '<S63>/OldValue'
   */
  if ((MPRD_ovr_DataStore())) {
    /* Inport: '<S72>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S63>/new_value'
     */
    rtb_Merge_gw = (MPRD_new_DataStore());
  } else {
    /* Inport: '<S73>/In1' */
    rtb_Merge_gw = rtb_LogicalOperator3_c;
  }

  /* Outputs for trigger SubSystem: '<S58>/Clear' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration'
   *  TriggerPort: '<S67>/Trigger'
   */
  if ((!(RestoreNVFactoryDefaults_DataStore())) &&
      (cx06_MA_PrevZCSigState.Clear_Trig_ZCE_f != ZERO_ZCSIG)) {
    /* S-Function (fcncallgen): '<S67>/Function-Call Generator' incorporates:
     *  SubSystem: '<S4>/motohawk_restore_nvmem'
     */

    /* S-Function (motohawk_sfun_restore_nvmem): '<S64>/motohawk_event_call' */
    /* S-Function Restore Factory Defaults */
    {
      NonVolatile_RestoreDefaultNonVolatile();
      NonVolatile_NonVolatileStatus_Reset();
    }
  }

  cx06_MA_PrevZCSigState.Clear_Trig_ZCE_f = (uint8_T)
    ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
     ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S58>/Clear' */

  /* Outputs for trigger SubSystem: '<S59>/Clear' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   *  TriggerPort: '<S68>/Trigger'
   */
  if ((!(StoreNV_DataStore())) && (cx06_MA_PrevZCSigState.Clear_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (fcncallgen): '<S68>/Function-Call Generator' incorporates:
     *  SubSystem: '<S4>/motohawk_store_nvmem'
     */

    /* S-Function (motohawk_sfun_store_nvmem): '<S65>/motohawk_event_call' */
    {
      extern void NonVolatile_StoreNonVolatile(void);
      NonVolatile_StoreNonVolatile();
    }
  }

  cx06_MA_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)((StoreNV_DataStore()) ?
    (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* end of Outputs for SubSystem: '<S59>/Clear' */
  /* S-Function Block: <S4>/motohawk_ain1 Resource: DRVP */
  {
    extern NativeError_S DRVP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    DRVP_AnalogInput_Get(&cx06_MA_B.s4_motohawk_ain1_o1, &rtb_motohawk_ain1_o2);
  }

  /* Gain: '<S4>/Gain' */
  cx06_MA_B.s4_Gain = 2.700328827E-002F * (real32_T)
    cx06_MA_B.s4_motohawk_ain1_o1;

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  cx06_MA_DWork.s4_UnitDelay1_DSTATE = cx06_MA_B.s57_Shutdown;

  /* Update for S-Function (motohawk_sfun_dout): '<S4>/motohawk_dout' */

  /* S-Function Block: MPRD */
  {
    if (((init_resource_MPRD_DataStore()) < 0) && (((int16_T) RES_MPRD) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_gw) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_MPRD)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_MPRD_DataStore()) = ((int16_T) RES_MPRD);
      } else {
        (init_resource_MPRD_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_MPRD;
        if (SUCCESS(sErrorResult))
          dout_create_MPRD = 0;
        else
          dout_create_MPRD = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_MPRD_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_MPRD_DataStore())),
                          (rtb_Merge_gw) ? RES_ON : RES_OFF);
    }
  }

  /* Update for UnitDelay: '<S4>/Unit Delay2' */
  cx06_MA_DWork.s4_UnitDelay2_DSTATE = rtb_RelationalOperator_g4;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
