/*
 * File: BatteryController_Rev1_Foreground.c
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 20:25:04 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BatteryController_Rev1_Foreground.h"

/* Include model header file for global data */
#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

/* Named constants for Stateflow: '<S17>/Delay 3 Chart' */
#define BatteryController_Rev1_IN_Clear (1U)
#define BatteryController_Rev1_IN_Counting (2U)
#define BatteryController_Rev1_IN_Init (3U)
#define BatteryController_Rev1_IN_Write (4U)

/* Named constants for Stateflow: '<S7>/Amp Clamp Offsets' */
#define BatteryController_Rev1_IN_Offsets (1U)
#define BatteryController_Rev1_IN_default_off (2U)
#define BatteryController_Rev1_IN_default_on (3U)

/* Named constants for Stateflow: '<S8>/Coil2State' */
#define BatteryController_Rev1_IN_BatteryDisabled (1U)
#define BatteryController_Rev1_IN_BatteryOn (2U)
#define BatteryController_Rev1_IN_PreChargeEntry (3U)
#define BatteryController_Rev1_IN_PreChargeNeg (4U)
#define BatteryController_Rev1_IN_PreChargePos (5U)

/* Named constants for Stateflow: '<S8>/Precharge State' */
#define BatteryController_Rev1_IN_Delay3 (1U)
#define BatteryController_Rev1_IN_Delay51 (2U)
#define BatteryController_Rev1_IN_Delay52 (3U)
#define BatteryController_Rev1_IN_Failed (4U)
#define BatteryController_Rev1_IN_Init_a (5U)
#define BatteryController_Rev1_IN_Precharging (6U)
#define BatteryController_Rev1_IN_Successful (7U)
#define BatteryController_Rev1_IN_Wait1 (8U)
#define BatteryController_Rev1_IN_Wait2 (9U)
#define BatteryController_Rev1_IN_Wait3 (10U)

/* Named constants for Stateflow: '<S9>/SOC States' */
#define BatteryController_Rev1_IN_Counting_o (1U)
#define BatteryController_Rev1_IN_HighAmpearge (2U)
#define BatteryController_Rev1_IN_LowAmperage (3U)

/*
 * Initial conditions for atomic system:
 *    '<S17>/Delay 3 Chart'
 *    '<S18>/Delay 5 Chart'
 */
void BatteryController_Rev1_Delay3Chart_Init
  (rtB_Delay3Chart_BatteryController_Rev1 *localB,
   rtDW_Delay3Chart_BatteryController_Rev1 *localDW)
{
  localDW->s24_is_active_c36_BatteryController_Rev1 = 0U;
  localDW->s24_is_c36_BatteryController_Rev1 = 0U;
  localDW->s24_count = 0.0;
  localB->s24_write = FALSE;
}

/*
 * Output and update for atomic system:
 *    '<S17>/Delay 3 Chart'
 *    '<S18>/Delay 5 Chart'
 */
