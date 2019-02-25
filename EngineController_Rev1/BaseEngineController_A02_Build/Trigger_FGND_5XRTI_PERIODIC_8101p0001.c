/*
 * Trigger_FGND_5XRTI_PERIODIC_8101p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1640
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_8101p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S13>/Coil Control' */
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

      /* Logic: '<S784>/Logical Operator3' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S784>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_d = !DelayedEngineShutdownAction_DataStore();

      /* S-Function (motohawk_sfun_fault_action): '<S784>/motohawk_fault_action'
       *
       * Regarding '<S784>/motohawk_fault_action':
         Get Fault Action Status: EngineShutdown
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action = GetFaultActionStatus(4);
      }

      /* Logic: '<S784>/Logical Operator1' */
      rtb_LogicalOperator1_lo = !rtb_motohawk_fault_action;

      /* S-Function (motohawk_sfun_data_read): '<S784>/motohawk_data_read2' */
      rtb_motohawk_data_read2 = ECUP_Enabled_DataStore();

      /* Logic: '<S784>/Logical Operator4' incorporates:
       *  Constant: '<S788>/Constant'
       *  RelationalOperator: '<S788>/RelOp'
       *  S-Function (motohawk_sfun_data_read): '<S784>/motohawk_data_read3'
       */
      rtb_LogicalOperator4_g = !(((uint8_T)EngineState_DataStore()) == 1);

      /* Outputs for Atomic SubSystem: '<S784>/EST Enable TDC Counter' */
      /* UnitDelay: '<S789>/CrankCounter' */
      BaseEngineController_A02_B.s789_CrankCounter =
        BaseEngineController_A02_DWork.s789_CrankCounter_DSTATE;

      /* S-Function (motohawk_sfun_trigger): '<S789>/motohawk_trigger1' */
      /* Enable for Trigger_FGND_TDC_EVENT_7608p0001 */
      if (BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 == 0) {
        BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 = 1;
      }

      /* RelationalOperator: '<S789>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S789>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s789_RelationalOperator1 =
        ((BaseEngineController_A02_B.s791_Switch1 >= ((uint8_T)
           (SparkEnableTDCCounts_DataStore()))));

      /* MATLAB Function Block: '<S789>/EST Enable TDC Counter Stateflow' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S789>/motohawk_data_read'
       *  S-Function (motohawk_sfun_data_read): '<S789>/motohawk_data_read3'
       */

      /* MATLAB Function 'Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow': '<S790>:1' */
      if ((TDC_DataStore() == 0.0) &&
          (BaseEngineController_A02_B.s789_RelationalOperator1 == TRUE)) {
        /* '<S790>:1:3' */
        /* '<S790>:1:4' */
        rtb_StateO_p = 1.0;
      } else if ((TDC_DataStore() == 1.0) && (((uint8_T)EngineState_DataStore())
                  == 2) && (BaseEngineController_A02_B.s789_RelationalOperator1 ==
                            TRUE)) {
        /* '<S790>:1:5' */
        /* '<S790>:1:6' */
        rtb_StateO_p = 2.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 3)) {
        /* '<S790>:1:7' */
        /* '<S790>:1:8' */
        rtb_StateO_p = 3.0;
      } else if ((TDC_DataStore() == 2.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S790>:1:9' */
        /* '<S790>:1:10' */
        rtb_StateO_p = 0.0;
      } else if ((TDC_DataStore() == 3.0) && (((uint8_T)EngineState_DataStore())
                  == 1)) {
        /* '<S790>:1:11' */
        /* '<S790>:1:12' */
        rtb_StateO_p = 0.0;
      } else {
        /* '<S790>:1:14' */
        rtb_StateO_p = TDC_DataStore();
      }

      if (TDC_DataStore() == 0.0) {
        /* '<S790>:1:17' */
        /* '<S790>:1:18' */
        rtb_ESTEnable = 0.0;

        /* '<S790>:1:19' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 1.0) {
        /* '<S790>:1:20' */
        /* '<S790>:1:21' */
        rtb_ESTEnable = 1.0;

        /* '<S790>:1:22' */
        rtb_CounterReset = 0.0;
      } else if (TDC_DataStore() == 2.0) {
        /* '<S790>:1:23' */
        /* '<S790>:1:24' */
        rtb_ESTEnable = 1.0;

        /* '<S790>:1:25' */
        rtb_CounterReset = 1.0;
      } else if (TDC_DataStore() == 3.0) {
        /* '<S790>:1:26' */
        /* '<S790>:1:27' */
        rtb_ESTEnable = 1.0;

        /* '<S790>:1:28' */
        rtb_CounterReset = 1.0;
      } else {
        /* '<S790>:1:30' */
        rtb_ESTEnable = 0.0;

        /* '<S790>:1:31' */
        rtb_CounterReset = 0.0;
      }

      /* End of MATLAB Function Block: '<S789>/EST Enable TDC Counter Stateflow' */

      /* S-Function (motohawk_sfun_data_write): '<S789>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TDC */
      {
        TDC_DataStore() = rtb_StateO_p;
      }

      /* DataTypeConversion: '<S789>/Data Type Conversion' */
      tmp = (int32_T)rtb_ESTEnable;
      tmp_0 = fmod((real_T)tmp, 256.0);
      BaseEngineController_A02_B.s789_DataTypeConversion = (int8_T)(tmp_0 < 0.0 ?
        (int8_T)-(int8_T)(uint8_T)-tmp_0 : (int8_T)(uint8_T)tmp_0);

      /* Update for UnitDelay: '<S789>/CrankCounter' */
      BaseEngineController_A02_DWork.s789_CrankCounter_DSTATE = rtb_CounterReset;

      /* End of Outputs for SubSystem: '<S784>/EST Enable TDC Counter' */

      /* Logic: '<S698>/Logical Operator1' incorporates:
       *  Logic: '<S784>/Logical Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration9'
       */
      BaseEngineController_A02_B.s698_LogicalOperator1[0] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl1_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[0]));
      BaseEngineController_A02_B.s698_LogicalOperator1[1] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl2_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[1]));
      BaseEngineController_A02_B.s698_LogicalOperator1[2] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl3_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[2]));
      BaseEngineController_A02_B.s698_LogicalOperator1[3] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl4_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[3]));
      BaseEngineController_A02_B.s698_LogicalOperator1[4] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl5_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[4]));
      BaseEngineController_A02_B.s698_LogicalOperator1[5] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl6_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[5]));
      BaseEngineController_A02_B.s698_LogicalOperator1[6] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl7_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[6]));
      BaseEngineController_A02_B.s698_LogicalOperator1[7] =
        ((rtb_LogicalOperator3_d && rtb_LogicalOperator1_lo &&
          (SparkEnableCyl8_DataStore()) && rtb_motohawk_data_read2 &&
          rtb_LogicalOperator4_g &&
          (BaseEngineController_A02_B.s789_DataTypeConversion != 0) &&
          BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero &&
          BaseEngineController_A02_B.s23_LogicalOperator2[7]));

      /* If: '<S786>/If' incorporates:
       *  Inport: '<S796>/In1'
       *  Inport: '<S797>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S786>/override_enable'
       *  UnitDelay: '<S786>/Unit Delay'
       */
      if ((SparkStartAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S786>/NewValue' incorporates:
         *  ActionPort: '<S796>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_A02_DWork.s786_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S786>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S786>/OldValue' incorporates:
         *  ActionPort: '<S797>/Action Port'
         */
        rtb_ESTEnable = BaseEngineController_A02_B.s24_Sum;

        /* End of Outputs for SubSystem: '<S786>/OldValue' */
      }

      /* End of If: '<S786>/If' */

      /* Sum: '<S786>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S786>/offset'
       */
      BaseEngineController_A02_B.s786_Sum = rtb_ESTEnable +
        (SparkStartAngle_offset_DataStore());

      /* DataTypeConversion: '<S698>/Data Type Conversion' incorporates:
       *  Gain: '<S698>/Gain'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_B.s786_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion_b = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion_b = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion_b = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S698>/Data Type Conversion' */
      /* If: '<S787>/If' incorporates:
       *  Inport: '<S798>/In1'
       *  Inport: '<S799>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S787>/override_enable'
       *  UnitDelay: '<S787>/Unit Delay'
       */
      if ((SparkStopAngle_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S787>/NewValue' incorporates:
         *  ActionPort: '<S798>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_A02_DWork.s787_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S787>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S787>/OldValue' incorporates:
         *  ActionPort: '<S799>/Action Port'
         */
        rtb_CounterReset = BaseEngineController_A02_B.s128_SparkAdv;

        /* End of Outputs for SubSystem: '<S787>/OldValue' */
      }

      /* End of If: '<S787>/If' */

      /* Sum: '<S787>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S787>/offset'
       */
      BaseEngineController_A02_B.s787_Sum = rtb_CounterReset +
        (SparkStopAngle_offset_DataStore());

      /* DataTypeConversion: '<S698>/Data Type Conversion1' incorporates:
       *  Gain: '<S698>/Gain1'
       */
      tmp_0 = 16.0 * BaseEngineController_A02_B.s787_Sum;
      if (tmp_0 < 32768.0) {
        if (tmp_0 >= -32768.0) {
          rtb_DataTypeConversion1_e = (int16_T)tmp_0;
        } else {
          rtb_DataTypeConversion1_e = MIN_int16_T;
        }
      } else {
        rtb_DataTypeConversion1_e = MAX_int16_T;
      }

      /* End of DataTypeConversion: '<S698>/Data Type Conversion1' */
      /* DataTypeConversion: '<S698>/Data Type Conversion2' incorporates:
       *  Gain: '<S698>/Gain2'
       *  S-Function (motohawk_sfun_calibration): '<S698>/motohawk_calibration2'
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

      /* End of DataTypeConversion: '<S698>/Data Type Conversion2' */
      /* S-Function Block: <S698>/Spark Sequence Output Spark Sequence Diagnostics */
      {
        extern int32_T SparkSeqDiag_20_LastPin;
        extern uint8_T SparkSeqDiag_20_Open[8];
        extern uint8_T SparkSeqDiag_20_Short[8];
        extern uint16_T SparkSeqDiag_20_OpenADC[8];
        extern uint16_T SparkSeqDiag_20_OnTime[8];
        int32_T i;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o1)[i] = SparkSeqDiag_20_Short[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (rtb_SparkSequence_o2)[i] = SparkSeqDiag_20_Open[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_B.s698_SparkSequence_o3)[i] =
            SparkSeqDiag_20_OpenADC[i];
        }

        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          (BaseEngineController_A02_B.s698_SparkSequence_o4)[i] =
            SparkSeqDiag_20_OnTime[i];
        }
      }

      /* RelationalOperator: '<S794>/RelOp' incorporates:
       *  Constant: '<S794>/Constant'
       */
      rtb_RelOp_a = ((rtb_SparkSequence_o1[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S785>/motohawk_fault_def' */

      /* Set Fault Suspected Status: EST1_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, rtb_RelOp_a);
        UpdateFault(18);
      }

      /* RelationalOperator: '<S795>/RelOp' incorporates:
       *  Constant: '<S795>/Constant'
       */
      rtb_RelOp_d = ((rtb_SparkSequence_o1[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S785>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: EST2_Short */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(20, rtb_RelOp_d);
        UpdateFault(20);
      }

      /* RelationalOperator: '<S792>/RelOp' incorporates:
       *  Constant: '<S792>/Constant'
       */
      rtb_RelOp_p = ((rtb_SparkSequence_o2[0] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S785>/motohawk_fault_def8' */

      /* Set Fault Suspected Status: EST1_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(17, rtb_RelOp_p);
        UpdateFault(17);
      }

      /* RelationalOperator: '<S793>/RelOp' incorporates:
       *  Constant: '<S793>/Constant'
       */
      rtb_RelOp_b = ((rtb_SparkSequence_o2[1] == 1));

      /* S-Function (motohawk_sfun_fault_def): '<S785>/motohawk_fault_def9' */

      /* Set Fault Suspected Status: EST2_Open */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(19, rtb_RelOp_b);
        UpdateFault(19);
      }

      /* S-Function (motohawk_sfun_data_write): '<S784>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineShutdownAction */
      {
        EngineShutdownAction_DataStore() = rtb_motohawk_fault_action;
      }

      /* Update for UnitDelay: '<S786>/Unit Delay' */
      BaseEngineController_A02_DWork.s786_UnitDelay_DSTATE = rtb_ESTEnable;

      /* Update for UnitDelay: '<S787>/Unit Delay' */
      BaseEngineController_A02_DWork.s787_UnitDelay_DSTATE = rtb_CounterReset;

      /* S-Function Block: <S698>/Spark Sequence Update Spark Sequence */
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
            condition = ((BaseEngineController_A02_B.s698_LogicalOperator1)[cyl])
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
            SeqOutAttr.u1AffectedPulse = (ESTPinMapArr_PulseNum_20_DataStore())
              [cyl];
            resource = (ESTPinMapArr_Resource_20_DataStore())[cyl];
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
