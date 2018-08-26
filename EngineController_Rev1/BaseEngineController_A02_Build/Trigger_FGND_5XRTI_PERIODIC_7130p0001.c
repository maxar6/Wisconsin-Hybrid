/*
 * Trigger_FGND_5XRTI_PERIODIC_7130p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1639
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 19:54:14 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_7130p0001(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S385>/Temp Sensors' */
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
      boolean_T rtb_LogicalOperator2_b;
      boolean_T rtb_LogicalOperator3_f;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator1_e;
      real_T rtb_Sum1_po;
      real_T rtb_Sum1_mu;

      /* S-Function Block: <S637>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s637_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S637>/Product' incorporates:
       *  MinMax: '<S637>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S637>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S635>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(12) || IsFaultActive(13));

      /* Logic: '<S635>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(12) || IsFaultSuspected(13));

      /* S-Function Block: <S625>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s625_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S635>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s625_motohawk_ain;

      /* S-Function Block: <S642>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S642>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s642_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S635>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s635_UnitDelay_DSTATE;

      /* If: '<S635>/If' incorporates:
       *  Logic: '<S635>/Logical Operator5'
       *  Logic: '<S635>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem' incorporates:
         *  ActionPort: '<S638>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s635_Merge);

        /* End of Outputs for SubSystem: '<S635>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s635_Merge);

        /* End of Outputs for SubSystem: '<S635>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S640>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s642_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s635_Merge);

        /* End of Outputs for SubSystem: '<S635>/If Action Subsystem2' */
      }

      /* End of If: '<S635>/If' */

      /* Sum: '<S643>/Sum1' incorporates:
       *  Constant: '<S643>/Constant'
       *  Product: '<S643>/Product'
       *  Product: '<S643>/Product1'
       *  Sum: '<S643>/Sum'
       *  UnitDelay: '<S643>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s635_Merge * rtb_Product_p;

      /* If: '<S641>/If' incorporates:
       *  Inport: '<S644>/In1'
       *  Inport: '<S645>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        BaseEngineController_A02_B.s641_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S641>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
         *  ActionPort: '<S645>/Action Port'
         */
        BaseEngineController_A02_B.s641_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S641>/OldValue' */
      }

      /* End of If: '<S641>/If' */

      /* Logic: '<S635>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S635>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S635>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S635>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(12, rtb_LogicalOperator2_n);
        UpdateFault(12);
      }

      /* Logic: '<S635>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S635>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S635>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S635>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(13, rtb_LogicalOperator3_a);
        UpdateFault(13);
      }

      /* S-Function Block: <S646>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s646_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S646>/Product' incorporates:
       *  MinMax: '<S646>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S646>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S636>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(33) || IsFaultActive(34));

      /* Logic: '<S636>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(33) || IsFaultSuspected(34));

      /* S-Function Block: <S625>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s625_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S636>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s625_motohawk_ain1;

      /* S-Function Block: <S651>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S651>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s651_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S636>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s636_UnitDelay_DSTATE;

      /* If: '<S636>/If' incorporates:
       *  Logic: '<S636>/Logical Operator5'
       *  Logic: '<S636>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem' incorporates:
         *  ActionPort: '<S647>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s636_Merge);

        /* End of Outputs for SubSystem: '<S636>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s636_Merge);

        /* End of Outputs for SubSystem: '<S636>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S649>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s651_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s636_Merge);

        /* End of Outputs for SubSystem: '<S636>/If Action Subsystem2' */
      }

      /* End of If: '<S636>/If' */

      /* Sum: '<S652>/Sum1' incorporates:
       *  Constant: '<S652>/Constant'
       *  Product: '<S652>/Product'
       *  Product: '<S652>/Product1'
       *  Sum: '<S652>/Sum'
       *  UnitDelay: '<S652>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s652_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s636_Merge * rtb_Product_p;

      /* If: '<S650>/If' incorporates:
       *  Inport: '<S653>/In1'
       *  Inport: '<S654>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S650>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S650>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S650>/NewValue' incorporates:
         *  ActionPort: '<S653>/Action Port'
         */
        BaseEngineController_A02_B.s650_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S650>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S650>/OldValue' incorporates:
         *  ActionPort: '<S654>/Action Port'
         */
        BaseEngineController_A02_B.s650_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S650>/OldValue' */
      }

      /* End of If: '<S650>/If' */

      /* Logic: '<S636>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S636>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S636>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_LogicalOperator2_b);
        UpdateFault(33);
      }

      /* Logic: '<S636>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S636>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S636>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(34, rtb_LogicalOperator3_f);
        UpdateFault(34);
      }

      /* Update for UnitDelay: '<S635>/Unit Delay' */
      BaseEngineController_A02_DWork.s635_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s635_Merge;

      /* Update for UnitDelay: '<S643>/Unit Delay' */
      BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S636>/Unit Delay' */
      BaseEngineController_A02_DWork.s636_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s636_Merge;

      /* Update for UnitDelay: '<S652>/Unit Delay' */
      BaseEngineController_A02_DWork.s652_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
