/*
 * Trigger_BGND_BASE_PERIODIC_8250p0001.c
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

void Trigger_BGND_BASE_PERIODIC_8250p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S3>/Main Power Relay' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Logic[2];
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator2_g;
      boolean_T rtb_LogicalOperator1_l;
      boolean_T rtb_Memory;
      boolean_T rtb_LogicalOperator5;
      boolean_T rtb_UnitDelay8;
      boolean_T rtb_UnitDelay6;
      boolean_T rtb_UnitDelay7;
      boolean_T rtb_LogicalOperator;
      real_T rtb_Switch;
      real_T rtb_Switch1;
      boolean_T rtb_LogicalOperator_c;
      boolean_T rtb_LogicalOperator2;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S861>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s861_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S845>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S845>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S845>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S845>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s845_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S861>/Switch' incorporates:
       *  Constant: '<S861>/Constant'
       *  Logic: '<S850>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S861>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S861>/motohawk_delta_time'
       *  Sum: '<S861>/Sum'
       */
      if (!BaseEngineController_A02_B.s845_RelationalOperator) {
        BaseEngineController_A02_B.s861_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_A02_B.s861_Switch = 0.0;
      }

      /* End of Switch: '<S861>/Switch' */
      /* Logic: '<S850>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S850>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S850>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_A02_B.s861_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S850>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S857>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S857>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(21);
          }
        }

        /* Outputs for Function Call SubSystem: '<S857>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S862>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S857>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S850>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S850>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s850_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S850>/Processor Reboot' incorporates:
       *  TriggerPort: '<S858>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s850_UnitDelay8_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S858>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S850>/Unit Delay8' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S850>/Processor Reboot' */

      /* UnitDelay: '<S850>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_A02_DWork.s850_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S850>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S859>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s850_UnitDelay6_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S859>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S863>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S859>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S850>/Unit Delay6' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S850>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S850>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_A02_DWork.s850_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S850>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S860>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s850_UnitDelay7_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S860>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S864>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S860>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S850>/Unit Delay7' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S850>/Shutdown power on ECU565//563' */

      /* Saturate: '<S861>/Saturation' */
      rtb_Saturation = BaseEngineController_A02_B.s861_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s861_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s861_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S861>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S846>/Logical Operator' incorporates:
       *  Logic: '<S846>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S846>/motohawk_calibration'
       *  UnitDelay: '<S846>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_A02_DWork.s846_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S845>/motohawk_data_read' */
      BaseEngineController_A02_B.s845_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S845>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_A02_DWork.s849_is_c8_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_PowerDown:
        /* During 'PowerDown': '<S849>:1' */
        if (BaseEngineController_A02_B.s845_RelationalOperator) {
          /* Transition: '<S849>:5' */
          BaseEngineController_A02_DWork.s849_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerUp;

          /* Entry 'PowerUp': '<S849>:2' */
          BaseEngineController_A02_B.s849_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_A02_IN_PowerUp:
        /* During 'PowerUp': '<S849>:2' */
        if ((!BaseEngineController_A02_B.s845_RelationalOperator) &&
            BaseEngineController_A02_B.s845_motohawk_data_read) {
          /* Transition: '<S849>:4' */
          BaseEngineController_A02_DWork.s849_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerDown;

          /* Entry 'PowerDown': '<S849>:1' */
          BaseEngineController_A02_B.s849_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S849>:3' */
        BaseEngineController_A02_DWork.s849_is_c8_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PowerDown;

        /* Entry 'PowerDown': '<S849>:1' */
        BaseEngineController_A02_B.s849_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S845>/ECUP Latch' */

      /* Switch: '<S851>/Switch' incorporates:
       *  Constant: '<S851>/Constant1'
       *  DataTypeConversion: '<S851>/Data Type Conversion'
       *  Sum: '<S851>/Sum'
       *  UnitDelay: '<S851>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s849_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_A02_B.s849_MPRDState +
          BaseEngineController_A02_DWork.s851_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S851>/Switch' */

      /* Logic: '<S851>/Logical Operator2' incorporates:
       *  Constant: '<S851>/Constant2'
       *  RelationalOperator: '<S851>/Relational Operator1'
       */
      rtb_LogicalOperator2_g = (BaseEngineController_A02_B.s849_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S851>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_A02_B.s849_MPRDState;

      /* Switch: '<S851>/Switch1' incorporates:
       *  Constant: '<S851>/Constant3'
       *  DataTypeConversion: '<S851>/Data Type Conversion1'
       *  Sum: '<S851>/Sum1'
       *  UnitDelay: '<S851>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_A02_DWork.s851_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S851>/Switch1' */

      /* Logic: '<S851>/Logical Operator1' incorporates:
       *  Constant: '<S851>/Constant4'
       *  RelationalOperator: '<S851>/Relational Operator2'
       */
      rtb_LogicalOperator1_l = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S865>/Memory' */
      rtb_Memory = BaseEngineController_A02_DWork.s865_Memory_PreviousInput;

      /* CombinatorialLogic: '<S865>/Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_g != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_l != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_Memory != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_Logic[0] = BaseEngineController_A02_ConstP.Logic_table[rowidx];
        rtb_Logic[1] = BaseEngineController_A02_ConstP.Logic_table[rowidx + 8];
      }

      /* Logic: '<S845>/Logical Operator' incorporates:
       *  Logic: '<S845>/Logical Operator1'
       */
      rtb_LogicalOperator_c = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S852>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s852_UnitDelay2_DSTATE;

      /* Logic: '<S852>/Logical Operator2' incorporates:
       *  UnitDelay: '<S852>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_c ||
        BaseEngineController_A02_DWork.s852_UnitDelay2_DSTATE);

      /* If: '<S870>/If' incorporates:
       *  Inport: '<S874>/In1'
       *  Inport: '<S875>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S870>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S870>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S870>/NewValue' incorporates:
         *  ActionPort: '<S874>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S870>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S870>/OldValue' incorporates:
         *  ActionPort: '<S875>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S870>/OldValue' */
      }

      /* End of If: '<S870>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S845>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S852>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S866>/Trigger'
       */
      if ((!rtb_LogicalOperator_c) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S866>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S871>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S866>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_c ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S852>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S852>/Processor Reboot' incorporates:
       *  EnablePort: '<S867>/Enable'
       *  TriggerPort: '<S867>/Trigger'
       */
      /* UnitDelay: '<S845>/Unit Delay5' */
      if (BaseEngineController_A02_DWork.s845_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S852>/Processor Reboot' incorporates:
         *  EnablePort: '<S867>/Enable'
         *  TriggerPort: '<S867>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S867>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S845>/Unit Delay5' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S852>/Processor Reboot' */

      /* UnitDelay: '<S852>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s852_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S852>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S868>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s852_UnitDelay_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S868>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S872>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S868>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S852>/Unit Delay' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S852>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S852>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_A02_DWork.s852_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S852>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S869>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s852_UnitDelay1_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S869>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S873>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S869>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S852>/Unit Delay1' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S852>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S845>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_A02_DWork.s845_UnitDelay3_DSTATE;

      /* UnitDelay: '<S845>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_A02_DWork.s845_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S847>/Clear' incorporates:
       *  TriggerPort: '<S855>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S845>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S853>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S845>/motohawk_restore_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S847>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S848>/Clear' incorporates:
       *  TriggerPort: '<S856>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S848>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S845>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S854>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S845>/motohawk_store_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S848>/motohawk_calibration' */

      /* Update for UnitDelay: '<S850>/Unit Delay8' */
      BaseEngineController_A02_DWork.s850_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S850>/Unit Delay6' */
      BaseEngineController_A02_DWork.s850_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S850>/Unit Delay7' */
      BaseEngineController_A02_DWork.s850_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S846>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S846>/motohawk_calibration'
       */
      BaseEngineController_A02_DWork.s846_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S851>/Unit Delay' */
      BaseEngineController_A02_DWork.s851_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S851>/Unit Delay1' */
      BaseEngineController_A02_DWork.s851_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S865>/Memory' */
      BaseEngineController_A02_DWork.s865_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S852>/Unit Delay2' */
      BaseEngineController_A02_DWork.s852_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S845>/motohawk_dout' */

      /* S-Function Block: DOut8218p0001 */
      {
        DOut8218p0001_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S845>/Unit Delay5' */
      BaseEngineController_A02_DWork.s845_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S852>/Unit Delay' */
      BaseEngineController_A02_DWork.s852_UnitDelay_DSTATE =
        rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S852>/Unit Delay1' */
      BaseEngineController_A02_DWork.s852_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S845>/Unit Delay3' */
      BaseEngineController_A02_DWork.s845_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S845>/Unit Delay4' */
      BaseEngineController_A02_DWork.s845_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
