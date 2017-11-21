/*
 * Trigger_FGND_5XRTI_PERIODIC_1327p0009.c
 *
 * Real-Time Workshop code generation for Simulink model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1510
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1327p0009(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S121>/MinGovernor' */
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

      /* Sum: '<S224>/Sum2' incorporates:
       *  UnitDelay: '<S224>/Unit Delay'
       */
      rtb_Sum2_h = BaseEngineController_A02_B.s407_RPMInst -
        BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE;

      /* S-Function Block: <S224>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S224>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S224>/motohawk_delta_time'
       */
      rtb_Sum2_h /= rtb_motohawk_delta_time_p;

      /* S-Function Block: <S225>/motohawk_delta_time */
      rtb_Switch_l = 0.005;

      /* Product: '<S225>/Product' incorporates:
       *  MinMax: '<S225>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration'
       */
      rtb_Switch_l /= rt_MAXd_snf(rtb_Switch_l, (RPMFallingFiltConst_DataStore()));

      /* Sum: '<S226>/Sum1' incorporates:
       *  Constant: '<S226>/Constant'
       *  Product: '<S226>/Product'
       *  Product: '<S226>/Product1'
       *  Sum: '<S226>/Sum'
       *  UnitDelay: '<S226>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Switch_l) *
        BaseEngineController_A02_DWork.s226_UnitDelay_DSTATE + rtb_Sum2_h *
        rtb_Switch_l;

      /* RelationalOperator: '<S220>/Relational Operator' incorporates:
       *  Gain: '<S220>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s220_RelationalOperator = (rtb_Sum1_g <
        -(RPMFallingRate_DataStore()));

      /* Outputs for atomic SubSystem: '<S136>/Base RPM Set Pt' */
      /* S-Function Block: <S204>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s359_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* end of Outputs for SubSystem: '<S136>/Base RPM Set Pt' */

      /* RelationalOperator: '<S206>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration4'
       *  Sum: '<S206>/Sum'
       */
      BaseEngineController_A02_B.s206_RelationalOperator =
        (BaseEngineController_A02_B.s407_RPMInst <
         (InGearMinGovEntryRPMDelta_DataStore()) +
         rtb_motohawk_interpolation_1d2_m);

      /* RelationalOperator: '<S206>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration6'
       *  Sum: '<S206>/Sum2'
       */
      BaseEngineController_A02_B.s206_RelationalOperator3 =
        (BaseEngineController_A02_B.s407_RPMInst <
         rtb_motohawk_interpolation_1d2_m - (StallSaverDeltaRPM_DataStore()));

      /* MultiPortSwitch: '<S206>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S206>/motohawk_data_read1'
       */
      if ((int32_T)AirControlSource_DataStore() == 0) {
        rtb_Switch_l = BaseEngineController_A02_B.s368_Switch1;
      } else {
        rtb_Switch_l = BaseEngineController_A02_B.s374_Switch2;
      }

      /* RelationalOperator: '<S206>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s206_RelationalOperator1 = (rtb_Switch_l <
        (MinGovEntryAirPcnt_DataStore()));

      /* MultiPortSwitch: '<S206>/Multiport Switch' incorporates:
       *  Constant: '<S206>/Constant'
       *  RelationalOperator: '<S206>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S206>/motohawk_data_read1'
       *  UnitDelay: '<S136>/Unit Delay3'
       */
      if ((int32_T)AirControlSource_DataStore() == 0) {
        rtb_RelOp_e = (BaseEngineController_A02_B.s382_Sum2 >
                       BaseEngineController_A02_DWork.s136_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_e = TRUE;
      }

      /* Logic: '<S206>/Logical Operator' incorporates:
       *  RelationalOperator: '<S206>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration5'
       *  Sum: '<S206>/Sum1'
       */
      BaseEngineController_A02_B.s206_LogicalOperator = ((rtb_Switch_l >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_e);

      /* S-Function Block: <S223>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S223>/Switch' incorporates:
       *  Constant: '<S223>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S223>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S223>/motohawk_delta_time'
       *  Sum: '<S223>/Sum'
       */
      if (BaseEngineController_A02_B.s206_RelationalOperator1) {
        rtb_Switch_l = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_l = 0.0;
      }

      /* RelationalOperator: '<S206>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration2'
       */
      BaseEngineController_A02_B.s206_RelationalOperator5 = (rtb_Switch_l >
        (MinGovEntryAirTimeThresh_DataStore()));

      /* Stateflow: '<S206>/IdleStateMachine' */
      BaseEngineController_A02_IdleStateMachine();

      /* RelationalOperator: '<S222>/RelOp' incorporates:
       *  Constant: '<S222>/Constant'
       */
      BaseEngineController_A02_B.s222_RelOp =
        (BaseEngineController_A02_B.s221_IdleState == 2);

      /* UnitDelay: '<S136>/Unit Delay1' */
      rtb_UnitDelay1_a = BaseEngineController_A02_DWork.s136_UnitDelay1_DSTATE;

      /* Outputs for enable SubSystem: '<S136>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S203>/Enable'
       */
      if (BaseEngineController_A02_B.s222_RelOp) {
        /* Product: '<S203>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration2'
         */
        rtb_Sum2_h = rtb_UnitDelay1_a * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S218>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
         */
        rtb_Sum2_h = rt_MAXd_snf(rtb_Sum2_h,
          (BaseAirflowAdaptErrorLwrLim_DataStore()));

        /* MinMax: '<S218>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration1'
         */
        rtb_MinMax1_l = rt_MINd_snf(rtb_Sum2_h,
          (BaseAirflowAdaptErrorUprLim_DataStore()));

        /* Outputs for atomic SubSystem: '<S203>/Idle Control Enable Delay' */
        /* S-Function Block: <S217>/motohawk_delta_time */
        rtb_motohawk_delta_time_ax = 0.005;

        /* Switch: '<S217>/Switch' incorporates:
         *  Constant: '<S217>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S217>/motohawk_delta_time'
         *  Sum: '<S217>/Sum'
         */
        if (BaseEngineController_A02_B.s222_RelOp) {
          rtb_Sum2_h = rtb_motohawk_delta_time_ax + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_h = 0.0;
        }

        /* RelationalOperator: '<S215>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration1'
         */
        rtb_RelOp_e = (rtb_Sum2_h > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S217>/Saturation' */
        rtb_Saturation_m = rt_SATURATE(rtb_Sum2_h, 0.0, 16000.0);

        /* S-Function (motohawk_sfun_data_write): '<S217>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_m;
        }

        /* end of Outputs for SubSystem: '<S203>/Idle Control Enable Delay' */

        /* Logic: '<S203>/Logical Operator1' incorporates:
         *  Abs: '<S203>/Abs'
         *  RelationalOperator: '<S203>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration4'
         */
        BaseEngineController_A02_B.s203_LogicalOperator1 =
          ((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_e && (fabs
            (rtb_UnitDelay1_a) <= (BaseAirflowAdaptDelta_DataStore())));

        /* Outputs for enable SubSystem: '<S203>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S214>/Enable'
         */
        if (BaseEngineController_A02_B.s203_LogicalOperator1) {
          /* S-Function Block: <S214>/motohawk_adapt_table */
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

        /* end of Outputs for SubSystem: '<S203>/Adapt Base Airflow Table' */
      }

      /* end of Outputs for SubSystem: '<S136>/Base Airflow Table Adapt' */
      /* S-Function Block: <S205>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s205_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_dw = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S205>/Multiport Switch' incorporates:
       *  Gain: '<S205>/Ramp Down'
       *  Product: '<S205>/Product'
       *  Product: '<S205>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
       */
      if ((int32_T)BaseEngineController_A02_B.s222_RelOp == 0) {
        /* Switch: '<S205>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_h = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_h = rtb_motohawk_delta_time_dw;
        }

        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_Sum2_h * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_motohawk_delta_time_dw;
      }

      /* Sum: '<S205>/Sum' incorporates:
       *  UnitDelay: '<S205>/state'
       */
      rtb_Product5 += BaseEngineController_A02_DWork.s205_state_DSTATE;

      /* MinMax: '<S219>/MinMax' incorporates:
       *  Constant: '<S205>/Constant'
       */
      rtb_Sum2_h = rt_MAXd_snf(rtb_Product5, 0.0);

      /* MinMax: '<S219>/MinMax1' incorporates:
       *  Constant: '<S205>/Constant1'
       */
      BaseEngineController_A02_B.s219_MinMax1 = rt_MINd_snf(rtb_Sum2_h, 1.0);

      /* RelationalOperator: '<S208>/RelOp' incorporates:
       *  Constant: '<S208>/Constant'
       */
      rtb_RelOp_e = (BaseEngineController_A02_B.s219_MinMax1 == 0.0);

      /* UnitDelay: '<S136>/Unit Delay2' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s136_UnitDelay2_DSTATE;

      /* HitCross: '<S136>/Hit  Crossing1' */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_A02_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_A02_DWork.s136_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_A02_DWork.s136_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_A02_B.s136_HitCrossing1 =
            !BaseEngineController_A02_B.s136_HitCrossing1;
          BaseEngineController_A02_DWork.s136_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_A02_B.s136_HitCrossing1 && (rtb_Sum2_h != 0.5))
          {
            BaseEngineController_A02_B.s136_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_h != 0.5) {
          BaseEngineController_A02_B.s136_HitCrossing1 = FALSE;
        }

        BaseEngineController_A02_DWork.s136_HitCrossing1_MODE = 0;
      }

      /* Logic: '<S136>/Logical Operator' */
      BaseEngineController_A02_B.s136_LogicalOperator = (rtb_RelOp_e ||
        BaseEngineController_A02_B.s136_HitCrossing1);

      /* Logic: '<S209>/Logical Operator' */
      rtb_LogicalOperator_b = !BaseEngineController_A02_B.s222_RelOp;

      /* S-Function Block: <S209>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s209_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S209>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s209_UnitDelay_DSTATE;

      /* Switch: '<S209>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S209>/Constant'
       *  Product: '<S209>/Product2'
       *  Product: '<S209>/Product3'
       *  Sum: '<S209>/Sum'
       *  Sum: '<S209>/Sum1'
       */
      if (rtb_LogicalOperator_b) {
        rtb_Product5 = BaseEngineController_A02_B.s407_RPMInst;
      } else {
        /* Product: '<S209>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S209>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S209>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_h /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_m * rtb_UnitDelay1_a;
      }

      /* MinMax: '<S209>/Don\'t allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        = rt_MAXd_snf(rtb_motohawk_interpolation_1d2_m, rtb_Product5);

      /* Sum: '<S235>/Sum2' */
      BaseEngineController_A02_B.s235_Sum2 =
        BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s556_Sum1;

      /* Product: '<S235>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_A02_B.s235_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S211>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s235_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s235_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S233>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S235>/Product2' incorporates:
       *  Product: '<S233>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s235_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S236>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s236_UnitDelay_DSTATE;

      /* S-Function Block: <S233>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S235>/Product4' incorporates:
       *  Product: '<S233>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S236>/motohawk_delta_time */
      rtb_motohawk_delta_time_c = 0.005;

      /* Product: '<S236>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S236>/motohawk_delta_time'
       *  Sum: '<S236>/Sum2'
       */
      BaseEngineController_A02_B.s236_Product = (rtb_Product4 - rtb_Sum2_h) /
        rtb_motohawk_delta_time_c;

      /* Switch: '<S237>/Switch1' incorporates:
       *  Constant: '<S211>/Constant'
       *  UnitDelay: '<S237>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s136_LogicalOperator) {
        BaseEngineController_A02_B.s237_Switch1 = 0.0;
      } else {
        BaseEngineController_A02_B.s237_Switch1 =
          BaseEngineController_A02_DWork.s237_UnitDelay_DSTATE;
      }

      /* Switch: '<S211>/Switch' incorporates:
       *  Constant: '<S211>/Constant1'
       *  MinMax: '<S234>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration2'
       */
      if (BaseEngineController_A02_B.s136_LogicalOperator) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* Sum: '<S235>/Sum1' */
        rtb_Sum2_h = (BaseEngineController_A02_B.s235_Product2 +
                      BaseEngineController_A02_B.s236_Product) +
          BaseEngineController_A02_B.s237_Switch1;

        /* MinMax: '<S234>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration9'
         */
        rtb_Sum2_h = rt_MAXd_snf(rtb_Sum2_h,
          (AirMinGovPIDOutLowerLimit_DataStore()));
        rtb_UnitDelay1_a = rt_MINd_snf(rtb_Sum2_h,
          (AirMinGovPIDOutUpperLimit_DataStore()));
      }

      /* Product: '<S136>/Product1' */
      BaseEngineController_A02_B.s136_MinGovAirPID =
        BaseEngineController_A02_B.s219_MinMax1 * rtb_UnitDelay1_a;

      /* Sum: '<S230>/Sum1' */
      BaseEngineController_A02_B.s230_Sum1 =
        BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s556_Sum1;

      /* Product: '<S230>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration4'
       */
      rtb_UnitDelay1_a = BaseEngineController_A02_B.s230_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S210>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s230_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s230_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S228>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_b;
      }

      /* Product: '<S230>/Product' incorporates:
       *  Product: '<S228>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S228>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S210>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s230_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_b * rtb_UnitDelay1_a;

      /* UnitDelay: '<S231>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE;

      /* S-Function Block: <S228>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S230>/Product2' incorporates:
       *  Product: '<S228>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S228>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S210>/motohawk_prelookup1'
       */
      rtb_Product2_h = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_a;

      /* S-Function Block: <S231>/motohawk_delta_time */
      rtb_motohawk_delta_time_b = 0.005;

      /* Product: '<S231>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
       *  Sum: '<S231>/Sum2'
       */
      BaseEngineController_A02_B.s231_Product = (rtb_Product2_h - rtb_Sum2_h) /
        rtb_motohawk_delta_time_b;

      /* Switch: '<S210>/Switch' incorporates:
       *  Constant: '<S210>/Constant1'
       *  MinMax: '<S229>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration1'
       */
      if (rtb_RelOp_e) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* Sum: '<S230>/Sum' */
        rtb_Sum2_h = BaseEngineController_A02_B.s230_Product +
          BaseEngineController_A02_B.s231_Product;

        /* MinMax: '<S229>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration9'
         */
        rtb_Sum2_h = rt_MAXd_snf(rtb_Sum2_h,
          (SpkMinGovPIDOutLowerLimit_DataStore()));
        rtb_UnitDelay1_a = rt_MINd_snf(rtb_Sum2_h,
          (SpkMinGovPIDOutUpperLimit_DataStore()));
      }

      /* Product: '<S136>/Product' */
      BaseEngineController_A02_B.s136_IdleSpk =
        BaseEngineController_A02_B.s219_MinMax1 * rtb_UnitDelay1_a;

      /* Outputs for atomic SubSystem: '<S136>/AiflowOffset' */
      /* S-Function Block: <S202>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s359_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_d;
      }

      /* RelationalOperator: '<S213>/RelOp' incorporates:
       *  Constant: '<S213>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read'
       */
      rtb_RelOp_e = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S202>/Logical Operator' incorporates:
       *  RelationalOperator: '<S202>/Relational Operator'
       *  RelationalOperator: '<S202>/Relational Operator1'
       *  UnitDelay: '<S202>/Unit Delay'
       */
      rtb_LogicalOperator_b = (((int32_T)rtb_RelOp_e < (int32_T)
        BaseEngineController_A02_DWork.s202_UnitDelay_DSTATE) || ((int32_T)
        rtb_RelOp_e == (int32_T)
        BaseEngineController_A02_DWork.s202_UnitDelay_DSTATE));

      /* S-Function Block: <S212>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s212_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_ao = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S212>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s212_UnitDelay_DSTATE;

      /* Switch: '<S212>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S212>/Constant'
       *  Logic: '<S212>/Logical Operator'
       *  Product: '<S212>/Product2'
       *  Product: '<S212>/Product3'
       *  Sum: '<S212>/Sum'
       *  Sum: '<S212>/Sum1'
       */
      if (!rtb_LogicalOperator_b) {
        rtb_Sum2_h = BaseEngineController_A02_B.s374_Switch2;
      } else {
        /* Product: '<S212>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S212>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_ao /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_h = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_d * rtb_UnitDelay1_a;
      }

      /* MinMax: '<S212>/Don\'t allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        = rt_MAXd_snf(rtb_motohawk_interpolation_1d2_d, rtb_Sum2_h);

      /* Update for UnitDelay: '<S202>/Unit Delay' */
      BaseEngineController_A02_DWork.s202_UnitDelay_DSTATE = rtb_RelOp_e;

      /* Update for UnitDelay: '<S212>/Unit Delay' */
      BaseEngineController_A02_DWork.s212_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* end of Outputs for SubSystem: '<S136>/AiflowOffset' */

      /* Saturate: '<S223>/Saturation' */
      rtb_Saturation_f = rt_SATURATE(rtb_Switch_l, 0.0, 16000.0);

      /* S-Function (motohawk_sfun_data_write): '<S223>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_f;
      }

      /* S-Function Block: <S227>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Sum: '<S207>/Sum' */
      rtb_Sum2_h = BaseEngineController_A02_B.s556_Sum1 -
        BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S227>/Switch' incorporates:
       *  Constant: '<S227>/Constant'
       *  RelationalOperator: '<S207>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S227>/motohawk_delta_time'
       *  Sum: '<S227>/Sum'
       */
      if (rtb_Sum2_h > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_A02_B.s227_Switch = rtb_motohawk_delta_time_a +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_A02_B.s227_Switch = 0.0;
      }

      /* RelationalOperator: '<S207>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s207_RelationalOperator1 =
        (BaseEngineController_A02_B.s227_Switch >
         (MotoringDtctTimerLimit_DataStore()));

      /* DataTypeConversion: '<S207>/Data Type Conversion' */
      rtb_DataTypeConversion_d =
        BaseEngineController_A02_B.s207_RelationalOperator1;

      /* Saturate: '<S227>/Saturation' */
      rtb_Saturation_a = rt_SATURATE(BaseEngineController_A02_B.s227_Switch, 0.0,
        16000.0);

      /* S-Function (motohawk_sfun_data_write): '<S227>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_a;
      }

      /* S-Function Block: <S233>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S233>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      rtb_Sum2_h = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g;

      /* S-Function Block: <S237>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bd = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S237>/Sum' incorporates:
       *  Product: '<S235>/Product1'
       *  Product: '<S237>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S237>/motohawk_delta_time'
       */
      rtb_UnitDelay1_a = rtb_Product5 * rtb_Sum2_h * rtb_motohawk_delta_time_bd
        + BaseEngineController_A02_B.s237_Switch1;

      /* MinMax: '<S239>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration7'
       */
      rtb_Sum2_h = rt_MAXd_snf(rtb_UnitDelay1_a,
        (AirMinGovITermLowerLimit_DataStore()));

      /* MinMax: '<S239>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration8'
       */
      rtb_Sum2_h = rt_MINd_snf(rtb_Sum2_h, (AirMinGovITermUpperLimit_DataStore()));

      /* Update for UnitDelay: '<S224>/Unit Delay' */
      BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s407_RPMInst;

      /* Update for UnitDelay: '<S226>/Unit Delay' */
      BaseEngineController_A02_DWork.s226_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S136>/Unit Delay3' */
      BaseEngineController_A02_DWork.s136_UnitDelay3_DSTATE =
        BaseEngineController_A02_B.s136_MinGovAirPID;

      /* Update for UnitDelay: '<S136>/Unit Delay1' */
      BaseEngineController_A02_DWork.s136_UnitDelay1_DSTATE =
        BaseEngineController_A02_B.s237_Switch1;

      /* Update for UnitDelay: '<S205>/state' */
      BaseEngineController_A02_DWork.s205_state_DSTATE =
        BaseEngineController_A02_B.s219_MinMax1;

      /* Update for UnitDelay: '<S136>/Unit Delay2' */
      BaseEngineController_A02_DWork.s136_UnitDelay2_DSTATE = (real_T)
        rtb_DataTypeConversion_d;

      /* Update for UnitDelay: '<S209>/Unit Delay' */
      BaseEngineController_A02_DWork.s209_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S236>/Unit Delay' */
      BaseEngineController_A02_DWork.s236_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S237>/Unit Delay' */
      BaseEngineController_A02_DWork.s237_UnitDelay_DSTATE = rtb_Sum2_h;

      /* Update for UnitDelay: '<S231>/Unit Delay' */
      BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = rtb_Product2_h;
    }

    /* Output and update for function-call system: '<S121>/MaxGovernor' */
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

      /* Sum: '<S135>/Sum' */
      BaseEngineController_A02_B.s135_Sum =
        BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_B.s382_Sum2;

      /* Outputs for enable SubSystem: '<S188>/InGear' incorporates:
       *  Constant: '<S406>/Constant'
       *  EnablePort: '<S191>/Enable'
       */

      /* S-Function (motohawk_sfun_data_read): '<S191>/motohawk_data_read' */
      rtb_MinMax_l = MaxGovInGearSetPoint_DataStore();

      /* MinMax: '<S193>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration3'
       */
      rtb_MinMax_l = rt_MAXd_snf(rtb_MinMax_l, (MaxGovInGearLowerLim_DataStore()));

      /* MinMax: '<S193>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s188_Merge = rt_MINd_snf(rtb_MinMax_l,
        (MaxGovInGearUpperLim_DataStore()));

      /* S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration4' */
      BaseEngineController_A02_B.s188_Merge1 = (MaxGovInGearRPMThresh_DataStore());

      /* S-Function (motohawk_sfun_data_write): '<S191>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration1'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
      }

      /* S-Function (motohawk_sfun_data_write): '<S191>/motohawk_data_write1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration2'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
      }

      /* end of Outputs for SubSystem: '<S188>/InGear' */

      /* RelationalOperator: '<S188>/Relational Operator' incorporates:
       *  Sum: '<S188>/Sum1'
       */
      rtb_RelationalOperator_m = (BaseEngineController_A02_B.s407_RPMInst >
        BaseEngineController_A02_B.s188_Merge -
        BaseEngineController_A02_B.s188_Merge1);

      /* RelationalOperator: '<S186>/Relational Operator2' */
      rtb_RelationalOperator2_j0 = (BaseEngineController_A02_B.s407_RPMInst >
        BaseEngineController_A02_B.s188_Merge);

      /* RelationalOperator: '<S186>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration5'
       *  Sum: '<S186>/Sum'
       */
      rtb_RelationalOperator_hj = (BaseEngineController_A02_B.s135_Sum <=
        BaseEngineController_A02_B.s374_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S186>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S186>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration5'
       *  Sum: '<S186>/Sum1'
       */
      rtb_LogicalOperator1_fi = (rtb_RelationalOperator_m &&
        (BaseEngineController_A02_B.s135_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_A02_B.s374_Switch2));

      /* Embedded MATLAB: '<S186>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S186>/Logical Operator'
       *  Logic: '<S186>/Logical Operator2'
       *  Logic: '<S186>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S186>/motohawk_data_read'
       */
      /* Embedded MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S190>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_m ||
            rtb_RelationalOperator2_j0) == 1)) {
        /* '<S190>:1:3' */
        /* '<S190>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && ((int32_T)
                  rtb_RelationalOperator_hj == 1)) {
        /* '<S190>:1:5' */
        /* '<S190>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_fi ||
                   rtb_RelationalOperator2_j0) == 1)) {
        /* '<S190>:1:7' */
        /* '<S190>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_m == 1))
      {
        /* '<S190>:1:9' */
        /* '<S190>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S190>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S190>:1:15' */
        /* '<S190>:1:16' */
        rtb_ETCMode = 0;

        /* '<S190>:1:17' */
        rtb_Hold = 0.0;

        /* '<S190>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S190>:1:19' */
        /* '<S190>:1:20' */
        rtb_ETCMode = 1;

        /* '<S190>:1:21' */
        rtb_Hold = 0.0;

        /* '<S190>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S190>:1:23' */
        /* '<S190>:1:24' */
        rtb_ETCMode = 0;

        /* '<S190>:1:25' */
        rtb_Hold = 1.0;

        /* '<S190>:1:26' */
      } else {
        /* '<S190>:1:28' */
        rtb_ETCMode = 0;

        /* '<S190>:1:29' */
        rtb_Hold = 0.0;

        /* '<S190>:1:30' */
      }

      /* DataTypeConversion: '<S186>/Data Type Conversion' */
      BaseEngineController_A02_B.s186_DataTypeConversion = 0;

      /* Logic: '<S187>/Logical Operator' incorporates:
       *  UnitDelay: '<S135>/Unit Delay'
       */
      rtb_RelationalOperator_m =
        !BaseEngineController_A02_DWork.s135_UnitDelay_DSTATE;

      /* S-Function Block: <S187>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s187_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S187>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s187_UnitDelay_DSTATE;

      /* Switch: '<S187>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S187>/Constant'
       *  Product: '<S187>/Product2'
       *  Product: '<S187>/Product3'
       *  Sum: '<S187>/Sum'
       *  Sum: '<S187>/Sum1'
       */
      if (rtb_RelationalOperator_m) {
        rtb_alpha_o = BaseEngineController_A02_B.s407_RPMInst;
      } else {
        /* Product: '<S187>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S187>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_j /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset +
          BaseEngineController_A02_B.s188_Merge * rtb_alpha_o;
      }

      /* MinMax: '<S187>/Don\'t allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM
        = rt_MINd_snf(BaseEngineController_A02_B.s188_Merge, rtb_alpha_o);

      /* DataTypeConversion: '<S186>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)(int32_T)rtb_Hold, 256.0);
      BaseEngineController_A02_B.s186_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int32_T)(int8_T)(-((int8_T)(uint8_T)(-rtb_Reset))) : (int32_T)
        (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S189>/Switch1' */
      if (BaseEngineController_A02_B.s186_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_A02_B.s407_RPMInst;
      }

      /* Sum: '<S197>/Sum2' */
      BaseEngineController_A02_B.s197_Sum2 =
        BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S197>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_A02_B.s197_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S189>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_A02_B.s197_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s197_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_k = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S189>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_e;
      }

      /* Product: '<S197>/Product2' incorporates:
       *  Product: '<S189>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S189>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S189>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s197_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_e * rtb_alpha_o;

      /* UnitDelay: '<S198>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE;

      /* S-Function Block: <S189>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S197>/Product4' incorporates:
       *  Product: '<S189>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S189>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S189>/motohawk_prelookup1'
       */
      rtb_Hold = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_f *
        rtb_alpha_o;

      /* S-Function Block: <S198>/motohawk_delta_time */
      rtb_motohawk_delta_time_ph = 0.005;

      /* Product: '<S198>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S198>/motohawk_delta_time'
       *  Sum: '<S198>/Sum2'
       */
      BaseEngineController_A02_B.s198_Product = (rtb_Hold - rtb_Reset) /
        rtb_motohawk_delta_time_ph;

      /* Outputs for atomic SubSystem: '<S135>/I-Term Preload' */
      /* S-Function Block: <S185>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_l = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s323_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_l;
      }

      /* Sum: '<S185>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S185>/motohawk_interpolation_1d4'
       */
      BaseEngineController_A02_B.s185_Sum = BaseEngineController_A02_B.s135_Sum
        - rtb_motohawk_interpolation_1d4_l;

      /* end of Outputs for SubSystem: '<S135>/I-Term Preload' */

      /* Switch: '<S199>/Switch1' incorporates:
       *  DataTypeConversion: '<S199>/Data Type Conversion'
       *  UnitDelay: '<S199>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s186_DataTypeConversion != 0) {
        BaseEngineController_A02_B.s199_Switch1 =
          BaseEngineController_A02_B.s185_Sum;
      } else {
        BaseEngineController_A02_B.s199_Switch1 =
          BaseEngineController_A02_DWork.s199_UnitDelay_DSTATE;
      }

      /* Switch: '<S189>/Switch' incorporates:
       *  Constant: '<S189>/Constant'
       *  MinMax: '<S196>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration2'
       */
      if (BaseEngineController_A02_B.s186_DataTypeConversion >= 1) {
        BaseEngineController_A02_B.s189_Switch = 0.0;
      } else {
        /* Sum: '<S197>/Sum1' */
        rtb_Reset = (BaseEngineController_A02_B.s197_Product2 +
                     BaseEngineController_A02_B.s198_Product) +
          BaseEngineController_A02_B.s199_Switch1;

        /* MinMax: '<S196>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration9'
         */
        rtb_Reset = rt_MAXd_snf(rtb_Reset, (MaxGovPIDOutLowerLimit_DataStore()));
        BaseEngineController_A02_B.s189_Switch = rt_MINd_snf(rtb_Reset,
          (MaxGovPIDOutUpperLimit_DataStore()));
      }

      /* S-Function (motohawk_sfun_data_write): '<S186>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S186>/Multiport Switch' incorporates:
       *  Constant: '<S186>/Constant'
       *  DataTypeConversion: '<S186>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration1'
       */
      if ((int32_T)(MaxGovDisable_DataStore()) == 0) {
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_A02_B.s186_MultiportSwitch = ((rtb_Reset < 0.0 ?
          (int32_T)(int8_T)(-((int8_T)(uint8_T)(-rtb_Reset))) : (int32_T)(int8_T)
          (uint8_T)rtb_Reset) != 0);
      } else {
        BaseEngineController_A02_B.s186_MultiportSwitch = FALSE;
      }

      /* S-Function Block: <S189>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S197>/Product1' incorporates:
       *  Product: '<S189>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S189>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S189>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S199>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s199_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S199>/Sum' incorporates:
       *  Product: '<S199>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S199>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_k +
        BaseEngineController_A02_B.s199_Switch1;

      /* MinMax: '<S201>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration7'
       */
      rtb_Reset = rt_MAXd_snf(rtb_alpha_o, (MaxGovITermLowerLimit_DataStore()));

      /* MinMax: '<S201>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration8'
       */
      rtb_Reset = rt_MINd_snf(rtb_Reset, (MaxGovITermUpperLimit_DataStore()));

      /* Update for UnitDelay: '<S135>/Unit Delay' */
      BaseEngineController_A02_DWork.s135_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s186_MultiportSwitch;

      /* Update for UnitDelay: '<S187>/Unit Delay' */
      BaseEngineController_A02_DWork.s187_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S198>/Unit Delay' */
      BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE = rtb_Hold;

      /* Update for UnitDelay: '<S199>/Unit Delay' */
      BaseEngineController_A02_DWork.s199_UnitDelay_DSTATE = rtb_Reset;
    }

    /* Output and update for function-call system: '<S121>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d;
      real_T rtb_RichEquivRatioTargetDelta_n;
      real_T rtb_motohawk_interpolation_1d1_o;
      real_T rtb_RichEquivRatioTargetDelta_j;
      real_T rtb_motohawk_interpolation_1d_d;
      real_T rtb_RichEquivRatioTargetDelta_a;
      real_T rtb_motohawk_interpolation_1d_b;
      real_T rtb_RichEquivRatioTargetDelta_nw;
      real_T rtb_motohawk_interpolation_1d_i;
      real_T rtb_RichEquivRatioTargetDelta_h;
      real_T rtb_motohawk_interpolation_1d4_i;
      index_T rtb_motohawk_prelookup;
      index_T rtb_motohawk_prelookup_l;
      index_T rtb_motohawk_prelookup_i;
      real_T rtb_Product_d;
      real_T rtb_Switch1_m;

      /* S-Function Block: <S139>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup4,
           BaseEngineController_A02_B.s361_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S264>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s359_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S264>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_n = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_n;
      }

      /* Product: '<S264>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S264>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S264>/motohawk_interpolation_2d3'
       */
      rtb_Product_d = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_n;

      /* S-Function Block: <S264>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s360_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S264>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
      }

      /* Sum: '<S264>/Add' incorporates:
       *  Product: '<S264>/Product1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S264>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S264>/motohawk_interpolation_2d1'
       */
      BaseEngineController_A02_B.s264_Add = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_j + rtb_Product_d;

      /* S-Function Block: <S259>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) =
          BaseEngineController_A02_B.s132_DesEquivRatio;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s132_DesEquivRatio,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S259>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_d;
      }

      /* S-Function Block: <S259>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_a = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_a;
      }

      /* Product: '<S259>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S259>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S259>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s259_Product = rtb_motohawk_interpolation_1d_d *
        rtb_RichEquivRatioTargetDelta_a;

      /* S-Function Block: <S261>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EthanolPreLookupIn_DataStore()) = BaseEngineController_A02_B.s578_Merge;
        (EthanolPreLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s578_Merge,
           (EthanolPreLookupIdxArr_DataStore()), 11,
           (EthanolPreLookupIdx_DataStore()));
        rtb_motohawk_prelookup_l = (EthanolPreLookupIdx_DataStore());
      }

      /* S-Function Block: <S261>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_l, (real_T *)
           ((EthanolInterpolationTbl_DataStore())), 11);
        (EthanolInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_b;
      }

      /* S-Function Block: <S261>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_nw = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_nw;
      }

      /* Product: '<S261>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S261>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S261>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S261>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s261_Product = rtb_motohawk_interpolation_1d_b *
        rtb_RichEquivRatioTargetDelta_nw;

      /* S-Function Block: <S260>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EGRLookupIn_DataStore()) = BaseEngineController_A02_B.s570_Merge;
        (EGRLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s570_Merge, (EGRLookupIdxArr_DataStore()),
           11, (EGRLookupIdx_DataStore()));
        rtb_motohawk_prelookup_i = (EGRLookupIdx_DataStore());
      }

      /* S-Function Block: <S260>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_i, (real_T *) ((EGRInterpolationTbl_DataStore())),
           11);
        (EGRInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_i;
      }

      /* S-Function Block: <S260>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((EGR_SpkOfstMultMap_DataStore())), 9, 9);
        (EGR_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S260>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S260>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S260>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S260>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s260_Product = rtb_motohawk_interpolation_1d_i *
        rtb_RichEquivRatioTargetDelta_h;

      /* Sum: '<S139>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S139>/motohawk_interpolation_2d2'
       *  Sum: '<S139>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_A02_B.s139_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_A02_B.s264_Add)
           + BaseEngineController_A02_B.s259_Product) +
          BaseEngineController_A02_B.s261_Product) +
         BaseEngineController_A02_B.s260_Product) +
        BaseEngineController_A02_B.s136_IdleSpk;

      /* MinMax: '<S267>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S263>/motohawk_calibration5'
       */
      rtb_Product_d = rt_MAXd_snf
        (BaseEngineController_A02_B.s139_ApplyOffsetstoBaseSparkAdvance1,
         (MinSparkLimit_DataStore()));

      /* Switch: '<S263>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S263>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S263>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_A02_B.s222_RelOp) {
        /* S-Function Block: <S263>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_i = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s402_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_i;
        }

        rtb_Switch1_m = rtb_motohawk_interpolation_1d4_i;
      } else {
        rtb_Switch1_m = (MaxSparkLimitOffIdle_DataStore());
      }

      /* MinMax: '<S267>/MinMax1' */
      BaseEngineController_A02_B.s267_MinMax1 = rt_MINd_snf(rtb_Product_d,
        rtb_Switch1_m);

      /* UnitDelay: '<S262>/Unit Delay' */
      rtb_Product_d = BaseEngineController_A02_DWork.s262_UnitDelay_DSTATE;

      /* Switch: '<S262>/Switch' incorporates:
       *  MinMax: '<S266>/MinMax1'
       *  UnitDelay: '<S265>/Initial Condition is True'
       */
      if (BaseEngineController_A02_DWork.s265_InitialConditionisTrue_DSTATE) {
        BaseEngineController_A02_B.s262_Switch =
          BaseEngineController_A02_B.s267_MinMax1;
      } else {
        /* Sum: '<S262>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration'
         */
        rtb_Switch1_m = rtb_Product_d + (SparkAdv_DeltaHi_DataStore());

        /* Sum: '<S262>/Sum1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration1'
         */
        rtb_Product_d -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S266>/MinMax' */
        rtb_Product_d = rt_MAXd_snf(BaseEngineController_A02_B.s267_MinMax1,
          rtb_Product_d);
        BaseEngineController_A02_B.s262_Switch = rt_MINd_snf(rtb_Product_d,
          rtb_Switch1_m);
      }

      /* S-Function Block: <S139>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_A02_B.s139_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s402_motohawk_prelookup1,
           BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_A02_B.s139_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S265>/Initial Condition is True' incorporates:
       *  Constant: '<S265>/False After First Sample'
       */
      BaseEngineController_A02_DWork.s265_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S262>/Unit Delay' */
      BaseEngineController_A02_DWork.s262_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s262_Switch;
    }
  }
}
