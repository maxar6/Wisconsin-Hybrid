/*
 * Trigger_FGND_5XRTI_PERIODIC_4024p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1615
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Apr 07 14:22:48 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4024p0001(void)
{
  /* Named constants for Stateflow: '<S805>/ECUP Latch' */
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

      /* Sum: '<S204>/Sum2' incorporates:
       *  UnitDelay: '<S204>/Unit Delay'
       */
      rtb_Sum2_h = BaseEngineController_A02_B.s361_RPMInst -
        BaseEngineController_A02_DWork.s204_UnitDelay_DSTATE;

      /* S-Function Block: <S204>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S204>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S204>/motohawk_delta_time'
       */
      rtb_Sum2_h /= rtb_motohawk_delta_time_p;

      /* S-Function Block: <S205>/motohawk_delta_time */
      rtb_Switch_l = 0.005;

      /* Product: '<S205>/Product' incorporates:
       *  MinMax: '<S205>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration'
       */
      rtb_Switch_l /= (rtb_Switch_l >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_l :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S206>/Sum1' incorporates:
       *  Constant: '<S206>/Constant'
       *  Product: '<S206>/Product'
       *  Product: '<S206>/Product1'
       *  Sum: '<S206>/Sum'
       *  UnitDelay: '<S206>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Switch_l) *
        BaseEngineController_A02_DWork.s206_UnitDelay_DSTATE + rtb_Sum2_h *
        rtb_Switch_l;

      /* RelationalOperator: '<S200>/Relational Operator' incorporates:
       *  Gain: '<S200>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S200>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s200_RelationalOperator = ((rtb_Sum1_g <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S134>/Base RPM Set Pt' */

      /* S-Function Block: <S184>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s315_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* End of Outputs for SubSystem: '<S134>/Base RPM Set Pt' */

      /* RelationalOperator: '<S186>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration4'
       *  Sum: '<S186>/Sum'
       */
      BaseEngineController_A02_B.s186_RelationalOperator =
        ((BaseEngineController_A02_B.s361_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_m));

      /* RelationalOperator: '<S186>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration6'
       *  Sum: '<S186>/Sum2'
       */
      BaseEngineController_A02_B.s186_RelationalOperator3 =
        ((BaseEngineController_A02_B.s361_RPMInst <
          rtb_motohawk_interpolation_1d2_m - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S186>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S186>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_l = BaseEngineController_A02_B.s323_Switch1;
      } else {
        rtb_Switch_l = BaseEngineController_A02_B.s329_Switch2;
      }

      /* End of MultiPortSwitch: '<S186>/Multiport Switch1' */
      /* RelationalOperator: '<S186>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s186_RelationalOperator1 = ((rtb_Switch_l <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S186>/Multiport Switch' incorporates:
       *  Constant: '<S186>/Constant'
       *  RelationalOperator: '<S186>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S186>/motohawk_data_read1'
       *  UnitDelay: '<S134>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_e = (BaseEngineController_A02_B.s336_Sum2 >
                       BaseEngineController_A02_DWork.s134_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S186>/Multiport Switch' */

      /* Logic: '<S186>/Logical Operator' incorporates:
       *  RelationalOperator: '<S186>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration5'
       *  Sum: '<S186>/Sum1'
       */
      BaseEngineController_A02_B.s186_LogicalOperator = (((rtb_Switch_l >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_e));

      /* S-Function Block: <S203>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S203>/Switch' incorporates:
       *  Constant: '<S203>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S203>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S203>/motohawk_delta_time'
       *  Sum: '<S203>/Sum'
       */
      if (BaseEngineController_A02_B.s186_RelationalOperator1) {
        rtb_Switch_l = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_l = 0.0;
      }

      /* End of Switch: '<S203>/Switch' */
      /* RelationalOperator: '<S186>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration2'
       */
      BaseEngineController_A02_B.s186_RelationalOperator5 = ((rtb_Switch_l >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S186>/IdleStateMachine' */
      BaseEngineController_A02_IdleStateMachine();

      /* RelationalOperator: '<S202>/RelOp' incorporates:
       *  Constant: '<S202>/Constant'
       */
      BaseEngineController_A02_B.s202_RelOp =
        ((BaseEngineController_A02_B.s201_IdleState == 2));

      /* UnitDelay: '<S134>/Unit Delay1' */
      rtb_UnitDelay1_a = BaseEngineController_A02_DWork.s134_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S134>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S183>/Enable'
       */
      if (BaseEngineController_A02_B.s202_RelOp) {
        /* Product: '<S183>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration2'
         */
        rtb_Sum2_h = rtb_UnitDelay1_a * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S198>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S198>/MinMax1' incorporates:
         *  MinMax: '<S198>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration1'
         */
        rtb_MinMax1_l = (rtb_Sum2_h <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S183>/Idle Control Enable Delay' */

        /* S-Function Block: <S197>/motohawk_delta_time */
        rtb_motohawk_delta_time_ax = 0.005;

        /* Switch: '<S197>/Switch' incorporates:
         *  Constant: '<S197>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S197>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S197>/motohawk_delta_time'
         *  Sum: '<S197>/Sum'
         */
        if (BaseEngineController_A02_B.s202_RelOp) {
          rtb_Sum2_h = rtb_motohawk_delta_time_ax + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_h = 0.0;
        }

        /* End of Switch: '<S197>/Switch' */
        /* RelationalOperator: '<S195>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration1'
         */
        rtb_RelOp_e = (rtb_Sum2_h > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S197>/Saturation' */
        rtb_Saturation_m = rtb_Sum2_h >= 16000.0 ? 16000.0 : rtb_Sum2_h <= 0.0 ?
          0.0 : rtb_Sum2_h;

        /* S-Function (motohawk_sfun_data_write): '<S197>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_m;
        }

        /* End of Outputs for SubSystem: '<S183>/Idle Control Enable Delay' */

        /* Logic: '<S183>/Logical Operator1' incorporates:
         *  Abs: '<S183>/Abs'
         *  RelationalOperator: '<S183>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration4'
         */
        BaseEngineController_A02_B.s183_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_e && (fabs
             (rtb_UnitDelay1_a) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S183>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S194>/Enable'
         */
        if (BaseEngineController_A02_B.s183_LogicalOperator1) {
          /* S-Function Block: <S194>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S183>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S134>/Base Airflow Table Adapt' */
      /* S-Function Block: <S185>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s185_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_dw = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S185>/Multiport Switch' incorporates:
       *  Gain: '<S185>/Ramp Down'
       *  Product: '<S185>/Product'
       *  Product: '<S185>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
       */
      if (BaseEngineController_A02_B.s202_RelOp == FALSE) {
        /* Switch: '<S185>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_h = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_h = rtb_motohawk_delta_time_dw;
        }

        /* End of Switch: '<S185>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_Sum2_h * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_motohawk_delta_time_dw;
      }

      /* End of MultiPortSwitch: '<S185>/Multiport Switch' */

      /* Sum: '<S185>/Sum' incorporates:
       *  UnitDelay: '<S185>/state'
       */
      rtb_Product5 += BaseEngineController_A02_DWork.s185_state_DSTATE;

      /* MinMax: '<S199>/MinMax1' incorporates:
       *  Constant: '<S185>/Constant'
       *  Constant: '<S185>/Constant1'
       *  MinMax: '<S199>/MinMax'
       */
      rtb_Sum2_h = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_A02_B.s199_MinMax1 = rtb_Sum2_h <= 1.0 ? rtb_Sum2_h :
        1.0;

      /* RelationalOperator: '<S188>/RelOp' incorporates:
       *  Constant: '<S188>/Constant'
       */
      rtb_RelOp_e = (BaseEngineController_A02_B.s199_MinMax1 == 0.0);

      /* UnitDelay: '<S134>/Unit Delay2' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s134_UnitDelay2_DSTATE;

      /* HitCross: '<S134>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S134>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_A02_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_A02_DWork.s134_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_A02_DWork.s134_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_A02_B.s134_HitCrossing1 =
            !BaseEngineController_A02_B.s134_HitCrossing1;
          BaseEngineController_A02_DWork.s134_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_A02_B.s134_HitCrossing1 && (rtb_Sum2_h != 0.5))
          {
            BaseEngineController_A02_B.s134_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_h != 0.5) {
          BaseEngineController_A02_B.s134_HitCrossing1 = FALSE;
        }

        BaseEngineController_A02_DWork.s134_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S134>/Hit  Crossing1' */

      /* Logic: '<S134>/Logical Operator' */
      BaseEngineController_A02_B.s134_LogicalOperator = ((rtb_RelOp_e ||
        BaseEngineController_A02_B.s134_HitCrossing1));

      /* Logic: '<S189>/Logical Operator' */
      rtb_LogicalOperator_b = !BaseEngineController_A02_B.s202_RelOp;

      /* S-Function Block: <S189>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s189_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S189>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s189_UnitDelay_DSTATE;

      /* Switch: '<S189>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S189>/Constant'
       *  Product: '<S189>/Product2'
       *  Product: '<S189>/Product3'
       *  Sum: '<S189>/Sum'
       *  Sum: '<S189>/Sum1'
       */
      if (rtb_LogicalOperator_b) {
        rtb_Product5 = BaseEngineController_A02_B.s361_RPMInst;
      } else {
        /* Product: '<S189>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S189>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_h /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_m * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S189>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S189>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_m >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_m : rtb_Product5;

      /* Sum: '<S215>/Sum2' */
      BaseEngineController_A02_B.s215_Sum2 =
        BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s520_Sum1;

      /* Product: '<S215>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_A02_B.s215_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S191>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s215_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s215_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S213>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S215>/Product2' incorporates:
       *  Product: '<S213>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S213>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S191>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s215_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S216>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s216_UnitDelay_DSTATE;

      /* S-Function Block: <S213>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S215>/Product4' incorporates:
       *  Product: '<S213>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S213>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S191>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S216>/motohawk_delta_time */
      rtb_motohawk_delta_time_c = 0.005;

      /* Product: '<S216>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S216>/motohawk_delta_time'
       *  Sum: '<S216>/Sum2'
       */
      BaseEngineController_A02_B.s216_Product = (rtb_Product4 - rtb_Sum2_h) /
        rtb_motohawk_delta_time_c;

      /* Switch: '<S217>/Switch1' incorporates:
       *  Constant: '<S191>/Constant'
       *  UnitDelay: '<S217>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s134_LogicalOperator) {
        BaseEngineController_A02_B.s217_Switch1 = 0.0;
      } else {
        BaseEngineController_A02_B.s217_Switch1 =
          BaseEngineController_A02_DWork.s217_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S217>/Switch1' */

      /* Switch: '<S191>/Switch' incorporates:
       *  Constant: '<S191>/Constant1'
       */
      if (BaseEngineController_A02_B.s134_LogicalOperator) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S214>/MinMax' incorporates:
         *  Sum: '<S215>/Sum1'
         */
        rtb_Sum2_h = (BaseEngineController_A02_B.s215_Product2 +
                      BaseEngineController_A02_B.s216_Product) +
          BaseEngineController_A02_B.s217_Switch1;

        /* MinMax: '<S214>/MinMax1' incorporates:
         *  MinMax: '<S214>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S191>/Switch' */

      /* Product: '<S134>/Product1' */
      BaseEngineController_A02_B.s134_MinGovAirPID =
        BaseEngineController_A02_B.s199_MinMax1 * rtb_UnitDelay1_a;

      /* Sum: '<S210>/Sum1' */
      BaseEngineController_A02_B.s210_Sum1 =
        BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s520_Sum1;

      /* Product: '<S210>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
       */
      rtb_UnitDelay1_a = BaseEngineController_A02_B.s210_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S190>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s210_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s210_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S208>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_b;
      }

      /* Product: '<S210>/Product' incorporates:
       *  Product: '<S208>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S208>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S190>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s210_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_b * rtb_UnitDelay1_a;

      /* UnitDelay: '<S211>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE;

      /* S-Function Block: <S208>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S210>/Product2' incorporates:
       *  Product: '<S208>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S208>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S190>/motohawk_prelookup1'
       */
      rtb_Product2_h = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_a;

      /* S-Function Block: <S211>/motohawk_delta_time */
      rtb_motohawk_delta_time_b = 0.005;

      /* Product: '<S211>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S211>/motohawk_delta_time'
       *  Sum: '<S211>/Sum2'
       */
      BaseEngineController_A02_B.s211_Product = (rtb_Product2_h - rtb_Sum2_h) /
        rtb_motohawk_delta_time_b;

      /* Switch: '<S190>/Switch' incorporates:
       *  Constant: '<S190>/Constant1'
       */
      if (rtb_RelOp_e) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S209>/MinMax' incorporates:
         *  Sum: '<S210>/Sum'
         */
        rtb_Sum2_h = BaseEngineController_A02_B.s210_Product +
          BaseEngineController_A02_B.s211_Product;

        /* MinMax: '<S209>/MinMax1' incorporates:
         *  MinMax: '<S209>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S190>/Switch' */

      /* Product: '<S134>/Product' */
      BaseEngineController_A02_B.s134_IdleSpk =
        BaseEngineController_A02_B.s199_MinMax1 * rtb_UnitDelay1_a;

      /* Outputs for Atomic SubSystem: '<S134>/AiflowOffset' */

      /* S-Function Block: <S182>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s315_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_d;
      }

      /* RelationalOperator: '<S193>/RelOp' incorporates:
       *  Constant: '<S193>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S182>/motohawk_data_read'
       */
      rtb_RelOp_e = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S182>/Logical Operator' incorporates:
       *  RelationalOperator: '<S182>/Relational Operator'
       *  RelationalOperator: '<S182>/Relational Operator1'
       *  UnitDelay: '<S182>/Unit Delay'
       */
      rtb_LogicalOperator_b = ((rtb_RelOp_e <
        BaseEngineController_A02_DWork.s182_UnitDelay_DSTATE) || (rtb_RelOp_e ==
        BaseEngineController_A02_DWork.s182_UnitDelay_DSTATE));

      /* S-Function Block: <S192>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s192_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_ao = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S192>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s192_UnitDelay_DSTATE;

      /* Switch: '<S192>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S192>/Constant'
       *  Logic: '<S192>/Logical Operator'
       *  Product: '<S192>/Product2'
       *  Product: '<S192>/Product3'
       *  Sum: '<S192>/Sum'
       *  Sum: '<S192>/Sum1'
       */
      if (!rtb_LogicalOperator_b) {
        rtb_Sum2_h = BaseEngineController_A02_B.s329_Switch2;
      } else {
        /* Product: '<S192>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S192>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_ao /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_h = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_d * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S192>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S192>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_d >= rtb_Sum2_h) || rtIsNaN(rtb_Sum2_h)
        ? rtb_motohawk_interpolation_1d2_d : rtb_Sum2_h;

      /* Update for UnitDelay: '<S182>/Unit Delay' */
      BaseEngineController_A02_DWork.s182_UnitDelay_DSTATE = rtb_RelOp_e;

      /* Update for UnitDelay: '<S192>/Unit Delay' */
      BaseEngineController_A02_DWork.s192_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S134>/AiflowOffset' */

      /* Saturate: '<S203>/Saturation' */
      rtb_Saturation_f = rtb_Switch_l >= 16000.0 ? 16000.0 : rtb_Switch_l <= 0.0
        ? 0.0 : rtb_Switch_l;

      /* S-Function (motohawk_sfun_data_write): '<S203>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_f;
      }

      /* S-Function Block: <S207>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Sum: '<S187>/Sum' */
      rtb_Sum2_h = BaseEngineController_A02_B.s520_Sum1 -
        BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S207>/Switch' incorporates:
       *  Constant: '<S207>/Constant'
       *  RelationalOperator: '<S187>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S207>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S207>/motohawk_delta_time'
       *  Sum: '<S207>/Sum'
       */
      if (rtb_Sum2_h > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_A02_B.s207_Switch = rtb_motohawk_delta_time_a +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_A02_B.s207_Switch = 0.0;
      }

      /* End of Switch: '<S207>/Switch' */

      /* RelationalOperator: '<S187>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s187_RelationalOperator1 =
        ((BaseEngineController_A02_B.s207_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S187>/Data Type Conversion' */
      rtb_DataTypeConversion_d =
        BaseEngineController_A02_B.s187_RelationalOperator1;

      /* Saturate: '<S207>/Saturation' */
      rtb_Saturation_a = BaseEngineController_A02_B.s207_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s207_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s207_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S207>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_a;
      }

      /* S-Function Block: <S213>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S213>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S213>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S191>/motohawk_prelookup1'
       */
      rtb_Sum2_h = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g;

      /* S-Function Block: <S217>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s217_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bd = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S217>/Sum' incorporates:
       *  Product: '<S215>/Product1'
       *  Product: '<S217>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S217>/motohawk_delta_time'
       */
      rtb_UnitDelay1_a = rtb_Product5 * rtb_Sum2_h * rtb_motohawk_delta_time_bd
        + BaseEngineController_A02_B.s217_Switch1;

      /* MinMax: '<S219>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration7'
       */
      rtb_Sum2_h = (rtb_UnitDelay1_a >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_a :
        (AirMinGovITermLowerLimit_DataStore());

      /* MinMax: '<S219>/MinMax1' incorporates:
       *  MinMax: '<S219>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration8'
       */
      rtb_Sum2_h = (rtb_Sum2_h <= (AirMinGovITermUpperLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_h :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S204>/Unit Delay' */
      BaseEngineController_A02_DWork.s204_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s361_RPMInst;

      /* Update for UnitDelay: '<S206>/Unit Delay' */
      BaseEngineController_A02_DWork.s206_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S134>/Unit Delay3' */
      BaseEngineController_A02_DWork.s134_UnitDelay3_DSTATE =
        BaseEngineController_A02_B.s134_MinGovAirPID;

      /* Update for UnitDelay: '<S134>/Unit Delay1' */
      BaseEngineController_A02_DWork.s134_UnitDelay1_DSTATE =
        BaseEngineController_A02_B.s217_Switch1;

      /* Update for UnitDelay: '<S185>/state' */
      BaseEngineController_A02_DWork.s185_state_DSTATE =
        BaseEngineController_A02_B.s199_MinMax1;

      /* Update for UnitDelay: '<S134>/Unit Delay2' */
      BaseEngineController_A02_DWork.s134_UnitDelay2_DSTATE = (real_T)
        rtb_DataTypeConversion_d;

      /* Update for UnitDelay: '<S189>/Unit Delay' */
      BaseEngineController_A02_DWork.s189_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S216>/Unit Delay' */
      BaseEngineController_A02_DWork.s216_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S217>/Unit Delay' incorporates:
       *  MinMax: '<S219>/MinMax1'
       */
      BaseEngineController_A02_DWork.s217_UnitDelay_DSTATE = rtb_Sum2_h;

      /* Update for UnitDelay: '<S211>/Unit Delay' */
      BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE = rtb_Product2_h;
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

      /* Sum: '<S133>/Sum' */
      BaseEngineController_A02_B.s133_Sum =
        BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_B.s336_Sum2;

      /* Outputs for Enabled SubSystem: '<S168>/InGear' incorporates:
       *  EnablePort: '<S171>/Enable'
       */

      /* S-Function (motohawk_sfun_data_read): '<S171>/motohawk_data_read' */
      rtb_MinMax_l = MaxGovInGearSetPoint_DataStore();

      /* MinMax: '<S173>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration3'
       */
      rtb_MinMax_l = (rtb_MinMax_l >= (MaxGovInGearLowerLim_DataStore())) ||
        rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearLowerLim_DataStore());

      /* MinMax: '<S173>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s168_Merge = (rtb_MinMax_l <=
        (MaxGovInGearUpperLim_DataStore())) || rtIsNaN
        ((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearUpperLim_DataStore());

      /* S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration4' */
      BaseEngineController_A02_B.s168_Merge1 = (MaxGovInGearRPMThresh_DataStore());

      /* S-Function (motohawk_sfun_data_write): '<S171>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration1'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
      }

      /* S-Function (motohawk_sfun_data_write): '<S171>/motohawk_data_write1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration2'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
      }

      /* End of Outputs for SubSystem: '<S168>/InGear' */

      /* RelationalOperator: '<S168>/Relational Operator' incorporates:
       *  Sum: '<S168>/Sum1'
       */
      rtb_RelationalOperator_m = (BaseEngineController_A02_B.s361_RPMInst >
        BaseEngineController_A02_B.s168_Merge -
        BaseEngineController_A02_B.s168_Merge1);

      /* RelationalOperator: '<S166>/Relational Operator2' */
      rtb_RelationalOperator2_j0 = (BaseEngineController_A02_B.s361_RPMInst >
        BaseEngineController_A02_B.s168_Merge);

      /* RelationalOperator: '<S166>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration5'
       *  Sum: '<S166>/Sum'
       */
      rtb_RelationalOperator_hj = (BaseEngineController_A02_B.s133_Sum <=
        BaseEngineController_A02_B.s329_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S166>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S166>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration5'
       *  Sum: '<S166>/Sum1'
       */
      rtb_LogicalOperator1_fi = (rtb_RelationalOperator_m &&
        (BaseEngineController_A02_B.s133_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_A02_B.s329_Switch2));

      /* MATLAB Function Block: '<S166>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S166>/Logical Operator'
       *  Logic: '<S166>/Logical Operator2'
       *  Logic: '<S166>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S166>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S170>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_m ||
            rtb_RelationalOperator2_j0) == 1)) {
        /* '<S170>:1:3' */
        /* '<S170>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_hj ==
                  TRUE)) {
        /* '<S170>:1:5' */
        /* '<S170>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_fi ||
                   rtb_RelationalOperator2_j0) == 1)) {
        /* '<S170>:1:7' */
        /* '<S170>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_m ==
                  TRUE)) {
        /* '<S170>:1:9' */
        /* '<S170>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S170>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S170>:1:15' */
        /* '<S170>:1:16' */
        rtb_ETCMode = 0;

        /* '<S170>:1:17' */
        rtb_Hold = 0.0;

        /* '<S170>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S170>:1:19' */
        /* '<S170>:1:20' */
        rtb_ETCMode = 1;

        /* '<S170>:1:21' */
        rtb_Hold = 0.0;

        /* '<S170>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S170>:1:23' */
        /* '<S170>:1:24' */
        rtb_ETCMode = 0;

        /* '<S170>:1:25' */
        rtb_Hold = 1.0;

        /* '<S170>:1:26' */
      } else {
        /* '<S170>:1:28' */
        rtb_ETCMode = 0;

        /* '<S170>:1:29' */
        rtb_Hold = 0.0;

        /* '<S170>:1:30' */
      }

      /* End of MATLAB Function Block: '<S166>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S166>/Data Type Conversion' */
      BaseEngineController_A02_B.s166_DataTypeConversion = 0;

      /* Logic: '<S167>/Logical Operator' incorporates:
       *  UnitDelay: '<S133>/Unit Delay'
       */
      rtb_RelationalOperator_m =
        !BaseEngineController_A02_DWork.s133_UnitDelay_DSTATE;

      /* S-Function Block: <S167>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s167_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S167>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE;

      /* Switch: '<S167>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S167>/Constant'
       *  Product: '<S167>/Product2'
       *  Product: '<S167>/Product3'
       *  Sum: '<S167>/Sum'
       *  Sum: '<S167>/Sum1'
       */
      if (rtb_RelationalOperator_m) {
        rtb_alpha_o = BaseEngineController_A02_B.s361_RPMInst;
      } else {
        /* Product: '<S167>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S167>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S167>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_j /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset +
          BaseEngineController_A02_B.s168_Merge * rtb_alpha_o;
      }

      /* End of Switch: '<S167>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S167>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_A02_B.s167_DontallowsetpointtoevergoabovetheTargetRPM
        = (BaseEngineController_A02_B.s168_Merge <= rtb_alpha_o) || rtIsNaN
        (rtb_alpha_o) ? BaseEngineController_A02_B.s168_Merge : rtb_alpha_o;

      /* DataTypeConversion: '<S166>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)(int32_T)rtb_Hold, 256.0);
      BaseEngineController_A02_B.s166_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S169>/Switch1' */
      if (BaseEngineController_A02_B.s166_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_A02_B.s167_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_A02_B.s361_RPMInst;
      }

      /* End of Switch: '<S169>/Switch1' */

      /* Sum: '<S177>/Sum2' */
      BaseEngineController_A02_B.s177_Sum2 =
        BaseEngineController_A02_B.s167_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S177>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_A02_B.s177_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S169>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_A02_B.s177_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s177_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_k = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S169>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_e;
      }

      /* Product: '<S177>/Product2' incorporates:
       *  Product: '<S169>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S169>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s177_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_e * rtb_alpha_o;

      /* UnitDelay: '<S178>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s178_UnitDelay_DSTATE;

      /* S-Function Block: <S169>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S177>/Product4' incorporates:
       *  Product: '<S169>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S169>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup1'
       */
      rtb_Hold = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_f *
        rtb_alpha_o;

      /* S-Function Block: <S178>/motohawk_delta_time */
      rtb_motohawk_delta_time_ph = 0.005;

      /* Product: '<S178>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S178>/motohawk_delta_time'
       *  Sum: '<S178>/Sum2'
       */
      BaseEngineController_A02_B.s178_Product = (rtb_Hold - rtb_Reset) /
        rtb_motohawk_delta_time_ph;

      /* Outputs for Atomic SubSystem: '<S133>/I-Term Preload' */

      /* S-Function Block: <S165>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_l = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s279_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_l;
      }

      /* Sum: '<S165>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S165>/motohawk_interpolation_1d4'
       */
      BaseEngineController_A02_B.s165_Sum = BaseEngineController_A02_B.s133_Sum
        - rtb_motohawk_interpolation_1d4_l;

      /* End of Outputs for SubSystem: '<S133>/I-Term Preload' */

      /* Switch: '<S179>/Switch1' incorporates:
       *  DataTypeConversion: '<S179>/Data Type Conversion'
       *  UnitDelay: '<S179>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s166_DataTypeConversion != 0) {
        BaseEngineController_A02_B.s179_Switch1 =
          BaseEngineController_A02_B.s165_Sum;
      } else {
        BaseEngineController_A02_B.s179_Switch1 =
          BaseEngineController_A02_DWork.s179_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S179>/Switch1' */

      /* Switch: '<S169>/Switch' incorporates:
       *  Constant: '<S169>/Constant'
       */
      if (BaseEngineController_A02_B.s166_DataTypeConversion >= 1) {
        BaseEngineController_A02_B.s169_Switch = 0.0;
      } else {
        /* MinMax: '<S176>/MinMax' incorporates:
         *  Sum: '<S177>/Sum1'
         */
        rtb_Reset = (BaseEngineController_A02_B.s177_Product2 +
                     BaseEngineController_A02_B.s178_Product) +
          BaseEngineController_A02_B.s179_Switch1;

        /* MinMax: '<S176>/MinMax1' incorporates:
         *  MinMax: '<S176>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration9'
         */
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());
        BaseEngineController_A02_B.s169_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S169>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S166>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S166>/Multiport Switch' incorporates:
       *  Constant: '<S166>/Constant'
       *  DataTypeConversion: '<S166>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S166>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_A02_B.s166_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_A02_B.s166_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S166>/Multiport Switch' */

      /* S-Function Block: <S169>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S177>/Product1' incorporates:
       *  Product: '<S169>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S169>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S169>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S179>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s179_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S179>/Sum' incorporates:
       *  Product: '<S179>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S179>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_k +
        BaseEngineController_A02_B.s179_Switch1;

      /* MinMax: '<S181>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* MinMax: '<S181>/MinMax1' incorporates:
       *  MinMax: '<S181>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration8'
       */
      rtb_Reset = (rtb_Reset <= (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S133>/Unit Delay' */
      BaseEngineController_A02_DWork.s133_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s166_MultiportSwitch;

      /* Update for UnitDelay: '<S167>/Unit Delay' */
      BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s167_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S178>/Unit Delay' */
      BaseEngineController_A02_DWork.s178_UnitDelay_DSTATE = rtb_Hold;

      /* Update for UnitDelay: '<S179>/Unit Delay' incorporates:
       *  MinMax: '<S181>/MinMax1'
       */
      BaseEngineController_A02_DWork.s179_UnitDelay_DSTATE = rtb_Reset;
    }

    /* Output and update for function-call system: '<S121>/Spark Manager' */
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

      /* S-Function Block: <S136>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s356_motohawk_prelookup4,
           BaseEngineController_A02_B.s317_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S241>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s315_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S241>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_n = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s356_motohawk_prelookup1,
           BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_n;
      }

      /* Product: '<S241>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S241>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d3'
       */
      rtb_Product_d = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_n;

      /* S-Function Block: <S241>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s316_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S241>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s356_motohawk_prelookup1,
           BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
      }

      /* Sum: '<S241>/Add' incorporates:
       *  Product: '<S241>/Product1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S241>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d1'
       */
      BaseEngineController_A02_B.s241_Add = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_j + rtb_Product_d;

      /* S-Function Block: <S238>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EthanolPreLookupIn_DataStore()) = BaseEngineController_A02_B.s542_Merge;
        (EthanolPreLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s542_Merge,
           (EthanolPreLookupIdxArr_DataStore()), 11,
           (EthanolPreLookupIdx_DataStore()));
        rtb_motohawk_prelookup = (EthanolPreLookupIdx_DataStore());
      }

      /* S-Function Block: <S238>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *)
           ((EthanolInterpolationTbl_DataStore())), 11);
        (EthanolInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_b;
      }

      /* S-Function Block: <S238>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_nw = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s356_motohawk_prelookup1,
           BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_nw;
      }

      /* Product: '<S238>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S238>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S238>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S238>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s238_Product = rtb_motohawk_interpolation_1d_b *
        rtb_RichEquivRatioTargetDelta_nw;

      /* Sum: '<S136>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S136>/motohawk_interpolation_2d2'
       *  Sum: '<S136>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_A02_B.s136_ApplyOffsetstoBaseSparkAdvance1 =
        ((rtb_RichEquivRatioTargetDelta + BaseEngineController_A02_B.s241_Add) +
         BaseEngineController_A02_B.s238_Product) +
        BaseEngineController_A02_B.s134_IdleSpk;

      /* MinMax: '<S244>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration5'
       */
      rtb_Product_d =
        (BaseEngineController_A02_B.s136_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_A02_B.s136_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S240>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S240>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_A02_B.s202_RelOp) {
        /* S-Function Block: <S240>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_i = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s356_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_i;
        }

        rtb_Switch1_m = rtb_motohawk_interpolation_1d4_i;
      } else {
        rtb_Switch1_m = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S240>/Switch1' */

      /* MinMax: '<S244>/MinMax1' incorporates:
       *  MinMax: '<S244>/MinMax'
       */
      BaseEngineController_A02_B.s244_MinMax1 = (rtb_Product_d <= rtb_Switch1_m)
        || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;

      /* UnitDelay: '<S239>/Unit Delay' */
      rtb_Product_d = BaseEngineController_A02_DWork.s239_UnitDelay_DSTATE;

      /* Switch: '<S239>/Switch' incorporates:
       *  UnitDelay: '<S242>/Initial Condition is True'
       */
      if (BaseEngineController_A02_DWork.s242_InitialConditionisTrue_DSTATE) {
        BaseEngineController_A02_B.s239_Switch =
          BaseEngineController_A02_B.s244_MinMax1;
      } else {
        /* Sum: '<S239>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S239>/motohawk_calibration'
         */
        rtb_Switch1_m = rtb_Product_d + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S243>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S239>/motohawk_calibration1'
         *  Sum: '<S239>/Sum1'
         */
        rtb_Product_d -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S243>/MinMax1' incorporates:
         *  MinMax: '<S243>/MinMax'
         */
        rtb_Product_d = (BaseEngineController_A02_B.s244_MinMax1 >=
                         rtb_Product_d) || rtIsNaN(rtb_Product_d) ?
          BaseEngineController_A02_B.s244_MinMax1 : rtb_Product_d;
        BaseEngineController_A02_B.s239_Switch = (rtb_Product_d <= rtb_Switch1_m)
          || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;
      }

      /* End of Switch: '<S239>/Switch' */

      /* S-Function Block: <S136>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_A02_B.s136_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s356_motohawk_prelookup1,
           BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_A02_B.s136_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S242>/Initial Condition is True' incorporates:
       *  Constant: '<S242>/False After First Sample'
       */
      BaseEngineController_A02_DWork.s242_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S239>/Unit Delay' */
      BaseEngineController_A02_DWork.s239_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s239_Switch;
    }
  }
}
