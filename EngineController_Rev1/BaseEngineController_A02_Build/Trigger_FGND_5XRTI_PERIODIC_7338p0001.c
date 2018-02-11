/*
 * Trigger_FGND_5XRTI_PERIODIC_7338p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1560
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Feb 10 00:15:12 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_7338p0001(void)
{
  /* Named constants for Stateflow: '<S823>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s395_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S395>/Temp Sensors' */
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

      /* S-Function Block: <S632>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s632_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S632>/Product' incorporates:
       *  MinMax: '<S632>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S630>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S630>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* S-Function Block: <S620>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s620_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S630>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s620_motohawk_ain;

      /* S-Function Block: <S637>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S637>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s637_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S630>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE;

      /* If: '<S630>/If' incorporates:
       *  Logic: '<S630>/Logical Operator5'
       *  Logic: '<S630>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem' incorporates:
         *  ActionPort: '<S633>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S635>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s637_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem2' */
      }

      /* End of If: '<S630>/If' */

      /* Sum: '<S638>/Sum1' incorporates:
       *  Constant: '<S638>/Constant'
       *  Product: '<S638>/Product'
       *  Product: '<S638>/Product1'
       *  Sum: '<S638>/Sum'
       *  UnitDelay: '<S638>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s638_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s630_Merge * rtb_Product_p;

      /* If: '<S636>/If' incorporates:
       *  Inport: '<S639>/In1'
       *  Inport: '<S640>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S636>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S636>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S636>/NewValue' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        BaseEngineController_A02_B.s636_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S636>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S636>/OldValue' incorporates:
         *  ActionPort: '<S640>/Action Port'
         */
        BaseEngineController_A02_B.s636_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S636>/OldValue' */
      }

      /* End of If: '<S636>/If' */

      /* Logic: '<S630>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S630>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S641>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s641_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S641>/Product' incorporates:
       *  MinMax: '<S641>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S631>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(26) || IsFaultActive(27));

      /* Logic: '<S631>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(26) || IsFaultSuspected(27));

      /* S-Function Block: <S620>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s620_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S631>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s620_motohawk_ain1;

      /* S-Function Block: <S646>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S646>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s646_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S631>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s631_UnitDelay_DSTATE;

      /* If: '<S631>/If' incorporates:
       *  Logic: '<S631>/Logical Operator5'
       *  Logic: '<S631>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s646_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem2' */
      }

      /* End of If: '<S631>/If' */

      /* Sum: '<S647>/Sum1' incorporates:
       *  Constant: '<S647>/Constant'
       *  Product: '<S647>/Product'
       *  Product: '<S647>/Product1'
       *  Sum: '<S647>/Sum'
       *  UnitDelay: '<S647>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s631_Merge * rtb_Product_p;

      /* If: '<S645>/If' incorporates:
       *  Inport: '<S648>/In1'
       *  Inport: '<S649>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_A02_B.s645_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S645>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
         *  ActionPort: '<S649>/Action Port'
         */
        BaseEngineController_A02_B.s645_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S645>/OldValue' */
      }

      /* End of If: '<S645>/If' */

      /* Logic: '<S631>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S631>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator2_b);
        UpdateFault(26);
      }

      /* Logic: '<S631>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S631>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator3_f);
        UpdateFault(27);
      }

      /* Update for UnitDelay: '<S630>/Unit Delay' */
      BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s630_Merge;

      /* Update for UnitDelay: '<S638>/Unit Delay' */
      BaseEngineController_A02_DWork.s638_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S631>/Unit Delay' */
      BaseEngineController_A02_DWork.s631_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s631_Merge;

      /* Update for UnitDelay: '<S647>/Unit Delay' */
      BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
