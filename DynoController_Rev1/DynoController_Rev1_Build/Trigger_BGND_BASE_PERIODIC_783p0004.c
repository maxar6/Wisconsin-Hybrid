/*
 * Trigger_BGND_BASE_PERIODIC_783p0004.c
 *
 * Code generation for model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.305
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Apr 13 00:18:48 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_BGND_BASE_PERIODIC_783p0004(void)
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

      /* Logic: '<S141>/Logical Operator' incorporates:
       *  Logic: '<S141>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S141>/motohawk_calibration'
       *  UnitDelay: '<S141>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        DynoController_Rev1_DWork.s141_UnitDelay_DSTATE);

      /* UnitDelay: '<S151>/Unit Delay' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s151_UnitDelay_DSTATE;

      /* S-Function Block: <S139>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S139>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S139>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S140>/Switch' incorporates:
       *  Constant: '<S140>/Constant1'
       *  Sum: '<S140>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S140>/Sum' incorporates:
         *  UnitDelay: '<S140>/Unit Delay'
         */
        tmp = (uint32_T)DynoController_Rev1_DWork.s140_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S140>/Sum' */
        rtb_to65535_f = (uint16_T)tmp;
      } else {
        rtb_to65535_f = 0U;
      }

      /* End of Switch: '<S140>/Switch' */

      /* Logic: '<S140>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S140>/Switch1' incorporates:
       *  Constant: '<S140>/Constant3'
       *  Sum: '<S140>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S140>/Sum1' incorporates:
         *  UnitDelay: '<S140>/Unit Delay1'
         */
        tmp = (uint32_T)DynoController_Rev1_DWork.s140_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S140>/Sum1' */
        rtb_to65535_b = (uint16_T)tmp;
      } else {
        rtb_to65535_b = 0U;
      }

      /* End of Switch: '<S140>/Switch1' */

      /* Logic: '<S151>/Logical Operator2' incorporates:
       *  Constant: '<S140>/Constant2'
       *  Constant: '<S140>/Constant4'
       *  Logic: '<S140>/Logical Operator1'
       *  Logic: '<S140>/Logical Operator2'
       *  Logic: '<S151>/Logical Operator'
       *  Logic: '<S151>/Logical Operator1'
       *  RelationalOperator: '<S140>/Relational Operator1'
       *  RelationalOperator: '<S140>/Relational Operator2'
       */
      rtb_LogicalOperator2_h = ((rtb_UnitDelay_e || (rtb_RelationalOperator &&
        (rtb_to65535_f >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_b >=
        5))));

      /* Logic: '<S139>/Logical Operator' incorporates:
       *  Logic: '<S139>/Logical Operator1'
       *  Logic: '<S139>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S139>/motohawk_data_read'
       */
      rtb_LogicalOperator_g = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_h
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S139>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S144>/Trigger'
       */
      if ((!rtb_LogicalOperator_g) &&
          (DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S144>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S154>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(81);
        }

        /* S-Function Block: <S154>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S144>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(80);
        }
      }

      DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_g ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S139>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S139>/Unit Delay2' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s139_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S139>/Processor Reboot' incorporates:
       *  EnablePort: '<S145>/Enable'
       *  TriggerPort: '<S145>/Trigger'
       */
      /* UnitDelay: '<S139>/Unit Delay5' incorporates:
       *  UnitDelay: '<S139>/Unit Delay2'
       */
      if (DynoController_Rev1_DWork.s139_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S139>/Processor Reboot' incorporates:
         *  EnablePort: '<S145>/Enable'
         *  TriggerPort: '<S145>/Trigger'
         */
        if ((!DynoController_Rev1_DWork.s139_UnitDelay2_DSTATE) &&
            (DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S145>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S145>/motohawk_code_coverage' */
          /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(82);
          }
        }

        DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S139>/Unit Delay5' */
      DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_e ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S139>/Processor Reboot' */

      /* UnitDelay: '<S139>/Unit Delay' */
      rtb_UnitDelay_h = DynoController_Rev1_DWork.s139_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S139>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S146>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s139_UnitDelay_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S146>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S155>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(84);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S155>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S146>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S146>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(83);
        }
      }

      /* End of UnitDelay: '<S139>/Unit Delay' */
      DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_h ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S139>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S139>/Unit Delay1' */
      rtb_UnitDelay1 = DynoController_Rev1_DWork.s139_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S139>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S147>/Trigger'
       */
      if ((!DynoController_Rev1_DWork.s139_UnitDelay1_DSTATE) &&
          (DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S147>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S156>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(86);
        }

        /* S-Function Block: <S156>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S147>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S147>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(85);
        }
      }

      /* End of UnitDelay: '<S139>/Unit Delay1' */
      DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S139>/Shutdown power on ECU565-128' */

      /* If: '<S148>/If' incorporates:
       *  Inport: '<S157>/In1'
       *  Inport: '<S158>/In1'
       *  Logic: '<S139>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S148>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S148>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S148>/NewValue' incorporates:
         *  ActionPort: '<S157>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S157>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(87);
        }

        /* End of Outputs for SubSystem: '<S148>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S148>/OldValue' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_g || rtb_UnitDelay_e);

        /* S-Function (motohawk_sfun_code_cover): '<S158>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(88);
        }

        /* End of Outputs for SubSystem: '<S148>/OldValue' */
      }

      /* End of If: '<S148>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S139>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S139>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S139>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S139>/Unit Delay3' */
      rtb_UnitDelay_e = DynoController_Rev1_DWork.s139_UnitDelay3_DSTATE;

      /* UnitDelay: '<S139>/Unit Delay4' */
      rtb_LogicalOperator_c = DynoController_Rev1_DWork.s139_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S142>/Clear' incorporates:
       *  TriggerPort: '<S152>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S142>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S139>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S149>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(89);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S149>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S139>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S152>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(78);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S142>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S143>/Clear' incorporates:
       *  TriggerPort: '<S153>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S139>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S150>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(90);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S150>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S139>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S153>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(79);
        }
      }

      DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S139>/motohawk_code_coverage' */
      /* Code Coverage Test: DynoController_Rev1/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(77);
      }

      /* Update for UnitDelay: '<S141>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S141>/motohawk_calibration'
       */
      DynoController_Rev1_DWork.s141_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S151>/Unit Delay' */
      DynoController_Rev1_DWork.s151_UnitDelay_DSTATE = rtb_LogicalOperator2_h;

      /* Update for UnitDelay: '<S140>/Unit Delay' */
      DynoController_Rev1_DWork.s140_UnitDelay_DSTATE = rtb_to65535_f;

      /* Update for UnitDelay: '<S140>/Unit Delay1' */
      DynoController_Rev1_DWork.s140_UnitDelay1_DSTATE = rtb_to65535_b;

      /* Update for UnitDelay: '<S139>/Unit Delay5' */
      DynoController_Rev1_DWork.s139_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S139>/Unit Delay2' */
      DynoController_Rev1_DWork.s139_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S139>/Unit Delay' */
      DynoController_Rev1_DWork.s139_UnitDelay_DSTATE = rtb_LogicalOperator_g;

      /* Update for UnitDelay: '<S139>/Unit Delay1' */
      DynoController_Rev1_DWork.s139_UnitDelay1_DSTATE = rtb_UnitDelay_h;

      /* Update for S-Function (motohawk_sfun_dout): '<S139>/motohawk_dout' */

      /* S-Function Block: DOut736p0004 */
      {
        DOut736p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S139>/Unit Delay3' */
      DynoController_Rev1_DWork.s139_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S139>/Unit Delay4' */
      DynoController_Rev1_DWork.s139_UnitDelay4_DSTATE = rtb_UnitDelay_e;
    }
  }
}
