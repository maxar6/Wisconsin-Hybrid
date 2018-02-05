/*
 * File: DynoController_Rev1_Foreground.c
 *
 * Code generated for Simulink model 'DynoController_Rev1'.
 *
 * Model version                  : 1.298
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Jan 15 12:10:05 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1_Foreground.h"

/* Include model header file for global data */
#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

/* Named constants for Stateflow: '<S8>/Chart' */
#define DynoController_Rev1_IN_Batterybootup (1U)
#define DynoController_Rev1_IN_Charging_and_Temp (2U)
#define DynoController_Rev1_IN_Initial (3U)
#define DynoController_Rev1_IN_Kill_Component_Keyed (4U)
#define DynoController_Rev1_IN_Normal_Operation (5U)
#define DynoController_Rev1_IN_Shutdown_Sequence (6U)

/* Initial conditions for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Init(void)
{
  /* S-Function Block: <S13>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    DynoController_Rev1_DWork.s13_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S12>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    DynoController_Rev1_DWork.s12_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S8>/Chart' */
  DynoController_Rev1_DWork.s16_is_active_c1_DynoController_Rev1 = 0U;
  DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 = 0U;
  DynoController_Rev1_B.s16_Vehicle_Enable = FALSE;
  DynoController_Rev1_B.s16_Vehicle_Ready = FALSE;
  DynoController_Rev1_B.s16_Torque_Enable = FALSE;
  DynoController_Rev1_B.s16_Keyed_Relay = FALSE;

  /* Initial conditions for function-call system: '<S6>/Guages' */

  /* S-Function Block: <S124>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    DynoController_Rev1_DWork.s124_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10837p0011 */
  DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Disable(void)
{
  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_10837p0011 */
  DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Start(void)
{
  /* Start for function-call system: '<S6>/Guages' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S77>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10837p0011 */
  DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* S-Function (motohawk_sfun_probe): '<S75>/motohawk_probe7' */
  (ACC1_Light_Prb_DataStore()) = FALSE;

  /* S-Function (motohawk_sfun_probe): '<S75>/motohawk_probe8' */
  (ACC2_Light_Prb_DataStore()) = FALSE;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_motohawk_delta_time_h;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_Merge_oa;
  real_T rtb_Saturation_a;
  real_T rtb_Saturation_j;
  boolean_T rtb_Merge_oaf;
  boolean_T rtb_Merge_l;
  boolean_T rtb_Merge_lo;
  boolean_T rtb_Merge_aw;
  boolean_T rtb_Merge_i;
  boolean_T rtb_Merge_nt;
  boolean_T rtb_Merge_p;
  boolean_T rtb_Merge_nn;
  boolean_T rtb_Ignition;
  boolean_T rtb_Merge_h;
  boolean_T rtb_Merge_d;
  boolean_T rtb_Merge_ha;
  boolean_T rtb_Merge_j;
  boolean_T rtb_LogicalOperator_h;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator4_l;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Switch;
  boolean_T rtb_RelationalOperator1_o;
  real_T rtb_Merge_c;
  boolean_T rtb_Merge_n;
  real_T rtb_Merge_o;

  /* Logic: '<S7>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = !Vehicle_Enable_DataStore();

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read3'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 || Shutdown_Req_DataStore());

  /* If: '<S11>/If' incorporates:
   *  Inport: '<S14>/In1'
   *  Inport: '<S15>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S11>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S11>/override_enable'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S11>/NewValue' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    DynoController_Rev1_B.s11_Merge = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S14>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S11>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S11>/OldValue' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    DynoController_Rev1_B.s11_Merge = rtb_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S15>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S11>/OldValue' */
  }

  /* End of If: '<S11>/If' */

  /* Logic: '<S10>/Logical Operator3' */
  rtb_LogicalOperator5 = !DynoController_Rev1_B.s11_Merge;

  /* S-Function Block: <S13>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&DynoController_Rev1_DWork.s13_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant'
   *  Logic: '<S10>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S13>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S13>/motohawk_delta_time'
   *  Sum: '<S13>/Sum'
   */
  if (!DynoController_Rev1_B.s11_Merge) {
    rtb_Switch = rtb_motohawk_delta_time_h + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Switch = 0.0;
  }

  /* End of Switch: '<S13>/Switch' */
  /* RelationalOperator: '<S10>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_o = (rtb_Switch >= (Load_Enable_Delay_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S37>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_217p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_217p001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp1 = 0;
      uint8_T tmp9 = 0;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[6])) ;
      DynoController_Rev1_B.s37_PackState = (real_T) tmp1;
      DynoController_Rev1_B.s37_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
    }
  }

  /* If: '<S40>/If' incorporates:
   *  Inport: '<S46>/In1'
   *  Inport: '<S47>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S40>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S40>/override_enable'
   */
  if ((PackState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S40>/NewValue' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    rtb_Merge_c = (PackState_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S40>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S40>/OldValue' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    rtb_Merge_c = DynoController_Rev1_B.s37_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S40>/OldValue' */
  }

  /* End of If: '<S40>/If' */

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Constant: '<S9>/Constant'
   */
  rtb_Compare = (rtb_Merge_c == 4.0);

  /* Logic: '<S10>/Logical Operator4' */
  rtb_LogicalOperator4_l = (rtb_LogicalOperator5 && rtb_RelationalOperator1_o &&
    rtb_Compare);

  /* If: '<S39>/If' incorporates:
   *  Inport: '<S44>/In1'
   *  Inport: '<S45>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S39>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S39>/override_enable'
   */
  if ((StateOfCharge_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S39>/NewValue' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    DynoController_Rev1_B.s39_Merge = (StateOfCharge_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S39>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S39>/OldValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    DynoController_Rev1_B.s39_Merge = DynoController_Rev1_B.s37_StateOfCharge;

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S39>/OldValue' */
  }

  /* End of If: '<S39>/If' */

  /* Logic: '<S75>/Logical Operator' incorporates:
   *  RelationalOperator: '<S75>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration'
   */
  DynoController_Rev1_B.s75_LogicalOperator = ((rtb_LogicalOperator4_l &&
    (DynoController_Rev1_B.s39_Merge >= (SOC_Load_Dump_DataStore()))));

  /* S-Function Block: <S17>/motohawk_din1 Resource: LoadDumpEnable */
  {
    extern NativeError_S LoadDumpEnable_DigitalInput_Get(boolean_T *out,
      uint16_T *status);
    LoadDumpEnable_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din1,
      NULL);
  }

  /* If: '<S19>/If' incorporates:
   *  Inport: '<S25>/In1'
   *  Inport: '<S26>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S19>/override_enable'
   */
  if ((LoadDumpEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S19>/NewValue' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    rtb_LogicalOperator5 = (LoadDumpEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S25>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S19>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S19>/OldValue' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    rtb_LogicalOperator5 = DynoController_Rev1_B.s17_motohawk_din1;

    /* S-Function (motohawk_sfun_code_cover): '<S26>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S19>/OldValue' */
  }

  /* End of If: '<S19>/If' */

  /* Logic: '<S75>/Logical Operator1' */
  DynoController_Rev1_B.s75_LogicalOperator1 =
    ((DynoController_Rev1_B.s75_LogicalOperator && rtb_LogicalOperator5));

  /* RelationalOperator: '<S75>/Relational Operator2' incorporates:
   *  Constant: '<S75>/Constant1'
   */
  DynoController_Rev1_B.s75_RelationalOperator2 = ((rtb_Merge_c <= 4.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S38>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_255p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_255p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1] & 0x000000C0) >> 6) |
        ((messageObj.u1DataArr[0] & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x000000C0) >> 6) |
        ((messageObj.u1DataArr[1] & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3] & 0x000000C0) >> 6) |
        ((messageObj.u1DataArr[2] & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[3] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[3] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[3] & 0x00000006) >> 1) ;
      DynoController_Rev1_B.s38_ReadCANMessage_o1 = ((int16_T) tmp0) * ((int16_T)
        10);
      DynoController_Rev1_B.s38_ReadCANMessage_o2 = (real_T) tmp1;
      DynoController_Rev1_B.s38_ReadCANMessage_o3 = ((real_T) tmp2) + ((real_T)
        -40);
      DynoController_Rev1_B.s38_ReadCANMessage_o4 = (real_T) tmp3;
      DynoController_Rev1_B.s38_ReadCANMessage_o5 = (boolean_T) tmp4;
      DynoController_Rev1_B.s38_ReadCANMessage_o6 = (real_T) tmp5;
      DynoController_Rev1_B.s38_ReadCANMessage_o7 = (real_T) tmp6;
    }
  }

  /* If: '<S58>/If' incorporates:
   *  Inport: '<S69>/In1'
   *  Inport: '<S70>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S58>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S58>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S58>/NewValue' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    rtb_Merge_n = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S69>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S58>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S58>/OldValue' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    rtb_Merge_n = DynoController_Rev1_B.s38_ReadCANMessage_o5;

    /* S-Function (motohawk_sfun_code_cover): '<S70>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S58>/OldValue' */
  }

  /* End of If: '<S58>/If' */

  /* Logic: '<S75>/Logical Operator2' */
  DynoController_Rev1_B.s75_LogicalOperator2 =
    ((DynoController_Rev1_B.s75_LogicalOperator && rtb_Merge_n));

  /* If: '<S78>/If' incorporates:
   *  Inport: '<S86>/In1'
   *  Inport: '<S87>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S78>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S78>/override_enable'
   */
  if ((Coil_Neg_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S78>/NewValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    rtb_Merge_oaf = (Coil_Neg_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S86>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S78>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S78>/OldValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    rtb_Merge_oaf = DynoController_Rev1_B.s75_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S87>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S78>/OldValue' */
  }

  /* End of If: '<S78>/If' */

  /* If: '<S79>/If' incorporates:
   *  Inport: '<S88>/In1'
   *  Inport: '<S89>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S79>/override_enable'
   */
  if ((Coil_Pos_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S79>/NewValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_Merge_l = (Coil_Pos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S88>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S79>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S79>/OldValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_Merge_l = DynoController_Rev1_B.s75_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S89>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S79>/OldValue' */
  }

  /* End of If: '<S79>/If' */

  /* If: '<S80>/If' incorporates:
   *  Inport: '<S90>/In1'
   *  Inport: '<S91>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S80>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   */
  if ((Battery_Enable_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S80>/NewValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_Merge_lo = (Battery_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S90>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S80>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S80>/OldValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Merge_lo = DynoController_Rev1_B.s75_RelationalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S91>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

  /* If: '<S81>/If' incorporates:
   *  Inport: '<S92>/In1'
   *  Inport: '<S93>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S81>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S81>/override_enable'
   */
  if ((Load_Dump_Enable_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S81>/NewValue' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    rtb_Merge_aw = (Load_Dump_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S92>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S81>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S81>/OldValue' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    rtb_Merge_aw = DynoController_Rev1_B.s75_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S93>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S81>/OldValue' */
  }

  /* End of If: '<S81>/If' */

  /* If: '<S82>/If' incorporates:
   *  Inport: '<S94>/In1'
   *  Inport: '<S95>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S82>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S82>/override_enable'
   */
  if ((Genset_Enable_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S82>/NewValue' incorporates:
     *  ActionPort: '<S94>/Action Port'
     */
    rtb_Merge_i = (Genset_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S94>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S82>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S82>/OldValue' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    rtb_Merge_i = DynoController_Rev1_B.s75_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S95>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S82>/OldValue' */
  }

  /* End of If: '<S82>/If' */

  /* If: '<S83>/If' incorporates:
   *  Inport: '<S96>/In1'
   *  Inport: '<S97>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S83>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S83>/override_enable'
   */
  if ((Genset_Load_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S83>/NewValue' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    rtb_Merge_nt = (Genset_Load_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S96>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S83>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S83>/OldValue' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    rtb_Merge_nt = DynoController_Rev1_B.s75_LogicalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S97>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S83>/OldValue' */
  }

  /* End of If: '<S83>/If' */

  /* If: '<S84>/If' incorporates:
   *  Constant: '<S75>/Constant2'
   *  Inport: '<S98>/In1'
   *  Inport: '<S99>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S84>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S84>/override_enable'
   */
  if ((ACC1_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S84>/NewValue' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    rtb_Merge_p = (ACC1_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S98>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S84>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S84>/OldValue' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    rtb_Merge_p = FALSE;

    /* S-Function (motohawk_sfun_code_cover): '<S99>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S84>/OldValue' */
  }

  /* End of If: '<S84>/If' */

  /* If: '<S85>/If' incorporates:
   *  Constant: '<S75>/Constant3'
   *  Inport: '<S100>/In1'
   *  Inport: '<S101>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S85>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S85>/override_enable'
   */
  if ((ACC2_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S85>/NewValue' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    rtb_Merge_nn = (ACC2_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S85>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S85>/OldValue' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    rtb_Merge_nn = FALSE;

    /* S-Function (motohawk_sfun_code_cover): '<S101>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S85>/OldValue' */
  }

  /* End of If: '<S85>/If' */

  /* Logic: '<S102>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* S-Function (motohawk_sfun_read_canmsg): '<S37>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_219p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_219p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      DynoController_Rev1_B.s37_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      DynoController_Rev1_B.s37_BatteryCurrent = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -500);
    }
  }

  /* If: '<S41>/If' incorporates:
   *  Inport: '<S48>/In1'
   *  Inport: '<S49>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S41>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S41>/override_enable'
   */
  if ((BatteryVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S41>/NewValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    rtb_Merge_o = (BatteryVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S41>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S41>/OldValue' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    rtb_Merge_o = DynoController_Rev1_B.s37_BatteryVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S41>/OldValue' */
  }

  /* End of If: '<S41>/If' */

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = ((Automatic_Battery_Bootup_DataStore()) && (rtb_Merge_o
    > 50.0));

  /* S-Function Block: <S12>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&DynoController_Rev1_DWork.s12_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S12>/motohawk_delta_time'
   *  Sum: '<S12>/Sum'
   */
  if (DynoController_Rev1_B.s11_Merge) {
    rtb_Merge_o = rtb_motohawk_delta_time_p + Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Merge_o = 0.0;
  }

  /* End of Switch: '<S12>/Switch' */
  /* Logic: '<S10>/Logical Operator2' incorporates:
   *  Logic: '<S10>/Logical Operator6'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration'
   */
  DynoController_Rev1_B.s10_LogicalOperator2 = ((rtb_LogicalOperator5 &&
    (!(rtb_Merge_o >= (Contactor_Disable_Delay_DataStore())))));

  /* S-Function Block: <S17>/motohawk_din Resource: BatteryEnable */
  {
    extern NativeError_S BatteryEnable_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    BatteryEnable_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din, NULL);
  }

  /* If: '<S20>/If' incorporates:
   *  Inport: '<S27>/In1'
   *  Inport: '<S28>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S20>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S20>/override_enable'
   */
  if ((BatteryEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S20>/NewValue' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    rtb_LogicalOperator5 = (BatteryEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S20>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S20>/OldValue' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    rtb_LogicalOperator5 = DynoController_Rev1_B.s17_motohawk_din;

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S20>/OldValue' */
  }

  /* End of If: '<S20>/If' */

  /* Logic: '<S102>/Logical Operator2' */
  DynoController_Rev1_B.s102_ConnectCommand = ((rtb_LogicalOperator5 &&
    DynoController_Rev1_B.s10_LogicalOperator2));

  /* If: '<S104>/If' incorporates:
   *  Inport: '<S106>/In1'
   *  Inport: '<S107>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S104>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S104>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S104>/NewValue' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    rtb_Merge_h = (Batt_Connect_Cmd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S106>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S104>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S104>/OldValue' incorporates:
     *  ActionPort: '<S107>/Action Port'
     */
    rtb_Merge_h = DynoController_Rev1_B.s102_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S107>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S104>/OldValue' */
  }

  /* End of If: '<S104>/If' */

  /* Logic: '<S102>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration'
   */
  DynoController_Rev1_B.s102_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S105>/If' incorporates:
   *  Inport: '<S108>/In1'
   *  Inport: '<S109>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S105>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S105>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S105>/NewValue' incorporates:
     *  ActionPort: '<S108>/Action Port'
     */
    rtb_Merge_d = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S108>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S105>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S105>/OldValue' incorporates:
     *  ActionPort: '<S109>/Action Port'
     */
    rtb_Merge_d = DynoController_Rev1_B.s102_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S109>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S105>/OldValue' */
  }

  /* End of If: '<S105>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S102>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x2f0 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint32_T tmp3;
        uint8_T tmp4;
        tmp0 = (uint8_T)(rtb_Merge_h);
        tmp1 = (uint8_T)(rtb_Merge_d);
        tmp2 = (uint8_T)(rtb_Ignition);
        if (DynoController_Rev1_ConstB.s102_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (DynoController_Rev1_ConstB.s102_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(DynoController_Rev1_ConstB.s102_OdometerValue *
                            (10.0000000000F));
        }

        tmp4 = (uint8_T)(255U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) | ((((uint8_T *)(&tmp2))[0] &
          0x00000003) << 6) | ((((uint8_T *)(&tmp3))[0] & 0x00000000)) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[2])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[3])) ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_1_Transmit(0, 0x2f0UL, 6, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S17>/motohawk_din2 Resource: GensetEnable */
  {
    extern NativeError_S GensetEnable_DigitalInput_Get(boolean_T *out, uint16_T *
      status);
    GensetEnable_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din2, NULL);
  }

  /* If: '<S21>/If' incorporates:
   *  Inport: '<S29>/In1'
   *  Inport: '<S30>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S21>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S21>/override_enable'
   */
  if ((GensetEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S21>/NewValue' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    rtb_RelationalOperator1_o = (GensetEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S21>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/OldValue' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    rtb_RelationalOperator1_o = DynoController_Rev1_B.s17_motohawk_din2;

    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S21>/OldValue' */
  }

  /* End of If: '<S21>/If' */

  /* Logic: '<S103>/Logical Operator' incorporates:
   *  Constant: '<S103>/Constant'
   *  RelationalOperator: '<S103>/Relational Operator'
   */
  DynoController_Rev1_B.s103_Gen_Enable = ((rtb_RelationalOperator1_o &&
    (rtb_Merge_c == 4.0)));

  /* Logic: '<S103>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S103>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration'
   */
  DynoController_Rev1_B.s103_Gen_Load = ((DynoController_Rev1_B.s103_Gen_Enable &&
    rtb_Merge_n && rtb_RelationalOperator1_o && (DynoController_Rev1_B.s39_Merge
    <= (SOC_Off_Pt_DataStore()))));

  /* If: '<S110>/If' incorporates:
   *  Inport: '<S113>/In1'
   *  Inport: '<S114>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S110>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S110>/override_enable'
   */
  if ((Gen_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S110>/NewValue' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    rtb_Merge_ha = (Gen_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S113>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S110>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S110>/OldValue' incorporates:
     *  ActionPort: '<S114>/Action Port'
     */
    rtb_Merge_ha = DynoController_Rev1_B.s103_Gen_Load;

    /* S-Function (motohawk_sfun_code_cover): '<S114>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S110>/OldValue' */
  }

  /* End of If: '<S110>/If' */

  /* If: '<S111>/If' incorporates:
   *  Inport: '<S115>/In1'
   *  Inport: '<S116>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S111>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S111>/override_enable'
   */
  if ((Gen_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S111>/NewValue' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    rtb_Merge_j = (Gen_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S115>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S111>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S111>/OldValue' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    rtb_Merge_j = DynoController_Rev1_B.s103_Gen_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S116>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S111>/OldValue' */
  }

  /* End of If: '<S111>/If' */

  /* If: '<S112>/If' incorporates:
   *  Inport: '<S117>/In1'
   *  Inport: '<S118>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S112>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S112>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S112>/NewValue' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */
    rtb_Merge_oa = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S117>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S112>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S112>/OldValue' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    rtb_Merge_oa = (Vehicle_Speed_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S118>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S112>/OldValue' */
  }

  /* End of If: '<S112>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S103>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x210 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        tmp0 = (uint8_T)(rtb_Merge_j != 0);
        tmp1 = (uint8_T)(rtb_Merge_ha);
        if (rtb_Merge_oa < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_oa > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_oa);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000003) << 6) | ((((uint8_T *)(&tmp2))
          [0] & 0x000000FC) >> 2) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0] & 0x00000003) << 6) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x210UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S103>/motohawk_probe3' */
  (Vehicle_Speed_Prb_DataStore()) = (Vehicle_Speed_DataStore());

  /* Logic: '<S8>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S8>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* Stateflow: '<S8>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S8>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S8>/motohawk_data_read2'
   */

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (DynoController_Rev1_DWork.s16_is_active_c1_DynoController_Rev1 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    DynoController_Rev1_DWork.s16_is_active_c1_DynoController_Rev1 = 1U;

    /* Transition: '<S16>:10' */
    DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
      DynoController_Rev1_IN_Initial;
  } else {
    switch (DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1) {
     case DynoController_Rev1_IN_Batterybootup:
      /* During 'Batterybootup': '<S16>:13' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S16>:22' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S16>:37' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Charging_and_Temp;
      } else {
        DynoController_Rev1_B.s16_Vehicle_Enable = TRUE;
        DynoController_Rev1_B.s16_Vehicle_Ready = FALSE;
        DynoController_Rev1_B.s16_Torque_Enable = FALSE;
        DynoController_Rev1_B.s16_Keyed_Relay = TRUE;
      }
      break;

     case DynoController_Rev1_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S16>:15' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S16>:23' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else {
        /* Transition: '<S16>:20' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Normal_Operation;
      }
      break;

     case DynoController_Rev1_IN_Initial:
      /* During 'Initial': '<S16>:9' */
      if (!Shutdown_Req_DataStore()) {
        /* Transition: '<S16>:14' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Batterybootup;
      } else {
        /* Transition: '<S16>:30' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      }
      break;

     case DynoController_Rev1_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S16>:26' */
      DynoController_Rev1_B.s16_Vehicle_Enable = FALSE;
      DynoController_Rev1_B.s16_Vehicle_Ready = FALSE;
      DynoController_Rev1_B.s16_Torque_Enable = FALSE;
      DynoController_Rev1_B.s16_Keyed_Relay = FALSE;
      break;

     case DynoController_Rev1_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S16>:18' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S16>:24' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else {
        DynoController_Rev1_B.s16_Vehicle_Enable = TRUE;
        DynoController_Rev1_B.s16_Vehicle_Ready = TRUE;
        DynoController_Rev1_B.s16_Torque_Enable = TRUE;
        DynoController_Rev1_B.s16_Keyed_Relay = TRUE;
      }
      break;

     case DynoController_Rev1_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S16>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S16>:27' */
        DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Kill_Component_Keyed;
      } else {
        DynoController_Rev1_B.s16_Vehicle_Enable = FALSE;
        DynoController_Rev1_B.s16_Vehicle_Ready = FALSE;
        DynoController_Rev1_B.s16_Torque_Enable = FALSE;
        DynoController_Rev1_B.s16_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S16>:10' */
      DynoController_Rev1_DWork.s16_is_c1_DynoController_Rev1 =
        DynoController_Rev1_IN_Initial;
      break;
    }
  }

  /* End of Stateflow: '<S8>/Chart' */

  /* S-Function Block: <S17>/motohawk_din3 Resource: GensetLoad */
  {
    extern NativeError_S GensetLoad_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    GensetLoad_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din3, NULL);
  }

  /* If: '<S22>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   */
  if ((GensetLoad_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S22>/NewValue' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S31>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S22>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/OldValue' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S32>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S22>/OldValue' */
  }

  /* End of If: '<S22>/If' */

  /* S-Function Block: <S17>/motohawk_din4 Resource: ACC1 */
  {
    extern NativeError_S ACC1_DigitalInput_Get(boolean_T *out, uint16_T *status);
    ACC1_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din4, NULL);
  }

  /* If: '<S23>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   */
  if ((ACC1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S23>/NewValue' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S23>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/OldValue' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S23>/OldValue' */
  }

  /* End of If: '<S23>/If' */

  /* If: '<S42>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S42>/override_enable'
   */
  if ((BatteryCurrent_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S42>/NewValue' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S42>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S42>/OldValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S42>/OldValue' */
  }

  /* End of If: '<S42>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S37>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_218p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_218p001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      DynoController_Rev1_B.s37_MaxCellTemperature = (((real_T) tmp2) / ((real_T)
        2)) + ((real_T) -40);
    }
  }

  /* If: '<S43>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S43>/override_enable'
   */
  if ((MaxCellTemperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S43>/NewValue' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S43>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S43>/OldValue' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S53>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S43>/OldValue' */
  }

  /* End of If: '<S43>/If' */

  /* If: '<S54>/If' incorporates:
   *  Inport: '<S61>/In1'
   *  Inport: '<S62>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S54>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S54>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S54>/NewValue' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    DynoController_Rev1_B.s54_Merge = (Oil_Pressure_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S61>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S54>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S54>/OldValue' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    DynoController_Rev1_B.s54_Merge =
      DynoController_Rev1_B.s38_ReadCANMessage_o2;

    /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S54>/OldValue' */
  }

  /* End of If: '<S54>/If' */

  /* If: '<S55>/If' incorporates:
   *  Inport: '<S63>/In1'
   *  Inport: '<S64>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S55>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S55>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S55>/NewValue' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    DynoController_Rev1_B.s55_Merge = ((int16_T)(RPM_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S55>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S55>/OldValue' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    DynoController_Rev1_B.s55_Merge =
      DynoController_Rev1_B.s38_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S55>/OldValue' */
  }

  /* End of If: '<S55>/If' */

  /* If: '<S56>/If' incorporates:
   *  Inport: '<S65>/In1'
   *  Inport: '<S66>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S56>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S56>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S56>/NewValue' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    DynoController_Rev1_B.s56_Merge = (Temp_Guage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S56>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S56>/OldValue' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    DynoController_Rev1_B.s56_Merge =
      DynoController_Rev1_B.s38_ReadCANMessage_o3;

    /* S-Function (motohawk_sfun_code_cover): '<S66>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S56>/OldValue' */
  }

  /* End of If: '<S56>/If' */

  /* If: '<S57>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S57>/NewValue' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S57>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S57>/OldValue' */
  }

  /* End of If: '<S57>/If' */

  /* If: '<S59>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S59>/NewValue' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S59>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/OldValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S59>/OldValue' */
  }

  /* End of If: '<S59>/If' */

  /* If: '<S60>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S60>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S60>/OldValue' */
  }

  /* End of If: '<S60>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10837p0011 */
  if (DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1 == 0) {
    DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_l;
  }

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Batt_Contactor_Status */
  {
    Batt_Contactor_Status_DataStore() = rtb_Compare;
  }

  /* Logic: '<S10>/Logical Operator' */
  rtb_LogicalOperator_h = ((DynoController_Rev1_B.s10_LogicalOperator2 || FALSE));

  /* S-Function (motohawk_sfun_data_write): '<S10>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator_h;
  }

  /* Saturate: '<S12>/Saturation' */
  rtb_Saturation_a = rtb_Merge_o >= 86400.0 ? 86400.0 : rtb_Merge_o <= 0.0 ? 0.0
    : rtb_Merge_o;

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_a;
  }

  /* Saturate: '<S13>/Saturation' */
  rtb_Saturation_j = rtb_Switch >= 86400.0 ? 86400.0 : rtb_Switch <= 0.0 ? 0.0 :
    rtb_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S13>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_j;
  }

  /* S-Function (motohawk_sfun_data_write): '<S8>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = DynoController_Rev1_B.s16_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S8>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = DynoController_Rev1_B.s16_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S8>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = DynoController_Rev1_B.s16_Vehicle_Ready;
  }

  /* S-Function Block: <S17>/motohawk_din5 Resource: ACC2 */
  {
    extern NativeError_S ACC2_DigitalInput_Get(boolean_T *out, uint16_T *status);
    ACC2_DigitalInput_Get(&DynoController_Rev1_B.s17_motohawk_din5, NULL);
  }

  /* If: '<S24>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S24>/override_enable'
   */
  if ((ACC2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S24>/NewValue' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S35>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S24>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/OldValue' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S36>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S24>/OldValue' */
  }

  /* End of If: '<S24>/If' */

  /* S-Function (motohawk_sfun_code_cover): '<S1>/motohawk_code_coverage' */
  /* Code Coverage Test: DynoController_Rev1/Foreground */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(0);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout' */

  /* S-Function Block: DOut328p001 */
  {
    DOut328p001_DiscreteOutput_Set(rtb_Merge_l);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout1' */

  /* S-Function Block: DOut329p001 */
  {
    DOut329p001_DiscreteOutput_Set(rtb_Merge_oaf);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout2' */

  /* S-Function Block: DOut330p001 */
  {
    DOut330p001_DiscreteOutput_Set(rtb_Merge_lo);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout3' */

  /* S-Function Block: DOut331p001 */
  {
    DOut331p001_DiscreteOutput_Set(rtb_Merge_aw);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout4' */

  /* S-Function Block: DOut332p001 */
  {
    DOut332p001_DiscreteOutput_Set(rtb_Merge_i);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout5' */

  /* S-Function Block: DOut333p001 */
  {
    DOut333p001_DiscreteOutput_Set(rtb_Merge_nt);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout6' */

  /* S-Function Block: DOut334p001 */
  {
    DOut334p001_DiscreteOutput_Set(rtb_Merge_p);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout7' */

  /* S-Function Block: DOut335p001 */
  {
    DOut335p001_DiscreteOutput_Set(rtb_Merge_nn);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
