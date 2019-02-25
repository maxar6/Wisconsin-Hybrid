/*
 * Trigger_BGND_BASE_PERIODIC_5903p0002.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2161
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 17:16:08 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_BGND_BASE_PERIODIC_5903p0002(void)
{
  {
    /* Output and update for function-call system: '<S3>/Background' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion;
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator;
      boolean_T rtb_UnitDelay_a;
      boolean_T rtb_RelationalOperator;
      uint16_T rtb_to65535_g;
      boolean_T rtb_LogicalOperator_c;
      uint16_T rtb_to65535_p;
      boolean_T rtb_LogicalOperator2_a;
      boolean_T rtb_LogicalOperator_i;
      boolean_T rtb_UnitDelay_c;
      boolean_T rtb_UnitDelay1;
      uint32_T tmp;

      /* Logic: '<S887>/Logical Operator' incorporates:
       *  Logic: '<S887>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration'
       *  UnitDelay: '<S887>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        Mooventure2016_Rev5_DWork.s887_UnitDelay_DSTATE);

      /* UnitDelay: '<S897>/Unit Delay' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s897_UnitDelay_DSTATE;

      /* S-Function Block: <S885>/motohawk_ain5 Resource: ECUP */
      rtb_motohawk_ain5 = ECUP_AnalogInput_Get();

      /* RelationalOperator: '<S885>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S885>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S886>/Switch' incorporates:
       *  Constant: '<S886>/Constant1'
       *  Sum: '<S886>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S886>/Sum' incorporates:
         *  UnitDelay: '<S886>/Unit Delay'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s886_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S886>/Sum' */
        rtb_to65535_g = (uint16_T)tmp;
      } else {
        rtb_to65535_g = 0U;
      }

      /* End of Switch: '<S886>/Switch' */

      /* Logic: '<S886>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S886>/Switch1' incorporates:
       *  Constant: '<S886>/Constant3'
       *  Sum: '<S886>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S886>/Sum1' incorporates:
         *  UnitDelay: '<S886>/Unit Delay1'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s886_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S886>/Sum1' */
        rtb_to65535_p = (uint16_T)tmp;
      } else {
        rtb_to65535_p = 0U;
      }

      /* End of Switch: '<S886>/Switch1' */

      /* Logic: '<S897>/Logical Operator2' incorporates:
       *  Constant: '<S886>/Constant2'
       *  Constant: '<S886>/Constant4'
       *  Logic: '<S886>/Logical Operator1'
       *  Logic: '<S886>/Logical Operator2'
       *  Logic: '<S897>/Logical Operator'
       *  Logic: '<S897>/Logical Operator1'
       *  RelationalOperator: '<S886>/Relational Operator1'
       *  RelationalOperator: '<S886>/Relational Operator2'
       */
      rtb_LogicalOperator2_a = ((rtb_UnitDelay_a || (rtb_RelationalOperator &&
        (rtb_to65535_g >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_p >=
        5))));

      /* Logic: '<S885>/Logical Operator' incorporates:
       *  Logic: '<S885>/Logical Operator1'
       *  Logic: '<S885>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S885>/motohawk_data_read'
       */
      rtb_LogicalOperator_i = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_a
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S885>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S890>/Trigger'
       */
      if ((!rtb_LogicalOperator_i) &&
          (Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S890>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S900>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(454);
        }

        /* S-Function Block: <S900>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S890>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S890>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(453);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_i ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S885>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S885>/Unit Delay2' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s885_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S885>/Processor Reboot' incorporates:
       *  EnablePort: '<S891>/Enable'
       *  TriggerPort: '<S891>/Trigger'
       */
      /* UnitDelay: '<S885>/Unit Delay5' incorporates:
       *  UnitDelay: '<S885>/Unit Delay2'
       */
      if (Mooventure2016_Rev5_DWork.s885_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S885>/Processor Reboot' incorporates:
         *  EnablePort: '<S891>/Enable'
         *  TriggerPort: '<S891>/Trigger'
         */
        if ((!Mooventure2016_Rev5_DWork.s885_UnitDelay2_DSTATE) &&
            (Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S891>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S891>/motohawk_code_coverage' */
          /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(455);
          }
        }

        Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S885>/Unit Delay5' */
      Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S885>/Processor Reboot' */

      /* UnitDelay: '<S885>/Unit Delay' */
      rtb_UnitDelay_c = Mooventure2016_Rev5_DWork.s885_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S885>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S892>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s885_UnitDelay_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S892>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S901>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(457);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S901>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S892>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S892>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(456);
        }
      }

      /* End of UnitDelay: '<S885>/Unit Delay' */
      Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_c ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S885>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S885>/Unit Delay1' */
      rtb_UnitDelay1 = Mooventure2016_Rev5_DWork.s885_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S885>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S893>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s885_UnitDelay1_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S893>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S902>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(459);
        }

        /* S-Function Block: <S902>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S893>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S893>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(458);
        }
      }

      /* End of UnitDelay: '<S885>/Unit Delay1' */
      Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S885>/Shutdown power on ECU565-128' */

      /* If: '<S894>/If' incorporates:
       *  Inport: '<S903>/In1'
       *  Inport: '<S904>/In1'
       *  Logic: '<S885>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S894>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S894>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S894>/NewValue' incorporates:
         *  ActionPort: '<S903>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S903>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(460);
        }

        /* End of Outputs for SubSystem: '<S894>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S894>/OldValue' incorporates:
         *  ActionPort: '<S904>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_i || rtb_UnitDelay_a);

        /* S-Function (motohawk_sfun_code_cover): '<S904>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(461);
        }

        /* End of Outputs for SubSystem: '<S894>/OldValue' */
      }

      /* End of If: '<S894>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S885>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* DataTypeConversion: '<S885>/Data Type Conversion' */
      rtb_DataTypeConversion = (real_T)rtb_motohawk_ain5;

      /* S-Function (motohawk_sfun_data_write): '<S885>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: ECUP */
      {
        ECUP_DataStore() = rtb_DataTypeConversion;
      }

      /* Logic: '<S885>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S885>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S885>/Unit Delay3' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s885_UnitDelay3_DSTATE;

      /* UnitDelay: '<S885>/Unit Delay4' */
      rtb_LogicalOperator_c = Mooventure2016_Rev5_DWork.s885_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S888>/Clear' incorporates:
       *  TriggerPort: '<S898>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S885>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S895>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(462);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S895>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S885>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S898>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(451);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S888>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S889>/Clear' incorporates:
       *  TriggerPort: '<S899>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S889>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S885>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S896>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(463);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S896>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S885>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S899>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(452);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S889>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S885>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(450);
      }

      /* Update for UnitDelay: '<S887>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration'
       */
      Mooventure2016_Rev5_DWork.s887_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S897>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s897_UnitDelay_DSTATE = rtb_LogicalOperator2_a;

      /* Update for UnitDelay: '<S886>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s886_UnitDelay_DSTATE = rtb_to65535_g;

      /* Update for UnitDelay: '<S886>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s886_UnitDelay1_DSTATE = rtb_to65535_p;

      /* Update for UnitDelay: '<S885>/Unit Delay5' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S885>/Unit Delay2' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S885>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay_DSTATE = rtb_LogicalOperator_i;

      /* Update for UnitDelay: '<S885>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay1_DSTATE = rtb_UnitDelay_c;

      /* Update for S-Function (motohawk_sfun_dout): '<S885>/motohawk_dout' */

      /* S-Function Block: DOut5853p0002 */
      {
        DOut5853p0002_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S885>/Unit Delay3' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S885>/Unit Delay4' */
      Mooventure2016_Rev5_DWork.s885_UnitDelay4_DSTATE = rtb_UnitDelay_a;
    }
  }
}
