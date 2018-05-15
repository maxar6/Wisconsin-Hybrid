/*
 * Trigger_BGND_BASE_PERIODIC_8052p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1626
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Apr 22 15:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_BGND_BASE_PERIODIC_8052p0004(void)
{
  /* Named constants for Stateflow: '<S808>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S2>/Main Power Relay' */
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

      /* S-Function Block: <S824>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s824_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S808>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S808>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S808>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S808>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s808_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S824>/Switch' incorporates:
       *  Constant: '<S824>/Constant'
       *  Logic: '<S813>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S824>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S824>/motohawk_delta_time'
       *  Sum: '<S824>/Sum'
       */
      if (!BaseEngineController_A02_B.s808_RelationalOperator) {
        BaseEngineController_A02_B.s824_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_A02_B.s824_Switch = 0.0;
      }

      /* End of Switch: '<S824>/Switch' */
      /* Logic: '<S813>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S813>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S813>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_A02_B.s824_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S813>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S820>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S820>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(14);
          }
        }

        /* Outputs for Function Call SubSystem: '<S820>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S825>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S820>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S813>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S813>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s813_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S813>/Processor Reboot' incorporates:
       *  TriggerPort: '<S821>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s813_UnitDelay8_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S821>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S813>/Unit Delay8' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S813>/Processor Reboot' */

      /* UnitDelay: '<S813>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_A02_DWork.s813_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S813>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S822>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s813_UnitDelay6_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S822>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S826>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S822>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S813>/Unit Delay6' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S813>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S813>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_A02_DWork.s813_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S813>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S823>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s813_UnitDelay7_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S823>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S827>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S823>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S813>/Unit Delay7' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S813>/Shutdown power on ECU565//563' */

      /* Saturate: '<S824>/Saturation' */
      rtb_Saturation = BaseEngineController_A02_B.s824_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s824_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s824_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S824>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S809>/Logical Operator' incorporates:
       *  Logic: '<S809>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration'
       *  UnitDelay: '<S809>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_A02_DWork.s809_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S808>/motohawk_data_read' */
      BaseEngineController_A02_B.s808_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S808>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_A02_DWork.s812_is_c8_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_PowerDown:
        /* During 'PowerDown': '<S812>:1' */
        if (BaseEngineController_A02_B.s808_RelationalOperator) {
          /* Transition: '<S812>:5' */
          BaseEngineController_A02_DWork.s812_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerUp;

          /* Entry 'PowerUp': '<S812>:2' */
          BaseEngineController_A02_B.s812_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_A02_IN_PowerUp:
        /* During 'PowerUp': '<S812>:2' */
        if ((!BaseEngineController_A02_B.s808_RelationalOperator) &&
            BaseEngineController_A02_B.s808_motohawk_data_read) {
          /* Transition: '<S812>:4' */
          BaseEngineController_A02_DWork.s812_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerDown;

          /* Entry 'PowerDown': '<S812>:1' */
          BaseEngineController_A02_B.s812_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S812>:3' */
        BaseEngineController_A02_DWork.s812_is_c8_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PowerDown;

        /* Entry 'PowerDown': '<S812>:1' */
        BaseEngineController_A02_B.s812_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S808>/ECUP Latch' */

      /* Switch: '<S814>/Switch' incorporates:
       *  Constant: '<S814>/Constant1'
       *  DataTypeConversion: '<S814>/Data Type Conversion'
       *  Sum: '<S814>/Sum'
       *  UnitDelay: '<S814>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s812_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_A02_B.s812_MPRDState +
          BaseEngineController_A02_DWork.s814_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S814>/Switch' */

      /* Logic: '<S814>/Logical Operator2' incorporates:
       *  Constant: '<S814>/Constant2'
       *  RelationalOperator: '<S814>/Relational Operator1'
       */
      rtb_LogicalOperator2_g = (BaseEngineController_A02_B.s812_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S814>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_A02_B.s812_MPRDState;

      /* Switch: '<S814>/Switch1' incorporates:
       *  Constant: '<S814>/Constant3'
       *  DataTypeConversion: '<S814>/Data Type Conversion1'
       *  Sum: '<S814>/Sum1'
       *  UnitDelay: '<S814>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_A02_DWork.s814_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S814>/Switch1' */

      /* Logic: '<S814>/Logical Operator1' incorporates:
       *  Constant: '<S814>/Constant4'
       *  RelationalOperator: '<S814>/Relational Operator2'
       */
      rtb_LogicalOperator1_l = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S828>/Memory' */
      rtb_Memory = BaseEngineController_A02_DWork.s828_Memory_PreviousInput;

      /* CombinatorialLogic: '<S828>/Logic' */
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

      /* Logic: '<S808>/Logical Operator' incorporates:
       *  Logic: '<S808>/Logical Operator1'
       */
      rtb_LogicalOperator_c = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S815>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s815_UnitDelay2_DSTATE;

      /* Logic: '<S815>/Logical Operator2' incorporates:
       *  UnitDelay: '<S815>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_c ||
        BaseEngineController_A02_DWork.s815_UnitDelay2_DSTATE);

      /* If: '<S833>/If' incorporates:
       *  Inport: '<S837>/In1'
       *  Inport: '<S838>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S833>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S833>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S833>/NewValue' incorporates:
         *  ActionPort: '<S837>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S833>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S833>/OldValue' incorporates:
         *  ActionPort: '<S838>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S833>/OldValue' */
      }

      /* End of If: '<S833>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S808>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S815>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S829>/Trigger'
       */
      if ((!rtb_LogicalOperator_c) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S829>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S834>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S829>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_c ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S815>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S815>/Processor Reboot' incorporates:
       *  EnablePort: '<S830>/Enable'
       *  TriggerPort: '<S830>/Trigger'
       */
      /* UnitDelay: '<S808>/Unit Delay5' */
      if (BaseEngineController_A02_DWork.s808_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S815>/Processor Reboot' incorporates:
         *  EnablePort: '<S830>/Enable'
         *  TriggerPort: '<S830>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S830>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S808>/Unit Delay5' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S815>/Processor Reboot' */

      /* UnitDelay: '<S815>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s815_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S815>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S831>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s815_UnitDelay_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S831>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S835>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S831>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S815>/Unit Delay' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S815>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S815>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_A02_DWork.s815_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S815>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S832>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s815_UnitDelay1_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S832>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S836>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S832>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S815>/Unit Delay1' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S815>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S808>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_A02_DWork.s808_UnitDelay3_DSTATE;

      /* UnitDelay: '<S808>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_A02_DWork.s808_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S810>/Clear' incorporates:
       *  TriggerPort: '<S818>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S810>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S808>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S816>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S808>/motohawk_restore_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S810>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S811>/Clear' incorporates:
       *  TriggerPort: '<S819>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S808>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S817>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S808>/motohawk_store_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration' */

      /* Update for UnitDelay: '<S813>/Unit Delay8' */
      BaseEngineController_A02_DWork.s813_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S813>/Unit Delay6' */
      BaseEngineController_A02_DWork.s813_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S813>/Unit Delay7' */
      BaseEngineController_A02_DWork.s813_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S809>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration'
       */
      BaseEngineController_A02_DWork.s809_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S814>/Unit Delay' */
      BaseEngineController_A02_DWork.s814_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S814>/Unit Delay1' */
      BaseEngineController_A02_DWork.s814_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S828>/Memory' */
      BaseEngineController_A02_DWork.s828_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S815>/Unit Delay2' */
      BaseEngineController_A02_DWork.s815_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S808>/motohawk_dout' */

      /* S-Function Block: DOut8020p0004 */
      {
        DOut8020p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S808>/Unit Delay5' */
      BaseEngineController_A02_DWork.s808_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S815>/Unit Delay' */
      BaseEngineController_A02_DWork.s815_UnitDelay_DSTATE =
        rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S815>/Unit Delay1' */
      BaseEngineController_A02_DWork.s815_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S808>/Unit Delay3' */
      BaseEngineController_A02_DWork.s808_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S808>/Unit Delay4' */
      BaseEngineController_A02_DWork.s808_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
