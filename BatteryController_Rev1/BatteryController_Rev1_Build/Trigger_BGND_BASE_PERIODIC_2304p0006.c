/*
 * Trigger_BGND_BASE_PERIODIC_2304p0006.c
 *
 * Code generation for model "BatteryController_Rev1.mdl".
 *
 * Model version              : 1.590
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 09:42:57 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

void Trigger_BGND_BASE_PERIODIC_2304p0006(void)
{
  {
    /* Output and update for function-call system: '<S3>/Background' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator;
      boolean_T rtb_UnitDelay_j;
      boolean_T rtb_RelationalOperator;
      uint16_T rtb_to65535_e;
      boolean_T rtb_LogicalOperator_g;
      uint16_T rtb_to65535_c;
      boolean_T rtb_LogicalOperator_e;
      boolean_T rtb_UnitDelay_p;
      boolean_T rtb_UnitDelay1;
      uint32_T tmp;

      /* Logic: '<S220>/Logical Operator' incorporates:
       *  Logic: '<S220>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration'
       *  UnitDelay: '<S220>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BatteryController_Rev1_DWork.s220_UnitDelay_DSTATE);

      /* UnitDelay: '<S230>/Unit Delay' */
      rtb_UnitDelay_j = BatteryController_Rev1_DWork.s230_UnitDelay_DSTATE;

      /* S-Function Block: <S218>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S218>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S218>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S219>/Switch' incorporates:
       *  Constant: '<S219>/Constant1'
       *  Sum: '<S219>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S219>/Sum' incorporates:
         *  UnitDelay: '<S219>/Unit Delay'
         */
        tmp = (uint32_T)BatteryController_Rev1_DWork.s219_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S219>/Sum' */
        rtb_to65535_e = (uint16_T)tmp;
      } else {
        rtb_to65535_e = 0U;
      }

      /* End of Switch: '<S219>/Switch' */

      /* Logic: '<S219>/Logical Operator' */
      rtb_LogicalOperator_g = !rtb_RelationalOperator;

      /* Switch: '<S219>/Switch1' incorporates:
       *  Constant: '<S219>/Constant3'
       *  Sum: '<S219>/Sum1'
       */
      if (rtb_LogicalOperator_g) {
        /* Sum: '<S219>/Sum1' incorporates:
         *  UnitDelay: '<S219>/Unit Delay1'
         */
        tmp = (uint32_T)BatteryController_Rev1_DWork.s219_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S219>/Sum1' */
        rtb_to65535_c = (uint16_T)tmp;
      } else {
        rtb_to65535_c = 0U;
      }

      /* End of Switch: '<S219>/Switch1' */

      /* Logic: '<S230>/Logical Operator2' incorporates:
       *  Constant: '<S219>/Constant2'
       *  Constant: '<S219>/Constant4'
       *  Logic: '<S219>/Logical Operator1'
       *  Logic: '<S219>/Logical Operator2'
       *  Logic: '<S230>/Logical Operator'
       *  Logic: '<S230>/Logical Operator1'
       *  RelationalOperator: '<S219>/Relational Operator1'
       *  RelationalOperator: '<S219>/Relational Operator2'
       */
      rtb_LogicalOperator_g = ((rtb_UnitDelay_j || (rtb_RelationalOperator &&
        (rtb_to65535_e >= 2))) && (!(rtb_LogicalOperator_g && (rtb_to65535_c >=
        5))));

      /* Logic: '<S218>/Logical Operator' incorporates:
       *  Logic: '<S218>/Logical Operator1'
       *  Logic: '<S218>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S218>/motohawk_data_read'
       */
      rtb_LogicalOperator_e = ((!rtb_LogicalOperator) && (rtb_LogicalOperator_g ||
        MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S218>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S223>/Trigger'
       */
      if ((!rtb_LogicalOperator_e) &&
          (BatteryController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S223>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S233>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(128);
        }

        /* S-Function Block: <S233>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S223>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(127);
        }
      }

      BatteryController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_LogicalOperator_e ? (int32_T)POS_ZCSIG : (int32_T)
                    ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S218>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S218>/Unit Delay2' */
      rtb_UnitDelay_j = BatteryController_Rev1_DWork.s218_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S218>/Processor Reboot' incorporates:
       *  EnablePort: '<S224>/Enable'
       *  TriggerPort: '<S224>/Trigger'
       */
      /* UnitDelay: '<S218>/Unit Delay5' incorporates:
       *  UnitDelay: '<S218>/Unit Delay2'
       */
      if (BatteryController_Rev1_DWork.s218_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S218>/Processor Reboot' incorporates:
         *  EnablePort: '<S224>/Enable'
         *  TriggerPort: '<S224>/Trigger'
         */
        if ((!BatteryController_Rev1_DWork.s218_UnitDelay2_DSTATE) &&
            (BatteryController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE !=
             ZERO_ZCSIG)) {
          /* S-Function Block: <S224>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
          /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(129);
          }
        }

        BatteryController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE =
          (uint8_T)(rtb_UnitDelay_j ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S218>/Unit Delay5' */
      BatteryController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_j ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S218>/Processor Reboot' */

      /* UnitDelay: '<S218>/Unit Delay' */
      rtb_UnitDelay_p = BatteryController_Rev1_DWork.s218_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S218>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S225>/Trigger'
       */
      if ((!BatteryController_Rev1_DWork.s218_UnitDelay_DSTATE) &&
          (BatteryController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S225>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S234>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(131);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S234>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S225>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(130);
        }
      }

      /* End of UnitDelay: '<S218>/Unit Delay' */
      BatteryController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
        = (uint8_T)(rtb_UnitDelay_p ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S218>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S218>/Unit Delay1' */
      rtb_UnitDelay1 = BatteryController_Rev1_DWork.s218_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S218>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S226>/Trigger'
       */
      if ((!BatteryController_Rev1_DWork.s218_UnitDelay1_DSTATE) &&
          (BatteryController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S226>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S235>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(133);
        }

        /* S-Function Block: <S235>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S226>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(132);
        }
      }

      /* End of UnitDelay: '<S218>/Unit Delay1' */
      BatteryController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S218>/Shutdown power on ECU565-128' */

      /* If: '<S227>/If' incorporates:
       *  Inport: '<S236>/In1'
       *  Inport: '<S237>/In1'
       *  Logic: '<S218>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S227>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S227>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S227>/NewValue' incorporates:
         *  ActionPort: '<S236>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S236>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(134);
        }

        /* End of Outputs for SubSystem: '<S227>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S227>/OldValue' incorporates:
         *  ActionPort: '<S237>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_e || rtb_UnitDelay_j);

        /* S-Function (motohawk_sfun_code_cover): '<S237>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(135);
        }

        /* End of Outputs for SubSystem: '<S227>/OldValue' */
      }

      /* End of If: '<S227>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S218>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* UnitDelay: '<S218>/Unit Delay3' */
      rtb_UnitDelay_j = BatteryController_Rev1_DWork.s218_UnitDelay3_DSTATE;

      /* UnitDelay: '<S218>/Unit Delay4' */
      rtb_RelationalOperator =
        BatteryController_Rev1_DWork.s218_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S221>/Clear' incorporates:
       *  TriggerPort: '<S231>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE_d != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S218>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(136);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S228>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S218>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S231>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(125);
        }
      }

      BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE_d = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S222>/Clear' incorporates:
       *  TriggerPort: '<S232>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG))
      {
        /* Outputs for Function Call SubSystem: '<S218>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S229>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(137);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S229>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S218>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S232>/motohawk_code_coverage' */
        /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(126);
        }
      }

      BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)
        ((StoreNV_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S218>/motohawk_code_coverage' */
      /* Code Coverage Test: BatteryController_Rev1/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(124);
      }

      /* Update for UnitDelay: '<S220>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration'
       */
      BatteryController_Rev1_DWork.s220_UnitDelay_DSTATE =
        (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S230>/Unit Delay' */
      BatteryController_Rev1_DWork.s230_UnitDelay_DSTATE = rtb_LogicalOperator_g;

      /* Update for UnitDelay: '<S219>/Unit Delay' */
      BatteryController_Rev1_DWork.s219_UnitDelay_DSTATE = rtb_to65535_e;

      /* Update for UnitDelay: '<S219>/Unit Delay1' */
      BatteryController_Rev1_DWork.s219_UnitDelay1_DSTATE = rtb_to65535_c;

      /* Update for UnitDelay: '<S218>/Unit Delay5' */
      BatteryController_Rev1_DWork.s218_UnitDelay5_DSTATE =
        rtb_RelationalOperator;

      /* Update for UnitDelay: '<S218>/Unit Delay2' */
      BatteryController_Rev1_DWork.s218_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S218>/Unit Delay' */
      BatteryController_Rev1_DWork.s218_UnitDelay_DSTATE = rtb_LogicalOperator_e;

      /* Update for UnitDelay: '<S218>/Unit Delay1' */
      BatteryController_Rev1_DWork.s218_UnitDelay1_DSTATE = rtb_UnitDelay_p;

      /* Update for S-Function (motohawk_sfun_dout): '<S218>/motohawk_dout' */

      /* S-Function Block: DOut2268p0004 */
      {
        DOut2268p0004_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S218>/Unit Delay3' */
      BatteryController_Rev1_DWork.s218_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S218>/Unit Delay4' */
      BatteryController_Rev1_DWork.s218_UnitDelay4_DSTATE = rtb_UnitDelay_j;
    }
  }
}
