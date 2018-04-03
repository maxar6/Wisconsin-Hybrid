/*
 * Trigger_BGND_BASE_PERIODIC_4167p0001.c
 *
 * Real-Time Workshop code generation for Simulink model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1518
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_BGND_BASE_PERIODIC_4167p0001(void)
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

      /* Logic: '<S400>/Logical Operator' incorporates:
       *  Logic: '<S400>/Logical Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S400>/motohawk_calibration'
       *  UnitDelay: '<S400>/Unit Delay'
       */
      rtb_LogicalOperator = ((!(ProcessorReboot_DataStore())) &&
        BuckyWagon_01_DWork.s400_UnitDelay_DSTATE);

      /* UnitDelay: '<S410>/Unit Delay' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s410_UnitDelay_DSTATE;

      /* S-Function Block: <S398>/motohawk_ain5 Resource: ECUP */
      {
        extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        ECUP_AnalogInput_Get(&rtb_motohawk_ain5, NULL);
      }

      /* RelationalOperator: '<S398>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_ain): '<S398>/motohawk_ain5'
       *  S-Function (motohawk_sfun_calibration): '<S398>/motohawk_calibration'
       */
      rtb_RelationalOperator = (rtb_motohawk_ain5 >= ((uint16_T)
        (ECUP_Threshold_DataStore())));

      /* Switch: '<S399>/Switch' incorporates:
       *  Constant: '<S399>/Constant1'
       *  DataTypeConversion: '<S399>/Data Type Conversion'
       *  Sum: '<S399>/Sum'
       *  UnitDelay: '<S399>/Unit Delay'
       */
      if (rtb_RelationalOperator) {
        tmp = (uint32_T)(BuckyWagon_01_DWork.s399_UnitDelay_DSTATE + 1);
        if (tmp > 65535U) {
          rtb_to65535_i = MAX_uint16_T;
        } else {
          rtb_to65535_i = (uint16_T)tmp;
        }
      } else {
        rtb_to65535_i = 0U;
      }

      /* Logic: '<S399>/Logical Operator' */
      rtb_LogicalOperator_l = !rtb_RelationalOperator;

      /* Switch: '<S399>/Switch1' incorporates:
       *  Constant: '<S399>/Constant3'
       *  DataTypeConversion: '<S399>/Data Type Conversion1'
       *  Sum: '<S399>/Sum1'
       *  UnitDelay: '<S399>/Unit Delay1'
       */
      if (rtb_LogicalOperator_l) {
        tmp = (uint32_T)(BuckyWagon_01_DWork.s399_UnitDelay1_DSTATE + 1);
        if (tmp > 65535U) {
          rtb_to65535_o = MAX_uint16_T;
        } else {
          rtb_to65535_o = (uint16_T)tmp;
        }
      } else {
        rtb_to65535_o = 0U;
      }

      /* Logic: '<S410>/Logical Operator2' incorporates:
       *  Constant: '<S399>/Constant2'
       *  Constant: '<S399>/Constant4'
       *  Logic: '<S399>/Logical Operator1'
       *  Logic: '<S399>/Logical Operator2'
       *  Logic: '<S410>/Logical Operator'
       *  Logic: '<S410>/Logical Operator1'
       *  RelationalOperator: '<S399>/Relational Operator1'
       *  RelationalOperator: '<S399>/Relational Operator2'
       */
      rtb_LogicalOperator_l = ((rtb_UnitDelay_f || (rtb_RelationalOperator &&
        (rtb_to65535_i >= 2))) && (!(rtb_LogicalOperator_l && (rtb_to65535_o >=
        10))));

      /* Logic: '<S398>/Logical Operator' incorporates:
       *  Logic: '<S398>/Logical Operator1'
       *  Logic: '<S398>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S398>/motohawk_data_read'
       */
      rtb_LogicalOperator_f = ((!rtb_LogicalOperator) && (rtb_LogicalOperator_l ||
        MPRD_KeepAlive_DataStore()));

      /* Outputs for trigger SubSystem: '<S398>/Post Shutdown two ticks before MPRD off' incorporates:
       *  TriggerPort: '<S403>/Trigger'
       */
      if ((!rtb_LogicalOperator_f) &&
          (BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S403>/Function-Call Generator' incorporates:
         *  SubSystem: '<S403>/Post Shutdown two ticks before MPRD off'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S413>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(147);
        }

        /* S-Function Block: <S413>/motohawk_event_call */
        {
          /* post the event */
          PostEvent(SHUTDOWN_EVENT);
        }

        /* S-Function (motohawk_sfun_code_cover): '<S403>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(146);
        }
      }

      BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_LogicalOperator_f ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S398>/Post Shutdown two ticks before MPRD off' */

      /* UnitDelay: '<S398>/Unit Delay2' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s398_UnitDelay2_DSTATE;

      /* Outputs for enable and trigger SubSystem: '<S398>/Processor Reboot' incorporates:
       *  EnablePort: '<S404>/Enable'
       *  TriggerPort: '<S404>/Trigger'
       *  UnitDelay: '<S398>/Unit Delay5'
       */
      if (BuckyWagon_01_DWork.s398_UnitDelay5_DSTATE) {
        if ((!BuckyWagon_01_DWork.s398_UnitDelay2_DSTATE) &&
            (BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE != ZERO_ZCSIG))
        {
          /* S-Function Block: <S404>/Force Module Reset Force Module Reset */
          {
            extern NativeError_S ModuleSupport_Reset(void);
            ModuleSupport_Reset();
          }

          /* S-Function (motohawk_sfun_code_cover): '<S404>/motohawk_code_coverage' */
          /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Processor Reboot */
          {
            extern void MH_CodeCovered(uint32_T idx);
            MH_CodeCovered(148);
          }
        }

        BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
          (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
      }

      BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay_f ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S398>/Processor Reboot' */

      /* UnitDelay: '<S398>/Unit Delay' */
      rtb_UnitDelay_i = BuckyWagon_01_DWork.s398_UnitDelay_DSTATE;

      /* Outputs for trigger SubSystem: '<S398>/Save NV Vars one tick before MPRD off' incorporates:
       *  TriggerPort: '<S405>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s398_UnitDelay_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
           != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S405>/Function-Call Generator' incorporates:
         *  SubSystem: '<S405>/Save NV Vars one tick before MPRD off'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S414>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(150);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S414>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S405>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(149);
        }
      }

      BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
        (uint8_T)(rtb_UnitDelay_i ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S398>/Save NV Vars one tick before MPRD off' */

      /* UnitDelay: '<S398>/Unit Delay1' */
      rtb_UnitDelay1 = BuckyWagon_01_DWork.s398_UnitDelay1_DSTATE;

      /* Outputs for trigger SubSystem: '<S398>/Shutdown power on ECU565-128' incorporates:
       *  TriggerPort: '<S406>/Trigger'
       */
      if ((!BuckyWagon_01_DWork.s398_UnitDelay1_DSTATE) &&
          (BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE !=
           ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S406>/Function-Call Generator' incorporates:
         *  SubSystem: '<S406>/Shutdown power on ECU565-128'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S415>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(152);
        }

        /* S-Function Block: <S415>/motohawk_shutdown_power */
        {
          /* Shut off power on PCM-128.  Other modules will ignore this call */
          SendCloseOSMessage();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S406>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128 */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(151);
        }
      }

      BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = (uint8_T)
        (rtb_UnitDelay1 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S398>/Shutdown power on ECU565-128' */

      /* If: '<S407>/If' incorporates:
       *  ActionPort: '<S416>/Action Port'
       *  ActionPort: '<S417>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S407>/override_enable'
       *  SubSystem: '<S407>/NewValue'
       *  SubSystem: '<S407>/OldValue'
       */
      if ((MPRD_ovr_DataStore())) {
        /* Inport: '<S416>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S407>/new_value'
         */
        rtb_Merge = (MPRD_new_DataStore());

        /* S-Function (motohawk_sfun_code_cover): '<S416>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(153);
        }
      } else {
        /* Inport: '<S417>/In1' incorporates:
         *  Logic: '<S398>/Logical Operator3'
         */
        rtb_Merge = (rtb_LogicalOperator_f || rtb_UnitDelay_f);

        /* S-Function (motohawk_sfun_code_cover): '<S417>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(154);
        }
      }

      /* S-Function (motohawk_sfun_data_write): '<S398>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MPRD */
      {
        MPRD_DataStore() = rtb_Merge;
      }

      /* Logic: '<S398>/Logical Operator4' */
      rtb_LogicalOperator4 = !rtb_LogicalOperator_l;

      /* S-Function (motohawk_sfun_data_write): '<S398>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Shutdown_Req */
      {
        Shutdown_Req_DataStore() = rtb_LogicalOperator4;
      }

      /* S-Function (motohawk_sfun_dout): '<S398>/motohawk_dout' */
      /* S-Function Block: MPRD */
      {
      }

      /* UnitDelay: '<S398>/Unit Delay3' */
      rtb_UnitDelay_f = BuckyWagon_01_DWork.s398_UnitDelay3_DSTATE;

      /* UnitDelay: '<S398>/Unit Delay4' */
      rtb_RelationalOperator = BuckyWagon_01_DWork.s398_UnitDelay4_DSTATE;

      /* Outputs for trigger SubSystem: '<S401>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration'
       *  TriggerPort: '<S411>/Trigger'
       */
      if ((!(RestoreNVFactoryDefaults_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S411>/Function-Call Generator' incorporates:
         *  SubSystem: '<S398>/motohawk_restore_nvmem'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S408>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(155);
        }

        /* S-Function (motohawk_sfun_restore_nvmem): '<S408>/motohawk_event_call' */
        /* S-Function Restore Factory Defaults */
        {
          NonVolatile_RestoreDefaultNonVolatile();
          NonVolatile_NonVolatileStatus_Reset();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S411>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(144);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f = (uint8_T)
        ((RestoreNVFactoryDefaults_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
         ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S401>/Clear' */

      /* Outputs for trigger SubSystem: '<S402>/Clear' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S402>/motohawk_calibration'
       *  TriggerPort: '<S412>/Trigger'
       */
      if ((!(StoreNV_DataStore())) &&
          (BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE != ZERO_ZCSIG)) {
        /* S-Function (fcncallgen): '<S412>/Function-Call Generator' incorporates:
         *  SubSystem: '<S398>/motohawk_store_nvmem'
         */

        /* S-Function (motohawk_sfun_code_cover): '<S409>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(156);
        }

        /* S-Function (motohawk_sfun_store_nvmem): '<S409>/motohawk_event_call' */
        {
          extern void NonVolatile_StoreNonVolatile(void);
          NonVolatile_StoreNonVolatile();
        }

        /* S-Function (motohawk_sfun_code_cover): '<S412>/motohawk_code_coverage' */
        /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(145);
        }
      }

      BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE = (uint8_T)((StoreNV_DataStore
        ()) ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

      /* end of Outputs for SubSystem: '<S402>/Clear' */

      /* S-Function (motohawk_sfun_code_cover): '<S398>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Main Power Relay/Background */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(143);
      }

      /* Update for UnitDelay: '<S400>/Unit Delay' incorporates:
       *  Update for S-Function (motohawk_sfun_calibration): '<S400>/motohawk_calibration'
       */
      BuckyWagon_01_DWork.s400_UnitDelay_DSTATE = (ProcessorReboot_DataStore());

      /* Update for UnitDelay: '<S410>/Unit Delay' */
      BuckyWagon_01_DWork.s410_UnitDelay_DSTATE = rtb_LogicalOperator_l;

      /* Update for UnitDelay: '<S399>/Unit Delay' */
      BuckyWagon_01_DWork.s399_UnitDelay_DSTATE = rtb_to65535_i;

      /* Update for UnitDelay: '<S399>/Unit Delay1' */
      BuckyWagon_01_DWork.s399_UnitDelay1_DSTATE = rtb_to65535_o;

      /* Update for UnitDelay: '<S398>/Unit Delay5' */
      BuckyWagon_01_DWork.s398_UnitDelay5_DSTATE = rtb_RelationalOperator;

      /* Update for UnitDelay: '<S398>/Unit Delay2' */
      BuckyWagon_01_DWork.s398_UnitDelay2_DSTATE = rtb_UnitDelay1;

      /* Update for UnitDelay: '<S398>/Unit Delay' */
      BuckyWagon_01_DWork.s398_UnitDelay_DSTATE = rtb_LogicalOperator_f;

      /* Update for UnitDelay: '<S398>/Unit Delay1' */
      BuckyWagon_01_DWork.s398_UnitDelay1_DSTATE = rtb_UnitDelay_i;

      /* Update for S-Function (motohawk_sfun_dout): '<S398>/motohawk_dout' */

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

      /* Update for UnitDelay: '<S398>/Unit Delay3' */
      BuckyWagon_01_DWork.s398_UnitDelay3_DSTATE = rtb_LogicalOperator;

      /* Update for UnitDelay: '<S398>/Unit Delay4' */
      BuckyWagon_01_DWork.s398_UnitDelay4_DSTATE = rtb_UnitDelay_f;
    }
  }
}
