/*
 * Trigger_BGND_BASE_PERIODIC_8423p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1566
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 15 13:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_BGND_BASE_PERIODIC_8423p0004(void)
{
  /* Named constants for Stateflow: '<S778>/ECUP Latch' */
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

      /* S-Function Block: <S794>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s794_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S778>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S778>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S778>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s778_RelationalOperator = ((rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore()))));

      /* Switch: '<S794>/Switch' incorporates:
       *  Constant: '<S794>/Constant'
       *  Logic: '<S783>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S794>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S794>/motohawk_delta_time'
       *  Sum: '<S794>/Sum'
       */
      if (!BaseEngineController_A02_B.s778_RelationalOperator) {
        BaseEngineController_A02_B.s794_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_A02_B.s794_Switch = 0.0;
      }

      /* End of Switch: '<S794>/Switch' */
      /* Logic: '<S783>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S783>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_A02_B.s794_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for Triggered SubSystem: '<S783>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S790>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S790>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(14);
          }
        }

        /* Outputs for Function Call SubSystem: '<S790>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S795>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S790>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S783>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S783>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s783_UnitDelay8_DSTATE;

      /* Outputs for Triggered SubSystem: '<S783>/Processor Reboot' incorporates:
       *  TriggerPort: '<S791>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s783_UnitDelay8_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S791>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      /* End of UnitDelay: '<S783>/Unit Delay8' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S783>/Processor Reboot' */

      /* UnitDelay: '<S783>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_A02_DWork.s783_UnitDelay6_DSTATE;

      /* Outputs for Triggered SubSystem: '<S783>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S792>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s783_UnitDelay6_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S792>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S796>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S792>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S783>/Unit Delay6' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S783>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S783>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_A02_DWork.s783_UnitDelay7_DSTATE;

      /* Outputs for Triggered SubSystem: '<S783>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S793>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s783_UnitDelay7_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S793>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S797>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S793>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S783>/Unit Delay7' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S783>/Shutdown power on ECU565//563' */

      /* Saturate: '<S794>/Saturation' */
      rtb_Saturation = BaseEngineController_A02_B.s794_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s794_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s794_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S794>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S779>/Logical Operator' incorporates:
       *  Logic: '<S779>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S779>/motohawk_calibration'
       *  UnitDelay: '<S779>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_A02_DWork.s779_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read' */
      BaseEngineController_A02_B.s778_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S778>/ECUP Latch' */

      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_A02_DWork.s782_is_c8_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_PowerDown:
        /* During 'PowerDown': '<S782>:1' */
        if (BaseEngineController_A02_B.s778_RelationalOperator) {
          /* Transition: '<S782>:5' */
          BaseEngineController_A02_DWork.s782_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerUp;

          /* Entry 'PowerUp': '<S782>:2' */
          BaseEngineController_A02_B.s782_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_A02_IN_PowerUp:
        /* During 'PowerUp': '<S782>:2' */
        if ((!BaseEngineController_A02_B.s778_RelationalOperator) &&
            BaseEngineController_A02_B.s778_motohawk_data_read) {
          /* Transition: '<S782>:4' */
          BaseEngineController_A02_DWork.s782_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerDown;

          /* Entry 'PowerDown': '<S782>:1' */
          BaseEngineController_A02_B.s782_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S782>:3' */
        BaseEngineController_A02_DWork.s782_is_c8_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PowerDown;

        /* Entry 'PowerDown': '<S782>:1' */
        BaseEngineController_A02_B.s782_MPRDState = FALSE;
        break;
      }

      /* End of Stateflow: '<S778>/ECUP Latch' */

      /* Switch: '<S784>/Switch' incorporates:
       *  Constant: '<S784>/Constant1'
       *  DataTypeConversion: '<S784>/Data Type Conversion'
       *  Sum: '<S784>/Sum'
       *  UnitDelay: '<S784>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s782_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_A02_B.s782_MPRDState +
          BaseEngineController_A02_DWork.s784_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* End of Switch: '<S784>/Switch' */

      /* Logic: '<S784>/Logical Operator2' incorporates:
       *  Constant: '<S784>/Constant2'
       *  RelationalOperator: '<S784>/Relational Operator1'
       */
      rtb_LogicalOperator2_g = (BaseEngineController_A02_B.s782_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S784>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_A02_B.s782_MPRDState;

      /* Switch: '<S784>/Switch1' incorporates:
       *  Constant: '<S784>/Constant3'
       *  DataTypeConversion: '<S784>/Data Type Conversion1'
       *  Sum: '<S784>/Sum1'
       *  UnitDelay: '<S784>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_A02_DWork.s784_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* End of Switch: '<S784>/Switch1' */

      /* Logic: '<S784>/Logical Operator1' incorporates:
       *  Constant: '<S784>/Constant4'
       *  RelationalOperator: '<S784>/Relational Operator2'
       */
      rtb_LogicalOperator1_l = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S798>/Memory' */
      rtb_Memory = BaseEngineController_A02_DWork.s798_Memory_PreviousInput;

      /* CombinatorialLogic: '<S798>/Logic' */
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

      /* Logic: '<S778>/Logical Operator' incorporates:
       *  Logic: '<S778>/Logical Operator1'
       */
      rtb_LogicalOperator_c = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S785>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s785_UnitDelay2_DSTATE;

      /* Logic: '<S785>/Logical Operator2' incorporates:
       *  UnitDelay: '<S785>/Unit Delay2'
       */
      rtb_LogicalOperator2 = (rtb_LogicalOperator_c ||
        BaseEngineController_A02_DWork.s785_UnitDelay2_DSTATE);

      /* If: '<S803>/If' incorporates:
       *  Inport: '<S807>/In1'
       *  Inport: '<S808>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S803>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S803>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S803>/NewValue' incorporates:
         *  ActionPort: '<S807>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* End of Outputs for SubSystem: '<S803>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S803>/OldValue' incorporates:
         *  ActionPort: '<S808>/Action Port'
         */
        rtb_Merge = rtb_LogicalOperator2;

        /* End of Outputs for SubSystem: '<S803>/OldValue' */
      }

      /* End of If: '<S803>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S778>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Outputs for Triggered SubSystem: '<S785>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S799>/Trigger'
       */
      if ((!rtb_LogicalOperator_c) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S799>/Post Shutdown two ticks before MPRD off' */

        /* S-Function Block: <S804>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S799>/Post Shutdown two ticks before MPRD off' */
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_c ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S785>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for Enabled and Triggered SubSystem: '<S785>/Processor Reboot' incorporates:
       *  EnablePort: '<S800>/Enable'
       *  TriggerPort: '<S800>/Trigger'
       */
      /* UnitDelay: '<S778>/Unit Delay5' */
      if (BaseEngineController_A02_DWork.s778_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S785>/Processor Reboot' incorporates:
         *  EnablePort: '<S800>/Enable'
         *  TriggerPort: '<S800>/Trigger'
         */
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S800>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S778>/Unit Delay5' */
      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S785>/Processor Reboot' */

      /* UnitDelay: '<S785>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s785_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S785>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S801>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s785_UnitDelay_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S801>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S805>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S801>/Save NV Vars one tick before MPRD off' */
      }

      /* End of UnitDelay: '<S785>/Unit Delay' */
      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S785>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S785>/Unit Delay1' */
      rtb_LogicalOperator2 =
        BaseEngineController_A02_DWork.s785_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S785>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S802>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s785_UnitDelay1_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S802>/Shutdown power on ECU565-128' */

        /* S-Function Block: <S806>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S802>/Shutdown power on ECU565-128' */
      }

      /* End of UnitDelay: '<S785>/Unit Delay1' */
      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator2 ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S785>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S778>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_A02_DWork.s778_UnitDelay3_DSTATE;

      /* UnitDelay: '<S778>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_A02_DWork.s778_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S780>/Clear' incorporates:
       *  TriggerPort: '<S788>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S780>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S778>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S786>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S778>/motohawk_restore_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S780>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S781>/Clear' incorporates:
       *  TriggerPort: '<S789>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S778>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_store_nvmem): '<S787>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S778>/motohawk_store_nvmem' */
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration' */

      /* Update for UnitDelay: '<S783>/Unit Delay8' */
      BaseEngineController_A02_DWork.s783_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S783>/Unit Delay6' */
      BaseEngineController_A02_DWork.s783_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S783>/Unit Delay7' */
      BaseEngineController_A02_DWork.s783_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S779>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S779>/motohawk_calibration'
       */
      BaseEngineController_A02_DWork.s779_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S784>/Unit Delay' */
      BaseEngineController_A02_DWork.s784_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S784>/Unit Delay1' */
      BaseEngineController_A02_DWork.s784_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S798>/Memory' */
      BaseEngineController_A02_DWork.s798_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S785>/Unit Delay2' */
      BaseEngineController_A02_DWork.s785_UnitDelay2_DSTATE =
        rtb_LogicalOperator2;

      /* Update for S-Function (motohawk_sfun_dout): '<S778>/motohawk_dout' */

      /* S-Function Block: DOut8391p0004 */
      {
        DOut8391p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S778>/Unit Delay5' */
      BaseEngineController_A02_DWork.s778_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S785>/Unit Delay' */
      BaseEngineController_A02_DWork.s785_UnitDelay_DSTATE =
        rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S785>/Unit Delay1' */
      BaseEngineController_A02_DWork.s785_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S778>/Unit Delay3' */
      BaseEngineController_A02_DWork.s778_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S778>/Unit Delay4' */
      BaseEngineController_A02_DWork.s778_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
