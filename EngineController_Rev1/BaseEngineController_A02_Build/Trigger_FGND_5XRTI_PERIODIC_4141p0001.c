/*
 * Trigger_FGND_5XRTI_PERIODIC_4141p0001.c
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

void Trigger_FGND_5XRTI_PERIODIC_4141p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S129>/MinGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_p;
      real_T rtb_motohawk_delta_time_d;
      real_T rtb_motohawk_delta_time_dw;
      real_T rtb_motohawk_delta_time_h;
      real_T rtb_motohawk_interpolation_1d2;
      real_T rtb_motohawk_interpolation_1d3;
      real_T rtb_motohawk_delta_time_c;
      real_T rtb_motohawk_interpolation_1d2_b;
      real_T rtb_motohawk_interpolation_1d1;
      real_T rtb_motohawk_delta_time_b;
      real_T rtb_Saturation_f;
      real_T rtb_motohawk_delta_time_a;
      real_T rtb_Saturation_a;
      real_T rtb_motohawk_interpolation_1d1_g;
      real_T rtb_motohawk_delta_time_bd;
      real_T rtb_motohawk_interpolation_1d2_m;
      real_T rtb_MinMax1_l;
      real_T rtb_motohawk_delta_time_ax;
      real_T rtb_Saturation_m;
      real_T rtb_motohawk_interpolation_1d2_d;
      real_T rtb_motohawk_delta_time_ao;
      real_T rtb_Switch_l;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_f;
      ZCEventType zcEvent;
      real_T rtb_Sum2_h;
      real_T rtb_Sum1_g;
      boolean_T rtb_RelOp_e;
      real_T rtb_UnitDelay1_a;
      real_T rtb_Product5;
      boolean_T rtb_LogicalOperator_b;
      real_T rtb_Product4;
      real_T rtb_Product2_h;
      int32_T rtb_DataTypeConversion_d;

      /* Sum: '<S220>/Sum2' incorporates:
       *  UnitDelay: '<S220>/Unit Delay'
       */
      rtb_Sum2_h = BaseEngineController_A02_B.s383_RPMInst -
        BaseEngineController_A02_DWork.s220_UnitDelay_DSTATE;

      /* S-Function Block: <S220>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S220>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S220>/motohawk_delta_time'
       */
      rtb_Sum2_h /= rtb_motohawk_delta_time_p;

      /* S-Function Block: <S221>/motohawk_delta_time */
      rtb_Switch_l = 0.005;

      /* Product: '<S221>/Product' incorporates:
       *  MinMax: '<S221>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration'
       */
      rtb_Switch_l /= (rtb_Switch_l >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_l :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S222>/Sum1' incorporates:
       *  Constant: '<S222>/Constant'
       *  Product: '<S222>/Product'
       *  Product: '<S222>/Product1'
       *  Sum: '<S222>/Sum'
       *  UnitDelay: '<S222>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Switch_l) *
        BaseEngineController_A02_DWork.s222_UnitDelay_DSTATE + rtb_Sum2_h *
        rtb_Switch_l;

      /* RelationalOperator: '<S216>/Relational Operator' incorporates:
       *  Gain: '<S216>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s216_RelationalOperator = ((rtb_Sum1_g <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S142>/Base RPM Set Pt' */

      /* S-Function Block: <S200>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* End of Outputs for SubSystem: '<S142>/Base RPM Set Pt' */

      /* RelationalOperator: '<S202>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration4'
       *  Sum: '<S202>/Sum'
       */
      BaseEngineController_A02_B.s202_RelationalOperator =
        ((BaseEngineController_A02_B.s383_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_m));

      /* RelationalOperator: '<S202>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration6'
       *  Sum: '<S202>/Sum2'
       */
      BaseEngineController_A02_B.s202_RelationalOperator3 =
        ((BaseEngineController_A02_B.s383_RPMInst <
          rtb_motohawk_interpolation_1d2_m - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S202>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_l = BaseEngineController_A02_B.s345_Switch1;
      } else {
        rtb_Switch_l = BaseEngineController_A02_B.s351_Switch2;
      }

      /* End of MultiPortSwitch: '<S202>/Multiport Switch1' */
      /* RelationalOperator: '<S202>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s202_RelationalOperator1 = ((rtb_Switch_l <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S202>/Multiport Switch' incorporates:
       *  Constant: '<S202>/Constant'
       *  RelationalOperator: '<S202>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read1'
       *  UnitDelay: '<S142>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_e = (BaseEngineController_A02_B.s358_Sum2 >
                       BaseEngineController_A02_DWork.s142_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S202>/Multiport Switch' */

      /* Logic: '<S202>/Logical Operator' incorporates:
       *  RelationalOperator: '<S202>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration5'
       *  Sum: '<S202>/Sum1'
       */
      BaseEngineController_A02_B.s202_LogicalOperator = (((rtb_Switch_l >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_e));

      /* S-Function Block: <S219>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S219>/Switch' incorporates:
       *  Constant: '<S219>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S219>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S219>/motohawk_delta_time'
       *  Sum: '<S219>/Sum'
       */
      if (BaseEngineController_A02_B.s202_RelationalOperator1) {
        rtb_Switch_l = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_l = 0.0;
      }

      /* End of Switch: '<S219>/Switch' */
      /* RelationalOperator: '<S202>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration2'
       */
      BaseEngineController_A02_B.s202_RelationalOperator5 = ((rtb_Switch_l >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S202>/IdleStateMachine' */
      BaseEngineController_A02_IdleStateMachine();

      /* RelationalOperator: '<S218>/RelOp' incorporates:
       *  Constant: '<S218>/Constant'
       */
      BaseEngineController_A02_B.s218_RelOp =
        ((BaseEngineController_A02_B.s217_IdleState == 2));

      /* UnitDelay: '<S142>/Unit Delay1' */
      rtb_UnitDelay1_a = BaseEngineController_A02_DWork.s142_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S142>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S199>/Enable'
       */
      if (BaseEngineController_A02_B.s218_RelOp) {
        /* Product: '<S199>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S199>/motohawk_calibration2'
         */
        rtb_Sum2_h = rtb_UnitDelay1_a * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S214>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S214>/MinMax1' incorporates:
         *  MinMax: '<S214>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration1'
         */
        rtb_MinMax1_l = (rtb_Sum2_h <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S199>/Idle Control Enable Delay' */

        /* S-Function Block: <S213>/motohawk_delta_time */
        rtb_motohawk_delta_time_ax = 0.005;

        /* Switch: '<S213>/Switch' incorporates:
         *  Constant: '<S213>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S213>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S213>/motohawk_delta_time'
         *  Sum: '<S213>/Sum'
         */
        if (BaseEngineController_A02_B.s218_RelOp) {
          rtb_Sum2_h = rtb_motohawk_delta_time_ax + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_h = 0.0;
        }

        /* End of Switch: '<S213>/Switch' */
        /* RelationalOperator: '<S211>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration1'
         */
        rtb_RelOp_e = (rtb_Sum2_h > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S213>/Saturation' */
        rtb_Saturation_m = rtb_Sum2_h >= 16000.0 ? 16000.0 : rtb_Sum2_h <= 0.0 ?
          0.0 : rtb_Sum2_h;

        /* S-Function (motohawk_sfun_data_write): '<S213>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_m;
        }

        /* End of Outputs for SubSystem: '<S199>/Idle Control Enable Delay' */

        /* Logic: '<S199>/Logical Operator1' incorporates:
         *  Abs: '<S199>/Abs'
         *  RelationalOperator: '<S199>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S199>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S199>/motohawk_calibration4'
         */
        BaseEngineController_A02_B.s199_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_e && (fabs
             (rtb_UnitDelay1_a) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S199>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S210>/Enable'
         */
        if (BaseEngineController_A02_B.s199_LogicalOperator1) {
          /* S-Function Block: <S210>/motohawk_adapt_table */
          /* Adapt 1-D Table */
          {
            uint32_T _i = ((ECT05Idx_DataStore())) >> 9;
            uint32_T _frac = (((ECT05Idx_DataStore())) & 0x01FF) >> 7;
            real_T _new;
            if (_i >= 4) {
              _i = 4;
              _frac = 0;
            }

            if (_frac == 0) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + rtb_MinMax1_l;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
            } else if (_frac == 3) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + rtb_MinMax1_l;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            } else {
              real_T _half = rtb_MinMax1_l / 2;
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + _half;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + _half;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            }
          }
        }

        /* End of Outputs for SubSystem: '<S199>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S142>/Base Airflow Table Adapt' */
      /* S-Function Block: <S201>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s201_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_dw = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S201>/Multiport Switch' incorporates:
       *  Gain: '<S201>/Ramp Down'
       *  Product: '<S201>/Product'
       *  Product: '<S201>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S201>/motohawk_delta_time'
       */
      if (BaseEngineController_A02_B.s218_RelOp == FALSE) {
        /* Switch: '<S201>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S142>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S201>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_h = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_h = rtb_motohawk_delta_time_dw;
        }

        /* End of Switch: '<S201>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_Sum2_h * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_motohawk_delta_time_dw;
      }

      /* End of MultiPortSwitch: '<S201>/Multiport Switch' */

      /* Sum: '<S201>/Sum' incorporates:
       *  UnitDelay: '<S201>/state'
       */
      rtb_Product5 += BaseEngineController_A02_DWork.s201_state_DSTATE;

      /* MinMax: '<S215>/MinMax1' incorporates:
       *  Constant: '<S201>/Constant'
       *  Constant: '<S201>/Constant1'
       *  MinMax: '<S215>/MinMax'
       */
      rtb_Sum2_h = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_A02_B.s215_MinMax1 = rtb_Sum2_h <= 1.0 ? rtb_Sum2_h :
        1.0;

      /* RelationalOperator: '<S204>/RelOp' incorporates:
       *  Constant: '<S204>/Constant'
       */
      rtb_RelOp_e = (BaseEngineController_A02_B.s215_MinMax1 == 0.0);

      /* UnitDelay: '<S142>/Unit Delay2' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s142_UnitDelay2_DSTATE;

      /* HitCross: '<S142>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S142>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_A02_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_A02_DWork.s142_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_A02_DWork.s142_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_A02_B.s142_HitCrossing1 =
            !BaseEngineController_A02_B.s142_HitCrossing1;
          BaseEngineController_A02_DWork.s142_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_A02_B.s142_HitCrossing1 && (rtb_Sum2_h != 0.5))
          {
            BaseEngineController_A02_B.s142_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_h != 0.5) {
          BaseEngineController_A02_B.s142_HitCrossing1 = FALSE;
        }

        BaseEngineController_A02_DWork.s142_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S142>/Hit  Crossing1' */

      /* Logic: '<S142>/Logical Operator' */
      BaseEngineController_A02_B.s142_LogicalOperator = ((rtb_RelOp_e ||
        BaseEngineController_A02_B.s142_HitCrossing1));

      /* Logic: '<S205>/Logical Operator' */
      rtb_LogicalOperator_b = !BaseEngineController_A02_B.s218_RelOp;

      /* S-Function Block: <S205>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s205_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S205>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE;

      /* Switch: '<S205>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S205>/Constant'
       *  Product: '<S205>/Product2'
       *  Product: '<S205>/Product3'
       *  Sum: '<S205>/Sum'
       *  Sum: '<S205>/Sum1'
       */
      if (rtb_LogicalOperator_b) {
        rtb_Product5 = BaseEngineController_A02_B.s383_RPMInst;
      } else {
        /* Product: '<S205>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_h /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_m * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S205>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S205>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_m >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_m : rtb_Product5;

      /* Sum: '<S231>/Sum2' */
      BaseEngineController_A02_B.s231_Sum2 =
        BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s543_Sum1;

      /* Product: '<S231>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_A02_B.s231_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S207>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s231_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s231_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S229>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S231>/Product2' incorporates:
       *  Product: '<S229>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S229>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S207>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s231_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S232>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s232_UnitDelay_DSTATE;

      /* S-Function Block: <S229>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S231>/Product4' incorporates:
       *  Product: '<S229>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S229>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S207>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S232>/motohawk_delta_time */
      rtb_motohawk_delta_time_c = 0.005;

      /* Product: '<S232>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S232>/motohawk_delta_time'
       *  Sum: '<S232>/Sum2'
       */
      BaseEngineController_A02_B.s232_Product = (rtb_Product4 - rtb_Sum2_h) /
        rtb_motohawk_delta_time_c;

      /* Switch: '<S233>/Switch1' incorporates:
       *  Constant: '<S207>/Constant'
       *  UnitDelay: '<S233>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s142_LogicalOperator) {
        BaseEngineController_A02_B.s233_Switch1 = 0.0;
      } else {
        BaseEngineController_A02_B.s233_Switch1 =
          BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S233>/Switch1' */

      /* Switch: '<S207>/Switch' incorporates:
       *  Constant: '<S207>/Constant1'
       */
      if (BaseEngineController_A02_B.s142_LogicalOperator) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S230>/MinMax' incorporates:
         *  Sum: '<S231>/Sum1'
         */
        rtb_Sum2_h = (BaseEngineController_A02_B.s231_Product2 +
                      BaseEngineController_A02_B.s232_Product) +
          BaseEngineController_A02_B.s233_Switch1;

        /* MinMax: '<S230>/MinMax1' incorporates:
         *  MinMax: '<S230>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S207>/Switch' */

      /* Product: '<S142>/Product1' */
      BaseEngineController_A02_B.s142_MinGovAirPID =
        BaseEngineController_A02_B.s215_MinMax1 * rtb_UnitDelay1_a;

      /* Sum: '<S226>/Sum1' */
      BaseEngineController_A02_B.s226_Sum1 =
        BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s543_Sum1;

      /* Product: '<S226>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration4'
       */
      rtb_UnitDelay1_a = BaseEngineController_A02_B.s226_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S206>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s226_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s226_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S224>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_b;
      }

      /* Product: '<S226>/Product' incorporates:
       *  Product: '<S224>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S224>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S206>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s226_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_b * rtb_UnitDelay1_a;

      /* UnitDelay: '<S227>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE;

      /* S-Function Block: <S224>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S226>/Product2' incorporates:
       *  Product: '<S224>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S224>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S206>/motohawk_prelookup1'
       */
      rtb_Product2_h = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_a;

      /* S-Function Block: <S227>/motohawk_delta_time */
      rtb_motohawk_delta_time_b = 0.005;

      /* Product: '<S227>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S227>/motohawk_delta_time'
       *  Sum: '<S227>/Sum2'
       */
      BaseEngineController_A02_B.s227_Product = (rtb_Product2_h - rtb_Sum2_h) /
        rtb_motohawk_delta_time_b;

      /* Switch: '<S206>/Switch' incorporates:
       *  Constant: '<S206>/Constant1'
       */
      if (rtb_RelOp_e) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S225>/MinMax' incorporates:
         *  Sum: '<S226>/Sum'
         */
        rtb_Sum2_h = BaseEngineController_A02_B.s226_Product +
          BaseEngineController_A02_B.s227_Product;

        /* MinMax: '<S225>/MinMax1' incorporates:
         *  MinMax: '<S225>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S206>/Switch' */

      /* Product: '<S142>/Product' */
      BaseEngineController_A02_B.s142_IdleSpk =
        BaseEngineController_A02_B.s215_MinMax1 * rtb_UnitDelay1_a;

      /* Outputs for Atomic SubSystem: '<S142>/AiflowOffset' */

      /* S-Function Block: <S198>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_d;
      }

      /* RelationalOperator: '<S209>/RelOp' incorporates:
       *  Constant: '<S209>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S198>/motohawk_data_read'
       */
      rtb_RelOp_e = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S198>/Logical Operator' incorporates:
       *  RelationalOperator: '<S198>/Relational Operator'
       *  RelationalOperator: '<S198>/Relational Operator1'
       *  UnitDelay: '<S198>/Unit Delay'
       */
      rtb_LogicalOperator_b = ((rtb_RelOp_e <
        BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE) || (rtb_RelOp_e ==
        BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE));

      /* S-Function Block: <S208>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s208_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_ao = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S208>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s208_UnitDelay_DSTATE;

      /* Switch: '<S208>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S208>/Constant'
       *  Logic: '<S208>/Logical Operator'
       *  Product: '<S208>/Product2'
       *  Product: '<S208>/Product3'
       *  Sum: '<S208>/Sum'
       *  Sum: '<S208>/Sum1'
       */
      if (!rtb_LogicalOperator_b) {
        rtb_Sum2_h = BaseEngineController_A02_B.s351_Switch2;
      } else {
        /* Product: '<S208>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S208>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_ao /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_h = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_d * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S208>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S208>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_d >= rtb_Sum2_h) || rtIsNaN(rtb_Sum2_h)
        ? rtb_motohawk_interpolation_1d2_d : rtb_Sum2_h;

      /* Update for UnitDelay: '<S198>/Unit Delay' */
      BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE = rtb_RelOp_e;

      /* Update for UnitDelay: '<S208>/Unit Delay' */
      BaseEngineController_A02_DWork.s208_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S142>/AiflowOffset' */

      /* Saturate: '<S219>/Saturation' */
      rtb_Saturation_f = rtb_Switch_l >= 16000.0 ? 16000.0 : rtb_Switch_l <= 0.0
        ? 0.0 : rtb_Switch_l;

      /* S-Function (motohawk_sfun_data_write): '<S219>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_f;
      }

      /* S-Function Block: <S223>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Sum: '<S203>/Sum' */
      rtb_Sum2_h = BaseEngineController_A02_B.s543_Sum1 -
        BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S223>/Switch' incorporates:
       *  Constant: '<S223>/Constant'
       *  RelationalOperator: '<S203>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S223>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S223>/motohawk_delta_time'
       *  Sum: '<S223>/Sum'
       */
      if (rtb_Sum2_h > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_A02_B.s223_Switch = rtb_motohawk_delta_time_a +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_A02_B.s223_Switch = 0.0;
      }

      /* End of Switch: '<S223>/Switch' */

      /* RelationalOperator: '<S203>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s203_RelationalOperator1 =
        ((BaseEngineController_A02_B.s223_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S203>/Data Type Conversion' */
      rtb_DataTypeConversion_d =
        BaseEngineController_A02_B.s203_RelationalOperator1;

      /* Saturate: '<S223>/Saturation' */
      rtb_Saturation_a = BaseEngineController_A02_B.s223_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s223_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s223_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S223>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_a;
      }

      /* S-Function Block: <S229>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S229>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S229>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S207>/motohawk_prelookup1'
       */
      rtb_Sum2_h = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g;

      /* S-Function Block: <S233>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s233_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bd = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S233>/Sum' incorporates:
       *  Product: '<S231>/Product1'
       *  Product: '<S233>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S233>/motohawk_delta_time'
       */
      rtb_UnitDelay1_a = rtb_Product5 * rtb_Sum2_h * rtb_motohawk_delta_time_bd
        + BaseEngineController_A02_B.s233_Switch1;

      /* MinMax: '<S235>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration7'
       */
      rtb_Sum2_h = (rtb_UnitDelay1_a >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_a :
        (AirMinGovITermLowerLimit_DataStore());

      /* MinMax: '<S235>/MinMax1' incorporates:
       *  MinMax: '<S235>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration8'
       */
      rtb_Sum2_h = (rtb_Sum2_h <= (AirMinGovITermUpperLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_h :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S220>/Unit Delay' */
      BaseEngineController_A02_DWork.s220_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s383_RPMInst;

      /* Update for UnitDelay: '<S222>/Unit Delay' */
      BaseEngineController_A02_DWork.s222_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S142>/Unit Delay3' */
      BaseEngineController_A02_DWork.s142_UnitDelay3_DSTATE =
        BaseEngineController_A02_B.s142_MinGovAirPID;

      /* Update for UnitDelay: '<S142>/Unit Delay1' */
      BaseEngineController_A02_DWork.s142_UnitDelay1_DSTATE =
        BaseEngineController_A02_B.s233_Switch1;

      /* Update for UnitDelay: '<S201>/state' */
      BaseEngineController_A02_DWork.s201_state_DSTATE =
        BaseEngineController_A02_B.s215_MinMax1;

      /* Update for UnitDelay: '<S142>/Unit Delay2' */
      BaseEngineController_A02_DWork.s142_UnitDelay2_DSTATE = (real_T)
        rtb_DataTypeConversion_d;

      /* Update for UnitDelay: '<S205>/Unit Delay' */
      BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S232>/Unit Delay' */
      BaseEngineController_A02_DWork.s232_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S233>/Unit Delay' incorporates:
       *  MinMax: '<S235>/MinMax1'
       */
      BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE = rtb_Sum2_h;

      /* Update for UnitDelay: '<S227>/Unit Delay' */
      BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE = rtb_Product2_h;
    }

    /* Output and update for function-call system: '<S129>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_j;
      real_T rtb_motohawk_interpolation_1d3_e;
      real_T rtb_motohawk_interpolation_1d2_f;
      real_T rtb_motohawk_delta_time_ph;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_k;
      real_T rtb_StateO;
      real_T rtb_motohawk_interpolation_1d4_l;
      real_T rtb_MinMax_l;
      index_T rtb_motohawk_prelookup1_k;
      boolean_T rtb_RelationalOperator_m;
      boolean_T rtb_RelationalOperator2_j0;
      boolean_T rtb_RelationalOperator_hj;
      boolean_T rtb_LogicalOperator1_fi;
      real_T rtb_Reset;
      real_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_o;

      /* Sum: '<S141>/Sum' */
      BaseEngineController_A02_B.s141_Sum =
        BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_B.s358_Sum2;

      /* Outputs for Enabled SubSystem: '<S184>/InGear' incorporates:
       *  EnablePort: '<S187>/Enable'
       */

      /* S-Function (motohawk_sfun_data_read): '<S187>/motohawk_data_read' */
      rtb_MinMax_l = MaxGovInGearSetPoint_DataStore();

      /* MinMax: '<S189>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration3'
       */
      rtb_MinMax_l = (rtb_MinMax_l >= (MaxGovInGearLowerLim_DataStore())) ||
        rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearLowerLim_DataStore());

      /* MinMax: '<S189>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s184_Merge = (rtb_MinMax_l <=
        (MaxGovInGearUpperLim_DataStore())) || rtIsNaN
        ((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearUpperLim_DataStore());

      /* S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration4' */
      BaseEngineController_A02_B.s184_Merge1 = (MaxGovInGearRPMThresh_DataStore());

      /* S-Function (motohawk_sfun_data_write): '<S187>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration1'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
      }

      /* S-Function (motohawk_sfun_data_write): '<S187>/motohawk_data_write1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration2'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
      }

      /* End of Outputs for SubSystem: '<S184>/InGear' */

      /* RelationalOperator: '<S184>/Relational Operator' incorporates:
       *  Sum: '<S184>/Sum1'
       */
      rtb_RelationalOperator_m = (BaseEngineController_A02_B.s383_RPMInst >
        BaseEngineController_A02_B.s184_Merge -
        BaseEngineController_A02_B.s184_Merge1);

      /* RelationalOperator: '<S182>/Relational Operator2' */
      rtb_RelationalOperator2_j0 = (BaseEngineController_A02_B.s383_RPMInst >
        BaseEngineController_A02_B.s184_Merge);

      /* RelationalOperator: '<S182>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration5'
       *  Sum: '<S182>/Sum'
       */
      rtb_RelationalOperator_hj = (BaseEngineController_A02_B.s141_Sum <=
        BaseEngineController_A02_B.s351_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S182>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S182>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration5'
       *  Sum: '<S182>/Sum1'
       */
      rtb_LogicalOperator1_fi = (rtb_RelationalOperator_m &&
        (BaseEngineController_A02_B.s141_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_A02_B.s351_Switch2));

      /* MATLAB Function Block: '<S182>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S182>/Logical Operator'
       *  Logic: '<S182>/Logical Operator2'
       *  Logic: '<S182>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S182>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S186>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_m ||
            rtb_RelationalOperator2_j0) == 1)) {
        /* '<S186>:1:3' */
        /* '<S186>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_hj ==
                  TRUE)) {
        /* '<S186>:1:5' */
        /* '<S186>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_fi ||
                   rtb_RelationalOperator2_j0) == 1)) {
        /* '<S186>:1:7' */
        /* '<S186>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_m ==
                  TRUE)) {
        /* '<S186>:1:9' */
        /* '<S186>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S186>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S186>:1:15' */
        /* '<S186>:1:16' */
        rtb_ETCMode = 0;

        /* '<S186>:1:17' */
        rtb_Hold = 0.0;

        /* '<S186>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S186>:1:19' */
        /* '<S186>:1:20' */
        rtb_ETCMode = 1;

        /* '<S186>:1:21' */
        rtb_Hold = 0.0;

        /* '<S186>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S186>:1:23' */
        /* '<S186>:1:24' */
        rtb_ETCMode = 0;

        /* '<S186>:1:25' */
        rtb_Hold = 1.0;

        /* '<S186>:1:26' */
      } else {
        /* '<S186>:1:28' */
        rtb_ETCMode = 0;

        /* '<S186>:1:29' */
        rtb_Hold = 0.0;

        /* '<S186>:1:30' */
      }

      /* End of MATLAB Function Block: '<S182>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S182>/Data Type Conversion' */
      BaseEngineController_A02_B.s182_DataTypeConversion = 0;

      /* Logic: '<S183>/Logical Operator' incorporates:
       *  UnitDelay: '<S141>/Unit Delay'
       */
      rtb_RelationalOperator_m =
        !BaseEngineController_A02_DWork.s141_UnitDelay_DSTATE;

      /* S-Function Block: <S183>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s183_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S183>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE;

      /* Switch: '<S183>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S183>/Constant'
       *  Product: '<S183>/Product2'
       *  Product: '<S183>/Product3'
       *  Sum: '<S183>/Sum'
       *  Sum: '<S183>/Sum1'
       */
      if (rtb_RelationalOperator_m) {
        rtb_alpha_o = BaseEngineController_A02_B.s383_RPMInst;
      } else {
        /* Product: '<S183>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_j /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset +
          BaseEngineController_A02_B.s184_Merge * rtb_alpha_o;
      }

      /* End of Switch: '<S183>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S183>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_A02_B.s183_DontallowsetpointtoevergoabovetheTargetRPM
        = (BaseEngineController_A02_B.s184_Merge <= rtb_alpha_o) || rtIsNaN
        (rtb_alpha_o) ? BaseEngineController_A02_B.s184_Merge : rtb_alpha_o;

      /* DataTypeConversion: '<S182>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)(int32_T)rtb_Hold, 256.0);
      BaseEngineController_A02_B.s182_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S185>/Switch1' */
      if (BaseEngineController_A02_B.s182_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_A02_B.s183_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_A02_B.s383_RPMInst;
      }

      /* End of Switch: '<S185>/Switch1' */

      /* Sum: '<S193>/Sum2' */
      BaseEngineController_A02_B.s193_Sum2 =
        BaseEngineController_A02_B.s183_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S193>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_A02_B.s193_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S185>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_A02_B.s193_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s193_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_k = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S185>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_e;
      }

      /* Product: '<S193>/Product2' incorporates:
       *  Product: '<S185>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S185>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s193_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_e * rtb_alpha_o;

      /* UnitDelay: '<S194>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s194_UnitDelay_DSTATE;

      /* S-Function Block: <S185>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S193>/Product4' incorporates:
       *  Product: '<S185>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S185>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      rtb_Hold = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_f *
        rtb_alpha_o;

      /* S-Function Block: <S194>/motohawk_delta_time */
      rtb_motohawk_delta_time_ph = 0.005;

      /* Product: '<S194>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S194>/motohawk_delta_time'
       *  Sum: '<S194>/Sum2'
       */
      BaseEngineController_A02_B.s194_Product = (rtb_Hold - rtb_Reset) /
        rtb_motohawk_delta_time_ph;

      /* Outputs for Atomic SubSystem: '<S141>/I-Term Preload' */

      /* S-Function Block: <S181>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_l = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s301_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_l;
      }

      /* Sum: '<S181>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S181>/motohawk_interpolation_1d4'
       */
      BaseEngineController_A02_B.s181_Sum = BaseEngineController_A02_B.s141_Sum
        - rtb_motohawk_interpolation_1d4_l;

      /* End of Outputs for SubSystem: '<S141>/I-Term Preload' */

      /* Switch: '<S195>/Switch1' incorporates:
       *  DataTypeConversion: '<S195>/Data Type Conversion'
       *  UnitDelay: '<S195>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s182_DataTypeConversion != 0) {
        BaseEngineController_A02_B.s195_Switch1 =
          BaseEngineController_A02_B.s181_Sum;
      } else {
        BaseEngineController_A02_B.s195_Switch1 =
          BaseEngineController_A02_DWork.s195_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S195>/Switch1' */

      /* Switch: '<S185>/Switch' incorporates:
       *  Constant: '<S185>/Constant'
       */
      if (BaseEngineController_A02_B.s182_DataTypeConversion >= 1) {
        BaseEngineController_A02_B.s185_Switch = 0.0;
      } else {
        /* MinMax: '<S192>/MinMax' incorporates:
         *  Sum: '<S193>/Sum1'
         */
        rtb_Reset = (BaseEngineController_A02_B.s193_Product2 +
                     BaseEngineController_A02_B.s194_Product) +
          BaseEngineController_A02_B.s195_Switch1;

        /* MinMax: '<S192>/MinMax1' incorporates:
         *  MinMax: '<S192>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration9'
         */
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());
        BaseEngineController_A02_B.s185_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S185>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S182>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S182>/Multiport Switch' incorporates:
       *  Constant: '<S182>/Constant'
       *  DataTypeConversion: '<S182>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S182>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_A02_B.s182_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_A02_B.s182_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S182>/Multiport Switch' */

      /* S-Function Block: <S185>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S193>/Product1' incorporates:
       *  Product: '<S185>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S185>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S195>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s195_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S195>/Sum' incorporates:
       *  Product: '<S195>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S195>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_k +
        BaseEngineController_A02_B.s195_Switch1;

      /* MinMax: '<S197>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* MinMax: '<S197>/MinMax1' incorporates:
       *  MinMax: '<S197>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration8'
       */
      rtb_Reset = (rtb_Reset <= (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S141>/Unit Delay' */
      BaseEngineController_A02_DWork.s141_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s182_MultiportSwitch;

      /* Update for UnitDelay: '<S183>/Unit Delay' */
      BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s183_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S194>/Unit Delay' */
      BaseEngineController_A02_DWork.s194_UnitDelay_DSTATE = rtb_Hold;

      /* Update for UnitDelay: '<S195>/Unit Delay' incorporates:
       *  MinMax: '<S197>/MinMax1'
       */
      BaseEngineController_A02_DWork.s195_UnitDelay_DSTATE = rtb_Reset;
    }

    /* Output and update for function-call system: '<S129>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d;
      real_T rtb_RichEquivRatioTargetDelta_n;
      real_T rtb_motohawk_interpolation_1d1_o;
      real_T rtb_RichEquivRatioTargetDelta_j;
      real_T rtb_motohawk_interpolation_1d_b;
      real_T rtb_RichEquivRatioTargetDelta_nw;
      real_T rtb_motohawk_interpolation_1d4_i;
      index_T rtb_motohawk_prelookup;
      real_T rtb_Product_d;
      real_T rtb_Switch1_m;

      /* S-Function Block: <S144>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s378_motohawk_prelookup4,
           BaseEngineController_A02_B.s339_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S257>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S257>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_n = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s378_motohawk_prelookup1,
           BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_n;
      }

      /* Product: '<S257>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S257>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S257>/motohawk_interpolation_2d3'
       */
      rtb_Product_d = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_n;

      /* S-Function Block: <S257>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s338_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S257>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s378_motohawk_prelookup1,
           BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
      }

      /* Sum: '<S257>/Add' incorporates:
       *  Product: '<S257>/Product1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S257>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S257>/motohawk_interpolation_2d1'
       */
      BaseEngineController_A02_B.s257_Add = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_j + rtb_Product_d;

      /* S-Function Block: <S254>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EthanolPreLookupIn_DataStore()) = BaseEngineController_A02_B.s565_Merge;
        (EthanolPreLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s565_Merge,
           (EthanolPreLookupIdxArr_DataStore()), 11,
           (EthanolPreLookupIdx_DataStore()));
        rtb_motohawk_prelookup = (EthanolPreLookupIdx_DataStore());
      }

      /* S-Function Block: <S254>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *)
           ((EthanolInterpolationTbl_DataStore())), 11);
        (EthanolInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_b;
      }

      /* S-Function Block: <S254>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_nw = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s378_motohawk_prelookup1,
           BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_nw;
      }

      /* Product: '<S254>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S254>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S254>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s254_Product = rtb_motohawk_interpolation_1d_b *
        rtb_RichEquivRatioTargetDelta_nw;

      /* Sum: '<S144>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S144>/motohawk_interpolation_2d2'
       *  Sum: '<S144>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_A02_B.s144_ApplyOffsetstoBaseSparkAdvance1 =
        ((rtb_RichEquivRatioTargetDelta + BaseEngineController_A02_B.s257_Add) +
         BaseEngineController_A02_B.s254_Product) +
        BaseEngineController_A02_B.s142_IdleSpk;

      /* MinMax: '<S260>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration5'
       */
      rtb_Product_d =
        (BaseEngineController_A02_B.s144_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_A02_B.s144_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S256>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S256>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_A02_B.s218_RelOp) {
        /* S-Function Block: <S256>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_i = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s378_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_i;
        }

        rtb_Switch1_m = rtb_motohawk_interpolation_1d4_i;
      } else {
        rtb_Switch1_m = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S256>/Switch1' */

      /* MinMax: '<S260>/MinMax1' incorporates:
       *  MinMax: '<S260>/MinMax'
       */
      BaseEngineController_A02_B.s260_MinMax1 = (rtb_Product_d <= rtb_Switch1_m)
        || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;

      /* UnitDelay: '<S255>/Unit Delay' */
      rtb_Product_d = BaseEngineController_A02_DWork.s255_UnitDelay_DSTATE;

      /* Switch: '<S255>/Switch' incorporates:
       *  UnitDelay: '<S258>/Initial Condition is True'
       */
      if (BaseEngineController_A02_DWork.s258_InitialConditionisTrue_DSTATE) {
        BaseEngineController_A02_B.s255_Switch =
          BaseEngineController_A02_B.s260_MinMax1;
      } else {
        /* Sum: '<S255>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration'
         */
        rtb_Switch1_m = rtb_Product_d + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S259>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration1'
         *  Sum: '<S255>/Sum1'
         */
        rtb_Product_d -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S259>/MinMax1' incorporates:
         *  MinMax: '<S259>/MinMax'
         */
        rtb_Product_d = (BaseEngineController_A02_B.s260_MinMax1 >=
                         rtb_Product_d) || rtIsNaN(rtb_Product_d) ?
          BaseEngineController_A02_B.s260_MinMax1 : rtb_Product_d;
        BaseEngineController_A02_B.s255_Switch = (rtb_Product_d <= rtb_Switch1_m)
          || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;
      }

      /* End of Switch: '<S255>/Switch' */

      /* S-Function Block: <S144>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_A02_B.s144_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s378_motohawk_prelookup1,
           BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_A02_B.s144_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S258>/Initial Condition is True' incorporates:
       *  Constant: '<S258>/False After First Sample'
       */
      BaseEngineController_A02_DWork.s258_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S255>/Unit Delay' */
      BaseEngineController_A02_DWork.s255_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s255_Switch;
    }
  }
}
