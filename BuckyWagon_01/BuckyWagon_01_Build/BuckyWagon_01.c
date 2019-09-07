/*
 * File: BuckyWagon_01.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1596
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Sep 07 17:36:03 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

/* Block signals (auto storage) */
BlockIO_BuckyWagon_01 BuckyWagon_01_B;

/* Block states (auto storage) */
D_Work_BuckyWagon_01 BuckyWagon_01_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BuckyWagon_01 BuckyWagon_01_PrevZCSigState;

/* Real-time model */
RT_MODEL_BuckyWagon_01 BuckyWagon_01_M_;
RT_MODEL_BuckyWagon_01 *const BuckyWagon_01_M = &BuckyWagon_01_M_;

/* Output and update for function-call system: '<S8>/CCP Daq Processing' */
void BuckyWagon_01_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_d[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S8>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S11>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_d[i] = 0;
  }

  rtb_f_d[controlPortIdx] = 2;

  /* <S11>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
  {
    extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_d, &mh_CCP1_CCPHandlerConfig,
                      &mh_CCP1_CCPHandlerInstance);
  }

  /* S-Function (motohawk_sfun_code_cover): '<S11>/motohawk_code_coverage' */
  /* Code Coverage Test: BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(3);
  }
}

/* Model step function */
void BuckyWagon_01_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_3547p0009 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_11676p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_11675p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_11677p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger2_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11678p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger3_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_11679p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger4_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11680p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger5_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11681p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger6_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_11682p0004 */
  if (BuckyWagon_01_DWork.s9_motohawk_trigger7_DWORK1 == 0) {
    BuckyWagon_01_DWork.s9_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S8>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_11606p0004 */
  if (BuckyWagon_01_DWork.s8_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s8_motohawk_trigger1_DWORK1 = 1;
  }
}

