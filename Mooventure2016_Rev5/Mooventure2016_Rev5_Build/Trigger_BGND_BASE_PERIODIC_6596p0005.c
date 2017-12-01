/*
 * Trigger_BGND_BASE_PERIODIC_6596p0005.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2026
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Nov 29 16:58:34 2017
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_BGND_BASE_PERIODIC_6596p0005(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    Mooventure2016_Rev5_M->Timing.clockTick0 = lower32Bits;
    Mooventure2016_Rev5_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    /* Output and update for function-call system: '<S2>/Background' */
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

      /* Logic: '<S690>/Logical Operator' incorporates:
       *  Logic: '<S690>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration'
       *  UnitDelay: '<S690>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        Mooventure2016_Rev5_DWork.s690_UnitDelay_DSTATE);

      /* UnitDelay: '<S700>/Unit Delay' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s700_UnitDelay_DSTATE;

      /* S-Function Block: <S688>/motohawk_ain5 Resource: ECUP */
      rtb_motohawk_ain5 = ECUP_AnalogInput_Get();

      /* RelationalOperator: '<S688>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S688>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S689>/Switch' incorporates:
       *  Constant: '<S689>/Constant1'
       *  Sum: '<S689>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S689>/Sum' incorporates:
         *  UnitDelay: '<S689>/Unit Delay'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s689_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S689>/Sum' */
        rtb_to65535_g = (uint16_T)tmp;
      } else {
        rtb_to65535_g = 0U;
      }

      /* End of Switch: '<S689>/Switch' */

      /* Logic: '<S689>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S689>/Switch1' incorporates:
       *  Constant: '<S689>/Constant3'
       *  Sum: '<S689>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S689>/Sum1' incorporates:
         *  UnitDelay: '<S689>/Unit Delay1'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s689_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S689>/Sum1' */
        rtb_to65535_p = (uint16_T)tmp;
      } else {
        rtb_to65535_p = 0U;
      }

      /* End of Switch: '<S689>/Switch1' */

      /* Logic: '<S700>/Logical Operator2' incorporates:
       *  Constant: '<S689>/Constant2'
       *  Constant: '<S689>/Constant4'
       *  Logic: '<S689>/Logical Operator1'
       *  Logic: '<S689>/Logical Operator2'
       *  Logic: '<S700>/Logical Operator'
       *  Logic: '<S700>/Logical Operator1'
       *  RelationalOperator: '<S689>/Relational Operator1'
       *  RelationalOperator: '<S689>/Relational Operator2'
       */
      rtb_LogicalOperator2_a = ((rtb_UnitDelay_a || (rtb_RelationalOperator &&
        (rtb_to65535_g >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_p >=
        5))));

      /* Logic: '<S688>/Logical Operator' incorporates:
       *  Logic: '<S688>/Logical Operator1'
       *  Logic: '<S688>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S688>/motohawk_data_read'
       */
      rtb_LogicalOperator_i = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_a
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S688>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S693>/Trigger'
       */
      if ((!rtb_LogicalOperator_i) &&
          (Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S693>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S703>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(291);
        }

        /* S-Function Block: <S703>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S693>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S693>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(290);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_i ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S688>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S688>/Unit Delay2' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s688_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S688>/Processor Reboot' incorporates:
       *  EnablePort: '<S694>/Enable'
       *  TriggerPort: '<S694>/Trigger'
       */
      /* UnitDelay: '<S688>/Unit Delay5' incorporates:
       *  UnitDelay: '<S688>/Unit Delay2'
       */
      if (Mooventure2016_Rev5_DWork.s688_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S688>/Processor Reboot' incorporates:
         *  EnablePort: '<S694>/Enable'
         *  TriggerPort: '<S694>/Trigger'
         */
        if ((!Mooventure2016_Rev5_DWork.s688_UnitDelay2_DSTATE) &&
            (Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S694>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S694>/motohawk_code_coverage' */
          /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(292);
          }
        }

        Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S688>/Unit Delay5' */
      Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S688>/Processor Reboot' */

      /* UnitDelay: '<S688>/Unit Delay' */
      rtb_UnitDelay_c = Mooventure2016_Rev5_DWork.s688_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S688>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S695>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s688_UnitDelay_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S695>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S704>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(294);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S704>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S695>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S695>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(293);
        }
      }

      /* End of UnitDelay: '<S688>/Unit Delay' */
      Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_c ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S688>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S688>/Unit Delay1' */
      rtb_UnitDelay1 = Mooventure2016_Rev5_DWork.s688_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S688>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S696>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s688_UnitDelay1_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S696>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S705>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(296);
        }

        /* S-Function Block: <S705>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S696>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S696>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(295);
        }
      }

      /* End of UnitDelay: '<S688>/Unit Delay1' */
      Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S688>/Shutdown power on ECU565-128' */

      /* If: '<S697>/If' incorporates:
       *  Inport: '<S706>/In1'
       *  Inport: '<S707>/In1'
       *  Logic: '<S688>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S697>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S697>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S697>/NewValue' incorporates:
         *  ActionPort: '<S706>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S706>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(297);
        }

        /* End of Outputs for SubSystem: '<S697>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S697>/OldValue' incorporates:
         *  ActionPort: '<S707>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_i || rtb_UnitDelay_a);

        /* S-Function (motohawk_sfun_code_cover): '<S707>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(298);
        }

        /* End of Outputs for SubSystem: '<S697>/OldValue' */
      }

      /* End of If: '<S697>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S688>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* DataTypeConversion: '<S688>/Data Type Conversion' */
      rtb_DataTypeConversion = (real_T)rtb_motohawk_ain5;

      /* S-Function (motohawk_sfun_data_write): '<S688>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: ECUP */
      {
        ECUP_DataStore() = rtb_DataTypeConversion;
      }

      /* Logic: '<S688>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S688>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S688>/Unit Delay3' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s688_UnitDelay3_DSTATE;

      /* UnitDelay: '<S688>/Unit Delay4' */
      rtb_LogicalOperator_c = Mooventure2016_Rev5_DWork.s688_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S691>/Clear' incorporates:
       *  TriggerPort: '<S701>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S688>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S698>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(299);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S698>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S688>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S701>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(288);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S692>/Clear' incorporates:
       *  TriggerPort: '<S702>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S688>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S699>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(300);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S699>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S688>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S702>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(289);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S688>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(287);
      }

      /* Update for UnitDelay: '<S690>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration'
       */
      Mooventure2016_Rev5_DWork.s690_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S700>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s700_UnitDelay_DSTATE = rtb_LogicalOperator2_a;

      /* Update for UnitDelay: '<S689>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay_DSTATE = rtb_to65535_g;

      /* Update for UnitDelay: '<S689>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay1_DSTATE = rtb_to65535_p;

      /* Update for UnitDelay: '<S688>/Unit Delay5' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S688>/Unit Delay2' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S688>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay_DSTATE = rtb_LogicalOperator_i;

      /* Update for UnitDelay: '<S688>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay1_DSTATE = rtb_UnitDelay_c;

      /* Update for S-Function (motohawk_sfun_dout): '<S688>/motohawk_dout' */

      /* S-Function Block: DOut6546p0005 */
      {
        DOut6546p0005_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S688>/Unit Delay3' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S688>/Unit Delay4' */
      Mooventure2016_Rev5_DWork.s688_UnitDelay4_DSTATE = rtb_UnitDelay_a;
    }
  }
}
