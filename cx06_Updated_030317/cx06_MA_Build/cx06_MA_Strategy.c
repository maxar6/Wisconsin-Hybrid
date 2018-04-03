/*
 * File: cx06_MA_Strategy.c
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA_Strategy.h"

/* Include model header file for global data */
#include "cx06_MA.h"
#include "cx06_MA_private.h"

/* Named constants for Stateflow: '<S363>/A//C StateMachine' */
#define cx06_MA_IN_Off                 (1U)
#define cx06_MA_IN_On                  (2U)

/* Named constants for Stateflow: '<S373>/Engine_Running' */
#define cx06_MA_IN_OFF                 (1U)
#define cx06_MA_IN_ON                  (2U)

/* Named constants for Stateflow: '<S377>/Engine_Running' */
#define cx06_MA_IN_NotRunning          (1U)
#define cx06_MA_IN_Running             (2U)

/* Named constants for Stateflow: '<S399>/EngineSS_StateMachine1' */
#define cx06_MA_IN_FalseStart          (1U)
#define cx06_MA_IN_Idle                (2U)
#define cx06_MA_IN_Kill                (3U)
#define cx06_MA_IN_KillDelay           (4U)
#define cx06_MA_IN_Start               (5U)
#define cx06_MA_IN_StartDelay          (6U)
#define cx06_MA_IN_StartRetry          (7U)

/* Named constants for Stateflow: '<S400>/EngineSS_StateMachine' */
#define cx06_MA_IN_Idle_m              (1U)
#define cx06_MA_IN_KillDelay_m         (3U)
#define cx06_MA_IN_Kill_m              (2U)
#define cx06_MA_IN_StartDelay_m        (5U)
#define cx06_MA_IN_StartRetry_m        (6U)
#define cx06_MA_IN_Start_m             (4U)

/* Named constants for Stateflow: '<S417>/Chart' */
#define cx06_MA_IN_Error               (1U)
#define cx06_MA_IN_Lean                (2U)
#define cx06_MA_IN_Lean2Rich           (3U)
#define cx06_MA_IN_Neutral             (4U)
#define cx06_MA_IN_Rich                (5U)
#define cx06_MA_IN_Rich2Lean           (6U)

/* Initial conditions for function-call system: '<Root>/Strategy' */
void cx06_MA_Strategy_Init(void)
{
  /* InitializeConditions for Stateflow: '<S363>/A//C StateMachine' */
  cx06_MA_DWork.s367_is_active_c15_cx06_MA = 0U;
  cx06_MA_DWork.s367_is_c15_cx06_MA = 0U;
  cx06_MA_B.s367_activate = FALSE;

  /* InitializeConditions for Stateflow: '<S373>/Engine_Running' */
  cx06_MA_DWork.s389_is_active_c21_cx06_MA = 0U;
  cx06_MA_DWork.s389_is_c21_cx06_MA = 0U;

  /* InitializeConditions for Stateflow: '<S388>/Sustain Brake original' */
  cx06_MA_DWork.s413_is_active_c5_cx06_MA = 0U;
  cx06_MA_DWork.s413_is_c5_cx06_MA = 0U;
  cx06_MA_B.s413_level = 0.0;
  cx06_MA_B.s413_SB = 0U;

  /* InitializeConditions for UnitDelay: '<S380>/Unit Delay2' */
  cx06_MA_DWork.s380_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for Stateflow: '<S374>/Chart' */
  cx06_MA_DWork.s390_is_active_c11_cx06_MA = 0U;
  cx06_MA_DWork.s390_is_c11_cx06_MA = 0U;
  cx06_MA_B.s390_active = 0U;

  /* InitializeConditions for UnitDelay: '<S384>/Unit Delay2' */
  cx06_MA_DWork.s384_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S384>/Unit Delay1' */
  cx06_MA_DWork.s384_UnitDelay1_DSTATE = 1.0;

  /* InitializeConditions for Stateflow: '<S377>/Engine_Running' */
  cx06_MA_DWork.s398_is_active_c17_cx06_MA = 0U;
  cx06_MA_DWork.s398_is_c17_cx06_MA = 0U;
  cx06_MA_B.s398_running = 0U;

  /* InitializeConditions for Stateflow: '<S400>/EngineSS_StateMachine' */
  cx06_MA_DWork.s402_is_active_c18_cx06_MA = 0U;
  cx06_MA_DWork.s402_is_c18_cx06_MA = 0U;
  cx06_MA_B.s402_KillDelay_Cnt = 0.0;
  cx06_MA_B.s402_Kill_Cnt = 0.0;
  cx06_MA_B.s402_StartDelay_Cnt = 0.0;
  cx06_MA_B.s402_StartRetryDelay_Cnt = 0.0;
  cx06_MA_B.s402_StartRetry_Cnt = 0.0;
  cx06_MA_B.s402_Start_Cnt = 0.0;
  cx06_MA_B.s402_kill = 0.0;
  cx06_MA_B.s402_start = 0.0;
  cx06_MA_B.s402_ESS_State = 0U;

  /* InitializeConditions for Stateflow: '<S399>/EngineSS_StateMachine1' */
  cx06_MA_DWork.s401_is_active_c20_cx06_MA = 0U;
  cx06_MA_DWork.s401_is_c20_cx06_MA = 0U;
  cx06_MA_B.s401_KillDelay_Cnt = 0.0;
  cx06_MA_B.s401_Kill_Cnt = 0.0;
  cx06_MA_B.s401_StartDelay_Cnt = 0.0;
  cx06_MA_B.s401_StartRetryDelay_Cnt = 0.0;
  cx06_MA_B.s401_StartRetry_Cnt = 0.0;
  cx06_MA_B.s401_Start_Cnt = 0.0;
  cx06_MA_B.s401_kill = 0.0;
  cx06_MA_B.s401_start = 0.0;
  cx06_MA_B.s401_ESS_State = 0U;

  /* InitializeConditions for Stateflow: '<S417>/Chart' */
  cx06_MA_DWork.s420_is_active_c13_cx06_MA = 0U;
  cx06_MA_DWork.s420_is_c13_cx06_MA = 0U;
  cx06_MA_B.s420_Ammonia = 0U;
  cx06_MA_B.s420_LeanCnt = 0U;
  cx06_MA_B.s420_RichCnt = 0U;
  cx06_MA_B.s420_mult = 0.0;
  cx06_MA_B.s420_State = 0U;

  /* InitializeConditions for UnitDelay: '<S416>/Unit Delay' */
  cx06_MA_DWork.s416_UnitDelay_DSTATE = 1.0;
}

