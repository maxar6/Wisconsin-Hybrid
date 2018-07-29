/*
 * File: BuckyWagon_01.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1530
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Jul 29 18:42:46 2018
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
    BuckyWagon_01_B.s228_InputVoltage = 0.0;
    BuckyWagon_01_B.s228_OutputVoltage = 0.0;
    BuckyWagon_01_B.s228_InputCurrentLimitMax = 0.0;
    BuckyWagon_01_B.s228_InputCurrent = 0.0;
    BuckyWagon_01_B.s228_OutputCurrent = 0.0;
    BuckyWagon_01_B.s228_Eaton_HV_Charger_Temperature = 0.0;
    BuckyWagon_01_B.s228_IgnitionStatus = 0.0;
    BuckyWagon_01_B.s228_ChargerState = 0.0;
    BuckyWagon_01_B.s228_FaultSeverityIndicator = 0.0;
    BuckyWagon_01_B.s228_MessageCounter = 0.0;
    BuckyWagon_01_B.s228_MessageChecksum = 0.0;
    BuckyWagon_01_B.s361_Merge = 0.0;
    BuckyWagon_01_B.s235_Abs = 0.0;
    BuckyWagon_01_B.s225_DataTypeConversion = 0.0;
    BuckyWagon_01_B.s230_Saturation = 0.0;
    BuckyWagon_01_B.s340_Merge = 0.0;
    BuckyWagon_01_B.s232_Saturation = 0.0;
    BuckyWagon_01_B.s356_Merge = 0.0;
    BuckyWagon_01_B.s9_Motor_Torque = 0.0;
    BuckyWagon_01_B.s157_Sum1 = 0.0;
    BuckyWagon_01_B.s123_Merge = 0.0;
    BuckyWagon_01_B.s9_InReverse = 0.0;
    BuckyWagon_01_B.s9_FanDutyCycle = 0.0;
    BuckyWagon_01_B.s9_CoolantPumpSpeed = 0.0;
    BuckyWagon_01_B.s360_Sum = 0.0;
    BuckyWagon_01_B.s17_Product = 0.0;
    BuckyWagon_01_B.s78_Merge = 0.0;
    BuckyWagon_01_B.s79_Merge = 0.0;
    BuckyWagon_01_B.s81_Merge = 0.0;
    BuckyWagon_01_B.s96_Merge = 0.0;
    BuckyWagon_01_B.s231_Sum1 = 0.0;
    BuckyWagon_01_B.s348_Merge = 0.0;
    BuckyWagon_01_B.s114_Switch1 = 0.0;
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
    BuckyWagon_01_B.s233_UnitDelay = 0.0;
    BuckyWagon_01_B.s229_Fault_Severity_Indicator = 0.0;
    BuckyWagon_01_B.s229_Message_Checksum = 0.0;
    BuckyWagon_01_B.s229_Message_Counter = 0.0;
    BuckyWagon_01_B.s229_Motor_Control_State = 0.0;
    BuckyWagon_01_B.s229_Motor_Speed = 0.0;
    BuckyWagon_01_B.s229_Motor_Torque = 0.0;
    BuckyWagon_01_B.s229_Percent_Torque_Available = 0.0;
    BuckyWagon_01_B.s330_Merge = 0.0;
    BuckyWagon_01_B.s331_Merge = 0.0;
    BuckyWagon_01_B.s229_DC_Bus_Current = 0.0;
    BuckyWagon_01_B.s229_DC_Bus_Voltage = 0.0;
    BuckyWagon_01_B.s229_Inverter_Temperature = 0.0;
    BuckyWagon_01_B.s229_Motor_Temperature = 0.0;
    BuckyWagon_01_B.s229_Phase_Current = 0.0;
    BuckyWagon_01_B.s229_Phase_phase_voltage = 0.0;
    BuckyWagon_01_B.s229_Isolation_Resistance = 0.0;
    BuckyWagon_01_B.s229_Maximum_Rated_Power = 0.0;
    BuckyWagon_01_B.s229_Maximum_Rated_Speed = 0.0;
    BuckyWagon_01_B.s229_Maximum_Rated_Torqe = 0.0;
    BuckyWagon_01_B.s227_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s227_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s227_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s227_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s227_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s227_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s227_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s226_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s226_EHPAS_Input_Voltage = 0.0;
    BuckyWagon_01_B.s226_EHPAS_Input_Current_NA = 0.0;
    BuckyWagon_01_B.s226_EHPAS_Pump_Speed = 0.0;
    BuckyWagon_01_B.s226_EHPAS_TempMax = 0.0;
    BuckyWagon_01_B.s226_EHPAS_TempCur = 0.0;
    BuckyWagon_01_B.s226_EHPAS_Op_State = 0.0;
    BuckyWagon_01_B.s226_EHPAS_Fault = 0.0;
    BuckyWagon_01_B.s224_bcm_alarm = 0.0;
    BuckyWagon_01_B.s224_bcm_cpwr_cmd = 0.0;
    BuckyWagon_01_B.s224_bcm_cpwr_mon = 0.0;
    BuckyWagon_01_B.s224_bcm_epo = 0.0;
    BuckyWagon_01_B.s224_bcm_gfd = 0.0;
    BuckyWagon_01_B.s224_bcm_hvil_mon = 0.0;
    BuckyWagon_01_B.s224_bcm_ibat = 0.0;
    BuckyWagon_01_B.s224_bcm_ready = 0.0;
    BuckyWagon_01_B.s224_bcm_soc = 0.0;
    BuckyWagon_01_B.s224_bcm_vbat = 0.0;
    BuckyWagon_01_B.s224_bcm_chg_done = 0.0;
    BuckyWagon_01_B.s224_bcm_cool_req = 0.0;
    BuckyWagon_01_B.s244_Merge = 0.0;
    BuckyWagon_01_B.s224_bcm_soc_j = 0.0;
    BuckyWagon_01_B.s243_Merge = 0.0;
    BuckyWagon_01_B.s224_bcm_cell_tmax = 0.0;
    BuckyWagon_01_B.s224_bcm_cell_tmin = 0.0;
    BuckyWagon_01_B.s224_bcm_cell_vmax = 0.0;
    BuckyWagon_01_B.s224_bcm_cell_vmin = 0.0;
    BuckyWagon_01_B.s224_bcm_chga_ena = 0.0;
    BuckyWagon_01_B.s224_bcm_chga_mon = 0.0;
    BuckyWagon_01_B.s224_bcm_lvbat = 0.0;
    BuckyWagon_01_B.s224_bcm_mod_ena = 0.0;
    BuckyWagon_01_B.s224_bcm_veh_mon = 0.0;
    BuckyWagon_01_B.s224_bcm_cell_overvolt = 0.0;
    BuckyWagon_01_B.s224_bcm_chg_buf = 0.0;
    BuckyWagon_01_B.s224_bcm_chg_max = 0.0;
    BuckyWagon_01_B.s224_bcm_dis_buf = 0.0;
    BuckyWagon_01_B.s224_bcm_dis_max = 0.0;
    BuckyWagon_01_B.s224_bcm_t_coolant = 0.0;
    BuckyWagon_01_B.s242_Merge = 0.0;
    BuckyWagon_01_B.s122_Abs = 0.0;
    BuckyWagon_01_B.s171_Merge = 0.0;
    BuckyWagon_01_B.s170_inReverse = 0.0;
    BuckyWagon_01_B.s140_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s140_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s140_Switch = 0.0;
    BuckyWagon_01_B.s142_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s142_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s142_MinMax = 0.0;
    BuckyWagon_01_B.s142_Switch = 0.0;
    BuckyWagon_01_B.s143_motohawk_interpolation_2d1 = 0.0;
    BuckyWagon_01_B.s143_motohawk_interpolation_2d = 0.0;
    BuckyWagon_01_B.s143_Switch = 0.0;
    BuckyWagon_01_B.s141_Switch1 = 0.0;
    BuckyWagon_01_B.s149_MinMax1 = 0.0;
    BuckyWagon_01_B.s145_out = 0.0;
    BuckyWagon_01_B.s133_Saturation1 = 0.0;
    BuckyWagon_01_B.s133_Product = 0.0;
    BuckyWagon_01_B.s133_Product2 = 0.0;
    BuckyWagon_01_B.s109_UnitDelay = 0.0;
    BuckyWagon_01_B.s71_UnitDelay2 = 0.0;
    BuckyWagon_01_B.s66_ctrlState = 0.0;
    BuckyWagon_01_B.s60_Merge = 0.0;
    BuckyWagon_01_B.s43_Merge = 0.0;
    BuckyWagon_01_B.s52_MinMax1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_2 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_1 = 0.0;
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_2 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BuckyWagon_01_DWork, 0,
                sizeof(D_Work_BuckyWagon_01));
  BuckyWagon_01_DWork.s230_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s341_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s232_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s357_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s157_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s67_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s231_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s349_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s114_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s127_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s117_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s127_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s233_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s163_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s163_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s162_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s162_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s135_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s71_UnitDelay2_DSTATE = 0.0;
  BuckyWagon_01_DWork.s170_timer = 0.0;
  BuckyWagon_01_DWork.s150_brakeCounts = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_count = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_Val1 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle1.s128_Val2 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_count = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_Val1 = 0.0;
  BuckyWagon_01_DWork.s127_sf_Downsapmle.s128_Val2 = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Start();

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S369>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S379>/Function-Call Generator'
   *  Start for SubSystem: '<S366>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S370>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S380>/Function-Call Generator'
   *  Start for SubSystem: '<S366>/motohawk_store_nvmem'
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
