/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2026
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Nov 29 16:58:34 2017
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
    int_T i;
    for (i = 0; i < 15; i++) {
      Mooventure2016_Rev5_B.s195_SFunction[i] = 0.0;
    }

    Mooventure2016_Rev5_B.s206_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s330_Merge = 0.0;
    Mooventure2016_Rev5_B.s101_Product = 0.0;
    Mooventure2016_Rev5_B.s99_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s103_Product = 0.0;
    Mooventure2016_Rev5_B.s99_Product2 = 0.0;
    Mooventure2016_Rev5_B.s104_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s106_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s128_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s126_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s204_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s204_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s201_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s201_PackState = 0.0;
    Mooventure2016_Rev5_B.s201_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s201_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s201_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s201_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s201_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s201_MILState = 0.0;
    Mooventure2016_Rev5_B.s201_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s201_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s77_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s77_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s77_Saturation = 0.0;
    Mooventure2016_Rev5_B.s80_Switch = 0.0;
    Mooventure2016_Rev5_B.s366_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s366_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s201_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s201_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s201_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s201_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s205_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s205_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s205_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s205_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s205_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s205_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s205_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s205_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s205_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s201_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s201_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s201_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s201_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s201_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s201_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s204_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s204_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s204_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s204_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s370_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s370_Current = 0.0;
    Mooventure2016_Rev5_B.s370_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s370_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s201_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s201_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s201_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s201_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s201_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s372_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s648_Merge = 0.0;
    Mooventure2016_Rev5_B.s649_Merge = 0.0;
    Mooventure2016_Rev5_B.s170_MPGeGlobalAverage = 0.0;
    Mooventure2016_Rev5_B.s148_Saturation = 0.0;
    Mooventure2016_Rev5_B.s171_motohawk_data_read1 = 0.0;
    Mooventure2016_Rev5_B.s169_motohawk_data_read2 = 0.0;
    Mooventure2016_Rev5_B.s150_MPGe1MinuteAverage = 0.0;
    Mooventure2016_Rev5_B.s151_BatteryUsePCT = 0.0;
    Mooventure2016_Rev5_B.s151_Battery2Motor = 0.0;
    Mooventure2016_Rev5_B.s151_Motor2Axle = 0.0;
    Mooventure2016_Rev5_B.s207_Subfunction_Select = 0.0;
    Mooventure2016_Rev5_B.s207_Confirm_Active_Trip = 0.0;
    Mooventure2016_Rev5_B.s207_Confirm_Reset_Trip_B = 0.0;
    Mooventure2016_Rev5_B.s207_Confirm_Reset_Trip_A = 0.0;
    Mooventure2016_Rev5_B.s207_Electricity_Cost_Setting = 0.0;
    Mooventure2016_Rev5_B.s207_Fuel_Cost_Setting = 0.0;
    Mooventure2016_Rev5_B.s153_TripACost = 0.0;
    Mooventure2016_Rev5_B.s153_TripASavings = 0.0;
    Mooventure2016_Rev5_B.s154_TripBCost = 0.0;
    Mooventure2016_Rev5_B.s154_TripBSavings = 0.0;
    Mooventure2016_Rev5_B.s201_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s201_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s201_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s201_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s201_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s265_Merge = 0.0;
    Mooventure2016_Rev5_B.s204_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s206_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s206_Heading = 0.0;
    Mooventure2016_Rev5_B.s206_Speed = 0.0;
    Mooventure2016_Rev5_B.s206_Altitude = 0.0;
    Mooventure2016_Rev5_B.s206_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s206_DateTime = 0.0;
    Mooventure2016_Rev5_B.s201_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s201_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s201_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s201_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s201_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s199_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s199_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s199_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s199_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s199_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s199_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s199_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s199_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s208_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s208_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s208_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s264_Merge = 0.0;
    Mooventure2016_Rev5_B.s267_Merge = 0.0;
    Mooventure2016_Rev5_B.s146_Add = 0.0;
    Mooventure2016_Rev5_B.s156_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s154_Add = 0.0;
    Mooventure2016_Rev5_B.s154_Add1 = 0.0;
    Mooventure2016_Rev5_B.s487_CEL = 0.0;
    Mooventure2016_Rev5_B.s486_engTemp = 0.0;
    Mooventure2016_Rev5_B.s486_transTemp = 0.0;
    Mooventure2016_Rev5_B.s486_timerOut = 0.0;
    Mooventure2016_Rev5_B.s411_fan1 = 0.0;
    Mooventure2016_Rev5_B.s411_fan2 = 0.0;
    Mooventure2016_Rev5_B.s411_fan3 = 0.0;
    Mooventure2016_Rev5_B.s375_dirOut = 0.0;
    Mooventure2016_Rev5_B.s301_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s300_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s299_posOut = 0.0;
    Mooventure2016_Rev5_B.s288_Out = 0.0;
    Mooventure2016_Rev5_B.s245_temp_reading = 0.0;
    Mooventure2016_Rev5_B.s75_state = 0.0;
    Mooventure2016_Rev5_B.s22_radBlend = 0.0;
    Mooventure2016_Rev5_B.s21_RadiatorBlend = 0.0;
    Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 0.0;
    Mooventure2016_Rev5_B.s368_sf_RadiatorMotionControl.s412_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s368_sf_RadiatorMotionControl.s412_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s368_sf_HeaterCoreMotionControl.s412_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s368_sf_HeaterCoreMotionControl.s412_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s366_sf_DataCorrectionMotorABS.s66_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s151_sf_DataCorrectionMotor.s66_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color9.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color8.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color7.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color6.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color5.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color4.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color3.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color2.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color15.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color14.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color13.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color11.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color10.s180_color = 0.0;
    Mooventure2016_Rev5_B.s150_sf_Color1.s180_color = 0.0;
    Mooventure2016_Rev5_B.s148_sf_DataCorrection.s66_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s78_sf_GasPedalScaling.s84_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s78_sf_Chart.s83_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s78_sf_Chart.s83_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s78_sf_BrakePedalScaling.s82_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s74_sf_GasPedalScaling.s84_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s74_sf_Chart.s83_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s74_sf_Chart.s83_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s74_sf_BrakePedalScaling.s82_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s72_sf_GasPedalScaling.s84_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s72_sf_Chart.s83_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s72_sf_Chart.s83_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s72_sf_BrakePedalScaling.s82_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s60_sf_DataCorrection.s66_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s55_sf_DataCorrectionMotorFault.s66_torqueOut = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s104_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s128_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s126_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s270_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s134_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s272_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s252_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s35_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s35_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s39_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s53_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s70_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s156_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s198_count = 0.0;
  Mooventure2016_Rev5_DWork.s488_sf_BarChartReset.s173_count = 0.0;
  Mooventure2016_Rev5_DWork.s150_sf_BarChartReset.s173_count = 0.0;
  Mooventure2016_Rev5_DWork.s150_sf_BarChart.s173_count = 0.0;
  Mooventure2016_Rev5_DWork.s170_sf_Chart.s173_count = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for Triggered SubSystem: '<S691>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S701>/Function-Call Generator'
   *  Start for SubSystem: '<S688>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S692>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S702>/Function-Call Generator'
   *  Start for SubSystem: '<S688>/motohawk_store_nvmem'
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