/* Model initialize function */
void BuckyWagon_01_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(BuckyWagon_01_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &BuckyWagon_01_B), 0,
                sizeof(BlockIO_BuckyWagon_01));

  {
    BuckyWagon_01_B.s215_InputVoltage = 0.0;
    BuckyWagon_01_B.s215_OutputVoltage = 0.0;
    BuckyWagon_01_B.s215_InputCurrentLimitMax = 0.0;
    BuckyWagon_01_B.s215_InputCurrent = 0.0;
    BuckyWagon_01_B.s215_OutputCurrent = 0.0;
    BuckyWagon_01_B.s215_Eaton_HV_Charger_Temperature = 0.0;
    BuckyWagon_01_B.s215_IgnitionStatus = 0.0;
    BuckyWagon_01_B.s215_ChargerState = 0.0;
    BuckyWagon_01_B.s215_FaultSeverityIndicator = 0.0;
    BuckyWagon_01_B.s215_MessageCounter = 0.0;
    BuckyWagon_01_B.s215_MessageChecksum = 0.0;
    BuckyWagon_01_B.s362_Merge = 0.0;
    BuckyWagon_01_B.s222_Abs = 0.0;
    BuckyWagon_01_B.s211_DataTypeConversion = 0.0;
    BuckyWagon_01_B.s216_Saturation = 0.0;
    BuckyWagon_01_B.s337_Merge = 0.0;
    BuckyWagon_01_B.s218_Saturation = 0.0;
    BuckyWagon_01_B.s353_Merge = 0.0;
    BuckyWagon_01_B.s17_Motor_Torque = 0.0;
    BuckyWagon_01_B.s143_Sum1 = 0.0;
    BuckyWagon_01_B.s125_Merge = 0.0;
    BuckyWagon_01_B.s17_InReverse = 0.0;
    BuckyWagon_01_B.s119_Switch1 = 0.0;
    BuckyWagon_01_B.s119_Switch = 0.0;
    BuckyWagon_01_B.s78_Merge = 0.0;
    BuckyWagon_01_B.s79_Merge = 0.0;
    BuckyWagon_01_B.s93_Switch = 0.0;
    BuckyWagon_01_B.s95_Merge = 0.0;
    BuckyWagon_01_B.s217_Sum1 = 0.0;
    BuckyWagon_01_B.s345_Merge = 0.0;
    BuckyWagon_01_B.s115_Switch1 = 0.0;
    BuckyWagon_01_B.s357_Sum = 0.0;
    BuckyWagon_01_B.s127_Gain1 = 0.0;
    BuckyWagon_01_B.s127_Gain4 = 0.0;
    BuckyWagon_01_B.s127_Gain5 = 0.0;
    BuckyWagon_01_B.s127_Gain6 = 0.0;
    BuckyWagon_01_B.s127_Gain8 = 0.0;
    BuckyWagon_01_B.s127_Divide3 = 0.0;
    BuckyWagon_01_B.s127_Gain = 0.0;
    BuckyWagon_01_B.s127_Gain3 = 0.0;
    BuckyWagon_01_B.s127_Divide = 0.0;
    BuckyWagon_01_B.s127_Saturation = 0.0;
    BuckyWagon_01_B.s126_Sum1 = 0.0;
    BuckyWagon_01_B.s126_Sum = 0.0;
    BuckyWagon_01_B.s221_Accurate_Torque = 0.0;
    BuckyWagon_01_B.s221_Accurate_Voltage = 0.0;
    BuckyWagon_01_B.s221_Accurate_Current = 0.0;
    BuckyWagon_01_B.s221_Accurate_Speed = 0.0;
    BuckyWagon_01_B.s221_Inverter_Temperature = 0.0;
    BuckyWagon_01_B.s221_Rotor_Temp = 0.0;
    BuckyWagon_01_B.s221_Stator_Temp = 0.0;
    BuckyWagon_01_B.s221_Leg_Current = 0.0;
    BuckyWagon_01_B.s221_High_Bound = 0.0;
    BuckyWagon_01_B.s221_Low_Bound = 0.0;
    BuckyWagon_01_B.s221_Stall_Safety_Percentage = 0.0;
    BuckyWagon_01_B.s221_Angular_Distance = 0.0;
    BuckyWagon_01_B.s221_Torque_Desired = 0.0;
    BuckyWagon_01_B.s221_Command_Watchdog_Status = 0.0;
    BuckyWagon_01_B.s221_Status_A = 0.0;
    BuckyWagon_01_B.s221_Software_Release_Sub_Version = 0.0;
    BuckyWagon_01_B.s221_Software_Release_Minor_Version = 0.0;
    BuckyWagon_01_B.s221_Software_Release_Major_Version = 0.0;
    BuckyWagon_01_B.s221_Status_C = 0.0;
    BuckyWagon_01_B.s221_Watchdog_Error = 0.0;
    BuckyWagon_01_B.s221_Derate = 0.0;
    BuckyWagon_01_B.s221_Shutdown = 0.0;
    BuckyWagon_01_B.s221_Not_Enabled = 0.0;
    BuckyWagon_01_B.s221_Not_Enabled_Histroy = 0.0;
    BuckyWagon_01_B.s221_Over_Leg_Current = 0.0;
    BuckyWagon_01_B.s221_Over_Leg_Current_History = 0.0;
    BuckyWagon_01_B.s221_Over_Bus_Current = 0.0;
    BuckyWagon_01_B.s221_Over_Bus_Current_History = 0.0;
    BuckyWagon_01_B.s221_Over_Phase_Advance = 0.0;
    BuckyWagon_01_B.s221_Over_Phase_Advance_History = 0.0;
    BuckyWagon_01_B.s221_Under_Voltage_Warning = 0.0;
    BuckyWagon_01_B.s221_Under_Voltage_Warning_History = 0.0;
    BuckyWagon_01_B.s221_Rotor_Over_Temperature = 0.0;
    BuckyWagon_01_B.s221_Rotor_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s221_Stator_Over_Temperature = 0.0;
    BuckyWagon_01_B.s221_Stator_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s221_Inverter_Over_Temperature = 0.0;
    BuckyWagon_01_B.s221_Inverter_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s221_Over_Speed_Warning = 0.0;
    BuckyWagon_01_B.s221_Over_Speed_Warning_History = 0.0;
    BuckyWagon_01_B.s221_Over_Voltage_Warning = 0.0;
    BuckyWagon_01_B.s221_Over_Voltage_Warning_History = 0.0;
    BuckyWagon_01_B.s221_Over_Speed_Alarm = 0.0;
    BuckyWagon_01_B.s221_Over_Speed_Alarm_History = 0.0;
    BuckyWagon_01_B.s221_Over_Voltage_Alarm = 0.0;
    BuckyWagon_01_B.s221_Over_Voltage_Alarm_History = 0.0;
    BuckyWagon_01_B.s221_ADC_Calibration_Problem = 0.0;
    BuckyWagon_01_B.s221_ADC_Calibration_Problem_History = 0.0;
    BuckyWagon_01_B.s221_Limp_Home_Mode = 0.0;
    BuckyWagon_01_B.s221_Limp_Home_Mode_History = 0.0;
    BuckyWagon_01_B.s221_Inverter_Fault_Occured = 0.0;
    BuckyWagon_01_B.s221_Iverter_Fault_Occured_History = 0.0;
    BuckyWagon_01_B.s221_Inverter_Fault = 0.0;
    BuckyWagon_01_B.s221_Inverter_Fault_History = 0.0;
    BuckyWagon_01_B.s221_Forced_Voltage_Control = 0.0;
    BuckyWagon_01_B.s221_CAN_Limits_In_Effect = 0.0;
    BuckyWagon_01_B.s221_System_Disabled_In_Motion = 0.0;
    BuckyWagon_01_B.s221_ABC_Phase_Order = 0.0;
    BuckyWagon_01_B.s221_Regen_Switch_Open = 0.0;
    BuckyWagon_01_B.s221_Current_Transducer_Fault_IbusIleg = 0.0;
    BuckyWagon_01_B.s221_Acceleration_Limited = 0.0;
    BuckyWagon_01_B.s221_Using_Raw_Speed = 0.0;
    BuckyWagon_01_B.s221_Turbo_Mode = 0.0;
    BuckyWagon_01_B.s221_Forced_Open_Loop = 0.0;
    BuckyWagon_01_B.s221_Motor_Stalled = 0.0;
    BuckyWagon_01_B.s221_Phase_Current_Sensor_Error = 0.0;
    BuckyWagon_01_B.s221_Bad_Position_Signal = 0.0;
    BuckyWagon_01_B.s221_Bad_Switch = 0.0;
    BuckyWagon_01_B.s221_Invalid_Power_Supply = 0.0;
    BuckyWagon_01_B.s221_Power_Switches_Off = 0.0;
    BuckyWagon_01_B.s219_UnitDelay = 0.0;
    BuckyWagon_01_B.s214_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s214_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s214_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s214_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s214_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s214_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s214_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s213_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s213_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s213_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s213_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s213_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s213_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s213_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s212_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s212_EHPAS_Input_Voltage = 0.0;
    BuckyWagon_01_B.s212_EHPAS_Input_Current_NA = 0.0;
    BuckyWagon_01_B.s212_EHPAS_Pump_Speed = 0.0;
    BuckyWagon_01_B.s212_EHPAS_TempMax = 0.0;
    BuckyWagon_01_B.s212_EHPAS_TempCur = 0.0;
    BuckyWagon_01_B.s212_EHPAS_Op_State = 0.0;
    BuckyWagon_01_B.s212_EHPAS_Fault = 0.0;
    BuckyWagon_01_B.s210_bcm_alarm = 0.0;
    BuckyWagon_01_B.s210_bcm_cpwr_cmd = 0.0;
    BuckyWagon_01_B.s210_bcm_cpwr_mon = 0.0;
    BuckyWagon_01_B.s210_bcm_epo = 0.0;
    BuckyWagon_01_B.s210_bcm_gfd = 0.0;
    BuckyWagon_01_B.s210_bcm_hvil_mon = 0.0;
    BuckyWagon_01_B.s210_bcm_ibat = 0.0;
    BuckyWagon_01_B.s210_bcm_ready = 0.0;
    BuckyWagon_01_B.s210_bcm_soc = 0.0;
    BuckyWagon_01_B.s210_bcm_vbat = 0.0;
    BuckyWagon_01_B.s210_bcm_chg_done = 0.0;
    BuckyWagon_01_B.s210_bcm_cool_req = 0.0;
    BuckyWagon_01_B.s231_Merge = 0.0;
    BuckyWagon_01_B.s210_bcm_soc_j = 0.0;
    BuckyWagon_01_B.s230_Merge = 0.0;
    BuckyWagon_01_B.s210_bcm_cell_tmax = 0.0;
    BuckyWagon_01_B.s210_bcm_cell_tmin = 0.0;
    BuckyWagon_01_B.s210_bcm_cell_vmax = 0.0;
    BuckyWagon_01_B.s210_bcm_cell_vmin = 0.0;
    BuckyWagon_01_B.s210_bcm_chga_ena = 0.0;
    BuckyWagon_01_B.s210_bcm_chga_mon = 0.0;
    BuckyWagon_01_B.s210_bcm_lvbat = 0.0;
    BuckyWagon_01_B.s210_bcm_mod_ena = 0.0;
    BuckyWagon_01_B.s210_bcm_veh_mon = 0.0;
    BuckyWagon_01_B.s210_bcm_cell_overvolt = 0.0;
    BuckyWagon_01_B.s210_bcm_chg_buf = 0.0;
    BuckyWagon_01_B.s210_bcm_chg_max = 0.0;
    BuckyWagon_01_B.s210_bcm_dis_buf = 0.0;
    BuckyWagon_01_B.s210_bcm_dis_max = 0.0;
    BuckyWagon_01_B.s210_bcm_t_coolant = 0.0;
    BuckyWagon_01_B.s229_Merge = 0.0;
    BuckyWagon_01_B.s124_Abs = 0.0;
    BuckyWagon_01_B.s157_Merge = 0.0;
    BuckyWagon_01_B.s156_inReverse = 0.0;
    BuckyWagon_01_B.s132_Saturation1 = 0.0;
    BuckyWagon_01_B.s132_Product = 0.0;
    BuckyWagon_01_B.s132_Product2 = 0.0;
    BuckyWagon_01_B.s110_UnitDelay = 0.0;
    BuckyWagon_01_B.s75_Merge = 0.0;
    BuckyWagon_01_B.s69_Merge = 0.0;
    BuckyWagon_01_B.s51_Merge = 0.0;
    BuckyWagon_01_B.s60_MinMax1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_2 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_2 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BuckyWagon_01_DWork, 0,
                sizeof(D_Work_BuckyWagon_01));
  BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s338_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s354_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s143_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s217_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s346_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s115_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s127_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s118_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s127_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s361_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s219_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s149_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s149_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s148_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s148_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s134_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s110_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s156_timer = 0.0;
  BuckyWagon_01_DWork.s139_brakeCounts = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_count = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_Val1 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_Val2 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_count = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_Val1 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_Val2 = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_3547p0009 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_11676p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_11675p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_11677p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_11678p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_11679p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_11680p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_11681p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S9>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_11682p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S8>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11606p0004 */
  BuckyWagon_01_DWork.s8_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S4>/Background' */

  /* Start for Triggered SubSystem: '<S370>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S380>/Function-Call Generator'
   *  Start for SubSystem: '<S367>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S371>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S381>/Function-Call Generator'
   *  Start for SubSystem: '<S367>/motohawk_store_nvmem'
   */
  {
    int_T idx;
    for (idx = 0; idx < 7; idx ++) {
      BuckyWagon_01_PrevZCSigState.s19_sf_Chart.Chart_Trig_ZCE[idx] =
        UNINITIALIZED_ZCSIG;
    }
  }

  BuckyWagon_01_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = ZERO_ZCSIG;
  BuckyWagon_01_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  BuckyWagon_01_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  BuckyWagon_01_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BuckyWagon_01_PrevZCSigState.Clear_Trig_ZCE_f = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Init();

  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_3547p0009 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_11676p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_11675p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_11677p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11678p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_11679p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11680p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11681p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S9>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_11682p0004 */
  BuckyWagon_01_DWork.s9_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S8>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11606p0004 */
  BuckyWagon_01_DWork.s8_motohawk_trigger1_DWORK1 = 1;
}

/* Model terminate function */
void BuckyWagon_01_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
