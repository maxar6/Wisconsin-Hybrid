/*
 * File: DynoController_Rev1_Foreground.c
 *
 * Real-Time Workshop code generated for Simulink model DynoController_Rev1.
 *
 * Model version                        : 1.279
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 19:40:13 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 19:40:14 2017
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

/* Named constants for Stateflow: '<S7>/Chart' */
#define DynoController_Rev1_IN_Batterybootup (1U)
#define DynoController_Rev1_IN_Charging_and_Temp (2U)
#define DynoController_Rev1_IN_Initial (3U)
#define DynoController_Rev1_IN_Kill_Component_Keyed (4U)
#define DynoController_Rev1_IN_Normal_Operation (5U)
#define DynoController_Rev1_IN_Shutdown_Sequence (6U)

/* Initial conditions for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Init(void)
{
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

  /* S-Function Block: <S11>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    DynoController_Rev1_DWork.s11_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/Chart' */
  DynoController_Rev1_DWork.s15_is_active_c1_DynoController_Rev1 = 0U;
  DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 = 0U;
  DynoController_Rev1_B.s15_Vehicle_Enable = FALSE;
  DynoController_Rev1_B.s15_Vehicle_Ready = FALSE;
  DynoController_Rev1_B.s15_Torque_Enable = FALSE;
  DynoController_Rev1_B.s15_Keyed_Relay = FALSE;
}

