/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2069
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Apr 08 00:47:19 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

/* Block signals (auto storage) */
BlockIO_Mooventure2016_Rev5 Mooventure2016_Rev5_B;

/* Block states (auto storage) */
D_Work_Mooventure2016_Rev5 Mooventure2016_Rev5_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Mooventure2016_Rev5 Mooventure2016_Rev5_PrevZCSigState;

/* Real-time model */
RT_MODEL_Mooventure2016_Rev5 Mooventure2016_Rev5_M_;
RT_MODEL_Mooventure2016_Rev5 *const Mooventure2016_Rev5_M =
  &Mooventure2016_Rev5_M_;

/* Model step function */
void Mooventure2016_Rev5_step(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  Mooventure2016_Rev5_M->Timing.clockTick0++;
  if (!Mooventure2016_Rev5_M->Timing.clockTick0) {
    Mooventure2016_Rev5_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void Mooventure2016_Rev5_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Mooventure2016_Rev5_M, 0,
                sizeof(RT_MODEL_Mooventure2016_Rev5));

  /* block I/O */
  (void) memset(((void *) &Mooventure2016_Rev5_B), 0,
                sizeof(BlockIO_Mooventure2016_Rev5));

  {
    Mooventure2016_Rev5_B.s177_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s327_Merge = 0.0;
    Mooventure2016_Rev5_B.s122_Product = 0.0;
    Mooventure2016_Rev5_B.s120_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s124_Product = 0.0;
    Mooventure2016_Rev5_B.s120_Product2 = 0.0;
    Mooventure2016_Rev5_B.s125_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s127_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s149_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s147_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s174_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s174_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s170_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s170_PackState = 0.0;
    Mooventure2016_Rev5_B.s170_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s170_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s170_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s170_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s170_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s170_MILState = 0.0;
    Mooventure2016_Rev5_B.s170_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s170_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s98_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s10_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s98_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s98_Saturation = 0.0;
    Mooventure2016_Rev5_B.s101_Switch = 0.0;
    Mooventure2016_Rev5_B.s342_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s342_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s170_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s170_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s170_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s170_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s171_HEV_CC_Defrost_Mode = 0.0;
    Mooventure2016_Rev5_B.s171_AC_Engaged_CMD = 0.0;
    Mooventure2016_Rev5_B.s175_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s175_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s175_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s175_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s175_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s175_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s175_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s175_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s175_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s170_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s170_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s170_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s170_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s170_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s170_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s174_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s174_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s174_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s174_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o1 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o2 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o3 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o4 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o5 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o6 = 0.0;
    Mooventure2016_Rev5_B.s176_ReadCANMessage_o7 = 0.0;
    Mooventure2016_Rev5_B.s347_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s347_Current = 0.0;
    Mooventure2016_Rev5_B.s347_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s347_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s170_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s170_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s170_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s170_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s170_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s34_Merge = 0.0;
    Mooventure2016_Rev5_B.s237_Merge = 0.0;
    Mooventure2016_Rev5_B.s349_Vehicle_Speed = 0.0;
    Mooventure2016_Rev5_B.s37_Merge = 0.0;
    Mooventure2016_Rev5_B.s36_Merge = 0.0;
    Mooventure2016_Rev5_B.s350_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s10_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s640_Merge = 0.0;
    Mooventure2016_Rev5_B.s641_Merge = 0.0;
    Mooventure2016_Rev5_B.s170_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s170_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s170_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s170_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s170_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s235_Merge = 0.0;
    Mooventure2016_Rev5_B.s174_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s177_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s177_Heading = 0.0;
    Mooventure2016_Rev5_B.s177_Speed = 0.0;
    Mooventure2016_Rev5_B.s177_Altitude = 0.0;
    Mooventure2016_Rev5_B.s177_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s177_DateTime = 0.0;
    Mooventure2016_Rev5_B.s170_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s170_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s170_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s170_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s170_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s168_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s168_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s168_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s168_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s168_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s168_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s168_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s168_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s178_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s234_Merge = 0.0;
    Mooventure2016_Rev5_B.s464_CEL = 0.0;
    Mooventure2016_Rev5_B.s463_engTemp = 0.0;
    Mooventure2016_Rev5_B.s463_transTemp = 0.0;
    Mooventure2016_Rev5_B.s463_timerOut = 0.0;
    Mooventure2016_Rev5_B.s388_fan1 = 0.0;
    Mooventure2016_Rev5_B.s388_fan2 = 0.0;
    Mooventure2016_Rev5_B.s388_fan3 = 0.0;
    Mooventure2016_Rev5_B.s352_dirOut = 0.0;
    Mooventure2016_Rev5_B.s277_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s276_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s275_posOut = 0.0;
    Mooventure2016_Rev5_B.s264_Out = 0.0;
    Mooventure2016_Rev5_B.s215_temp_reading = 0.0;
    Mooventure2016_Rev5_B.s96_state = 0.0;
    Mooventure2016_Rev5_B.s30_Genset_Enable = 0.0;
    Mooventure2016_Rev5_B.s30_Genset_Load = 0.0;
    Mooventure2016_Rev5_B.s30_Genset_RPM = 0.0;
    Mooventure2016_Rev5_B.s30_Genset_Throttle = 0.0;
    Mooventure2016_Rev5_B.s21_radBlend = 0.0;
    Mooventure2016_Rev5_B.s20_RadiatorBlend = 0.0;
    Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 0.0;
    Mooventure2016_Rev5_B.s345_sf_RadiatorMotionControl.s389_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s345_sf_RadiatorMotionControl.s389_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s345_sf_HeaterCoreMotionControl.s389_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s345_sf_HeaterCoreMotionControl.s389_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s342_sf_DataCorrectionMotorABS.s87_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s99_sf_GasPedalScaling.s105_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s99_sf_Chart.s104_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s99_sf_Chart.s104_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s99_sf_BrakePedalScaling.s103_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s95_sf_GasPedalScaling.s105_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s95_sf_Chart.s104_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s95_sf_Chart.s104_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s95_sf_BrakePedalScaling.s103_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s93_sf_GasPedalScaling.s105_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s93_sf_Chart.s104_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s93_sf_Chart.s104_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s93_sf_BrakePedalScaling.s103_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s81_sf_DataCorrection.s87_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s76_sf_DataCorrectionMotorFault.s87_torqueOut = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s122_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s123_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s124_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s149_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s147_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s240_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s222_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s221_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s56_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s56_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s74_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s89_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s90_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s91_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s81_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s73_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s485_count = 0.0;
  Mooventure2016_Rev5_DWork.s167_count = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for Triggered SubSystem: '<S683>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S693>/Function-Call Generator'
   *  Start for SubSystem: '<S680>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S684>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S694>/Function-Call Generator'
   *  Start for SubSystem: '<S680>/motohawk_store_nvmem'
   */
  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
    ZERO_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  Mooventure2016_Rev5_PrevZCSigState.Clear_Trig_ZCE_i = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Init();
}

/* Model terminate function */
void Mooventure2016_Rev5_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
