/*
 * File: BuckyWagon_01.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1520
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 23 14:25:32 2018
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
    BuckyWagon_01_B.s253_InputVoltage = 0.0;
    BuckyWagon_01_B.s253_OutputVoltage = 0.0;
    BuckyWagon_01_B.s253_InputCurrentLimitMax = 0.0;
    BuckyWagon_01_B.s253_InputCurrent = 0.0;
    BuckyWagon_01_B.s253_OutputCurrent = 0.0;
    BuckyWagon_01_B.s253_Eaton_HV_Charger_Temperature = 0.0;
    BuckyWagon_01_B.s253_IgnitionStatus = 0.0;
    BuckyWagon_01_B.s253_ChargerState = 0.0;
    BuckyWagon_01_B.s253_FaultSeverityIndicator = 0.0;
    BuckyWagon_01_B.s253_MessageCounter = 0.0;
    BuckyWagon_01_B.s253_MessageChecksum = 0.0;
    BuckyWagon_01_B.s249_DataTypeConversion = 0.0;
    BuckyWagon_01_B.s255_Saturation = 0.0;
    BuckyWagon_01_B.s375_Merge = 0.0;
    BuckyWagon_01_B.s396_Merge = 0.0;
    BuckyWagon_01_B.s257_Saturation = 0.0;
    BuckyWagon_01_B.s391_Merge = 0.0;
    BuckyWagon_01_B.s9_Motor_Torque = 0.0;
    BuckyWagon_01_B.s181_Sum1 = 0.0;
    BuckyWagon_01_B.s138_Merge = 0.0;
    BuckyWagon_01_B.s9_InReverse = 0.0;
    BuckyWagon_01_B.s9_FanDutyCycle = 0.0;
    BuckyWagon_01_B.s250_NLG5GenLimWrng = 0.0;
    BuckyWagon_01_B.s250_NLG5FanActv = 0.0;
    BuckyWagon_01_B.s250_EuropeMains = 0.0;
    BuckyWagon_01_B.s250_USAMainsL1 = 0.0;
    BuckyWagon_01_B.s250_USAMainsL2 = 0.0;
    BuckyWagon_01_B.s250_CntrlPltDet = 0.0;
    BuckyWagon_01_B.s250_BypassDet = 0.0;
    BuckyWagon_01_B.s250_LimByOutVlt = 0.0;
    BuckyWagon_01_B.s250_LimByOutCrnt = 0.0;
    BuckyWagon_01_B.s250_LimByMainCrnt = 0.0;
    BuckyWagon_01_B.s250_LimByPwrInd = 0.0;
    BuckyWagon_01_B.s250_LimByCntrlPlt = 0.0;
    BuckyWagon_01_B.s250_LimByNLG5MaxPwr = 0.0;
    BuckyWagon_01_B.s250_LimByNLG5MaxMainsCrnt = 0.0;
    BuckyWagon_01_B.s250_LimByNLG5MaxOutCrnt = 0.0;
    BuckyWagon_01_B.s250_LimByNLG5MaxOutVlt = 0.0;
    BuckyWagon_01_B.s250_LimByTempCap = 0.0;
    BuckyWagon_01_B.s250_LimByTempPwrStg = 0.0;
    BuckyWagon_01_B.s250_LimByTempDiode = 0.0;
    BuckyWagon_01_B.s250_LimByTempXfrmr = 0.0;
    BuckyWagon_01_B.s250_LimByBattTemp = 0.0;
    BuckyWagon_01_B.s250_MainsActCrnt = 0.0;
    BuckyWagon_01_B.s250_MainsActVlt = 0.0;
    BuckyWagon_01_B.s250_OutptActVlt = 0.0;
    BuckyWagon_01_B.s250_OutptActCrnt = 0.0;
    BuckyWagon_01_B.s9_CoolantPumpSpeed = 0.0;
    BuckyWagon_01_B.s395_Sum = 0.0;
    BuckyWagon_01_B.s18_Product = 0.0;
    BuckyWagon_01_B.s92_Merge = 0.0;
    BuckyWagon_01_B.s93_Merge = 0.0;
    BuckyWagon_01_B.s95_Merge = 0.0;
    BuckyWagon_01_B.s110_Merge = 0.0;
    BuckyWagon_01_B.s256_Sum1 = 0.0;
    BuckyWagon_01_B.s383_Merge = 0.0;
    BuckyWagon_01_B.s128_Switch1 = 0.0;
    BuckyWagon_01_B.s250_OutptOvrVlt = 0.0;
    BuckyWagon_01_B.s250_MainsOvrVlt2 = 0.0;
    BuckyWagon_01_B.s250_MainsOvrVlt1 = 0.0;
    BuckyWagon_01_B.s250_PwrStgShrtCkt = 0.0;
    BuckyWagon_01_B.s250_PlsbltyOutptVltMeas = 0.0;
    BuckyWagon_01_B.s250_PlsbltyMainsVltMeas = 0.0;
    BuckyWagon_01_B.s250_OutptFuseDefect = 0.0;
    BuckyWagon_01_B.s250_MainsFuseDefect = 0.0;
    BuckyWagon_01_B.s250_BattPolarity = 0.0;
    BuckyWagon_01_B.s250_TempSensCap = 0.0;
    BuckyWagon_01_B.s250_TempSensPwrStg = 0.0;
    BuckyWagon_01_B.s250_TempSensDiode = 0.0;
    BuckyWagon_01_B.s250_TempSensXfrmr = 0.0;
    BuckyWagon_01_B.s250_TempSensExt1 = 0.0;
    BuckyWagon_01_B.s250_TempSensExt2 = 0.0;
    BuckyWagon_01_B.s250_TempSensExt3 = 0.0;
    BuckyWagon_01_B.s250_FlashChksmFail = 0.0;
    BuckyWagon_01_B.s250_NVSRAMChksmFail = 0.0;
    BuckyWagon_01_B.s250_EEPROMSysChksmFail = 0.0;
    BuckyWagon_01_B.s250_EEPROMPOWChksmFail = 0.0;
    BuckyWagon_01_B.s250_WatchdogInternal = 0.0;
    BuckyWagon_01_B.s250_Initialization = 0.0;
    BuckyWagon_01_B.s250_CANTimeout = 0.0;
    BuckyWagon_01_B.s250_CANOff = 0.0;
    BuckyWagon_01_B.s250_CAN_Xmit = 0.0;
    BuckyWagon_01_B.s250_CAN_Rcv = 0.0;
    BuckyWagon_01_B.s250_ShtdwnThrsBattTemp = 0.0;
    BuckyWagon_01_B.s250_ShtdwnThresBattVlt = 0.0;
    BuckyWagon_01_B.s250_ShtdwnThresBattAhrs = 0.0;
    BuckyWagon_01_B.s250_ShtdwnThresChrgTime = 0.0;
    BuckyWagon_01_B.s250_PwrLimByLowMainsVlt = 0.0;
    BuckyWagon_01_B.s250_PwrLimByLowBattVlt = 0.0;
    BuckyWagon_01_B.s250_PwrLimByIntOvrTemp = 0.0;
    BuckyWagon_01_B.s250_CmdValOutRange = 0.0;
    BuckyWagon_01_B.s250_PwrStgTemp = 0.0;
    BuckyWagon_01_B.s250_TempExtrn1 = 0.0;
    BuckyWagon_01_B.s250_TempExtrn2 = 0.0;
    BuckyWagon_01_B.s250_TempExtrn3 = 0.0;
    BuckyWagon_01_B.s250_MainsCrntByCntrlPlt = 0.0;
    BuckyWagon_01_B.s250_MainsCrntByPwrInd = 0.0;
    BuckyWagon_01_B.s250_AuxBattVlt = 0.0;
    BuckyWagon_01_B.s250_AhrsByExtShnt = 0.0;
    BuckyWagon_01_B.s250_OutptCrntByBstr = 0.0;
    BuckyWagon_01_B.s147_Gain1 = 0.0;
    BuckyWagon_01_B.s147_Gain4 = 0.0;
    BuckyWagon_01_B.s147_Gain5 = 0.0;
    BuckyWagon_01_B.s147_Gain6 = 0.0;
    BuckyWagon_01_B.s147_Gain8 = 0.0;
    BuckyWagon_01_B.s147_Divide3 = 0.0;
    BuckyWagon_01_B.s147_Gain = 0.0;
    BuckyWagon_01_B.s147_Gain3 = 0.0;
    BuckyWagon_01_B.s147_Divide = 0.0;
    BuckyWagon_01_B.s147_Saturation = 0.0;
    BuckyWagon_01_B.s146_Sum1 = 0.0;
    BuckyWagon_01_B.s146_Sum = 0.0;
    BuckyWagon_01_B.s258_UnitDelay = 0.0;
    BuckyWagon_01_B.s254_Fault_Severity_Indicator = 0.0;
    BuckyWagon_01_B.s254_Message_Checksum = 0.0;
    BuckyWagon_01_B.s254_Message_Counter = 0.0;
    BuckyWagon_01_B.s254_Motor_Control_State = 0.0;
    BuckyWagon_01_B.s254_Motor_Speed = 0.0;
    BuckyWagon_01_B.s254_Motor_Torque = 0.0;
    BuckyWagon_01_B.s254_Percent_Torque_Available = 0.0;
    BuckyWagon_01_B.s365_Merge = 0.0;
    BuckyWagon_01_B.s366_Merge = 0.0;
    BuckyWagon_01_B.s254_DC_Bus_Current = 0.0;
    BuckyWagon_01_B.s254_DC_Bus_Voltage = 0.0;
    BuckyWagon_01_B.s254_Inverter_Temperature = 0.0;
    BuckyWagon_01_B.s254_Motor_Temperature = 0.0;
    BuckyWagon_01_B.s254_Phase_Current = 0.0;
    BuckyWagon_01_B.s254_Phase_phase_voltage = 0.0;
    BuckyWagon_01_B.s254_Isolation_Resistance = 0.0;
    BuckyWagon_01_B.s254_Maximum_Rated_Power = 0.0;
    BuckyWagon_01_B.s254_Maximum_Rated_Speed = 0.0;
    BuckyWagon_01_B.s254_Maximum_Rated_Torqe = 0.0;
    BuckyWagon_01_B.s252_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s252_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s252_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s252_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s252_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s252_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s252_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s251_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s251_EHPAS_Input_Voltage = 0.0;
    BuckyWagon_01_B.s251_EHPAS_Input_Current_NA = 0.0;
    BuckyWagon_01_B.s251_EHPAS_Pump_Speed = 0.0;
    BuckyWagon_01_B.s251_EHPAS_TempMax = 0.0;
    BuckyWagon_01_B.s251_EHPAS_TempCur = 0.0;
    BuckyWagon_01_B.s251_EHPAS_Op_State = 0.0;
    BuckyWagon_01_B.s251_EHPAS_Fault = 0.0;
    BuckyWagon_01_B.s248_bcm_alarm = 0.0;
    BuckyWagon_01_B.s248_bcm_cpwr_cmd = 0.0;
    BuckyWagon_01_B.s248_bcm_cpwr_mon = 0.0;
    BuckyWagon_01_B.s248_bcm_epo = 0.0;
    BuckyWagon_01_B.s248_bcm_gfd = 0.0;
    BuckyWagon_01_B.s248_bcm_hvil_mon = 0.0;
    BuckyWagon_01_B.s248_bcm_ibat = 0.0;
    BuckyWagon_01_B.s248_bcm_ready = 0.0;
    BuckyWagon_01_B.s248_bcm_soc = 0.0;
    BuckyWagon_01_B.s248_bcm_vbat = 0.0;
    BuckyWagon_01_B.s248_bcm_chg_done = 0.0;
    BuckyWagon_01_B.s248_bcm_cool_req = 0.0;
    BuckyWagon_01_B.s269_Merge = 0.0;
    BuckyWagon_01_B.s248_bcm_soc_j = 0.0;
    BuckyWagon_01_B.s268_Merge = 0.0;
    BuckyWagon_01_B.s248_bcm_cell_tmax = 0.0;
    BuckyWagon_01_B.s248_bcm_cell_tmin = 0.0;
    BuckyWagon_01_B.s248_bcm_cell_vmax = 0.0;
    BuckyWagon_01_B.s248_bcm_cell_vmin = 0.0;
    BuckyWagon_01_B.s248_bcm_chga_ena = 0.0;
    BuckyWagon_01_B.s248_bcm_chga_mon = 0.0;
    BuckyWagon_01_B.s248_bcm_lvbat = 0.0;
    BuckyWagon_01_B.s248_bcm_mod_ena = 0.0;
    BuckyWagon_01_B.s248_bcm_veh_mon = 0.0;
    BuckyWagon_01_B.s248_bcm_cell_overvolt = 0.0;
    BuckyWagon_01_B.s248_bcm_chg_buf = 0.0;
    BuckyWagon_01_B.s248_bcm_chg_max = 0.0;
    BuckyWagon_01_B.s248_bcm_dis_buf = 0.0;
    BuckyWagon_01_B.s248_bcm_dis_max = 0.0;
    BuckyWagon_01_B.s248_bcm_t_coolant = 0.0;
    BuckyWagon_01_B.s267_Merge = 0.0;
    BuckyWagon_01_B.s137_Abs = 0.0;
    BuckyWagon_01_B.s195_Merge = 0.0;
    BuckyWagon_01_B.s194_inReverse = 0.0;
    BuckyWagon_01_B.s158_Sum1 = 0.0;
    BuckyWagon_01_B.s157_Sum = 0.0;
    BuckyWagon_01_B.s164_Saturation1 = 0.0;
    BuckyWagon_01_B.s164_Product = 0.0;
    BuckyWagon_01_B.s164_Product2 = 0.0;
    BuckyWagon_01_B.s142_Sum1 = 0.0;
    BuckyWagon_01_B.s141_currOut = 0.0;
    BuckyWagon_01_B.s141_voltOut = 0.0;
    BuckyWagon_01_B.s123_UnitDelay = 0.0;
    BuckyWagon_01_B.s85_ctrlState = 0.0;
    BuckyWagon_01_B.s79_Merge = 0.0;
    BuckyWagon_01_B.s58_Merge = 0.0;
    BuckyWagon_01_B.s59_Merge = 0.0;
    BuckyWagon_01_B.s60_Merge = 0.0;
    BuckyWagon_01_B.s44_Merge = 0.0;
    BuckyWagon_01_B.s53_MinMax1 = 0.0;
    BuckyWagon_01_B.s147_sf_Downsapmle1.s148_Out_1 = 0.0;
    BuckyWagon_01_B.s147_sf_Downsapmle1.s148_Out_2 = 0.0;
    BuckyWagon_01_B.s147_sf_Downsapmle.s148_Out_1 = 0.0;
    BuckyWagon_01_B.s147_sf_Downsapmle.s148_Out_2 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BuckyWagon_01_DWork, 0,
                sizeof(D_Work_BuckyWagon_01));
  BuckyWagon_01_DWork.s255_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s376_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s257_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s392_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s181_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s256_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s384_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s128_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s147_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s132_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s147_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s146_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s258_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s187_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s187_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s186_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s186_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s158_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s159_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s166_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s167_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s171_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s142_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s123_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s194_timer = 0.0;
  BuckyWagon_01_DWork.s174_brakeCounts = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle1.s148_count = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle1.s148_Val1 = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle1.s148_Val2 = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle.s148_count = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle.s148_Val1 = 0.0;
  BuckyWagon_01_DWork.s147_sf_Downsapmle.s148_Val2 = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Start();

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S404>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S414>/Function-Call Generator'
   *  Start for SubSystem: '<S401>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S405>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S415>/Function-Call Generator'
   *  Start for SubSystem: '<S401>/motohawk_store_nvmem'
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
