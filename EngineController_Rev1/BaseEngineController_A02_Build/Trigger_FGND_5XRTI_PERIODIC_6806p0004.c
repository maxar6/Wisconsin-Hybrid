/*
 * Trigger_FGND_5XRTI_PERIODIC_6806p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1579
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Feb 16 15:06:38 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_6806p0004(void)
{
  /* Named constants for Stateflow: '<S785>/ECUP Latch' */
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

      /* S-Function Block: <S601>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s601_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S601>/Product' incorporates:
       *  MinMax: '<S601>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S601>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_p : (ECTFiltConst_DataStore());

      /* Logic: '<S599>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S599>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S599>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(5) || IsFaultActive(6));

      /* Logic: '<S599>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S599>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S599>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(5) || IsFaultSuspected(6));

      /* S-Function Block: <S589>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s589_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S599>/Data Type Conversion' */
      rtb_DataTypeConversion_g = (real_T)
        BaseEngineController_A02_B.s589_motohawk_ain;

      /* S-Function Block: <S606>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g,
          (ECTIdxArr_DataStore()), 39, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_e = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S606>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s606_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
          ((ECTTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S599>/Unit Delay' */
      rtb_UnitDelay_m = BaseEngineController_A02_DWork.s599_UnitDelay_DSTATE;

      /* If: '<S599>/If' incorporates:
       *  Logic: '<S599>/Logical Operator5'
       *  Logic: '<S599>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S599>/If Action Subsystem' incorporates:
         *  ActionPort: '<S602>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_m,
          &BaseEngineController_A02_B.s599_Merge);

        /* End of Outputs for SubSystem: '<S599>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S599>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S603>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_B.s599_Merge);

        /* End of Outputs for SubSystem: '<S599>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S599>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S604>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s606_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s599_Merge);

        /* End of Outputs for SubSystem: '<S599>/If Action Subsystem2' */
      }

      /* End of If: '<S599>/If' */

      /* Sum: '<S607>/Sum1' incorporates:
       *  Constant: '<S607>/Constant'
       *  Product: '<S607>/Product'
       *  Product: '<S607>/Product1'
       *  Sum: '<S607>/Sum'
       *  UnitDelay: '<S607>/Unit Delay'
       */
      rtb_Sum1_po = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s607_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s599_Merge * rtb_Product_p;

      /* If: '<S605>/If' incorporates:
       *  Inport: '<S608>/In1'
       *  Inport: '<S609>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S605>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S605>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S605>/NewValue' incorporates:
         *  ActionPort: '<S608>/Action Port'
         */
        BaseEngineController_A02_B.s605_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S605>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S605>/OldValue' incorporates:
         *  ActionPort: '<S609>/Action Port'
         */
        BaseEngineController_A02_B.s605_Merge = rtb_Sum1_po;

        /* End of Outputs for SubSystem: '<S605>/OldValue' */
      }

      /* End of If: '<S605>/If' */

      /* Logic: '<S599>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S599>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S599>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S599>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_g >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S599>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator2_n);
        UpdateFault(5);
      }

      /* Logic: '<S599>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S599>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S599>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S599>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_g <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S599>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator3_a);
        UpdateFault(6);
      }

      /* S-Function Block: <S610>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s610_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_p = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S610>/Product' incorporates:
       *  MinMax: '<S610>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S610>/motohawk_calibration'
       */
      rtb_Product_p /= (rtb_Product_p >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_p : (IATFiltConst_DataStore());

      /* Logic: '<S600>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S600>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S600>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(26) || IsFaultActive(27));

      /* Logic: '<S600>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S600>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S600>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_e = (IsFaultSuspected(26) || IsFaultSuspected(27));

      /* S-Function Block: <S589>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_B.s589_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S600>/Data Type Conversion' */
      rtb_DataTypeConversion_p = (real_T)
        BaseEngineController_A02_B.s589_motohawk_ain1;

      /* S-Function Block: <S615>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_p,
          (IATIdxArr_DataStore()), 39, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_n = (IATIdx_DataStore());
      }

      /* S-Function Block: <S615>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_B.s615_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((IATTbl_DataStore())), 39);
      }

      /* UnitDelay: '<S600>/Unit Delay' */
      rtb_UnitDelay_b1c = BaseEngineController_A02_DWork.s600_UnitDelay_DSTATE;

      /* If: '<S600>/If' incorporates:
       *  Logic: '<S600>/Logical Operator5'
       *  Logic: '<S600>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_e) {
        /* Outputs for IfAction SubSystem: '<S600>/If Action Subsystem' incorporates:
         *  ActionPort: '<S611>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_b1c,
          &BaseEngineController_A02_B.s600_Merge);

        /* End of Outputs for SubSystem: '<S600>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S600>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S612>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_B.s600_Merge);

        /* End of Outputs for SubSystem: '<S600>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S600>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S613>/Action Port'
         */
        BaseEngineController_A02_IfActionSubsystem
          (BaseEngineController_A02_B.s615_motohawk_interpolation_1d,
           &BaseEngineController_A02_B.s600_Merge);

        /* End of Outputs for SubSystem: '<S600>/If Action Subsystem2' */
      }

      /* End of If: '<S600>/If' */

      /* Sum: '<S616>/Sum1' incorporates:
       *  Constant: '<S616>/Constant'
       *  Product: '<S616>/Product'
       *  Product: '<S616>/Product1'
       *  Sum: '<S616>/Sum'
       *  UnitDelay: '<S616>/Unit Delay'
       */
      rtb_Sum1_mu = (1.0 - rtb_Product_p) *
        BaseEngineController_A02_DWork.s616_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s600_Merge * rtb_Product_p;

      /* If: '<S614>/If' incorporates:
       *  Inport: '<S617>/In1'
       *  Inport: '<S618>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S614>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S614>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S614>/NewValue' incorporates:
         *  ActionPort: '<S617>/Action Port'
         */
        BaseEngineController_A02_B.s614_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S614>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S614>/OldValue' incorporates:
         *  ActionPort: '<S618>/Action Port'
         */
        BaseEngineController_A02_B.s614_Merge = rtb_Sum1_mu;

        /* End of Outputs for SubSystem: '<S614>/OldValue' */
      }

      /* End of If: '<S614>/If' */

      /* Logic: '<S600>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S600>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S600>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S600>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_p >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S600>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator2_b);
        UpdateFault(26);
      }

      /* Logic: '<S600>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S600>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S600>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S600>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_p <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S600>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator3_f);
        UpdateFault(27);
      }

      /* Update for UnitDelay: '<S599>/Unit Delay' */
      BaseEngineController_A02_DWork.s599_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s599_Merge;

      /* Update for UnitDelay: '<S607>/Unit Delay' */
      BaseEngineController_A02_DWork.s607_UnitDelay_DSTATE = rtb_Sum1_po;

      /* Update for UnitDelay: '<S600>/Unit Delay' */
      BaseEngineController_A02_DWork.s600_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s600_Merge;

      /* Update for UnitDelay: '<S616>/Unit Delay' */
      BaseEngineController_A02_DWork.s616_UnitDelay_DSTATE = rtb_Sum1_mu;
    }
  }
}
