/*
 * Trigger_FGND_5XRTI_PERIODIC_8397p0001.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1553
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Jan 24 11:43:49 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_8397p0001(void)
{
  /* Named constants for Stateflow: '<S822>/ECUP Latch' */
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

      /* S-Function Block: <S631>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s631_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S631>/Product' incorporates:
       *  MinMax: '<S631>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S629>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S629>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* S-Function Block: <S619>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s619_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S629>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s619_motohawk_ain;

      /* S-Function Block: <S636>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S636>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s636_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S629>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE;

      /* If: '<S629>/If' incorporates:
       *  Logic: '<S629>/Logical Operator5'
       *  Logic: '<S629>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem' incorporates:
         *  ActionPort: '<S632>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S633>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s636_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem2' */
      }

      /* End of If: '<S629>/If' */

      /* Sum: '<S637>/Sum1' incorporates:
       *  Constant: '<S637>/Constant'
       *  Product: '<S637>/Product'
       *  Product: '<S637>/Product1'
       *  Sum: '<S637>/Sum'
       *  UnitDelay: '<S637>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s637_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s629_Merge * rtb_Product_p;

      /* If: '<S635>/If' incorporates:
       *  Inport: '<S638>/In1'
       *  Inport: '<S639>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S635>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S635>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S635>/NewValue' incorporates:
         *  ActionPort: '<S638>/Action Port'
         */
        BaseEngineController_A02_B.s635_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S635>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S635>/OldValue' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        BaseEngineController_A02_B.s635_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S635>/OldValue' */
      }

      /* End of If: '<S635>/If' */

      /* Logic: '<S629>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S629>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S629>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S629>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S640>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s640_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S640>/Product' incorporates:
       *  MinMax: '<S640>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S630>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(26) || IsFaultActive(27));

      /* Logic: '<S630>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(26) || IsFaultSuspected(27));

      /* S-Function Block: <S619>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s619_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S630>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s619_motohawk_ain1;

      /* S-Function Block: <S645>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S645>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s645_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S630>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE;

      /* If: '<S630>/If' incorporates:
       *  Logic: '<S630>/Logical Operator5'
       *  Logic: '<S630>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem' incorporates:
         *  ActionPort: '<S641>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s645_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s630_Merge);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem2' */
      }

      /* End of If: '<S630>/If' */

      /* Sum: '<S646>/Sum1' incorporates:
       *  Constant: '<S646>/Constant'
       *  Product: '<S646>/Product'
       *  Product: '<S646>/Product1'
       *  Sum: '<S646>/Sum'
       *  UnitDelay: '<S646>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s630_Merge * rtb_Product_p;

      /* If: '<S644>/If' incorporates:
       *  Inport: '<S647>/In1'
       *  Inport: '<S648>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S644>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S644>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S644>/NewValue' incorporates:
         *  ActionPort: '<S647>/Action Port'
         */
        BaseEngineController_A02_B.s644_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S644>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S644>/OldValue' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_A02_B.s644_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S644>/OldValue' */
      }

      /* End of If: '<S644>/If' */

      /* Logic: '<S630>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator2_b);
        UpdateFault(26);
      }

      /* Logic: '<S630>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator3_f);
        UpdateFault(27);
      }

      /* Update for UnitDelay: '<S629>/Unit Delay' */
      BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s629_Merge;

      /* Update for UnitDelay: '<S637>/Unit Delay' */
      BaseEngineController_A02_DWork.s637_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S630>/Unit Delay' */
      BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s630_Merge;

      /* Update for UnitDelay: '<S646>/Unit Delay' */
      BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
