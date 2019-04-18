/*
 * Trigger_BGND_BASE_PERIODIC_1070p0009.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1570
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Apr 17 19:04:03 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_BGND_BASE_PERIODIC_1070p0009(void)
{
  {
    /* Output and update for function-call system: '<S3>/Background' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain5;
      boolean_T rtb_Merge;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator;
      boolean_T rtb_UnitDelay_f;
      boolean_T rtb_RelationalOperator;
      uint16_T rtb_to65535_i;
      boolean_T rtb_LogicalOperator_l;
      uint16_T rtb_to65535_o;
      boolean_T rtb_LogicalOperator_f;
      boolean_T rtb_UnitDelay_i;
      boolean_T rtb_UnitDelay1;
      uint32_T tmp;

      /* Logic: '<S371>/Logical Operator' incorporates:
       *  Logic: '<S371>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration'
       *  UnitDelay: '<S371>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BuckyWagon_01_DWork.s371_UnitDelay_DSTATE);

      /* UnitDelay: '<S381>/Unit Delay' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s381_UnitDelay_DSTATE;

      /* S-Function Block: <S369>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S369>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S369>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S370>/Switch' incorporates:
       *  Constant: '<S370>/Constant1'
       *  Sum: '<S370>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S370>/Sum' incorporates:
         *  UnitDelay: '<S370>/Unit Delay'
         */
        tmp = (uint32_T)BuckyWagon_01_DWork.s370_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S370>/Sum' */
        rtb_to65535_i = (uint16_T)tmp;
      } else {
        rtb_to65535_i = 0U;
      }

      /* End of Switch: '<S370>/Switch' */

      /* Logic: '<S370>/Logical Operator' */
      rtb_LogicalOperator_l = !rtb_RelationalOperator;

      /* Switch: '<S370>/Switch1' incorporates:
       *  Constant: '<S370>/Constant3'
       *  Sum: '<S370>/Sum1'
       */
      if (rtb_LogicalOperator_l) {
        /* Sum: '<S370>/Sum1' incorporates:
         *  UnitDelay: '<S370>/Unit Delay1'
         */
        tmp = (uint32_T)BuckyWagon_01_DWork.s370_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S370>/Sum1' */
        rtb_to65535_o = (uint16_T)tmp;
      } else {
        rtb_to65535_o = 0U;
      }

      /* End of Switch: '<S370>/Switch1' */

      /* Logic: '<S381>/Logical Operator2' incorporates:
       *  Constant: '<S370>/Constant2'
       *  Constant: '<S370>/Constant4'
       *  Logic: '<S370>/Logical Operator1'
       *  Logic: '<S370>/Logical Operator2'
       *  Logic: '<S381>/Logical Operator'
       *  Logic: '<S381>/Logical Operator1'
       *  RelationalOperator: '<S370>/Relational Operator1'
       *  RelationalOperator: '<S370>/Relational Operator2'
       */
      rtb_LogicalOperator_l = ((rtb_UnitDelay_f || (rtb_RelationalOperator &&
        (rtb_to65535_i >= 2))) && (!(rtb_LogicalOperator_l && (rtb_to65535_o >=
        10))));

      /* Logic: '<S369>/Logical Operator' incorporates:
       *  Logic: '<S369>/Logical Operator1'
       *  Logic: '<S369>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
       */
      rtb_LogicalOperator_f = ((!rtb_LogicalOperator) && (rtb_LogicalOperator_l ||
        MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S369>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S374>/Trigger'
       */
      if ((!rtb_LogicalOperator_f) &&
          (BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S374>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S384>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(132);
        }

        /* S-Function Block: <S384>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S374>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S374>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(131);
        }
      }

      BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator_f ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S369>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S369>/Unit Delay2' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s369_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S369>/Processor Reboot' incorporates:
       *  EnablePort: '<S375>/Enable'
       *  TriggerPort: '<S375>/Trigger'
       */
      /* UnitDelay: '<S369>/Unit Delay5' incorporates:
       *  UnitDelay: '<S369>/Unit Delay2'
       */
      if (BuckyWagon_01_DWork.s369_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S369>/Processor Reboot' incorporates:
         *  EnablePort: '<S375>/Enable'
         *  TriggerPort: '<S375>/Trigger'
         */
        if ((!BuckyWagon_01_DWork.s369_UnitDelay2_DSTATE) &&
            (BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE != ZERO_ZCSIG))
        {
          /* S-Function Block: <S375>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S375>/motohawk_code_coverage' */
          /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(133);
          }
        }

        BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S369>/Unit Delay5' */
      BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S369>/Processor Reboot' */

      /* UnitDelay: '<S369>/Unit Delay' */
      rtb_UnitDelay_i = BuckyWagon_01_DWork.s369_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S369>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S376>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s369_UnitDelay_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S376>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(135);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S385>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S376>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S376>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(134);
        }
      }

      /* End of UnitDelay: '<S369>/Unit Delay' */
      BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay_i ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S369>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S369>/Unit Delay1' */
      rtb_UnitDelay1 = BuckyWagon_01_DWork.s369_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S369>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S377>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s369_UnitDelay1_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S377>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(137);
        }

        /* S-Function Block: <S386>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S377>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S377>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(136);
        }
      }

      /* End of UnitDelay: '<S369>/Unit Delay1' */
      BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S369>/Shutdown power on ECU565-128' */

      /* If: '<S378>/If' incorporates:
       *  Inport: '<S387>/In1'
       *  Inport: '<S388>/In1'
       *  Logic: '<S369>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S378>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S378>/NewValue' incorporates:
         *  ActionPort: '<S387>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S387>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(138);
        }

        /* End of Outputs for SubSystem: '<S378>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S378>/OldValue' incorporates:
         *  ActionPort: '<S388>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_f || rtb_UnitDelay_f);

        /* S-Function (motohawk_sfun_code_cover): '<S388>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(139);
        }

        /* End of Outputs for SubSystem: '<S378>/OldValue' */
      }

      /* End of If: '<S378>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S369>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S369>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_LogicalOperator_l;

      /* S-Function (motohawk_sfun_data_write): '<S369>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S369>/Unit Delay3' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s369_UnitDelay3_DSTATE;

      /* UnitDelay: '<S369>/Unit Delay4' */
      rtb_RelationalOperator = BuckyWagon_01_DWork.s369_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S372>/Clear' incorporates:
       *  TriggerPort: '<S382>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S369>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S379>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(140);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S379>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S369>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S382>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(129);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S373>/Clear' incorporates:
       *  TriggerPort: '<S383>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S369>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S380>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(141);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S380>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S369>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S383>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(130);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)((StoreNV_DataStore
        ()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S369>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(128);
      }

      /* Update for UnitDelay: '<S371>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration'
       */
      BuckyWagon_01_DWork.s371_UnitDelay_DSTATE = (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S381>/Unit Delay' */
      BuckyWagon_01_DWork.s381_UnitDelay_DSTATE = rtb_LogicalOperator_l;

      /* Update for UnitDelay: '<S370>/Unit Delay' */
      BuckyWagon_01_DWork.s370_UnitDelay_DSTATE = rtb_to65535_i;

      /* Update for UnitDelay: '<S370>/Unit Delay1' */
      BuckyWagon_01_DWork.s370_UnitDelay1_DSTATE = rtb_to65535_o;

      /* Update for UnitDelay: '<S369>/Unit Delay5' */
      BuckyWagon_01_DWork.s369_UnitDelay5_DSTATE = rtb_RelationalOperator;

      /* Update for UnitDelay: '<S369>/Unit Delay2' */
      BuckyWagon_01_DWork.s369_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S369>/Unit Delay' */
      BuckyWagon_01_DWork.s369_UnitDelay_DSTATE = rtb_LogicalOperator_f;

      /* Update for UnitDelay: '<S369>/Unit Delay1' */
      BuckyWagon_01_DWork.s369_UnitDelay1_DSTATE = rtb_UnitDelay_i;

      /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout' */

      /* S-Function Block: DOut1023p0011 */
      {
        DOut1023p0011_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S369>/Unit Delay3' */
      BuckyWagon_01_DWork.s369_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S369>/Unit Delay4' */
      BuckyWagon_01_DWork.s369_UnitDelay4_DSTATE = rtb_UnitDelay_f;
    }
  }
}
