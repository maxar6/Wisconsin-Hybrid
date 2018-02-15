/*
 * Trigger_FGND_5XRTI_PERIODIC_7373p0001.c
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

void Trigger_FGND_5XRTI_PERIODIC_7373p0001(void)
{
  /* Named constants for Stateflow: '<S778>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S357>/Temp Sensors' */
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

      /* S-Function Block: <S594>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s594_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S594>/Product' incorporates:
       *  MinMax: '<S594>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S594>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S592>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S592>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S592>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S592>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S592>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S592>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* S-Function Block: <S582>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s582_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S592>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s582_motohawk_ain;

      /* S-Function Block: <S599>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S599>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s599_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S592>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s592_UnitDelay_DSTATE;

      /* If: '<S592>/If' incorporates:
       *  Logic: '<S592>/Logical Operator5'
       *  Logic: '<S592>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S592>/If Action Subsystem' incorporates:
         *  ActionPort: '<S595>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s592_Merge);

        /* End of Outputs for SubSystem: '<S592>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S592>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S596>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s592_Merge);

        /* End of Outputs for SubSystem: '<S592>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S592>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S597>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s599_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s592_Merge);

        /* End of Outputs for SubSystem: '<S592>/If Action Subsystem2' */
      }

      /* End of If: '<S592>/If' */

      /* Sum: '<S600>/Sum1' incorporates:
       *  Constant: '<S600>/Constant'
       *  Product: '<S600>/Product'
       *  Product: '<S600>/Product1'
       *  Sum: '<S600>/Sum'
       *  UnitDelay: '<S600>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s600_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s592_Merge * rtb_Product_p;

      /* If: '<S598>/If' incorporates:
       *  Inport: '<S601>/In1'
       *  Inport: '<S602>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S598>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S598>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S598>/NewValue' incorporates:
         *  ActionPort: '<S601>/Action Port'
         */
        BaseEngineController_A02_B.s598_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S598>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S598>/OldValue' incorporates:
         *  ActionPort: '<S602>/Action Port'
         */
        BaseEngineController_A02_B.s598_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S598>/OldValue' */
      }

      /* End of If: '<S598>/If' */

      /* Logic: '<S592>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S592>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S592>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S592>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S592>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S592>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S592>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S592>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S592>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S592>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S603>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s603_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S603>/Product' incorporates:
       *  MinMax: '<S603>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S603>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S593>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S593>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S593>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(26) || IsFaultActive(27));

      /* Logic: '<S593>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S593>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S593>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(26) || IsFaultSuspected(27));

      /* S-Function Block: <S582>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s582_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S593>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s582_motohawk_ain1;

      /* S-Function Block: <S608>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S608>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s608_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S593>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s593_UnitDelay_DSTATE;

      /* If: '<S593>/If' incorporates:
       *  Logic: '<S593>/Logical Operator5'
       *  Logic: '<S593>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S593>/If Action Subsystem' incorporates:
         *  ActionPort: '<S604>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s593_Merge);

        /* End of Outputs for SubSystem: '<S593>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S593>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S605>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s593_Merge);

        /* End of Outputs for SubSystem: '<S593>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S593>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S606>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s608_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s593_Merge);

        /* End of Outputs for SubSystem: '<S593>/If Action Subsystem2' */
      }

      /* End of If: '<S593>/If' */

      /* Sum: '<S609>/Sum1' incorporates:
       *  Constant: '<S609>/Constant'
       *  Product: '<S609>/Product'
       *  Product: '<S609>/Product1'
       *  Sum: '<S609>/Sum'
       *  UnitDelay: '<S609>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s609_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s593_Merge * rtb_Product_p;

      /* If: '<S607>/If' incorporates:
       *  Inport: '<S610>/In1'
       *  Inport: '<S611>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S607>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S607>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S607>/NewValue' incorporates:
         *  ActionPort: '<S610>/Action Port'
         */
        BaseEngineController_A02_B.s607_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S607>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S607>/OldValue' incorporates:
         *  ActionPort: '<S611>/Action Port'
         */
        BaseEngineController_A02_B.s607_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S607>/OldValue' */
      }

      /* End of If: '<S607>/If' */

      /* Logic: '<S593>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S593>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S593>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S593>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S593>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator2_b);
        UpdateFault(26);
      }

      /* Logic: '<S593>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S593>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S593>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S593>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S593>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator3_f);
        UpdateFault(27);
      }

      /* Update for UnitDelay: '<S592>/Unit Delay' */
      BaseEngineController_A02_DWork.s592_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s592_Merge;

      /* Update for UnitDelay: '<S600>/Unit Delay' */
      BaseEngineController_A02_DWork.s600_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S593>/Unit Delay' */
      BaseEngineController_A02_DWork.s593_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s593_Merge;

      /* Update for UnitDelay: '<S609>/Unit Delay' */
      BaseEngineController_A02_DWork.s609_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
