/*
 * Trigger_BGND_BASE_PERIODIC_6596p0005.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2015
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Nov 20 13:47:00 2017
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

      /* Logic: '<S691>/Logical Operator' incorporates:
       *  Logic: '<S691>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration'
       *  UnitDelay: '<S691>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        Mooventure2016_Rev5_DWork.s691_UnitDelay_DSTATE);

      /* UnitDelay: '<S701>/Unit Delay' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s701_UnitDelay_DSTATE;

      /* S-Function Block: <S689>/motohawk_ain5 Resource: ECUP */
      rtb_motohawk_ain5 = ECUP_AnalogInput_Get();

      /* RelationalOperator: '<S689>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S689>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S690>/Switch' incorporates:
       *  Constant: '<S690>/Constant1'
       *  Sum: '<S690>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S690>/Sum' incorporates:
         *  UnitDelay: '<S690>/Unit Delay'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s690_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S690>/Sum' */
        rtb_to65535_g = (uint16_T)tmp;
      } else {
        rtb_to65535_g = 0U;
      }

      /* End of Switch: '<S690>/Switch' */

      /* Logic: '<S690>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S690>/Switch1' incorporates:
       *  Constant: '<S690>/Constant3'
       *  Sum: '<S690>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S690>/Sum1' incorporates:
         *  UnitDelay: '<S690>/Unit Delay1'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s690_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S690>/Sum1' */
        rtb_to65535_p = (uint16_T)tmp;
      } else {
        rtb_to65535_p = 0U;
      }

      /* End of Switch: '<S690>/Switch1' */

      /* Logic: '<S701>/Logical Operator2' incorporates:
       *  Constant: '<S690>/Constant2'
       *  Constant: '<S690>/Constant4'
       *  Logic: '<S690>/Logical Operator1'
       *  Logic: '<S690>/Logical Operator2'
       *  Logic: '<S701>/Logical Operator'
       *  Logic: '<S701>/Logical Operator1'
       *  RelationalOperator: '<S690>/Relational Operator1'
       *  RelationalOperator: '<S690>/Relational Operator2'
       */
      rtb_LogicalOperator2_a = ((rtb_UnitDelay_a || (rtb_RelationalOperator &&
        (rtb_to65535_g >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_p >=
        5))));

      /* Logic: '<S689>/Logical Operator' incorporates:
       *  Logic: '<S689>/Logical Operator1'
       *  Logic: '<S689>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S689>/motohawk_data_read'
       */
      rtb_LogicalOperator_i = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_a
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S689>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S694>/Trigger'
       */
      if ((!rtb_LogicalOperator_i) &&
          (Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S694>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S704>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(291);
        }

        /* S-Function Block: <S704>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S694>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S694>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(290);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_i ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S689>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S689>/Unit Delay2' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s689_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S689>/Processor Reboot' incorporates:
       *  EnablePort: '<S695>/Enable'
       *  TriggerPort: '<S695>/Trigger'
       */
      /* UnitDelay: '<S689>/Unit Delay5' incorporates:
       *  UnitDelay: '<S689>/Unit Delay2'
       */
      if (Mooventure2016_Rev5_DWork.s689_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S689>/Processor Reboot' incorporates:
         *  EnablePort: '<S695>/Enable'
         *  TriggerPort: '<S695>/Trigger'
         */
        if ((!Mooventure2016_Rev5_DWork.s689_UnitDelay2_DSTATE) &&
            (Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S695>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S695>/motohawk_code_coverage' */
          /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(292);
          }
        }

        Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S689>/Unit Delay5' */
      Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S689>/Processor Reboot' */

      /* UnitDelay: '<S689>/Unit Delay' */
      rtb_UnitDelay_c = Mooventure2016_Rev5_DWork.s689_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S689>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S696>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s689_UnitDelay_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S696>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S705>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(294);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S705>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S696>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S696>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(293);
        }
      }

      /* End of UnitDelay: '<S689>/Unit Delay' */
      Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_c ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S689>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S689>/Unit Delay1' */
      rtb_UnitDelay1 = Mooventure2016_Rev5_DWork.s689_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S689>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S697>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s689_UnitDelay1_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S697>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S706>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(296);
        }

        /* S-Function Block: <S706>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S697>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S697>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(295);
        }
      }

      /* End of UnitDelay: '<S689>/Unit Delay1' */
      Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S689>/Shutdown power on ECU565-128' */

      /* If: '<S698>/If' incorporates:
       *  Inport: '<S707>/In1'
       *  Inport: '<S708>/In1'
       *  Logic: '<S689>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S698>/NewValue' incorporates:
         *  ActionPort: '<S707>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S707>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(297);
        }

        /* End of Outputs for SubSystem: '<S698>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S698>/OldValue' incorporates:
         *  ActionPort: '<S708>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_i || rtb_UnitDelay_a);

        /* S-Function (motohawk_sfun_code_cover): '<S708>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(298);
        }

        /* End of Outputs for SubSystem: '<S698>/OldValue' */
      }

      /* End of If: '<S698>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S689>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* DataTypeConversion: '<S689>/Data Type Conversion' */
      rtb_DataTypeConversion = (real_T)rtb_motohawk_ain5;

      /* S-Function (motohawk_sfun_data_write): '<S689>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: ECUP */
      {
        ECUP_DataStore() = rtb_DataTypeConversion;
      }

      /* Logic: '<S689>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S689>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S689>/Unit Delay3' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s689_UnitDelay3_DSTATE;

      /* UnitDelay: '<S689>/Unit Delay4' */
      rtb_LogicalOperator_c = Mooventure2016_Rev5_DWork.s689_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S692>/Clear' incorporates:
       *  TriggerPort: '<S702>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S689>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S699>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(299);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S699>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S689>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S702>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(288);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S693>/Clear' incorporates:
       *  TriggerPort: '<S703>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S689>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S700>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(300);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S700>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S689>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S703>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(289);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S689>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(287);
      }

      /* Update for UnitDelay: '<S691>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration'
       */
      Mooventure2016_Rev5_DWork.s691_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S701>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s701_UnitDelay_DSTATE = rtb_LogicalOperator2_a;

      /* Update for UnitDelay: '<S690>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s690_UnitDelay_DSTATE = rtb_to65535_g;

      /* Update for UnitDelay: '<S690>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s690_UnitDelay1_DSTATE = rtb_to65535_p;

      /* Update for UnitDelay: '<S689>/Unit Delay5' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S689>/Unit Delay2' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S689>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay_DSTATE = rtb_LogicalOperator_i;

      /* Update for UnitDelay: '<S689>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay1_DSTATE = rtb_UnitDelay_c;

      /* Update for S-Function (motohawk_sfun_dout): '<S689>/motohawk_dout' */

      /* S-Function Block: DOut6546p0005 */
      {
        DOut6546p0005_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S689>/Unit Delay3' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S689>/Unit Delay4' */
      Mooventure2016_Rev5_DWork.s689_UnitDelay4_DSTATE = rtb_UnitDelay_a;
    }
  }
}
