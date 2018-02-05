/*
 * Trigger_BGND_BASE_PERIODIC_739p0001.c
 *
 * Code generation for model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.298
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Jan 15 12:10:05 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_BGND_BASE_PERIODIC_739p0001(void)
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

      /* Logic: '<S135>/Logical Operator' incorporates:
       *  Logic: '<S135>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration'
       *  UnitDelay: '<S135>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        DynoController_Rev1_DWork.s135_UnitDelay_DSTATE);

      /* UnitDelay: '<S145>/Unit Delay' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s145_UnitDelay_DSTATE;

      /* S-Function Block: <S133>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S133>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S133>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S134>/Switch' incorporates:
       *  Constant: '<S134>/Constant1'
       *  Sum: '<S134>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S134>/Sum' incorporates:
         *  UnitDelay: '<S134>/Unit Delay'
         */
        tmp = (uint32_T)DynoController_Rev1_DWork.s134_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S134>/Sum' */
        rtb_to65535_f = (uint16_T)tmp;
      } else {
        rtb_to65535_f = 0U;
      }

      /* End of Switch: '<S134>/Switch' */

      /* Logic: '<S134>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S134>/Switch1' incorporates:
       *  Constant: '<S134>/Constant3'
       *  Sum: '<S134>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S134>/Sum1' incorporates:
         *  UnitDelay: '<S134>/Unit Delay1'
         */
        tmp = (uint32_T)DynoController_Rev1_DWork.s134_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S134>/Sum1' */
        rtb_to65535_b = (uint16_T)tmp;
      } else {
        rtb_to65535_b = 0U;
      }

      /* End of Switch: '<S134>/Switch1' */

      /* Logic: '<S145>/Logical Operator2' incorporates:
       *  Constant: '<S134>/Constant2'
       *  Constant: '<S134>/Constant4'
       *  Logic: '<S134>/Logical Operator1'
       *  Logic: '<S134>/Logical Operator2'
       *  Logic: '<S145>/Logical Operator'
       *  Logic: '<S145>/Logical Operator1'
       *  RelationalOperator: '<S134>/Relational Operator1'
       *  RelationalOperator: '<S134>/Relational Operator2'
       */
      rtb_LogicalOperator2_h = ((rtb_UnitDelay_e || (rtb_RelationalOperator &&
        (rtb_to65535_f >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_b >=
        5))));

      /* Logic: '<S133>/Logical Operator' incorporates:
       *  Logic: '<S133>/Logical Operator1'
       *  Logic: '<S133>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S133>/motohawk_data_read'
       */
      rtb_LogicalOperator_g = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_h
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S133>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S138>/Trigger'
       */
      if ((!rtb_LogicalOperator_g) &&
          (DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S138>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S148>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(77);
        }

        /* S-Function Block: <S148>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S138>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(76);
        }
      }

      DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_g ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S133>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S133>/Unit Delay2' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s133_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S133>/Processor Reboot' incorporates:
       *  EnablePort: '<S139>/Enable'
       *  TriggerPort: '<S139>/Trigger'
       */
      /* UnitDelay: '<S133>/Unit Delay5' incorporates:
       *  UnitDelay: '<S133>/Unit Delay2'
       */
      if (DynoController_Rev1_DWork.s133_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S133>/Processor Reboot' incorporates:
         *  EnablePort: '<S139>/Enable'
         *  TriggerPort: '<S139>/Trigger'
         */
        if ((!DynoController_Rev1_DWork.s133_UnitDelay2_DSTATE) &&
            (DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S139>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S139>/motohawk_code_coverage' */
          /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(78);
          }
        }

        DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S133>/Unit Delay5' */
      DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S133>/Processor Reboot' */

      /* UnitDelay: '<S133>/Unit Delay' */
      rtb_UnitDelay_h = DynoController_Rev1_DWork.s133_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S133>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S140>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s133_UnitDelay_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S140>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S149>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(80);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S149>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S140>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S140>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(79);
        }
      }

      /* End of UnitDelay: '<S133>/Unit Delay' */
      DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_h ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S133>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S133>/Unit Delay1' */
      rtb_UnitDelay1 = DynoController_Rev1_DWork.s133_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S133>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S141>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s133_UnitDelay1_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S141>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S150>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(82);
        }

        /* S-Function Block: <S150>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S141>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S141>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(81);
        }
      }

      /* End of UnitDelay: '<S133>/Unit Delay1' */
      DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S133>/Shutdown power on ECU565-128' */

      /* If: '<S142>/If' incorporates:
       *  Inport: '<S151>/In1'
       *  Inport: '<S152>/In1'
       *  Logic: '<S133>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S142>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S142>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S142>/NewValue' incorporates:
         *  ActionPort: '<S151>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S151>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(83);
        }

        /* End of Outputs for SubSystem: '<S142>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S142>/OldValue' incorporates:
         *  ActionPort: '<S152>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_g || rtb_UnitDelay_e);

        /* S-Function (motohawk_sfun_code_cover): '<S152>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(84);
        }

        /* End of Outputs for SubSystem: '<S142>/OldValue' */
      }

      /* End of If: '<S142>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S133>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S133>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S133>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S133>/Unit Delay3' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s133_UnitDelay3_DSTATE;

      /* UnitDelay: '<S133>/Unit Delay4' */
      rtb_LogicalOperator_c = DynoController_Rev1_DWork.s133_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S136>/Clear' incorporates:
       *  TriggerPort: '<S146>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S133>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S143>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(85);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S143>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S133>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S146>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(74);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S137>/Clear' incorporates:
       *  TriggerPort: '<S147>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S133>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(86);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S144>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S133>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S147>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(75);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S133>/motohawk_code_coverage' */
      /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(73);
      }

      /* Update for UnitDelay: '<S135>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration'
       */
      DynoController_Rev1_DWork.s135_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S145>/Unit Delay' */
      DynoController_Rev1_DWork.s145_UnitDelay_DSTATE = rtb_LogicalOperator2_h;

      /* Update for UnitDelay: '<S134>/Unit Delay' */
      DynoController_Rev1_DWork.s134_UnitDelay_DSTATE = rtb_to65535_f;

      /* Update for UnitDelay: '<S134>/Unit Delay1' */
      DynoController_Rev1_DWork.s134_UnitDelay1_DSTATE = rtb_to65535_b;

      /* Update for UnitDelay: '<S133>/Unit Delay5' */
      DynoController_Rev1_DWork.s133_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S133>/Unit Delay2' */
      DynoController_Rev1_DWork.s133_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S133>/Unit Delay' */
      DynoController_Rev1_DWork.s133_UnitDelay_DSTATE = rtb_LogicalOperator_g;

      /* Update for UnitDelay: '<S133>/Unit Delay1' */
      DynoController_Rev1_DWork.s133_UnitDelay1_DSTATE = rtb_UnitDelay_h;

      /* Update for S-Function (motohawk_sfun_dout): '<S133>/motohawk_dout' */

      /* S-Function Block: DOut692p0001 */
      {
        DOut692p0001_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S133>/Unit Delay3' */
      DynoController_Rev1_DWork.s133_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S133>/Unit Delay4' */
      DynoController_Rev1_DWork.s133_UnitDelay4_DSTATE = rtb_UnitDelay_e;
    }
  }
}