/* Output and update for function-call system: '<Root>/Strategy' */
void cx06_MA_Strategy(void)
{
  /* local block i/o variables */
  real_T rtb_motohawk_interpolation_1d;
  real_T rtb_motohawk_interpolation_1d1;
  real_T rtb_motohawk_interpolation_1d_i;
  real_T rtb_MinMax_j;
  real_T rtb_Switch_k;
  index_T rtb_motohawk_prelookup_k;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup_a;
  index_T rtb_motohawk_prelookup_g;
  index_T rtb_motohawk_prelookup_m;
  uint8_T rtb_RelationalOperator1_kg;
  boolean_T rtb_motohawk_fault_action2;
  real_T rtb_Gain_k;
  real_T rtb_Abs_i[6];
  int8_T rtb_Compare_df[6];
  boolean_T rtb_LogicalOperator4;
  int8_T rtb_Switch_c;
  uint8_T rtb_RelationalOperator1_o;
  uint8_T rtb_RelationalOperator2;
  uint8_T rtb_RelationalOperator3;
  boolean_T rtb_RelationalOperator_f;
  boolean_T rtb_RelationalOperator2_k;
  real_T rtb_nState;
  real_T rtb_Saturation1;
  real_T min;
  real_T rtb_Abs4;
  real_T rtb_Abs3_a;
  int32_T i;

  /* RelationalOperator: '<S363>/Relational Operator' incorporates:
   *  Constant: '<S363>/Constant'
   */
  cx06_MA_B.s363_RelationalOperator = (1.0 == cx06_MA_B.s13_AC_Clutch_Req);

  /* Stateflow: '<S363>/A//C StateMachine' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration3'
   */
  /* Gateway: Strategy/A/C Control Code/A/C StateMachine */
  /* During: Strategy/A/C Control Code/A/C StateMachine */
  if (cx06_MA_DWork.s367_is_active_c15_cx06_MA == 0) {
    /* Entry: Strategy/A/C Control Code/A/C StateMachine */
    cx06_MA_DWork.s367_is_active_c15_cx06_MA = 1U;

    /* Transition: '<S367>:5' */
    /* Entry 'Off': '<S367>:1' */
    cx06_MA_DWork.s367_is_c15_cx06_MA = cx06_MA_IN_Off;
    cx06_MA_B.s367_activate = FALSE;
  } else {
    switch (cx06_MA_DWork.s367_is_c15_cx06_MA) {
     case cx06_MA_IN_Off:
      /* During 'Off': '<S367>:1' */
      if (cx06_MA_B.s17_AC_Pres < (on_Pres_DataStore())) {
        /* Transition: '<S367>:3' */
        /* Exit 'Off': '<S367>:1' */
        /* Entry 'On': '<S367>:2' */
        cx06_MA_DWork.s367_is_c15_cx06_MA = cx06_MA_IN_On;
        cx06_MA_B.s367_activate = TRUE;
      }
      break;

     case cx06_MA_IN_On:
      /* During 'On': '<S367>:2' */
      if (cx06_MA_B.s17_AC_Pres > (off_Pres_DataStore())) {
        /* Transition: '<S367>:4' */
        /* Exit 'On': '<S367>:2' */
        /* Entry 'Off': '<S367>:1' */
        cx06_MA_DWork.s367_is_c15_cx06_MA = cx06_MA_IN_Off;
        cx06_MA_B.s367_activate = FALSE;
      }
      break;

     default:
      /* Transition: '<S367>:5' */
      /* Entry 'Off': '<S367>:1' */
      cx06_MA_DWork.s367_is_c15_cx06_MA = cx06_MA_IN_Off;
      cx06_MA_B.s367_activate = FALSE;
      break;
    }
  }

  /* Logic: '<S363>/Logical Operator' incorporates:
   *  Constant: '<S363>/Constant1'
   *  Logic: '<S363>/Logical Operator1'
   *  RelationalOperator: '<S363>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S363>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_fault_action): '<S363>/motohawk_fault_action'
   */
  cx06_MA_B.s363_AC_On = ((((uint16_T)(Enable_AC_DataStore())) != 0) &&
    cx06_MA_B.s363_RelationalOperator && (!GetFaultActionStatus(3)) &&
    (cx06_MA_B.s12_Eng_Running_Stat > 0.0) && cx06_MA_B.s367_activate);

  /* Gain: '<S369>/Gain' incorporates:
   *  Sum: '<S369>/Add'
   */
  rtb_Gain_k = (cx06_MA_B.s41_Switch + cx06_MA_B.s42_Switch) * 0.5;

  /* Product: '<S369>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
   */
  rtb_Switch_k = rtb_Gain_k * (Diff_Ratio_DataStore());

  /* Sum: '<S369>/Sum' incorporates:
   *  Product: '<S369>/Divide1'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration6'
   */
  rtb_Abs_i[0] = rtb_Switch_k * (Gear_Ratio_1_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;
  rtb_Abs_i[1] = rtb_Switch_k * (Gear_Ratio_2_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;
  rtb_Abs_i[2] = rtb_Switch_k * (Gear_Ratio_3_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;
  rtb_Abs_i[3] = rtb_Switch_k * (Gear_Ratio_4_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;
  rtb_Abs_i[4] = rtb_Switch_k * (Gear_Ratio_5_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;
  rtb_Abs_i[5] = rtb_Switch_k * (Gear_Ratio_6_DataStore()) -
    cx06_MA_B.s12_Eng_Spd;

  /* Abs: '<S369>/Abs' */
  for (i = 0; i < 6; i++) {
    rtb_Abs_i[i] = fabs(rtb_Abs_i[i]);
  }

  /* MinMax: '<S369>/MinMax' */
  rtb_Gain_k = rtb_Abs_i[0];
  for (i = 0; i < 5; i++) {
    rtb_Gain_k = rt_MINd_snf(rtb_Gain_k, rtb_Abs_i[i + 1]);
  }

  rtb_Switch_k = rtb_Gain_k;

  /* RelationalOperator: '<S371>/Compare' incorporates:
   *  Constant: '<S371>/Constant'
   *  Sum: '<S369>/Sum1'
   */
  for (i = 0; i < 6; i++) {
    rtb_Compare_df[i] = (rtb_Abs_i[i] - rtb_Switch_k == 0.0);
  }

  /* Sum: '<S369>/Add1' incorporates:
   *  Gain: '<S369>/Gain1'
   *  Gain: '<S369>/Gain2'
   *  Gain: '<S369>/Gain3'
   *  Gain: '<S369>/Gain4'
   *  Gain: '<S369>/Gain5'
   *  Gain: '<S369>/Gain6'
   */
  cx06_MA_B.s369_Add1 = (int8_T)(int32_T)((uint32_T)((((((rtb_Compare_df[0] << 7)
    + (rtb_Compare_df[1] << 8)) + (192 * rtb_Compare_df[2] << 1)) +
    (rtb_Compare_df[3] << 9)) + (160 * rtb_Compare_df[4] << 2)) + (192 *
    rtb_Compare_df[5] << 2)) >> 7);

  /* Logic: '<S370>/Logical Operator1' incorporates:
   *  Constant: '<S372>/Constant'
   *  Logic: '<S370>/Logical Operator'
   *  RelationalOperator: '<S372>/Compare'
   */
  cx06_MA_B.s370_LogicalOperator1 = (((cx06_MA_B.s369_Add1 != 0) ||
    cx06_MA_B.s22_Reverse) && cx06_MA_B.s22_Neutral);

  /* S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read' */
  rtb_Switch_k = AT_Stop_DataStore();

  /* Switch: '<S368>/Switch' incorporates:
   *  Constant: '<S368>/Constant'
   */
  if (cx06_MA_B.s22_Reverse) {
    rtb_Switch_c = -1;
  } else {
    rtb_Switch_c = cx06_MA_B.s369_Add1;
  }

  /* Product: '<S368>/Product' incorporates:
   *  Logic: '<S368>/Logical Operator'
   *  Logic: '<S368>/Logical Operator1'
   *  RelationalOperator: '<S368>/Relational Operator'
   */
  cx06_MA_B.s368_Product = (int8_T)(!((rtb_Switch_k <= (real_T)
    cx06_MA_B.s27_Clutch) || cx06_MA_B.s22_Neutral) ? (int32_T)rtb_Switch_c : 0);

  /* RelationalOperator: '<S373>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration9'
   */
  rtb_RelationalOperator1_o =
    ((Clutch_Mech_Engage_in_Accel_Through_Shifts_DataStore()) < (real_T)
     cx06_MA_B.s27_Clutch);

  /* S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read1' */
  rtb_Switch_k = Regen_Start_DataStore();

  /* RelationalOperator: '<S373>/Relational Operator2' */
  rtb_RelationalOperator2 = (rtb_Switch_k < (real_T)cx06_MA_B.s26_Brake);

  /* RelationalOperator: '<S373>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = ((Accel_Pedal_Pos_DataStore()) < cx06_MA_B.s25_Accel);

  /* RelationalOperator: '<S373>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration2'
   */
  rtb_RelationalOperator_f = (cx06_MA_B.s49_Divide > (Activation_Spd_DataStore()));

  /* Stateflow: '<S373>/Engine_Running' */
  /* Gateway: Strategy/Hybrid Control Code/Activation of Accel Through Shifts/Engine_Running */
  /* During: Strategy/Hybrid Control Code/Activation of Accel Through Shifts/Engine_Running */
  if (cx06_MA_DWork.s389_is_active_c21_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/Activation of Accel Through Shifts/Engine_Running */
    cx06_MA_DWork.s389_is_active_c21_cx06_MA = 1U;

    /* Transition: '<S389>:3' */
    /* Entry 'OFF': '<S389>:1' */
    cx06_MA_DWork.s389_is_c21_cx06_MA = cx06_MA_IN_OFF;
    rtb_RelationalOperator1_o = rtb_RelationalOperator_f;
  } else {
    switch (cx06_MA_DWork.s389_is_c21_cx06_MA) {
     case cx06_MA_IN_OFF:
      /* During 'OFF': '<S389>:1' */
      if ((rtb_RelationalOperator1_o != 0) && (cx06_MA_B.s13_Park_Brake != 0.0) &&
          (!(rtb_RelationalOperator2 != 0)) && (rtb_RelationalOperator3 != 0) &&
          (!cx06_MA_B.s22_Neutral)) {
        /* Transition: '<S389>:5' */
        /* Exit 'OFF': '<S389>:1' */
        /* Entry 'ON': '<S389>:2' */
        cx06_MA_DWork.s389_is_c21_cx06_MA = cx06_MA_IN_ON;
        rtb_RelationalOperator1_o = 1U;
      } else {
        rtb_RelationalOperator1_o = rtb_RelationalOperator_f;
      }
      break;

     case cx06_MA_IN_ON:
      /* During 'ON': '<S389>:2' */
      if ((rtb_RelationalOperator2 != 0) || (!(rtb_RelationalOperator3 != 0))) {
        /* Transition: '<S389>:4' */
        /* Exit 'ON': '<S389>:2' */
        /* Entry 'OFF': '<S389>:1' */
        cx06_MA_DWork.s389_is_c21_cx06_MA = cx06_MA_IN_OFF;
        rtb_RelationalOperator1_o = rtb_RelationalOperator_f;
      } else {
        rtb_RelationalOperator1_o = 1U;
      }
      break;

     default:
      /* Transition: '<S389>:3' */
      /* Entry 'OFF': '<S389>:1' */
      cx06_MA_DWork.s389_is_c21_cx06_MA = cx06_MA_IN_OFF;
      rtb_RelationalOperator1_o = rtb_RelationalOperator_f;
      break;
    }
  }

  /* Logic: '<S373>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
   */
  cx06_MA_B.s373_LogicalOperator = ((rtb_RelationalOperator1_o != 0) &&
    (((uint8_T)(EnableSport_DataStore())) != 0));

  /* S-Function (motohawk_sfun_data_read): '<S365>/motohawk_data_read1' */
  rtb_Switch_k = Regen_Start_DataStore();

  /* RelationalOperator: '<S365>/Relational Operator1' */
  rtb_RelationalOperator_f = ((real_T)cx06_MA_B.s26_Brake >= rtb_Switch_k);

  /* S-Function (motohawk_sfun_data_read): '<S365>/motohawk_data_read2' */
  rtb_Switch_k = AT_Start_DataStore();

  /* RelationalOperator: '<S365>/Relational Operator2' */
  rtb_RelationalOperator2_k = ((real_T)cx06_MA_B.s27_Clutch > rtb_Switch_k);

  /* Embedded MATLAB: '<S365>/hybrid State calc' */
  /* Embedded MATLAB Function 'Strategy/Hybrid Control Code/hybrid State calc': '<S387>:1' */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  /* reverse assist possible implementation */
  /* if(braking == 1) */
  /*     state = 2;%regen */
  /* elseif((neutral == 1) && (clutching == 0)) */
  /*     state = 4;%ZEV */
  /* elseif((clutching == 1) && (sport_mode == 0)) */
  /*     state = 1;%diesel */
  /* else */
  /*     state = 3;%HEV */
  /* end */
  /* note: don't care about reverse (reverse is effectively any other gear) */
  /* sport mode (5/22/2007) */
  if ((int32_T)rtb_RelationalOperator_f == 1) {
    /* '<S387>:1:23' */
    /* '<S387>:1:24' */
    rtb_Gain_k = 2.0;

    /* regen */
  } else if ((int32_T)cx06_MA_B.s22_Reverse == 1) {
    /* '<S387>:1:25' */
    /* '<S387>:1:26' */
    rtb_Gain_k = 1.0;

    /* diesel */
  } else if (((int32_T)cx06_MA_B.s22_Neutral == 1) && ((int32_T)
              rtb_RelationalOperator2_k == 0)) {
    /* '<S387>:1:27' */
    /* '<S387>:1:28' */
    rtb_Gain_k = 4.0;

    /* ZEV */
  } else if (((int32_T)rtb_RelationalOperator2_k == 1) && ((int32_T)
              cx06_MA_B.s373_LogicalOperator == 0)) {
    /* '<S387>:1:29' */
    /* '<S387>:1:30' */
    rtb_Gain_k = 1.0;

    /* diesel */
  } else {
    /* '<S387>:1:32' */
    rtb_Gain_k = 3.0;

    /* HEV */
  }

  /* S-Function (motohawk_sfun_fault_action): '<S379>/motohawk_fault_action2'
   *
   * Regarding '<S379>/motohawk_fault_action2':
     Get Fault Action Status: inhibitDiesel
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(5);
  }

  /* Logic: '<S379>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S379>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_fault_action): '<S379>/motohawk_fault_action'
   */
  rtb_LogicalOperator4 = ((((uint8_T)(InhibitAssist_DataStore())) != 0) ||
    GetFaultActionStatus(6));

  /* Logic: '<S379>/Logical Operator5' */
  rtb_RelationalOperator2_k = (rtb_motohawk_fault_action2 ||
    rtb_LogicalOperator4);

  /* Logic: '<S379>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S379>/motohawk_calibration3'
   */
  rtb_RelationalOperator_f = (rtb_LogicalOperator4 || (((uint8_T)
    (InhibitZEV_DataStore())) != 0));

  /* Embedded MATLAB: '<S379>/Embedded MATLAB Function' incorporates:
   *  Logic: '<S379>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S379>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S379>/motohawk_fault_action1'
   */
  /* Embedded MATLAB Function 'Strategy/Hybrid Control Code/Hybrid state limits/Embedded MATLAB Function': '<S406>:1' */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  /* '<S406>:1:5' */
  rtb_nState = rtb_Gain_k;
  if ((rtb_Gain_k == 2.0) && (((((uint8_T)inhibitRegen_DataStore()) != 0) ||
        GetFaultActionStatus(8)) == 1)) {
    /* '<S406>:1:6' */
    /* '<S406>:1:7' */
    rtb_nState = 1.0;
  }

  if ((rtb_Gain_k == 3.0) && ((int32_T)rtb_RelationalOperator2_k == 1)) {
    /* '<S406>:1:9' */
    /* '<S406>:1:10' */
    rtb_nState = 1.0;
  }

  if ((rtb_Gain_k == 4.0) && ((int32_T)rtb_RelationalOperator_f == 1)) {
    /* '<S406>:1:12' */
    /* '<S406>:1:13' */
    rtb_nState = 1.0;
  }

  if ((rtb_Gain_k == 1.0) && ((int32_T)rtb_motohawk_fault_action2 == 1)) {
    /* '<S406>:1:15' */
    /* '<S406>:1:16' */
    rtb_nState = 0.0;
  }

  /* DataTypeConversion: '<S365>/Data Type Conversion' */
  i = (int32_T)rtb_nState;
  rtb_Gain_k = fmod((real_T)i, 256.0);
  cx06_MA_B.s365_hybrid_state = (uint8_T)(rtb_Gain_k < 0.0 ? (int32_T)(uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-rtb_Gain_k))) : (int32_T)(uint8_T)rtb_Gain_k);

  /* Logic: '<S376>/Logical Operator' incorporates:
   *  Constant: '<S376>/Constant1'
   *  RelationalOperator: '<S376>/Relational Operator'
   */
  rtb_RelationalOperator1_kg = ((1.0 == cx06_MA_B.s13_Park_Brake) &&
    cx06_MA_B.s373_LogicalOperator);

  /* Product: '<S376>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration'
   */
  cx06_MA_B.s376_Product = (real_T)rtb_RelationalOperator1_kg *
    (Preload_Value_DataStore());

  /* Gain: '<S376>/Gain' incorporates:
   *  Constant: '<S376>/Constant'
   *  Sum: '<S376>/Sum'
   */
  rtb_Switch_k = (cx06_MA_B.s13_Park_Brake + -1.0) * -1.0;

  /* Saturate: '<S376>/Saturation' */
  cx06_MA_B.s376_Saturation = rt_SATURATE(rtb_Switch_k, 0.0, 1.0);

  /* RelationalOperator: '<S412>/Compare' incorporates:
   *  Constant: '<S412>/Constant'
   */
  rtb_RelationalOperator1_o = (cx06_MA_B.s365_hybrid_state == 0);

  /* RelationalOperator: '<S411>/Compare' incorporates:
   *  Constant: '<S411>/Constant'
   */
  rtb_RelationalOperator2 = (cx06_MA_B.s365_hybrid_state == 4);

  /* Logic: '<S388>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S388>/motohawk_data_read'
   */
  rtb_RelationalOperator_f = ((rtb_RelationalOperator1_o != 0) ||
    (rtb_RelationalOperator2 != 0) || (((uint8_T)inhibitRegen_DataStore()) != 0));

  /* Stateflow: '<S388>/Sustain Brake original' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration3'
   */
  /* Gateway: Strategy/Hybrid Control Code/sustain Brake/Sustain Brake original */
  /* During: Strategy/Hybrid Control Code/sustain Brake/Sustain Brake original */
  if (cx06_MA_DWork.s413_is_active_c5_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/sustain Brake/Sustain Brake original */
    cx06_MA_DWork.s413_is_active_c5_cx06_MA = 1U;

    /* Transition: '<S413>:5' */
    /* Entry 'Off': '<S413>:1' */
    cx06_MA_DWork.s413_is_c5_cx06_MA = cx06_MA_IN_Off;
    cx06_MA_B.s413_SB = 0U;
  } else {
    switch (cx06_MA_DWork.s413_is_c5_cx06_MA) {
     case cx06_MA_IN_Off:
      /* During 'Off': '<S413>:1' */
      if (cx06_MA_B.s50_SOC < (SB_On_DataStore())) {
        /* Transition: '<S413>:3' */
        /* Exit 'Off': '<S413>:1' */
        /* Entry 'On': '<S413>:2' */
        cx06_MA_DWork.s413_is_c5_cx06_MA = cx06_MA_IN_On;
        cx06_MA_B.s413_SB = 1U;
      } else {
        cx06_MA_B.s413_level = rt_MAXd_snf(cx06_MA_B.s413_level - 1.0 /
          (SB_Ramp_Time_DataStore()), 0.0);
      }
      break;

     case cx06_MA_IN_On:
      /* During 'On': '<S413>:2' */
      if (cx06_MA_B.s50_SOC > (SB_Off_DataStore())) {
        /* Transition: '<S413>:4' */
        /* Exit 'On': '<S413>:2' */
        /* Entry 'Off': '<S413>:1' */
        cx06_MA_DWork.s413_is_c5_cx06_MA = cx06_MA_IN_Off;
        cx06_MA_B.s413_SB = 0U;
      } else {
        cx06_MA_B.s413_level = rt_MINd_snf(1.0 / (SB_Ramp_Time_DataStore()) +
          cx06_MA_B.s413_level, 1.0);
      }
      break;

     default:
      /* Transition: '<S413>:5' */
      /* Entry 'Off': '<S413>:1' */
      cx06_MA_DWork.s413_is_c5_cx06_MA = cx06_MA_IN_Off;
      cx06_MA_B.s413_SB = 0U;
      break;
    }
  }

  /* Product: '<S388>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration4'
   */
  cx06_MA_B.s388_Product = (real_T)(SB_Level_DataStore()) * cx06_MA_B.s413_level;

  /* Switch: '<S388>/Switch' incorporates:
   *  Constant: '<S388>/Constant'
   *  Product: '<S414>/Product'
   *  Saturate: '<S414>/Saturation'
   *  Signum: '<S414>/Sign'
   */
  if (rtb_RelationalOperator_f) {
    rtb_Switch_k = 0.0;
  } else {
    /* Abs: '<S414>/Abs' */
    rtb_Gain_k = fabs(cx06_MA_B.s49_Divide);

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S414>/Constant'
     *  Product: '<S414>/Divide'
     *  RelationalOperator: '<S414>/Relational Operator'
     *  S-Function (motohawk_sfun_data_read): '<S414>/motohawk_data_read'
     *  S-Function (motohawk_sfun_data_read): '<S414>/motohawk_data_read1'
     *  Sum: '<S414>/Sum'
     *  Sum: '<S414>/Sum1'
     */
    if (rtb_Gain_k > RegenSpdRampStart_DataStore()) {
      rtb_Gain_k = 1.0;
    } else {
      rtb_Gain_k = (rtb_Gain_k - RegenSpdRampStop_DataStore()) /
        (RegenSpdRampStart_DataStore() - RegenSpdRampStop_DataStore());
    }

    rtb_Switch_k = cx06_MA_B.s388_Product * rt_SIGNd_snf(cx06_MA_B.s49_Divide) *
      rt_SATURATE(rtb_Gain_k, 0.0, 1.0);
  }

  /* S-Function Block: <S380>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RampInPt_SOC_OrdIn_DataStore()) = cx06_MA_B.s50_SOC;
    (RampInPt_SOC_OrdIdx_DataStore()) = TablePrelookup_real_T(cx06_MA_B.s50_SOC,
      (RampInPt_SOC_OrdIdxArr_DataStore()), 9, (RampInPt_SOC_OrdIdx_DataStore()));
    rtb_motohawk_prelookup_k = (RampInPt_SOC_OrdIdx_DataStore());
  }

  /* S-Function Block: <S380>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_k, (real_T *) ((RampInPt_SOCTbl_DataStore())), 9);
    (RampInPt_SOC_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* Gain: '<S380>/Gain' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S380>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S380>/motohawk_prelookup'
   */
  cx06_MA_B.s380_Gain = 0.01 * rtb_motohawk_interpolation_1d;

  /* Sum: '<S380>/Sum' incorporates:
   *  Constant: '<S380>/Constant'
   *  Product: '<S380>/Product'
   *  Product: '<S380>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S380>/motohawk_calibration1'
   *  Sum: '<S380>/Sum1'
   *  UnitDelay: '<S380>/Unit Delay1'
   */
  cx06_MA_B.s380_Sum = (1.0 - (Filt_Accel_K_DataStore())) *
    cx06_MA_DWork.s380_UnitDelay1_DSTATE + cx06_MA_B.s25_Accel *
    (Filt_Accel_K_DataStore());

  /* Saturate: '<S380>/Saturation1' */
  rtb_Saturation1 = rt_SATURATE(cx06_MA_B.s380_Sum, 0.0, 1.0);

  /* Logic: '<S375>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S375>/motohawk_data_read'
   */
  rtb_LogicalOperator4 = !(((uint8_T)inhibitTC_DataStore()) != 0);

  /* SwitchCase: '<S375>/Switch Case' incorporates:
   *  ActionPort: '<S391>/Action Port'
   *  ActionPort: '<S392>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S375>/motohawk_calibration'
   *  SubSystem: '<S375>/RRef_Wheel Diff'
   *  SubSystem: '<S375>/Wheel_Acceleration'
   */
  switch ((int32_T)(Slip_Determine_Mode_DataStore())) {
   case 0:
    /* Abs: '<S391>/Abs1' */
    rtb_Gain_k = fabs(cx06_MA_B.s43_Switch);

    /* Abs: '<S391>/Abs2' */
    rtb_nState = fabs(cx06_MA_B.s44_Switch);

    /* Abs: '<S391>/Abs3' */
    rtb_Abs3_a = fabs(cx06_MA_B.s42_Switch);

    /* Abs: '<S391>/Abs4' */
    rtb_Abs4 = fabs(cx06_MA_B.s41_Switch);

    /* MinMax: '<S391>/MinMax' */
    min = rt_MINd_snf(rtb_Gain_k, rtb_nState);

    /* MinMax: '<S391>/MinMax2' */
    rtb_Gain_k = rt_MAXd_snf(rtb_nState, rtb_nState);

    /* Logic: '<S391>/Logical Operator' incorporates:
     *  MinMax: '<S391>/MinMax3'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S391>/motohawk_calibration'
     *  Sum: '<S391>/Sum2'
     *  Sum: '<S391>/Sum3'
     */
    cx06_MA_B.s375_Merge1 = (((rtb_Gain_k - min > (TC_Slip_Thres_DataStore()))
      != 0) || ((rtb_Gain_k - rt_MINd_snf(rtb_Abs4, rtb_Abs3_a) >
                 (TC_Slip_Thres_DataStore())) != 0));

    /* RelationalOperator: '<S391>/Relational Operator2' incorporates:
     *  MinMax: '<S391>/MinMax1'
     *  S-Function (motohawk_sfun_calibration): '<S391>/motohawk_calibration'
     *  Sum: '<S391>/Sum1'
     */
    cx06_MA_B.s375_Merge = (rt_MAXd_snf(rtb_Abs4, rtb_Abs3_a) - min >
      (TC_Slip_Thres_DataStore()));
    break;

   case 1:
    /* UnitDelay: '<S392>/Unit Delay2' */
    rtb_Gain_k = cx06_MA_DWork.s392_UnitDelay2_DSTATE;

    /* RelationalOperator: '<S392>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration2'
     */
    rtb_RelationalOperator1_o = ((Age_Count_Comparison_DataStore()) == (real_T)
      cx06_MA_B.s13_AgeCount_e);

    /* Switch: '<S392>/Switch1' incorporates:
     *  Sum: '<S392>/Sum2'
     *  UnitDelay: '<S392>/Unit Delay6'
     */
    if (rtb_RelationalOperator1_o > 0) {
      rtb_Gain_k = cx06_MA_B.s41_Switch - rtb_Gain_k;
    } else {
      rtb_Gain_k = cx06_MA_DWork.s392_UnitDelay6_DSTATE;
    }

    /* Sum: '<S393>/Sum' incorporates:
     *  Constant: '<S393>/Constant'
     *  Product: '<S393>/Product'
     *  Product: '<S393>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration'
     *  Sum: '<S393>/Sum1'
     *  UnitDelay: '<S393>/Unit Delay1'
     */
    cx06_MA_B.s393_Sum = (1.0 - (Filt_Wheel_Derv_K_DataStore())) *
      cx06_MA_DWork.s393_UnitDelay1_DSTATE + rtb_Gain_k *
      (Filt_Wheel_Derv_K_DataStore());

    /* Switch: '<S392>/Switch2' incorporates:
     *  Sum: '<S392>/Sum3'
     *  UnitDelay: '<S392>/Unit Delay1'
     *  UnitDelay: '<S392>/Unit Delay7'
     */
    if (rtb_RelationalOperator1_o > 0) {
      rtb_nState = cx06_MA_B.s42_Switch - cx06_MA_DWork.s392_UnitDelay1_DSTATE;
    } else {
      rtb_nState = cx06_MA_DWork.s392_UnitDelay7_DSTATE;
    }

    /* Sum: '<S394>/Sum' incorporates:
     *  Constant: '<S394>/Constant'
     *  Product: '<S394>/Product'
     *  Product: '<S394>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration'
     *  Sum: '<S394>/Sum1'
     *  UnitDelay: '<S394>/Unit Delay1'
     */
    cx06_MA_B.s394_Sum = (1.0 - (Filt_Wheel_Derv_K_DataStore())) *
      cx06_MA_DWork.s394_UnitDelay1_DSTATE + rtb_nState *
      (Filt_Wheel_Derv_K_DataStore());

    /* Switch: '<S392>/Switch3' incorporates:
     *  Sum: '<S392>/Sum5'
     *  UnitDelay: '<S392>/Unit Delay5'
     *  UnitDelay: '<S392>/Unit Delay8'
     */
    if (rtb_RelationalOperator1_o > 0) {
      min = cx06_MA_B.s43_Switch - cx06_MA_DWork.s392_UnitDelay5_DSTATE;
    } else {
      min = cx06_MA_DWork.s392_UnitDelay8_DSTATE;
    }

    /* Sum: '<S395>/Sum' incorporates:
     *  Constant: '<S395>/Constant'
     *  Product: '<S395>/Product'
     *  Product: '<S395>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration'
     *  Sum: '<S395>/Sum1'
     *  UnitDelay: '<S395>/Unit Delay1'
     */
    cx06_MA_B.s395_Sum = (1.0 - (Filt_Wheel_Derv_K_DataStore())) *
      cx06_MA_DWork.s395_UnitDelay1_DSTATE + min * (Filt_Wheel_Derv_K_DataStore());

    /* Switch: '<S392>/Switch4' incorporates:
     *  Sum: '<S392>/Sum4'
     *  UnitDelay: '<S392>/Unit Delay4'
     *  UnitDelay: '<S392>/Unit Delay9'
     */
    if (rtb_RelationalOperator1_o > 0) {
      rtb_Abs3_a = cx06_MA_B.s44_Switch - cx06_MA_DWork.s392_UnitDelay4_DSTATE;
    } else {
      rtb_Abs3_a = cx06_MA_DWork.s392_UnitDelay9_DSTATE;
    }

    /* Sum: '<S396>/Sum' incorporates:
     *  Constant: '<S396>/Constant'
     *  Product: '<S396>/Product'
     *  Product: '<S396>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration'
     *  Sum: '<S396>/Sum1'
     *  UnitDelay: '<S396>/Unit Delay1'
     */
    cx06_MA_B.s396_Sum = (1.0 - (Filt_Wheel_Derv_K_DataStore())) *
      cx06_MA_DWork.s396_UnitDelay1_DSTATE + rtb_Abs3_a *
      (Filt_Wheel_Derv_K_DataStore());

    /* Logic: '<S392>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S392>/Relational Operator2'
     *  RelationalOperator: '<S392>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration1'
     */
    cx06_MA_B.s375_Merge = ((cx06_MA_B.s393_Sum >= (TC_Accel_Thres_DataStore()))
      || (cx06_MA_B.s394_Sum >= (TC_Accel_Thres_DataStore())));

    /* Logic: '<S392>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S392>/Relational Operator4'
     *  RelationalOperator: '<S392>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S392>/motohawk_calibration1'
     */
    cx06_MA_B.s375_Merge1 = ((cx06_MA_B.s395_Sum >= (TC_Accel_Thres_DataStore()))
      || (cx06_MA_B.s396_Sum >= (TC_Accel_Thres_DataStore())));

    /* Update for UnitDelay: '<S392>/Unit Delay2' */
    cx06_MA_DWork.s392_UnitDelay2_DSTATE = cx06_MA_B.s41_Switch;

    /* Update for UnitDelay: '<S392>/Unit Delay6' */
    cx06_MA_DWork.s392_UnitDelay6_DSTATE = rtb_Gain_k;

    /* Update for UnitDelay: '<S393>/Unit Delay1' */
    cx06_MA_DWork.s393_UnitDelay1_DSTATE = cx06_MA_B.s393_Sum;

    /* Update for UnitDelay: '<S392>/Unit Delay1' */
    cx06_MA_DWork.s392_UnitDelay1_DSTATE = cx06_MA_B.s42_Switch;

    /* Update for UnitDelay: '<S392>/Unit Delay7' */
    cx06_MA_DWork.s392_UnitDelay7_DSTATE = rtb_nState;

    /* Update for UnitDelay: '<S394>/Unit Delay1' */
    cx06_MA_DWork.s394_UnitDelay1_DSTATE = cx06_MA_B.s394_Sum;

    /* Update for UnitDelay: '<S392>/Unit Delay5' */
    cx06_MA_DWork.s392_UnitDelay5_DSTATE = cx06_MA_B.s43_Switch;

    /* Update for UnitDelay: '<S392>/Unit Delay8' */
    cx06_MA_DWork.s392_UnitDelay8_DSTATE = min;

    /* Update for UnitDelay: '<S395>/Unit Delay1' */
    cx06_MA_DWork.s395_UnitDelay1_DSTATE = cx06_MA_B.s395_Sum;

    /* Update for UnitDelay: '<S392>/Unit Delay4' */
    cx06_MA_DWork.s392_UnitDelay4_DSTATE = cx06_MA_B.s44_Switch;

    /* Update for UnitDelay: '<S392>/Unit Delay9' */
    cx06_MA_DWork.s392_UnitDelay9_DSTATE = rtb_Abs3_a;

    /* Update for UnitDelay: '<S396>/Unit Delay1' */
    cx06_MA_DWork.s396_UnitDelay1_DSTATE = cx06_MA_B.s396_Sum;
    break;
  }

  /* Logic: '<S375>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S375>/motohawk_data_read1'
   */
  cx06_MA_B.s375_Front_Slip = ((((uint8_T)TCVersion_DataStore()) != 0) ||
    (cx06_MA_B.s375_Merge != 0));

  /* Logic: '<S375>/Logical Operator1' */
  rtb_RelationalOperator2_k = (rtb_LogicalOperator4 && cx06_MA_B.s375_Front_Slip);

  /* UnitDelay: '<S380>/Unit Delay2' */
  rtb_Gain_k = cx06_MA_DWork.s380_UnitDelay2_DSTATE;

  /* Gain: '<S380>/Gain1' incorporates:
   *  Math: '<S380>/Math Function1'
   *  S-Function (motohawk_sfun_calibration): '<S380>/motohawk_calibration3'
   *
   * About '<S380>/Math Function1':
   *  Operator: reciprocal
   */
  rtb_nState = 1.0 / (TC_Rmp_Adjust_Rate_DataStore()) * -0.005;

  /* Switch: '<S380>/Switch2' incorporates:
   *  Sum: '<S380>/Sum3'
   */
  if (rtb_Gain_k >= 1.0) {
    /* Switch: '<S380>/Switch6' incorporates:
     *  Constant: '<S380>/Constant1'
     */
    if (rtb_RelationalOperator2_k) {
      cx06_MA_B.s380_Switch2 = rtb_Saturation1;
    } else {
      cx06_MA_B.s380_Switch2 = 1.0;
    }
  } else {
    /* Switch: '<S380>/Switch' incorporates:
     *  Gain: '<S380>/Gain2'
     */
    if (!rtb_RelationalOperator2_k) {
      rtb_nState = -rtb_nState;
    }

    cx06_MA_B.s380_Switch2 = rtb_nState + rtb_Gain_k;
  }

  /* Saturate: '<S380>/Saturation2' */
  rtb_Abs3_a = rt_SATURATE(cx06_MA_B.s380_Switch2, 0.0, 1.0);

  /* MinMax: '<S380>/MinMax' */
  cx06_MA_B.s380_MinMax = rt_MINd_snf(rtb_Saturation1, rtb_Abs3_a);

  /* Sum: '<S380>/Sum2' */
  rtb_nState = cx06_MA_B.s380_Gain + cx06_MA_B.s380_MinMax;

  /* Saturate: '<S380>/Saturation' */
  cx06_MA_B.s380_Saturation = rt_SATURATE(rtb_nState, 0.0, 0.8);

  /* Stateflow: '<S374>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S374>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S374>/motohawk_data_read1'
   */
  /* Gateway: Strategy/Hybrid Control Code/Activation of Assisted Take-off/Chart */
  /* During: Strategy/Hybrid Control Code/Activation of Assisted Take-off/Chart */
  if (cx06_MA_DWork.s390_is_active_c11_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/Activation of Assisted Take-off/Chart */
    cx06_MA_DWork.s390_is_active_c11_cx06_MA = 1U;

    /* Transition: '<S390>:3' */
    /* Entry 'Off': '<S390>:1' */
    cx06_MA_DWork.s390_is_c11_cx06_MA = cx06_MA_IN_Off;
    cx06_MA_B.s390_active = 0U;
  } else {
    switch (cx06_MA_DWork.s390_is_c11_cx06_MA) {
     case cx06_MA_IN_Off:
      /* During 'Off': '<S390>:1' */
      if (((real_T)cx06_MA_B.s27_Clutch > AT_Start_DataStore()) &&
          (cx06_MA_B.s49_Divide < 2.0) && (((uint8_T)(AT_Enable_DataStore())) ==
           1)) {
        /* Transition: '<S390>:5' */
        /* Exit 'Off': '<S390>:1' */
        /* Entry 'On': '<S390>:2' */
        cx06_MA_DWork.s390_is_c11_cx06_MA = cx06_MA_IN_On;
        cx06_MA_B.s390_active = 1U;
      }
      break;

     case cx06_MA_IN_On:
      /* During 'On': '<S390>:2' */
      if ((real_T)cx06_MA_B.s27_Clutch < AT_Stop_DataStore()) {
        /* Transition: '<S390>:4' */
        /* Exit 'On': '<S390>:2' */
        /* Entry 'Off': '<S390>:1' */
        cx06_MA_DWork.s390_is_c11_cx06_MA = cx06_MA_IN_Off;
        cx06_MA_B.s390_active = 0U;
      }
      break;

     default:
      /* Transition: '<S390>:3' */
      /* Entry 'Off': '<S390>:1' */
      cx06_MA_DWork.s390_is_c11_cx06_MA = cx06_MA_IN_Off;
      cx06_MA_B.s390_active = 0U;
      break;
    }
  }

  /* SwitchCase: '<S365>/Switch Case' incorporates:
   *  ActionPort: '<S378>/Action Port'
   *  ActionPort: '<S381>/Action Port'
   *  ActionPort: '<S383>/Action Port'
   *  ActionPort: '<S385>/Action Port'
   *  ActionPort: '<S386>/Action Port'
   *  SubSystem: '<S365>/HEV'
   *  SubSystem: '<S365>/Regen'
   *  SubSystem: '<S365>/Safety'
   *  SubSystem: '<S365>/ZEV'
   *  SubSystem: '<S365>/diesel'
   */
  switch (cx06_MA_B.s365_hybrid_state) {
   case 0:
    /* Constant: '<S383>/Constant' */
    cx06_MA_B.root_motor_Torque = 0.0;

    /* Constant: '<S383>/Constant1' */
    cx06_MA_B.root_engine_Torque = 0.0;

    /* Constant: '<S383>/Constant2' */
    cx06_MA_B.root_motor_Enable = 0.0;
    break;

   case 1:
    /* Constant: '<S386>/Constant' */
    cx06_MA_B.root_motor_Torque = 0.0;

    /* Constant: '<S386>/Constant1' */
    cx06_MA_B.root_motor_Enable = 0.0;

    /* S-Function Block: <S386>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Diesel_Accel_OrdIn_DataStore()) = cx06_MA_B.s25_Accel;
      (Diesel_Accel_OrdIdx_DataStore()) = TablePrelookup_real_T
        (cx06_MA_B.s25_Accel, (Diesel_Accel_OrdIdxArr_DataStore()), 11,
         (Diesel_Accel_OrdIdx_DataStore()));
      rtb_motohawk_prelookup_m = (Diesel_Accel_OrdIdx_DataStore());
    }

    /* S-Function Block: <S386>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      cx06_MA_B.root_engine_Torque = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *) ((Diesel_Accel_MapTbl_DataStore())),
         11);
      (Diesel_Accel_Map_DataStore()) = cx06_MA_B.root_engine_Torque;
    }
    break;

   case 2:
    /* Sum: '<S381>/Sum' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S381>/motohawk_data_read1'
     */
    rtb_Gain_k = (real_T)cx06_MA_B.s26_Brake - Regen_Start_DataStore();

    /* Gain: '<S381>/Gain' incorporates:
     *  Product: '<S381>/Divide'
     *  S-Function (motohawk_sfun_calibration): '<S381>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S381>/motohawk_data_read1'
     *  Sum: '<S381>/Sum1'
     */
    rtb_Gain_k = rtb_Gain_k / ((Regen_Full_DataStore()) - Regen_Start_DataStore())
      * -1.0;

    /* Saturate: '<S381>/Saturation' */
    cx06_MA_B.s381_motor_Torque = rt_SATURATE(rtb_Gain_k, -1.0, 0.0);

    /* Signum: '<S408>/Sign' */
    rtb_nState = rt_SIGNd_snf(cx06_MA_B.s49_Divide);

    /* Abs: '<S408>/Abs' */
    rtb_Gain_k = fabs(cx06_MA_B.s49_Divide);

    /* Switch: '<S408>/Switch' incorporates:
     *  Constant: '<S408>/Constant'
     *  Product: '<S408>/Divide'
     *  RelationalOperator: '<S408>/Relational Operator'
     *  S-Function (motohawk_sfun_data_read): '<S408>/motohawk_data_read'
     *  S-Function (motohawk_sfun_data_read): '<S408>/motohawk_data_read1'
     *  Sum: '<S408>/Sum'
     *  Sum: '<S408>/Sum1'
     */
    if (rtb_Gain_k > RegenSpdRampStart_DataStore()) {
      rtb_Gain_k = 1.0;
    } else {
      rtb_Gain_k = (rtb_Gain_k - RegenSpdRampStop_DataStore()) /
        (RegenSpdRampStart_DataStore() - RegenSpdRampStop_DataStore());
    }

    /* Product: '<S408>/Product' incorporates:
     *  Saturate: '<S408>/Saturation'
     */
    cx06_MA_B.s408_Product = cx06_MA_B.s381_motor_Torque * rtb_nState *
      rt_SATURATE(rtb_Gain_k, 0.0, 1.0);

    /* Constant: '<S381>/Constant1' */
    cx06_MA_B.root_motor_Enable = 1.0;

    /* Switch: '<S407>/Switch' incorporates:
     *  Constant: '<S407>/Constant'
     *  Product: '<S407>/Divide'
     *  RelationalOperator: '<S407>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration1'
     *  Sum: '<S407>/Sum'
     */
    if (cx06_MA_B.s50_SOC <= (RegenMaxSOC_DataStore())) {
      rtb_Gain_k = 1.0;
    } else {
      rtb_Gain_k = (((RegenMaxSOC_DataStore()) - cx06_MA_B.s50_SOC) +
                    (RegenSOCRampWidth_DataStore())) /
        (RegenSOCRampWidth_DataStore());
    }

    /* Product: '<S407>/Product' incorporates:
     *  Saturate: '<S407>/Saturation'
     */
    cx06_MA_B.root_motor_Torque = cx06_MA_B.s408_Product * rt_SATURATE
      (rtb_Gain_k, 0.0, 1.0);

    /* S-Function Block: <S381>/motohawk_prelookup_reference */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      cx06_MA_B.s381_motohawk_prelookup_reference = TablePrelookup_real_T
        (cx06_MA_B.s25_Accel, (Diesel_Accel_OrdIdxArr_DataStore()), 11,
         cx06_MA_B.s381_motohawk_prelookup_reference);
    }

    /* S-Function Block: <S381>/motohawk_interpolation_1d_reference */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      cx06_MA_B.root_engine_Torque = TableInterpolation1D_real_T
        (cx06_MA_B.s381_motohawk_prelookup_reference, (real_T *)
         ((Diesel_Accel_MapTbl_DataStore())), 11);
    }
    break;

   case 3:
    /* Sum: '<S378>/Sum7' incorporates:
     *  Constant: '<S378>/Constant2'
     *  DataTypeConversion: '<S378>/Data1'
     *  Gain: '<S378>/Gain'
     */
    cx06_MA_B.s378_Sum7 = -2.0 * (real_T)cx06_MA_B.s22_Reverse + 1.0;

    /* Embedded MATLAB: '<S403>/Embedded MATLAB Function' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S403>/motohawk_data_read'
     */
    /* Embedded MATLAB Function 'Strategy/Hybrid Control Code/HEV/AssistedTakeOff/Embedded MATLAB Function': '<S405>:1' */
    /*  This block supports an embeddable subset of the MATLAB language. */
    /*  See the help menu for details.  */
    if ((real_T)cx06_MA_B.s27_Clutch > AT_Start_DataStore()) {
      /* '<S405>:1:5' */
      /* '<S405>:1:6' */
      rtb_Gain_k = 1.0;
    } else if ((real_T)cx06_MA_B.s27_Clutch > (AT_Full_DataStore())) {
      /* '<S405>:1:7' */
      /* '<S405>:1:8' */
      rtb_Gain_k = 2.0;
    } else if ((real_T)cx06_MA_B.s27_Clutch > (AT_Ramp_DataStore())) {
      /* '<S405>:1:9' */
      /* '<S405>:1:10' */
      rtb_Gain_k = 3.0;
    } else if ((real_T)cx06_MA_B.s27_Clutch > (AT_Stop_DataStore())) {
      /* '<S405>:1:11' */
      /* '<S405>:1:12' */
      rtb_Gain_k = 4.0;
    } else {
      /* '<S405>:1:14' */
      rtb_Gain_k = 5.0;
    }

    /* MultiPortSwitch: '<S403>/Multiport Switch' incorporates:
     *  Constant: '<S403>/Constant'
     *  Product: '<S403>/Divide'
     *  Product: '<S403>/Divide1'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S403>/motohawk_data_read'
     *  Sum: '<S403>/Sum'
     *  Sum: '<S403>/Sum1'
     *  Sum: '<S403>/Sum2'
     *  Sum: '<S403>/Sum3'
     */
    switch ((int32_T)rtb_Gain_k) {
     case 1:
      rtb_nState = 0.0;
      break;

     case 2:
      rtb_nState = 1.0 / ((AT_Full_DataStore()) - AT_Start_DataStore()) *
        ((real_T)cx06_MA_B.s27_Clutch - AT_Start_DataStore()) *
        (AT_Level_DataStore());
      break;

     case 3:
      rtb_nState = (AT_Level_DataStore());
      break;

     case 4:
      rtb_nState = (AT_Level_DataStore()) / ((AT_Ramp_DataStore()) -
        (AT_Stop_DataStore())) * ((real_T)cx06_MA_B.s27_Clutch -
        (AT_Stop_DataStore()));
      break;

     default:
      rtb_nState = 0.0;
      break;
    }

    /* Product: '<S403>/Product1' incorporates:
     *  Logic: '<S403>/Logical Operator'
     *  S-Function (motohawk_sfun_fault_action): '<S403>/motohawk_fault_action'
     */
    cx06_MA_B.s403_Product1 = rtb_nState * (real_T)cx06_MA_B.s390_active *
      (real_T)!GetFaultActionStatus(4);

    /* Product: '<S378>/Divide' incorporates:
     *  Constant: '<S378>/Constant'
     *  Sum: '<S378>/Sum'
     *  Sum: '<S378>/Sum1'
     */
    rtb_nState = (cx06_MA_B.s25_Accel - cx06_MA_B.s380_Saturation) / (1.0 -
      cx06_MA_B.s380_Saturation);

    /* Saturate: '<S378>/Saturation' */
    min = rt_SATURATE(rtb_nState, 0.0, 1.0);

    /* Switch: '<S403>/Switch' incorporates:
     *  Product: '<S403>/Product'
     *  Saturate: '<S403>/Saturation'
     */
    if (cx06_MA_B.s390_active > 0) {
      /* Product: '<S403>/Divide2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration2'
       *  Sum: '<S403>/Sum4'
       *  Sum: '<S403>/Sum5'
       */
      rtb_Gain_k = ((real_T)cx06_MA_B.s27_Clutch - (AT_Ramp_DataStore())) /
        ((AT_Stop_DataStore()) - (AT_Ramp_DataStore()));
      rtb_nState = min * rt_SATURATE(rtb_Gain_k, 0.0, 1.0);
    } else {
      rtb_nState = min;
    }

    /* Sum: '<S403>/Sum6' */
    rtb_nState += cx06_MA_B.s403_Product1;

    /* Constant: '<S378>/Constant1' */
    cx06_MA_B.root_motor_Enable = 1.0;

    /* Product: '<S378>/Mult' incorporates:
     *  MinMax: '<S403>/MinMax'
     */
    rtb_Gain_k = cx06_MA_B.s378_Sum7 * rt_MAXd_snf(min, rtb_nState);

    /* Switch: '<S404>/Switch' incorporates:
     *  Constant: '<S404>/Constant'
     *  Product: '<S404>/Divide'
     *  RelationalOperator: '<S404>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration1'
     *  Sum: '<S404>/Sum'
     */
    if (cx06_MA_B.s50_SOC > (AssistMinSOC_DataStore())) {
      rtb_nState = 1.0;
    } else {
      rtb_nState = ((cx06_MA_B.s50_SOC - (AssistMinSOC_DataStore())) +
                    (AssistSOCRampWidth_DataStore())) /
        (AssistSOCRampWidth_DataStore());
    }

    /* Product: '<S404>/Product' incorporates:
     *  Saturate: '<S404>/Saturation'
     */
    rtb_nState = rtb_Gain_k * rt_SATURATE(rtb_nState, 0.0, 1.0);

    /* Saturate: '<S378>/Saturation1' */
    cx06_MA_B.root_motor_Torque = rt_SATURATE(rtb_nState, -1.0, 1.0);

    /* S-Function Block: <S378>/motohawk_prelookup_reference */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      cx06_MA_B.s378_motohawk_prelookup_reference = TablePrelookup_real_T
        (cx06_MA_B.s25_Accel, (Diesel_Accel_OrdIdxArr_DataStore()), 11,
         cx06_MA_B.s378_motohawk_prelookup_reference);
    }

    /* S-Function Block: <S378>/motohawk_interpolation_1d_reference */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      cx06_MA_B.root_engine_Torque = TableInterpolation1D_real_T
        (cx06_MA_B.s378_motohawk_prelookup_reference, (real_T *)
         ((Diesel_Accel_MapTbl_DataStore())), 11);
    }
    break;

   case 4:
    /* Constant: '<S385>/Constant' */
    cx06_MA_B.root_motor_Enable = 1.0;

    /* Constant: '<S385>/Constant1' */
    cx06_MA_B.root_engine_Torque = 0.0;

    /* S-Function Block: <S385>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ZEV_Accel_OrdIn_DataStore()) = cx06_MA_B.s25_Accel;
      (ZEV_Accel_OrdIdx_DataStore()) = TablePrelookup_real_T(cx06_MA_B.s25_Accel,
        (ZEV_Accel_OrdIdxArr_DataStore()), 11, (ZEV_Accel_OrdIdx_DataStore()));
      rtb_motohawk_prelookup_g = (ZEV_Accel_OrdIdx_DataStore());
    }

    /* S-Function Block: <S385>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_g, (real_T *) ((ZEV_Accel_MapTbl_DataStore())),
         11);
      (ZEV_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* Switch: '<S410>/Switch' incorporates:
     *  Constant: '<S410>/Constant'
     *  Product: '<S410>/Divide'
     *  RelationalOperator: '<S410>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration1'
     *  Sum: '<S410>/Sum'
     */
    if (cx06_MA_B.s50_SOC > (ZEVMinSOC_DataStore())) {
      rtb_Gain_k = 1.0;
    } else {
      rtb_Gain_k = ((cx06_MA_B.s50_SOC - (ZEVMinSOC_DataStore())) +
                    (ZEVSOCRampWidth_DataStore())) / (ZEVSOCRampWidth_DataStore());
    }

    /* Product: '<S410>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S385>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S385>/motohawk_prelookup'
     *  Saturate: '<S410>/Saturation'
     */
    cx06_MA_B.root_motor_Torque = rtb_motohawk_interpolation_1d_i * rt_SATURATE
      (rtb_Gain_k, 0.0, 1.0);
    break;
  }

  /* Sum: '<S365>/Sum1' incorporates:
   *  Product: '<S365>/Product'
   *  Sum: '<S365>/Sum'
   */
  cx06_MA_B.s365_Sum1 = (rtb_Switch_k + cx06_MA_B.root_motor_Torque) *
    cx06_MA_B.s376_Saturation + cx06_MA_B.s376_Product;

  /* UnitDelay: '<S384>/Unit Delay2' */
  rtb_Gain_k = cx06_MA_DWork.s384_UnitDelay2_DSTATE;

  /* Switch: '<S409>/Switch1' incorporates:
   *  MinMax: '<S384>/MinMax2'
   *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S409>/motohawk_data_read1'
   */
  if (((uint8_T)TCVersion_DataStore()) > 0) {
    rtb_nState = (R_Torque_Allowed_DataStore());
  } else {
    /* Switch: '<S384>/Switch3' incorporates:
     *  Sum: '<S384>/Sum3'
     */
    if (cx06_MA_DWork.s384_UnitDelay2_DSTATE >= 1.0) {
      /* Switch: '<S384>/Switch7' incorporates:
       *  Abs: '<S384>/Abs2'
       *  Constant: '<S384>/Constant1'
       *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read1'
       */
      if (((uint8_T)TC_Rear_Slip_DataStore()) > 0) {
        rtb_Gain_k = fabs(cx06_MA_B.s365_Sum1);
      } else {
        rtb_Gain_k = 1.0;
      }
    } else {
      /* Switch: '<S384>/Switch1' incorporates:
       *  Gain: '<S384>/Gain2'
       *  Gain: '<S384>/Gain3'
       *  Math: '<S384>/Math Function2'
       *  Math: '<S384>/Math Function3'
       *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read1'
       *
       * About '<S384>/Math Function2':
       *  Operator: reciprocal
       *
       * About '<S384>/Math Function3':
       *  Operator: reciprocal
       */
      if (((uint8_T)TC_Rear_Slip_DataStore()) > 0) {
        rtb_nState = 1.0 / (R_rmp_in_rate_DataStore()) * -0.005;
      } else {
        rtb_nState = 1.0 / (R_rmp_out_rate_DataStore()) * 0.005;
      }

      rtb_Gain_k += rtb_nState;
    }

    rtb_nState = rt_MAXd_snf((R_low_bound_DataStore()), rtb_Gain_k);
  }

  /* Saturate: '<S384>/Saturation1' */
  cx06_MA_B.s384_rear_max_torque_aval = rt_SATURATE(rtb_nState, 0.0, 1.0);

  /* RelationalOperator: '<S384>/Relational Operator5' incorporates:
   *  Abs: '<S384>/Abs3'
   */
  rtb_RelationalOperator2 = (cx06_MA_B.s384_rear_max_torque_aval < fabs
    (cx06_MA_B.s365_Sum1));

  /* Switch: '<S384>/Switch5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read2'
   */
  if (((uint8_T)inhibitTC_DataStore()) >= 1) {
    rtb_nState = cx06_MA_B.s365_Sum1;
  } else {
    /* Switch: '<S384>/Switch8' incorporates:
     *  Product: '<S384>/Product'
     *  Signum: '<S384>/Sign'
     */
    if (rtb_RelationalOperator2 > 0) {
      rtb_nState = cx06_MA_B.s384_rear_max_torque_aval * rt_SIGNd_snf
        (cx06_MA_B.s365_Sum1);
    } else {
      rtb_nState = cx06_MA_B.s365_Sum1;
    }
  }

  /* Saturate: '<S365>/Saturation' */
  cx06_MA_B.s365_motor_torque = rt_SATURATE(rtb_nState, -1.0, 1.0);

  /* DataTypeConversion: '<S365>/Data Type Conversion3' */
  if (rtIsNaN(cx06_MA_B.root_motor_Enable) || rtIsInf
      (cx06_MA_B.root_motor_Enable)) {
    rtb_Gain_k = 0.0;
  } else {
    rtb_Gain_k = fmod(floor(cx06_MA_B.root_motor_Enable), 256.0);
  }

  cx06_MA_B.s365_motor_Enable = (uint8_T)(rtb_Gain_k < 0.0 ? (int32_T)(uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-rtb_Gain_k))) : (int32_T)(uint8_T)rtb_Gain_k);

  /* RelationalOperator: '<S382>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S382>/motohawk_calibration3'
   */
  rtb_RelationalOperator1_o = ((Speed_Threshold_DataStore()) <
    cx06_MA_B.s49_Divide);

  /* UnitDelay: '<S384>/Unit Delay1' */
  rtb_Gain_k = cx06_MA_DWork.s384_UnitDelay1_DSTATE;

  /* Switch: '<S409>/Switch' incorporates:
   *  MinMax: '<S384>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_data_read): '<S409>/motohawk_data_read1'
   */
  if (((uint8_T)TCVersion_DataStore()) > 0) {
    rtb_nState = (F_Torque_Allowed_DataStore());
  } else {
    /* Switch: '<S384>/Switch2' incorporates:
     *  Sum: '<S384>/Sum2'
     */
    if (rtb_Gain_k >= 1.0) {
      /* Switch: '<S384>/Switch6' incorporates:
       *  Constant: '<S384>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read'
       */
      if (((uint8_T)TC_Front_Slip_DataStore()) > 0) {
        rtb_Gain_k = cx06_MA_B.root_engine_Torque;
      } else {
        rtb_Gain_k = 1.0;
      }
    } else {
      /* Switch: '<S384>/Switch' incorporates:
       *  Gain: '<S384>/Gain'
       *  Gain: '<S384>/Gain1'
       *  Math: '<S384>/Math Function'
       *  Math: '<S384>/Math Function1'
       *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read'
       *
       * About '<S384>/Math Function':
       *  Operator: reciprocal
       *
       * About '<S384>/Math Function1':
       *  Operator: reciprocal
       */
      if (((uint8_T)TC_Front_Slip_DataStore()) > 0) {
        rtb_nState = 1.0 / (F_rmp_in_rate_DataStore()) * -0.005;
      } else {
        rtb_nState = 1.0 / (F_rmp_out_rate_DataStore()) * 0.005;
      }

      rtb_Gain_k += rtb_nState;
    }

    rtb_nState = rt_MAXd_snf(rtb_Gain_k, (F_low_bound_DataStore()));
  }

  /* Saturate: '<S384>/Saturation2' */
  cx06_MA_B.s384_Saturation2 = rt_SATURATE(rtb_nState, 0.0, 1.0);

  /* Switch: '<S384>/Switch4' incorporates:
   *  MinMax: '<S384>/MinMax'
   *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read2'
   */
  if (((uint8_T)inhibitTC_DataStore()) >= 1) {
    min = cx06_MA_B.root_engine_Torque;
  } else {
    min = rt_MINd_snf(cx06_MA_B.root_engine_Torque, cx06_MA_B.s384_Saturation2);
  }

  /* Switch: '<S382>/Switch2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S382>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S382>/motohawk_calibration4'
   */
  if (rtb_RelationalOperator1_o >= 1) {
    rtb_nState = (Clutch_Thres_Shifts_DataStore());
  } else {
    rtb_nState = (Clutch_Thres_Take_Off_DataStore());
  }

  /* RelationalOperator: '<S382>/Relational Operator' */
  rtb_RelationalOperator1_kg = ((real_T)cx06_MA_B.s27_Clutch > rtb_nState);

  /* Switch: '<S382>/Switch' incorporates:
   *  MinMax: '<S382>/MinMax'
   */
  if (rtb_RelationalOperator1_kg >= 1) {
    /* Switch: '<S382>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S382>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S382>/motohawk_calibration2'
     */
    if (rtb_RelationalOperator1_o >= 1) {
      rtb_Gain_k = (Eng_Torq_Shifts_DataStore());
    } else {
      rtb_Gain_k = (Eng_Torq_Take_Off_DataStore());
    }

    rtb_nState = rt_MINd_snf(rtb_Gain_k, min);
  } else {
    rtb_nState = min;
  }

  /* Saturate: '<S365>/Saturation1' */
  cx06_MA_B.s365_engine_Torque = rt_SATURATE(rtb_nState, 0.0, 1.0);

  /* RelationalOperator: '<S377>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((Clutch_Mech_Engage_in_ESS_DataStore()) < (real_T)
    cx06_MA_B.s27_Clutch);

  /* Stateflow: '<S377>/Engine_Running' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration2'
   */
  /* Gateway: Strategy/Hybrid Control Code/Engine Start-Stop/Engine_Running */
  /* During: Strategy/Hybrid Control Code/Engine Start-Stop/Engine_Running */
  if (cx06_MA_DWork.s398_is_active_c17_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/Engine Start-Stop/Engine_Running */
    cx06_MA_DWork.s398_is_active_c17_cx06_MA = 1U;

    /* Transition: '<S398>:3' */
    /* Entry 'NotRunning': '<S398>:1' */
    cx06_MA_DWork.s398_is_c17_cx06_MA = cx06_MA_IN_NotRunning;
    cx06_MA_B.s398_running = 0U;
  } else {
    switch (cx06_MA_DWork.s398_is_c17_cx06_MA) {
     case cx06_MA_IN_NotRunning:
      /* During 'NotRunning': '<S398>:1' */
      if (cx06_MA_B.s12_Eng_Spd > (Engine_Start_RPM_DataStore())) {
        /* Transition: '<S398>:5' */
        /* Exit 'NotRunning': '<S398>:1' */
        /* Entry 'Running': '<S398>:2' */
        cx06_MA_DWork.s398_is_c17_cx06_MA = cx06_MA_IN_Running;
        cx06_MA_B.s398_running = 1U;
      }
      break;

     case cx06_MA_IN_Running:
      /* During 'Running': '<S398>:2' */
      if (cx06_MA_B.s12_Eng_Spd < (Engine_Stop_RPM_DataStore())) {
        /* Transition: '<S398>:4' */
        /* Exit 'Running': '<S398>:2' */
        /* Entry 'NotRunning': '<S398>:1' */
        cx06_MA_DWork.s398_is_c17_cx06_MA = cx06_MA_IN_NotRunning;
        cx06_MA_B.s398_running = 0U;
      }
      break;

     default:
      /* Transition: '<S398>:3' */
      /* Entry 'NotRunning': '<S398>:1' */
      cx06_MA_DWork.s398_is_c17_cx06_MA = cx06_MA_IN_NotRunning;
      cx06_MA_B.s398_running = 0U;
      break;
    }
  }

  /* Stateflow: '<S400>/EngineSS_StateMachine' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration8'
   */
  /* Gateway: Strategy/Hybrid Control Code/Engine Start-Stop/Old_Alg/EngineSS_StateMachine */
  /* During: Strategy/Hybrid Control Code/Engine Start-Stop/Old_Alg/EngineSS_StateMachine */
  if (cx06_MA_DWork.s402_is_active_c18_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/Engine Start-Stop/Old_Alg/EngineSS_StateMachine */
    cx06_MA_DWork.s402_is_active_c18_cx06_MA = 1U;

    /* Transition: '<S402>:8' */
    /* Entry 'Idle': '<S402>:1' */
    cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
    cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral == 1)
      * cx06_MA_B.s402_StartRetry_Cnt;
  } else {
    switch (cx06_MA_DWork.s402_is_c18_cx06_MA) {
     case cx06_MA_IN_Idle_m:
      /* During 'Idle': '<S402>:1' */
      if ((cx06_MA_B.s398_running == 0) && ((int32_T)cx06_MA_B.s22_Neutral == 0)
          && ((int32_T)rtb_RelationalOperator_f == 1)) {
        /* Transition: '<S402>:12' */
        /* Exit 'Idle': '<S402>:1' */
        /* Entry 'StartDelay': '<S402>:4' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_StartDelay_m;
        cx06_MA_B.s402_StartDelay_Cnt = 0.0;
      } else if ((cx06_MA_B.s398_running == 1) && ((int32_T)
                  cx06_MA_B.s22_Neutral == 1)) {
        /* Transition: '<S402>:7' */
        /* Exit 'Idle': '<S402>:1' */
        /* Entry 'KillDelay': '<S402>:2' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_KillDelay_m;
        cx06_MA_B.s402_KillDelay_Cnt = 0.0;
        cx06_MA_B.s402_StartRetry_Cnt = 0.0;
      } else {
        cx06_MA_B.s402_ESS_State = 0U;
      }
      break;

     case cx06_MA_IN_Kill_m:
      /* During 'Kill': '<S402>:3' */
      if (cx06_MA_B.s402_Kill_Cnt > (real_T)((uint16_T)(Kill_Time_DataStore())))
      {
        /* Transition: '<S402>:11' */
        /* Exit 'Kill': '<S402>:3' */
        cx06_MA_B.s402_kill = 0.0;

        /* Entry 'Idle': '<S402>:1' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
        cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s402_StartRetry_Cnt;
      } else {
        cx06_MA_B.s402_Kill_Cnt = cx06_MA_B.s402_Kill_Cnt + 1.0;
        cx06_MA_B.s402_ESS_State = 5U;
      }
      break;

     case cx06_MA_IN_KillDelay_m:
      /* During 'KillDelay': '<S402>:2' */
      if ((cx06_MA_B.s398_running == 0) || ((int32_T)cx06_MA_B.s22_Neutral == 0))
      {
        /* Transition: '<S402>:10' */
        /* Exit 'KillDelay': '<S402>:2' */
        /* Entry 'Idle': '<S402>:1' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
        cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s402_StartRetry_Cnt;
      } else if (cx06_MA_B.s402_KillDelay_Cnt > (real_T)((uint16_T)
                  (KillDelay_DataStore()))) {
        /* Transition: '<S402>:9' */
        /* Exit 'KillDelay': '<S402>:2' */
        /* Entry 'Kill': '<S402>:3' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Kill_m;
        cx06_MA_B.s402_kill = 1.0;
        cx06_MA_B.s402_Kill_Cnt = 0.0;
      } else {
        cx06_MA_B.s402_KillDelay_Cnt = cx06_MA_B.s402_KillDelay_Cnt + 1.0;
        cx06_MA_B.s402_ESS_State = 4U;
      }
      break;

     case cx06_MA_IN_Start_m:
      /* During 'Start': '<S402>:5' */
      if (cx06_MA_B.s398_running == 1) {
        /* Transition: '<S402>:17' */
        /* Exit 'Start': '<S402>:5' */
        cx06_MA_B.s402_start = 0.0;

        /* Entry 'Idle': '<S402>:1' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
        cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s402_StartRetry_Cnt;
      } else if (cx06_MA_B.s402_Start_Cnt > (real_T)((uint16_T)
                  (Start_Time_DataStore()))) {
        /* Transition: '<S402>:15' */
        /* Exit 'Start': '<S402>:5' */
        cx06_MA_B.s402_start = 0.0;

        /* Entry 'StartRetry': '<S402>:6' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_StartRetry_m;
        cx06_MA_B.s402_StartRetry_Cnt = cx06_MA_B.s402_StartRetry_Cnt + 1.0;
        cx06_MA_B.s402_StartRetryDelay_Cnt = 0.0;
      } else {
        cx06_MA_B.s402_Start_Cnt = cx06_MA_B.s402_Start_Cnt + 1.0;
        cx06_MA_B.s402_ESS_State = 2U;
      }
      break;

     case cx06_MA_IN_StartDelay_m:
      /* During 'StartDelay': '<S402>:4' */
      if ((cx06_MA_B.s398_running == 1) || ((int32_T)cx06_MA_B.s22_Neutral == 1)
          || ((int32_T)rtb_RelationalOperator_f == 0)) {
        /* Transition: '<S402>:13' */
        /* Exit 'StartDelay': '<S402>:4' */
        /* Entry 'Idle': '<S402>:1' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
        cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s402_StartRetry_Cnt;
      } else if (cx06_MA_B.s402_StartDelay_Cnt > (real_T)((uint16_T)
                  (Start_Delay_DataStore()))) {
        /* Transition: '<S402>:14' */
        /* Exit 'StartDelay': '<S402>:4' */
        /* Entry 'Start': '<S402>:5' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Start_m;
        cx06_MA_B.s402_start = 1.0;
        cx06_MA_B.s402_Start_Cnt = 0.0;
      } else {
        cx06_MA_B.s402_StartDelay_Cnt = cx06_MA_B.s402_StartDelay_Cnt + 1.0;
        cx06_MA_B.s402_ESS_State = 1U;
      }
      break;

     case cx06_MA_IN_StartRetry_m:
      /* During 'StartRetry': '<S402>:6' */
      if (((cx06_MA_B.s402_StartRetryDelay_Cnt > (real_T)((uint16_T)
             (StartRetry_Delay_DataStore()))) && (cx06_MA_B.s402_StartRetry_Cnt <
            (Max_StartRetry_DataStore()))) || ((int32_T)cx06_MA_B.s22_Neutral ==
           1)) {
        /* Transition: '<S402>:16' */
        /* Exit 'StartRetry': '<S402>:6' */
        /* Entry 'Idle': '<S402>:1' */
        cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
        cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s402_StartRetry_Cnt;
      } else {
        cx06_MA_B.s402_StartRetryDelay_Cnt = cx06_MA_B.s402_StartRetryDelay_Cnt
          + 1.0;
        cx06_MA_B.s402_ESS_State = 3U;
      }
      break;

     default:
      /* Transition: '<S402>:8' */
      /* Entry 'Idle': '<S402>:1' */
      cx06_MA_DWork.s402_is_c18_cx06_MA = cx06_MA_IN_Idle_m;
      cx06_MA_B.s402_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
        1) * cx06_MA_B.s402_StartRetry_Cnt;
      break;
    }
  }

  /* Stateflow: '<S399>/EngineSS_StateMachine1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration8'
   */
  /* Gateway: Strategy/Hybrid Control Code/Engine Start-Stop/New_Alg/EngineSS_StateMachine1 */
  /* During: Strategy/Hybrid Control Code/Engine Start-Stop/New_Alg/EngineSS_StateMachine1 */
  if (cx06_MA_DWork.s401_is_active_c20_cx06_MA == 0) {
    /* Entry: Strategy/Hybrid Control Code/Engine Start-Stop/New_Alg/EngineSS_StateMachine1 */
    cx06_MA_DWork.s401_is_active_c20_cx06_MA = 1U;

    /* Transition: '<S401>:9' */
    /* Entry 'Idle': '<S401>:1' */
    cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
    cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral == 1)
      * cx06_MA_B.s401_StartRetry_Cnt;
  } else {
    switch (cx06_MA_DWork.s401_is_c20_cx06_MA) {
     case cx06_MA_IN_FalseStart:
      /* During 'FalseStart': '<S401>:7' */
      if (((int32_T)cx06_MA_B.s22_Neutral == 0) || (cx06_MA_B.s398_running == 0))
      {
        /* Transition: '<S401>:19' */
        /* Exit 'FalseStart': '<S401>:7' */
        /* Entry 'Idle': '<S401>:1' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
        cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s401_StartRetry_Cnt;
      } else {
        cx06_MA_B.s401_ESS_State = 6U;
      }
      break;

     case cx06_MA_IN_Idle:
      /* During 'Idle': '<S401>:1' */
      if ((cx06_MA_B.s398_running == 0) && ((int32_T)rtb_RelationalOperator_f ==
           1)) {
        /* Transition: '<S401>:13' */
        /* Exit 'Idle': '<S401>:1' */
        /* Entry 'StartDelay': '<S401>:4' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_StartDelay;
        cx06_MA_B.s401_StartDelay_Cnt = 0.0;
      } else if ((cx06_MA_B.s398_running == 1) && ((int32_T)
                  cx06_MA_B.s22_Neutral == 1) && ((int32_T)
                  rtb_RelationalOperator_f == 0)) {
        /* Transition: '<S401>:8' */
        /* Exit 'Idle': '<S401>:1' */
        /* Entry 'KillDelay': '<S401>:2' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_KillDelay;
        cx06_MA_B.s401_KillDelay_Cnt = 0.0;
        cx06_MA_B.s401_StartRetry_Cnt = 0.0;
      } else {
        cx06_MA_B.s401_ESS_State = 0U;
      }
      break;

     case cx06_MA_IN_Kill:
      /* During 'Kill': '<S401>:3' */
      if (cx06_MA_B.s401_Kill_Cnt > (real_T)((uint16_T)(Kill_Time_DataStore())))
      {
        /* Transition: '<S401>:12' */
        /* Exit 'Kill': '<S401>:3' */
        cx06_MA_B.s401_kill = 0.0;

        /* Entry 'Idle': '<S401>:1' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
        cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s401_StartRetry_Cnt;
      } else {
        cx06_MA_B.s401_Kill_Cnt = cx06_MA_B.s401_Kill_Cnt + 1.0;
        cx06_MA_B.s401_ESS_State = 5U;
      }
      break;

     case cx06_MA_IN_KillDelay:
      /* During 'KillDelay': '<S401>:2' */
      if ((cx06_MA_B.s398_running == 0) || ((int32_T)cx06_MA_B.s22_Neutral == 0))
      {
        /* Transition: '<S401>:11' */
        /* Exit 'KillDelay': '<S401>:2' */
        /* Entry 'Idle': '<S401>:1' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
        cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s401_StartRetry_Cnt;
      } else if (cx06_MA_B.s401_KillDelay_Cnt > (real_T)((uint16_T)
                  (KillDelay_DataStore()))) {
        /* Transition: '<S401>:10' */
        /* Exit 'KillDelay': '<S401>:2' */
        /* Entry 'Kill': '<S401>:3' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Kill;
        cx06_MA_B.s401_kill = 1.0;
        cx06_MA_B.s401_Kill_Cnt = 0.0;
      } else {
        cx06_MA_B.s401_KillDelay_Cnt = cx06_MA_B.s401_KillDelay_Cnt + 1.0;
        cx06_MA_B.s401_ESS_State = 4U;
      }
      break;

     case cx06_MA_IN_Start:
      /* During 'Start': '<S401>:5' */
      if (cx06_MA_B.s401_Start_Cnt > (real_T)((uint16_T)(Start_Time_DataStore())))
      {
        /* Transition: '<S401>:16' */
        /* Exit 'Start': '<S401>:5' */
        cx06_MA_B.s401_start = 0.0;

        /* Entry 'StartRetry': '<S401>:6' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_StartRetry;
        cx06_MA_B.s401_StartRetry_Cnt = cx06_MA_B.s401_StartRetry_Cnt + 1.0;
        cx06_MA_B.s401_StartRetryDelay_Cnt = 0.0;
      } else if (cx06_MA_B.s398_running == 1) {
        /* Transition: '<S401>:18' */
        /* Exit 'Start': '<S401>:5' */
        cx06_MA_B.s401_start = 0.0;

        /* Entry 'FalseStart': '<S401>:7' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_FalseStart;
      } else {
        cx06_MA_B.s401_Start_Cnt = cx06_MA_B.s401_Start_Cnt + 1.0;
        cx06_MA_B.s401_ESS_State = 2U;
      }
      break;

     case cx06_MA_IN_StartDelay:
      /* During 'StartDelay': '<S401>:4' */
      if ((cx06_MA_B.s398_running == 1) || ((int32_T)rtb_RelationalOperator_f ==
           0)) {
        /* Transition: '<S401>:14' */
        /* Exit 'StartDelay': '<S401>:4' */
        /* Entry 'Idle': '<S401>:1' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
        cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s401_StartRetry_Cnt;
      } else if (cx06_MA_B.s401_StartDelay_Cnt > (real_T)((uint16_T)
                  (Start_Delay_DataStore()))) {
        /* Transition: '<S401>:15' */
        /* Exit 'StartDelay': '<S401>:4' */
        /* Entry 'Start': '<S401>:5' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Start;
        cx06_MA_B.s401_start = 1.0;
        cx06_MA_B.s401_Start_Cnt = 0.0;
      } else {
        cx06_MA_B.s401_StartDelay_Cnt = cx06_MA_B.s401_StartDelay_Cnt + 1.0;
        cx06_MA_B.s401_ESS_State = 1U;
      }
      break;

     case cx06_MA_IN_StartRetry:
      /* During 'StartRetry': '<S401>:6' */
      if (((cx06_MA_B.s401_StartRetryDelay_Cnt > (real_T)((uint16_T)
             (StartRetry_Delay_DataStore()))) && (cx06_MA_B.s401_StartRetry_Cnt <
            (Max_StartRetry_DataStore()))) || ((int32_T)cx06_MA_B.s22_Neutral ==
           1)) {
        /* Transition: '<S401>:17' */
        /* Exit 'StartRetry': '<S401>:6' */
        /* Entry 'Idle': '<S401>:1' */
        cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
        cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
          1) * cx06_MA_B.s401_StartRetry_Cnt;
      } else {
        cx06_MA_B.s401_StartRetryDelay_Cnt = cx06_MA_B.s401_StartRetryDelay_Cnt
          + 1.0;
        cx06_MA_B.s401_ESS_State = 3U;
      }
      break;

     default:
      /* Transition: '<S401>:9' */
      /* Entry 'Idle': '<S401>:1' */
      cx06_MA_DWork.s401_is_c20_cx06_MA = cx06_MA_IN_Idle;
      cx06_MA_B.s401_StartRetry_Cnt = (real_T)((int32_T)cx06_MA_B.s22_Neutral ==
        1) * cx06_MA_B.s401_StartRetry_Cnt;
      break;
    }
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    rtb_nState = cx06_MA_B.s402_kill;
  } else {
    rtb_nState = cx06_MA_B.s401_kill;
  }

  /* DataTypeConversion: '<S365>/Data Type Conversion1' */
  if (rtIsNaN(rtb_nState) || rtIsInf(rtb_nState)) {
    rtb_Gain_k = 0.0;
  } else {
    rtb_Gain_k = fmod(floor(rtb_nState), 256.0);
  }

  cx06_MA_B.s365_engine_kill = (uint8_T)(rtb_Gain_k < 0.0 ? (int32_T)(uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-rtb_Gain_k))) : (int32_T)(uint8_T)rtb_Gain_k);

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    rtb_nState = cx06_MA_B.s402_start;
  } else {
    rtb_nState = cx06_MA_B.s401_start;
  }

  /* Logic: '<S377>/Logical Operator3' */
  rtb_RelationalOperator_f = !cx06_MA_B.s12_Glow_Plug;

  /* DataTypeConversion: '<S365>/Data Type Conversion2' incorporates:
   *  Logic: '<S377>/Logical Operator'
   *  Logic: '<S377>/Logical Operator1'
   *  Logic: '<S377>/Logical Operator2'
   *  S-Function (motohawk_sfun_fault_action): '<S377>/motohawk_fault_action'
   */
  cx06_MA_B.s365_engine_start = ((rtb_nState != 0.0) && ((!GetFaultActionStatus
    (7)) && rtb_RelationalOperator_f));

  /* DataTypeConversion: '<S375>/Data1' */
  rtb_RelationalOperator1_kg = rtb_RelationalOperator2_k;

  /* S-Function (motohawk_sfun_data_write): '<S375>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TC_Front_Slip */
  {
    TC_Front_Slip_DataStore() = rtb_RelationalOperator1_kg;
  }

  /* Logic: '<S375>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S375>/motohawk_data_read1'
   */
  cx06_MA_B.s375_LogicalOperator3 = ((((uint8_T)TCVersion_DataStore()) != 0) ||
                                     (cx06_MA_B.s375_Merge1 != 0));

  /* Logic: '<S375>/Logical Operator4' */
  rtb_LogicalOperator4 = (rtb_LogicalOperator4 &&
    cx06_MA_B.s375_LogicalOperator3);

  /* DataTypeConversion: '<S375>/Data2' */
  rtb_RelationalOperator1_kg = rtb_LogicalOperator4;

  /* S-Function (motohawk_sfun_data_write): '<S375>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: TC_Rear_Slip */
  {
    TC_Rear_Slip_DataStore() = rtb_RelationalOperator1_kg;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_KillDelay_Cnt = cx06_MA_B.s402_KillDelay_Cnt;
  } else {
    cx06_MA_B.root_KillDelay_Cnt = cx06_MA_B.s401_KillDelay_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_Kill_Cnt = cx06_MA_B.s402_Kill_Cnt;
  } else {
    cx06_MA_B.root_Kill_Cnt = cx06_MA_B.s401_Kill_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_StartDelay_Cnt = cx06_MA_B.s402_StartDelay_Cnt;
  } else {
    cx06_MA_B.root_StartDelay_Cnt = cx06_MA_B.s401_StartDelay_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_StartRetryDelay_Cnt = cx06_MA_B.s402_StartRetryDelay_Cnt;
  } else {
    cx06_MA_B.root_StartRetryDelay_Cnt = cx06_MA_B.s401_StartRetryDelay_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_StartRetry_Cnt = cx06_MA_B.s402_StartRetry_Cnt;
  } else {
    cx06_MA_B.root_StartRetry_Cnt = cx06_MA_B.s401_StartRetry_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_Start_Cnt = cx06_MA_B.s402_Start_Cnt;
  } else {
    cx06_MA_B.root_Start_Cnt = cx06_MA_B.s401_Start_Cnt;
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  if (((int8_T)(EngineStopStartAlg_DataStore())) >= 1) {
    cx06_MA_B.root_ESS_State = cx06_MA_B.s402_ESS_State;
  } else {
    cx06_MA_B.root_ESS_State = cx06_MA_B.s401_ESS_State;
  }

  /* RelationalOperator: '<S397>/Compare' incorporates:
   *  Constant: '<S397>/Constant'
   */
  rtb_RelationalOperator3 = (cx06_MA_B.root_ESS_State == 4);

  /* Logic: '<S377>/Logical Operator4' */
  cx06_MA_B.s377_Glow_plug_inhibit = ((rtb_nState != 0.0) &&
    rtb_RelationalOperator_f);

  /* Logic: '<S384>/Logical Operator1' incorporates:
   *  Logic: '<S384>/Logical Operator'
   *  Logic: '<S384>/Logical Operator2'
   *  RelationalOperator: '<S384>/Relational Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read2'
   */
  cx06_MA_B.s384_TC_Active = (((cx06_MA_B.s384_Saturation2 <
    cx06_MA_B.root_engine_Torque) || (rtb_RelationalOperator2 != 0)) &&
    (!(((uint8_T)inhibitTC_DataStore()) != 0)));

  /* S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read3' */
  cx06_MA_B.s384_front_slip = TC_Front_Slip_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read4' */
  cx06_MA_B.s384_rear_slip = TC_Rear_Slip_DataStore();

  /* UnitDelay: '<S6>/Unit Delay' */
  rtb_RelationalOperator1_o = cx06_MA_DWork.s6_UnitDelay_DSTATE;

  /* Gain: '<S366>/Gain' incorporates:
   *  Product: '<S366>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration7'
   *  Sum: '<S366>/Sum1'
   */
  cx06_MA_B.s366_Gain = (real_T)(uint16_T)(uint32_T)(cx06_MA_B.s16_NOxPre_NOx +
    ((uint16_T)(NOx_Offset_DataStore()))) * cx06_MA_B.s21_MAF * 1.0E-006;

  /* S-Function Block: <S366>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Urea_Accel_OrdIn_DataStore()) = cx06_MA_B.s25_Accel;
    (Urea_Accel_OrdIdx_DataStore()) = TablePrelookup_real_T(cx06_MA_B.s25_Accel,
      (Urea_Accel_OrdIdxArr_DataStore()), 10, (Urea_Accel_OrdIdx_DataStore()));
    rtb_motohawk_prelookup1_c = (Urea_Accel_OrdIdx_DataStore());
  }

  /* S-Function Block: <S366>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((Urea_Accel_TblTbl_DataStore())),
       10);
    (Urea_Accel_Tbl_DataStore()) = rtb_motohawk_interpolation_1d1;
  }

  /* Sum: '<S366>/Sum' incorporates:
   *  Gain: '<S366>/Gain1'
   *  Product: '<S366>/Product4'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S366>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S366>/motohawk_prelookup1'
   */
  cx06_MA_B.s366_Sum = rtb_motohawk_interpolation_1d1 *
    (UreaAccel_Mult_DataStore()) + 3.0 * cx06_MA_B.s366_Gain;

  /* Logic: '<S417>/Logical Operator' incorporates:
   *  Constant: '<S421>/Constant'
   *  RelationalOperator: '<S421>/Compare'
   *  S-Function (motohawk_sfun_fault_action): '<S417>/motohawk_fault_action'
   */
  rtb_RelationalOperator_f = (GetFaultActionStatus(1) ||
    ((cx06_MA_B.s16_NoxMid_ECM_Er_Code != 0) != 0));

  /* Stateflow: '<S417>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration5'
   */
  /* Gateway: Strategy/Urea Control Code/LeanRich/Chart */
  /* During: Strategy/Urea Control Code/LeanRich/Chart */
  if (cx06_MA_DWork.s420_is_active_c13_cx06_MA == 0) {
    /* Entry: Strategy/Urea Control Code/LeanRich/Chart */
    cx06_MA_DWork.s420_is_active_c13_cx06_MA = 1U;

    /* Transition: '<S420>:7' */
    /* Entry 'Neutral': '<S420>:1' */
    cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
    cx06_MA_B.s420_Ammonia = MAX_uint8_T;
    cx06_MA_B.s420_mult = 1.0;
    cx06_MA_B.s420_State = 1U;
  } else {
    switch (cx06_MA_DWork.s420_is_c13_cx06_MA) {
     case cx06_MA_IN_Error:
      /* During 'Error': '<S420>:6' */
      if ((int32_T)rtb_RelationalOperator_f == 0) {
        /* Transition: '<S420>:25' */
        /* Exit 'Error': '<S420>:6' */
        /* Entry 'Neutral': '<S420>:1' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 1U;
      }
      break;

     case cx06_MA_IN_Lean:
      /* During 'Lean': '<S420>:2' */
      if ((int32_T)rtb_RelationalOperator_f == 1) {
        /* Transition: '<S420>:20' */
        /* Exit 'Lean': '<S420>:2' */
        /* Entry 'Error': '<S420>:6' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Error;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 6U;
      } else if (cx06_MA_B.s16_NOxMid_NOx < (NOxThres_DataStore())) {
        /* Transition: '<S420>:9' */
        /* Exit 'Lean': '<S420>:2' */
        /* Entry 'Lean2Rich': '<S420>:3' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Lean2Rich;
        cx06_MA_B.s420_Ammonia = 0U;
        cx06_MA_B.s420_LeanCnt = 0U;
        cx06_MA_B.s420_State = 3U;
      } else {
        if (cx06_MA_B.s16_Temp_1 < (AmmoniaMinTemp_DataStore())) {
          /* Transition: '<S420>:10' */
          /* Exit 'Lean': '<S420>:2' */
          /* Entry 'Neutral': '<S420>:1' */
          cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
          cx06_MA_B.s420_Ammonia = MAX_uint8_T;
          cx06_MA_B.s420_mult = 1.0;
          cx06_MA_B.s420_State = 1U;
        }
      }
      break;

     case cx06_MA_IN_Lean2Rich:
      /* During 'Lean2Rich': '<S420>:3' */
      if (cx06_MA_B.s16_NOxMid_NOx > (NOxThres_DataStore())) {
        /* Transition: '<S420>:11' */
        /* Exit 'Lean2Rich': '<S420>:3' */
        /* Entry 'Lean': '<S420>:2' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Lean;
        cx06_MA_B.s420_Ammonia = 1U;
        cx06_MA_B.s420_mult = (LeanMult_DataStore());
        cx06_MA_B.s420_State = 2U;
      } else if ((int32_T)rtb_RelationalOperator_f == 1) {
        /* Transition: '<S420>:21' */
        /* Exit 'Lean2Rich': '<S420>:3' */
        /* Entry 'Error': '<S420>:6' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Error;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 6U;
      } else if ((real_T)cx06_MA_B.s420_LeanCnt > (LeanTime_DataStore())) {
        /* Transition: '<S420>:17' */
        /* Exit 'Lean2Rich': '<S420>:3' */
        /* Entry 'Rich2Lean': '<S420>:4' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Rich2Lean;
        cx06_MA_B.s420_Ammonia = 1U;
        cx06_MA_B.s420_RichCnt = 0U;
        cx06_MA_B.s420_State = 4U;
      } else if (cx06_MA_B.s16_Temp_1 < (AmmoniaMinTemp_DataStore())) {
        /* Transition: '<S420>:18' */
        /* Exit 'Lean2Rich': '<S420>:3' */
        /* Entry 'Neutral': '<S420>:1' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 1U;
      } else {
        cx06_MA_B.s420_LeanCnt = (uint16_T)(cx06_MA_B.s420_LeanCnt + 1);
      }
      break;

     case cx06_MA_IN_Neutral:
      /* During 'Neutral': '<S420>:1' */
      if ((cx06_MA_B.s16_Temp_1 > (AmmoniaMinTemp_DataStore())) &&
          (cx06_MA_B.s16_NOxMid_NOx > (NOxThres_DataStore()))) {
        /* Transition: '<S420>:8' */
        /* Exit 'Neutral': '<S420>:1' */
        /* Entry 'Lean': '<S420>:2' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Lean;
        cx06_MA_B.s420_Ammonia = 1U;
        cx06_MA_B.s420_mult = (LeanMult_DataStore());
        cx06_MA_B.s420_State = 2U;
      } else if ((int32_T)rtb_RelationalOperator_f == 1) {
        /* Transition: '<S420>:24' */
        /* Exit 'Neutral': '<S420>:1' */
        /* Entry 'Error': '<S420>:6' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Error;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 6U;
      } else {
        if ((cx06_MA_B.s16_Temp_1 > (AmmoniaMinTemp_DataStore())) &&
            (cx06_MA_B.s16_NOxMid_NOx < (NOxThres_DataStore()))) {
          /* Transition: '<S420>:12' */
          /* Exit 'Neutral': '<S420>:1' */
          /* Entry 'Rich': '<S420>:5' */
          cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Rich;
          cx06_MA_B.s420_Ammonia = 0U;
          cx06_MA_B.s420_State = 5U;
          cx06_MA_B.s420_mult = (RichMult_DataStore());
        }
      }
      break;

     case cx06_MA_IN_Rich:
      /* During 'Rich': '<S420>:5' */
      if (cx06_MA_B.s16_Temp_1 < (AmmoniaMinTemp_DataStore())) {
        /* Transition: '<S420>:13' */
        /* Exit 'Rich': '<S420>:5' */
        /* Entry 'Neutral': '<S420>:1' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 1U;
      } else if (cx06_MA_B.s16_NOxMid_NOx > (NOxThres_DataStore())) {
        /* Transition: '<S420>:14' */
        /* Exit 'Rich': '<S420>:5' */
        /* Entry 'Rich2Lean': '<S420>:4' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Rich2Lean;
        cx06_MA_B.s420_Ammonia = 1U;
        cx06_MA_B.s420_RichCnt = 0U;
        cx06_MA_B.s420_State = 4U;
      } else {
        if ((int32_T)rtb_RelationalOperator_f == 1) {
          /* Transition: '<S420>:23' */
          /* Exit 'Rich': '<S420>:5' */
          /* Entry 'Error': '<S420>:6' */
          cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Error;
          cx06_MA_B.s420_Ammonia = MAX_uint8_T;
          cx06_MA_B.s420_mult = 1.0;
          cx06_MA_B.s420_State = 6U;
        }
      }
      break;

     case cx06_MA_IN_Rich2Lean:
      /* During 'Rich2Lean': '<S420>:4' */
      if ((real_T)cx06_MA_B.s420_RichCnt > (RichTime_DataStore())) {
        /* Transition: '<S420>:16' */
        /* Exit 'Rich2Lean': '<S420>:4' */
        /* Entry 'Lean2Rich': '<S420>:3' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Lean2Rich;
        cx06_MA_B.s420_Ammonia = 0U;
        cx06_MA_B.s420_LeanCnt = 0U;
        cx06_MA_B.s420_State = 3U;
      } else if ((int32_T)rtb_RelationalOperator_f == 1) {
        /* Transition: '<S420>:22' */
        /* Exit 'Rich2Lean': '<S420>:4' */
        /* Entry 'Error': '<S420>:6' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Error;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 6U;
      } else if (cx06_MA_B.s16_NOxMid_NOx < (NOxThres_DataStore())) {
        /* Transition: '<S420>:15' */
        /* Exit 'Rich2Lean': '<S420>:4' */
        /* Entry 'Rich': '<S420>:5' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Rich;
        cx06_MA_B.s420_Ammonia = 0U;
        cx06_MA_B.s420_State = 5U;
        cx06_MA_B.s420_mult = (RichMult_DataStore());
      } else if (cx06_MA_B.s16_Temp_1 < (AmmoniaMinTemp_DataStore())) {
        /* Transition: '<S420>:19' */
        /* Exit 'Rich2Lean': '<S420>:4' */
        /* Entry 'Neutral': '<S420>:1' */
        cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
        cx06_MA_B.s420_Ammonia = MAX_uint8_T;
        cx06_MA_B.s420_mult = 1.0;
        cx06_MA_B.s420_State = 1U;
      } else {
        cx06_MA_B.s420_RichCnt = (uint16_T)(cx06_MA_B.s420_RichCnt + 1);
      }
      break;

     default:
      /* Transition: '<S420>:7' */
      /* Entry 'Neutral': '<S420>:1' */
      cx06_MA_DWork.s420_is_c13_cx06_MA = cx06_MA_IN_Neutral;
      cx06_MA_B.s420_Ammonia = MAX_uint8_T;
      cx06_MA_B.s420_mult = 1.0;
      cx06_MA_B.s420_State = 1U;
      break;
    }
  }

  /* Switch: '<S417>/Switch' incorporates:
   *  Constant: '<S417>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration6'
   */
  if (((uint8_T)(LeanRichEnable_DataStore())) != 0) {
    rtb_nState = cx06_MA_B.s420_mult;
  } else {
    rtb_nState = 1.0;
  }

  /* Product: '<S366>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration1'
   */
  cx06_MA_B.s366_Product1 = cx06_MA_B.s366_Sum * (Urea_Dilution_DataStore()) *
    (UreaNOx_Mult_DataStore()) * rtb_nState;

  /* RelationalOperator: '<S366>/Relational Operator1' incorporates:
   *  Constant: '<S366>/Constant'
   */
  rtb_RelationalOperator_f = (cx06_MA_B.s12_Eng_Running_Stat >= 1.0);

  /* Logic: '<S366>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration4'
   */
  rtb_RelationalOperator2_k = (rtb_RelationalOperator_f || (Urea_Purge_DataStore
                                ()));

  /* Logic: '<S366>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   */
  cx06_MA_B.s366_Pump_On = (rtb_RelationalOperator2_k && (Urea_Enable_DataStore()));

  /* Switch: '<S416>/Switch1' incorporates:
   *  Constant: '<S416>/Constant'
   *  Constant: '<S416>/Constant1'
   *  Constant: '<S418>/Constant'
   *  Constant: '<S419>/Constant'
   *  Logic: '<S416>/Logical Operator1'
   *  RelationalOperator: '<S418>/Compare'
   *  RelationalOperator: '<S419>/Compare'
   *  Sum: '<S416>/Sum'
   *  UnitDelay: '<S416>/Unit Delay'
   */
  if (((int32_T)rtb_RelationalOperator_f != 0) && ((rtb_RelationalOperator1_o ==
        1) != 0)) {
    rtb_nState = cx06_MA_DWork.s416_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_nState = 0.0;
  }

  /* Saturate: '<S416>/Saturation' */
  rtb_Gain_k = rt_SATURATE(rtb_nState, 0.0, 6000.0);

  /* RelationalOperator: '<S416>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S416>/motohawk_calibration2'
   */
  rtb_RelationalOperator1_kg = (rtb_Gain_k < (Dosing_Time_DataStore()));

  /* Switch: '<S416>/Switch2' incorporates:
   *  Constant: '<S416>/Constant2'
   *  Constant: '<S416>/Constant3'
   *  DataTypeConversion: '<S416>/Data Type Conversion'
   *  Logic: '<S416>/Logical Operator'
   *  RelationalOperator: '<S416>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S416>/motohawk_calibration11'
   */
  if (((rtb_RelationalOperator1_kg != 0) && ((rtb_Gain_k > 1.0) != 0)) > 0) {
    cx06_MA_B.s416_Switch2 = (Dose_Freq_DataStore());
  } else {
    cx06_MA_B.s416_Switch2 = 0.0;
  }

  /* RelationalOperator: '<S415>/Compare' incorporates:
   *  Constant: '<S415>/Constant'
   */
  rtb_RelationalOperator1_o = (cx06_MA_B.s16_NOxPre_ECM_Er_Code != 0);

  /* RelationalOperator: '<S366>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration2'
   */
  rtb_RelationalOperator_f = (cx06_MA_B.s16_Temp_1 < (UreaMin_Temp_DataStore()));

  /* Switch: '<S366>/Switch' incorporates:
   *  Product: '<S366>/Product2'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration5'
   */
  if ((Urea_Purge_DataStore())) {
    rtb_nState = (Urea_PurgeLevel_DataStore());
  } else {
    /* Logic: '<S366>/Logical Operator1' incorporates:
     *  Logic: '<S366>/Logical Operator'
     *  S-Function (motohawk_sfun_fault_action): '<S366>/motohawk_fault_action'
     */
    rtb_RelationalOperator_f = !((rtb_RelationalOperator1_o != 0) ||
      rtb_RelationalOperator_f || GetFaultActionStatus(2));

    /* S-Function Block: <S366>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Urea_Injection_OrdIn_DataStore()) = cx06_MA_B.s366_Product1;
      (Urea_Injection_OrdIdx_DataStore()) = TablePrelookup_real_T
        (cx06_MA_B.s366_Product1, (Urea_Injection_OrdIdxArr_DataStore()), 10,
         (Urea_Injection_OrdIdx_DataStore()));
      rtb_motohawk_prelookup_a = (Urea_Injection_OrdIdx_DataStore());
    }

    /* S-Function Block: <S366>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_MinMax_j = TableInterpolation1D_real_T(rtb_motohawk_prelookup_a,
        (real_T *) ((Urea_Injection_TblTbl_DataStore())), 10);
      (Urea_Injection_Tbl_DataStore()) = rtb_MinMax_j;
    }

    /* MinMax: '<S366>/MinMax' */
    rtb_MinMax_j = rt_MAXd_snf(rtb_MinMax_j, cx06_MA_B.s416_Switch2);
    rtb_nState = rtb_MinMax_j * (real_T)rtb_RelationalOperator_f;
  }

  /* Product: '<S366>/Product3' */
  cx06_MA_B.s366_Inj_Freq = (real_T)cx06_MA_B.s366_Pump_On * rtb_nState;

  /* Logic: '<S416>/Logical Operator2' */
  cx06_MA_B.s416_LogicalOperator2 = !(rtb_RelationalOperator1_kg != 0);

  /* Gain: '<S416>/Gain1' */
  cx06_MA_B.s416_Gain1 = 0.005 * rtb_Gain_k;

  /* Update for UnitDelay: '<S380>/Unit Delay1' */
  cx06_MA_DWork.s380_UnitDelay1_DSTATE = cx06_MA_B.s380_Sum;

  /* Update for UnitDelay: '<S380>/Unit Delay2' */
  cx06_MA_DWork.s380_UnitDelay2_DSTATE = rtb_Abs3_a;

  /* Update for UnitDelay: '<S384>/Unit Delay2' */
  cx06_MA_DWork.s384_UnitDelay2_DSTATE = cx06_MA_B.s384_rear_max_torque_aval;

  /* Update for UnitDelay: '<S384>/Unit Delay1' */
  cx06_MA_DWork.s384_UnitDelay1_DSTATE = cx06_MA_B.s384_Saturation2;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  cx06_MA_DWork.s6_UnitDelay_DSTATE = rtb_RelationalOperator3;

  /* Update for UnitDelay: '<S416>/Unit Delay' */
  cx06_MA_DWork.s416_UnitDelay_DSTATE = rtb_Gain_k;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
