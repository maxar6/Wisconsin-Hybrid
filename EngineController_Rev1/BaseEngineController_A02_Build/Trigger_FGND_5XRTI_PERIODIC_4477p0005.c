/*
 * Trigger_FGND_5XRTI_PERIODIC_4477p0005.c
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

void Trigger_FGND_5XRTI_PERIODIC_4477p0005(void)
{
  /* Named constants for Stateflow: '<S778>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S115>/MinGovernor' */
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

      /* Sum: '<S198>/Sum2' incorporates:
       *  UnitDelay: '<S198>/Unit Delay'
       */
      rtb_Sum2_h = BaseEngineController_A02_B.s355_RPMInst -
        BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE;

      /* S-Function Block: <S198>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S198>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S198>/motohawk_delta_time'
       */
      rtb_Sum2_h /= rtb_motohawk_delta_time_p;

      /* S-Function Block: <S199>/motohawk_delta_time */
      rtb_Switch_l = 0.005;

      /* Product: '<S199>/Product' incorporates:
       *  MinMax: '<S199>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S199>/motohawk_calibration'
       */
      rtb_Switch_l /= (rtb_Switch_l >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_l :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S200>/Sum1' incorporates:
       *  Constant: '<S200>/Constant'
       *  Product: '<S200>/Product'
       *  Product: '<S200>/Product1'
       *  Sum: '<S200>/Sum'
       *  UnitDelay: '<S200>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Switch_l) *
        BaseEngineController_A02_DWork.s200_UnitDelay_DSTATE + rtb_Sum2_h *
        rtb_Switch_l;

      /* RelationalOperator: '<S194>/Relational Operator' incorporates:
       *  Gain: '<S194>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration'
       */
      BaseEngineController_A02_B.s194_RelationalOperator = ((rtb_Sum1_g <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S130>/Base RPM Set Pt' */

      /* S-Function Block: <S178>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s309_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* End of Outputs for SubSystem: '<S130>/Base RPM Set Pt' */

      /* RelationalOperator: '<S180>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration4'
       *  Sum: '<S180>/Sum'
       */
      BaseEngineController_A02_B.s180_RelationalOperator =
        ((BaseEngineController_A02_B.s355_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_m));

      /* RelationalOperator: '<S180>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration6'
       *  Sum: '<S180>/Sum2'
       */
      BaseEngineController_A02_B.s180_RelationalOperator3 =
        ((BaseEngineController_A02_B.s355_RPMInst <
          rtb_motohawk_interpolation_1d2_m - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S180>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S180>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_l = BaseEngineController_A02_B.s317_Switch1;
      } else {
        rtb_Switch_l = BaseEngineController_A02_B.s323_Switch2;
      }

      /* End of MultiPortSwitch: '<S180>/Multiport Switch1' */
      /* RelationalOperator: '<S180>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s180_RelationalOperator1 = ((rtb_Switch_l <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S180>/Multiport Switch' incorporates:
       *  Constant: '<S180>/Constant'
       *  RelationalOperator: '<S180>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S180>/motohawk_data_read1'
       *  UnitDelay: '<S130>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_e = (BaseEngineController_A02_B.s330_Sum2 >
                       BaseEngineController_A02_DWork.s130_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S180>/Multiport Switch' */

      /* Logic: '<S180>/Logical Operator' incorporates:
       *  RelationalOperator: '<S180>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration5'
       *  Sum: '<S180>/Sum1'
       */
      BaseEngineController_A02_B.s180_LogicalOperator = (((rtb_Switch_l >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_e));

      /* S-Function Block: <S197>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S197>/Switch' incorporates:
       *  Constant: '<S197>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S197>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S197>/motohawk_delta_time'
       *  Sum: '<S197>/Sum'
       */
      if (BaseEngineController_A02_B.s180_RelationalOperator1) {
        rtb_Switch_l = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_l = 0.0;
      }

      /* End of Switch: '<S197>/Switch' */
      /* RelationalOperator: '<S180>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration2'
       */
      BaseEngineController_A02_B.s180_RelationalOperator5 = ((rtb_Switch_l >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S180>/IdleStateMachine' */
      BaseEngineController_A02_IdleStateMachine();

      /* RelationalOperator: '<S196>/RelOp' incorporates:
       *  Constant: '<S196>/Constant'
       */
      BaseEngineController_A02_B.s196_RelOp =
        ((BaseEngineController_A02_B.s195_IdleState == 2));

      /* UnitDelay: '<S130>/Unit Delay1' */
      rtb_UnitDelay1_a = BaseEngineController_A02_DWork.s130_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S130>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S177>/Enable'
       */
      if (BaseEngineController_A02_B.s196_RelOp) {
        /* Product: '<S177>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration2'
         */
        rtb_Sum2_h = rtb_UnitDelay1_a * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S192>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S192>/MinMax1' incorporates:
         *  MinMax: '<S192>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
         */
        rtb_MinMax1_l = (rtb_Sum2_h <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_h :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S177>/Idle Control Enable Delay' */

        /* S-Function Block: <S191>/motohawk_delta_time */
        rtb_motohawk_delta_time_ax = 0.005;

        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S191>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S191>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S191>/motohawk_delta_time'
         *  Sum: '<S191>/Sum'
         */
        if (BaseEngineController_A02_B.s196_RelOp) {
          rtb_Sum2_h = rtb_motohawk_delta_time_ax + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_h = 0.0;
        }

        /* End of Switch: '<S191>/Switch' */
        /* RelationalOperator: '<S189>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration1'
         */
        rtb_RelOp_e = (rtb_Sum2_h > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S191>/Saturation' */
        rtb_Saturation_m = rtb_Sum2_h >= 16000.0 ? 16000.0 : rtb_Sum2_h <= 0.0 ?
          0.0 : rtb_Sum2_h;

        /* S-Function (motohawk_sfun_data_write): '<S191>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_m;
        }

        /* End of Outputs for SubSystem: '<S177>/Idle Control Enable Delay' */

        /* Logic: '<S177>/Logical Operator1' incorporates:
         *  Abs: '<S177>/Abs'
         *  RelationalOperator: '<S177>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration4'
         */
        BaseEngineController_A02_B.s177_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_e && (fabs
             (rtb_UnitDelay1_a) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S177>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S188>/Enable'
         */
        if (BaseEngineController_A02_B.s177_LogicalOperator1) {
          /* S-Function Block: <S188>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S177>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S130>/Base Airflow Table Adapt' */
      /* S-Function Block: <S179>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s179_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_dw = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S179>/Multiport Switch' incorporates:
       *  Gain: '<S179>/Ramp Down'
       *  Product: '<S179>/Product'
       *  Product: '<S179>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S179>/motohawk_delta_time'
       */
      if (BaseEngineController_A02_B.s196_RelOp == FALSE) {
        /* Switch: '<S179>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S179>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_h = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_h = rtb_motohawk_delta_time_dw;
        }

        /* End of Switch: '<S179>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_Sum2_h * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_dw / rtb_motohawk_delta_time_dw;
      }

      /* End of MultiPortSwitch: '<S179>/Multiport Switch' */

      /* Sum: '<S179>/Sum' incorporates:
       *  UnitDelay: '<S179>/state'
       */
      rtb_Product5 += BaseEngineController_A02_DWork.s179_state_DSTATE;

      /* MinMax: '<S193>/MinMax1' incorporates:
       *  Constant: '<S179>/Constant'
       *  Constant: '<S179>/Constant1'
       *  MinMax: '<S193>/MinMax'
       */
      rtb_Sum2_h = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_A02_B.s193_MinMax1 = rtb_Sum2_h <= 1.0 ? rtb_Sum2_h :
        1.0;

      /* RelationalOperator: '<S182>/RelOp' incorporates:
       *  Constant: '<S182>/Constant'
       */
      rtb_RelOp_e = (BaseEngineController_A02_B.s193_MinMax1 == 0.0);

      /* UnitDelay: '<S130>/Unit Delay2' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s130_UnitDelay2_DSTATE;

      /* HitCross: '<S130>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S130>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_A02_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_A02_DWork.s130_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_A02_DWork.s130_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_A02_B.s130_HitCrossing1 =
            !BaseEngineController_A02_B.s130_HitCrossing1;
          BaseEngineController_A02_DWork.s130_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_A02_B.s130_HitCrossing1 && (rtb_Sum2_h != 0.5))
          {
            BaseEngineController_A02_B.s130_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_h != 0.5) {
          BaseEngineController_A02_B.s130_HitCrossing1 = FALSE;
        }

        BaseEngineController_A02_DWork.s130_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S130>/Hit  Crossing1' */

      /* Logic: '<S130>/Logical Operator' */
      BaseEngineController_A02_B.s130_LogicalOperator = ((rtb_RelOp_e ||
        BaseEngineController_A02_B.s130_HitCrossing1));

      /* Logic: '<S183>/Logical Operator' */
      rtb_LogicalOperator_b = !BaseEngineController_A02_B.s196_RelOp;

      /* S-Function Block: <S183>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s183_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S183>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE;

      /* Switch: '<S183>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S183>/Constant'
       *  Product: '<S183>/Product2'
       *  Product: '<S183>/Product3'
       *  Sum: '<S183>/Sum'
       *  Sum: '<S183>/Sum1'
       */
      if (rtb_LogicalOperator_b) {
        rtb_Product5 = BaseEngineController_A02_B.s355_RPMInst;
      } else {
        /* Product: '<S183>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_h /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_m * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S183>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S183>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_m >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_m : rtb_Product5;

      /* Sum: '<S209>/Sum2' */
      BaseEngineController_A02_B.s209_Sum2 =
        BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s505_Sum1;

      /* Product: '<S209>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_A02_B.s209_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S185>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s209_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s209_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S207>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S209>/Product2' incorporates:
       *  Product: '<S207>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S207>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s209_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S210>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s210_UnitDelay_DSTATE;

      /* S-Function Block: <S207>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S209>/Product4' incorporates:
       *  Product: '<S207>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S207>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S210>/motohawk_delta_time */
      rtb_motohawk_delta_time_c = 0.005;

      /* Product: '<S210>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S210>/motohawk_delta_time'
       *  Sum: '<S210>/Sum2'
       */
      BaseEngineController_A02_B.s210_Product = (rtb_Product4 - rtb_Sum2_h) /
        rtb_motohawk_delta_time_c;

      /* Switch: '<S211>/Switch1' incorporates:
       *  Constant: '<S185>/Constant'
       *  UnitDelay: '<S211>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s130_LogicalOperator) {
        BaseEngineController_A02_B.s211_Switch1 = 0.0;
      } else {
        BaseEngineController_A02_B.s211_Switch1 =
          BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S211>/Switch1' */

      /* Switch: '<S185>/Switch' incorporates:
       *  Constant: '<S185>/Constant1'
       */
      if (BaseEngineController_A02_B.s130_LogicalOperator) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S208>/MinMax' incorporates:
         *  Sum: '<S209>/Sum1'
         */
        rtb_Sum2_h = (BaseEngineController_A02_B.s209_Product2 +
                      BaseEngineController_A02_B.s210_Product) +
          BaseEngineController_A02_B.s211_Switch1;

        /* MinMax: '<S208>/MinMax1' incorporates:
         *  MinMax: '<S208>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S185>/Switch' */

      /* Product: '<S130>/Product1' */
      BaseEngineController_A02_B.s130_MinGovAirPID =
        BaseEngineController_A02_B.s193_MinMax1 * rtb_UnitDelay1_a;

      /* Sum: '<S204>/Sum1' */
      BaseEngineController_A02_B.s204_Sum1 =
        BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_B.s505_Sum1;

      /* Product: '<S204>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S184>/motohawk_calibration4'
       */
      rtb_UnitDelay1_a = BaseEngineController_A02_B.s204_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S184>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_B.s204_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s204_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S202>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_b;
      }

      /* Product: '<S204>/Product' incorporates:
       *  Product: '<S202>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S202>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S184>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s204_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_b * rtb_UnitDelay1_a;

      /* UnitDelay: '<S205>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE;

      /* S-Function Block: <S202>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S204>/Product2' incorporates:
       *  Product: '<S202>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S202>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S184>/motohawk_prelookup1'
       */
      rtb_Product2_h = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_a;

      /* S-Function Block: <S205>/motohawk_delta_time */
      rtb_motohawk_delta_time_b = 0.005;

      /* Product: '<S205>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
       *  Sum: '<S205>/Sum2'
       */
      BaseEngineController_A02_B.s205_Product = (rtb_Product2_h - rtb_Sum2_h) /
        rtb_motohawk_delta_time_b;

      /* Switch: '<S184>/Switch' incorporates:
       *  Constant: '<S184>/Constant1'
       */
      if (rtb_RelOp_e) {
        rtb_UnitDelay1_a = 0.0;
      } else {
        /* MinMax: '<S203>/MinMax' incorporates:
         *  Sum: '<S204>/Sum'
         */
        rtb_Sum2_h = BaseEngineController_A02_B.s204_Product +
          BaseEngineController_A02_B.s205_Product;

        /* MinMax: '<S203>/MinMax1' incorporates:
         *  MinMax: '<S203>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S184>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S184>/motohawk_calibration9'
         */
        rtb_Sum2_h = (rtb_Sum2_h >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_a = (rtb_Sum2_h <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_h :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S184>/Switch' */

      /* Product: '<S130>/Product' */
      BaseEngineController_A02_B.s130_IdleSpk =
        BaseEngineController_A02_B.s193_MinMax1 * rtb_UnitDelay1_a;

      /* Outputs for Atomic SubSystem: '<S130>/AiflowOffset' */

      /* S-Function Block: <S176>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s309_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_d;
      }

      /* RelationalOperator: '<S187>/RelOp' incorporates:
       *  Constant: '<S187>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S176>/motohawk_data_read'
       */
      rtb_RelOp_e = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S176>/Logical Operator' incorporates:
       *  RelationalOperator: '<S176>/Relational Operator'
       *  RelationalOperator: '<S176>/Relational Operator1'
       *  UnitDelay: '<S176>/Unit Delay'
       */
      rtb_LogicalOperator_b = ((rtb_RelOp_e <
        BaseEngineController_A02_DWork.s176_UnitDelay_DSTATE) || (rtb_RelOp_e ==
        BaseEngineController_A02_DWork.s176_UnitDelay_DSTATE));

      /* S-Function Block: <S186>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s186_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_ao = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S186>/Unit Delay' */
      rtb_Sum2_h = BaseEngineController_A02_DWork.s186_UnitDelay_DSTATE;

      /* Switch: '<S186>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S186>/Constant'
       *  Logic: '<S186>/Logical Operator'
       *  Product: '<S186>/Product2'
       *  Product: '<S186>/Product3'
       *  Sum: '<S186>/Sum'
       *  Sum: '<S186>/Sum1'
       */
      if (!rtb_LogicalOperator_b) {
        rtb_Sum2_h = BaseEngineController_A02_B.s323_Switch2;
      } else {
        /* Product: '<S186>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S186>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S186>/motohawk_delta_time'
         */
        rtb_UnitDelay1_a = rtb_motohawk_delta_time_ao /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_h = (1.0 - rtb_UnitDelay1_a) * rtb_Sum2_h +
          rtb_motohawk_interpolation_1d2_d * rtb_UnitDelay1_a;
      }

      /* End of Switch: '<S186>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S186>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_d >= rtb_Sum2_h) || rtIsNaN(rtb_Sum2_h)
        ? rtb_motohawk_interpolation_1d2_d : rtb_Sum2_h;

      /* Update for UnitDelay: '<S176>/Unit Delay' */
      BaseEngineController_A02_DWork.s176_UnitDelay_DSTATE = rtb_RelOp_e;

      /* Update for UnitDelay: '<S186>/Unit Delay' */
      BaseEngineController_A02_DWork.s186_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S130>/AiflowOffset' */

      /* Saturate: '<S197>/Saturation' */
      rtb_Saturation_f = rtb_Switch_l >= 16000.0 ? 16000.0 : rtb_Switch_l <= 0.0
        ? 0.0 : rtb_Switch_l;

      /* S-Function (motohawk_sfun_data_write): '<S197>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_f;
      }

      /* S-Function Block: <S201>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Sum: '<S181>/Sum' */
      rtb_Sum2_h = BaseEngineController_A02_B.s505_Sum1 -
        BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S201>/Switch' incorporates:
       *  Constant: '<S201>/Constant'
       *  RelationalOperator: '<S181>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S201>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S201>/motohawk_delta_time'
       *  Sum: '<S201>/Sum'
       */
      if (rtb_Sum2_h > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_A02_B.s201_Switch = rtb_motohawk_delta_time_a +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_A02_B.s201_Switch = 0.0;
      }

      /* End of Switch: '<S201>/Switch' */

      /* RelationalOperator: '<S181>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
       */
      BaseEngineController_A02_B.s181_RelationalOperator1 =
        ((BaseEngineController_A02_B.s201_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S181>/Data Type Conversion' */
      rtb_DataTypeConversion_d =
        BaseEngineController_A02_B.s181_RelationalOperator1;

      /* Saturate: '<S201>/Saturation' */
      rtb_Saturation_a = BaseEngineController_A02_B.s201_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_A02_B.s201_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_B.s201_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S201>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_a;
      }

      /* S-Function Block: <S207>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S207>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S207>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       */
      rtb_Sum2_h = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g;

      /* S-Function Block: <S211>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s211_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bd = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S211>/Sum' incorporates:
       *  Product: '<S209>/Product1'
       *  Product: '<S211>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S211>/motohawk_delta_time'
       */
      rtb_UnitDelay1_a = rtb_Product5 * rtb_Sum2_h * rtb_motohawk_delta_time_bd
        + BaseEngineController_A02_B.s211_Switch1;

      /* MinMax: '<S213>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration7'
       */
      rtb_Sum2_h = (rtb_UnitDelay1_a >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_a :
        (AirMinGovITermLowerLimit_DataStore());

      /* MinMax: '<S213>/MinMax1' incorporates:
       *  MinMax: '<S213>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S185>/motohawk_calibration8'
       */
      rtb_Sum2_h = (rtb_Sum2_h <= (AirMinGovITermUpperLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_h :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S198>/Unit Delay' */
      BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s355_RPMInst;

      /* Update for UnitDelay: '<S200>/Unit Delay' */
      BaseEngineController_A02_DWork.s200_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S130>/Unit Delay3' */
      BaseEngineController_A02_DWork.s130_UnitDelay3_DSTATE =
        BaseEngineController_A02_B.s130_MinGovAirPID;

      /* Update for UnitDelay: '<S130>/Unit Delay1' */
      BaseEngineController_A02_DWork.s130_UnitDelay1_DSTATE =
        BaseEngineController_A02_B.s211_Switch1;

      /* Update for UnitDelay: '<S179>/state' */
      BaseEngineController_A02_DWork.s179_state_DSTATE =
        BaseEngineController_A02_B.s193_MinMax1;

      /* Update for UnitDelay: '<S130>/Unit Delay2' */
      BaseEngineController_A02_DWork.s130_UnitDelay2_DSTATE = (real_T)
        rtb_DataTypeConversion_d;

      /* Update for UnitDelay: '<S183>/Unit Delay' */
      BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S210>/Unit Delay' */
      BaseEngineController_A02_DWork.s210_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S211>/Unit Delay' incorporates:
       *  MinMax: '<S213>/MinMax1'
       */
      BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE = rtb_Sum2_h;

      /* Update for UnitDelay: '<S205>/Unit Delay' */
      BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE = rtb_Product2_h;
    }

    /* Output and update for function-call system: '<S115>/MaxGovernor' */
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

      /* Sum: '<S129>/Sum' */
      BaseEngineController_A02_B.s129_Sum =
        BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_B.s330_Sum2;

      /* Outputs for Enabled SubSystem: '<S162>/InGear' incorporates:
       *  EnablePort: '<S165>/Enable'
       */

      /* S-Function (motohawk_sfun_data_read): '<S165>/motohawk_data_read' */
      rtb_MinMax_l = MaxGovInGearSetPoint_DataStore();

      /* MinMax: '<S167>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration3'
       */
      rtb_MinMax_l = (rtb_MinMax_l >= (MaxGovInGearLowerLim_DataStore())) ||
        rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearLowerLim_DataStore());

      /* MinMax: '<S167>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration5'
       */
      BaseEngineController_A02_B.s162_Merge = (rtb_MinMax_l <=
        (MaxGovInGearUpperLim_DataStore())) || rtIsNaN
        ((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_l :
        (MaxGovInGearUpperLim_DataStore());

      /* S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration4' */
      BaseEngineController_A02_B.s162_Merge1 = (MaxGovInGearRPMThresh_DataStore());

      /* S-Function (motohawk_sfun_data_write): '<S165>/motohawk_data_write' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration1'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
      }

      /* S-Function (motohawk_sfun_data_write): '<S165>/motohawk_data_write1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration2'
       */
      /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
      {
        MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
      }

      /* End of Outputs for SubSystem: '<S162>/InGear' */

      /* RelationalOperator: '<S162>/Relational Operator' incorporates:
       *  Sum: '<S162>/Sum1'
       */
      rtb_RelationalOperator_m = (BaseEngineController_A02_B.s355_RPMInst >
        BaseEngineController_A02_B.s162_Merge -
        BaseEngineController_A02_B.s162_Merge1);

      /* RelationalOperator: '<S160>/Relational Operator2' */
      rtb_RelationalOperator2_j0 = (BaseEngineController_A02_B.s355_RPMInst >
        BaseEngineController_A02_B.s162_Merge);

      /* RelationalOperator: '<S160>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration5'
       *  Sum: '<S160>/Sum'
       */
      rtb_RelationalOperator_hj = (BaseEngineController_A02_B.s129_Sum <=
        BaseEngineController_A02_B.s323_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S160>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S160>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration5'
       *  Sum: '<S160>/Sum1'
       */
      rtb_LogicalOperator1_fi = (rtb_RelationalOperator_m &&
        (BaseEngineController_A02_B.s129_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_A02_B.s323_Switch2));

      /* MATLAB Function Block: '<S160>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S160>/Logical Operator'
       *  Logic: '<S160>/Logical Operator2'
       *  Logic: '<S160>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S160>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S164>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_m ||
            rtb_RelationalOperator2_j0) == 1)) {
        /* '<S164>:1:3' */
        /* '<S164>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_hj ==
                  TRUE)) {
        /* '<S164>:1:5' */
        /* '<S164>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_fi ||
                   rtb_RelationalOperator2_j0) == 1)) {
        /* '<S164>:1:7' */
        /* '<S164>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_m ==
                  TRUE)) {
        /* '<S164>:1:9' */
        /* '<S164>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S164>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S164>:1:15' */
        /* '<S164>:1:16' */
        rtb_ETCMode = 0;

        /* '<S164>:1:17' */
        rtb_Hold = 0.0;

        /* '<S164>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S164>:1:19' */
        /* '<S164>:1:20' */
        rtb_ETCMode = 1;

        /* '<S164>:1:21' */
        rtb_Hold = 0.0;

        /* '<S164>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S164>:1:23' */
        /* '<S164>:1:24' */
        rtb_ETCMode = 0;

        /* '<S164>:1:25' */
        rtb_Hold = 1.0;

        /* '<S164>:1:26' */
      } else {
        /* '<S164>:1:28' */
        rtb_ETCMode = 0;

        /* '<S164>:1:29' */
        rtb_Hold = 0.0;

        /* '<S164>:1:30' */
      }

      /* End of MATLAB Function Block: '<S160>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S160>/Data Type Conversion' */
      BaseEngineController_A02_B.s160_DataTypeConversion = 0;

      /* Logic: '<S161>/Logical Operator' incorporates:
       *  UnitDelay: '<S129>/Unit Delay'
       */
      rtb_RelationalOperator_m =
        !BaseEngineController_A02_DWork.s129_UnitDelay_DSTATE;

      /* S-Function Block: <S161>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s161_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S161>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s161_UnitDelay_DSTATE;

      /* Switch: '<S161>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S161>/Constant'
       *  Product: '<S161>/Product2'
       *  Product: '<S161>/Product3'
       *  Sum: '<S161>/Sum'
       *  Sum: '<S161>/Sum1'
       */
      if (rtb_RelationalOperator_m) {
        rtb_alpha_o = BaseEngineController_A02_B.s355_RPMInst;
      } else {
        /* Product: '<S161>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S161>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_j /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset +
          BaseEngineController_A02_B.s162_Merge * rtb_alpha_o;
      }

      /* End of Switch: '<S161>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S161>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_A02_B.s161_DontallowsetpointtoevergoabovetheTargetRPM
        = (BaseEngineController_A02_B.s162_Merge <= rtb_alpha_o) || rtIsNaN
        (rtb_alpha_o) ? BaseEngineController_A02_B.s162_Merge : rtb_alpha_o;

      /* DataTypeConversion: '<S160>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)(int32_T)rtb_Hold, 256.0);
      BaseEngineController_A02_B.s160_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S163>/Switch1' */
      if (BaseEngineController_A02_B.s160_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_A02_B.s161_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_A02_B.s355_RPMInst;
      }

      /* End of Switch: '<S163>/Switch1' */

      /* Sum: '<S171>/Sum2' */
      BaseEngineController_A02_B.s171_Sum2 =
        BaseEngineController_A02_B.s161_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S171>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_A02_B.s171_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S163>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_A02_B.s171_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s171_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_k = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S163>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_e;
      }

      /* Product: '<S171>/Product2' incorporates:
       *  Product: '<S163>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S163>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S163>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s171_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_e * rtb_alpha_o;

      /* UnitDelay: '<S172>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_DWork.s172_UnitDelay_DSTATE;

      /* S-Function Block: <S163>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S171>/Product4' incorporates:
       *  Product: '<S163>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S163>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S163>/motohawk_prelookup1'
       */
      rtb_Hold = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_f *
        rtb_alpha_o;

      /* S-Function Block: <S172>/motohawk_delta_time */
      rtb_motohawk_delta_time_ph = 0.005;

      /* Product: '<S172>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S172>/motohawk_delta_time'
       *  Sum: '<S172>/Sum2'
       */
      BaseEngineController_A02_B.s172_Product = (rtb_Hold - rtb_Reset) /
        rtb_motohawk_delta_time_ph;

      /* Outputs for Atomic SubSystem: '<S129>/I-Term Preload' */

      /* S-Function Block: <S159>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_l = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s273_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_l;
      }

      /* Sum: '<S159>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S159>/motohawk_interpolation_1d4'
       */
      BaseEngineController_A02_B.s159_Sum = BaseEngineController_A02_B.s129_Sum
        - rtb_motohawk_interpolation_1d4_l;

      /* End of Outputs for SubSystem: '<S129>/I-Term Preload' */

      /* Switch: '<S173>/Switch1' incorporates:
       *  DataTypeConversion: '<S173>/Data Type Conversion'
       *  UnitDelay: '<S173>/Unit Delay'
       */
      if (BaseEngineController_A02_B.s160_DataTypeConversion != 0) {
        BaseEngineController_A02_B.s173_Switch1 =
          BaseEngineController_A02_B.s159_Sum;
      } else {
        BaseEngineController_A02_B.s173_Switch1 =
          BaseEngineController_A02_DWork.s173_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S173>/Switch1' */

      /* Switch: '<S163>/Switch' incorporates:
       *  Constant: '<S163>/Constant'
       */
      if (BaseEngineController_A02_B.s160_DataTypeConversion >= 1) {
        BaseEngineController_A02_B.s163_Switch = 0.0;
      } else {
        /* MinMax: '<S170>/MinMax' incorporates:
         *  Sum: '<S171>/Sum1'
         */
        rtb_Reset = (BaseEngineController_A02_B.s171_Product2 +
                     BaseEngineController_A02_B.s172_Product) +
          BaseEngineController_A02_B.s173_Switch1;

        /* MinMax: '<S170>/MinMax1' incorporates:
         *  MinMax: '<S170>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration9'
         */
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());
        BaseEngineController_A02_B.s163_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S163>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S160>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S160>/Multiport Switch' incorporates:
       *  Constant: '<S160>/Constant'
       *  DataTypeConversion: '<S160>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S160>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_A02_B.s160_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_A02_B.s160_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S160>/Multiport Switch' */

      /* S-Function Block: <S163>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_k, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S171>/Product1' incorporates:
       *  Product: '<S163>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S163>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S163>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S173>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s173_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S173>/Sum' incorporates:
       *  Product: '<S173>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S173>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_k +
        BaseEngineController_A02_B.s173_Switch1;

      /* MinMax: '<S175>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* MinMax: '<S175>/MinMax1' incorporates:
       *  MinMax: '<S175>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration8'
       */
      rtb_Reset = (rtb_Reset <= (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S129>/Unit Delay' */
      BaseEngineController_A02_DWork.s129_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s160_MultiportSwitch;

      /* Update for UnitDelay: '<S161>/Unit Delay' */
      BaseEngineController_A02_DWork.s161_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s161_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S172>/Unit Delay' */
      BaseEngineController_A02_DWork.s172_UnitDelay_DSTATE = rtb_Hold;

      /* Update for UnitDelay: '<S173>/Unit Delay' incorporates:
       *  MinMax: '<S175>/MinMax1'
       */
      BaseEngineController_A02_DWork.s173_UnitDelay_DSTATE = rtb_Reset;
    }

    /* Output and update for function-call system: '<S115>/Spark Manager' */
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

      /* S-Function Block: <S132>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s350_motohawk_prelookup4,
           BaseEngineController_A02_B.s311_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S235>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s309_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S235>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_n = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s350_motohawk_prelookup1,
           BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_n;
      }

      /* Product: '<S235>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S235>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S235>/motohawk_interpolation_2d3'
       */
      rtb_Product_d = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_n;

      /* S-Function Block: <S235>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_A02_B.s310_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S235>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s350_motohawk_prelookup1,
           BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
      }

      /* Sum: '<S235>/Add' incorporates:
       *  Product: '<S235>/Product1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S235>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S235>/motohawk_interpolation_2d1'
       */
      BaseEngineController_A02_B.s235_Add = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_j + rtb_Product_d;

      /* S-Function Block: <S232>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EthanolPreLookupIn_DataStore()) = BaseEngineController_A02_B.s527_Merge;
        (EthanolPreLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s527_Merge,
           (EthanolPreLookupIdxArr_DataStore()), 11,
           (EthanolPreLookupIdx_DataStore()));
        rtb_motohawk_prelookup = (EthanolPreLookupIdx_DataStore());
      }

      /* S-Function Block: <S232>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *)
           ((EthanolInterpolationTbl_DataStore())), 11);
        (EthanolInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_b;
      }

      /* S-Function Block: <S232>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_nw = TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s350_motohawk_prelookup1,
           BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_nw;
      }

      /* Product: '<S232>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S232>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S232>/motohawk_prelookup'
       */
      BaseEngineController_A02_B.s232_Product = rtb_motohawk_interpolation_1d_b *
        rtb_RichEquivRatioTargetDelta_nw;

      /* Sum: '<S132>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S132>/motohawk_interpolation_2d2'
       *  Sum: '<S132>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_A02_B.s132_ApplyOffsetstoBaseSparkAdvance1 =
        ((rtb_RichEquivRatioTargetDelta + BaseEngineController_A02_B.s235_Add) +
         BaseEngineController_A02_B.s232_Product) +
        BaseEngineController_A02_B.s130_IdleSpk;

      /* MinMax: '<S238>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration5'
       */
      rtb_Product_d =
        (BaseEngineController_A02_B.s132_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_A02_B.s132_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S234>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S234>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_A02_B.s196_RelOp) {
        /* S-Function Block: <S234>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_i = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s350_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_i;
        }

        rtb_Switch1_m = rtb_motohawk_interpolation_1d4_i;
      } else {
        rtb_Switch1_m = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S234>/Switch1' */

      /* MinMax: '<S238>/MinMax1' incorporates:
       *  MinMax: '<S238>/MinMax'
       */
      BaseEngineController_A02_B.s238_MinMax1 = (rtb_Product_d <= rtb_Switch1_m)
        || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;

      /* UnitDelay: '<S233>/Unit Delay' */
      rtb_Product_d = BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE;

      /* Switch: '<S233>/Switch' incorporates:
       *  UnitDelay: '<S236>/Initial Condition is True'
       */
      if (BaseEngineController_A02_DWork.s236_InitialConditionisTrue_DSTATE) {
        BaseEngineController_A02_B.s233_Switch =
          BaseEngineController_A02_B.s238_MinMax1;
      } else {
        /* Sum: '<S233>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration'
         */
        rtb_Switch1_m = rtb_Product_d + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S237>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration1'
         *  Sum: '<S233>/Sum1'
         */
        rtb_Product_d -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S237>/MinMax1' incorporates:
         *  MinMax: '<S237>/MinMax'
         */
        rtb_Product_d = (BaseEngineController_A02_B.s238_MinMax1 >=
                         rtb_Product_d) || rtIsNaN(rtb_Product_d) ?
          BaseEngineController_A02_B.s238_MinMax1 : rtb_Product_d;
        BaseEngineController_A02_B.s233_Switch = (rtb_Product_d <= rtb_Switch1_m)
          || rtIsNaN(rtb_Switch1_m) ? rtb_Product_d : rtb_Switch1_m;
      }

      /* End of Switch: '<S233>/Switch' */

      /* S-Function Block: <S132>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_A02_B.s132_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_A02_B.s350_motohawk_prelookup1,
           BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_A02_B.s132_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S236>/Initial Condition is True' incorporates:
       *  Constant: '<S236>/False After First Sample'
       */
      BaseEngineController_A02_DWork.s236_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S233>/Unit Delay' */
      BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s233_Switch;
    }
  }
}
