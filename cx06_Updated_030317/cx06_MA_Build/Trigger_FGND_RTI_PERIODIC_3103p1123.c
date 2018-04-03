/*
 * Trigger_FGND_RTI_PERIODIC_3103p1123.c
 *
 * Real-Time Workshop code generation for Simulink model "cx06_MA.mdl".
 *
 * Model version              : 1.1504
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA.h"
#include "cx06_MA_private.h"

void Trigger_FGND_RTI_PERIODIC_3103p1123(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    cx06_MA_M->Timing.clockTick0 = lower32Bits;
    cx06_MA_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    /* Output and update for function-call system: '<Root>/Inputs' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain1_o1;
      index_T rtb_motohawk_prelookup;
      index_T rtb_motohawk_prelookup1;
      boolean_T rtb_Compare;
      boolean_T rtb_LogicalOperator;
      boolean_T rtb_LogicalOperator_o;
      boolean_T rtb_LogicalOperator_e;
      boolean_T rtb_RelationalOperator_a;
      boolean_T rtb_LogicalOperator_p;
      boolean_T rtb_LogicalOperator_f;
      boolean_T rtb_RelationalOperator_h;
      boolean_T rtb_LogicalOperator_c;
      boolean_T rtb_LogicalOperator_p3;
      boolean_T rtb_LogicalOperator_co;
      boolean_T rtb_motohawk_din_o1;
      boolean_T rtb_motohawk_din1_o1;
      boolean_T rtb_Compare_l;
      boolean_T rtb_Compare_c;
      boolean_T rtb_Compare_p;
      boolean_T rtb_Compare_lc;
      boolean_T rtb_Compare_g;
      boolean_T rtb_Compare_o;
      boolean_T rtb_Compare_i;
      boolean_T rtb_Compare_f;
      boolean_T rtb_Compare_k;
      boolean_T rtb_Compare_b;
      boolean_T rtb_Compare_a;
      boolean_T rtb_Compare_h;
      boolean_T rtb_Compare_gf;
      boolean_T rtb_RelationalOperator_mk;
      real32_T min;
      real32_T rtb_Gain;
      real32_T max;
      real32_T rtb_Gain_p;
      real32_T rtb_MinMax1;
      real32_T rtb_ptCalibration1_4;
      real_T tmp;

      /* S-Function Block: <S17>/motohawk_ain1 Resource: AC_Pres */
      {
        extern NativeError_S AC_Pres_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        AC_Pres_AnalogInput_Get(&rtb_motohawk_ain1_o1,
          &cx06_MA_B.s17_motohawk_ain1_o2);
      }

      /* RelationalOperator: '<S23>/Compare' incorporates:
       *  Constant: '<S23>/Constant'
       */
      rtb_Compare = (cx06_MA_B.s17_motohawk_ain1_o2 != 0);

      /* S-Function (motohawk_sfun_fault_def): '<S17>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: ACAnalogErr */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(0, rtb_Compare);
        UpdateFault(0);
      }

      /* S-Function Block: <S17>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_uint16_T(uint16_T in, const volatile
          uint16_T ordarr[], uint32_T sz, uint16_T prev);
        (AC_Cal_OrdIn_DataStore()) = rtb_motohawk_ain1_o1;
        (AC_Cal_OrdIdx_DataStore()) = TablePrelookup_uint16_T
          (rtb_motohawk_ain1_o1, (AC_Cal_OrdIdxArr_DataStore()), 9,
           (AC_Cal_OrdIdx_DataStore()));
        rtb_motohawk_prelookup = (AC_Cal_OrdIdx_DataStore());
      }

      /* S-Function Block: <S17>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        cx06_MA_B.s17_AC_Pres = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((AC_Cal_TblTbl_DataStore())), 9);
        (AC_Cal_Tbl_DataStore()) = cx06_MA_B.s17_AC_Pres;
      }

      /* RelationalOperator: '<S17>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration1'
       */
      rtb_RelationalOperator_mk = (cx06_MA_B.s17_AC_Pres < (real_T)((uint16_T)
        (min_Press_Thres_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S17>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ACLowPres */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(1, rtb_RelationalOperator_mk);
        UpdateFault(1);
      }

      /* S-Function Block: <S18>/motohawk_ain2 Resource: CruiseButtons */
      {
        extern NativeError_S CruiseButtons_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CruiseButtons_AnalogInput_Get(&cx06_MA_B.s18_motohawk_ain2_o1,
          &cx06_MA_B.s18_motohawk_ain2_o2);
      }

      /* Embedded MATLAB: '<S18>/read_Cruise_Buttons' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration3'
       */
      /* Embedded MATLAB Function 'Inputs/Analog Inputs/Cruise Buttons/read_Cruise_Buttons': '<S24>:1' */
      /*  This block supports an embeddable subset of the MATLAB language. */
      /*  See the help menu for details.  */
      /* '<S24>:1:4' */
      cx06_MA_B.s24_cruiseBut = 0.0;
      if ((real_T)cx06_MA_B.s18_motohawk_ain2_o1 > (Cruise_Main_Tres_DataStore()))
      {
        /* '<S24>:1:5' */
        /* '<S24>:1:6' */
        cx06_MA_B.s24_cruiseBut = cx06_MA_B.s24_cruiseBut + 1.0;
      }

      if ((real_T)cx06_MA_B.s18_motohawk_ain2_o1 > (Cruise_Up_Tres_DataStore()))
      {
        /* '<S24>:1:8' */
        /* '<S24>:1:9' */
        cx06_MA_B.s24_cruiseBut = cx06_MA_B.s24_cruiseBut + 1.0;
      }

      if ((real_T)cx06_MA_B.s18_motohawk_ain2_o1 > (Cruise_Down_Tres_DataStore()))
      {
        /* '<S24>:1:11' */
        /* '<S24>:1:12' */
        cx06_MA_B.s24_cruiseBut = cx06_MA_B.s24_cruiseBut + 1.0;
      }

      /* MinMax: '<S28>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration1'
       */
      min = rt_MINf_snf((Accel1_Zero_DataStore()), (Accel1_Full_DataStore()));

      /* MinMax: '<S28>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration1'
       */
      max = rt_MAXf_snf((Accel1_Full_DataStore()), (Accel1_Zero_DataStore()));

      /* Gain: '<S28>/Gain' incorporates:
       *  Sum: '<S28>/Sum1'
       */
      rtb_Gain_p = (max - min) * 1.000000015E-001F;

      /* S-Function Block: <S25>/motohawk_ain4 Resource: Accel1 */
      {
        extern NativeError_S Accel1_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        Accel1_AnalogInput_Get(&cx06_MA_B.s25_motohawk_ain4_o1,
          &cx06_MA_B.s25_motohawk_ain4_o2);
      }

      /* DataTypeConversion: '<S25>/Data Type Conversion' */
      rtb_Gain = (real32_T)cx06_MA_B.s25_motohawk_ain4_o1;

      /* Logic: '<S28>/Logical Operator' incorporates:
       *  RelationalOperator: '<S28>/Relational Operator'
       *  RelationalOperator: '<S28>/Relational Operator1'
       *  Sum: '<S28>/Sum'
       *  Sum: '<S28>/Sum2'
       */
      rtb_LogicalOperator = ((min - rtb_Gain_p > rtb_Gain) || (rtb_Gain >
        rtb_Gain_p + max));

      /* S-Function (motohawk_sfun_fault_def): '<S25>/motohawk_fault_def' */

      /* Set Fault Suspected Status: Accel1Range */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(3, rtb_LogicalOperator);
        UpdateFault(3);
      }

      /* MinMax: '<S29>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration3'
       */
      min = rt_MINf_snf((Accel2_Zero_DataStore()), (Accel2_Full_DataStore()));

      /* MinMax: '<S29>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration3'
       */
      max = rt_MAXf_snf((Accel2_Full_DataStore()), (Accel2_Zero_DataStore()));

      /* Gain: '<S29>/Gain' incorporates:
       *  Sum: '<S29>/Sum1'
       */
      rtb_MinMax1 = (max - min) * 1.000000015E-001F;

      /* S-Function Block: <S25>/motohawk_ain1 Resource: Accel2 */
      {
        extern NativeError_S Accel2_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        Accel2_AnalogInput_Get(&cx06_MA_B.s25_motohawk_ain1_o1,
          &cx06_MA_B.s25_motohawk_ain1_o2);
      }

      /* DataTypeConversion: '<S25>/Data Type Conversion1' */
      rtb_Gain_p = (real32_T)cx06_MA_B.s25_motohawk_ain1_o1;

      /* Logic: '<S29>/Logical Operator' incorporates:
       *  RelationalOperator: '<S29>/Relational Operator'
       *  RelationalOperator: '<S29>/Relational Operator1'
       *  Sum: '<S29>/Sum'
       *  Sum: '<S29>/Sum2'
       */
      rtb_LogicalOperator_o = ((min - rtb_MinMax1 > rtb_Gain_p) || (rtb_Gain_p >
        rtb_MinMax1 + max));

      /* S-Function (motohawk_sfun_fault_def): '<S25>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: Accel2Range */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(4, rtb_LogicalOperator_o);
        UpdateFault(4);
      }

      /* Fcn: '<S25>/2pt Calibration1_2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration1'
       */
      rtb_Gain = (rtb_Gain - (Accel1_Zero_DataStore())) /
        ((Accel1_Full_DataStore()) - (Accel1_Zero_DataStore()));

      /* Saturate: '<S25>/Saturation' */
      cx06_MA_B.s25_Saturation = rt_SATURATE(rtb_Gain, 0.0F, 1.0F);

      /* Fcn: '<S25>/2pt Calibration1_3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration3'
       */
      rtb_Gain_p = (rtb_Gain_p - (Accel2_Zero_DataStore())) /
        ((Accel2_Full_DataStore()) - (Accel2_Zero_DataStore()));

      /* Saturate: '<S25>/Saturation1' */
      cx06_MA_B.s25_Saturation1 = rt_SATURATE(rtb_Gain_p, 0.0F, 1.0F);

      /* Abs: '<S25>/Abs' incorporates:
       *  Sum: '<S25>/Sum'
       */
      min = (real32_T)fabs(cx06_MA_B.s25_Saturation - cx06_MA_B.s25_Saturation1);

      /* RelationalOperator: '<S25>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration4'
       */
      rtb_RelationalOperator_mk = ((real_T)min <= (Acell_Max_Diff_DataStore()));

      /* Logic: '<S25>/Logical Operator' */
      rtb_LogicalOperator_e = !rtb_RelationalOperator_mk;

      /* S-Function (motohawk_sfun_fault_def): '<S25>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Accel12Sync */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(2, rtb_LogicalOperator_e);
        UpdateFault(2);
      }

      /* Switch: '<S25>/Switch' incorporates:
       *  Constant: '<S25>/Constant'
       *  Fcn: '<S25>/Average'
       */
      if (rtb_RelationalOperator_mk) {
        cx06_MA_B.s25_Accel = (cx06_MA_B.s25_Saturation +
          cx06_MA_B.s25_Saturation1) / 2.0F;
      } else {
        cx06_MA_B.s25_Accel = 0.0;
      }

      /* S-Function Block: <S26>/motohawk_ain2 Resource: Brake */
      {
        extern NativeError_S Brake_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        Brake_AnalogInput_Get(&cx06_MA_B.s26_motohawk_ain2_o1,
                              &cx06_MA_B.s26_motohawk_ain2_o2);
      }

      /* DataTypeConversion: '<S26>/Data Type Conversion2' */
      rtb_MinMax1 = (real32_T)cx06_MA_B.s26_motohawk_ain2_o1;

      /* Fcn: '<S26>/2pt Calibration1_1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration6'
       */
      rtb_Gain_p = (rtb_MinMax1 - (Brake_Zero_DataStore())) /
        ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

      /* Saturate: '<S26>/Saturation2' */
      cx06_MA_B.s26_Brake = rt_SATURATE(rtb_Gain_p, 0.0F, 1.0F);

      /* S-Function Block: <S26>/motohawk_ain6 Resource: BrakeBackUp */
      {
        extern NativeError_S BrakeBackUp_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        BrakeBackUp_AnalogInput_Get(&cx06_MA_B.s26_motohawk_ain6_o1,
          &cx06_MA_B.s26_motohawk_ain6_o2);
      }

      /* DataTypeConversion: '<S26>/Data Type Conversion5' */
      rtb_Gain_p = (real32_T)cx06_MA_B.s26_motohawk_ain6_o1;

      /* Fcn: '<S26>/2pt Calibration1_6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration11'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration12'
       */
      rtb_Gain = (rtb_Gain_p - (BrakeBackup_Zero_DataStore())) /
        ((BrakeBackup_Full_DataStore()) - (BrakeBackup_Zero_DataStore()));

      /* Saturate: '<S26>/Saturation5' */
      cx06_MA_B.s26_BrakeBackup = rt_SATURATE(rtb_Gain, 0.0F, 1.0F);

      /* Sum: '<S32>/Sum1' */
      rtb_Gain = cx06_MA_B.s26_Brake - cx06_MA_B.s26_BrakeBackup;

      /* RelationalOperator: '<S32>/Relational Operator' incorporates:
       *  Abs: '<S32>/Abs'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration1'
       */
      rtb_RelationalOperator_a = ((real32_T)fabs(rtb_Gain) >
        (Brake_Redun_Err_DataStore()));

      /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: BrakeRedundant */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(7, rtb_RelationalOperator_a);
        UpdateFault(7);
      }

      /* MinMax: '<S30>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration6'
       */
      min = rt_MINf_snf((Brake_Zero_DataStore()), (Brake_Full_DataStore()));

      /* MinMax: '<S30>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration6'
       */
      max = rt_MAXf_snf((Brake_Full_DataStore()), (Brake_Zero_DataStore()));

      /* Gain: '<S30>/Gain' incorporates:
       *  Sum: '<S30>/Sum1'
       */
      rtb_ptCalibration1_4 = (max - min) * 1.000000015E-001F;

      /* Logic: '<S30>/Logical Operator' incorporates:
       *  RelationalOperator: '<S30>/Relational Operator'
       *  RelationalOperator: '<S30>/Relational Operator1'
       *  Sum: '<S30>/Sum'
       *  Sum: '<S30>/Sum2'
       */
      rtb_LogicalOperator_p = ((min - rtb_ptCalibration1_4 > rtb_MinMax1) ||
        (rtb_MinMax1 > rtb_ptCalibration1_4 + max));

      /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: BrakeRange */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(6, rtb_LogicalOperator_p);
        UpdateFault(6);
      }

      /* MinMax: '<S31>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration11'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration12'
       */
      min = rt_MINf_snf((BrakeBackup_Zero_DataStore()),
                        (BrakeBackup_Full_DataStore()));

      /* MinMax: '<S31>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration11'
       *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration12'
       */
      max = rt_MAXf_snf((BrakeBackup_Full_DataStore()),
                        (BrakeBackup_Zero_DataStore()));

      /* Gain: '<S31>/Gain' incorporates:
       *  Sum: '<S31>/Sum1'
       */
      rtb_Gain = (max - min) * 1.000000015E-001F;

      /* Logic: '<S31>/Logical Operator' incorporates:
       *  RelationalOperator: '<S31>/Relational Operator'
       *  RelationalOperator: '<S31>/Relational Operator1'
       *  Sum: '<S31>/Sum'
       *  Sum: '<S31>/Sum2'
       */
      rtb_LogicalOperator_f = ((min - rtb_Gain > rtb_Gain_p) || (rtb_Gain_p >
        rtb_Gain + max));

      /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def6' */

      /* Set Fault Suspected Status: BrakeBackupRange */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(5, rtb_LogicalOperator_f);
        UpdateFault(5);
      }

      /* S-Function Block: <S27>/motohawk_ain3 Resource: Clutch */
      {
        extern NativeError_S Clutch_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        Clutch_AnalogInput_Get(&cx06_MA_B.s27_motohawk_ain3_o1,
          &cx06_MA_B.s27_motohawk_ain3_o2);
      }

      /* DataTypeConversion: '<S27>/Data Type Conversion3' */
      rtb_ptCalibration1_4 = (real32_T)cx06_MA_B.s27_motohawk_ain3_o1;

      /* Fcn: '<S27>/2pt Calibration1_4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration8'
       */
      rtb_MinMax1 = (rtb_ptCalibration1_4 - (Clutch_Zero_DataStore())) /
        ((Clutch_Full_DataStore()) - (Clutch_Zero_DataStore()));

      /* Saturate: '<S27>/Saturation3' */
      cx06_MA_B.s27_Clutch = rt_SATURATE(rtb_MinMax1, 0.0F, 1.0F);

      /* S-Function Block: <S27>/motohawk_ain5 Resource: ClutchBackup */
      {
        extern NativeError_S ClutchBackup_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ClutchBackup_AnalogInput_Get(&cx06_MA_B.s27_motohawk_ain5_o1,
          &cx06_MA_B.s27_motohawk_ain5_o2);
      }

      /* DataTypeConversion: '<S27>/Data Type Conversion4' */
      rtb_MinMax1 = (real32_T)cx06_MA_B.s27_motohawk_ain5_o1;

      /* Fcn: '<S27>/2pt Calibration1_5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration10'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration9'
       */
      rtb_Gain_p = (rtb_MinMax1 - (ClutchBackup_Zero_DataStore())) /
        ((ClutchBackup_Full_DataStore()) - (ClutchBackup_Zero_DataStore()));

      /* Saturate: '<S27>/Saturation4' */
      cx06_MA_B.s27_ClutchBackup = rt_SATURATE(rtb_Gain_p, 0.0F, 1.0F);

      /* Sum: '<S35>/Sum1' */
      rtb_Gain_p = cx06_MA_B.s27_Clutch - cx06_MA_B.s27_ClutchBackup;

      /* RelationalOperator: '<S35>/Relational Operator' incorporates:
       *  Abs: '<S35>/Abs'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration1'
       */
      rtb_RelationalOperator_h = ((real32_T)fabs(rtb_Gain_p) >
        (Clutch_Redun_Err_DataStore()));

      /* S-Function (motohawk_sfun_fault_def): '<S27>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: ClutchRedundant */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(12, rtb_RelationalOperator_h);
        UpdateFault(12);
      }

      /* MinMax: '<S33>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration8'
       */
      min = rt_MINf_snf((Clutch_Zero_DataStore()), (Clutch_Full_DataStore()));

      /* MinMax: '<S33>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration8'
       */
      max = rt_MAXf_snf((Clutch_Full_DataStore()), (Clutch_Zero_DataStore()));

      /* Gain: '<S33>/Gain' incorporates:
       *  Sum: '<S33>/Sum1'
       */
      rtb_Gain = (max - min) * 1.000000015E-001F;

      /* Logic: '<S33>/Logical Operator' incorporates:
       *  RelationalOperator: '<S33>/Relational Operator'
       *  RelationalOperator: '<S33>/Relational Operator1'
       *  Sum: '<S33>/Sum'
       *  Sum: '<S33>/Sum2'
       */
      rtb_LogicalOperator_c = ((min - rtb_Gain > rtb_ptCalibration1_4) ||
        (rtb_ptCalibration1_4 > rtb_Gain + max));

      /* S-Function (motohawk_sfun_fault_def): '<S27>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: ClutchRange */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(11, rtb_LogicalOperator_c);
        UpdateFault(11);
      }

      /* MinMax: '<S34>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration10'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration9'
       */
      min = rt_MINf_snf((ClutchBackup_Zero_DataStore()),
                        (ClutchBackup_Full_DataStore()));

      /* MinMax: '<S34>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration10'
       *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration9'
       */
      max = rt_MAXf_snf((ClutchBackup_Full_DataStore()),
                        (ClutchBackup_Zero_DataStore()));

      /* Gain: '<S34>/Gain' incorporates:
       *  Sum: '<S34>/Sum1'
       */
      rtb_Gain = (max - min) * 1.000000015E-001F;

      /* Logic: '<S34>/Logical Operator' incorporates:
       *  RelationalOperator: '<S34>/Relational Operator'
       *  RelationalOperator: '<S34>/Relational Operator1'
       *  Sum: '<S34>/Sum'
       *  Sum: '<S34>/Sum2'
       */
      rtb_LogicalOperator_p3 = ((min - rtb_Gain > rtb_MinMax1) || (rtb_MinMax1 >
        rtb_Gain + max));

      /* S-Function (motohawk_sfun_fault_def): '<S27>/motohawk_fault_def5' */

      /* Set Fault Suspected Status: ClutchBackupRange */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(10, rtb_LogicalOperator_p3);
        UpdateFault(10);
      }

      /* MinMax: '<S36>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration8'
       */
      min = rt_MINf_snf((FeulLevel_Zero_DataStore()), (FuelLevel_Full_DataStore()));

      /* MinMax: '<S36>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration8'
       */
      max = rt_MAXf_snf((FuelLevel_Full_DataStore()), (FeulLevel_Zero_DataStore()));

      /* Gain: '<S36>/Gain' incorporates:
       *  Sum: '<S36>/Sum1'
       */
      rtb_Gain_p = (max - min) * 1.000000015E-001F;

      /* S-Function Block: <S20>/motohawk_ain3 Resource: FuelLevel */
      {
        extern NativeError_S FuelLevel_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        FuelLevel_AnalogInput_Get(&cx06_MA_B.s20_motohawk_ain3_o1,
          &cx06_MA_B.s20_motohawk_ain3_o2);
      }

      /* DataTypeConversion: '<S20>/Data Type Conversion3' */
      rtb_ptCalibration1_4 = (real32_T)cx06_MA_B.s20_motohawk_ain3_o1;

      /* Logic: '<S36>/Logical Operator' incorporates:
       *  RelationalOperator: '<S36>/Relational Operator'
       *  RelationalOperator: '<S36>/Relational Operator1'
       *  Sum: '<S36>/Sum'
       *  Sum: '<S36>/Sum2'
       */
      rtb_LogicalOperator_co = ((min - rtb_Gain_p > rtb_ptCalibration1_4) ||
        (rtb_ptCalibration1_4 > rtb_Gain_p + max));

      /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelLevelRange */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(13, rtb_LogicalOperator_co);
        UpdateFault(13);
      }

      /* Fcn: '<S20>/2pt Calibration1_4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration7'
       *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration8'
       */
      rtb_ptCalibration1_4 = (rtb_ptCalibration1_4 - (FuelLevel_Full_DataStore()))
        / ((FeulLevel_Zero_DataStore()) - (FuelLevel_Full_DataStore()));

      /* Saturate: '<S20>/Saturation3' */
      cx06_MA_B.s20_Fuel_Level = rt_SATURATE(rtb_ptCalibration1_4, 0.0F, 1.0F);

      /* S-Function Block: <S21>/motohawk_frequency_in Frequency Input Get: MAF_Input */
      {
        extern NativeError_S MAF_Input_FrequencyInput_Get(uint32_T *frequency,
          int16_T *duty_cycle);
        MAF_Input_FrequencyInput_Get(&cx06_MA_B.s21_motohawk_frequency_in, NULL);
      }

      /* Weighted Moving Average Block: '<S21>/Weighted Moving Average'
       *
       *  Finite Impulse Response Filter
       *
       * Input0  Data Type:  Integer        U32
       * Output0 Data Type:  Floating Point real_T
       *
       * Parameter: Gain
       *   Data Type:  Fixed Point    U32  2^-36
       *
       */
      {
        real_T yTemp1;
        cx06_MA_B.s21_WeightedMovingAverage = (real_T)
          cx06_MA_B.s21_motohawk_frequency_in * ldexp((real_T)2748779069U, -36);

        {
          int_T i1;
          uint32_T *dw_TapDelayU =
            &cx06_MA_DWork.s21_WeightedMovingAverage_TapDelayU[1];
          for (i1=0; i1 < 24; i1++) {
            yTemp1 = (real_T)dw_TapDelayU[((i1)-1)] * ldexp((real_T)
              cx06_MA_ConstP.WeightedMovingAverage_Gain[i1+1], -36);
            cx06_MA_B.s21_WeightedMovingAverage =
              cx06_MA_B.s21_WeightedMovingAverage + yTemp1;
          }
        }
      }

      /* S-Function Block: <S21>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF_Cal_OrdIn_DataStore()) = cx06_MA_B.s21_WeightedMovingAverage;
        (MAF_Cal_OrdIdx_DataStore()) = TablePrelookup_real_T
          (cx06_MA_B.s21_WeightedMovingAverage, (MAF_Cal_OrdIdxArr_DataStore()),
           17, (MAF_Cal_OrdIdx_DataStore()));
        rtb_motohawk_prelookup1 = (MAF_Cal_OrdIdx_DataStore());
      }

      /* S-Function Block: <S21>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        cx06_MA_B.s21_MAF = TableInterpolation1D_real_T(rtb_motohawk_prelookup1,
          (real_T *) ((MAF_Cal_TblTbl_DataStore())), 17);
        (MAF_Cal_Tbl_DataStore()) = cx06_MA_B.s21_MAF;
      }

      /* S-Function Block: <S22>/motohawk_din Resource: Neutral */
      {
        extern NativeError_S Neutral_DigitalInput_Get(boolean_T *out, uint16_T
          *status);
        Neutral_DigitalInput_Get(&rtb_motohawk_din_o1,
          &cx06_MA_B.s22_motohawk_din_o2);
      }

      /* Logic: '<S22>/Logical Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration'
       *  S-Function (motohawk_sfun_din): '<S22>/motohawk_din'
       */
      cx06_MA_B.s22_Neutral = (Neutral_Invert_DataStore()) ^ rtb_motohawk_din_o1;

      /* S-Function Block: <S22>/motohawk_din1 Resource: Reverse */
      {
        extern NativeError_S Reverse_DigitalInput_Get(boolean_T *out, uint16_T
          *status);
        Reverse_DigitalInput_Get(&rtb_motohawk_din1_o1,
          &cx06_MA_B.s22_motohawk_din1_o2);
      }

      /* Logic: '<S22>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_din): '<S22>/motohawk_din1'
       */
      cx06_MA_B.s22_Reverse = (Reverse_Invert_DataStore()) ^
        rtb_motohawk_din1_o1;

      /* S-Function (motohawk_sfun_read_canmsg): '<S11>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_6481p0011;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6481p0011,
          &messageObj);
        if ((cx06_MA_B.s11_AgeCount + 1) > cx06_MA_B.s11_AgeCount)
          cx06_MA_B.s11_AgeCount++;
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint16_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[1])) ;
          cx06_MA_B.s11_CAN_EWARN2 = (real_T) tmp0;
          cx06_MA_B.s11_Output2_V = ((real_T) tmp1) / ((real_T) 204.6);
          cx06_MA_B.s11_AgeCount = 0;
        }
      }

      /* RelationalOperator: '<S37>/Compare' incorporates:
       *  Constant: '<S37>/Constant'
       */
      rtb_Compare_l = (cx06_MA_B.s11_AgeCount > 30U);

      /* S-Function (motohawk_sfun_fault_def): '<S11>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: CAN2AO370 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(9, rtb_Compare_l);
        UpdateFault(9);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S11>/Read CAN Message' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_6480p0046;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6480p0046,
          &messageObj);
        if ((cx06_MA_B.s11_AgeCount_l + 1) > cx06_MA_B.s11_AgeCount_l)
          cx06_MA_B.s11_AgeCount_l++;
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint16_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[1])) ;
          cx06_MA_B.s11_CAN_EWARN1 = (real_T) tmp0;
          cx06_MA_B.s11_Output1_V = ((real_T) tmp1) / ((real_T) 204.6);
          cx06_MA_B.s11_AgeCount_l = 0;
        }
      }

      /* RelationalOperator: '<S38>/Compare' incorporates:
       *  Constant: '<S38>/Constant'
       */
      rtb_Compare_c = (cx06_MA_B.s11_AgeCount_l > 30U);

      /* S-Function (motohawk_sfun_fault_def): '<S11>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CAN2AO369 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(8, rtb_Compare_c);
        UpdateFault(8);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message2' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6629p0026;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6629p0026, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint16_T tmp5 = 0;
          uint8_T tmp6 = 0;
          int8_T tmp7 = 0;
          uint8_T tmp8 = 0;
          uint8_T tmp9 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[6])) ;
          cx06_MA_B.s12_Eng_Spd_V = (real_T) tmp0;
          cx06_MA_B.s12_Acel_Effect_Pos_V = (real_T) tmp1;
          cx06_MA_B.s12_Acel_Grad_V = (real_T) tmp2;
          cx06_MA_B.s12_Throt_Pos_V = (real_T) tmp3;
          cx06_MA_B.s12_Acel_Actual_Pos_V = (real_T) tmp4;
          cx06_MA_B.s12_Eng_Spd = ((real_T) tmp5) / ((real_T) 4);
          cx06_MA_B.s12_Acel_Effect_Pos = ((real_T) tmp6) / ((real_T) 2.55);
          cx06_MA_B.s12_Acel_Grad = ((real_T) tmp7) / ((real_T) 128);
          cx06_MA_B.s12_Throt_Pos = ((real_T) tmp8) / ((real_T) 2.55);
          cx06_MA_B.s12_Acel_Actual_Pos = ((real_T) tmp9) / ((real_T) 2.55);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion1' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Spd_V) || rtIsInf(cx06_MA_B.s12_Eng_Spd_V))
      {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Spd_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Spd_V_l = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion3' */
      if (rtIsNaN(cx06_MA_B.s12_Acel_Grad_V) || rtIsInf
          (cx06_MA_B.s12_Acel_Grad_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Acel_Grad_V), 256.0);
      }

      cx06_MA_B.s12_Acel_Grad_V_h = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6628p0022;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6628p0022, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint16_T tmp4 = 0;
          uint16_T tmp5 = 0;
          uint8_T tmp6 = 0;
          uint16_T tmp7 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[1] & 0x000000F0) >> 4)
            ;
          ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[2] & 0x000000F0) >> 4)
            | ((messageObj.u1DataArr[1] & 0x0000000F) << 4) ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[2] & 0x0000000F)) ;
          ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[5] & 0x000000F0) >> 4)
            ;
          ((uint8_T *)(&tmp7))[1] = ((messageObj.u1DataArr[6] & 0x000000F0) >> 4)
            | ((messageObj.u1DataArr[5] & 0x0000000F) << 4) ;
          cx06_MA_B.s12_Eng_Torq_Actual_V = (real_T) tmp0;
          cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V = (real_T) tmp1;
          cx06_MA_B.s12_Eng_Max_Drag_Torq_V = (real_T) tmp2;
          cx06_MA_B.s12_Eng_Torq_Max_V = (real_T) tmp3;
          cx06_MA_B.s12_Eng_Torq_Actual = (((real_T) tmp4) / ((real_T) 4)) +
            ((real_T) -200);
          cx06_MA_B.s12_Eng_Torq_Request = (((real_T) tmp5) / ((real_T) 4)) +
            ((real_T) -200);
          cx06_MA_B.s12_Eng_Max_Drag_Torq = (real_T) tmp6;
          cx06_MA_B.s12_Eng_Torq_Max = (((real_T) tmp7) / ((real_T) 4)) +
            ((real_T) -200);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion7' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V_h = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion8' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Max_Drag_Torq_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Max_Drag_Torq_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Max_Drag_Torq_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Max_Drag_Torq_V_i = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion9' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Torq_Max_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Torq_Max_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Torq_Max_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Torq_Max_V_g = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message3' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6630p0013;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6630p0013, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint16_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          uint8_T tmp6 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4] & 0x000000C0) >> 6)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[4] & 0x0000003C) >> 2)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[4] & 0x00000003)) ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[5] & 0x00000080) >> 7)
            ;
          cx06_MA_B.s12_Eng_Idle_Spd_V = (real_T) tmp0;
          cx06_MA_B.s12_Eng_Idle_Spd = ((real_T) tmp1) / ((real_T) 4);
          cx06_MA_B.s12_Base_Target_Eng_Idle_Spd = ((real_T) tmp2) * ((real_T) 8);
          cx06_MA_B.s12_Eng_Airflow_Backup_Mode = (real_T) tmp3;
          cx06_MA_B.s12_Eng_Throt_Control_Operat = (real_T) tmp4;
          cx06_MA_B.s12_Eng_Crankshaft_Backup_Mode = (real_T) tmp5;
          cx06_MA_B.s12_Eng_Allowed_Clutch_Adapt = (real_T) tmp6;
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion10' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Idle_Spd_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Idle_Spd_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Idle_Spd_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Idle_Spd_V_c = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message4' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6631p0016;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6631p0016, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          uint8_T tmp6 = 0;
          uint8_T tmp7 = 0;
          uint8_T tmp8 = 0;
          uint8_T tmp9 = 0;
          uint8_T tmp10 = 0;
          uint8_T tmp11 = 0;
          uint8_T tmp12 = 0;
          uint8_T tmp13 = 0;
          uint8_T tmp14 = 0;
          uint8_T tmp15 = 0;
          uint8_T tmp16 = 0;
          uint8_T tmp17 = 0;
          uint8_T tmp18 = 0;
          uint8_T tmp19 = 0;
          uint8_T tmp20 = 0;
          uint8_T tmp21 = 0;
          uint8_T tmp22 = 0;
          uint8_T tmp23 = 0;
          uint8_T tmp24 = 0;
          uint8_T tmp25 = 0;
          uint8_T tmp26 = 0;
          uint8_T tmp27 = 0;
          uint16_T tmp28 = 0;
          uint8_T tmp29 = 0;
          uint8_T tmp30 = 0;
          uint8_T tmp31 = 0;
          uint8_T tmp32 = 0;
          uint8_T tmp33 = 0;
          uint8_T tmp34 = 0;
          uint8_T tmp35 = 0;
          uint8_T tmp36 = 0;
          uint8_T tmp37 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2)
            ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1)
            ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
          ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[1] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[1] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[1] & 0x00000018) >>
            3) ;
          ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[1] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[1] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
          ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[2] & 0x000000C0) >>
            6) ;
          ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[2] & 0x00000038) >>
            3) ;
          ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
          ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[3] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[3] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[3] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp23))[0] = ((messageObj.u1DataArr[3] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp24))[0] = ((messageObj.u1DataArr[3] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp25))[0] = ((messageObj.u1DataArr[3] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp26))[0] = ((messageObj.u1DataArr[3] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp27))[0] = ((messageObj.u1DataArr[3] & 0x00000001)) ;
          ((uint8_T *)(&tmp28))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp28))[1] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp29))[0] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp30))[0] = ((messageObj.u1DataArr[7] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp31))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp32))[0] = ((messageObj.u1DataArr[7] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp33))[0] = ((messageObj.u1DataArr[7] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp34))[0] = ((messageObj.u1DataArr[7] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp35))[0] = ((messageObj.u1DataArr[7] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp36))[0] = ((messageObj.u1DataArr[7] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp37))[0] = ((messageObj.u1DataArr[7] & 0x00000001)) ;
          cx06_MA_B.s12_Brake_Ped_Switch_Active_V = (real_T) tmp0;
          cx06_MA_B.s12_Part_Filter_Clean_Alg_Active = (real_T) tmp1;
          cx06_MA_B.s12_Fuel_Inj_Roll_Cnt_Reset_Occured = (real_T) tmp2;
          cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V = (real_T) tmp3;
          cx06_MA_B.s12_Eng_Limp_Home_Mode = (real_T) tmp4;
          cx06_MA_B.s12_Eng_Torq_Reduction_Failed = (real_T) tmp5;
          cx06_MA_B.s12_Eng_Fail_Code_Retrieval_Required = (real_T) tmp6;
          cx06_MA_B.s12_Generator_Failed = (real_T) tmp7;
          cx06_MA_B.s12_Brake_Ped_Switch = (real_T) tmp8;
          cx06_MA_B.s12_Cruise_Control_Clutch_Switch = (real_T) tmp9;
          cx06_MA_B.s12_Cruise_Control_Active = (real_T) tmp10;
          cx06_MA_B.s12_Eng_Running_Stat = (real_T) tmp11;
          cx06_MA_B.s12_Warm_Up_Shift_Pattern_Req = (real_T) tmp12;
          cx06_MA_B.s12_Rough_Road = (real_T) tmp13;
          cx06_MA_B.s12_Eng_Warm_Up_Cycle_Achieved = (real_T) tmp14;
          cx06_MA_B.s12_Service_Eng_Non_Emission = (real_T) tmp15;
          cx06_MA_B.s12_Cruise_Control_Throt_Cmd_Stat = (real_T) tmp16;
          cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V = (real_T) tmp17;
          cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In = (real_T) tmp18;
          cx06_MA_B.s12_PrwTrn_Brk_Ped_In = (real_T) tmp19;
          cx06_MA_B.s12_Eng_Oil_Lvl_Low = (real_T) tmp20;
          cx06_MA_B.s12_Eng_Oil_Pres_Low = (real_T) tmp21;
          cx06_MA_B.s12_Accel_Kick_Down = (real_T) tmp22;
          cx06_MA_B.s12_Glow_Plug = (boolean_T) tmp23;
          cx06_MA_B.s12_PrwTrn_Crank = (real_T) tmp24;
          cx06_MA_B.s12_Eng_Trans_Emission_DTC_Stored = (real_T) tmp25;
          cx06_MA_B.s12_Eng_Torq_Tract_Control_Req_Failed = (real_T) tmp26;
          cx06_MA_B.s12_Eng_Torq_Trans_Req_Failed = (real_T) tmp27;
          cx06_MA_B.s12_Fuel_Inj_Roll_Cnt = ((real_T) tmp28) / ((real_T) 32768);
          cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed = (real_T) tmp29;
          cx06_MA_B.s12_Eng_Emissions_Malfunction = (real_T) tmp30;
          cx06_MA_B.s12_Cruise_Control_Enabled = (real_T) tmp31;
          cx06_MA_B.s12_Eng_Coast_Limit_Slip = (real_T) tmp32;
          cx06_MA_B.s12_Eng_Oil_Change_Now = (boolean_T) tmp33;
          cx06_MA_B.s12_Eng_Oil_Change_Soon = (boolean_T) tmp34;
          cx06_MA_B.s12_Eng_Coast_Fuel_Cut_Off_Active = (real_T) tmp35;
          cx06_MA_B.s12_Eng_Torq_Cruise_Control_Req_Failed = (real_T) tmp36;
          cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V = (real_T) tmp37;
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion12' */
      if (rtIsNaN(cx06_MA_B.s12_Brake_Ped_Switch_Active_V) || rtIsInf
          (cx06_MA_B.s12_Brake_Ped_Switch_Active_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Brake_Ped_Switch_Active_V), 256.0);
      }

      cx06_MA_B.s12_Brake_Ped_Switch_Active_V_n = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion4' */
      if (rtIsNaN(cx06_MA_B.s12_Throt_Pos_V) || rtIsInf
          (cx06_MA_B.s12_Throt_Pos_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Throt_Pos_V), 256.0);
      }

      cx06_MA_B.s12_Throt_Pos_V_d = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion14' */
      if (rtIsNaN(cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V) || rtIsInf
          (cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V), 256.0);
      }

      cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V_l = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion2' */
      if (rtIsNaN(cx06_MA_B.s12_Acel_Effect_Pos_V) || rtIsInf
          (cx06_MA_B.s12_Acel_Effect_Pos_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Acel_Effect_Pos_V), 256.0);
      }

      cx06_MA_B.s12_Acel_Effect_Pos_V_g = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion15' */
      if (rtIsNaN(cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V) || rtIsInf
          (cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V), 256.0);
      }

      cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V_h = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message5' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6632p0015;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6632p0015, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          uint8_T tmp6 = 0;
          uint8_T tmp7 = 0;
          uint8_T tmp8 = 0;
          uint8_T tmp9 = 0;
          uint8_T tmp10 = 0;
          uint8_T tmp11 = 0;
          uint8_T tmp12 = 0;
          uint8_T tmp13 = 0;
          uint8_T tmp14 = 0;
          uint8_T tmp15 = 0;
          uint8_T tmp16 = 0;
          uint8_T tmp17 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000006) >> 1)
            ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[5] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[5] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[5] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[5] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[6] & 0x00000006) >>
            1) ;
          ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[6] & 0x00000001)) ;
          ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[7])) ;
          cx06_MA_B.s12_Eng_Boost_Pres_V = (real_T) tmp0;
          cx06_MA_B.s12_Baro_Pres_Abs_V = (real_T) tmp1;
          cx06_MA_B.s12_PwrTrn_Hi_Elect_Load_Req = (real_T) tmp2;
          cx06_MA_B.s12_Aply_Brk_Pedal_Ind = (real_T) tmp3;
          cx06_MA_B.s12_Check_Fuel_Cap = (real_T) tmp4;
          cx06_MA_B.s12_Eng_Recommend_Shft = (real_T) tmp5;
          cx06_MA_B.s12_Eng_H20_In_Fuel = (real_T) tmp6;
          cx06_MA_B.s12_Eng_Boost_Pres = ((real_T) tmp7) / ((real_T) 2.55);
          cx06_MA_B.s12_Eng_Oil_Remaining_Life = ((real_T) tmp8) / ((real_T)
            2.55);
          cx06_MA_B.s12_Eng_Prod_Option_Ident = (real_T) tmp9;
          cx06_MA_B.s12_Eng_Fan_Spd = ((real_T) tmp10) / ((real_T) 2.55);
          cx06_MA_B.s12_Eng_Gear_Shift_Inh_Req = (real_T) tmp11;
          cx06_MA_B.s12_Eng_Jerk_Shift_Pattern_Req = (real_T) tmp12;
          cx06_MA_B.s12_Eng_Ntral_Control_Inh_Req = (real_T) tmp13;
          cx06_MA_B.s12_Reduce_Prf_Shft_Ptrn_Req = (real_T) tmp14;
          cx06_MA_B.s12_Throt_Progression = (real_T) tmp15;
          cx06_MA_B.s12_PwrTrn_Part_FilterWarning = (real_T) tmp16;
          cx06_MA_B.s12_Baro_Pres_Abs = ((real_T) tmp17) / ((real_T) 2);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion16' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Boost_Pres_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Boost_Pres_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Boost_Pres_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Boost_Pres_V_p = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)(
        -((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion6' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Torq_Actual_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Torq_Actual_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Torq_Actual_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Torq_Actual_V_b = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion17' */
      if (rtIsNaN(cx06_MA_B.s12_Baro_Pres_Abs_V) || rtIsInf
          (cx06_MA_B.s12_Baro_Pres_Abs_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Baro_Pres_Abs_V), 256.0);
      }

      cx06_MA_B.s12_Baro_Pres_Abs_V_j = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion5' */
      if (rtIsNaN(cx06_MA_B.s12_Acel_Actual_Pos_V) || rtIsInf
          (cx06_MA_B.s12_Acel_Actual_Pos_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Acel_Actual_Pos_V), 256.0);
      }

      cx06_MA_B.s12_Acel_Actual_Pos_V_e = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message6' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6633p0013;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6633p0013, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000006) >> 1)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[2])) ;
          cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V = (real_T) tmp0;
          cx06_MA_B.s12_AC_Comp_Clutch_Engaged = (real_T) tmp1;
          cx06_MA_B.s12_AC_Comp_Stroke_Req = (real_T) tmp2;
          cx06_MA_B.s12_AC_Off_Ind = (real_T) tmp3;
          cx06_MA_B.s12_AC_Ref_Hi_Side_Pres = ((real_T) tmp4) * ((real_T) 14);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion18' */
      if (rtIsNaN(cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V) || rtIsInf
          (cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V), 256.0);
      }

      cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V_p = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message7' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6634p0016;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6634p0016, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint16_T tmp5 = 0;
          uint16_T tmp6 = 0;
          uint16_T tmp7 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp6))[1] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp7))[1] = ((messageObj.u1DataArr[6])) ;
          cx06_MA_B.s12_Veh_Spd_V = (real_T) tmp0;
          cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V = (real_T) tmp1;
          cx06_MA_B.s12_Dist_Roll_Cnt_Lft_Reset = (real_T) tmp2;
          cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V = (real_T) tmp3;
          cx06_MA_B.s12_Dist_Roll_Cnt_Rht_Reset = (real_T) tmp4;
          cx06_MA_B.s12_Veh_Spd = ((real_T) tmp5) / ((real_T) 128);
          cx06_MA_B.s12_Dist_Roll_Cnt_Lft = ((real_T) tmp6) / ((real_T) 64);
          cx06_MA_B.s12_Dist_Roll_Cnt_Rht = ((real_T) tmp7) / ((real_T) 64);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion19' */
      if (rtIsNaN(cx06_MA_B.s12_Veh_Spd_V) || rtIsInf(cx06_MA_B.s12_Veh_Spd_V))
      {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Veh_Spd_V), 256.0);
      }

      cx06_MA_B.s12_Veh_Spd_V_l = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion20' */
      if (rtIsNaN(cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V) || rtIsInf
          (cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V), 256.0);
      }

      cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V_n = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion' */
      if (rtIsNaN(cx06_MA_B.s12_AC_Comp_Stroke_Req) || rtIsInf
          (cx06_MA_B.s12_AC_Comp_Stroke_Req)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_AC_Comp_Stroke_Req), 256.0);
      }

      cx06_MA_B.s12_AC_Comp_Stroke_Req_e = (uint8_T)(tmp < 0.0 ? (int32_T)
        (uint8_T)(int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion21' */
      if (rtIsNaN(cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V) || rtIsInf
          (cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V), 256.0);
      }

      cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V_n = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S12>/Read CAN Message8' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_6635p0016;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_6635p0016, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2])) ;
          cx06_MA_B.s12_Eng_Coolant_Temp_V = (real_T) tmp0;
          cx06_MA_B.s12_Eng_Intake_Air_Temp_V = (real_T) tmp1;
          cx06_MA_B.s12_Eng_Coolant_Temp = ((real_T) tmp2) + ((real_T) -40);
          cx06_MA_B.s12_Eng_Intake_Air_Temp = ((real_T) tmp3) + ((real_T) -40);
        }
      }

      /* DataTypeConversion: '<S12>/Data Type Conversion22' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Coolant_Temp_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Coolant_Temp_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Coolant_Temp_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Coolant_Temp_V_e = (int8_T)(tmp < 0.0 ? (int32_T)(int8_T)
        (-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion23' */
      if (rtIsNaN(cx06_MA_B.s12_Eng_Intake_Air_Temp_V) || rtIsInf
          (cx06_MA_B.s12_Eng_Intake_Air_Temp_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Eng_Intake_Air_Temp_V), 256.0);
      }

      cx06_MA_B.s12_Eng_Intake_Air_Temp_V_c = (int8_T)(tmp < 0.0 ? (int32_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)(uint8_T)tmp);

      /* DataTypeConversion: '<S12>/Data Type Conversion13' */
      if (rtIsNaN(cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V) || rtIsInf
          (cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V),
                   256.0);
      }

      cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V_l = (int8_T)(tmp < 0.0 ?
        (int32_T)(int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(int8_T)
        (uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S13>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_7066p002;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_7066p002,
          &messageObj);
        if ((cx06_MA_B.s13_AgeCount + 1) > cx06_MA_B.s13_AgeCount)
          cx06_MA_B.s13_AgeCount++;
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1] & 0x00000003)) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >> 4)
            ;
          cx06_MA_B.s13_AC_Clutch_Req = (real_T) tmp0;
          cx06_MA_B.s13_System_Power_Mode = (real_T) tmp1;
          cx06_MA_B.s13_RunCrank_Status = (real_T) tmp2;
          cx06_MA_B.s13_Acc_Status = (real_T) tmp3;
          cx06_MA_B.s13_Park_Brake = (real_T) tmp4;
          cx06_MA_B.s13_AgeCount = 0;
        }
      }

      /* RelationalOperator: '<S39>/Compare' incorporates:
       *  Constant: '<S39>/Constant'
       */
      rtb_Compare_p = (cx06_MA_B.s13_AgeCount > 10U);

      /* S-Function (motohawk_sfun_fault_def): '<S13>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: GMLAN380 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(15, rtb_Compare_p);
        UpdateFault(15);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S13>/Read CAN Message' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_7065p0012;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_7065p0012,
          &messageObj);
        if ((cx06_MA_B.s13_AgeCount_e + 1) > cx06_MA_B.s13_AgeCount_e)
          cx06_MA_B.s13_AgeCount_e++;
        if (msg_valid) {
          int16_T tmp0 = 0;
          uint8_T tmp1 = 0;
          int16_T tmp2 = 0;
          uint8_T tmp3 = 0;
          int16_T tmp4 = 0;
          uint8_T tmp5 = 0;
          int16_T tmp6 = 0;
          uint8_T tmp7 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x0000007F)) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;

          /* Sign Extend */
          if ((tmp0 & (1 << 14)) !=0 ) {
            tmp0 |= ~0x7FFF;
          }

          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2] & 0x0000007F)) ;
          ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[3])) ;

          /* Sign Extend */
          if ((tmp2 & (1 << 14)) !=0 ) {
            tmp2 |= ~0x7FFF;
          }

          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[4] & 0x0000007F)) ;
          ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[5])) ;

          /* Sign Extend */
          if ((tmp4 & (1 << 14)) !=0 ) {
            tmp4 |= ~0x7FFF;
          }

          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[4] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x0000007F)) ;
          ((uint8_T *)(&tmp6))[1] = ((messageObj.u1DataArr[7])) ;

          /* Sign Extend */
          if ((tmp6 & (1 << 14)) !=0 ) {
            tmp6 |= ~0x7FFF;
          }

          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7)
            ;
          cx06_MA_B.s13_FL_Wheel_Vel = ((real_T) tmp0) / ((real_T) 4);
          cx06_MA_B.s13_FL_Wheel_Valid = (real_T) tmp1;
          cx06_MA_B.s13_FR_Wheel_Vel = ((real_T) tmp2) / ((real_T) 4);
          cx06_MA_B.s13_FR_Wheel_Valid = (real_T) tmp3;
          cx06_MA_B.s13_RL_Wheel_Vel = ((real_T) tmp4) / ((real_T) 4);
          cx06_MA_B.s13_RL_Wheel_Valid = (real_T) tmp5;
          cx06_MA_B.s13_RR_Wheel_Vel = ((real_T) tmp6) / ((real_T) 4);
          cx06_MA_B.s13_RR_Wheel_Valid = (real_T) tmp7;
          cx06_MA_B.s13_AgeCount_e = 0;
        }
      }

      /* RelationalOperator: '<S40>/Compare' incorporates:
       *  Constant: '<S40>/Constant'
       */
      rtb_Compare_lc = (cx06_MA_B.s13_AgeCount_e > 20U);

      /* S-Function (motohawk_sfun_fault_def): '<S13>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: GMLAN280 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(14, rtb_Compare_lc);
        UpdateFault(14);
      }

      /* Switch: '<S41>/Switch' incorporates:
       *  UnitDelay: '<S41>/Unit Delay'
       */
      if (cx06_MA_B.s13_FL_Wheel_Valid != 0.0) {
        cx06_MA_B.s41_Switch = cx06_MA_DWork.s41_UnitDelay_DSTATE;
      } else {
        cx06_MA_B.s41_Switch = cx06_MA_B.s13_FL_Wheel_Vel;
      }

      /* Switch: '<S42>/Switch' incorporates:
       *  UnitDelay: '<S42>/Unit Delay'
       */
      if (cx06_MA_B.s13_FR_Wheel_Valid != 0.0) {
        cx06_MA_B.s42_Switch = cx06_MA_DWork.s42_UnitDelay_DSTATE;
      } else {
        cx06_MA_B.s42_Switch = cx06_MA_B.s13_FR_Wheel_Vel;
      }

      /* Switch: '<S43>/Switch' incorporates:
       *  UnitDelay: '<S43>/Unit Delay'
       */
      if (cx06_MA_B.s13_RL_Wheel_Valid != 0.0) {
        cx06_MA_B.s43_Switch = cx06_MA_DWork.s43_UnitDelay_DSTATE;
      } else {
        cx06_MA_B.s43_Switch = cx06_MA_B.s13_RL_Wheel_Vel;
      }

      /* Switch: '<S44>/Switch' incorporates:
       *  UnitDelay: '<S44>/Unit Delay'
       */
      if (cx06_MA_B.s13_RR_Wheel_Valid != 0.0) {
        cx06_MA_B.s44_Switch = cx06_MA_DWork.s44_UnitDelay_DSTATE;
      } else {
        cx06_MA_B.s44_Switch = cx06_MA_B.s13_RR_Wheel_Vel;
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S14>/Read CAN Message' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_9757p0005;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_9757p0005, 2, &queue_tail, &messageObj);
        if ((cx06_MA_B.s14_AgeCount + 1) > cx06_MA_B.s14_AgeCount)
          cx06_MA_B.s14_AgeCount++;
        if (msg_valid) {
          int16_T tmp0 = 0;
          int16_T tmp1 = 0;
          uint16_T tmp2 = 0;
          int16_T tmp3 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x0000001F)) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;

          /* Sign Extend */
          if ((tmp0 & (1 << 12)) !=0 ) {
            tmp0 |= ~0x1FFF;
          }

          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000003)) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;

          /* Sign Extend */
          if ((tmp1 & (1 << 9)) !=0 ) {
            tmp1 |= ~0x3FF;
          }

          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4] & 0x00000001)) ;
          ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6] & 0x0000007F)) ;
          ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[7])) ;

          /* Sign Extend */
          if ((tmp3 & (1 << 14)) !=0 ) {
            tmp3 |= ~0x7FFF;
          }

          cx06_MA_B.s14_TorqueDelivered = ((real_T) tmp0) / ((real_T) 10);
          cx06_MA_B.s14_DCCurrent = (real_T) tmp1;
          cx06_MA_B.s14_DCVoltage = (real_T) tmp2;
          cx06_MA_B.s14_MotorSpeed = (real_T) tmp3;
          cx06_MA_B.s14_AgeCount = 0;
        }
      }

      /* RelationalOperator: '<S45>/Compare' incorporates:
       *  Constant: '<S45>/Constant'
       */
      rtb_Compare_g = (cx06_MA_B.s14_AgeCount > 4U);

      /* S-Function (motohawk_sfun_fault_def): '<S14>/motohawk_fault_def' */

      /* Set Fault Suspected Status: IPT258 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(16, rtb_Compare_g);
        UpdateFault(16);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S14>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_9758p0005;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_9758p0005, 2, &queue_tail, &messageObj);
        if ((cx06_MA_B.s14_AgeCount_c + 1) > cx06_MA_B.s14_AgeCount_c)
          cx06_MA_B.s14_AgeCount_c++;
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          uint8_T tmp6 = 0;
          uint8_T tmp7 = 0;
          uint8_T tmp8 = 0;
          uint8_T tmp9 = 0;
          uint8_T tmp10 = 0;
          uint8_T tmp11 = 0;
          uint8_T tmp12 = 0;
          uint8_T tmp13 = 0;
          uint8_T tmp14 = 0;
          uint8_T tmp15 = 0;
          uint8_T tmp16 = 0;
          uint8_T tmp17 = 0;
          uint8_T tmp18 = 0;
          uint8_T tmp19 = 0;
          uint8_T tmp20 = 0;
          uint8_T tmp21 = 0;
          uint16_T tmp22 = 0;
          uint8_T tmp23 = 0;
          uint8_T tmp24 = 0;
          uint8_T tmp25 = 0;
          uint8_T tmp26 = 0;
          uint8_T tmp27 = 0;
          uint8_T tmp28 = 0;
          uint8_T tmp29 = 0;
          uint8_T tmp30 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1)
            ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7)
            ;
          ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
          ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[1] & 0x00000002) >> 1)
            ;
          ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[1] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[1] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[1] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[1] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[2] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
          ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[3] & 0x00000003)) ;
          ((uint8_T *)(&tmp22))[1] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp23))[0] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp24))[0] = ((messageObj.u1DataArr[6] & 0x00000001)) ;
          ((uint8_T *)(&tmp25))[0] = ((messageObj.u1DataArr[6] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp26))[0] = ((messageObj.u1DataArr[6] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp27))[0] = ((messageObj.u1DataArr[6] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp28))[0] = ((messageObj.u1DataArr[6] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp29))[0] = ((messageObj.u1DataArr[7] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp30))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >>
            6) ;
          cx06_MA_B.s14_MCUReady = (boolean_T) tmp0;
          cx06_MA_B.s14_DeratedOperation = (real_T) tmp1;
          cx06_MA_B.s14_EDriveSystemError = (real_T) tmp2;
          cx06_MA_B.s14_EmergencyShutdown = (real_T) tmp3;
          cx06_MA_B.s14_OverCurrentIGBTError = (real_T) tmp4;
          cx06_MA_B.s14_LubeAnalError = (real_T) tmp5;
          cx06_MA_B.s14_EncoderError = (real_T) tmp6;
          cx06_MA_B.s14_OverVoltageError = (real_T) tmp7;
          cx06_MA_B.s14_UnderVoltageError = (real_T) tmp8;
          cx06_MA_B.s14_OverCurrentACError = (real_T) tmp9;
          cx06_MA_B.s14_MotorOverTemp = (real_T) tmp10;
          cx06_MA_B.s14_InverterOverTemp = (real_T) tmp11;
          cx06_MA_B.s14_OverSpeedError = (real_T) tmp12;
          cx06_MA_B.s14_CANError = (real_T) tmp13;
          cx06_MA_B.s14_UnreasonableLimits = (real_T) tmp14;
          cx06_MA_B.s14_EPOLineError = (real_T) tmp15;
          cx06_MA_B.s14_SensorOutOfRange = (real_T) tmp16;
          cx06_MA_B.s14_VoltageLimitationactive = (real_T) tmp17;
          cx06_MA_B.s14_CurrentLimitiationactive = (real_T) tmp18;
          cx06_MA_B.s14_PullOutTorqueProtectionactive = (real_T) tmp19;
          cx06_MA_B.s14_PeakLevelOverflow = (real_T) tmp20;
          cx06_MA_B.s14_Paritybitphasecurrent = (real_T) tmp21;
          cx06_MA_B.s14_PhaseCurrentPeakValue = (real_T) tmp22;
          cx06_MA_B.s14_MaxTorqueavailable = (real_T) tmp23;
          cx06_MA_B.s14_MCUReadytoGo = (real_T) tmp24;
          cx06_MA_B.s14_MCUHardwareSoftwareError = (real_T) tmp25;
          cx06_MA_B.s14_MCUSpeedErrorTrackMissing = (real_T) tmp26;
          cx06_MA_B.s14_MCUSpeedErrorSpeedJump = (real_T) tmp27;
          cx06_MA_B.s14_ErrorinErrorStore = (real_T) tmp28;
          cx06_MA_B.s14_SupplyLineLowError = (real_T) tmp29;
          cx06_MA_B.s14_MCUOn = (real_T) tmp30;
          cx06_MA_B.s14_AgeCount_c = 0;
        }
      }

      /* RelationalOperator: '<S46>/Compare' incorporates:
       *  Constant: '<S46>/Constant'
       */
      rtb_Compare_o = (cx06_MA_B.s14_AgeCount_c > 20U);

      /* S-Function (motohawk_sfun_fault_def): '<S14>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: IPT278 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(17, rtb_Compare_o);
        UpdateFault(17);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S14>/Read CAN Message2' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_9759p0005;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9759p0005,
          &messageObj);
        if ((cx06_MA_B.s14_AgeCount_n + 1) > cx06_MA_B.s14_AgeCount_n)
          cx06_MA_B.s14_AgeCount_n++;
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint16_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x000000FC) >> 2)
            ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2] & 0x000000F8) >> 3)
            ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3] & 0x000000E0) >> 5)
            | ((messageObj.u1DataArr[2] & 0x00000007) << 3) ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[7])) ;
          cx06_MA_B.s14_Sw_Ver = (real_T) tmp0;
          cx06_MA_B.s14_IPT_Ser_Num = (real_T) tmp1;
          cx06_MA_B.s14_Gear_Ratio = (((real_T) tmp2) / ((real_T) 10)) +
            ((real_T) 8);
          cx06_MA_B.s14_Oil_Pressure = ((real_T) tmp3) / ((real_T) 10);
          cx06_MA_B.s14_Motor_Temp = ((real_T) tmp4) + ((real_T) -40);
          cx06_MA_B.s14_MCU_Temp = ((real_T) tmp5) + ((real_T) -40);
          cx06_MA_B.s14_AgeCount_n = 0;
        }
      }

      /* RelationalOperator: '<S47>/Compare' incorporates:
       *  Constant: '<S47>/Constant'
       */
      rtb_Compare_i = (cx06_MA_B.s14_AgeCount_n > 90U);

      /* S-Function (motohawk_sfun_fault_def): '<S14>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IPT638 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(19, rtb_Compare_i);
        UpdateFault(19);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S14>/Read CAN Message3' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_9760p0005;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_9760p0005,
          &messageObj);
        if ((cx06_MA_B.s14_AgeCount_b + 1) > cx06_MA_B.s14_AgeCount_b)
          cx06_MA_B.s14_AgeCount_b++;
        if (msg_valid) {
          int16_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          uint8_T tmp3 = 0;
          uint8_T tmp4 = 0;
          uint8_T tmp5 = 0;
          uint8_T tmp6 = 0;
          uint8_T tmp7 = 0;
          uint8_T tmp8 = 0;
          uint8_T tmp9 = 0;
          uint8_T tmp10 = 0;
          uint8_T tmp11 = 0;
          uint8_T tmp12 = 0;
          uint8_T tmp13 = 0;
          uint8_T tmp14 = 0;
          uint8_T tmp15 = 0;
          uint8_T tmp16 = 0;
          uint8_T tmp17 = 0;
          uint8_T tmp18 = 0;
          uint8_T tmp19 = 0;
          uint8_T tmp20 = 0;
          uint8_T tmp21 = 0;
          uint8_T tmp22 = 0;
          uint8_T tmp23 = 0;
          uint8_T tmp24 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4] & 0x00000001)) ;
          ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[4] & 0x00000002) >> 1)
            ;
          ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[4] & 0x00000004) >> 2)
            ;
          ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[4] & 0x00000008) >> 3)
            ;
          ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[4] & 0x00000010) >> 4)
            ;
          ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[4] & 0x00000020) >> 5)
            ;
          ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[4] & 0x00000040) >> 6)
            ;
          ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[4] & 0x00000080) >>
            7) ;
          ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[5] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[5] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[5] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[5] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[5] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[5] & 0x00000040) >>
            6) ;
          ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[5] & 0x00000001)) ;
          ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[6] & 0x00000001)) ;
          ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[6] & 0x00000002) >>
            1) ;
          ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[6] & 0x00000004) >>
            2) ;
          ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[6] & 0x00000008) >>
            3) ;
          ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[6] & 0x00000010) >>
            4) ;
          ((uint8_T *)(&tmp23))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >>
            5) ;
          ((uint8_T *)(&tmp24))[0] = ((messageObj.u1DataArr[6] & 0x00000040) >>
            6) ;
          cx06_MA_B.s14_LV_Current = (real_T) tmp0;
          cx06_MA_B.s14_LV_Voltage = ((real_T) tmp1) / ((real_T) 10);
          cx06_MA_B.s14_HV_DCDC_Current = (((real_T) tmp2) / ((real_T) 10)) +
            ((real_T) -15);
          cx06_MA_B.s14_DCDC_GenError = (real_T) tmp3;
          cx06_MA_B.s14_DCDC_HV_Over_I = (real_T) tmp4;
          cx06_MA_B.s14_DCDC_HV_Over_V = (real_T) tmp5;
          cx06_MA_B.s14_DCDC_LV_Over_I_Buck = (real_T) tmp6;
          cx06_MA_B.s14_DCDC_LV_Under_V = (real_T) tmp7;
          cx06_MA_B.s14_DCDC_LV_Over_V = (real_T) tmp8;
          cx06_MA_B.s14_DCDC_LV_Over_I_Boost = (real_T) tmp9;
          cx06_MA_B.s14_DCDC_Temp_Reduction = (real_T) tmp10;
          cx06_MA_B.s14_DCDC_Buck = (real_T) tmp11;
          cx06_MA_B.s14_DCDC_Boost = (real_T) tmp12;
          cx06_MA_B.s14_DCDC_Reduce_Buck = (real_T) tmp13;
          cx06_MA_B.s14_DCDC_Reduce_Boost = (real_T) tmp14;
          cx06_MA_B.s14_DCDC_CAN_Err = (real_T) tmp15;
          cx06_MA_B.s14_DCDC_Meas_Err = (real_T) tmp16;
          cx06_MA_B.s14_DCDC_OverTemp = (real_T) tmp17;
          cx06_MA_B.s14_DCDC_90I2t = (real_T) tmp18;
          cx06_MA_B.s14_DCDC_Break = (real_T) tmp19;
          cx06_MA_B.s14_DCDC_3x_En = (real_T) tmp20;
          cx06_MA_B.s14_DCDC_0C = (real_T) tmp21;
          cx06_MA_B.s14_DCDC_HV_Under_V = (real_T) tmp22;
          cx06_MA_B.s14_DCDC_HW_Err = (real_T) tmp23;
          cx06_MA_B.s14_DCDC_Err_in_Store = (real_T) tmp24;
          cx06_MA_B.s14_AgeCount_b = 0;
        }
      }

      /* RelationalOperator: '<S48>/Compare' incorporates:
       *  Constant: '<S48>/Constant'
       */
      rtb_Compare_f = (cx06_MA_B.s14_AgeCount_b > 300U);

      /* S-Function (motohawk_sfun_fault_def): '<S14>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IPT620 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, rtb_Compare_f);
        UpdateFault(18);
      }

      /* Product: '<S49>/Divide' incorporates:
       *  Constant: '<S49>/Constant'
       *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration'
       */
      cx06_MA_B.s49_Divide = cx06_MA_B.s14_MotorSpeed * 2.9749930431721525E-003 *
        (Tire_Size_DataStore()) / cx06_MA_B.s14_Gear_Ratio;

      /* S-Function (motohawk_sfun_read_canmsg): '<S15>/Read CAN Message' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10248p0009;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10248p0009, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          uint16_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[1])) ;
          cx06_MA_B.s15_Voltage = ((real_T) tmp0) + ((real_T) 180);
          cx06_MA_B.s15_Current = (((real_T) tmp1) / ((real_T) 10)) + ((real_T)
            -150);
        }
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S15>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        static uint32_T queue_tail = 0;
        extern struct {
          uint32_T head;
          S_CANMessage messages[2];
        } MHCAN_queue_RxSlot_10249p0007;

        extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
          uint32_T *tail, S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_dequeue((MHCAN_queue *)
          &MHCAN_queue_RxSlot_10249p0007, 2, &queue_tail, &messageObj);
        if (msg_valid) {
          uint8_T tmp0 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[4])) ;
          cx06_MA_B.s15_Batt_Temp = (((real_T) tmp0) / ((real_T) 2)) + ((real_T)
            -40);
        }
      }

      /* Embedded MATLAB: '<S15>/SOC' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration2'
       *  UnitDelay: '<S15>/Unit Delay'
       */
      /* Embedded MATLAB Function 'Inputs/JCI CAN Input/SOC': '<S50>:1' */
      if ((cx06_MA_B.s15_Current <= (cuurentPlusMinus_DataStore())) &&
          (cx06_MA_B.s15_Current >= -(cuurentPlusMinus_DataStore()))) {
        /* '<S50>:1:3' */
        /* '<S50>:1:4' */
        cx06_MA_B.s50_SOC = (cx06_MA_B.s15_Voltage - (lowV_DataStore())) /
          ((highV_DataStore()) - (lowV_DataStore())) * 100.0;
      } else if (cx06_MA_B.s15_Voltage >= 390.0) {
        /* '<S50>:1:5' */
        /* '<S50>:1:6' */
        cx06_MA_B.s50_SOC = 100.0;
      } else {
        /* '<S50>:1:8' */
        cx06_MA_B.s50_SOC = cx06_MA_DWork.s15_UnitDelay_DSTATE;
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10416p0017;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10416p0017, &messageObj);
        if ((cx06_MA_B.s16_AgeCount + 1) > cx06_MA_B.s16_AgeCount)
          cx06_MA_B.s16_AgeCount++;
        if (msg_valid) {
          int16_T tmp0 = 0;
          int16_T tmp1 = 0;
          int16_T tmp2 = 0;
          int16_T tmp3 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[7])) ;
          cx06_MA_B.s16_Temp_1 = (((real_T) tmp0) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_2 = (((real_T) tmp1) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_3 = (((real_T) tmp2) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_4 = (((real_T) tmp3) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_AgeCount = 0;
        }
      }

      /* RelationalOperator: '<S51>/Compare' incorporates:
       *  Constant: '<S51>/Constant'
       */
      rtb_Compare_k = (cx06_MA_B.s16_AgeCount > 200U);

      /* S-Function (motohawk_sfun_fault_def): '<S16>/motohawk_fault_def' */

      /* Set Fault Suspected Status: Temp1A4 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(23, rtb_Compare_k);
        UpdateFault(23);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message1' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10417p0017;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10417p0017, &messageObj);
        if ((cx06_MA_B.s16_AgeCount_a + 1) > cx06_MA_B.s16_AgeCount_a)
          cx06_MA_B.s16_AgeCount_a++;
        if (msg_valid) {
          int16_T tmp0 = 0;
          int16_T tmp1 = 0;
          int16_T tmp2 = 0;
          int16_T tmp3 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
          ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[7])) ;
          cx06_MA_B.s16_Temp_5 = (((real_T) tmp0) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_6 = (((real_T) tmp1) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_7 = (((real_T) tmp2) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_Temp_8 = (((real_T) tmp3) / ((real_T) 45.8287)) +
            ((real_T) 655.011);
          cx06_MA_B.s16_AgeCount_a = 0;
        }
      }

      /* RelationalOperator: '<S52>/Compare' incorporates:
       *  Constant: '<S52>/Constant'
       */
      rtb_Compare_b = (cx06_MA_B.s16_AgeCount_a > 100U);

      /* S-Function (motohawk_sfun_fault_def): '<S16>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: Temp1A5 */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(24, rtb_Compare_b);
        UpdateFault(24);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message3' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10419p0012;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10419p0012, &messageObj);
        if ((cx06_MA_B.s16_ReadCANMessage3_o1 + 1) >
            cx06_MA_B.s16_ReadCANMessage3_o1)
          cx06_MA_B.s16_ReadCANMessage3_o1++;
        if (msg_valid) {
          real32_T tmp0 = 0;
          real32_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp0))[2] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[3] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[7])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp1))[2] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp1))[3] = ((messageObj.u1DataArr[4])) ;
          cx06_MA_B.s16_NOxPre_NOx = (uint16_T) tmp0;
          cx06_MA_B.s16_NOxPre_O2 = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage3_o1 = 0;
        }
      }

      /* RelationalOperator: '<S53>/Compare' incorporates:
       *  Constant: '<S53>/Constant'
       */
      rtb_Compare_a = (cx06_MA_B.s16_ReadCANMessage3_o1 > 100U);

      /* S-Function (motohawk_sfun_fault_def): '<S16>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: NOxPre_CAN */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(22, rtb_Compare_a);
        UpdateFault(22);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message5' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10421p0018;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10421p0018, &messageObj);
        if ((cx06_MA_B.s16_ReadCANMessage5_o1 + 1) >
            cx06_MA_B.s16_ReadCANMessage5_o1)
          cx06_MA_B.s16_ReadCANMessage5_o1++;
        if (msg_valid) {
          real32_T tmp0 = 0;
          real32_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp0))[2] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[3] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[7])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp1))[2] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp1))[3] = ((messageObj.u1DataArr[4])) ;
          cx06_MA_B.s16_NOxMid_NOx = (real_T) tmp0;
          cx06_MA_B.s16_NOxMid_O2 = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage5_o1 = 0;
        }
      }

      /* RelationalOperator: '<S54>/Compare' incorporates:
       *  Constant: '<S54>/Constant'
       */
      rtb_Compare_h = (cx06_MA_B.s16_ReadCANMessage5_o1 > 100U);

      /* S-Function (motohawk_sfun_fault_def): '<S16>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: NOxMid_CAN */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(20, rtb_Compare_h);
        UpdateFault(20);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message7' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10423p0016;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10423p0016, &messageObj);
        if ((cx06_MA_B.s16_ReadCANMessage7_o1 + 1) >
            cx06_MA_B.s16_ReadCANMessage7_o1)
          cx06_MA_B.s16_ReadCANMessage7_o1++;
        if (msg_valid) {
          real32_T tmp0 = 0;
          real32_T tmp1 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[3])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp0))[2] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[3] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[7])) ;
          ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[6])) ;
          ((uint8_T *)(&tmp1))[2] = ((messageObj.u1DataArr[5])) ;
          ((uint8_T *)(&tmp1))[3] = ((messageObj.u1DataArr[4])) ;
          cx06_MA_B.s16_NOxPost_NOx = (real_T) tmp0;
          cx06_MA_B.s16_NOxPost_O2 = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage7_o1 = 0;
        }
      }

      /* RelationalOperator: '<S55>/Compare' incorporates:
       *  Constant: '<S55>/Constant'
       */
      rtb_Compare_gf = (cx06_MA_B.s16_ReadCANMessage7_o1 > 100U);

      /* S-Function (motohawk_sfun_fault_def): '<S16>/motohawk_fault_def4' */

      /* Set Fault Suspected Status: NOxPost_CAN */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(21, rtb_Compare_gf);
        UpdateFault(21);
      }

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message2' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10418p0017;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10418p0017, &messageObj);
        if (msg_valid) {
          uint16_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
          cx06_MA_B.s16_NOxPre_CANOpen_Er_Code = (real_T) tmp0;
          cx06_MA_B.s16_NOxPre_CANOpen_Er_Reg = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage2_o3 = (real_T) tmp2;
        }
      }

      /* DataTypeConversion: '<S16>/Data Type Conversion1' */
      if (rtIsNaN(cx06_MA_B.s16_ReadCANMessage2_o3) || rtIsInf
          (cx06_MA_B.s16_ReadCANMessage2_o3)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s16_ReadCANMessage2_o3), 256.0);
      }

      cx06_MA_B.s16_NOxPre_ECM_Er_Code = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message4' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10420p0016;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10420p0016, &messageObj);
        if (msg_valid) {
          uint16_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
          cx06_MA_B.s16_NOxMid_CANOpen_Er_Code = (real_T) tmp0;
          cx06_MA_B.s16_NOxMid_CANOpen_Er_Reg = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage4_o3 = (real_T) tmp2;
        }
      }

      /* DataTypeConversion: '<S16>/Data Type Conversion' */
      if (rtIsNaN(cx06_MA_B.s16_ReadCANMessage4_o3) || rtIsInf
          (cx06_MA_B.s16_ReadCANMessage4_o3)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s16_ReadCANMessage4_o3), 256.0);
      }

      cx06_MA_B.s16_NoxMid_ECM_Er_Code = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
        (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(uint8_T)tmp);

      /* S-Function (motohawk_sfun_read_canmsg): '<S16>/Read CAN Message6' */
      /* MotoHawk Read CAN Message */
      {
        S_CANMessage messageObj;
        extern MHCAN_directslot MHCAN_directslot_RxSlot_10422p0018;
        extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot,
          S_CANMessage *messageObj);
        boolean_T msg_valid = MHCAN_getdirect
          (&MHCAN_directslot_RxSlot_10422p0018, &messageObj);
        if (msg_valid) {
          uint16_T tmp0 = 0;
          uint8_T tmp1 = 0;
          uint8_T tmp2 = 0;
          ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
          ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[0])) ;
          ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
          ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
          cx06_MA_B.s16_NOxPost_CANOpen_Er_Code = (real_T) tmp0;
          cx06_MA_B.s16_NOxPost_CANOpen_Er_Reg = (real_T) tmp1;
          cx06_MA_B.s16_ReadCANMessage6_o3 = (real_T) tmp2;
        }
      }

      /* DataTypeConversion: '<S16>/Data Type Conversion2' */
      if (rtIsNaN(cx06_MA_B.s16_ReadCANMessage6_o3) || rtIsInf
          (cx06_MA_B.s16_ReadCANMessage6_o3)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(cx06_MA_B.s16_ReadCANMessage6_o3), 256.0);
      }

      cx06_MA_B.s16_NoxPost_ECM_Er_Code = (uint8_T)(tmp < 0.0 ? (int32_T)
        (uint8_T)(int8_T)(-((int8_T)(uint8_T)(-tmp))) : (int32_T)(uint8_T)tmp);

      /* Weighted Moving Average Block: '<S21>/Weighted Moving Average'
       */
      {
        int32_T iObj;

        /*
         * shift all the discrete states on time delay
         *  being careful not to overwrite a value before it
         *  has been moved.
         */
        for (iObj = (23); iObj > 0; iObj-- ) {
          cx06_MA_DWork.s21_WeightedMovingAverage_TapDelayU[iObj] =
            cx06_MA_DWork.s21_WeightedMovingAverage_TapDelayU[iObj-1];
        }

        /*
         * the top state is the current input
         */
        cx06_MA_DWork.s21_WeightedMovingAverage_TapDelayU[0] =
          cx06_MA_B.s21_motohawk_frequency_in;
      }

      /* Update for UnitDelay: '<S41>/Unit Delay' */
      cx06_MA_DWork.s41_UnitDelay_DSTATE = cx06_MA_B.s41_Switch;

      /* Update for UnitDelay: '<S42>/Unit Delay' */
      cx06_MA_DWork.s42_UnitDelay_DSTATE = cx06_MA_B.s42_Switch;

      /* Update for UnitDelay: '<S43>/Unit Delay' */
      cx06_MA_DWork.s43_UnitDelay_DSTATE = cx06_MA_B.s43_Switch;

      /* Update for UnitDelay: '<S44>/Unit Delay' */
      cx06_MA_DWork.s44_UnitDelay_DSTATE = cx06_MA_B.s44_Switch;

      /* Update for UnitDelay: '<S15>/Unit Delay' */
      cx06_MA_DWork.s15_UnitDelay_DSTATE = cx06_MA_B.s50_SOC;
    }
  }
}
