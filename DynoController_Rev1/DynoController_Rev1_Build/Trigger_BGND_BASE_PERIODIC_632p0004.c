/*
 * Trigger_BGND_BASE_PERIODIC_632p0004.c
 *
 * Real-Time Workshop code generation for Simulink model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.279
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 19:40:14 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_BGND_BASE_PERIODIC_632p0004(void)
{
  {
    /* Output and update for function-call system: '<S2>/Background' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator;
      boolean_T rtb_UnitDelay_e;
      boolean_T rtb_RelationalOperator;
      uint16_T rtb_to65535_f;
      boolean_T rtb_LogicalOperator_c;
      uint16_T rtb_to65535_b;
      boolean_T rtb_LogicalOperator2_h;
      boolean_T rtb_LogicalOperator_g;
      boolean_T rtb_UnitDelay_h;
      boolean_T rtb_UnitDelay1;
      uint32_T tmp;

      /* Logic: '<S132>/Logical Operator' incorporates:
       *  Logic: '<S132>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration'
       *  UnitDelay: '<S132>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        DynoController_Rev1_DWork.s132_UnitDelay_DSTATE);

      /* UnitDelay: '<S142>/Unit Delay' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s142_UnitDelay_DSTATE;

      /* S-Function Block: <S130>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S130>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S130>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S131>/Switch' incorporates:
       *  Constant: '<S131>/Constant1'
       *  DataTypeConversion: '<S131>/Data Type Conversion'
       *  Sum: '<S131>/Sum'
       *  UnitDelay: '<S131>/Unit Delay'
       */
      if (rtb_RelationalOperator) {
        tmp = (uint32_T)(DynoController_Rev1_DWork.s131_UnitDelay_DSTATE + 1);
        if (tmp > 65535U) {
          rtb_to65535_f = MAX_uint16_T;
        } else {
          rtb_to65535_f = (uint16_T)tmp;
        }
      } else {
        rtb_to65535_f = 0U;
      }

      /* Logic: '<S131>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S131>/Switch1' incorporates:
       *  Constant: '<S131>/Constant3'
       *  DataTypeConversion: '<S131>/Data Type Conversion1'
       *  Sum: '<S131>/Sum1'
       *  UnitDelay: '<S131>/Unit Delay1'
       */
      if (rtb_LogicalOperator_c) {
        tmp = (uint32_T)(DynoController_Rev1_DWork.s131_UnitDelay1_DSTATE + 1);
        if (tmp > 65535U) {
          rtb_to65535_b = MAX_uint16_T;
        } else {
          rtb_to65535_b = (uint16_T)tmp;
        }
      } else {
        rtb_to65535_b = 0U;
      }

      /* Logic: '<S142>/Logical Operator2' incorporates:
       *  Constant: '<S131>/Constant2'
       *  Constant: '<S131>/Constant4'
       *  Logic: '<S131>/Logical Operator1'
       *  Logic: '<S131>/Logical Operator2'
       *  Logic: '<S142>/Logical Operator'
       *  Logic: '<S142>/Logical Operator1'
       *  RelationalOperator: '<S131>/Relational Operator1'
       *  RelationalOperator: '<S131>/Relational Operator2'
       */
      rtb_LogicalOperator2_h = ((rtb_UnitDelay_e || (rtb_RelationalOperator &&
        (rtb_to65535_f >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_b >=
        5))));

      /* Logic: '<S130>/Logical Operator' incorporates:
       *  Logic: '<S130>/Logical Operator1'
       *  Logic: '<S130>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S130>/motohawk_data_read'
       */
      rtb_LogicalOperator_g = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_h
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for trigger SubSystem: '<S130>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S135>/Trigger'
       */
      if ((!rtb_LogicalOperator_g) &&
          (DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S135>/Function-Call Generator' incorporates:
         *  SubSystem: '<S135>/Post Shutdown two ticks before MPRD off'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S145>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(77);
        }

        /* S-Function Block: <S145>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* S-Function (motohawk_sfun_code_cover): '<S135>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(76);
        }
      }

      DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_g ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S130>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S130>/Unit Delay2' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s130_UnitDelay2_DSTATE;

      /* Outputs for enable and trigger SubSystem: '<S130>/Processor Reboot' incorporates:
       *  EnablePort: '<S136>/Enable'
       *  TriggerPort: '<S136>/Trigger'
       *  UnitDelay: '<S130>/Unit Delay5'
       */
      if (DynoController_Rev1_DWork.s130_UnitDelay5_DSTATE) {
        if ((!DynoController_Rev1_DWork.s130_UnitDelay2_DSTATE) &&
            (DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S136>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S136>/motohawk_code_coverage' */
          /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(78);
          }
        }

        DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S130>/Processor Reboot' */

      /* UnitDelay: '<S130>/Unit Delay' */
      rtb_UnitDelay_h = DynoController_Rev1_DWork.s130_UnitDelay_DSTATE;

      /* Outputs for trigger SubSystem: '<S130>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S137>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s130_UnitDelay_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S137>/Function-Call Generator' incorporates:
         *  SubSystem: '<S137>/Save NV Vars one tick before MPRD off'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S146>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(80);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S146>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(79);
        }
      }

      DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_h ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S130>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S130>/Unit Delay1' */
      rtb_UnitDelay1 = DynoController_Rev1_DWork.s130_UnitDelay1_DSTATE;

      /* Outputs for trigger SubSystem: '<S130>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S138>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s130_UnitDelay1_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S138>/Function-Call Generator' incorporates:
         *  SubSystem: '<S138>/Shutdown power on ECU565-128'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S147>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(82);
        }

        /* S-Function Block: <S147>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(81);
        }
      }

      DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S130>/Shutdown power on ECU565-128' */

      /* If: '<S139>/If' incorporates:
       *  ActionPort: '<S148>/Action Port'
       *  ActionPort: '<S149>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S139>/override_enable'
       *  SubSystem: '<S139>/NewValue'
       *  SubSystem: '<S139>/OldValue'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Inport: '<S148>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S139>/new_value'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S148>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(83);
        }
      } else {
        /* Inport: '<S149>/In1' incorporates:
         *  Logic: '<S130>/Logical Operator3'
         */
        rtb_Merge = (rtb_LogicalOperator_g || rtb_UnitDelay_e);

        /* S-Function (motohawk_sfun_code_cover): '<S149>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(84);
        }
      }

      /* S-Function (motohawk_sfun_data_write): '<S130>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S130>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S130>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* S-Function (motohawk_sfun_dout): '<S130>/motohawk_dout' */
      /* S-Function Block: MPRD */
      {
      }

      /* UnitDelay: '<S130>/Unit Delay3' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s130_UnitDelay3_DSTATE;

      /* UnitDelay: '<S130>/Unit Delay4' */
      rtb_LogicalOperator_c = DynoController_Rev1_DWork.s130_UnitDelay4_DSTATE;

      /* Outputs for trigger SubSystem: '<S133>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration'
       *  TriggerPort: '<S143>/Trigger'
       */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S143>/Function-Call Generator' incorporates:
         *  SubSystem: '<S130>/motohawk_restore_nvmem'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S140>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(85);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S140>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S143>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(74);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S133>/Clear' */

      /* Outputs for trigger SubSystem: '<S134>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration'
       *  TriggerPort: '<S144>/Trigger'
       */
      if ((!(StoreNV_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S144>/Function-Call Generator' incorporates:
         *  SubSystem: '<S130>/motohawk_store_nvmem'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S141>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(86);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S141>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(75);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S134>/Clear' */

      /* S-Function (motohawk_sfun_code_cover): '<S130>/motohawk_code_coverage' */
      /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(73);
      }

      /* Update for UnitDelay: '<S132>/Unit Delay' incorporates:
       *  Update for S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration'
       */
      DynoController_Rev1_DWork.s132_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S142>/Unit Delay' */
      DynoController_Rev1_DWork.s142_UnitDelay_DSTATE = rtb_LogicalOperator2_h;

      /* Update for UnitDelay: '<S131>/Unit Delay' */
      DynoController_Rev1_DWork.s131_UnitDelay_DSTATE = rtb_to65535_f;

      /* Update for UnitDelay: '<S131>/Unit Delay1' */
      DynoController_Rev1_DWork.s131_UnitDelay1_DSTATE = rtb_to65535_b;

      /* Update for UnitDelay: '<S130>/Unit Delay5' */
      DynoController_Rev1_DWork.s130_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S130>/Unit Delay2' */
      DynoController_Rev1_DWork.s130_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S130>/Unit Delay' */
      DynoController_Rev1_DWork.s130_UnitDelay_DSTATE = rtb_LogicalOperator_g;

      /* Update for UnitDelay: '<S130>/Unit Delay1' */
      DynoController_Rev1_DWork.s130_UnitDelay1_DSTATE = rtb_UnitDelay_h;

      /* Update for S-Function (motohawk_sfun_dout): '<S130>/motohawk_dout' */

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

      /* Update for UnitDelay: '<S130>/Unit Delay3' */
      DynoController_Rev1_DWork.s130_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S130>/Unit Delay4' */
      DynoController_Rev1_DWork.s130_UnitDelay4_DSTATE = rtb_UnitDelay_e;
    }
  }
}
