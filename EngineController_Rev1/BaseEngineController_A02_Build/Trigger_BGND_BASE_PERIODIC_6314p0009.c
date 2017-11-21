/*
 * Trigger_BGND_BASE_PERIODIC_6314p0009.c
 *
 * Real-Time Workshop code generation for Simulink model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1510
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_BGND_BASE_PERIODIC_6314p0009(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
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
      boolean_T rtb_UnitDelay1_h;
      boolean_T rtb_UnitDelay3;
      boolean_T rtb_UnitDelay4;

      /* S-Function Block: <S856>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s856_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S840>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S840>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S840>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S840>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s840_RelationalOperator = (rtb_motohawk_ain5 >=
        ((uint16_T)(ECUP_Threshold_DataStore())));

      /* Switch: '<S856>/Switch' incorporates:
       *  Constant: '<S856>/Constant'
       *  Logic: '<S845>/Logical Operator1'
       *  S-Function (motohawk_sfun_data_read): '<S856>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S856>/motohawk_delta_time'
       *  Sum: '<S856>/Sum'
       */
      if (!BaseEngineController_A02_B.s840_RelationalOperator) {
        BaseEngineController_A02_B.s856_Switch = rtb_motohawk_delta_time +
          ForcedShutdown_DataStore();
      } else {
        BaseEngineController_A02_B.s856_Switch = 0.0;
      }

      /* Logic: '<S845>/Logical Operator5' incorporates:
       *  RelationalOperator: '<S845>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S845>/motohawk_calibration1'
       */
      rtb_LogicalOperator5 = !(BaseEngineController_A02_B.s856_Switch >=
        (ForcedShutDownTimerThresh_DataStore()));

      /* Outputs for trigger SubSystem: '<S845>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S852>/Trigger'
       */
      if ((!rtb_LogicalOperator5) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
           != ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_fault_clr): '<S852>/motohawk_single_fault_clear' */

        /* Set Fault Status: ETCSpringTest */
        {
          if (TRUE) {
            extern void ClearFault(uint32_T fault);
            ClearFault(14);
          }
        }

        /* S-Function (fcncallgen): '<S852>/Function-Call Generator' incorporates:
         *  SubSystem: '<S852>/Post Shutdown two ticks before MPRD off'
         */

        /* S-Function Block: <S857>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
        = (uint8_T)(rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S845>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S845>/Unit Delay8' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s845_UnitDelay8_DSTATE;

      /* Outputs for trigger SubSystem: '<S845>/Processor Reboot' incorporates:
       *  TriggerPort: '<S853>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s845_UnitDelay8_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j !=
           ZERO_ZCSIG)) {
        /* S-Function (motohawk_sfun_inline_code): '<S853>/Loop Forever Causing Watchdog Reset' */
        while (1) ;
      }

      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S845>/Processor Reboot' */

      /* UnitDelay: '<S845>/Unit Delay6' */
      rtb_UnitDelay6 = BaseEngineController_A02_DWork.s845_UnitDelay6_DSTATE;

      /* Outputs for trigger SubSystem: '<S845>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S854>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s845_UnitDelay6_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S854>/Function-Call Generator' incorporates:
         *  SubSystem: '<S854>/Save NV Vars one tick before MPRD off'
         */

        /* S-Function (motohawk_sfun_store_nvmem): '<S858>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }
      }

      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
        = (uint8_T)(rtb_UnitDelay6 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S845>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S845>/Unit Delay7' */
      rtb_UnitDelay7 = BaseEngineController_A02_DWork.s845_UnitDelay7_DSTATE;

      /* Outputs for trigger SubSystem: '<S845>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S855>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s845_UnitDelay7_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S855>/Function-Call Generator' incorporates:
         *  SubSystem: '<S855>/Shutdown power on ECU565-128'
         */

        /* S-Function Block: <S859>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }
      }

      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e
        = (uint8_T)(rtb_UnitDelay7 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S845>/Shutdown power on ECU565//563' */

      /* Saturate: '<S856>/Saturation' */
      rtb_Saturation = rt_SATURATE(BaseEngineController_A02_B.s856_Switch, 0.0,
        16000.0);

      /* S-Function (motohawk_sfun_data_write): '<S856>/motohawk_data_write' */
      /* Write to Data Storage as scalar: ForcedShutdown */
      {
        ForcedShutdown_DataStore() = rtb_Saturation;
      }

      /* Logic: '<S841>/Logical Operator' incorporates:
       *  Logic: '<S841>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration'
       *  UnitDelay: '<S841>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BaseEngineController_A02_DWork.s841_UnitDelay_DSTATE);

      /* S-Function (motohawk_sfun_data_read): '<S840>/motohawk_data_read' */
      BaseEngineController_A02_B.s840_motohawk_data_read =
        ShutDownTasksComplete_DataStore();

      /* Stateflow: '<S840>/ECUP Latch' */
      /* Gateway: Main Power Relay/Main Power Relay/ECUP Latch */
      /* During: Main Power Relay/Main Power Relay/ECUP Latch */
      switch (BaseEngineController_A02_DWork.s844_is_c8_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_PowerDown:
        /* During 'PowerDown': '<S844>:1' */
        if (BaseEngineController_A02_B.s840_RelationalOperator) {
          /* Transition: '<S844>:5' */
          /* Exit 'PowerDown': '<S844>:1' */
          /* Entry 'PowerUp': '<S844>:2' */
          BaseEngineController_A02_DWork.s844_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerUp;
          BaseEngineController_A02_B.s844_MPRDState = TRUE;
        }
        break;

       case BaseEngineController_A02_IN_PowerUp:
        /* During 'PowerUp': '<S844>:2' */
        if ((!BaseEngineController_A02_B.s840_RelationalOperator) &&
            BaseEngineController_A02_B.s840_motohawk_data_read) {
          /* Transition: '<S844>:4' */
          /* Exit 'PowerUp': '<S844>:2' */
          /* Entry 'PowerDown': '<S844>:1' */
          BaseEngineController_A02_DWork.s844_is_c8_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PowerDown;
          BaseEngineController_A02_B.s844_MPRDState = FALSE;
        }
        break;

       default:
        /* Transition: '<S844>:3' */
        /* Entry 'PowerDown': '<S844>:1' */
        BaseEngineController_A02_DWork.s844_is_c8_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PowerDown;
        BaseEngineController_A02_B.s844_MPRDState = FALSE;
        break;
      }

      /* Switch: '<S846>/Switch' incorporates:
       *  Constant: '<S846>/Constant1'
       *  DataTypeConversion: '<S846>/Data Type Conversion'
       *  Sum: '<S846>/Sum'
       *  UnitDelay: '<S846>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s844_MPRDState) {
        rtb_Switch = (real_T)BaseEngineController_A02_B.s844_MPRDState +
          BaseEngineController_A02_DWork.s846_UnitDelay_DSTATE;
      } else {
        rtb_Switch = 0.0;
      }

      /* Logic: '<S846>/Logical Operator2' incorporates:
       *  Constant: '<S846>/Constant2'
       *  RelationalOperator: '<S846>/Relational Operator1'
       */
      rtb_LogicalOperator2_g = (BaseEngineController_A02_B.s844_MPRDState &&
        (rtb_Switch >= 2.0));

      /* Logic: '<S846>/Logical Operator' */
      rtb_UnitDelay8 = !BaseEngineController_A02_B.s844_MPRDState;

      /* Switch: '<S846>/Switch1' incorporates:
       *  Constant: '<S846>/Constant3'
       *  DataTypeConversion: '<S846>/Data Type Conversion1'
       *  Sum: '<S846>/Sum1'
       *  UnitDelay: '<S846>/Unit Delay1'
       */
      if (rtb_UnitDelay8) {
        rtb_Switch1 = 1.0 +
          BaseEngineController_A02_DWork.s846_UnitDelay1_DSTATE;
      } else {
        rtb_Switch1 = 0.0;
      }

      /* Logic: '<S846>/Logical Operator1' incorporates:
       *  Constant: '<S846>/Constant4'
       *  RelationalOperator: '<S846>/Relational Operator2'
       */
      rtb_LogicalOperator1_l = (rtb_UnitDelay8 && (rtb_Switch1 >= 5.0));

      /* Memory: '<S860>/Memory' */
      rtb_Memory = BaseEngineController_A02_DWork.s860_Memory_PreviousInput;

      /* CombinatorialLogic: '<S860>/Logic' */
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

      /* Logic: '<S840>/Logical Operator' incorporates:
       *  Logic: '<S840>/Logical Operator1'
       */
      rtb_LogicalOperator_c = ((!rtb_LogicalOperator) && rtb_Logic[0]);

      /* UnitDelay: '<S847>/Unit Delay2' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s847_UnitDelay2_DSTATE;

      /* If: '<S865>/If' incorporates:
       *  ActionPort: '<S869>/Action Port'
       *  ActionPort: '<S870>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S865>/override_enable'
       *  SubSystem: '<S865>/NewValue'
       *  SubSystem: '<S865>/OldValue'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Inport: '<S869>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S865>/new_value'
         */
        rtb_Merge = (MPRD_new_DataStore());
      } else {
        /* Inport: '<S870>/In1' incorporates:
         *  Logic: '<S847>/Logical Operator2'
         */
        rtb_Merge = (rtb_LogicalOperator_c ||
                     BaseEngineController_A02_DWork.s847_UnitDelay2_DSTATE);
      }

      /* S-Function (motohawk_sfun_data_write): '<S840>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* S-Function (motohawk_sfun_dout): '<S840>/motohawk_dout' */
      /* S-Function Block: MPRD */
      {
      }

      /* Outputs for trigger SubSystem: '<S847>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S861>/Trigger'
       */
      if ((!rtb_LogicalOperator_c) &&
          (BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S861>/Function-Call Generator' incorporates:
         *  SubSystem: '<S861>/Post Shutdown two ticks before MPRD off'
         */

        /* S-Function Block: <S866>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }
      }

      BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_c ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S847>/Post Shutdown two ticks before MPRD off' */

      /* Outputs for enable and trigger SubSystem: '<S847>/Processor Reboot' incorporates:
       *  EnablePort: '<S862>/Enable'
       *  TriggerPort: '<S862>/Trigger'
       *  UnitDelay: '<S840>/Unit Delay5'
       */
      if (BaseEngineController_A02_DWork.s840_UnitDelay5_DSTATE) {
        if ((!rtb_UnitDelay8) &&
            (BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function (motohawk_sfun_inline_code): '<S862>/Loop Forever Causing Watchdog Reset' */
          while (1) ;
        }

        BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S847>/Processor Reboot' */

      /* UnitDelay: '<S847>/Unit Delay' */
      rtb_UnitDelay8 = BaseEngineController_A02_DWork.s847_UnitDelay_DSTATE;

      /* Outputs for trigger SubSystem: '<S847>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S863>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s847_UnitDelay_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S863>/Function-Call Generator1' incorporates:
         *  SubSystem: '<S863>/Save NV Vars one tick before MPRD off'
         */

        /* S-Function (motohawk_sfun_store_nvmem): '<S867>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }
      }

      BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay8 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S847>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S847>/Unit Delay1' */
      rtb_UnitDelay1_h = BaseEngineController_A02_DWork.s847_UnitDelay1_DSTATE;

      /* Outputs for trigger SubSystem: '<S847>/Shutdown power on ECU565//563' incorporates:
       *  TriggerPort: '<S864>/Trigger'
       */
      if ((!BaseEngineController_A02_DWork.s847_UnitDelay1_DSTATE) &&
          (BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S864>/Function-Call Generator2' incorporates:
         *  SubSystem: '<S864>/Shutdown power on ECU565-128'
         */

        /* S-Function Block: <S868>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }
      }

      BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1_h ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S847>/Shutdown power on ECU565//563' */

      /* UnitDelay: '<S840>/Unit Delay3' */
      rtb_UnitDelay3 = BaseEngineController_A02_DWork.s840_UnitDelay3_DSTATE;

      /* UnitDelay: '<S840>/Unit Delay4' */
      rtb_UnitDelay4 = BaseEngineController_A02_DWork.s840_UnitDelay4_DSTATE;

      /* Outputs for trigger SubSystem: '<S842>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S842>/motohawk_calibration'
       *  TriggerPort: '<S850>/Trigger'
       */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l !=
           ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S850>/Function-Call Generator' incorporates:
         *  SubSystem: '<S840>/motohawk_restore_nvmem'
         */

        /* S-Function (motohawk_sfun_restore_nvmem): '<S848>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S842>/Clear' */

      /* Outputs for trigger SubSystem: '<S843>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration'
       *  TriggerPort: '<S851>/Trigger'
       */
      if ((!(StoreNV_DataStore())) &&
          (BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* S-Function (fcncallgen): '<S851>/Function-Call Generator' incorporates:
         *  SubSystem: '<S840>/motohawk_store_nvmem'
         */

        /* S-Function (motohawk_sfun_store_nvmem): '<S849>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }
      }

      BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S843>/Clear' */

      /* Update for UnitDelay: '<S845>/Unit Delay8' */
      BaseEngineController_A02_DWork.s845_UnitDelay8_DSTATE = rtb_UnitDelay7;

      /* Update for UnitDelay: '<S845>/Unit Delay6' */
      BaseEngineController_A02_DWork.s845_UnitDelay6_DSTATE =
        rtb_LogicalOperator5;

      /* Update for UnitDelay: '<S845>/Unit Delay7' */
      BaseEngineController_A02_DWork.s845_UnitDelay7_DSTATE = rtb_UnitDelay6;

      /* Update for UnitDelay: '<S841>/Unit Delay' incorporates:
       *  Update for S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration'
       */
      BaseEngineController_A02_DWork.s841_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S846>/Unit Delay' */
      BaseEngineController_A02_DWork.s846_UnitDelay_DSTATE = rtb_Switch;

      /* Update for UnitDelay: '<S846>/Unit Delay1' */
      BaseEngineController_A02_DWork.s846_UnitDelay1_DSTATE = rtb_Switch1;

      /* Update for Memory: '<S860>/Memory' */
      BaseEngineController_A02_DWork.s860_Memory_PreviousInput = rtb_Logic[0];

      /* Update for UnitDelay: '<S847>/Unit Delay2' */
      BaseEngineController_A02_DWork.s847_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

      /* Update for S-Function (motohawk_sfun_dout): '<S840>/motohawk_dout' */

      /* S-Function Block: MPRD */
      {
        if (((init_resource_MPRD_DataStore()) < 0) && (((int16_T) RES_MPRD) >= 0))
        {
          S_DiscreteOutCreateAttributes CreateInfo;
          NativeError_S sErrorResult;
          CreateInfo.DynamicObj.eState = (rtb_Merge) ? RES_ON : RES_OFF;
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
                              (rtb_Merge) ? RES_ON : RES_OFF);
        }
      }

      /* Update for UnitDelay: '<S840>/Unit Delay5' */
      BaseEngineController_A02_DWork.s840_UnitDelay5_DSTATE = rtb_UnitDelay4;

      /* Update for UnitDelay: '<S847>/Unit Delay' */
      BaseEngineController_A02_DWork.s847_UnitDelay_DSTATE =
        rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S847>/Unit Delay1' */
      BaseEngineController_A02_DWork.s847_UnitDelay1_DSTATE = rtb_UnitDelay8;

      /* Update for UnitDelay: '<S840>/Unit Delay3' */
      BaseEngineController_A02_DWork.s840_UnitDelay3_DSTATE =
        rtb_LogicalOperator;

      /* Update for UnitDelay: '<S840>/Unit Delay4' */
      BaseEngineController_A02_DWork.s840_UnitDelay4_DSTATE = rtb_UnitDelay3;
    }
  }
}
