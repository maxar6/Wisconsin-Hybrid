/*
 * Trigger_FGND_5XRTI_PERIODIC_8151p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1566
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 15 13:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_8151p0004(void)
{
  /* Named constants for Stateflow: '<S778>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S5>/Coil Control' */
    {
      /* local block i/o variables */
      real_T rtb_StateO_p;
      uint32_T rtb_DataTypeConversion2_b;
      int16_T rtb_DataTypeConversion_b;
      int16_T rtb_DataTypeConversion1_e;
      uint8_T rtb_SparkSequence_o1[8];
      uint8_T rtb_SparkSequence_o2[8];
      boolean_T rtb_RelOp_a;
      boolean_T rtb_RelOp_d;
      boolean_T rtb_RelOp_p;
      boolean_T rtb_RelOp_b;
      boolean_T rtb_motohawk_fault_action;
      boolean_T rtb_motohawk_data_read2;
      boolean_T rtb_LogicalOperator3_d;
      boolean_T rtb_LogicalOperator1_lo;
      boolean_T rtb_LogicalOperator4_g;
      real_T rtb_ESTEnable;
      real_T rtb_CounterReset;
      int32_T tmp;
      real_T tmp_0;

      /* Logic: '<S726>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S726>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_d = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S726>/motohawk_fault_action'
       *
       * Regarding '<S726>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action = GetFaultActionStatus(3);
      }

      /* Logic: '<S726>/Logical Operator1' */
      rtb_LogicalOperator1_lo = !rtb_motohawk_fault_action;

      /* S-Function (motohawk_sfun_data_read): '<S726>/motohawk_data_read2' */
      rtb_motohawk_data_read2 = ECUP_Enabled_DataStore();

      /* Logic: '<S726>/Logical Operator4' incorporates:
       *  Constant: '<S730>/Constant'
       *  RelationalOperator: '<S730>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S726>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_g = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S726>/EST Enable TDC Counter' */
      /* UnitDelay: '<S731>/CrankCounter' */
      BaseEngineController_A02_B.s731_CrankCounter =
        BaseEngineController_A02_DWork.s731_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S731>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_7664p0001 */
      if (BaseEngineController_A02_DWork.s731_motohawk_trigger1_DWORK1 == 0) {
        BaseEngineController_A02_DWork.s731_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S731>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S731>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s731_RelationalOperator1 =
        ((BaseEngineController_A02_B.s733_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S731>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S731>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S731>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S732>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_A02_B.s731_RelationalOperator1 == TRUE)) {
        /* '<S732>:1:3' */
        /* '<S732>:1:4' */
        rtb_StateO_p = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) && (BaseEngineController_A02_B.s731_RelationalOperator1 ==
                            TRUE)) {
        /* '<S732>:1:5' */
        /* '<S732>:1:6' */
        rtb_StateO_p = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S732>:1:7' */
        /* '<S732>:1:8' */
        rtb_StateO_p = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S732>:1:9' */
        /* '<S732>:1:10' */
        rtb_StateO_p = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S732>:1:11' */
        /* '<S732>:1:12' */
        rtb_StateO_p = 0.0;
      } else {
        /* '<S732>:1:14' */
        rtb_StateO_p = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S732>:1:17' */
        /* '<S732>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S732>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S732>:1:20' */
        /* '<S732>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S732>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S732>:1:23' */
        /* '<S732>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S732>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S732>:1:26' */
        /* '<S732>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S732>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S732>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S732>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S731>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S731>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_p;
      }

      /* DataTypeConversion: '<S731>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_A02_B.s731_DataTypeConversion = (int8_T)(tmp_0 < 0.0 ?
        (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S731>/CrankCounter' */
      BaseEngineController_A02_DWork.s731_CrankCounter_DSTATE = rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S726>/EST Enable TDC Counter' */

      /* Logic: '<S655>/Logical Operator1' incorporates:
       *  Logic: '<S726>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S726>/motohawk_calibration9'
       */
      BaseEngineController_A02_B.s655_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[0]));
      BaseEngineController_A02_B.s655_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[1]));
      BaseEngineController_A02_B.s655_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[2]));
      BaseEngineController_A02_B.s655_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[3]));
      BaseEngineController_A02_B.s655_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[4]));
      BaseEngineController_A02_B.s655_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[5]));
      BaseEngineController_A02_B.s655_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[6]));
      BaseEngineController_A02_B.s655_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s731_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s16_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s14_LogicalOperator2[7]));

      /* If: '<S728>/If' incorporates:
       *  Inport: '<S738>/In1'
       *  Inport: '<S739>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S728>/override_enable'
       *  UnitDelay: '<S728>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S728>/NewValue' incorporates:
         *  ActionPort: '<S738>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_A02_DWork.s728_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S728>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S728>/OldValue' incorporates:
         *  ActionPort: '<S739>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_A02_B.s15_Sum;

        /* End of Outputs for SubSystem: '<S728>/OldValue' */
      }

      /* End of If: '<S728>/If' */

      /* Sum: '<S728>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S728>/offset'
       */
      BaseEngineController_A02_B.s728_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S655>/Data Type Conversion' incorporates:
       *  Gain: '<S655>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_B.s728_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_b = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_b = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_b = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S655>/Data Type Conversion' */
      /* If: '<S729>/If' incorporates:
       *  Inport: '<S740>/In1'
       *  Inport: '<S741>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S729>/override_enable'
       *  UnitDelay: '<S729>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S729>/NewValue' incorporates:
         *  ActionPort: '<S740>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_A02_DWork.s729_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S729>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S729>/OldValue' incorporates:
         *  ActionPort: '<S741>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_A02_B.s114_SparkAdv;

        /* End of Outputs for SubSystem: '<S729>/OldValue' */
      }

      /* End of If: '<S729>/If' */

      /* Sum: '<S729>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S729>/offset'
       */
      BaseEngineController_A02_B.s729_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S655>/Data Type Conversion1' incorporates:
       *  Gain: '<S655>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_B.s729_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_e = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_e = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_e = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S655>/Data Type Conversion1' */
      /* DataTypeConversion: '<S655>/Data Type Conversion2' incorporates:
       *  Gain: '<S655>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration2'
       */
      tmp_0 = 1000.0 * (SparkMaxDuration_DataStore());
      if (tmp_0 < 4.294967296E+9) {
        if (tmp_0 >= 0.0) {
          rtb_DataTypeConversion2_b = (uint32_T)tmp_0;
        } else {
          rtb_DataTypeConversion2_b = 0U;
        }
      } else {
        rtb_DataTypeConversion2_b = MAX_uint32_T;
      }

      /* End of DataTypeConversion: '<S655>/Data Type Conversion2' */
      /* S-Function Block: <S655>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        extern int32_T SparkSeqDiag_19_LastPin;
        extern uint8_T SparkSeqDiag_19_Open[8];
        extern uint8_T SparkSeqDiag_19_Short[8];
        extern uint16_T SparkSeqDiag_19_OpenADC[8];
        extern uint16_T SparkSeqDiag_19_OnTime[8];
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = SparkSeqDiag_19_Short[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = SparkSeqDiag_19_Open[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_B.s655_SparkSequence_o3)[i] =
            SparkSeqDiag_19_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_B.s655_SparkSequence_o4)[i] =
            SparkSeqDiag_19_OnTime[i];
        }
      }

      /* RelationalOperator: '<S736>/RelOp' incorporates:
       *  Constant: '<S736>/Constant'
       */
      rtb_RelOp_a = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S727>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(11, rtb_RelOp_a);
        UpdateFault(11);
      }

      /* RelationalOperator: '<S737>/RelOp' incorporates:
       *  Constant: '<S737>/Constant'
       */
      rtb_RelOp_d = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S727>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(13, rtb_RelOp_d);
        UpdateFault(13);
      }

      /* RelationalOperator: '<S734>/RelOp' incorporates:
       *  Constant: '<S734>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S727>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(10, rtb_RelOp_p);
        UpdateFault(10);
      }

      /* RelationalOperator: '<S735>/RelOp' incorporates:
       *  Constant: '<S735>/Constant'
       */
      rtb_RelOp_b = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S727>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(12, rtb_RelOp_b);
        UpdateFault(12);
      }

      /* S-Function (motohawk_sfun_data_write): '<S726>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action;
      }

      /* Update for UnitDelay: '<S728>/Unit Delay' */
      BaseEngineController_A02_DWork.s728_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S729>/Unit Delay' */
      BaseEngineController_A02_DWork.s729_UnitDelay_DSTATE = rtb_CounterReset;

      /* S-Function Block: <S655>/Spark Sequence Update Spark Sequence */
      {
        extern uint8_T motohawk_encoder_status;
        S_SeqOutAttributes SeqOutAttr;
        E_ResourceBehaviour behaviour;
        NativeError_S sErrorResult;
        E_SeqOutCond condition;
        int32_T resource;
        int32_T index;
        int32_T count;
        int32_T cyl;
        SeqOutAttr.uValidAttributesMask = USE_SEQ_PULSE_COND | USE_SEQ_TIMING |
          USE_SEQ_UPDATE_MODE | USE_SEQ_MAX_DURATION | USE_SEQ_MIN_DURATION;
        SeqOutAttr.eUpdateMode = SEQ_UPDATE_OS_PROTECTED;
        SeqOutAttr.TimingObj.eCtrlMode = ANGLE_CTRL;
        SeqOutAttr.uMinPulseDurationInMicroSecs = 1500;
        condition = SEQ_DISABLED;
        if (motohawk_encoder_status >= (uint8_T) ENC_SYNC_CAM_UNKNOWN) {
          condition = SEQ_DISNEXT;
        }

        index = 0;
        if ((condition != SEQ_DISABLED) && (((EST_SequenceType_DataStore()) == 2)
             || ((EST_SequenceType_DataStore()) == 3))) {
          int32_T next_index = 0;
          int16_T max_angle_diff = 0;
          int16_T angle_diff;
          int16_T current_angle;
          current_angle = 720*16 - GetEncoderEngAngle();
          for (index=0; index < (EncoderNumCylinders_DataStore()); index++) {
            int16_T cylinder_angle;
            cyl = (EncoderTDCOrder_DataStore())[index];
            cylinder_angle = (EncoderTDCAngles_DataStore())[cyl] -
              rtb_DataTypeConversion_b;
            angle_diff = current_angle - cylinder_angle;
            while (angle_diff < 0) {
              angle_diff += 720*16;
            }

            while (angle_diff >= 720*16) {
              angle_diff -= 720*16;
            }

            if (angle_diff > max_angle_diff) {
              max_angle_diff = angle_diff;
              next_index = index;
            }
          }

          index = next_index;

          {
            extern real_T NextSparkAngle;
            NextSparkAngle = (real_T) (EncoderTDCAngles_DataStore())
              [(EncoderTDCOrder_DataStore())[index]]/16.0;
          }

          {
            extern uint8_T NextCylinderToSpark;
            NextCylinderToSpark = (uint8_T) (EncoderTDCOrder_DataStore())[index]
              +1;
          }
        }

        for (count=0; count < (EncoderNumCylinders_DataStore()); count++) {
          boolean_T bValid = 1;
          cyl = (EncoderTDCOrder_DataStore())[index];
          if (condition != SEQ_DISABLED) {
            condition = ((BaseEngineController_A02_B.s655_LogicalOperator1)[cyl])
              ? SEQ_ENABLED : SEQ_DISNEXT;
          }

          if ((EST_SequenceType_DataStore()) == 0) {
            SeqOutAttr.u1AffectedPulse = 0;
            resource = (EST_InitialPin_DataStore()) + cyl;
            behaviour = BEHAVIOUR_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 1) {
            SeqOutAttr.u1AffectedPulse = 0;
            resource = (EST_InitialPin_DataStore()) + cyl;
            behaviour = BEHAVIOUR_BANK_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 2) {
            SeqOutAttr.u1AffectedPulse = (ESTPinMapArr_PulseNum_19_DataStore())
              [cyl];
            resource = (ESTPinMapArr_Resource_19_DataStore())[cyl];
            behaviour = BEHAVIOUR_EST_SEQ;
          } else if ((EST_SequenceType_DataStore()) == 3) {
            bValid = (cyl < MAX_MUX_PULSES_SUPPORTED);
            SeqOutAttr.u1AffectedPulse = cyl;
            resource = (EST_InitialPin_DataStore());
            behaviour = BEHAVIOUR_MUX_EST_SEQ;
          }

          if (bValid) {
            SeqOutAttr.eResourceCondition = condition;
            SeqOutAttr.TimingObj.s2StartAngle = rtb_DataTypeConversion_b;
            SeqOutAttr.TimingObj.s2StopAngle = rtb_DataTypeConversion1_e;
            SeqOutAttr.u4MaxDurationInMicroSecs = rtb_DataTypeConversion2_b;
            SeqOutAttr.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
            SeqOutAttr.eDiagCond = RES_ENABLED;
            sErrorResult = SetResourceAttributesSequenceOut((E_ModuleResource)
              resource, &SeqOutAttr, behaviour);

            {
              extern uint8_T EST_Spark;
              if (SUCCESS(sErrorResult))
                EST_Spark = 0;
              else
                EST_Spark = (uint8_T) GetErrorCode(sErrorResult);
            }
          }

          index++;
          if (index >= (EncoderNumCylinders_DataStore())) {
            index = 0;
          }
        }
      }
    }
  }
}
