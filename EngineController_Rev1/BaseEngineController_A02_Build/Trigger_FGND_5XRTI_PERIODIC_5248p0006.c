/*
 * Trigger_FGND_5XRTI_PERIODIC_5248p0006.c
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

void Trigger_FGND_5XRTI_PERIODIC_5248p0006(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S409>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_g;
      real_T rtb_UnitDelay_m;
      real_T rtb_DataTypeConversion_p;
      real_T rtb_UnitDelay_b1c;
      real_T rtb_Product_p;
      index_T rtb_motohawk_prelookup_e;
      index_T rtb_motohawk_prelookup_n;
      boolean_T rtb_LogicalOperator2_n;
      boolean_T rtb_LogicalOperator3_a;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator1_e;
      real_T rtb_Sum1_po;
      real_T rtb_Sum1_mu;

      /* S-Function Block: <S633>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s633_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S643>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s633_motohawk_ain;

      /* S-Function Block: <S650>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S650>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s650_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* Logic: '<S643>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S643>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* UnitDelay: '<S643>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE;

      /* If: '<S643>/If' incorporates:
       *  ActionPort: '<S646>/Action Port'
       *  ActionPort: '<S647>/Action Port'
       *  ActionPort: '<S648>/Action Port'
       *  Logic: '<S643>/Logical Operator5'
       *  Logic: '<S643>/Logical Operator6'
       *  SubSystem: '<S643>/If Action Subsystem'
       *  SubSystem: '<S643>/If Action Subsystem1'
       *  SubSystem: '<S643>/If Action Subsystem2'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s643_Merge);
      } else if (rtb_LogicalOperator4) {
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s643_Merge);
      } else {
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s650_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s643_Merge);
      }

      /* S-Function Block: <S645>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s645_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S645>/Product' incorporates:
       *  MinMax: '<S645>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S645>/motohawk_calibration'
       */
      rtb_Product_p /= rt_MAXd_snf(rtb_Product_p, (ECTFiltConst_DataStore()));

      /* Sum: '<S651>/Sum1' incorporates:
       *  Constant: '<S651>/Constant'
       *  Product: '<S651>/Product'
       *  Product: '<S651>/Product1'
       *  Sum: '<S651>/Sum'
       *  UnitDelay: '<S651>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s651_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s643_Merge * rtb_Product_p;

      /* If: '<S649>/If' incorporates:
       *  ActionPort: '<S652>/Action Port'
       *  ActionPort: '<S653>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S649>/override_enable'
       *  SubSystem: '<S649>/NewValue'
       *  SubSystem: '<S649>/OldValue'
       */
      if ((ECT_ovr_DataStore())) {
        /* Inport: '<S652>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S649>/new_value'
         */
        BaseEngineController_A02_B.s649_Merge = (ECT_new_DataStore());
      } else {
        /* Inport: '<S653>/In1' */
        BaseEngineController_A02_B.s649_Merge = rtb_Sum1_po;
      }

      /* Logic: '<S643>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S643>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S643>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S643>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = (MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                 (ECTMax_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S643>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S643>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S643>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S643>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S643>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = (MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                 (ECTMin_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S643>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S633>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s633_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S644>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s633_motohawk_ain1;

      /* S-Function Block: <S659>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S659>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s659_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* Logic: '<S644>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S644>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S644>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(27) || IsFaultActive(28));

      /* Logic: '<S644>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S644>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S644>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(27) || IsFaultSuspected(28));

      /* UnitDelay: '<S644>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s644_UnitDelay_DSTATE;

      /* If: '<S644>/If' incorporates:
       *  ActionPort: '<S655>/Action Port'
       *  ActionPort: '<S656>/Action Port'
       *  ActionPort: '<S657>/Action Port'
       *  Logic: '<S644>/Logical Operator5'
       *  Logic: '<S644>/Logical Operator6'
       *  SubSystem: '<S644>/If Action Subsystem'
       *  SubSystem: '<S644>/If Action Subsystem1'
       *  SubSystem: '<S644>/If Action Subsystem2'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s644_Merge);
      } else if (rtb_LogicalOperator4) {
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s644_Merge);
      } else {
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s659_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s644_Merge);
      }

      /* S-Function Block: <S654>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s654_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S654>/Product' incorporates:
       *  MinMax: '<S654>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration'
       */
      rtb_Product_p /= rt_MAXd_snf(rtb_Product_p, (IATFiltConst_DataStore()));

      /* Sum: '<S660>/Sum1' incorporates:
       *  Constant: '<S660>/Constant'
       *  Product: '<S660>/Product'
       *  Product: '<S660>/Product1'
       *  Sum: '<S660>/Sum'
       *  UnitDelay: '<S660>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s644_Merge * rtb_Product_p;

      /* If: '<S658>/If' incorporates:
       *  ActionPort: '<S661>/Action Port'
       *  ActionPort: '<S662>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S658>/override_enable'
       *  SubSystem: '<S658>/NewValue'
       *  SubSystem: '<S658>/OldValue'
       */
      if ((IAT_ovr_DataStore())) {
        /* Inport: '<S661>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S658>/new_value'
         */
        BaseEngineController_A02_B.s658_Merge = (IAT_new_DataStore());
      } else {
        /* Inport: '<S662>/In1' */
        BaseEngineController_A02_B.s658_Merge = rtb_Sum1_mu;
      }

      /* S-Function (motohawk_sfun_fault_def): '<S644>/motohawk_fault_def2' incorporates:
       *  Logic: '<S644>/Logical Operator2'
       *  S-Function (motohawk_sfun_data_read): '<S644>/motohawk_data_read1'
       *  S-Function (motohawk_sfun_calibration): '<S644>/motohawk_calibration1'
       *  RelationalOperator: '<S644>/Relational Operator2'
       */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, (MPRD_DataStore() && (rtb_DataTypeConversion_p >
          (IATMax_DataStore()))));
        UpdateFault(27);
      }

      /* S-Function (motohawk_sfun_fault_def): '<S644>/motohawk_fault_def3' incorporates:
       *  Logic: '<S644>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S644>/motohawk_data_read1'
       *  S-Function (motohawk_sfun_calibration): '<S644>/motohawk_calibration6'
       *  RelationalOperator: '<S644>/Relational Operator3'
       */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, (MPRD_DataStore() && (rtb_DataTypeConversion_p <
          (IATMin_DataStore()))));
        UpdateFault(28);
      }

      /* Update for UnitDelay: '<S643>/Unit Delay' */
      BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s643_Merge;

      /* Update for UnitDelay: '<S651>/Unit Delay' */
      BaseEngineController_A02_DWork.s651_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S644>/Unit Delay' */
      BaseEngineController_A02_DWork.s644_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s644_Merge;

      /* Update for UnitDelay: '<S660>/Unit Delay' */
      BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
