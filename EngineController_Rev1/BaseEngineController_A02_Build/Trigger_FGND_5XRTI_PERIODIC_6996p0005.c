/*
 * Trigger_FGND_5XRTI_PERIODIC_6996p0005.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1626
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Apr 22 15:55:33 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_6996p0005(void)
{
  /* Named constants for Stateflow: '<S808>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S363>/Temp Sensors' */
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

      /* S-Function Block: <S614>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s614_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S614>/Product' incorporates:
       *  MinMax: '<S614>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S614>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S612>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S612>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S612>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S612>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S612>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S612>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* S-Function Block: <S602>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s602_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S612>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s602_motohawk_ain;

      /* S-Function Block: <S619>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S619>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s619_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S612>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s612_UnitDelay_DSTATE;

      /* If: '<S612>/If' incorporates:
       *  Logic: '<S612>/Logical Operator5'
       *  Logic: '<S612>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S612>/If Action Subsystem' incorporates:
         *  ActionPort: '<S615>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s612_Merge);

        /* End of Outputs for SubSystem: '<S612>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S612>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S616>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s612_Merge);

        /* End of Outputs for SubSystem: '<S612>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S612>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S617>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s619_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s612_Merge);

        /* End of Outputs for SubSystem: '<S612>/If Action Subsystem2' */
      }

      /* End of If: '<S612>/If' */

      /* Sum: '<S620>/Sum1' incorporates:
       *  Constant: '<S620>/Constant'
       *  Product: '<S620>/Product'
       *  Product: '<S620>/Product1'
       *  Sum: '<S620>/Sum'
       *  UnitDelay: '<S620>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s620_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s612_Merge * rtb_Product_p;

      /* If: '<S618>/If' incorporates:
       *  Inport: '<S621>/In1'
       *  Inport: '<S622>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S618>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S618>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S618>/NewValue' incorporates:
         *  ActionPort: '<S621>/Action Port'
         */
        BaseEngineController_A02_B.s618_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S618>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S618>/OldValue' incorporates:
         *  ActionPort: '<S622>/Action Port'
         */
        BaseEngineController_A02_B.s618_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S618>/OldValue' */
      }

      /* End of If: '<S618>/If' */

      /* Logic: '<S612>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S612>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S612>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S612>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S612>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S612>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S612>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S612>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S612>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S612>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S623>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s623_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S623>/Product' incorporates:
       *  MinMax: '<S623>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S613>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S613>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S613>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(26) || IsFaultActive(27));

      /* Logic: '<S613>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S613>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S613>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(26) || IsFaultSuspected(27));

      /* S-Function Block: <S602>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s602_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S613>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s602_motohawk_ain1;

      /* S-Function Block: <S628>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S628>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s628_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S613>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE;

      /* If: '<S613>/If' incorporates:
       *  Logic: '<S613>/Logical Operator5'
       *  Logic: '<S613>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S613>/If Action Subsystem' incorporates:
         *  ActionPort: '<S624>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s613_Merge);

        /* End of Outputs for SubSystem: '<S613>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S613>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S625>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s613_Merge);

        /* End of Outputs for SubSystem: '<S613>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S613>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S626>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s628_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s613_Merge);

        /* End of Outputs for SubSystem: '<S613>/If Action Subsystem2' */
      }

      /* End of If: '<S613>/If' */

      /* Sum: '<S629>/Sum1' incorporates:
       *  Constant: '<S629>/Constant'
       *  Product: '<S629>/Product'
       *  Product: '<S629>/Product1'
       *  Sum: '<S629>/Sum'
       *  UnitDelay: '<S629>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s613_Merge * rtb_Product_p;

      /* If: '<S627>/If' incorporates:
       *  Inport: '<S630>/In1'
       *  Inport: '<S631>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S627>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S627>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S627>/NewValue' incorporates:
         *  ActionPort: '<S630>/Action Port'
         */
        BaseEngineController_A02_B.s627_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S627>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S627>/OldValue' incorporates:
         *  ActionPort: '<S631>/Action Port'
         */
        BaseEngineController_A02_B.s627_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S627>/OldValue' */
      }

      /* End of If: '<S627>/If' */

      /* Logic: '<S613>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S613>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S613>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S613>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S613>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator2_b);
        UpdateFault(26);
      }

      /* Logic: '<S613>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S613>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S613>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S613>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S613>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator3_f);
        UpdateFault(27);
      }

      /* Update for UnitDelay: '<S612>/Unit Delay' */
      BaseEngineController_A02_DWork.s612_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s612_Merge;

      /* Update for UnitDelay: '<S620>/Unit Delay' */
      BaseEngineController_A02_DWork.s620_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S613>/Unit Delay' */
      BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s613_Merge;

      /* Update for UnitDelay: '<S629>/Unit Delay' */
      BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
