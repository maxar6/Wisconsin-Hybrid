/*
 * Trigger_BGND_BASE_PERIODIC_4279p0005.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1520
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 23 14:25:32 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_BGND_BASE_PERIODIC_4279p0005(void)
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

      /* Logic: '<S403>/Logical Operator' incorporates:
       *  Logic: '<S403>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
       *  UnitDelay: '<S403>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BuckyWagon_01_DWork.s403_UnitDelay_DSTATE);

      /* UnitDelay: '<S413>/Unit Delay' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s413_UnitDelay_DSTATE;

      /* S-Function Block: <S401>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S401>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S401>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S402>/Switch' incorporates:
       *  Constant: '<S402>/Constant1'
       *  Sum: '<S402>/Sum'
       */
      if (rtb_RelationalOperator) {
        /* Sum: '<S402>/Sum' incorporates:
         *  UnitDelay: '<S402>/Unit Delay'
         */
        tmp = (uint32_T)BuckyWagon_01_DWork.s402_UnitDelay_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S402>/Sum' */
        rtb_to65535_i = (uint16_T)tmp;
      } else {
        rtb_to65535_i = 0U;
      }

      /* End of Switch: '<S402>/Switch' */

      /* Logic: '<S402>/Logical Operator' */
      rtb_LogicalOperator_l = !rtb_RelationalOperator;

      /* Switch: '<S402>/Switch1' incorporates:
       *  Constant: '<S402>/Constant3'
       *  Sum: '<S402>/Sum1'
       */
      if (rtb_LogicalOperator_l) {
        /* Sum: '<S402>/Sum1' incorporates:
         *  UnitDelay: '<S402>/Unit Delay1'
         */
        tmp = (uint32_T)BuckyWagon_01_DWork.s402_UnitDelay1_DSTATE + 1U;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        /* End of Sum: '<S402>/Sum1' */
        rtb_to65535_o = (uint16_T)tmp;
      } else {
        rtb_to65535_o = 0U;
      }

      /* End of Switch: '<S402>/Switch1' */

      /* Logic: '<S413>/Logical Operator2' incorporates:
       *  Constant: '<S402>/Constant2'
       *  Constant: '<S402>/Constant4'
       *  Logic: '<S402>/Logical Operator1'
       *  Logic: '<S402>/Logical Operator2'
       *  Logic: '<S413>/Logical Operator'
       *  Logic: '<S413>/Logical Operator1'
       *  RelationalOperator: '<S402>/Relational Operator1'
       *  RelationalOperator: '<S402>/Relational Operator2'
       */
      rtb_LogicalOperator_l = ((rtb_UnitDelay_f || (rtb_RelationalOperator &&
        (rtb_to65535_i >= 2))) && (!(rtb_LogicalOperator_l && (rtb_to65535_o >=
        10))));

      /* Logic: '<S401>/Logical Operator' incorporates:
       *  Logic: '<S401>/Logical Operator1'
       *  Logic: '<S401>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S401>/motohawk_data_read'
       */
      rtb_LogicalOperator_f = ((!rtb_LogicalOperator) && (rtb_LogicalOperator_l ||
        MPRD_KeepAlive_DataStore()));

      /* Outputs for Triggered SubSystem: '<S401>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S406>/Trigger'
       */
      if ((!rtb_LogicalOperator_f) &&
          (BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S406>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S416>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(147);
        }

        /* S-Function Block: <S416>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* End of Outputs for SubSystem: '<S406>/Post Shutdown two ticks before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S406>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(146);
        }
      }

      BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator_f ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S401>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S401>/Unit Delay2' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s401_UnitDelay2_DSTATE;

      /* Outputs for Enabled and Triggered SubSystem: '<S401>/Processor Reboot' incorporates:
       *  EnablePort: '<S407>/Enable'
       *  TriggerPort: '<S407>/Trigger'
       */
      /* UnitDelay: '<S401>/Unit Delay5' incorporates:
       *  UnitDelay: '<S401>/Unit Delay2'
       */
      if (BuckyWagon_01_DWork.s401_UnitDelay5_DSTATE) {
        /* Outputs for Enabled and Triggered SubSystem: '<S401>/Processor Reboot' incorporates:
         *  EnablePort: '<S407>/Enable'
         *  TriggerPort: '<S407>/Trigger'
         */
        if ((!BuckyWagon_01_DWork.s401_UnitDelay2_DSTATE) &&
            (BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE != ZERO_ZCSIG))
        {
          /* S-Function Block: <S407>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S407>/motohawk_code_coverage' */
          /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(148);
          }
        }

        BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      /* End of UnitDelay: '<S401>/Unit Delay5' */
      BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S401>/Processor Reboot' */

      /* UnitDelay: '<S401>/Unit Delay' */
      rtb_UnitDelay_i = BuckyWagon_01_DWork.s401_UnitDelay_DSTATE;

      /* Outputs for Triggered SubSystem: '<S401>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S408>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s401_UnitDelay_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S408>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S417>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(150);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S417>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S408>/Save NV Vars one tick before MPRD off' */

        /* S-Function (motohawk_sfun_code_cover): '<S408>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(149);
        }
      }

      /* End of UnitDelay: '<S401>/Unit Delay' */
      BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay_i ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S401>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S401>/Unit Delay1' */
      rtb_UnitDelay1 = BuckyWagon_01_DWork.s401_UnitDelay1_DSTATE;

      /* Outputs for Triggered SubSystem: '<S401>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S409>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s401_UnitDelay1_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE !=
           ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S409>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S418>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(152);
        }

        /* S-Function Block: <S418>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* End of Outputs for SubSystem: '<S409>/Shutdown power on ECU565-128' */

        /* S-Function (motohawk_sfun_code_cover): '<S409>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(151);
        }
      }

      /* End of UnitDelay: '<S401>/Unit Delay1' */
      BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of Outputs for SubSystem: '<S401>/Shutdown power on ECU565-128' */

      /* If: '<S410>/If' incorporates:
       *  Inport: '<S419>/In1'
       *  Inport: '<S420>/In1'
       *  Logic: '<S401>/Logical Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S410>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S410>/override_enable'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S410>/NewValue' incorporates:
         *  ActionPort: '<S419>/Action Port'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S419>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(153);
        }

        /* End of Outputs for SubSystem: '<S410>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S410>/OldValue' incorporates:
         *  ActionPort: '<S420>/Action Port'
         */
        rtb_Merge = (rtb_LogicalOperator_f || rtb_UnitDelay_f);

        /* S-Function (motohawk_sfun_code_cover): '<S420>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(154);
        }

        /* End of Outputs for SubSystem: '<S410>/OldValue' */
      }

      /* End of If: '<S410>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S401>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S401>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_LogicalOperator_l;

      /* S-Function (motohawk_sfun_data_write): '<S401>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* UnitDelay: '<S401>/Unit Delay3' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s401_UnitDelay3_DSTATE;

      /* UnitDelay: '<S401>/Unit Delay4' */
      rtb_RelationalOperator = BuckyWagon_01_DWork.s401_UnitDelay4_DSTATE;

      /* Outputs for Triggered SubSystem: '<S404>/Clear' incorporates:
       *  TriggerPort: '<S414>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration' */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S401>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S411>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(155);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S411>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* End of Outputs for SubSystem: '<S401>/motohawk_restore_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S414>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(144);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration' */

      /* Outputs for Triggered SubSystem: '<S405>/Clear' incorporates:
       *  TriggerPort: '<S415>/Trigger'
       */
      /* S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration' */
      if ((!(StoreNV_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* Outputs for Function Call SubSystem: '<S401>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S412>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(156);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S412>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* End of Outputs for SubSystem: '<S401>/motohawk_store_nvmem' */

        /* S-Function (motohawk_sfun_code_cover): '<S415>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(145);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)((StoreNV_DataStore
        ()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* End of S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration' */

      /* S-Function (motohawk_sfun_code_cover): '<S401>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(143);
      }

      /* Update for UnitDelay: '<S403>/Unit Delay' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
       */
      BuckyWagon_01_DWork.s403_UnitDelay_DSTATE = (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S413>/Unit Delay' */
      BuckyWagon_01_DWork.s413_UnitDelay_DSTATE = rtb_LogicalOperator_l;

      /* Update for UnitDelay: '<S402>/Unit Delay' */
      BuckyWagon_01_DWork.s402_UnitDelay_DSTATE = rtb_to65535_i;

      /* Update for UnitDelay: '<S402>/Unit Delay1' */
      BuckyWagon_01_DWork.s402_UnitDelay1_DSTATE = rtb_to65535_o;

      /* Update for UnitDelay: '<S401>/Unit Delay5' */
      BuckyWagon_01_DWork.s401_UnitDelay5_DSTATE = rtb_RelationalOperator;

      /* Update for UnitDelay: '<S401>/Unit Delay2' */
      BuckyWagon_01_DWork.s401_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S401>/Unit Delay' */
      BuckyWagon_01_DWork.s401_UnitDelay_DSTATE = rtb_LogicalOperator_f;

      /* Update for UnitDelay: '<S401>/Unit Delay1' */
      BuckyWagon_01_DWork.s401_UnitDelay1_DSTATE = rtb_UnitDelay_i;

      /* Update for S-Function (motohawk_sfun_dout): '<S401>/motohawk_dout' */

      /* S-Function Block: DOut4231p0005 */
      {
        DOut4231p0005_DiscreteOutput_Set(rtb_Merge);
      }

      /* Update for UnitDelay: '<S401>/Unit Delay3' */
      BuckyWagon_01_DWork.s401_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S401>/Unit Delay4' */
      BuckyWagon_01_DWork.s401_UnitDelay4_DSTATE = rtb_UnitDelay_f;
    }
  }
}
