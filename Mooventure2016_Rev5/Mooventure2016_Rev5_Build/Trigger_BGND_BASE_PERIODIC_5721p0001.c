/*
 * Trigger_BGND_BASE_PERIODIC_5721p0001.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2069
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Apr 08 00:47:19 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_BGND_BASE_PERIODIC_5721p0001(void)
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

      /* Logic: '<S682>/Logical Operator' incorporates:
       *  Logic: '<S682>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S682>/motohawk_calibration'
       *  UnitDelay: '<S682>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        Mooventure2016_Rev5_DWork.s682_UnitDelay_DSTATE);

      /* UnitDelay: '<S692>/Unit Delay' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s692_UnitDelay_DSTATE;

      /* S-Function Block: <S680>/motohawk_ain5 Resource: ECUP */
      rtb_motohawk_ain5 = ECUP_AnalogInput_Get();

      /* RelationalOperator: '<S680>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S680>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S681>/Switch' incorporates:
       *  Constant: '<S681>/Constant1'
       *  Sum: '<S681>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S681>/Sum' incorporates:
         *  UnitDelay: '<S681>/Unit Delay'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s681_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S681>/Sum' */
        rtb_to65535_g = (uint16_T)tmp;
      } else {
        rtb_to65535_g = 0U;
      }

      /* End of Switch: '<S681>/Switch' */

      /* Logic: '<S681>/Logical Operator' */
      rtb_LogicalOperator_c = !rtb_RelationalOperator;

      /* Switch: '<S681>/Switch1' incorporates:
       *  Constant: '<S681>/Constant3'
       *  Sum: '<S681>/Sum1'
       */
      if (rtb_LogicalOperator_c) {
        /* Sum: '<S681>/Sum1' incorporates:
         *  UnitDelay: '<S681>/Unit Delay1'
         */
        tmp = (uint32_T)Mooventure2016_Rev5_DWork.s681_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S681>/Sum1' */
        rtb_to65535_p = (uint16_T)tmp;
      } else {
        rtb_to65535_p = 0U;
      }

      /* End of Switch: '<S681>/Switch1' */

      /* Logic: '<S692>/Logical Operator2' incorporates:
       *  Constant: '<S681>/Constant2'
       *  Constant: '<S681>/Constant4'
       *  Logic: '<S681>/Logical Operator1'
       *  Logic: '<S681>/Logical Operator2'
       *  Logic: '<S692>/Logical Operator'
       *  Logic: '<S692>/Logical Operator1'
       *  RelationalOperator: '<S681>/Relational Operator1'
       *  RelationalOperator: '<S681>/Relational Operator2'
       */
      rtb_LogicalOperator2_a = ((rtb_UnitDelay_a || (rtb_RelationalOperator &&
        (rtb_to65535_g >= 2))) && (!(rtb_LogicalOperator_c && (rtb_to65535_p >=
        5))));

      /* Logic: '<S680>/Logical Operator' incorporates:
       *  Logic: '<S680>/Logical Operator1'
       *  Logic: '<S680>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S680>/motohawk_data_read'
       */
      rtb_LogicalOperator_i = ((!rtb_LogicalOperator) && (rtb_LogicalOperator2_a
        || MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S680>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S685>/Trigger'
       */
      if ((!rtb_LogicalOperator_i) &&
          (Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S685>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S695>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(311);
        }

        /* S-Function Block: <S695>/motohawk_event_call */
        {
          extern void SHUTDOWNTask_PostEvent(void);
          extern void SHUTDOWNTask_SendEvent(void);

          /* post the event */
          SHUTDOWNTask_PostEvent();
        }

        /* End of Outputs for SubSystem: '<S685>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S685>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(310);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_i ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S680>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S680>/Unit Delay2' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s680_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S680>/Processor Reboot' incorporates:
       *  EnablePort: '<S686>/Enable'
       *  TriggerPort: '<S686>/Trigger'
       */
      /* UnitDelay: '<S680>/Unit Delay5' incorporates:
       *  UnitDelay: '<S680>/Unit Delay2'
       */
      if (Mooventure2016_Rev5_DWork.s680_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S680>/Processor Reboot' incorporates:
         *  EnablePort: '<S686>/Enable'
         *  TriggerPort: '<S686>/Trigger'
         */
        if ((!Mooventure2016_Rev5_DWork.s680_UnitDelay2_DSTATE) &&
            (Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S686>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S686>/motohawk_code_coverage' */
          /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(312);
          }
        }

        Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S680>/Unit Delay5' */
      Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_a ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S680>/Processor Reboot' */

      /* UnitDelay: '<S680>/Unit Delay' */
      rtb_UnitDelay_c = Mooventure2016_Rev5_DWork.s680_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S680>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S687>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s680_UnitDelay_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S687>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S696>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(314);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S696>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S687>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S687>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(313);
        }
      }

      /* End of UnitDelay: '<S680>/Unit Delay' */
      Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_c ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S680>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S680>/Unit Delay1' */
      rtb_UnitDelay1 = Mooventure2016_Rev5_DWork.s680_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S680>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S688>/Trigger'
       */
      if ((!Mooventure2016_Rev5_DWork.s680_UnitDelay1_DSTATE) &&
          (Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S688>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S697>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(316);
        }

        /* S-Function Block: <S697>/motohawk_shutdown_power */
        {
          /* Shut down the MotoCoder-generated OS */
          extern void Module_Shutdown(boolean_T shutdownPower);
          Module_Shutdown(1);
        }

        /* End of Outputs for SubSystem: '<S688>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S688>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(315);
        }
      }

      /* End of UnitDelay: '<S680>/Unit Delay1' */
      Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S680>/Shutdown power on ECU565-128' */

      /* If: '<S689>/If' incorporates:
       *  Inport: '<S698>/In1'
       *  Inport: '<S699>/In1'
       *  Logic: '<S680>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S689>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S689>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S689>/NewValue' incorporates:
         *  ActionPort: '<S698>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S698>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(317);
        }

        /* End of Outputs for SubSystem: '<S689>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S689>/OldValue' incorporates:
         *  ActionPort: '<S699>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_i || rtb_UnitDelay_a);

        /* S-Function (motohawk_sfun_code_cover): '<S699>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(318);
        }

        /* End of Outputs for SubSystem: '<S689>/OldValue' */
      }

      /* End of If: '<S689>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S680>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* DataTypeConversion: '<S680>/Data Type Conversion' */
      rtb_DataTypeConversion = (real_T)rtb_motohawk_ain5;

      /* S-Function (motohawk_sfun_data_write): '<S680>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: ECUP */
      {
        ECUP_DataStore() = rtb_DataTypeConversion;
      }

      /* Logic: '<S680>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_RelationalOperator;

      /* S-Function (motohawk_sfun_data_write): '<S680>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S680>/Unit Delay3' */
      rtb_UnitDelay_a = Mooventure2016_Rev5_DWork.s680_UnitDelay3_DSTATE;

      /* UnitDelay: '<S680>/Unit Delay4' */
      rtb_LogicalOperator_c = Mooventure2016_Rev5_DWork.s680_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S683>/Clear' incorporates:
       *  TriggerPort: '<S693>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S683>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S680>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S690>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(319);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S690>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S680>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S693>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(308);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S683>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S684>/Clear' incorporates:
       *  TriggerPort: '<S694>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S680>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S691>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(320);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S691>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S680>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S694>/motohawk_code_coverage' */
        /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(309);
        }
      }

      Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S680>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Main Power Relay1/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(307);
      }

      /* Update for UnitDelay: '<S682>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S682>/motohawk_calibration'
       */
      Mooventure2016_Rev5_DWork.s682_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S692>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s692_UnitDelay_DSTATE = rtb_LogicalOperator2_a;

      /* Update for UnitDelay: '<S681>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s681_UnitDelay_DSTATE = rtb_to65535_g;

      /* Update for UnitDelay: '<S681>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s681_UnitDelay1_DSTATE = rtb_to65535_p;

      /* Update for UnitDelay: '<S680>/Unit Delay5' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay5_DSTATE = rtb_LogicalOperator_c;

      /* Update for UnitDelay: '<S680>/Unit Delay2' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S680>/Unit Delay' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay_DSTATE = rtb_LogicalOperator_i;

      /* Update for UnitDelay: '<S680>/Unit Delay1' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay1_DSTATE = rtb_UnitDelay_c;

      /* Update for S-Function (motohawk_sfun_dout): '<S680>/motohawk_dout' */

      /* S-Function Block: DOut5671p0001 */
      {
        DOut5671p0001_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S680>/Unit Delay3' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S680>/Unit Delay4' */
      Mooventure2016_Rev5_DWork.s680_UnitDelay4_DSTATE = rtb_UnitDelay_a;
    }
  }
}
