/*
 * File: BuckyWagon_01.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1570
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Apr 17 19:04:03 2019
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

/* Model step function */
void BuckyWagon_01_step(void)
{
  /* (no output/update code required) */
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
    BuckyWagon_01_B.s217_InputVoltage = 0.0;
    BuckyWagon_01_B.s217_OutputVoltage = 0.0;
    BuckyWagon_01_B.s217_InputCurrentLimitMax = 0.0;
    BuckyWagon_01_B.s217_InputCurrent = 0.0;
    BuckyWagon_01_B.s217_OutputCurrent = 0.0;
    BuckyWagon_01_B.s217_Eaton_HV_Charger_Temperature = 0.0;
    BuckyWagon_01_B.s217_IgnitionStatus = 0.0;
    BuckyWagon_01_B.s217_ChargerState = 0.0;
    BuckyWagon_01_B.s217_FaultSeverityIndicator = 0.0;
    BuckyWagon_01_B.s217_MessageCounter = 0.0;
    BuckyWagon_01_B.s217_MessageChecksum = 0.0;
    BuckyWagon_01_B.s364_Merge = 0.0;
    BuckyWagon_01_B.s224_Abs = 0.0;
    BuckyWagon_01_B.s213_DataTypeConversion = 0.0;
    BuckyWagon_01_B.s218_Saturation = 0.0;
    BuckyWagon_01_B.s339_Merge = 0.0;
    BuckyWagon_01_B.s220_Saturation = 0.0;
    BuckyWagon_01_B.s355_Merge = 0.0;
    BuckyWagon_01_B.s9_Motor_Torque = 0.0;
    BuckyWagon_01_B.s145_Sum1 = 0.0;
    BuckyWagon_01_B.s116_Merge = 0.0;
    BuckyWagon_01_B.s9_InReverse = 0.0;
    BuckyWagon_01_B.s110_Switch1 = 0.0;
    BuckyWagon_01_B.s110_Switch = 0.0;
    BuckyWagon_01_B.s69_Merge = 0.0;
    BuckyWagon_01_B.s70_Merge = 0.0;
    BuckyWagon_01_B.s72_Merge = 0.0;
    BuckyWagon_01_B.s84_Switch = 0.0;
    BuckyWagon_01_B.s86_Merge = 0.0;
    BuckyWagon_01_B.s219_Sum1 = 0.0;
    BuckyWagon_01_B.s347_Merge = 0.0;
    BuckyWagon_01_B.s106_Switch1 = 0.0;
    BuckyWagon_01_B.s359_Sum = 0.0;
    BuckyWagon_01_B.s118_Gain1 = 0.0;
    BuckyWagon_01_B.s118_Gain4 = 0.0;
    BuckyWagon_01_B.s118_Gain5 = 0.0;
    BuckyWagon_01_B.s118_Gain6 = 0.0;
    BuckyWagon_01_B.s118_Gain8 = 0.0;
    BuckyWagon_01_B.s118_Divide3 = 0.0;
    BuckyWagon_01_B.s118_Gain = 0.0;
    BuckyWagon_01_B.s118_Gain3 = 0.0;
    BuckyWagon_01_B.s118_Divide = 0.0;
    BuckyWagon_01_B.s118_Saturation = 0.0;
    BuckyWagon_01_B.s117_Sum1 = 0.0;
    BuckyWagon_01_B.s117_Sum = 0.0;
    BuckyWagon_01_B.s223_Accurate_Torque = 0.0;
    BuckyWagon_01_B.s223_Accurate_Voltage = 0.0;
    BuckyWagon_01_B.s223_Accurate_Current = 0.0;
    BuckyWagon_01_B.s223_Accurate_Speed = 0.0;
    BuckyWagon_01_B.s223_Inverter_Temperature = 0.0;
    BuckyWagon_01_B.s223_Rotor_Temp = 0.0;
    BuckyWagon_01_B.s223_Stator_Temp = 0.0;
    BuckyWagon_01_B.s223_Leg_Current = 0.0;
    BuckyWagon_01_B.s223_High_Bound = 0.0;
    BuckyWagon_01_B.s223_Low_Bound = 0.0;
    BuckyWagon_01_B.s223_Stall_Safety_Percentage = 0.0;
    BuckyWagon_01_B.s223_Angular_Distance = 0.0;
    BuckyWagon_01_B.s223_Torque_Desired = 0.0;
    BuckyWagon_01_B.s223_Command_Watchdog_Status = 0.0;
    BuckyWagon_01_B.s223_Status_A = 0.0;
    BuckyWagon_01_B.s223_Software_Release_Sub_Version = 0.0;
    BuckyWagon_01_B.s223_Software_Release_Minor_Version = 0.0;
    BuckyWagon_01_B.s223_Software_Release_Major_Version = 0.0;
    BuckyWagon_01_B.s223_Status_C = 0.0;
    BuckyWagon_01_B.s223_Watchdog_Error = 0.0;
    BuckyWagon_01_B.s223_Derate = 0.0;
    BuckyWagon_01_B.s223_Shutdown = 0.0;
    BuckyWagon_01_B.s223_Not_Enabled = 0.0;
    BuckyWagon_01_B.s223_Not_Enabled_Histroy = 0.0;
    BuckyWagon_01_B.s223_Over_Leg_Current = 0.0;
    BuckyWagon_01_B.s223_Over_Leg_Current_History = 0.0;
    BuckyWagon_01_B.s223_Over_Bus_Current = 0.0;
    BuckyWagon_01_B.s223_Over_Bus_Current_History = 0.0;
    BuckyWagon_01_B.s223_Over_Phase_Advance = 0.0;
    BuckyWagon_01_B.s223_Over_Phase_Advance_History = 0.0;
    BuckyWagon_01_B.s223_Under_Voltage_Warning = 0.0;
    BuckyWagon_01_B.s223_Under_Voltage_Warning_History = 0.0;
    BuckyWagon_01_B.s223_Rotor_Over_Temperature = 0.0;
    BuckyWagon_01_B.s223_Rotor_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s223_Stator_Over_Temperature = 0.0;
    BuckyWagon_01_B.s223_Stator_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s223_Inverter_Over_Temperature = 0.0;
    BuckyWagon_01_B.s223_Inverter_Over_Temperature_History = 0.0;
    BuckyWagon_01_B.s223_Over_Speed_Warning = 0.0;
    BuckyWagon_01_B.s223_Over_Speed_Warning_History = 0.0;
    BuckyWagon_01_B.s223_Over_Voltage_Warning = 0.0;
    BuckyWagon_01_B.s223_Over_Voltage_Warning_History = 0.0;
    BuckyWagon_01_B.s223_Over_Speed_Alarm = 0.0;
    BuckyWagon_01_B.s223_Over_Speed_Alarm_History = 0.0;
    BuckyWagon_01_B.s223_Over_Voltage_Alarm = 0.0;
    BuckyWagon_01_B.s223_Over_Voltage_Alarm_History = 0.0;
    BuckyWagon_01_B.s223_ADC_Calibration_Problem = 0.0;
    BuckyWagon_01_B.s223_ADC_Calibration_Problem_History = 0.0;
    BuckyWagon_01_B.s223_Limp_Home_Mode = 0.0;
    BuckyWagon_01_B.s223_Limp_Home_Mode_History = 0.0;
    BuckyWagon_01_B.s223_Inverter_Fault_Occured = 0.0;
    BuckyWagon_01_B.s223_Iverter_Fault_Occured_History = 0.0;
    BuckyWagon_01_B.s223_Inverter_Fault = 0.0;
    BuckyWagon_01_B.s223_Inverter_Fault_History = 0.0;
    BuckyWagon_01_B.s223_Forced_Voltage_Control = 0.0;
    BuckyWagon_01_B.s223_CAN_Limits_In_Effect = 0.0;
    BuckyWagon_01_B.s223_System_Disabled_In_Motion = 0.0;
    BuckyWagon_01_B.s223_ABC_Phase_Order = 0.0;
    BuckyWagon_01_B.s223_Regen_Switch_Open = 0.0;
    BuckyWagon_01_B.s223_Current_Transducer_Fault_IbusIleg = 0.0;
    BuckyWagon_01_B.s223_Acceleration_Limited = 0.0;
    BuckyWagon_01_B.s223_Using_Raw_Speed = 0.0;
    BuckyWagon_01_B.s223_Turbo_Mode = 0.0;
    BuckyWagon_01_B.s223_Forced_Open_Loop = 0.0;
    BuckyWagon_01_B.s223_Motor_Stalled = 0.0;
    BuckyWagon_01_B.s223_Phase_Current_Sensor_Error = 0.0;
    BuckyWagon_01_B.s223_Bad_Position_Signal = 0.0;
    BuckyWagon_01_B.s223_Bad_Switch = 0.0;
    BuckyWagon_01_B.s223_Invalid_Power_Supply = 0.0;
    BuckyWagon_01_B.s223_Power_Switches_Off = 0.0;
    BuckyWagon_01_B.s221_UnitDelay = 0.0;
    BuckyWagon_01_B.s216_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s216_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s216_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s216_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s216_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s216_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s216_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s215_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s215_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s215_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s215_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s215_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s215_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s215_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s214_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s214_EHPAS_Input_Voltage = 0.0;
    BuckyWagon_01_B.s214_EHPAS_Input_Current_NA = 0.0;
    BuckyWagon_01_B.s214_EHPAS_Pump_Speed = 0.0;
    BuckyWagon_01_B.s214_EHPAS_TempMax = 0.0;
    BuckyWagon_01_B.s214_EHPAS_TempCur = 0.0;
    BuckyWagon_01_B.s214_EHPAS_Op_State = 0.0;
    BuckyWagon_01_B.s214_EHPAS_Fault = 0.0;
    BuckyWagon_01_B.s212_bcm_alarm = 0.0;
    BuckyWagon_01_B.s212_bcm_cpwr_cmd = 0.0;
    BuckyWagon_01_B.s212_bcm_cpwr_mon = 0.0;
    BuckyWagon_01_B.s212_bcm_epo = 0.0;
    BuckyWagon_01_B.s212_bcm_gfd = 0.0;
    BuckyWagon_01_B.s212_bcm_hvil_mon = 0.0;
    BuckyWagon_01_B.s212_bcm_ibat = 0.0;
    BuckyWagon_01_B.s212_bcm_ready = 0.0;
    BuckyWagon_01_B.s212_bcm_soc = 0.0;
    BuckyWagon_01_B.s212_bcm_vbat = 0.0;
    BuckyWagon_01_B.s212_bcm_chg_done = 0.0;
    BuckyWagon_01_B.s212_bcm_cool_req = 0.0;
    BuckyWagon_01_B.s233_Merge = 0.0;
    BuckyWagon_01_B.s212_bcm_soc_j = 0.0;
    BuckyWagon_01_B.s232_Merge = 0.0;
    BuckyWagon_01_B.s212_bcm_cell_tmax = 0.0;
    BuckyWagon_01_B.s212_bcm_cell_tmin = 0.0;
    BuckyWagon_01_B.s212_bcm_cell_vmax = 0.0;
    BuckyWagon_01_B.s212_bcm_cell_vmin = 0.0;
    BuckyWagon_01_B.s212_bcm_chga_ena = 0.0;
    BuckyWagon_01_B.s212_bcm_chga_mon = 0.0;
    BuckyWagon_01_B.s212_bcm_lvbat = 0.0;
    BuckyWagon_01_B.s212_bcm_mod_ena = 0.0;
    BuckyWagon_01_B.s212_bcm_veh_mon = 0.0;
    BuckyWagon_01_B.s212_bcm_cell_overvolt = 0.0;
    BuckyWagon_01_B.s212_bcm_chg_buf = 0.0;
    BuckyWagon_01_B.s212_bcm_chg_max = 0.0;
    BuckyWagon_01_B.s212_bcm_dis_buf = 0.0;
    BuckyWagon_01_B.s212_bcm_dis_max = 0.0;
    BuckyWagon_01_B.s212_bcm_t_coolant = 0.0;
    BuckyWagon_01_B.s231_Merge = 0.0;
    BuckyWagon_01_B.s115_Abs = 0.0;
    BuckyWagon_01_B.s159_Merge = 0.0;
    BuckyWagon_01_B.s158_inReverse = 0.0;
    BuckyWagon_01_B.s131_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s131_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s131_Switch = 0.0;
    BuckyWagon_01_B.s133_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s133_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s133_MinMax = 0.0;
    BuckyWagon_01_B.s133_Switch = 0.0;
    BuckyWagon_01_B.s134_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s134_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s134_Switch = 0.0;
    BuckyWagon_01_B.s132_Switch1 = 0.0;
    BuckyWagon_01_B.s140_MinMax1 = 0.0;
    BuckyWagon_01_B.s136_out = 0.0;
    BuckyWagon_01_B.s124_Saturation1 = 0.0;
    BuckyWagon_01_B.s124_Product = 0.0;
    BuckyWagon_01_B.s124_Product2 = 0.0;
    BuckyWagon_01_B.s101_UnitDelay = 0.0;
    BuckyWagon_01_B.s66_Merge = 0.0;
    BuckyWagon_01_B.s60_Merge = 0.0;
    BuckyWagon_01_B.s43_Merge = 0.0;
    BuckyWagon_01_B.s52_MinMax1 = 0.0;
    BuckyWagon_01_B.s118_sf_Downsapmle1.s119_Out_1 = 0.0;
    BuckyWagon_01_B.s118_sf_Downsapmle1.s119_Out_2 = 0.0;
    BuckyWagon_01_B.s118_sf_Downsapmle.s119_Out_1 = 0.0;
    BuckyWagon_01_B.s118_sf_Downsapmle.s119_Out_2 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BuckyWagon_01_DWork, 0,
                sizeof(D_Work_BuckyWagon_01));
  BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s340_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s220_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s356_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s145_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s219_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s348_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s106_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s118_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s118_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s117_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s363_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s221_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s151_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s151_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s150_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s150_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s101_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s158_timer = 0.0;
  BuckyWagon_01_DWork.s141_brakeCounts = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle1.s119_count = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle1.s119_Val1 = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle1.s119_Val2 = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle.s119_count = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle.s119_Val1 = 0.0;
  BuckyWagon_01_DWork.s118_sf_Downsapmle.s119_Val2 = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Start();

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S372>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S382>/Function-Call Generator'
   *  Start for SubSystem: '<S369>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S373>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S383>/Function-Call Generator'
   *  Start for SubSystem: '<S369>/motohawk_store_nvmem'
   */
  {
    int_T idx;
    for (idx = 0; idx < 7; idx ++) {
      BuckyWagon_01_PrevZCSigState.s11_sf_Chart.Chart_Trig_ZCE[idx] =
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