void BatteryController_Rev1_Delay3Chart(real_T rtu_delay,
  rtB_Delay3Chart_BatteryController_Rev1 *localB,
  rtDW_Delay3Chart_BatteryController_Rev1 *localDW)
{
  /* Gateway: Foreground/Battery/Control/Battery States/Delay3/Delay 3 Chart */
  /* During: Foreground/Battery/Control/Battery States/Delay3/Delay 3 Chart */
  if (localDW->s24_is_active_c36_BatteryController_Rev1 == 0) {
    /* Entry: Foreground/Battery/Control/Battery States/Delay3/Delay 3 Chart */
    localDW->s24_is_active_c36_BatteryController_Rev1 = 1U;

    /* Transition: '<S24>:4' */
    localDW->s24_is_c36_BatteryController_Rev1 = BatteryController_Rev1_IN_Init;
  } else {
    switch (localDW->s24_is_c36_BatteryController_Rev1) {
     case BatteryController_Rev1_IN_Clear:
      /* During 'Clear': '<S24>:8' */
      if (localB->s24_write == FALSE) {
        /* Transition: '<S24>:10' */
        localDW->s24_is_c36_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Init;
      } else {
        localB->s24_write = FALSE;
        localDW->s24_count = 0.0;
      }
      break;

     case BatteryController_Rev1_IN_Counting:
      /* During 'Counting': '<S24>:3' */
      if (localDW->s24_count >= rtu_delay) {
        /* Transition: '<S24>:7' */
        localDW->s24_is_c36_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Write;
      } else {
        localDW->s24_count = localDW->s24_count + 1.0;
      }
      break;

     case BatteryController_Rev1_IN_Init:
      /* During 'Init': '<S24>:1' */
      if (localB->s24_write == FALSE) {
        /* Transition: '<S24>:5' */
        localDW->s24_is_c36_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Counting;
      } else {
        localB->s24_write = FALSE;
      }
      break;

     case BatteryController_Rev1_IN_Write:
      /* During 'Write': '<S24>:6' */
      if (localB->s24_write == TRUE) {
        /* Transition: '<S24>:9' */
        localDW->s24_is_c36_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Clear;
      } else {
        localB->s24_write = TRUE;
      }
      break;

     default:
      /* Transition: '<S24>:4' */
      localDW->s24_is_c36_BatteryController_Rev1 =
        BatteryController_Rev1_IN_Init;
      break;
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BatteryController_Rev1_Foreground_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  BatteryController_Rev1_DWork.s10_UnitDelay1_DSTATE = -1.0;

  /* InitializeConditions for Stateflow: '<S9>/SOC States' */
  BatteryController_Rev1_DWork.s31_is_active_c4_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s31_tick = 0.0;
  BatteryController_Rev1_B.s31_voltageOut = 0.0;
  BatteryController_Rev1_B.s31_currState = 0.0;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay1' */
  BatteryController_Rev1_DWork.s30_UnitDelay1_DSTATE = -1.0;

  /* InitializeConditions for Stateflow: '<S8>/Coil2State' */
  BatteryController_Rev1_DWork.s16_is_active_c1_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s16_Freq = 0.0;
  BatteryController_Rev1_B.s16_Negative = FALSE;
  BatteryController_Rev1_B.s16_Positive = FALSE;
  BatteryController_Rev1_B.s16_PreChargeCoil = FALSE;
  BatteryController_Rev1_B.s16_PreChargeEnable = FALSE;
  BatteryController_Rev1_B.s16_PreChargeFreq = FALSE;
  BatteryController_Rev1_B.s16_BatteryOn = FALSE;

  /* InitializeConditions for Stateflow: '<S8>/Precharge State' */
  BatteryController_Rev1_DWork.s21_is_active_c8_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_B.s21_state = 0.0;
  BatteryController_Rev1_B.s21_delay3Out = 0.0;
  BatteryController_Rev1_B.s21_delay5Out = 0.0;

  /* S-Function Block: <S117>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BatteryController_Rev1_DWork.s117_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S118>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BatteryController_Rev1_DWork.s118_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/Amp Clamp Offsets' */
  BatteryController_Rev1_DWork.s11_is_active_c2_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 = 0U;
  BatteryController_Rev1_B.s11_Offset_Out = 0.0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BatteryController_Rev1_Foreground_Start(void)
{
  /* Start for Enabled SubSystem: '<S8>/Delay5' */

  /* InitializeConditions for Stateflow: '<S18>/Delay 5 Chart' */
  BatteryController_Rev1_Delay3Chart_Init
    (&BatteryController_Rev1_B.s18_sf_Delay5Chart,
     &BatteryController_Rev1_DWork.s18_sf_Delay5Chart);

  /* End of Start for SubSystem: '<S8>/Delay5' */

  /* Start for Enabled SubSystem: '<S8>/Delay3' */

  /* InitializeConditions for Stateflow: '<S17>/Delay 3 Chart' */
  BatteryController_Rev1_Delay3Chart_Init
    (&BatteryController_Rev1_B.s17_sf_Delay3Chart,
     &BatteryController_Rev1_DWork.s17_sf_Delay3Chart);

  /* End of Start for SubSystem: '<S8>/Delay3' */

  /* S-Function (motohawk_sfun_probe): '<S80>/motohawk_probe3' */
  (Coil3_Pos_Prb_DataStore()) = FALSE;

  /* S-Function (motohawk_sfun_probe): '<S9>/motohawk_probe2' */
  (vdiff_est_Prb_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BatteryController_Rev1_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_Merge_f;
  real_T rtb_Merge_m;
  real_T rtb_Merge_i;
  real_T rtb_Merge_l;
  real_T rtb_Merge_p;
  real_T rtb_Merge_j;
  real_T rtb_Merge_le;
  real_T rtb_Merge_g;
  real_T rtb_Merge_ml;
  real_T rtb_Merge_b;
  real_T rtb_Merge_ph;
  real_T rtb_Merge_ia;
  real_T rtb_Merge_b2;
  real_T rtb_Merge_c;
  real_T rtb_Merge_jv;
  real_T rtb_Merge_bs;
  real_T rtb_Merge_jc;
  real_T rtb_Merge_o;
  real_T rtb_Merge_n;
  real_T rtb_Merge_i3;
  real_T rtb_Merge_my;
  real_T rtb_Merge_ns;
  real_T rtb_Merge_bi;
  real_T rtb_Merge_a;
  real_T rtb_Merge_bg;
  real_T rtb_Merge_bp;
  real_T rtb_Merge_ll;
  real_T rtb_Merge_j1;
  real_T rtb_Merge_bv;
  real_T rtb_Merge_h;
  real_T rtb_Merge_hf;
  real_T rtb_Merge_fq;
  real_T rtb_Merge_on;
  real_T rtb_motohawk_delta_time;
  real_T rtb_motohawk_delta_time_a;
  uint32_T rtb_Merge_hh;
  int16_T rtb_Merge_ch;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup1_o;
  uint8_T rtb_Merge_ik;
  boolean_T rtb_Merge_fy;
  boolean_T rtb_Merge_ox;
  boolean_T rtb_Merge_gi;
  boolean_T rtb_Merge_an;
  boolean_T rtb_Merge_a5;
  real_T minV;
  real_T rtb_MinMax;
  uint16_T rtb_Merge_as;
  real_T rtb_Voltage;
  real_T rtb_Abs;
  boolean_T rtb_UnitDelay4_e;
  boolean_T rtb_UnitDelay1_a;
  boolean_T rtb_UnitDelay2_g;
  boolean_T rtb_UnitDelay3_a;

  /* Switch: '<S118>/Switch1' incorporates:
   *  Constant: '<S82>/Constant2'
   *  DataTypeConversion: '<S118>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration3'
   *  UnitDelay: '<S118>/Unit Delay'
   */
  if ((Reset_AmpHoursOut_DataStore()) != 0.0) {
    rtb_MinMax = 0.0;
  } else {
    rtb_MinMax = BatteryController_Rev1_DWork.s118_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S118>/Switch1' */

  /* Sum: '<S82>/Sum1' incorporates:
   *  Gain: '<S82>/Gain1'
   *  S-Function (motohawk_sfun_data_read): '<S82>/motohawk_data_read1'
   */
  BatteryController_Rev1_B.s82_Sum1 = 0.00027777777777777778 * rtb_MinMax +
    AmpOut_DataStore();

  /* If: '<S83>/If' incorporates:
   *  Inport: '<S121>/In1'
   *  Inport: '<S122>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S83>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S83>/override_enable'
   */
  if ((TrimpAmpHoursOut_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S83>/NewValue' incorporates:
     *  ActionPort: '<S121>/Action Port'
     */
    rtb_Merge_f = (TrimpAmpHoursOut_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S121>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S83>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S83>/OldValue' incorporates:
     *  ActionPort: '<S122>/Action Port'
     */
    rtb_Merge_f = BatteryController_Rev1_B.s82_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S122>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S83>/OldValue' */
  }

  /* End of If: '<S83>/If' */

  /* If: '<S94>/If' incorporates:
   *  Inport: '<S143>/In1'
   *  Inport: '<S144>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S94>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S94>/override_enable'
   */
  if ((StateOfChargeMax_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S94>/NewValue' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    rtb_Merge_m = (StateOfChargeMax_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S143>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S94>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S94>/OldValue' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    rtb_Merge_m = (StateOfChargeMax_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S94>/OldValue' */
  }

  /* End of If: '<S94>/If' */

  /* If: '<S105>/If' incorporates:
   *  Inport: '<S165>/In1'
   *  Inport: '<S166>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S105>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S105>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration4'
   */
  if ((StateOfChargeMin_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S105>/NewValue' incorporates:
     *  ActionPort: '<S165>/Action Port'
     */
    rtb_Merge_i = (StateOfChargeMin_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S165>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S105>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S105>/OldValue' incorporates:
     *  ActionPort: '<S166>/Action Port'
     */
    rtb_Merge_i = (StateOfChargeMin_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S166>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S105>/OldValue' */
  }

  /* End of If: '<S105>/If' */

  /* If: '<S111>/If' incorporates:
   *  Inport: '<S177>/In1'
   *  Inport: '<S178>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S111>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S111>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration5'
   */
  if ((TAH_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S111>/NewValue' incorporates:
     *  ActionPort: '<S177>/Action Port'
     */
    rtb_Merge_l = (TAH_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S177>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S111>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S111>/OldValue' incorporates:
     *  ActionPort: '<S178>/Action Port'
     */
    rtb_Merge_l = (TAH_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S178>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S111>/OldValue' */
  }

  /* End of If: '<S111>/If' */

  /* Switch: '<S117>/Switch1' incorporates:
   *  Constant: '<S82>/Constant'
   *  DataTypeConversion: '<S117>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration1'
   *  UnitDelay: '<S117>/Unit Delay'
   */
  if ((Reset_AmpHoursIn_DataStore()) != 0.0) {
    rtb_MinMax = 0.0;
  } else {
    rtb_MinMax = BatteryController_Rev1_DWork.s117_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S117>/Switch1' */

  /* Sum: '<S82>/Sum' incorporates:
   *  Gain: '<S82>/Gain'
   *  S-Function (motohawk_sfun_data_read): '<S82>/motohawk_data_read'
   */
  BatteryController_Rev1_B.s82_Sum = 0.00027777777777777778 * rtb_MinMax +
    AmpIn_DataStore();

  /* If: '<S114>/If' incorporates:
   *  Inport: '<S183>/In1'
   *  Inport: '<S184>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S114>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S114>/override_enable'
   */
  if ((TripAmpsHoursIn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S114>/NewValue' incorporates:
     *  ActionPort: '<S183>/Action Port'
     */
    rtb_Merge_p = (TripAmpsHoursIn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S183>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S114>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S114>/OldValue' incorporates:
     *  ActionPort: '<S184>/Action Port'
     */
    rtb_Merge_p = BatteryController_Rev1_B.s82_Sum;

    /* S-Function (motohawk_sfun_code_cover): '<S184>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S114>/OldValue' */
  }

  /* End of If: '<S114>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2ff */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        if (rtb_Merge_p < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_p > 655.3500000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_p * (100.0000000000F));
        }

        if (rtb_Merge_f < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_f > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_f * (100.0000000000F));
        }

        if (rtb_Merge_m < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_m > 127.5000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_m * (2.0000000000F));
        }

        if (rtb_Merge_i < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_i > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_i * (2.0000000000F));
        }

        if (rtb_Merge_l < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_l > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_l);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_1_Transmit(0, 0x2ffUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S84>/If' incorporates:
   *  Inport: '<S123>/In1'
   *  Inport: '<S124>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S84>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S84>/override_enable'
   */
  if ((CoolantTemperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S84>/NewValue' incorporates:
     *  ActionPort: '<S123>/Action Port'
     */
    rtb_Merge_j = (CoolantTemperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S123>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S84>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S84>/OldValue' incorporates:
     *  ActionPort: '<S124>/Action Port'
     */
    rtb_Merge_j = (CoolantTemperature_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S124>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S84>/OldValue' */
  }

  /* End of If: '<S84>/If' */

  /* If: '<S85>/If' incorporates:
   *  Inport: '<S125>/In1'
   *  Inport: '<S126>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S85>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S85>/override_enable'
   */
  if ((DPI_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S85>/NewValue' incorporates:
     *  ActionPort: '<S125>/Action Port'
     */
    rtb_Merge_le = (DPI_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S125>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S85>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S85>/OldValue' incorporates:
     *  ActionPort: '<S126>/Action Port'
     */
    rtb_Merge_le = (DPI_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S126>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S85>/OldValue' */
  }

  /* End of If: '<S85>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S35>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_417p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_417p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0])) ;
      BatteryController_Rev1_B.s35_ReadCANMessage3_o1 = (real_T) tmp0;
      BatteryController_Rev1_B.s35_ReadCANMessage3_o2 = (real_T) tmp1;
      BatteryController_Rev1_B.s35_ReadCANMessage3_o3 = ((real_T) tmp2) *
        ((real_T) 100);
      BatteryController_Rev1_B.s35_ReadCANMessage3_o4 = ((real_T) tmp3) *
        ((real_T) 100);
    }
  }

  /* Gain: '<S35>/Gain1' */
  BatteryController_Rev1_B.s35_Gain1 = 0.001 *
    BatteryController_Rev1_B.s35_ReadCANMessage3_o1;

  /* If: '<S38>/If' incorporates:
   *  Inport: '<S45>/In1'
   *  Inport: '<S46>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S38>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S38>/override_enable'
   */
  if ((MaxCellVoltage__Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S38>/NewValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    BatteryController_Rev1_B.s38_Merge = (MaxCellVoltage__Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S38>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S38>/OldValue' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    BatteryController_Rev1_B.s38_Merge = BatteryController_Rev1_B.s35_Gain1;

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S38>/OldValue' */
  }

  /* End of If: '<S38>/If' */

  /* If: '<S112>/If' incorporates:
   *  Inport: '<S179>/In1'
   *  Inport: '<S180>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S112>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S112>/override_enable'
   */
  if ((MaxCellVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S112>/NewValue' incorporates:
     *  ActionPort: '<S179>/Action Port'
     */
    rtb_Merge_g = (MaxCellVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S179>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S112>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S112>/OldValue' incorporates:
     *  ActionPort: '<S180>/Action Port'
     */
    rtb_Merge_g = BatteryController_Rev1_B.s38_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S180>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S112>/OldValue' */
  }

  /* End of If: '<S112>/If' */

  /* Gain: '<S35>/Gain2' */
  BatteryController_Rev1_B.s35_Gain2 = 0.001 *
    BatteryController_Rev1_B.s35_ReadCANMessage3_o2;

  /* If: '<S39>/If' incorporates:
   *  Inport: '<S47>/In1'
   *  Inport: '<S48>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S39>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S39>/override_enable'
   */
  if ((MinCellVoltage__Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S39>/NewValue' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    BatteryController_Rev1_B.s39_Merge = (MinCellVoltage__Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S39>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S39>/OldValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    BatteryController_Rev1_B.s39_Merge = BatteryController_Rev1_B.s35_Gain2;

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S39>/OldValue' */
  }

  /* End of If: '<S39>/If' */

  /* If: '<S113>/If' incorporates:
   *  Inport: '<S181>/In1'
   *  Inport: '<S182>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S113>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S113>/override_enable'
   */
  if ((MinCellVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S113>/NewValue' incorporates:
     *  ActionPort: '<S181>/Action Port'
     */
    rtb_Merge_ml = (MinCellVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S181>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S113>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S113>/OldValue' incorporates:
     *  ActionPort: '<S182>/Action Port'
     */
    rtb_Merge_ml = BatteryController_Rev1_B.s39_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S182>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S113>/OldValue' */
  }

  /* End of If: '<S113>/If' */

  /* If: '<S115>/If' incorporates:
   *  Inport: '<S185>/In1'
   *  Inport: '<S186>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S115>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S115>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration2'
   */
  if ((MaxCellTemperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S115>/NewValue' incorporates:
     *  ActionPort: '<S185>/Action Port'
     */
    rtb_Merge_b = (MaxCellTemperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S185>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S115>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S115>/OldValue' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    rtb_Merge_b = (MaxCellTemp_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S186>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S115>/OldValue' */
  }

  /* End of If: '<S115>/If' */

  /* If: '<S116>/If' incorporates:
   *  Inport: '<S187>/In1'
   *  Inport: '<S188>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S116>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S116>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration3'
   */
  if ((MinCellTemperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S116>/NewValue' incorporates:
     *  ActionPort: '<S187>/Action Port'
     */
    rtb_Merge_ph = (MinCellTemperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S187>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S116>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S116>/OldValue' incorporates:
     *  ActionPort: '<S188>/Action Port'
     */
    rtb_Merge_ph = (MinCellTemp_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S188>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S116>/OldValue' */
  }

  /* End of If: '<S116>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2fe */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        if (rtb_Merge_g < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_g > 65.5350000000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_g * (1000.0000000000F));
        }

        if (rtb_Merge_ml < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_ml > 65.5350000000F) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_ml * (1000.0000000000F));
        }

        if (rtb_Merge_b < -40.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_b > 87.5000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)((rtb_Merge_b - (-40.0000000000F)) * (2.0000000000F));
        }

        if (rtb_Merge_ph < -40.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_ph > 87.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)((rtb_Merge_ph - (-40.0000000000F)) * (2.0000000000F));
        }

        if (rtb_Merge_j < -40.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_j > 87.5000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)((rtb_Merge_j - (-40.0000000000F)) * (2.0000000000F));
        }

        if (rtb_Merge_le < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_le > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_le);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp5))[0])) ;
        CAN_1_Transmit(0, 0x2feUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S35>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_416p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_416p001,
      &messageObj);
    if (msg_valid) {
      uint32_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp0))[2] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp0))[3] = ((messageObj.u1DataArr[0])) ;
      BatteryController_Rev1_B.s35_ReadCANMessage2 = (real_T) tmp0;
    }
  }

  /* Gain: '<S35>/Gain' */
  BatteryController_Rev1_B.s35_Gain = 0.001 *
    BatteryController_Rev1_B.s35_ReadCANMessage2;

  /* If: '<S44>/If' incorporates:
   *  Inport: '<S57>/In1'
   *  Inport: '<S58>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S44>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S44>/override_enable'
   */
  if ((Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S44>/NewValue' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    BatteryController_Rev1_B.s44_Merge = (Voltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S57>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S44>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S44>/OldValue' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    BatteryController_Rev1_B.s44_Merge = BatteryController_Rev1_B.s35_Gain;

    /* S-Function (motohawk_sfun_code_cover): '<S58>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S44>/OldValue' */
  }

  /* End of If: '<S44>/If' */

  /* If: '<S86>/If' incorporates:
   *  Inport: '<S127>/In1'
   *  Inport: '<S128>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S86>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S86>/override_enable'
   */
  if ((BatteryVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S86>/NewValue' incorporates:
     *  ActionPort: '<S127>/Action Port'
     */
    rtb_Merge_ia = (BatteryVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S127>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S86>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S86>/OldValue' incorporates:
     *  ActionPort: '<S128>/Action Port'
     */
    rtb_Merge_ia = BatteryController_Rev1_B.s44_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S128>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S86>/OldValue' */
  }

  /* End of If: '<S86>/If' */

  /* S-Function Block: <S36>/motohawk_ain Resource: Current_Sensor */
  {
    extern NativeError_S Current_Sensor_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    Current_Sensor_AnalogInput_Get(&BatteryController_Rev1_B.s36_motohawk_ain,
      NULL);
  }

  /* If: '<S59>/If' incorporates:
   *  Inport: '<S61>/In1'
   *  Inport: '<S62>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S59>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S59>/NewValue' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    rtb_Merge_as = ((uint16_T)(Current_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S61>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S59>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/OldValue' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    rtb_Merge_as = BatteryController_Rev1_B.s36_motohawk_ain;

    /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S59>/OldValue' */
  }

  /* End of If: '<S59>/If' */

  /* Product: '<S7>/Current' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_MinMax = (real_T)rtb_Merge_as / (Current_Div2_DataStore());

  /* S-Function Block: <S36>/motohawk_ain1 Resource: V5V_Reference */
  {
    extern NativeError_S V5V_Reference_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    V5V_Reference_AnalogInput_Get(&BatteryController_Rev1_B.s36_motohawk_ain1,
      NULL);
  }

  /* If: '<S60>/If' incorporates:
   *  Inport: '<S63>/In1'
   *  Inport: '<S64>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S60>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
   */
  if ((V5V_Reference_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    rtb_Merge_as = ((uint16_T)(V5V_Reference_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S60>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    rtb_Merge_as = BatteryController_Rev1_B.s36_motohawk_ain1;

    /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S60>/OldValue' */
  }

  /* End of If: '<S60>/If' */

  /* Product: '<S7>/Voltage' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration1'
   */
  rtb_Voltage = (real_T)rtb_Merge_as / (V5V_Ref2_DataStore());

  /* MATLAB Function Block: '<S7>/Curret Calculation Instantaneos' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration3'
   */

  /* MATLAB Function 'Foreground/Battery/Control/AMP Clamp/Curret Calculation Instantaneos': '<S12>:1' */
  /* '<S12>:1:3' */
  BatteryController_Rev1_B.s12_amps = 5.0 / rtb_Voltage * (rtb_MinMax -
    (AmpV_Offset_DataStore())) * (1.0 / (G_Sensativity_DataStore()));

  /* Sum: '<S7>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read'
   */
  BatteryController_Rev1_B.s7_Sum = BatteryController_Rev1_B.s12_amps -
    Amp_Offset_DataStore();

  /* Signum: '<S7>/Sign' */
  rtb_Voltage = BatteryController_Rev1_B.s7_Sum < 0.0 ? -1.0 :
    BatteryController_Rev1_B.s7_Sum > 0.0 ? 1.0 :
    BatteryController_Rev1_B.s7_Sum == 0.0 ? 0.0 :
    BatteryController_Rev1_B.s7_Sum;

  /* Abs: '<S7>/Abs' */
  rtb_Abs = fabs(BatteryController_Rev1_B.s7_Sum);

  /* UnitDelay: '<S10>/Unit Delay1' */
  rtb_MinMax = BatteryController_Rev1_DWork.s10_UnitDelay1_DSTATE;

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Product: '<S10>/Product'
   *  Product: '<S10>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S10>/Sum1'
   *  UnitDelay: '<S10>/Unit Delay1'
   */
  if (BatteryController_Rev1_DWork.s10_UnitDelay1_DSTATE > -1.0) {
    rtb_Abs = (1.0 - (Amp_Clamp_K_DataStore())) * rtb_MinMax + rtb_Abs *
      (Amp_Clamp_K_DataStore());
  }

  /* End of Switch: '<S10>/Switch' */

  /* Product: '<S7>/Product' */
  BatteryController_Rev1_B.s7_Product = rtb_Voltage * rtb_Abs;

  /* If: '<S13>/If' incorporates:
   *  Inport: '<S14>/In1'
   *  Inport: '<S15>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S13>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S13>/override_enable'
   */
  if ((AMPCurrent_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S13>/NewValue' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    BatteryController_Rev1_B.s13_Merge = (AMPCurrent_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S14>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S13>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/OldValue' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    BatteryController_Rev1_B.s13_Merge = BatteryController_Rev1_B.s7_Product;

    /* S-Function (motohawk_sfun_code_cover): '<S15>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S13>/OldValue' */
  }

  /* End of If: '<S13>/If' */

  /* If: '<S87>/If' incorporates:
   *  Inport: '<S129>/In1'
   *  Inport: '<S130>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S87>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S87>/override_enable'
   */
  if ((BatteryCurrent_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S87>/NewValue' incorporates:
     *  ActionPort: '<S129>/Action Port'
     */
    rtb_Merge_b2 = (BatteryCurrent_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S129>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S87>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S87>/OldValue' incorporates:
     *  ActionPort: '<S130>/Action Port'
     */
    rtb_Merge_b2 = BatteryController_Rev1_B.s13_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S130>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S87>/OldValue' */
  }

  /* End of If: '<S87>/If' */

  /* If: '<S88>/If' incorporates:
   *  Inport: '<S131>/In1'
   *  Inport: '<S132>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S88>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S88>/override_enable'
   */
  if ((BusVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S88>/NewValue' incorporates:
     *  ActionPort: '<S131>/Action Port'
     */
    rtb_Merge_c = (BusVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S131>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S88>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S88>/OldValue' incorporates:
     *  ActionPort: '<S132>/Action Port'
     */
    rtb_Merge_c = BatteryController_Rev1_B.s44_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S132>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S88>/OldValue' */
  }

  /* End of If: '<S88>/If' */

  /* If: '<S89>/If' incorporates:
   *  Inport: '<S133>/In1'
   *  Inport: '<S134>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S89>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S89>/override_enable'
   */
  if ((PVC_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S89>/NewValue' incorporates:
     *  ActionPort: '<S133>/Action Port'
     */
    rtb_Merge_jv = (PVC_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S133>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S89>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S89>/OldValue' incorporates:
     *  ActionPort: '<S134>/Action Port'
     */
    rtb_Merge_jv = (PVC_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S134>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S89>/OldValue' */
  }

  /* End of If: '<S89>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2fd */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        if (rtb_Merge_ia < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_ia > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_ia * (10.0000000000F));
        }

        if (rtb_Merge_b2 < -500.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_b2 > 6053.5000000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)((rtb_Merge_b2 - (-500.0000000000F)) *
                            (10.0000000000F));
        }

        if (rtb_Merge_c < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Merge_c > 6553.5000000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Merge_c * (10.0000000000F));
        }

        if (rtb_Merge_jv < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_jv > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_jv);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp3))[0])) ;
        CAN_1_Transmit(0, 0x2fdUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S9>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Temp_IR_TableIn_DataStore()) = BatteryController_Rev1_B.s38_Merge;
    (Temp_IR_TableIdx_DataStore()) = TablePrelookup_real_T
      (BatteryController_Rev1_B.s38_Merge, (Temp_IR_TableIdxArr_DataStore()), 5,
       (Temp_IR_TableIdx_DataStore()));
    rtb_motohawk_prelookup1 = (Temp_IR_TableIdx_DataStore());
  }

  /* S-Function Block: <S9>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BatteryController_Rev1_B.s9_motohawk_interpolation_1d1 =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup1, (real_T *)
      ((Temp_IR_MapTbl_DataStore())), 5);
    (Temp_IR_Map_DataStore()) =
      BatteryController_Rev1_B.s9_motohawk_interpolation_1d1;
  }

  /* Stateflow: '<S9>/SOC States' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration15'
   */

  /* Gateway: Foreground/Battery/Control/SOC/SOC States */
  /* During: Foreground/Battery/Control/SOC/SOC States */
  if (BatteryController_Rev1_DWork.s31_is_active_c4_BatteryController_Rev1 == 0)
  {
    /* Entry: Foreground/Battery/Control/SOC/SOC States */
    BatteryController_Rev1_DWork.s31_is_active_c4_BatteryController_Rev1 = 1U;

    /* Transition: '<S31>:2' */
    BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
      BatteryController_Rev1_IN_LowAmperage;
  } else {
    switch (BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1) {
     case BatteryController_Rev1_IN_Counting_o:
      /* During 'Counting': '<S31>:33' */
      if (BatteryController_Rev1_DWork.s31_tick >= (real_T)(Wait_time_DataStore()))
      {
        /* Transition: '<S31>:36' */
        BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
          BatteryController_Rev1_IN_LowAmperage;
      } else if (fabs(BatteryController_Rev1_B.s13_Merge) >=
                 (highAmperage_DataStore())) {
        /* Transition: '<S31>:37' */
        BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
          BatteryController_Rev1_IN_HighAmpearge;
      } else {
        BatteryController_Rev1_DWork.s31_tick =
          BatteryController_Rev1_DWork.s31_tick + 1.0;
        BatteryController_Rev1_B.s31_voltageOut =
          BatteryController_Rev1_B.s13_Merge *
          BatteryController_Rev1_B.s9_motohawk_interpolation_1d1 +
          BatteryController_Rev1_B.s44_Merge;
        BatteryController_Rev1_B.s31_currState = 1.0;
      }
      break;

     case BatteryController_Rev1_IN_HighAmpearge:
      /* During 'HighAmpearge': '<S31>:7' */
      if (fabs(BatteryController_Rev1_B.s13_Merge) <= (lowAmperage_DataStore()))
      {
        /* Transition: '<S31>:31' */
        BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Counting_o;

        /* Entry 'Counting': '<S31>:33' */
        BatteryController_Rev1_DWork.s31_tick = 0.0;
      } else {
        BatteryController_Rev1_B.s31_voltageOut =
          BatteryController_Rev1_B.s13_Merge *
          BatteryController_Rev1_B.s9_motohawk_interpolation_1d1 +
          BatteryController_Rev1_B.s44_Merge;
        BatteryController_Rev1_B.s31_currState = 1.0;
      }
      break;

     case BatteryController_Rev1_IN_LowAmperage:
      /* During 'LowAmperage': '<S31>:1' */
      if (fabs(BatteryController_Rev1_B.s13_Merge) >= (highAmperage_DataStore()))
      {
        /* Transition: '<S31>:13' */
        BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
          BatteryController_Rev1_IN_HighAmpearge;
      } else {
        BatteryController_Rev1_B.s31_voltageOut =
          BatteryController_Rev1_B.s44_Merge;
        BatteryController_Rev1_B.s31_currState = 0.0;
      }
      break;

     default:
      /* Transition: '<S31>:2' */
      BatteryController_Rev1_DWork.s31_is_c4_BatteryController_Rev1 =
        BatteryController_Rev1_IN_LowAmperage;
      break;
    }
  }

  /* End of Stateflow: '<S9>/SOC States' */
  /* S-Function Block: <S9>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SOC_TableIn_DataStore()) = BatteryController_Rev1_B.s31_voltageOut;
    (SOC_TableIdx_DataStore()) = TablePrelookup_real_T
      (BatteryController_Rev1_B.s31_voltageOut, (SOC_TableIdxArr_DataStore()), 4,
       (SOC_TableIdx_DataStore()));
    rtb_motohawk_prelookup = (SOC_TableIdx_DataStore());
  }

  /* S-Function Block: <S9>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BatteryController_Rev1_B.s9_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup, (real_T *)
      ((SOCMapTbl_DataStore())), 4);
    (SOCMap_DataStore()) = BatteryController_Rev1_B.s9_motohawk_interpolation_1d;
  }

  /* UnitDelay: '<S30>/Unit Delay1' */
  rtb_MinMax = BatteryController_Rev1_DWork.s30_UnitDelay1_DSTATE;

  /* Switch: '<S30>/Switch' incorporates:
   *  Constant: '<S30>/Constant'
   *  Product: '<S30>/Product'
   *  Product: '<S30>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S30>/motohawk_calibration'
   *  Sum: '<S30>/Sum'
   *  Sum: '<S30>/Sum1'
   *  UnitDelay: '<S30>/Unit Delay1'
   */
  if (BatteryController_Rev1_DWork.s30_UnitDelay1_DSTATE > -1.0) {
    BatteryController_Rev1_B.s30_Switch = (1.0 - (SOC_K_DataStore())) *
      rtb_MinMax + BatteryController_Rev1_B.s9_motohawk_interpolation_1d *
      (SOC_K_DataStore());
  } else {
    BatteryController_Rev1_B.s30_Switch =
      BatteryController_Rev1_B.s9_motohawk_interpolation_1d;
  }

  /* End of Switch: '<S30>/Switch' */
  /* If: '<S32>/If' incorporates:
   *  Inport: '<S33>/In1'
   *  Inport: '<S34>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S32>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S32>/override_enable'
   */
  if ((SOC_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S32>/NewValue' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    BatteryController_Rev1_B.s32_Merge = (SOC_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S32>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S32>/OldValue' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    BatteryController_Rev1_B.s32_Merge = BatteryController_Rev1_B.s30_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S32>/OldValue' */
  }

  /* End of If: '<S32>/If' */

  /* S-Function Block: <S79>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SOC_PreLookupIn_DataStore()) = BatteryController_Rev1_B.s32_Merge;
    (SOC_PreLookupIdx_DataStore()) = TablePrelookup_real_T
      (BatteryController_Rev1_B.s32_Merge, (SOC_PreLookupIdxArr_DataStore()), 11,
       (SOC_PreLookupIdx_DataStore()));
    rtb_motohawk_prelookup_f = (SOC_PreLookupIdx_DataStore());
  }

  /* S-Function Block: <S79>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CellTemp_PreLookupIn_DataStore()) = (MaxCellTemp_DataStore());
    (CellTemp_PreLookupIdx_DataStore()) = TablePrelookup_real_T
      ((MaxCellTemp_DataStore()), (CellTemp_PreLookupIdxArr_DataStore()), 7,
       (CellTemp_PreLookupIdx_DataStore()));
    rtb_motohawk_prelookup1_o = (CellTemp_PreLookupIdx_DataStore());
  }

  /* S-Function Block: <S79>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup_f,
      rtb_motohawk_prelookup1_o, (real_T *) ((MaxDisPwr_Cont_TableMap_DataStore())),
      11, 7);
    (MaxDisPwr_Cont_Table_DataStore()) =
      BatteryController_Rev1_B.s79_motohawk_interpolation_2d;
  }

  /* If: '<S90>/If' incorporates:
   *  Inport: '<S135>/In1'
   *  Inport: '<S136>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S90>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S90>/override_enable'
   */
  if ((MaximumDischargePower_Continuos_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S90>/NewValue' incorporates:
     *  ActionPort: '<S135>/Action Port'
     */
    rtb_Merge_bs = (MaximumDischargePower_Continuos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S135>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S90>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S90>/OldValue' incorporates:
     *  ActionPort: '<S136>/Action Port'
     */
    rtb_Merge_bs = BatteryController_Rev1_B.s79_motohawk_interpolation_2d;

    /* S-Function (motohawk_sfun_code_cover): '<S136>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S90>/OldValue' */
  }

  /* End of If: '<S90>/If' */

  /* S-Function Block: <S79>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup_f,
      rtb_motohawk_prelookup1_o, (real_T *)
      ((MaxRegenPwr_Cont_TableMap_DataStore())), 11, 7);
    (MaxRegenPwr_Cont_Table_DataStore()) =
      BatteryController_Rev1_B.s79_motohawk_interpolation_2d1;
  }

  /* If: '<S91>/If' incorporates:
   *  Inport: '<S137>/In1'
   *  Inport: '<S138>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S91>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S91>/override_enable'
   */
  if ((MaximumRegenPower_Continuous_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S91>/NewValue' incorporates:
     *  ActionPort: '<S137>/Action Port'
     */
    rtb_Merge_jc = (MaximumRegenPower_Continuous_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S91>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S91>/OldValue' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    rtb_Merge_jc = BatteryController_Rev1_B.s79_motohawk_interpolation_2d1;

    /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S91>/OldValue' */
  }

  /* End of If: '<S91>/If' */

  /* If: '<S92>/If' incorporates:
   *  Inport: '<S139>/In1'
   *  Inport: '<S140>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S92>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S92>/override_enable'
   */
  if ((PPLCont_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S92>/NewValue' incorporates:
     *  ActionPort: '<S139>/Action Port'
     */
    rtb_Merge_o = (PPLCont_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S139>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S92>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S92>/OldValue' incorporates:
     *  ActionPort: '<S140>/Action Port'
     */
    rtb_Merge_o = (PPL_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S140>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S92>/OldValue' */
  }

  /* End of If: '<S92>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2fc */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        if (rtb_Merge_bs < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_bs > 655.3500000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_bs * (100.0000000000F));
        }

        if (rtb_Merge_jc < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_jc > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_jc * (100.0000000000F));
        }

        if (rtb_Merge_o < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_o > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_o);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp2))[0])) ;
        CAN_1_Transmit(0, 0x2fcUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S79>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup_f,
      rtb_motohawk_prelookup1_o, (real_T *) ((MaxDisPwr_10s_TableMap_DataStore())),
      11, 7);
    (MaxDisPwr_10s_Table_DataStore()) =
      BatteryController_Rev1_B.s79_motohawk_interpolation_2d2;
  }

  /* If: '<S93>/If' incorporates:
   *  Inport: '<S141>/In1'
   *  Inport: '<S142>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S93>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S93>/override_enable'
   */
  if ((MaximumDischargePower_10s_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S93>/NewValue' incorporates:
     *  ActionPort: '<S141>/Action Port'
     */
    rtb_Merge_n = (MaximumDischargePower_10s_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S141>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S93>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S93>/OldValue' incorporates:
     *  ActionPort: '<S142>/Action Port'
     */
    rtb_Merge_n = BatteryController_Rev1_B.s79_motohawk_interpolation_2d2;

    /* S-Function (motohawk_sfun_code_cover): '<S142>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S93>/OldValue' */
  }

  /* End of If: '<S93>/If' */

  /* S-Function Block: <S79>/motohawk_interpolation_2d3 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d3 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup_f,
      rtb_motohawk_prelookup1_o, (real_T *) ((MaxRegenPwr_10s_TableMap_DataStore
                                    ())), 11, 7);
    (MaxRegenPwr_10s_Table_DataStore()) =
      BatteryController_Rev1_B.s79_motohawk_interpolation_2d3;
  }

  /* If: '<S95>/If' incorporates:
   *  Inport: '<S145>/In1'
   *  Inport: '<S146>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S95>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S95>/override_enable'
   */
  if ((MaximumRegenPower_10s_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S95>/NewValue' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    rtb_Merge_i3 = (MaximumRegenPower_10s_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S145>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S95>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/OldValue' incorporates:
     *  ActionPort: '<S146>/Action Port'
     */
    rtb_Merge_i3 = BatteryController_Rev1_B.s79_motohawk_interpolation_2d3;

    /* S-Function (motohawk_sfun_code_cover): '<S146>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S95>/OldValue' */
  }

  /* End of If: '<S95>/If' */

  /* If: '<S96>/If' incorporates:
   *  Inport: '<S147>/In1'
   *  Inport: '<S148>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S96>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S96>/override_enable'
   */
  if ((IsolationLevel_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S96>/NewValue' incorporates:
     *  ActionPort: '<S147>/Action Port'
     */
    rtb_Merge_my = (IsolationLevel_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S147>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S96>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/OldValue' incorporates:
     *  ActionPort: '<S148>/Action Port'
     */
    rtb_Merge_my = (IsolationLevel_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S148>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S96>/OldValue' */
  }

  /* End of If: '<S96>/If' */

  /* If: '<S97>/If' incorporates:
   *  Inport: '<S149>/In1'
   *  Inport: '<S150>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S97>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S97>/override_enable'
   */
  if ((ActiveDTC_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S97>/NewValue' incorporates:
     *  ActionPort: '<S149>/Action Port'
     */
    rtb_Merge_ns = (ActiveDTC_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S149>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S97>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S97>/OldValue' incorporates:
     *  ActionPort: '<S150>/Action Port'
     */
    rtb_Merge_ns = (FaultsDTC_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S150>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S97>/OldValue' */
  }

  /* End of If: '<S97>/If' */

  /* If: '<S98>/If' incorporates:
   *  Inport: '<S151>/In1'
   *  Inport: '<S152>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S98>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S98>/override_enable'
   */
  if ((PPL10s_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S98>/NewValue' incorporates:
     *  ActionPort: '<S151>/Action Port'
     */
    rtb_Merge_bi = (PPL10s_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S151>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S98>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S98>/OldValue' incorporates:
     *  ActionPort: '<S152>/Action Port'
     */
    rtb_Merge_bi = (PPL10S_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S152>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S98>/OldValue' */
  }

  /* End of If: '<S98>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages4' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2fb */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint8_T tmp4;
        if (rtb_Merge_n < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_n > 655.3500000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_n * (100.0000000000F));
        }

        if (rtb_Merge_i3 < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_i3 > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_i3 * (100.0000000000F));
        }

        if (rtb_Merge_my < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_my > 1020.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_my / (4.0000000000F));
        }

        if (rtb_Merge_ns < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_ns > 65535.0000000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_ns);
        }

        if (rtb_Merge_bi < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_bi > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_bi);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_1_Transmit(0, 0x2fbUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S99>/If' incorporates:
   *  Inport: '<S153>/In1'
   *  Inport: '<S154>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S99>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S99>/override_enable'
   */
  if ((JCS_PackIdentifier_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S99>/NewValue' incorporates:
     *  ActionPort: '<S153>/Action Port'
     */
    rtb_Merge_a = (JCS_PackIdentifier_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S153>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S99>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S99>/OldValue' incorporates:
     *  ActionPort: '<S154>/Action Port'
     */
    rtb_Merge_a = (PackIdentifier_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S154>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S99>/OldValue' */
  }

  /* End of If: '<S99>/If' */

  /* UnitDelay: '<S19>/Unit Delay4' */
  rtb_UnitDelay4_e = BatteryController_Rev1_DWork.s19_UnitDelay4_DSTATE;

  /* If: '<S68>/If' incorporates:
   *  Inport: '<S75>/In1'
   *  Inport: '<S76>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S68>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   */
  if ((FreqStart_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S68>/NewValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Voltage = (FreqStart_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S68>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S68>/OldValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Voltage = (FreqStart_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S76>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S68>/OldValue' */
  }

  /* End of If: '<S68>/If' */

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S77>/In1'
   *  Inport: '<S78>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   */
  if ((FreqEnd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_MinMax = (FreqEnd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    rtb_MinMax = (FreqEnd_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S78>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* Stateflow: '<S8>/Coil2State' */

  /* Gateway: Foreground/Battery/Control/Battery States/Coil2State */
  /* During: Foreground/Battery/Control/Battery States/Coil2State */
  if (BatteryController_Rev1_DWork.s16_is_active_c1_BatteryController_Rev1 == 0)
  {
    /* Entry: Foreground/Battery/Control/Battery States/Coil2State */
    BatteryController_Rev1_DWork.s16_is_active_c1_BatteryController_Rev1 = 1U;

    /* Transition: '<S16>:10' */
    BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
      BatteryController_Rev1_IN_BatteryDisabled;
  } else {
    switch (BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1) {
     case BatteryController_Rev1_IN_BatteryDisabled:
      /* During 'BatteryDisabled': '<S16>:9' */
      if (rtb_UnitDelay4_e == TRUE) {
        /* Transition: '<S16>:53' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_PreChargeEntry;

        /* Entry 'PreChargeEntry': '<S16>:21' */
        BatteryController_Rev1_DWork.s16_Freq = rtb_Voltage;
      } else {
        BatteryController_Rev1_B.s16_Negative = FALSE;
        BatteryController_Rev1_B.s16_Positive = FALSE;
        BatteryController_Rev1_B.s16_PreChargeCoil = FALSE;
        BatteryController_Rev1_B.s16_PreChargeEnable = FALSE;
        BatteryController_Rev1_B.s16_PreChargeFreq = FALSE;
        BatteryController_Rev1_DWork.s16_Freq = 0.0;
      }
      break;

     case BatteryController_Rev1_IN_BatteryOn:
      /* During 'BatteryOn': '<S16>:59' */
      if (rtb_UnitDelay4_e == FALSE) {
        /* Transition: '<S16>:65' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_BatteryDisabled;
      } else {
        BatteryController_Rev1_B.s16_Positive = TRUE;
        BatteryController_Rev1_B.s16_PreChargeEnable = FALSE;
        BatteryController_Rev1_B.s16_PreChargeFreq = FALSE;
        BatteryController_Rev1_B.s16_BatteryOn = TRUE;
      }
      break;

     case BatteryController_Rev1_IN_PreChargeEntry:
      /* During 'PreChargeEntry': '<S16>:21' */
      if (rtb_Voltage > rtb_MinMax) {
        /* Transition: '<S16>:73' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_PreChargeNeg;

        /* Entry 'PreChargeNeg': '<S16>:71' */
        BatteryController_Rev1_DWork.s16_Freq = rtb_Voltage;
      } else if (rtb_Voltage <= rtb_MinMax) {
        /* Transition: '<S16>:74' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_PreChargePos;

        /* Entry 'PreChargePos': '<S16>:72' */
        BatteryController_Rev1_DWork.s16_Freq = rtb_Voltage;
      } else {
        BatteryController_Rev1_B.s16_Negative = TRUE;
        BatteryController_Rev1_B.s16_PreChargeCoil = TRUE;
        BatteryController_Rev1_B.s16_PreChargeEnable = TRUE;
        BatteryController_Rev1_B.s16_PreChargeFreq =
          ((BatteryController_Rev1_DWork.s16_Freq != 0.0));
        BatteryController_Rev1_DWork.s16_Freq =
          BatteryController_Rev1_DWork.s16_Freq - 1.0;
      }
      break;

     case BatteryController_Rev1_IN_PreChargeNeg:
      /* During 'PreChargeNeg': '<S16>:71' */
      if (BatteryController_Rev1_DWork.s16_Freq <= rtb_MinMax) {
        /* Transition: '<S16>:75' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_BatteryOn;
      } else {
        BatteryController_Rev1_B.s16_PreChargeFreq =
          ((BatteryController_Rev1_DWork.s16_Freq != 0.0));
        BatteryController_Rev1_DWork.s16_Freq =
          BatteryController_Rev1_DWork.s16_Freq - 1.0;
      }
      break;

     case BatteryController_Rev1_IN_PreChargePos:
      /* During 'PreChargePos': '<S16>:72' */
      if (BatteryController_Rev1_DWork.s16_Freq >= rtb_MinMax) {
        /* Transition: '<S16>:76' */
        BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
          BatteryController_Rev1_IN_BatteryOn;
      } else {
        BatteryController_Rev1_B.s16_PreChargeFreq =
          ((BatteryController_Rev1_DWork.s16_Freq != 0.0));
        BatteryController_Rev1_DWork.s16_Freq =
          BatteryController_Rev1_DWork.s16_Freq + 1.0;
      }
      break;

     default:
      /* Transition: '<S16>:10' */
      BatteryController_Rev1_DWork.s16_is_c1_BatteryController_Rev1 =
        BatteryController_Rev1_IN_BatteryDisabled;
      break;
    }
  }

  /* End of Stateflow: '<S8>/Coil2State' */

  /* MATLAB Function Block: '<S8>/Pack State' */

  /* MATLAB Function 'Foreground/Battery/Control/Battery States/Pack State': '<S20>:1' */
  if ((BatteryController_Rev1_B.s16_PreChargeEnable == FALSE) &&
      (BatteryController_Rev1_B.s16_Positive == FALSE)) {
    /* '<S20>:1:3' */
    /* '<S20>:1:4' */
    BatteryController_Rev1_B.s20_PackState = 2.0;

    /* Disconnected */
  } else if ((BatteryController_Rev1_B.s16_PreChargeEnable == TRUE) &&
             (BatteryController_Rev1_B.s16_Positive == FALSE)) {
    /* '<S20>:1:5' */
    /* '<S20>:1:6' */
    BatteryController_Rev1_B.s20_PackState = 3.0;

    /* Precharging */
  } else if ((BatteryController_Rev1_B.s16_PreChargeEnable == FALSE) &&
             (BatteryController_Rev1_B.s16_Positive == TRUE)) {
    /* '<S20>:1:7' */
    /* '<S20>:1:8' */
    BatteryController_Rev1_B.s20_PackState = 4.0;

    /* Connected-Driving */
  } else {
    /* '<S20>:1:10' */
    BatteryController_Rev1_B.s20_PackState = 1.0;

    /* Idle (Should never enter state) */
  }

  /* End of MATLAB Function Block: '<S8>/Pack State' */
  /* If: '<S23>/If' incorporates:
   *  Inport: '<S28>/In1'
   *  Inport: '<S29>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S23>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   */
  if ((PackState__Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S23>/NewValue' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    BatteryController_Rev1_B.s23_Merge = (PackState__Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S23>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/OldValue' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    BatteryController_Rev1_B.s23_Merge = BatteryController_Rev1_B.s20_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S23>/OldValue' */
  }

  /* End of If: '<S23>/If' */

  /* If: '<S100>/If' incorporates:
   *  Inport: '<S155>/In1'
   *  Inport: '<S156>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S100>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S100>/override_enable'
   */
  if ((PackState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S100>/NewValue' incorporates:
     *  ActionPort: '<S155>/Action Port'
     */
    rtb_Merge_bg = (PackState_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S155>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S100>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S100>/OldValue' incorporates:
     *  ActionPort: '<S156>/Action Port'
     */
    rtb_Merge_bg = BatteryController_Rev1_B.s23_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S156>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S100>/OldValue' */
  }

  /* End of If: '<S100>/If' */

  /* DataTypeConversion: '<S8>/Conv' */
  rtb_Voltage = (real_T)BatteryController_Rev1_B.s16_PreChargeEnable;

  /* DataTypeConversion: '<S8>/Conv1' */
  rtb_MinMax = (real_T)BatteryController_Rev1_B.s16_Positive;

  /* Stateflow: '<S8>/Precharge State' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S8>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S8>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Battery/Control/Battery States/Precharge State */
  /* During: Foreground/Battery/Control/Battery States/Precharge State */
  if (BatteryController_Rev1_DWork.s21_is_active_c8_BatteryController_Rev1 == 0)
  {
    /* Entry: Foreground/Battery/Control/Battery States/Precharge State */
    BatteryController_Rev1_DWork.s21_is_active_c8_BatteryController_Rev1 = 1U;

    /* Transition: '<S21>:27' */
    BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
      BatteryController_Rev1_IN_Init_a;
  } else {
    switch (BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1) {
     case BatteryController_Rev1_IN_Delay3:
      /* During 'Delay3': '<S21>:30' */
      if (Delay3_DataStore() == TRUE) {
        /* Transition: '<S21>:32' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Wait1;
      } else {
        BatteryController_Rev1_B.s21_delay3Out = 1.0;
      }
      break;

     case BatteryController_Rev1_IN_Delay51:
      /* During 'Delay51': '<S21>:37' */
      if (Delay5_DataStore() == TRUE) {
        /* Transition: '<S21>:41' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Wait2;
      } else {
        BatteryController_Rev1_B.s21_delay5Out = 1.0;
      }
      break;

     case BatteryController_Rev1_IN_Delay52:
      /* During 'Delay52': '<S21>:34' */
      if (Delay5_DataStore() == TRUE) {
        /* Transition: '<S21>:36' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Wait3;
      } else {
        BatteryController_Rev1_B.s21_delay5Out = 1.0;
      }
      break;

     case BatteryController_Rev1_IN_Failed:
      /* During 'Failed': '<S21>:13' */
      if (BatteryController_Rev1_B.s21_state == 4.0) {
        /* Transition: '<S21>:40' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Delay51;
      } else {
        BatteryController_Rev1_B.s21_state = 4.0;
      }
      break;

     case BatteryController_Rev1_IN_Init_a:
      /* During 'Init': '<S21>:6' */
      if (rtb_Voltage == 1.0) {
        /* Transition: '<S21>:11' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Precharging;
      } else {
        BatteryController_Rev1_B.s21_state = 0.0;
      }
      break;

     case BatteryController_Rev1_IN_Precharging:
      /* During 'Precharging': '<S21>:9' */
      if (BatteryController_Rev1_B.s21_state == 2.0) {
        /* Transition: '<S21>:31' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Delay3;
      } else {
        BatteryController_Rev1_B.s21_state = 2.0;
      }
      break;

     case BatteryController_Rev1_IN_Successful:
      /* During 'Successful': '<S21>:12' */
      if (BatteryController_Rev1_B.s21_state == 3.0) {
        /* Transition: '<S21>:35' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Delay52;
      } else {
        BatteryController_Rev1_B.s21_state = 3.0;
      }
      break;

     case BatteryController_Rev1_IN_Wait1:
      /* During 'Wait1': '<S21>:17' */
      if (BatteryController_Rev1_B.s13_Merge <
          (Precharge_Current_Threshold_DataStore())) {
        /* Transition: '<S21>:19' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Failed;
      } else if (BatteryController_Rev1_B.s13_Merge >=
                 (Precharge_Current_Threshold_DataStore())) {
        /* Transition: '<S21>:20' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Successful;
      } else {
        BatteryController_Rev1_B.s21_state = 2.0;
      }
      break;

     case BatteryController_Rev1_IN_Wait2:
      /* During 'Wait2': '<S21>:21' */
      if (rtb_MinMax == 1.0) {
        /* Transition: '<S21>:25' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Init_a;
      } else {
        BatteryController_Rev1_B.s21_state = 4.0;
      }
      break;

     case BatteryController_Rev1_IN_Wait3:
      /* During 'Wait3': '<S21>:23' */
      if (rtb_MinMax == 1.0) {
        /* Transition: '<S21>:26' */
        BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Init_a;
      } else {
        BatteryController_Rev1_B.s21_state = 3.0;
      }
      break;

     default:
      /* Transition: '<S21>:27' */
      BatteryController_Rev1_DWork.s21_is_c8_BatteryController_Rev1 =
        BatteryController_Rev1_IN_Init_a;
      break;
    }
  }

  /* End of Stateflow: '<S8>/Precharge State' */
  /* If: '<S22>/If' incorporates:
   *  Inport: '<S26>/In1'
   *  Inport: '<S27>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S22>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   */
  if ((PrechargeState__Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S22>/NewValue' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    BatteryController_Rev1_B.s22_Merge = (PrechargeState__Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S26>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S22>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/OldValue' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    BatteryController_Rev1_B.s22_Merge = BatteryController_Rev1_B.s21_state;

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S22>/OldValue' */
  }

  /* End of If: '<S22>/If' */

  /* If: '<S101>/If' incorporates:
   *  Inport: '<S157>/In1'
   *  Inport: '<S158>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S101>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S101>/override_enable'
   */
  if ((PrechargeState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S101>/NewValue' incorporates:
     *  ActionPort: '<S157>/Action Port'
     */
    rtb_Merge_bp = (PrechargeState_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S157>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S101>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S101>/OldValue' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    rtb_Merge_bp = BatteryController_Rev1_B.s22_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S158>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S101>/OldValue' */
  }

  /* End of If: '<S101>/If' */

  /* If: '<S102>/If' incorporates:
   *  Inport: '<S159>/In1'
   *  Inport: '<S160>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S102>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S102>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration22'
   */
  if ((HVIL_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S102>/NewValue' incorporates:
     *  ActionPort: '<S159>/Action Port'
     */
    rtb_Merge_ll = (HVIL_Status_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S159>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S102>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S102>/OldValue' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    rtb_Merge_ll = (HVIL_Status_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S160>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S102>/OldValue' */
  }

  /* End of If: '<S102>/If' */

  /* If: '<S103>/If' incorporates:
   *  Inport: '<S161>/In1'
   *  Inport: '<S162>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S103>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S103>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration21'
   */
  if ((IsolationStatus_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S103>/NewValue' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    rtb_Merge_j1 = (IsolationStatus_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S161>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S103>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S103>/OldValue' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    rtb_Merge_j1 = (IsolationStatus_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S162>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S103>/OldValue' */
  }

  /* End of If: '<S103>/If' */

  /* If: '<S104>/If' incorporates:
   *  Inport: '<S163>/In1'
   *  Inport: '<S164>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S104>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S104>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration20'
   */
  if ((WakeSignal_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S104>/NewValue' incorporates:
     *  ActionPort: '<S163>/Action Port'
     */
    rtb_Merge_bv = (WakeSignal_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S163>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S104>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S104>/OldValue' incorporates:
     *  ActionPort: '<S164>/Action Port'
     */
    rtb_Merge_bv = (WakeSignal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S164>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S104>/OldValue' */
  }

  /* End of If: '<S104>/If' */

  /* If: '<S106>/If' incorporates:
   *  Inport: '<S167>/In1'
   *  Inport: '<S168>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S106>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S106>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration19'
   */
  if ((SleepInhibited_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S106>/NewValue' incorporates:
     *  ActionPort: '<S167>/Action Port'
     */
    rtb_Merge_h = (SleepInhibited_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S167>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S106>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S106>/OldValue' incorporates:
     *  ActionPort: '<S168>/Action Port'
     */
    rtb_Merge_h = (SleepInhibited_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S168>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S106>/OldValue' */
  }

  /* End of If: '<S106>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S35>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_415p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_415p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = 0 ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[7])) ;
      BatteryController_Rev1_B.s35_ReadCANMessage1 = (real_T) tmp0;
    }
  }

  /* If: '<S42>/If' incorporates:
   *  Inport: '<S53>/In1'
   *  Inport: '<S54>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S42>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S42>/override_enable'
   */
  if ((BalancingCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S42>/NewValue' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    rtb_MinMax = (BalancingCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S53>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S42>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S42>/OldValue' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    rtb_MinMax = BatteryController_Rev1_B.s35_ReadCANMessage1;

    /* S-Function (motohawk_sfun_code_cover): '<S54>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S42>/OldValue' */
  }

  /* End of If: '<S42>/If' */

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  BatteryController_Rev1_B.s81_Compare = ((rtb_MinMax > 0.0));

  /* If: '<S107>/If' incorporates:
   *  Inport: '<S169>/In1'
   *  Inport: '<S170>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S107>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S107>/override_enable'
   */
  if ((CellBalancingActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S107>/NewValue' incorporates:
     *  ActionPort: '<S169>/Action Port'
     */
    rtb_Merge_ik = ((uint8_T)(CellBalancingActive_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S169>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S107>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S107>/OldValue' incorporates:
     *  ActionPort: '<S170>/Action Port'
     */
    rtb_Merge_ik = BatteryController_Rev1_B.s81_Compare;

    /* S-Function (motohawk_sfun_code_cover): '<S170>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S107>/OldValue' */
  }

  /* End of If: '<S107>/If' */

  /* If: '<S108>/If' incorporates:
   *  Inport: '<S171>/In1'
   *  Inport: '<S172>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S108>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S108>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration17'
   */
  if ((MIL_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S108>/NewValue' incorporates:
     *  ActionPort: '<S171>/Action Port'
     */
    rtb_Merge_hf = (MIL_Status_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S171>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S108>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S108>/OldValue' incorporates:
     *  ActionPort: '<S172>/Action Port'
     */
    rtb_Merge_hf = (MILState_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S172>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S108>/OldValue' */
  }

  /* End of If: '<S108>/If' */

  /* If: '<S109>/If' incorporates:
   *  Inport: '<S173>/In1'
   *  Inport: '<S174>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S109>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S109>/override_enable'
   */
  if ((StateOfCharge_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S109>/NewValue' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    rtb_Merge_fq = (StateOfCharge_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S173>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S109>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S109>/OldValue' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    rtb_Merge_fq = BatteryController_Rev1_B.s32_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S174>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S109>/OldValue' */
  }

  /* End of If: '<S109>/If' */

  /* If: '<S110>/If' incorporates:
   *  Inport: '<S175>/In1'
   *  Inport: '<S176>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S110>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S110>/override_enable'
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration16'
   */
  if ((PS_RollingCounter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S110>/NewValue' incorporates:
     *  ActionPort: '<S175>/Action Port'
     */
    rtb_Merge_on = (PS_RollingCounter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S175>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S110>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S110>/OldValue' incorporates:
     *  ActionPort: '<S176>/Action Port'
     */
    rtb_Merge_on = (PS_RollingCounter_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S176>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S110>/OldValue' */
  }

  /* End of If: '<S110>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages5' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2fa */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        if (rtb_Merge_a < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_a > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_a);
        }

        if (rtb_Merge_bg < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_bg > 15.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_bg);
        }

        if (rtb_Merge_bp < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_bp > 7.0000000000F) {
          tmp2 = (uint8_T)(7U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_bp);
        }

        if (rtb_Merge_ll < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_ll > 3.0000000000F) {
          tmp3 = (uint8_T)(3U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_ll);
        }

        if (rtb_Merge_j1 < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_j1 > 3.0000000000F) {
          tmp4 = (uint8_T)(3U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_j1);
        }

        if (rtb_Merge_bv < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_bv > 3.0000000000F) {
          tmp5 = (uint8_T)(3U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_bv);
        }

        if (rtb_Merge_h < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_h > 3.0000000000F) {
          tmp6 = (uint8_T)(3U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_h);
        }

        if (rtb_Merge_ik > 3U) {
          tmp7 = (uint8_T)(3U);
        } else {
          tmp7 = (uint8_T)(rtb_Merge_ik);
        }

        if (rtb_Merge_hf < 0.0000000000F) {
          tmp8 = (uint8_T)(0U);
        } else if (rtb_Merge_hf > 7.0000000000F) {
          tmp8 = (uint8_T)(7U);
        } else {
          tmp8 = (uint8_T)(rtb_Merge_hf);
        }

        if (rtb_Merge_fq < 0.0000000000F) {
          tmp9 = (uint8_T)(0U);
        } else if (rtb_Merge_fq > 127.5000000000F) {
          tmp9 = (uint8_T)(255U);
        } else {
          tmp9 = (uint8_T)(rtb_Merge_fq * (2.0000000000F));
        }

        if (rtb_Merge_on < 0.0000000000F) {
          tmp10 = (uint8_T)(0U);
        } else if (rtb_Merge_on > 255.0000000000F) {
          tmp10 = (uint8_T)(255U);
        } else {
          tmp10 = (uint8_T)(rtb_Merge_on);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) | ((((uint8_T *)(
          &tmp2))[0] & 0x00000007) << 4) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp4))[0] & 0x00000003) << 2) | ((((uint8_T *)(&tmp5))[0] &
          0x00000003) << 4) | ((((uint8_T *)(&tmp6))[0] & 0x00000003) << 6) ;
        msg_data[3] = ((((uint8_T *)(&tmp7))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp8))[0] & 0x00000007) << 2) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = ((((uint8_T *)(&tmp9))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp10))[0])) ;
        CAN_1_Transmit(0, 0x2faUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe10' */
  (CoolantTemperature_Prb_DataStore()) = (CoolantTemperature_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe11' */
  (DPI_RollingCounter_Prb_DataStore()) = (DPI_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe15' */
  (PVC_RollingCounter_Prb_DataStore()) = (PVC_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe18' */
  (PPLCont_RollingCounter_Prb_DataStore()) = (PPL_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe2' */
  (StateOfChargeMax_Prb_DataStore()) = (StateOfChargeMax_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe21' */
  (IsolationLevel_Prb_DataStore()) = (IsolationLevel_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe22' */
  (ActiveDTC_Prb_DataStore()) = (FaultsDTC_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe23' */
  (PPL10s_RollingCounter_Prb_DataStore()) = (PPL10S_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe24' */
  (JCS_PackIdentifier_Prb_DataStore()) = (PackIdentifier_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe27' */
  (HVIL_Status_Prb_DataStore()) = (HVIL_Status_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe28' */
  (IsolationStatus_Prb_DataStore()) = (IsolationStatus_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe29' */
  (WakeSignal_Prb_DataStore()) = (WakeSignal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe3' */
  (StateOfChargeMin_Prb_DataStore()) = (StateOfChargeMin_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe30' */
  (SleepInhibited_Prb_DataStore()) = (SleepInhibited_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe32' */
  (MIL_Status_Prb_DataStore()) = (MILState_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe34' */
  (PS_RollingCounter_Prb_DataStore()) = (PS_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe4' */
  (TAH_RollingCounter_Prb_DataStore()) = (TAH_RollingCounter_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe8' */
  (MaxCellTemperature_Prb_DataStore()) = (MaxCellTemp_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S79>/motohawk_probe9' */
  (MinCellTemperature_Prb_DataStore()) = (MinCellTemp_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S82>/motohawk_data_write' */
  /* Write to Data Storage as scalar: AmpIn */
  {
    AmpIn_DataStore() = BatteryController_Rev1_B.s82_Sum;
  }

  /* S-Function (motohawk_sfun_data_write): '<S82>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: AmpOut */
  {
    AmpOut_DataStore() = BatteryController_Rev1_B.s82_Sum1;
  }

  /* Product: '<S82>/Product' incorporates:
   *  Constant: '<S82>/Constant4'
   *  RelationalOperator: '<S82>/Relational Operator'
   */
  rtb_MinMax = (real_T)(BatteryController_Rev1_B.s13_Merge < 0.0) *
    BatteryController_Rev1_B.s13_Merge;

  /* S-Function Block: <S117>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BatteryController_Rev1_DWork.s117_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S117>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S117>/motohawk_delta_time'
   */
  rtb_MinMax *= rtb_motohawk_delta_time;

  /* MinMax: '<S119>/MinMax' incorporates:
   *  Constant: '<S82>/Constant1'
   */
  rtb_Voltage = rtb_MinMax >= 0.0 ? rtb_MinMax : 0.0;

  /* MinMax: '<S119>/MinMax1' incorporates:
   *  MinMax: '<S119>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration'
   */
  minV = (rtb_Voltage <= (Max_AmphoursIn_DataStore())) || rtIsNaN
    ((Max_AmphoursIn_DataStore())) ? rtb_Voltage : (Max_AmphoursIn_DataStore());

  /* Product: '<S82>/Product1' incorporates:
   *  Constant: '<S82>/Constant4'
   *  RelationalOperator: '<S82>/Relational Operator1'
   */
  rtb_MinMax = (real_T)(BatteryController_Rev1_B.s13_Merge > 0.0) *
    BatteryController_Rev1_B.s13_Merge;

  /* S-Function Block: <S118>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BatteryController_Rev1_DWork.s118_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S118>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S118>/motohawk_delta_time'
   */
  rtb_MinMax *= rtb_motohawk_delta_time_a;

  /* MinMax: '<S120>/MinMax' incorporates:
   *  Constant: '<S82>/Constant3'
   */
  rtb_Voltage = rtb_MinMax >= 0.0 ? rtb_MinMax : 0.0;

  /* MinMax: '<S120>/MinMax1' incorporates:
   *  MinMax: '<S120>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration2'
   */
  rtb_MinMax = (rtb_Voltage <= (Max_AmphoursOut_DataStore())) || rtIsNaN
    ((Max_AmphoursOut_DataStore())) ? rtb_Voltage : (Max_AmphoursOut_DataStore());

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S71>/In1'
   *  Inport: '<S72>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S66>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   */
  if ((DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    rtb_Voltage = (DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    rtb_Voltage = (DutyCycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

  /* DataTypeConversion: '<S37>/Data Type Conversion2' */
  if (rtIsNaN(rtb_Voltage) || rtIsInf(rtb_Voltage)) {
    rtb_Voltage = 0.0;
  } else {
    rtb_Voltage = fmod(floor(rtb_Voltage), 65536.0);
  }

  BatteryController_Rev1_B.s37_DutyCycle = (int16_T)(rtb_Voltage < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-rtb_Voltage : (int16_T)(uint16_T)rtb_Voltage);

  /* End of DataTypeConversion: '<S37>/Data Type Conversion2' */

  /* DataTypeConversion: '<S80>/Data Type Conversion3' */
  BatteryController_Rev1_B.s80_DataTypeConversion3 =
    BatteryController_Rev1_B.s16_PreChargeFreq;

  /* If: '<S189>/If' incorporates:
   *  Inport: '<S196>/In1'
   *  Inport: '<S197>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S189>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S189>/override_enable'
   */
  if ((Coil1_Pos_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S189>/NewValue' incorporates:
     *  ActionPort: '<S196>/Action Port'
     */
    rtb_Merge_fy = (Coil1_Pos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S196>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S189>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S189>/OldValue' incorporates:
     *  ActionPort: '<S197>/Action Port'
     */
    rtb_Merge_fy = BatteryController_Rev1_B.s16_Positive;

    /* S-Function (motohawk_sfun_code_cover): '<S197>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S189>/OldValue' */
  }

  /* End of If: '<S189>/If' */

  /* If: '<S190>/If' incorporates:
   *  Inport: '<S198>/In1'
   *  Inport: '<S199>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S190>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S190>/override_enable'
   */
  if ((Coil2_Pos_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S190>/NewValue' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */
    rtb_Merge_ox = (Coil2_Pos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S198>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S190>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S190>/OldValue' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    rtb_Merge_ox = BatteryController_Rev1_B.s16_PreChargeCoil;

    /* S-Function (motohawk_sfun_code_cover): '<S199>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S190>/OldValue' */
  }

  /* End of If: '<S190>/If' */

  /* If: '<S192>/If' incorporates:
   *  Inport: '<S202>/In1'
   *  Inport: '<S203>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S192>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S192>/override_enable'
   */
  if ((PreCharge_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S192>/NewValue' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    rtb_Merge_gi = (PreCharge_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S202>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S192>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S192>/OldValue' incorporates:
     *  ActionPort: '<S203>/Action Port'
     */
    rtb_Merge_gi = BatteryController_Rev1_B.s16_PreChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S203>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S192>/OldValue' */
  }

  /* End of If: '<S192>/If' */

  /* If: '<S193>/If' incorporates:
   *  Inport: '<S204>/In1'
   *  Inport: '<S205>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S193>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S193>/override_enable'
   */
  if ((PreCharge_Duty_Cyle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S193>/NewValue' incorporates:
     *  ActionPort: '<S204>/Action Port'
     */
    rtb_Merge_ch = ((int16_T)(PreCharge_Duty_Cyle_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S204>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S193>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S193>/OldValue' incorporates:
     *  ActionPort: '<S205>/Action Port'
     */
    rtb_Merge_ch = BatteryController_Rev1_B.s37_DutyCycle;

    /* S-Function (motohawk_sfun_code_cover): '<S205>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S193>/OldValue' */
  }

  /* End of If: '<S193>/If' */

  /* If: '<S194>/If' incorporates:
   *  Inport: '<S206>/In1'
   *  Inport: '<S207>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S194>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S194>/override_enable'
   */
  if ((PreCharge_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S194>/NewValue' incorporates:
     *  ActionPort: '<S206>/Action Port'
     */
    rtb_Merge_hh = (PreCharge_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S206>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S194>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S194>/OldValue' incorporates:
     *  ActionPort: '<S207>/Action Port'
     */
    rtb_Merge_hh = BatteryController_Rev1_B.s80_DataTypeConversion3;

    /* S-Function (motohawk_sfun_code_cover): '<S207>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S194>/OldValue' */
  }

  /* End of If: '<S194>/If' */

  /* If: '<S195>/If' incorporates:
   *  Inport: '<S208>/In1'
   *  Inport: '<S209>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S195>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S195>/override_enable'
   */
  if ((Coil1_Neg_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S195>/NewValue' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */
    rtb_Merge_an = (Coil1_Neg_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S208>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S195>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S195>/OldValue' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    rtb_Merge_an = BatteryController_Rev1_B.s16_Negative;

    /* S-Function (motohawk_sfun_code_cover): '<S209>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S195>/OldValue' */
  }

  /* End of If: '<S195>/If' */

  /* If: '<S191>/If' incorporates:
   *  Constant: '<S80>/Constant'
   *  Inport: '<S200>/In1'
   *  Inport: '<S201>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S191>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S191>/override_enable'
   */
  if ((Coil3_Pos_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S191>/NewValue' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    rtb_Merge_a5 = (Coil3_Pos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S200>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S191>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S191>/OldValue' incorporates:
     *  ActionPort: '<S201>/Action Port'
     */
    rtb_Merge_a5 = FALSE;

    /* S-Function (motohawk_sfun_code_cover): '<S201>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S191>/OldValue' */
  }

  /* End of If: '<S191>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S37>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_498p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_498p001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
      BatteryController_Rev1_B.s37_ReadCANMessage_o1 = (real_T) tmp0;
    }
  }

  /* If: '<S67>/If' incorporates:
   *  Inport: '<S73>/In1'
   *  Inport: '<S74>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S67>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   */
  if ((Battery_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S67>/NewValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Voltage = (Battery_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S67>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S67>/OldValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Voltage = BatteryController_Rev1_B.s37_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S67>/OldValue' */
  }

  /* End of If: '<S67>/If' */

  /* Stateflow: '<S7>/Amp Clamp Offsets' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Battery/Control/AMP Clamp/Amp Clamp Offsets */
  /* During: Foreground/Battery/Control/AMP Clamp/Amp Clamp Offsets */
  if (BatteryController_Rev1_DWork.s11_is_active_c2_BatteryController_Rev1 == 0)
  {
    /* Entry: Foreground/Battery/Control/AMP Clamp/Amp Clamp Offsets */
    BatteryController_Rev1_DWork.s11_is_active_c2_BatteryController_Rev1 = 1U;

    /* Transition: '<S11>:7' */
    BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 =
      BatteryController_Rev1_IN_default_off;
  } else {
    switch (BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1) {
     case BatteryController_Rev1_IN_Offsets:
      /* During 'Offsets': '<S11>:8' */
      if (Amp_Offset_DataStore() == BatteryController_Rev1_B.s12_amps) {
        /* Transition: '<S11>:13' */
        BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 =
          BatteryController_Rev1_IN_default_on;
      }
      break;

     case BatteryController_Rev1_IN_default_off:
      /* During 'default_off': '<S11>:4' */
      if (rtb_Voltage == 1.0) {
        /* Transition: '<S11>:10' */
        BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 =
          BatteryController_Rev1_IN_Offsets;

        /* Entry 'Offsets': '<S11>:8' */
        BatteryController_Rev1_B.s11_Offset_Out =
          BatteryController_Rev1_B.s12_amps;
      } else {
        BatteryController_Rev1_B.s11_Offset_Out = Amp_Offset_DataStore();
      }
      break;

     case BatteryController_Rev1_IN_default_on:
      /* During 'default_on': '<S11>:11' */
      if (rtb_Voltage == 0.0) {
        /* Transition: '<S11>:14' */
        BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 =
          BatteryController_Rev1_IN_default_off;
      } else {
        BatteryController_Rev1_B.s11_Offset_Out = Amp_Offset_DataStore();
      }
      break;

     default:
      /* Transition: '<S11>:7' */
      BatteryController_Rev1_DWork.s11_is_c2_BatteryController_Rev1 =
        BatteryController_Rev1_IN_default_off;
      break;
    }
  }

  /* End of Stateflow: '<S7>/Amp Clamp Offsets' */

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Amp_Offset */
  {
    Amp_Offset_DataStore() = BatteryController_Rev1_B.s11_Offset_Out;
  }

  /* Outputs for Enabled SubSystem: '<S8>/Delay5' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  if (BatteryController_Rev1_B.s21_delay5Out > 0.0) {
    /* Stateflow: '<S18>/Delay 5 Chart' */
    BatteryController_Rev1_Delay3Chart((Delay_5_Cal_DataStore()),
      &BatteryController_Rev1_B.s18_sf_Delay5Chart,
      &BatteryController_Rev1_DWork.s18_sf_Delay5Chart);
  }

  /* End of Outputs for SubSystem: '<S8>/Delay5' */

  /* S-Function (motohawk_sfun_data_write): '<S8>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Delay5 */
  {
    Delay5_DataStore() = BatteryController_Rev1_B.s18_sf_Delay5Chart.s24_write;
  }

  /* Outputs for Enabled SubSystem: '<S8>/Delay3' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (BatteryController_Rev1_B.s21_delay3Out > 0.0) {
    /* Stateflow: '<S17>/Delay 3 Chart' */
    BatteryController_Rev1_Delay3Chart((Delay_3_Cal_DataStore()),
      &BatteryController_Rev1_B.s17_sf_Delay3Chart,
      &BatteryController_Rev1_DWork.s17_sf_Delay3Chart);
  }

  /* End of Outputs for SubSystem: '<S8>/Delay3' */

  /* S-Function (motohawk_sfun_data_write): '<S8>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Delay3 */
  {
    Delay3_DataStore() = BatteryController_Rev1_B.s17_sf_Delay3Chart.s24_write;
  }

  /* UnitDelay: '<S19>/Unit Delay' */
  rtb_UnitDelay4_e = BatteryController_Rev1_DWork.s19_UnitDelay_DSTATE;

  /* UnitDelay: '<S19>/Unit Delay1' */
  rtb_UnitDelay1_a = BatteryController_Rev1_DWork.s19_UnitDelay1_DSTATE;

  /* UnitDelay: '<S19>/Unit Delay2' */
  rtb_UnitDelay2_g = BatteryController_Rev1_DWork.s19_UnitDelay2_DSTATE;

  /* UnitDelay: '<S19>/Unit Delay3' */
  rtb_UnitDelay3_a = BatteryController_Rev1_DWork.s19_UnitDelay3_DSTATE;

  /* If: '<S40>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S40>/override_enable'
   */
  if ((MaxCellTemp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S40>/NewValue' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S40>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S40>/OldValue' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S40>/OldValue' */
  }

  /* End of If: '<S40>/If' */

  /* If: '<S41>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S41>/override_enable'
   */
  if ((MinCellTemp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S41>/NewValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S41>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S41>/OldValue' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S41>/OldValue' */
  }

  /* End of If: '<S41>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S35>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_414p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_414p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = 0 ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[7])) ;
      BatteryController_Rev1_B.s35_ReadCANMessage = (real_T) tmp0;
    }
  }

  /* If: '<S43>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S43>/override_enable'
   */
  if ((FaultsDTC_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S43>/NewValue' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S55>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S43>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S43>/OldValue' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S56>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S43>/OldValue' */
  }

  /* End of If: '<S43>/If' */

  /* Outputs for Triggered SubSystem: '<S37>/Save NV on disconnect' incorporates:
   *  TriggerPort: '<S65>/Trigger'
   */
  if (rt_ZCFcn(FALLING_ZERO_CROSSING,
               &BatteryController_Rev1_PrevZCSigState.SaveNVondisconnect_Trig_ZCE,
               (rtb_Voltage)) != NO_ZCEVENT) {
    /* Outputs for Function Call SubSystem: '<S65>/Save NV Vars one tick before MPRD off' */

    /* S-Function (motohawk_sfun_code_cover): '<S70>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect/Save NV Vars one tick before MPRD off */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* S-Function (motohawk_sfun_store_nvmem): '<S70>/motohawk_event_call' */
    {
      extern void NonVolatile_StoreNonVolatile(void);
      NonVolatile_StoreNonVolatile();
    }

    /* End of Outputs for SubSystem: '<S65>/Save NV Vars one tick before MPRD off' */

    /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
    /* Code Coverage Test: BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }
  }

  /* End of Outputs for SubSystem: '<S37>/Save NV on disconnect' */

  /* S-Function (motohawk_sfun_probe): '<S37>/motohawk_probe10' */
  (DutyCycle_Prb_DataStore()) = (DutyCycle_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S37>/motohawk_probe8' */
  (FreqStart_Prb_DataStore()) = (FreqStart_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S37>/motohawk_probe9' */
  (FreqEnd_Prb_DataStore()) = (FreqEnd_DataStore());

  /* S-Function (motohawk_sfun_code_cover): '<S1>/motohawk_code_coverage' */
  /* Code Coverage Test: BatteryController_Rev1/Foreground */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(0);
  }

  /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
   *  MinMax: '<S120>/MinMax1'
   */
  BatteryController_Rev1_DWork.s118_UnitDelay_DSTATE = rtb_MinMax;

  /* Update for UnitDelay: '<S117>/Unit Delay' incorporates:
   *  MinMax: '<S119>/MinMax1'
   */
  BatteryController_Rev1_DWork.s117_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  BatteryController_Rev1_DWork.s10_UnitDelay1_DSTATE = rtb_Abs;

  /* Update for UnitDelay: '<S30>/Unit Delay1' */
  BatteryController_Rev1_DWork.s30_UnitDelay1_DSTATE =
    BatteryController_Rev1_B.s30_Switch;

  /* Update for UnitDelay: '<S19>/Unit Delay4' */
  BatteryController_Rev1_DWork.s19_UnitDelay4_DSTATE = rtb_UnitDelay3_a;

  /* Update for S-Function (motohawk_sfun_dout): '<S80>/motohawk_dout1' */

  /* S-Function Block: DOut953p0001 */
  {
    DOut953p0001_DiscreteOutput_Set(rtb_Merge_fy);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S80>/motohawk_dout2' */

  /* S-Function Block: DOut954p0001 */
  {
    DOut954p0001_DiscreteOutput_Set(rtb_Merge_an);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S80>/motohawk_dout3' */

  /* S-Function Block: DOut955p0001 */
  {
    DOut955p0001_DiscreteOutput_Set(rtb_Merge_ox);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S80>/motohawk_pwm' */

  /* S-Function Block: EST1_PWMOutput */
  EST1_PWMOutput_PWMOutput_Set(rtb_Merge_hh, rtb_Merge_ch, 0, rtb_Merge_gi);

  /* Update for S-Function (motohawk_sfun_dout): '<S80>/motohawk_dout4' */

  /* S-Function Block: DOut956p0001 */
  {
    DOut956p0001_DiscreteOutput_Set(rtb_Merge_a5);
  }

  /* Update for UnitDelay: '<S19>/Unit Delay' incorporates:
   *  DataTypeConversion: '<S19>/Data Type Conversion'
   */
  BatteryController_Rev1_DWork.s19_UnitDelay_DSTATE = ((rtb_Voltage != 0.0));

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  BatteryController_Rev1_DWork.s19_UnitDelay1_DSTATE = rtb_UnitDelay4_e;

  /* Update for UnitDelay: '<S19>/Unit Delay2' */
  BatteryController_Rev1_DWork.s19_UnitDelay2_DSTATE = rtb_UnitDelay1_a;

  /* Update for UnitDelay: '<S19>/Unit Delay3' */
  BatteryController_Rev1_DWork.s19_UnitDelay3_DSTATE = rtb_UnitDelay2_g;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
