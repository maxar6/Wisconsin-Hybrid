/*
 * File: BuckyWagon_01.c
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

int32_T _sfEvent_BuckyWagon_01_;

/* Block signals (auto storage) */
BlockIO_BuckyWagon_01 BuckyWagon_01_B;

/* Block states (auto storage) */
D_Work_BuckyWagon_01 BuckyWagon_01_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BuckyWagon_01 BuckyWagon_01_PrevZCSigState;

/* Real-time model */
RT_MODEL_BuckyWagon_01 BuckyWagon_01_M_;
RT_MODEL_BuckyWagon_01 *BuckyWagon_01_M = &BuckyWagon_01_M_;

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
    BuckyWagon_01_B.s250_InputVoltage = 0.0;
    BuckyWagon_01_B.s250_OutputVoltage = 0.0;
    BuckyWagon_01_B.s250_InputCurrentLimitMax = 0.0;
    BuckyWagon_01_B.s250_InputCurrent = 0.0;
    BuckyWagon_01_B.s250_OutputCurrent = 0.0;
    BuckyWagon_01_B.s250_Eaton_HV_Charger_Temperature = 0.0;
    BuckyWagon_01_B.s250_IgnitionStatus = 0.0;
    BuckyWagon_01_B.s250_ChargerState = 0.0;
    BuckyWagon_01_B.s250_FaultSeverityIndicator = 0.0;
    BuckyWagon_01_B.s250_MessageCounter = 0.0;
    BuckyWagon_01_B.s250_MessageChecksum = 0.0;
    BuckyWagon_01_B.s252_Saturation = 0.0;
    BuckyWagon_01_B.s372_Merge = 0.0;
    BuckyWagon_01_B.s246_DataTypeConversion = 0.0;
    BuckyWagon_01_B.s393_Merge = 0.0;
    BuckyWagon_01_B.s9_InReverse = 0.0;
    BuckyWagon_01_B.s9_FanDutyCycle = 0.0;
    BuckyWagon_01_B.s254_Saturation = 0.0;
    BuckyWagon_01_B.s388_Merge = 0.0;
    BuckyWagon_01_B.s247_NLG5GenLimWrng = 0.0;
    BuckyWagon_01_B.s247_NLG5FanActv = 0.0;
    BuckyWagon_01_B.s247_EuropeMains = 0.0;
    BuckyWagon_01_B.s247_USAMainsL1 = 0.0;
    BuckyWagon_01_B.s247_USAMainsL2 = 0.0;
    BuckyWagon_01_B.s247_CntrlPltDet = 0.0;
    BuckyWagon_01_B.s247_BypassDet = 0.0;
    BuckyWagon_01_B.s247_LimByOutVlt = 0.0;
    BuckyWagon_01_B.s247_LimByOutCrnt = 0.0;
    BuckyWagon_01_B.s247_LimByMainCrnt = 0.0;
    BuckyWagon_01_B.s247_LimByPwrInd = 0.0;
    BuckyWagon_01_B.s247_LimByCntrlPlt = 0.0;
    BuckyWagon_01_B.s247_LimByNLG5MaxPwr = 0.0;
    BuckyWagon_01_B.s247_LimByNLG5MaxMainsCrnt = 0.0;
    BuckyWagon_01_B.s247_LimByNLG5MaxOutCrnt = 0.0;
    BuckyWagon_01_B.s247_LimByNLG5MaxOutVlt = 0.0;
    BuckyWagon_01_B.s247_LimByTempCap = 0.0;
    BuckyWagon_01_B.s247_LimByTempPwrStg = 0.0;
    BuckyWagon_01_B.s247_LimByTempDiode = 0.0;
    BuckyWagon_01_B.s247_LimByTempXfrmr = 0.0;
    BuckyWagon_01_B.s247_LimByBattTemp = 0.0;
    BuckyWagon_01_B.s247_MainsActCrnt = 0.0;
    BuckyWagon_01_B.s247_MainsActVlt = 0.0;
    BuckyWagon_01_B.s247_OutptActVlt = 0.0;
    BuckyWagon_01_B.s247_OutptActCrnt = 0.0;
    BuckyWagon_01_B.s9_CoolantPumpSpeed = 0.0;
    BuckyWagon_01_B.s392_Sum = 0.0;
    BuckyWagon_01_B.s9_Motor_Torque = 0.0;
    BuckyWagon_01_B.s178_Sum1 = 0.0;
    BuckyWagon_01_B.s135_Merge = 0.0;
    BuckyWagon_01_B.s18_Product = 0.0;
    BuckyWagon_01_B.s92_Merge = 0.0;
    BuckyWagon_01_B.s90_Merge = 0.0;
    BuckyWagon_01_B.s89_Merge = 0.0;
    BuckyWagon_01_B.s107_Merge = 0.0;
    BuckyWagon_01_B.s253_Sum1 = 0.0;
    BuckyWagon_01_B.s380_Merge = 0.0;
    BuckyWagon_01_B.s125_Switch1 = 0.0;
    BuckyWagon_01_B.s247_MainsCrntByCntrlPlt = 0.0;
    BuckyWagon_01_B.s247_MainsCrntByPwrInd = 0.0;
    BuckyWagon_01_B.s247_AuxBattVlt = 0.0;
    BuckyWagon_01_B.s247_AhrsByExtShnt = 0.0;
    BuckyWagon_01_B.s247_OutptCrntByBstr = 0.0;
    BuckyWagon_01_B.s247_PwrStgTemp = 0.0;
    BuckyWagon_01_B.s247_TempExtrn1 = 0.0;
    BuckyWagon_01_B.s247_TempExtrn2 = 0.0;
    BuckyWagon_01_B.s247_TempExtrn3 = 0.0;
    BuckyWagon_01_B.s247_OutptOvrVlt = 0.0;
    BuckyWagon_01_B.s247_MainsOvrVlt2 = 0.0;
    BuckyWagon_01_B.s247_MainsOvrVlt1 = 0.0;
    BuckyWagon_01_B.s247_PwrStgShrtCkt = 0.0;
    BuckyWagon_01_B.s247_PlsbltyOutptVltMeas = 0.0;
    BuckyWagon_01_B.s247_PlsbltyMainsVltMeas = 0.0;
    BuckyWagon_01_B.s247_OutptFuseDefect = 0.0;
    BuckyWagon_01_B.s247_MainsFuseDefect = 0.0;
    BuckyWagon_01_B.s247_BattPolarity = 0.0;
    BuckyWagon_01_B.s247_TempSensCap = 0.0;
    BuckyWagon_01_B.s247_TempSensPwrStg = 0.0;
    BuckyWagon_01_B.s247_TempSensDiode = 0.0;
    BuckyWagon_01_B.s247_TempSensXfrmr = 0.0;
    BuckyWagon_01_B.s247_TempSensExt1 = 0.0;
    BuckyWagon_01_B.s247_TempSensExt2 = 0.0;
    BuckyWagon_01_B.s247_TempSensExt3 = 0.0;
    BuckyWagon_01_B.s247_FlashChksmFail = 0.0;
    BuckyWagon_01_B.s247_NVSRAMChksmFail = 0.0;
    BuckyWagon_01_B.s247_EEPROMSysChksmFail = 0.0;
    BuckyWagon_01_B.s247_EEPROMPOWChksmFail = 0.0;
    BuckyWagon_01_B.s247_WatchdogInternal = 0.0;
    BuckyWagon_01_B.s247_Initialization = 0.0;
    BuckyWagon_01_B.s247_CANTimeout = 0.0;
    BuckyWagon_01_B.s247_CANOff = 0.0;
    BuckyWagon_01_B.s247_CAN_Xmit = 0.0;
    BuckyWagon_01_B.s247_CAN_Rcv = 0.0;
    BuckyWagon_01_B.s247_ShtdwnThrsBattTemp = 0.0;
    BuckyWagon_01_B.s247_ShtdwnThresBattVlt = 0.0;
    BuckyWagon_01_B.s247_ShtdwnThresBattAhrs = 0.0;
    BuckyWagon_01_B.s247_ShtdwnThresChrgTime = 0.0;
    BuckyWagon_01_B.s247_PwrLimByLowMainsVlt = 0.0;
    BuckyWagon_01_B.s247_PwrLimByLowBattVlt = 0.0;
    BuckyWagon_01_B.s247_PwrLimByIntOvrTemp = 0.0;
    BuckyWagon_01_B.s247_CmdValOutRange = 0.0;
    BuckyWagon_01_B.s144_Gain1 = 0.0;
    BuckyWagon_01_B.s144_Gain4 = 0.0;
    BuckyWagon_01_B.s144_Gain5 = 0.0;
    BuckyWagon_01_B.s144_Gain6 = 0.0;
    BuckyWagon_01_B.s144_Gain8 = 0.0;
    BuckyWagon_01_B.s144_Divide3 = 0.0;
    BuckyWagon_01_B.s144_Gain = 0.0;
    BuckyWagon_01_B.s144_Gain3 = 0.0;
    BuckyWagon_01_B.s144_Divide = 0.0;
    BuckyWagon_01_B.s144_Saturation = 0.0;
    BuckyWagon_01_B.s143_Sum1 = 0.0;
    BuckyWagon_01_B.s143_UnitDelay = 0.0;
    BuckyWagon_01_B.s255_UnitDelay = 0.0;
    BuckyWagon_01_B.s251_Fault_Severity_Indicator = 0.0;
    BuckyWagon_01_B.s251_Message_Checksum = 0.0;
    BuckyWagon_01_B.s251_Message_Counter = 0.0;
    BuckyWagon_01_B.s251_Motor_Control_State = 0.0;
    BuckyWagon_01_B.s251_Motor_Speed = 0.0;
    BuckyWagon_01_B.s251_Motor_Torque = 0.0;
    BuckyWagon_01_B.s251_Percent_Torque_Available = 0.0;
    BuckyWagon_01_B.s362_Merge = 0.0;
    BuckyWagon_01_B.s363_Merge = 0.0;
    BuckyWagon_01_B.s251_DC_Bus_Current = 0.0;
    BuckyWagon_01_B.s251_DC_Bus_Voltage = 0.0;
    BuckyWagon_01_B.s251_Inverter_Temperature = 0.0;
    BuckyWagon_01_B.s251_Motor_Temperature = 0.0;
    BuckyWagon_01_B.s251_Phase_Current = 0.0;
    BuckyWagon_01_B.s251_Phase_phase_voltage = 0.0;
    BuckyWagon_01_B.s251_Isolation_Resistance = 0.0;
    BuckyWagon_01_B.s251_Maximum_Rated_Power = 0.0;
    BuckyWagon_01_B.s251_Maximum_Rated_Speed = 0.0;
    BuckyWagon_01_B.s251_Maximum_Rated_Torqe = 0.0;
    BuckyWagon_01_B.s249_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s249_EMP_Pump_Status = 0.0;
    BuckyWagon_01_B.s249_EMP_Pump_Mode = 0.0;
    BuckyWagon_01_B.s249_EMP_Pump_Speed = 0.0;
    BuckyWagon_01_B.s249_EMP_Board_Temp = 0.0;
    BuckyWagon_01_B.s249_EMP_Pump_Power = 0.0;
    BuckyWagon_01_B.s249_EMP_Speed_Percent = 0.0;
    BuckyWagon_01_B.s248_ReadCANMessage_o2 = 0.0;
    BuckyWagon_01_B.s248_EHPAS_Input_Voltage = 0.0;
    BuckyWagon_01_B.s248_EHPAS_Input_Current_NA = 0.0;
    BuckyWagon_01_B.s248_EHPAS_Pump_Speed = 0.0;
    BuckyWagon_01_B.s248_EHPAS_TempMax = 0.0;
    BuckyWagon_01_B.s248_EHPAS_TempCur = 0.0;
    BuckyWagon_01_B.s248_EHPAS_Op_State = 0.0;
    BuckyWagon_01_B.s248_EHPAS_Fault = 0.0;
    BuckyWagon_01_B.s245_bcm_alarm = 0.0;
    BuckyWagon_01_B.s245_bcm_cpwr_cmd = 0.0;
    BuckyWagon_01_B.s245_bcm_cpwr_mon = 0.0;
    BuckyWagon_01_B.s245_bcm_epo = 0.0;
    BuckyWagon_01_B.s245_bcm_gfd = 0.0;
    BuckyWagon_01_B.s245_bcm_hvil_mon = 0.0;
    BuckyWagon_01_B.s245_bcm_ibat = 0.0;
    BuckyWagon_01_B.s245_bcm_ready = 0.0;
    BuckyWagon_01_B.s245_bcm_soc = 0.0;
    BuckyWagon_01_B.s245_bcm_vbat = 0.0;
    BuckyWagon_01_B.s245_bcm_chg_done = 0.0;
    BuckyWagon_01_B.s245_bcm_cool_req = 0.0;
    BuckyWagon_01_B.s266_Merge = 0.0;
    BuckyWagon_01_B.s245_bcm_soc_j = 0.0;
    BuckyWagon_01_B.s265_Merge = 0.0;
    BuckyWagon_01_B.s245_bcm_cell_tmax = 0.0;
    BuckyWagon_01_B.s245_bcm_cell_tmin = 0.0;
    BuckyWagon_01_B.s245_bcm_cell_vmax = 0.0;
    BuckyWagon_01_B.s245_bcm_cell_vmin = 0.0;
    BuckyWagon_01_B.s245_bcm_chga_ena = 0.0;
    BuckyWagon_01_B.s245_bcm_chga_mon = 0.0;
    BuckyWagon_01_B.s245_bcm_lvbat = 0.0;
    BuckyWagon_01_B.s245_bcm_mod_ena = 0.0;
    BuckyWagon_01_B.s245_bcm_veh_mon = 0.0;
    BuckyWagon_01_B.s245_bcm_cell_overvolt = 0.0;
    BuckyWagon_01_B.s245_bcm_chg_buf = 0.0;
    BuckyWagon_01_B.s245_bcm_chg_max = 0.0;
    BuckyWagon_01_B.s245_bcm_dis_buf = 0.0;
    BuckyWagon_01_B.s245_bcm_dis_max = 0.0;
    BuckyWagon_01_B.s245_bcm_t_coolant = 0.0;
    BuckyWagon_01_B.s264_Merge = 0.0;
    BuckyWagon_01_B.s134_Abs = 0.0;
    BuckyWagon_01_B.s192_Merge = 0.0;
    BuckyWagon_01_B.s191_inReverse = 0.0;
    BuckyWagon_01_B.s155_Sum1 = 0.0;
    BuckyWagon_01_B.s154_Sum = 0.0;
    BuckyWagon_01_B.s161_Saturation1 = 0.0;
    BuckyWagon_01_B.s161_Product = 0.0;
    BuckyWagon_01_B.s161_Product2 = 0.0;
    BuckyWagon_01_B.s139_Sum1 = 0.0;
    BuckyWagon_01_B.s138_currOut = 0.0;
    BuckyWagon_01_B.s138_voltOut = 0.0;
    BuckyWagon_01_B.s120_UnitDelay = 0.0;
    BuckyWagon_01_B.s82_ctrlState = 0.0;
    BuckyWagon_01_B.s76_Merge = 0.0;
    BuckyWagon_01_B.s55_Merge = 0.0;
    BuckyWagon_01_B.s56_Merge = 0.0;
    BuckyWagon_01_B.s57_Merge = 0.0;
    BuckyWagon_01_B.s41_Merge = 0.0;
    BuckyWagon_01_B.s50_MinMax1 = 0.0;
    BuckyWagon_01_B.s144_sf_Downsapmle1.s145_Out_1 = 0.0;
    BuckyWagon_01_B.s144_sf_Downsapmle1.s145_Out_2 = 0.0;
    BuckyWagon_01_B.s144_sf_Downsapmle.s145_Out_1 = 0.0;
    BuckyWagon_01_B.s144_sf_Downsapmle.s145_Out_2 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BuckyWagon_01_DWork, 0,
                sizeof(D_Work_BuckyWagon_01));
  BuckyWagon_01_DWork.s252_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s373_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s254_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s389_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s178_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s253_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s381_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s125_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s144_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s129_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s144_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s143_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s255_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s184_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s184_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s183_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s183_UnitDelay1_DSTATE = 0.0;
  BuckyWagon_01_DWork.s155_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s156_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s163_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s164_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s168_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s139_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s120_UnitDelay_DSTATE = 0.0;
  BuckyWagon_01_DWork.s191_timer = 0.0;
  BuckyWagon_01_DWork.s171_brakeCounts = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle1.s145_count = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle1.s145_Val1 = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle1.s145_Val2 = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle.s145_count = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle.s145_Val1 = 0.0;
  BuckyWagon_01_DWork.s144_sf_Downsapmle.s145_Val2 = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Start();

  /* Start for function-call system: '<S3>/Background' */

  /* Start for trigger SubSystem: '<S398>/Post Shutdown two ticks before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S403>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S403>/Post Shutdown two ticks before MPRD off'
   */

  /* end of Start for SubSystem: '<S398>/Post Shutdown two ticks before MPRD off' */

  /* Start for trigger SubSystem: '<S398>/Save NV Vars one tick before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S405>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S405>/Save NV Vars one tick before MPRD off'
   */

  /* end of Start for SubSystem: '<S398>/Save NV Vars one tick before MPRD off' */

  /* Start for trigger SubSystem: '<S398>/Shutdown power on ECU565-128' */

  /* Start for S-Function (fcncallgen): '<S406>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S406>/Shutdown power on ECU565-128'
   */

  /* end of Start for SubSystem: '<S398>/Shutdown power on ECU565-128' */

  /* Start for S-Function (motohawk_sfun_dout): '<S398>/motohawk_dout' */

  /* S-Function Block: MPRD */
  {
    (init_resource_MPRD_DataStore()) = -1;
  }

  /* Start for trigger SubSystem: '<S401>/Clear' */

  /* Start for S-Function (fcncallgen): '<S411>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S398>/motohawk_restore_nvmem'
   */

  /* end of Start for SubSystem: '<S401>/Clear' */

  /* Start for trigger SubSystem: '<S402>/Clear' */

  /* Start for S-Function (fcncallgen): '<S412>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S398>/motohawk_store_nvmem'
   */

  /* end of Start for SubSystem: '<S402>/Clear' */
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

  /* Machine initializer */
  _sfEvent_BuckyWagon_01_ = CALL_EVENT;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  BuckyWagon_01_Foreground_Init();
}

/* Model terminate function */
void BuckyWagon_01_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