/* Start for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout' */

  /* S-Function Block: COIL_Pos */
  {
    (init_resource_COIL_Pos_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout1' */

  /* S-Function Block: COIL_Neg */
  {
    (init_resource_COIL_Neg_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout2' */

  /* S-Function Block: Battery_Enable */
  {
    (init_resource_Battery_Enable_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout3' */

  /* S-Function Block: Load_Dump_Enable */
  {
    (init_resource_Load_Dump_Enable_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout4' */

  /* S-Function Block: Genset_Enable */
  {
    (init_resource_Genset_Enable_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout5' */

  /* S-Function Block: Genset_Load */
  {
    (init_resource_Genset_Load_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout6' */

  /* S-Function Block: ACC1_Out */
  {
    (init_resource_ACC1_Out_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout7' */

  /* S-Function Block: ACC2_Out */
  {
    (init_resource_ACC2_Out_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S76>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* S-Function (motohawk_sfun_probe): '<S74>/motohawk_probe7' */
  (ACC1_Light_Prb_DataStore()) = FALSE;

  /* S-Function (motohawk_sfun_probe): '<S74>/motohawk_probe8' */
  (ACC2_Light_Prb_DataStore()) = FALSE;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void DynoController_Rev1_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_motohawk_delta_time;
  real_T rtb_Merge_o;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_Saturation;
  real_T rtb_Saturation_j;
  boolean_T rtb_Merge_oa;
  boolean_T rtb_Merge_l;
  boolean_T rtb_Merge_lo;
  boolean_T rtb_Merge_aw;
  boolean_T rtb_Merge_i;
  boolean_T rtb_Merge_nt;
  boolean_T rtb_Merge_p;
  boolean_T rtb_Merge_nn;
  boolean_T rtb_Merge_h;
  boolean_T rtb_Merge_d;
  boolean_T rtb_Ignition;
  boolean_T rtb_Merge_j;
  boolean_T rtb_Merge_ha;
  boolean_T rtb_LogicalOperator_h;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator4_l;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Switch;
  boolean_T rtb_RelationalOperator1_o;
  real_T rtb_Merge_c;
  real_T rtb_Merge_a;

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout' */
  /* S-Function Block: COIL_Pos */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout1' */
  /* S-Function Block: COIL_Neg */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout2' */
  /* S-Function Block: Battery_Enable */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout3' */
  /* S-Function Block: Load_Dump_Enable */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout4' */
  /* S-Function Block: Genset_Enable */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout5' */
  /* S-Function Block: Genset_Load */
  {
  }

  /* Logic: '<S6>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = !Vehicle_Enable_DataStore();

  /* If: '<S10>/If' incorporates:
   *  ActionPort: '<S13>/Action Port'
   *  ActionPort: '<S14>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S10>/override_enable'
   *  SubSystem: '<S10>/NewValue'
   *  SubSystem: '<S10>/OldValue'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Inport: '<S13>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S10>/new_value'
     */
    DynoController_Rev1_B.s10_Merge = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S13>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }
  } else {
    /* Inport: '<S14>/In1' incorporates:
     *  Logic: '<S6>/Logical Operator'
     *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read3'
     */
    DynoController_Rev1_B.s10_Merge = (rtb_LogicalOperator5 ||
      Shutdown_Req_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S14>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }
  }

  /* Logic: '<S9>/Logical Operator3' */
  rtb_LogicalOperator5 = !DynoController_Rev1_B.s10_Merge;

  /* S-Function Block: <S12>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&DynoController_Rev1_DWork.s12_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Logic: '<S9>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S12>/motohawk_delta_time'
   *  Sum: '<S12>/Sum'
   */
  if (!DynoController_Rev1_B.s10_Merge) {
    rtb_Switch = rtb_motohawk_delta_time + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Switch = 0.0;
  }

  /* RelationalOperator: '<S9>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_o = (rtb_Switch >= (Load_Enable_Delay_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S36>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_107p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_107p001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp1 = 0;
      uint8_T tmp9 = 0;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[6])) ;
      DynoController_Rev1_B.s36_PackState = (real_T) tmp1;
      DynoController_Rev1_B.s36_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
    }
  }

  /* If: '<S39>/If' incorporates:
   *  ActionPort: '<S45>/Action Port'
   *  ActionPort: '<S46>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S39>/override_enable'
   *  SubSystem: '<S39>/NewValue'
   *  SubSystem: '<S39>/OldValue'
   */
  if ((PackState_Ovr_ovr_DataStore())) {
    /* Inport: '<S45>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/new_value'
     */
    rtb_Merge_c = (PackState_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }
  } else {
    /* Inport: '<S46>/In1' */
    rtb_Merge_c = DynoController_Rev1_B.s36_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }
  }

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   */
  rtb_Compare = (rtb_Merge_c == 4.0);

  /* Logic: '<S9>/Logical Operator4' */
  rtb_LogicalOperator4_l = (rtb_LogicalOperator5 && rtb_RelationalOperator1_o &&
    rtb_Compare);

  /* If: '<S38>/If' incorporates:
   *  ActionPort: '<S43>/Action Port'
   *  ActionPort: '<S44>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S38>/override_enable'
   *  SubSystem: '<S38>/NewValue'
   *  SubSystem: '<S38>/OldValue'
   */
  if ((StateOfCharge_Ovr_ovr_DataStore())) {
    /* Inport: '<S43>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S38>/new_value'
     */
    rtb_Merge_a = (StateOfCharge_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S43>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }
  } else {
    /* Inport: '<S44>/In1' */
    rtb_Merge_a = DynoController_Rev1_B.s36_StateOfCharge;

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }
  }

  /* Logic: '<S74>/Logical Operator' incorporates:
   *  RelationalOperator: '<S74>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration'
   */
  DynoController_Rev1_B.s74_LogicalOperator = (rtb_LogicalOperator4_l &&
    (rtb_Merge_a >= (SOC_Load_Dump_DataStore())));

  /* S-Function Block: <S16>/motohawk_din1 Resource: LoadDumpEnable */
  {
    extern NativeError_S LoadDumpEnable_DigitalInput_Get(boolean_T *out,
      uint16_T *status);
    LoadDumpEnable_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din1,
      NULL);
  }

  /* If: '<S18>/If' incorporates:
   *  ActionPort: '<S24>/Action Port'
   *  ActionPort: '<S25>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S18>/override_enable'
   *  SubSystem: '<S18>/NewValue'
   *  SubSystem: '<S18>/OldValue'
   */
  if ((LoadDumpEnable_Ovr_ovr_DataStore())) {
    /* Inport: '<S24>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S18>/new_value'
     */
    rtb_LogicalOperator5 = (LoadDumpEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S24>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }
  } else {
    /* Inport: '<S25>/In1' */
    rtb_LogicalOperator5 = DynoController_Rev1_B.s16_motohawk_din1;

    /* S-Function (motohawk_sfun_code_cover): '<S25>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }
  }

  /* Logic: '<S74>/Logical Operator1' */
  DynoController_Rev1_B.s74_LogicalOperator1 =
    (DynoController_Rev1_B.s74_LogicalOperator && rtb_LogicalOperator5);

  /* RelationalOperator: '<S74>/Relational Operator2' incorporates:
   *  Constant: '<S74>/Constant1'
   */
  DynoController_Rev1_B.s74_RelationalOperator2 = (rtb_Merge_c <= 4.0);

  /* S-Function (motohawk_sfun_read_canmsg): '<S37>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_145p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_145p001,
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
      DynoController_Rev1_B.s37_ReadCANMessage_o1 = ((int16_T) tmp0) * ((int16_T)
        10);
      DynoController_Rev1_B.s37_ReadCANMessage_o2 = (real_T) tmp1;
      DynoController_Rev1_B.s37_ReadCANMessage_o3 = ((real_T) tmp2) + ((real_T)
        -40);
      DynoController_Rev1_B.s37_ReadCANMessage_o4 = (real_T) tmp3;
      DynoController_Rev1_B.s37_ReadCANMessage_o5 = (boolean_T) tmp4;
      DynoController_Rev1_B.s37_ReadCANMessage_o6 = (real_T) tmp5;
      DynoController_Rev1_B.s37_ReadCANMessage_o7 = (real_T) tmp6;
    }
  }

  /* If: '<S57>/If' incorporates:
   *  ActionPort: '<S68>/Action Port'
   *  ActionPort: '<S69>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
   *  SubSystem: '<S57>/NewValue'
   *  SubSystem: '<S57>/OldValue'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Inport: '<S68>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/new_value'
     */
    rtb_RelationalOperator1_o = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }
  } else {
    /* Inport: '<S69>/In1' */
    rtb_RelationalOperator1_o = DynoController_Rev1_B.s37_ReadCANMessage_o5;

    /* S-Function (motohawk_sfun_code_cover): '<S69>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }
  }

  /* Logic: '<S74>/Logical Operator2' */
  DynoController_Rev1_B.s74_LogicalOperator2 =
    (DynoController_Rev1_B.s74_LogicalOperator && rtb_RelationalOperator1_o);

  /* If: '<S77>/If' incorporates:
   *  ActionPort: '<S85>/Action Port'
   *  ActionPort: '<S86>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S77>/override_enable'
   *  SubSystem: '<S77>/NewValue'
   *  SubSystem: '<S77>/OldValue'
   */
  if ((Coil_Neg_Ovr_ovr_DataStore())) {
    /* Inport: '<S85>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S77>/new_value'
     */
    rtb_Merge_oa = (Coil_Neg_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S85>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }
  } else {
    /* Inport: '<S86>/In1' */
    rtb_Merge_oa = DynoController_Rev1_B.s74_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S86>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }
  }

  /* If: '<S78>/If' incorporates:
   *  ActionPort: '<S87>/Action Port'
   *  ActionPort: '<S88>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S78>/override_enable'
   *  SubSystem: '<S78>/NewValue'
   *  SubSystem: '<S78>/OldValue'
   */
  if ((Coil_Pos_Ovr_ovr_DataStore())) {
    /* Inport: '<S87>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/new_value'
     */
    rtb_Merge_l = (Coil_Pos_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S87>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }
  } else {
    /* Inport: '<S88>/In1' */
    rtb_Merge_l = DynoController_Rev1_B.s74_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S88>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }
  }

  /* If: '<S79>/If' incorporates:
   *  ActionPort: '<S89>/Action Port'
   *  ActionPort: '<S90>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S79>/override_enable'
   *  SubSystem: '<S79>/NewValue'
   *  SubSystem: '<S79>/OldValue'
   */
  if ((Battery_Enable_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S89>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S79>/new_value'
     */
    rtb_Merge_lo = (Battery_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S89>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }
  } else {
    /* Inport: '<S90>/In1' */
    rtb_Merge_lo = DynoController_Rev1_B.s74_RelationalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S90>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }
  }

  /* If: '<S80>/If' incorporates:
   *  ActionPort: '<S91>/Action Port'
   *  ActionPort: '<S92>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   *  SubSystem: '<S80>/NewValue'
   *  SubSystem: '<S80>/OldValue'
   */
  if ((Load_Dump_Enable_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S91>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/new_value'
     */
    rtb_Merge_aw = (Load_Dump_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S91>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }
  } else {
    /* Inport: '<S92>/In1' */
    rtb_Merge_aw = DynoController_Rev1_B.s74_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S92>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }
  }

  /* If: '<S81>/If' incorporates:
   *  ActionPort: '<S93>/Action Port'
   *  ActionPort: '<S94>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S81>/override_enable'
   *  SubSystem: '<S81>/NewValue'
   *  SubSystem: '<S81>/OldValue'
   */
  if ((Genset_Enable_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S93>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S81>/new_value'
     */
    rtb_Merge_i = (Genset_Enable_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S93>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }
  } else {
    /* Inport: '<S94>/In1' */
    rtb_Merge_i = DynoController_Rev1_B.s74_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S94>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }
  }

  /* If: '<S82>/If' incorporates:
   *  ActionPort: '<S95>/Action Port'
   *  ActionPort: '<S96>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S82>/override_enable'
   *  SubSystem: '<S82>/NewValue'
   *  SubSystem: '<S82>/OldValue'
   */
  if ((Genset_Load_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S95>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S82>/new_value'
     */
    rtb_Merge_nt = (Genset_Load_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S95>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }
  } else {
    /* Inport: '<S96>/In1' */
    rtb_Merge_nt = DynoController_Rev1_B.s74_LogicalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S96>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout6' */
  /* S-Function Block: ACC1_Out */
  {
  }

  /* If: '<S83>/If' incorporates:
   *  ActionPort: '<S97>/Action Port'
   *  ActionPort: '<S98>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S83>/override_enable'
   *  SubSystem: '<S83>/NewValue'
   *  SubSystem: '<S83>/OldValue'
   */
  if ((ACC1_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S97>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S83>/new_value'
     */
    rtb_Merge_p = (ACC1_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S97>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }
  } else {
    /* Inport: '<S98>/In1' incorporates:
     *  Constant: '<S74>/Constant2'
     */
    rtb_Merge_p = FALSE;

    /* S-Function (motohawk_sfun_code_cover): '<S98>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }
  }

  /* S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout7' */
  /* S-Function Block: ACC2_Out */
  {
  }

  /* If: '<S84>/If' incorporates:
   *  ActionPort: '<S100>/Action Port'
   *  ActionPort: '<S99>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S84>/override_enable'
   *  SubSystem: '<S84>/NewValue'
   *  SubSystem: '<S84>/OldValue'
   */
  if ((ACC2_Light_Ovr_ovr_DataStore())) {
    /* Inport: '<S99>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S84>/new_value'
     */
    rtb_Merge_nn = (ACC2_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S99>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }
  } else {
    /* Inport: '<S100>/In1' incorporates:
     *  Constant: '<S74>/Constant3'
     */
    rtb_Merge_nn = FALSE;

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }
  }

  /* S-Function Block: <S16>/motohawk_din Resource: BatteryEnable */
  {
    extern NativeError_S BatteryEnable_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    BatteryEnable_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din, NULL);
  }

  /* If: '<S19>/If' incorporates:
   *  ActionPort: '<S26>/Action Port'
   *  ActionPort: '<S27>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S19>/override_enable'
   *  SubSystem: '<S19>/NewValue'
   *  SubSystem: '<S19>/OldValue'
   */
  if ((BatteryEnable_Ovr_ovr_DataStore())) {
    /* Inport: '<S26>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S19>/new_value'
     */
    rtb_LogicalOperator5 = (BatteryEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S26>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }
  } else {
    /* Inport: '<S27>/In1' */
    rtb_LogicalOperator5 = DynoController_Rev1_B.s16_motohawk_din;

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }
  }

  /* Logic: '<S101>/Logical Operator2' */
  DynoController_Rev1_B.s101_ConnectCommand = (rtb_LogicalOperator5 &&
    rtb_LogicalOperator4_l);

  /* If: '<S103>/If' incorporates:
   *  ActionPort: '<S105>/Action Port'
   *  ActionPort: '<S106>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S103>/override_enable'
   *  SubSystem: '<S103>/NewValue'
   *  SubSystem: '<S103>/OldValue'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Inport: '<S105>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S103>/new_value'
     */
    rtb_Merge_h = (Batt_Connect_Cmd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S105>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }
  } else {
    /* Inport: '<S106>/In1' */
    rtb_Merge_h = DynoController_Rev1_B.s101_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S106>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }
  }

  /* Logic: '<S101>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration'
   */
  DynoController_Rev1_B.s101_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S104>/If' incorporates:
   *  ActionPort: '<S107>/Action Port'
   *  ActionPort: '<S108>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S104>/override_enable'
   *  SubSystem: '<S104>/NewValue'
   *  SubSystem: '<S104>/OldValue'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Inport: '<S107>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S104>/new_value'
     */
    rtb_Merge_d = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S107>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }
  } else {
    /* Inport: '<S108>/In1' */
    rtb_Merge_d = DynoController_Rev1_B.s101_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S108>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }
  }

  /* Logic: '<S101>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S101>/Send CAN Messages' */
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
        if (DynoController_Rev1_ConstB.s101_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (DynoController_Rev1_ConstB.s101_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(DynoController_Rev1_ConstB.s101_OdometerValue *
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

  /* S-Function Block: <S16>/motohawk_din2 Resource: GensetEnable */
  {
    extern NativeError_S GensetEnable_DigitalInput_Get(boolean_T *out, uint16_T *
      status);
    GensetEnable_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din2, NULL);
  }

  /* If: '<S20>/If' incorporates:
   *  ActionPort: '<S28>/Action Port'
   *  ActionPort: '<S29>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S20>/override_enable'
   *  SubSystem: '<S20>/NewValue'
   *  SubSystem: '<S20>/OldValue'
   */
  if ((GensetEnable_Ovr_ovr_DataStore())) {
    /* Inport: '<S28>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/new_value'
     */
    rtb_LogicalOperator5 = (GensetEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }
  } else {
    /* Inport: '<S29>/In1' */
    rtb_LogicalOperator5 = DynoController_Rev1_B.s16_motohawk_din2;

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }
  }

  /* Logic: '<S102>/Logical Operator' incorporates:
   *  Constant: '<S102>/Constant'
   *  RelationalOperator: '<S102>/Relational Operator'
   */
  DynoController_Rev1_B.s102_Gen_Enable = (rtb_LogicalOperator5 && (rtb_Merge_c ==
    4.0));

  /* If: '<S110>/If' incorporates:
   *  ActionPort: '<S114>/Action Port'
   *  ActionPort: '<S115>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S110>/override_enable'
   *  SubSystem: '<S110>/NewValue'
   *  SubSystem: '<S110>/OldValue'
   */
  if ((Gen_Enable_Ovr_ovr_DataStore())) {
    /* Inport: '<S114>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S110>/new_value'
     */
    rtb_Merge_j = (Gen_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S114>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }
  } else {
    /* Inport: '<S115>/In1' */
    rtb_Merge_j = DynoController_Rev1_B.s102_Gen_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S115>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }
  }

  /* Logic: '<S102>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S102>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration'
   */
  DynoController_Rev1_B.s102_Gen_Load = (DynoController_Rev1_B.s102_Gen_Enable &&
    rtb_RelationalOperator1_o && rtb_LogicalOperator5 && (rtb_Merge_a <=
    (SOC_Off_Pt_DataStore())));

  /* If: '<S109>/If' incorporates:
   *  ActionPort: '<S112>/Action Port'
   *  ActionPort: '<S113>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S109>/override_enable'
   *  SubSystem: '<S109>/NewValue'
   *  SubSystem: '<S109>/OldValue'
   */
  if ((Gen_Load_Ovr_ovr_DataStore())) {
    /* Inport: '<S112>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S109>/new_value'
     */
    rtb_Merge_ha = (Gen_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S112>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }
  } else {
    /* Inport: '<S113>/In1' */
    rtb_Merge_ha = DynoController_Rev1_B.s102_Gen_Load;

    /* S-Function (motohawk_sfun_code_cover): '<S113>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }
  }

  /* If: '<S111>/If' incorporates:
   *  ActionPort: '<S116>/Action Port'
   *  ActionPort: '<S117>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S111>/override_enable'
   *  SubSystem: '<S111>/NewValue'
   *  SubSystem: '<S111>/OldValue'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Inport: '<S116>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S111>/new_value'
     */
    rtb_Merge_o = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S116>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }
  } else {
    /* Inport: '<S117>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration1'
     */
    rtb_Merge_o = (Vehicle_Speed_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S117>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }
  }

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
        if (rtb_Merge_o < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_o > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_o);
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

  /* S-Function (motohawk_sfun_probe): '<S102>/motohawk_probe3' */
  (Vehicle_Speed_Prb_DataStore()) = (Vehicle_Speed_DataStore());

  /* If: '<S54>/If' incorporates:
   *  ActionPort: '<S62>/Action Port'
   *  ActionPort: '<S63>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S54>/override_enable'
   *  SubSystem: '<S54>/NewValue'
   *  SubSystem: '<S54>/OldValue'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Inport: '<S62>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S54>/new_value'
     */
    DynoController_Rev1_B.s54_Merge = ((int16_T)(RPM_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }
  } else {
    /* Inport: '<S63>/In1' */
    DynoController_Rev1_B.s54_Merge =
      DynoController_Rev1_B.s37_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }
  }

  /* If: '<S119>/If' incorporates:
   *  ActionPort: '<S124>/Action Port'
   *  ActionPort: '<S125>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S119>/override_enable'
   *  SubSystem: '<S119>/NewValue'
   *  SubSystem: '<S119>/OldValue'
   */
  if ((RPM_Gauges_Ovr_ovr_DataStore())) {
    /* Inport: '<S124>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S119>/new_value'
     */
    DynoController_Rev1_B.s119_Merge = ((int16_T)(RPM_Gauges_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S124>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }
  } else {
    /* Inport: '<S125>/In1' */
    DynoController_Rev1_B.s119_Merge = DynoController_Rev1_B.s54_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S125>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }
  }

  /* S-Function (motohawk_sfun_vdogauge_write): '<S76>/VDO Gauge Write' */
  /* VDO Gauge Write GaugeChain */
  {
    extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
      (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
       in_ePriority);
    VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 0,
      DynoController_Rev1_B.s119_Merge, (E_VDOGaugePriority) 1);
  }

  /* Gain: '<S76>/Gain' */
  rtb_Merge_c = 100.0 * rtb_Merge_a;
  if (rtIsNaN(rtb_Merge_c) || rtIsInf(rtb_Merge_c)) {
    rtb_Merge_c = 0.0;
  } else {
    rtb_Merge_c = fmod(floor(rtb_Merge_c), 65536.0);
  }

  DynoController_Rev1_B.s76_Gain = (int16_T)(rtb_Merge_c < 0.0 ? (int32_T)
    (int16_T)(-((int16_T)(uint16_T)(-rtb_Merge_c))) : (int32_T)(int16_T)
    (uint16_T)rtb_Merge_c);

  /* If: '<S118>/If' incorporates:
   *  ActionPort: '<S122>/Action Port'
   *  ActionPort: '<S123>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S118>/override_enable'
   *  SubSystem: '<S118>/NewValue'
   *  SubSystem: '<S118>/OldValue'
   */
  if ((SOC_Gauges_Ovr_ovr_DataStore())) {
    /* Inport: '<S122>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S118>/new_value'
     */
    DynoController_Rev1_B.s118_Merge = ((int16_T)(SOC_Gauges_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S122>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }
  } else {
    /* Inport: '<S123>/In1' */
    DynoController_Rev1_B.s118_Merge = DynoController_Rev1_B.s76_Gain;

    /* S-Function (motohawk_sfun_code_cover): '<S123>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }
  }

  /* S-Function (motohawk_sfun_vdogauge_write): '<S76>/VDO Gauge Write1' */
  /* VDO Gauge Write GaugeChain */
  {
    extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
      (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
       in_ePriority);
    VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 2,
      DynoController_Rev1_B.s118_Merge, (E_VDOGaugePriority) 1);
  }

  /* If: '<S53>/If' incorporates:
   *  ActionPort: '<S60>/Action Port'
   *  ActionPort: '<S61>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S53>/override_enable'
   *  SubSystem: '<S53>/NewValue'
   *  SubSystem: '<S53>/OldValue'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Inport: '<S60>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S53>/new_value'
     */
    rtb_Merge_c = (Oil_Pressure_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S60>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }
  } else {
    /* Inport: '<S61>/In1' */
    rtb_Merge_c = DynoController_Rev1_B.s37_ReadCANMessage_o2;

    /* S-Function (motohawk_sfun_code_cover): '<S61>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }
  }

  /* Gain: '<S76>/Gain1' */
  rtb_Merge_c *= 100.0;
  if (rtIsNaN(rtb_Merge_c) || rtIsInf(rtb_Merge_c)) {
    rtb_Merge_c = 0.0;
  } else {
    rtb_Merge_c = fmod(floor(rtb_Merge_c), 65536.0);
  }

  DynoController_Rev1_B.s76_Gain1 = (int16_T)(rtb_Merge_c < 0.0 ? (int32_T)
    (int16_T)(-((int16_T)(uint16_T)(-rtb_Merge_c))) : (int32_T)(int16_T)
    (uint16_T)rtb_Merge_c);

  /* If: '<S120>/If' incorporates:
   *  ActionPort: '<S126>/Action Port'
   *  ActionPort: '<S127>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S120>/override_enable'
   *  SubSystem: '<S120>/NewValue'
   *  SubSystem: '<S120>/OldValue'
   */
  if ((OilPressure_Gauges_Ovr_ovr_DataStore())) {
    /* Inport: '<S126>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S120>/new_value'
     */
    DynoController_Rev1_B.s120_Merge = ((int16_T)
      (OilPressure_Gauges_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S126>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }
  } else {
    /* Inport: '<S127>/In1' */
    DynoController_Rev1_B.s120_Merge = DynoController_Rev1_B.s76_Gain1;

    /* S-Function (motohawk_sfun_code_cover): '<S127>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }
  }

  /* S-Function (motohawk_sfun_vdogauge_write): '<S76>/VDO Gauge Write2' */
  /* VDO Gauge Write GaugeChain */
  {
    extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
      (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
       in_ePriority);
    VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 5,
      DynoController_Rev1_B.s120_Merge, (E_VDOGaugePriority) 1);
  }

  /* If: '<S55>/If' incorporates:
   *  ActionPort: '<S64>/Action Port'
   *  ActionPort: '<S65>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S55>/override_enable'
   *  SubSystem: '<S55>/NewValue'
   *  SubSystem: '<S55>/OldValue'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Inport: '<S64>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S55>/new_value'
     */
    rtb_Merge_c = (Temp_Guage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }
  } else {
    /* Inport: '<S65>/In1' */
    rtb_Merge_c = DynoController_Rev1_B.s37_ReadCANMessage_o3;

    /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }
  }

  /* Gain: '<S76>/Gain2' */
  rtb_Merge_c *= 100.0;
  if (rtIsNaN(rtb_Merge_c) || rtIsInf(rtb_Merge_c)) {
    rtb_Merge_c = 0.0;
  } else {
    rtb_Merge_c = fmod(floor(rtb_Merge_c), 65536.0);
  }

  DynoController_Rev1_B.s76_Gain2 = (int16_T)(rtb_Merge_c < 0.0 ? (int32_T)
    (int16_T)(-((int16_T)(uint16_T)(-rtb_Merge_c))) : (int32_T)(int16_T)
    (uint16_T)rtb_Merge_c);

  /* If: '<S121>/If' incorporates:
   *  ActionPort: '<S128>/Action Port'
   *  ActionPort: '<S129>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S121>/override_enable'
   *  SubSystem: '<S121>/NewValue'
   *  SubSystem: '<S121>/OldValue'
   */
  if ((CoolantTemp_Gauges_Ovr_ovr_DataStore())) {
    /* Inport: '<S128>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/new_value'
     */
    DynoController_Rev1_B.s121_Merge = ((int16_T)
      (CoolantTemp_Gauges_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S128>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }
  } else {
    /* Inport: '<S129>/In1' */
    DynoController_Rev1_B.s121_Merge = DynoController_Rev1_B.s76_Gain2;

    /* S-Function (motohawk_sfun_code_cover): '<S129>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }
  }

  /* S-Function (motohawk_sfun_vdogauge_write): '<S76>/VDO Gauge Write3' */
  /* VDO Gauge Write GaugeChain */
  {
    extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
      (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
       in_ePriority);
    VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 1,
      DynoController_Rev1_B.s121_Merge, (E_VDOGaugePriority) 1);
  }

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_l;
  }

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Batt_Contactor_Status */
  {
    Batt_Contactor_Status_DataStore() = rtb_Compare;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S36>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_109p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_109p001,
      &messageObj);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      DynoController_Rev1_B.s36_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      DynoController_Rev1_B.s36_BatteryCurrent = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -500);
    }
  }

  /* If: '<S40>/If' incorporates:
   *  ActionPort: '<S47>/Action Port'
   *  ActionPort: '<S48>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S40>/override_enable'
   *  SubSystem: '<S40>/NewValue'
   *  SubSystem: '<S40>/OldValue'
   */
  if ((BatteryVoltage_Ovr_ovr_DataStore())) {
    /* Inport: '<S47>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S40>/new_value'
     */
    rtb_Merge_c = (BatteryVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }
  } else {
    /* Inport: '<S48>/In1' */
    rtb_Merge_c = DynoController_Rev1_B.s36_BatteryVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }
  }

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S6>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = ((Automatic_Battery_Bootup_DataStore()) && (rtb_Merge_c
    > 50.0));

  /* S-Function Block: <S11>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&DynoController_Rev1_DWork.s11_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S11>/motohawk_delta_time'
   *  Sum: '<S11>/Sum'
   */
  if (DynoController_Rev1_B.s10_Merge) {
    rtb_Merge_c = rtb_motohawk_delta_time_p + Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Merge_c = 0.0;
  }

  /* Logic: '<S9>/Logical Operator2' incorporates:
   *  Logic: '<S9>/Logical Operator6'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration'
   */
  DynoController_Rev1_B.s9_LogicalOperator2 = (rtb_LogicalOperator5 &&
    (!(rtb_Merge_c >= (Contactor_Disable_Delay_DataStore()))));

  /* Logic: '<S9>/Logical Operator' */
  rtb_LogicalOperator_h = (DynoController_Rev1_B.s9_LogicalOperator2 || FALSE);

  /* S-Function (motohawk_sfun_data_write): '<S9>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator_h;
  }

  /* Saturate: '<S11>/Saturation' */
  rtb_Saturation = rt_SATURATE(rtb_Merge_c, 0.0, 86400.0);

  /* S-Function (motohawk_sfun_data_write): '<S11>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S12>/Saturation' */
  rtb_Saturation_j = rt_SATURATE(rtb_Switch, 0.0, 86400.0);

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_j;
  }

  /* Logic: '<S7>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* Stateflow: '<S7>/Chart' incorporates:
   *  Constant: '<S7>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read2'
   */
  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (DynoController_Rev1_DWork.s15_is_active_c1_DynoController_Rev1 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    DynoController_Rev1_DWork.s15_is_active_c1_DynoController_Rev1 = 1U;

    /* Transition: '<S15>:10' */
    /* Entry 'Initial': '<S15>:9' */
    DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
      DynoController_Rev1_IN_Initial;
  } else {
    switch (DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1) {
     case DynoController_Rev1_IN_Batterybootup:
      /* During 'Batterybootup': '<S15>:13' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S15>:22' */
        /* Exit 'Batterybootup': '<S15>:13' */
        /* Entry 'Shutdown_Sequence': '<S15>:21' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S15>:37' */
        /* Exit 'Batterybootup': '<S15>:13' */
        /* Entry 'Charging_and_Temp': '<S15>:15' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Charging_and_Temp;
      } else {
        DynoController_Rev1_B.s15_Vehicle_Enable = TRUE;
        DynoController_Rev1_B.s15_Vehicle_Ready = FALSE;
        DynoController_Rev1_B.s15_Torque_Enable = FALSE;
        DynoController_Rev1_B.s15_Keyed_Relay = TRUE;
      }
      break;

     case DynoController_Rev1_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S15>:15' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S15>:23' */
        /* Exit 'Charging_and_Temp': '<S15>:15' */
        /* Entry 'Shutdown_Sequence': '<S15>:21' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else {
        /* Transition: '<S15>:20' */
        /* Exit 'Charging_and_Temp': '<S15>:15' */
        /* Entry 'Normal_Operation': '<S15>:18' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Normal_Operation;
      }
      break;

     case DynoController_Rev1_IN_Initial:
      /* During 'Initial': '<S15>:9' */
      if (!Shutdown_Req_DataStore()) {
        /* Transition: '<S15>:14' */
        /* Exit 'Initial': '<S15>:9' */
        /* Entry 'Batterybootup': '<S15>:13' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Batterybootup;
      } else {
        /* Transition: '<S15>:30' */
        /* Exit 'Initial': '<S15>:9' */
        /* Entry 'Shutdown_Sequence': '<S15>:21' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      }
      break;

     case DynoController_Rev1_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S15>:26' */
      DynoController_Rev1_B.s15_Vehicle_Enable = FALSE;
      DynoController_Rev1_B.s15_Vehicle_Ready = FALSE;
      DynoController_Rev1_B.s15_Torque_Enable = FALSE;
      DynoController_Rev1_B.s15_Keyed_Relay = FALSE;
      break;

     case DynoController_Rev1_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S15>:18' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S15>:24' */
        /* Exit 'Normal_Operation': '<S15>:18' */
        /* Entry 'Shutdown_Sequence': '<S15>:21' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Shutdown_Sequence;
      } else {
        DynoController_Rev1_B.s15_Vehicle_Enable = TRUE;
        DynoController_Rev1_B.s15_Vehicle_Ready = TRUE;
        DynoController_Rev1_B.s15_Torque_Enable = TRUE;
        DynoController_Rev1_B.s15_Keyed_Relay = TRUE;
      }
      break;

     case DynoController_Rev1_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S15>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S15>:27' */
        /* Exit 'Shutdown_Sequence': '<S15>:21' */
        /* Entry 'Kill_Component_Keyed': '<S15>:26' */
        DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
          DynoController_Rev1_IN_Kill_Component_Keyed;
      } else {
        DynoController_Rev1_B.s15_Vehicle_Enable = FALSE;
        DynoController_Rev1_B.s15_Vehicle_Ready = FALSE;
        DynoController_Rev1_B.s15_Torque_Enable = FALSE;
        DynoController_Rev1_B.s15_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S15>:10' */
      /* Entry 'Initial': '<S15>:9' */
      DynoController_Rev1_DWork.s15_is_c1_DynoController_Rev1 =
        DynoController_Rev1_IN_Initial;
      break;
    }
  }

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = DynoController_Rev1_B.s15_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = DynoController_Rev1_B.s15_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S7>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = DynoController_Rev1_B.s15_Vehicle_Ready;
  }

  /* S-Function Block: <S16>/motohawk_din3 Resource: GensetLoad */
  {
    extern NativeError_S GensetLoad_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    GensetLoad_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din3, NULL);
  }

  /* S-Function Block: <S16>/motohawk_din4 Resource: ACC1 */
  {
    extern NativeError_S ACC1_DigitalInput_Get(boolean_T *out, uint16_T *status);
    ACC1_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din4, NULL);
  }

  /* S-Function Block: <S16>/motohawk_din5 Resource: ACC2 */
  {
    extern NativeError_S ACC2_DigitalInput_Get(boolean_T *out, uint16_T *status);
    ACC2_DigitalInput_Get(&DynoController_Rev1_B.s16_motohawk_din5, NULL);
  }

  /* If: '<S21>/If' incorporates:
   *  ActionPort: '<S30>/Action Port'
   *  ActionPort: '<S31>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S21>/override_enable'
   *  SubSystem: '<S21>/NewValue'
   *  SubSystem: '<S21>/OldValue'
   */
  if ((GensetLoad_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S31>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }
  }

  /* If: '<S22>/If' incorporates:
   *  ActionPort: '<S32>/Action Port'
   *  ActionPort: '<S33>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   *  SubSystem: '<S22>/NewValue'
   *  SubSystem: '<S22>/OldValue'
   */
  if ((ACC1_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S32>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }
  }

  /* If: '<S23>/If' incorporates:
   *  ActionPort: '<S34>/Action Port'
   *  ActionPort: '<S35>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   *  SubSystem: '<S23>/NewValue'
   *  SubSystem: '<S23>/OldValue'
   */
  if ((ACC2_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S35>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S36>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_108p001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_108p001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      DynoController_Rev1_B.s36_MaxCellTemperature = (((real_T) tmp2) / ((real_T)
        2)) + ((real_T) -40);
    }
  }

  /* If: '<S41>/If' incorporates:
   *  ActionPort: '<S49>/Action Port'
   *  ActionPort: '<S50>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S41>/override_enable'
   *  SubSystem: '<S41>/NewValue'
   *  SubSystem: '<S41>/OldValue'
   */
  if ((BatteryCurrent_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }
  }

  /* If: '<S42>/If' incorporates:
   *  ActionPort: '<S51>/Action Port'
   *  ActionPort: '<S52>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S42>/override_enable'
   *  SubSystem: '<S42>/NewValue'
   *  SubSystem: '<S42>/OldValue'
   */
  if ((MaxCellTemperature_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }
  }

  /* If: '<S56>/If' incorporates:
   *  ActionPort: '<S66>/Action Port'
   *  ActionPort: '<S67>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S56>/override_enable'
   *  SubSystem: '<S56>/NewValue'
   *  SubSystem: '<S56>/OldValue'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S66>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }
  }

  /* If: '<S58>/If' incorporates:
   *  ActionPort: '<S70>/Action Port'
   *  ActionPort: '<S71>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S58>/override_enable'
   *  SubSystem: '<S58>/NewValue'
   *  SubSystem: '<S58>/OldValue'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S70>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }
  }

  /* If: '<S59>/If' incorporates:
   *  ActionPort: '<S72>/Action Port'
   *  ActionPort: '<S73>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
   *  SubSystem: '<S59>/NewValue'
   *  SubSystem: '<S59>/OldValue'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }
  }

  /* S-Function (motohawk_sfun_code_cover): '<S1>/motohawk_code_coverage' */
  /* Code Coverage Test: DynoController_Rev1/Foreground */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(0);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout' */

  /* S-Function Block: COIL_Pos */
  {
    if (((init_resource_COIL_Pos_DataStore()) < 0) && ((COIL_Pos_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_l) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((COIL_Pos_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_COIL_Pos_DataStore()) = (COIL_Pos_DataStore());
      } else {
        (init_resource_COIL_Pos_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_COIL_Pos;
        if (SUCCESS(sErrorResult))
          dout_create_COIL_Pos = 0;
        else
          dout_create_COIL_Pos = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_COIL_Pos_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_COIL_Pos_DataStore())),
                          (rtb_Merge_l) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout1' */

  /* S-Function Block: COIL_Neg */
  {
    if (((init_resource_COIL_Neg_DataStore()) < 0) && ((COIL_Neg_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_oa) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((COIL_Neg_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_COIL_Neg_DataStore()) = (COIL_Neg_DataStore());
      } else {
        (init_resource_COIL_Neg_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_COIL_Neg;
        if (SUCCESS(sErrorResult))
          dout_create_COIL_Neg = 0;
        else
          dout_create_COIL_Neg = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_COIL_Neg_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_COIL_Neg_DataStore())),
                          (rtb_Merge_oa) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout2' */

  /* S-Function Block: Battery_Enable */
  {
    if (((init_resource_Battery_Enable_DataStore()) < 0) &&
        ((Battery_Enable_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_lo) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource)
        ((Battery_Enable_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Battery_Enable_DataStore()) = (Battery_Enable_DataStore());
      } else {
        (init_resource_Battery_Enable_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Battery_Enable;
        if (SUCCESS(sErrorResult))
          dout_create_Battery_Enable = 0;
        else
          dout_create_Battery_Enable = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Battery_Enable_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Battery_Enable_DataStore())),
                          (rtb_Merge_lo) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout3' */

  /* S-Function Block: Load_Dump_Enable */
  {
    if (((init_resource_Load_Dump_Enable_DataStore()) < 0) &&
        ((Load_Dump_Enable_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_aw) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource)
        ((Load_Dump_Enable_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Load_Dump_Enable_DataStore()) =
          (Load_Dump_Enable_DataStore());
      } else {
        (init_resource_Load_Dump_Enable_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Load_Dump_Enable;
        if (SUCCESS(sErrorResult))
          dout_create_Load_Dump_Enable = 0;
        else
          dout_create_Load_Dump_Enable = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Load_Dump_Enable_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Load_Dump_Enable_DataStore())),
                          (rtb_Merge_aw) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout4' */

  /* S-Function Block: Genset_Enable */
  {
    if (((init_resource_Genset_Enable_DataStore()) < 0) &&
        ((Genset_Enable_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_i) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((Genset_Enable_DataStore
                                      ())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Genset_Enable_DataStore()) = (Genset_Enable_DataStore());
      } else {
        (init_resource_Genset_Enable_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Genset_Enable;
        if (SUCCESS(sErrorResult))
          dout_create_Genset_Enable = 0;
        else
          dout_create_Genset_Enable = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Genset_Enable_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Genset_Enable_DataStore())),
                          (rtb_Merge_i) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout5' */

  /* S-Function Block: Genset_Load */
  {
    if (((init_resource_Genset_Load_DataStore()) < 0) && ((Genset_Load_DataStore
          ()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_nt) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((Genset_Load_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Genset_Load_DataStore()) = (Genset_Load_DataStore());
      } else {
        (init_resource_Genset_Load_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Genset_Load;
        if (SUCCESS(sErrorResult))
          dout_create_Genset_Load = 0;
        else
          dout_create_Genset_Load = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Genset_Load_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Genset_Load_DataStore())),
                          (rtb_Merge_nt) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout6' */

  /* S-Function Block: ACC1_Out */
  {
    if (((init_resource_ACC1_Out_DataStore()) < 0) && ((ACC1_Out_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_p) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((ACC1_Out_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_ACC1_Out_DataStore()) = (ACC1_Out_DataStore());
      } else {
        (init_resource_ACC1_Out_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_ACC1_Out;
        if (SUCCESS(sErrorResult))
          dout_create_ACC1_Out = 0;
        else
          dout_create_ACC1_Out = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_ACC1_Out_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_ACC1_Out_DataStore())),
                          (rtb_Merge_p) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S74>/motohawk_dout7' */

  /* S-Function Block: ACC2_Out */
  {
    if (((init_resource_ACC2_Out_DataStore()) < 0) && ((ACC2_Out_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_nn) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((ACC2_Out_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_ACC2_Out_DataStore()) = (ACC2_Out_DataStore());
      } else {
        (init_resource_ACC2_Out_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_ACC2_Out;
        if (SUCCESS(sErrorResult))
          dout_create_ACC2_Out = 0;
        else
          dout_create_ACC2_Out = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_ACC2_Out_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_ACC2_Out_DataStore())),
                          (rtb_Merge_nn) ? RES_ON : RES_OFF);
    }
  }
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
