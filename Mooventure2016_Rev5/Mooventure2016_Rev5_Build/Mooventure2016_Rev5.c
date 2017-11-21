/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2015
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Nov 20 13:47:00 2017
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
      Mooventure2016_Rev5_B.s194_SFunction[i] = 0.0;
    }

    Mooventure2016_Rev5_B.s205_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s331_Merge = 0.0;
    Mooventure2016_Rev5_B.s100_Product = 0.0;
    Mooventure2016_Rev5_B.s98_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s102_Product = 0.0;
    Mooventure2016_Rev5_B.s98_Product2 = 0.0;
    Mooventure2016_Rev5_B.s103_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s105_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s127_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s125_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s203_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s203_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s200_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s200_PackState = 0.0;
    Mooventure2016_Rev5_B.s200_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s200_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s200_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s200_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s200_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s200_MILState = 0.0;
    Mooventure2016_Rev5_B.s200_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s200_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s271_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s76_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s76_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s76_Saturation = 0.0;
    Mooventure2016_Rev5_B.s79_Switch = 0.0;
    Mooventure2016_Rev5_B.s367_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s367_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s200_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s200_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s267_Merge = 0.0;
    Mooventure2016_Rev5_B.s204_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s204_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s204_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s204_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s204_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s204_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s204_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s204_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s204_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s200_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s200_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s200_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s200_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s203_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s203_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s203_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s203_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s371_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s371_Current = 0.0;
    Mooventure2016_Rev5_B.s371_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s371_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s200_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s200_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s200_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s200_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s200_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s373_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s649_Merge = 0.0;
    Mooventure2016_Rev5_B.s650_Merge = 0.0;
    Mooventure2016_Rev5_B.s169_MPGeGlobalAverage = 0.0;
    Mooventure2016_Rev5_B.s147_Saturation = 0.0;
    Mooventure2016_Rev5_B.s170_motohawk_data_read1 = 0.0;
    Mooventure2016_Rev5_B.s168_motohawk_data_read2 = 0.0;
    Mooventure2016_Rev5_B.s149_MPGe1MinuteAverage = 0.0;
    Mooventure2016_Rev5_B.s150_BatteryUsePCT = 0.0;
    Mooventure2016_Rev5_B.s150_Battery2Motor = 0.0;
    Mooventure2016_Rev5_B.s150_Motor2Axle = 0.0;
    Mooventure2016_Rev5_B.s206_Subfunction_Select = 0.0;
    Mooventure2016_Rev5_B.s206_Confirm_Active_Trip = 0.0;
    Mooventure2016_Rev5_B.s206_Confirm_Reset_Trip_B = 0.0;
    Mooventure2016_Rev5_B.s206_Confirm_Reset_Trip_A = 0.0;
    Mooventure2016_Rev5_B.s206_Electricity_Cost_Setting = 0.0;
    Mooventure2016_Rev5_B.s206_Fuel_Cost_Setting = 0.0;
    Mooventure2016_Rev5_B.s152_TripACost = 0.0;
    Mooventure2016_Rev5_B.s152_TripASavings = 0.0;
    Mooventure2016_Rev5_B.s153_TripBCost = 0.0;
    Mooventure2016_Rev5_B.s153_TripBSavings = 0.0;
    Mooventure2016_Rev5_B.s200_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s200_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s200_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s200_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s200_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s264_Merge = 0.0;
    Mooventure2016_Rev5_B.s203_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s205_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s205_Heading = 0.0;
    Mooventure2016_Rev5_B.s205_Speed = 0.0;
    Mooventure2016_Rev5_B.s205_Altitude = 0.0;
    Mooventure2016_Rev5_B.s205_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s205_DateTime = 0.0;
    Mooventure2016_Rev5_B.s200_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s200_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s200_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s200_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s200_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s198_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s198_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s198_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s198_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s198_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s198_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s198_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s198_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s207_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s207_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s207_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s263_Merge = 0.0;
    Mooventure2016_Rev5_B.s266_Merge = 0.0;
    Mooventure2016_Rev5_B.s145_Add = 0.0;
    Mooventure2016_Rev5_B.s155_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s153_Add = 0.0;
    Mooventure2016_Rev5_B.s153_Add1 = 0.0;
    Mooventure2016_Rev5_B.s488_CEL = 0.0;
    Mooventure2016_Rev5_B.s487_engTemp = 0.0;
    Mooventure2016_Rev5_B.s487_transTemp = 0.0;
    Mooventure2016_Rev5_B.s487_timerOut = 0.0;
    Mooventure2016_Rev5_B.s412_fan1 = 0.0;
    Mooventure2016_Rev5_B.s412_fan2 = 0.0;
    Mooventure2016_Rev5_B.s412_fan3 = 0.0;
    Mooventure2016_Rev5_B.s376_dirOut = 0.0;
    Mooventure2016_Rev5_B.s302_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s301_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s300_posOut = 0.0;
    Mooventure2016_Rev5_B.s289_Out = 0.0;
    Mooventure2016_Rev5_B.s244_temp_reading = 0.0;
    Mooventure2016_Rev5_B.s74_state = 0.0;
    Mooventure2016_Rev5_B.s21_radBlend = 0.0;
    Mooventure2016_Rev5_B.s20_RadiatorBlend = 0.0;
    Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 0.0;
    Mooventure2016_Rev5_B.s369_sf_RadiatorMotionControl.s413_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s369_sf_RadiatorMotionControl.s413_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s369_sf_HeaterCoreMotionControl.s413_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s369_sf_HeaterCoreMotionControl.s413_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s367_sf_DataCorrectionMotorABS.s65_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s262_sf_Chart.s268_val = 0.0;
    Mooventure2016_Rev5_B.s261_sf_Chart.s268_val = 0.0;
    Mooventure2016_Rev5_B.s150_sf_DataCorrectionMotor.s65_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color9.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color8.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color7.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color6.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color5.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color4.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color3.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color2.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color15.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color14.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color13.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color11.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color10.s179_color = 0.0;
    Mooventure2016_Rev5_B.s149_sf_Color1.s179_color = 0.0;
    Mooventure2016_Rev5_B.s147_sf_DataCorrection.s65_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s77_sf_GasPedalScaling.s83_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s77_sf_Chart.s82_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s77_sf_Chart.s82_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s77_sf_BrakePedalScaling.s81_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s73_sf_GasPedalScaling.s83_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s73_sf_Chart.s82_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s73_sf_Chart.s82_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s73_sf_BrakePedalScaling.s81_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s71_sf_GasPedalScaling.s83_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s71_sf_Chart.s82_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s71_sf_Chart.s82_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s71_sf_BrakePedalScaling.s81_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s59_sf_DataCorrection.s65_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s54_sf_DataCorrectionMotorFault.s65_torqueOut = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s100_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s127_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s261_UnitDelay2_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s261_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s271_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s133_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s262_UnitDelay2_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s262_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s250_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s34_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s34_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s38_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s66_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s59_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s51_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s154_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s159_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s261_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s262_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s489_sf_BarChartReset.s172_count = 0.0;
  Mooventure2016_Rev5_DWork.s262_sf_Chart.s268_tempval = 0.0;
  Mooventure2016_Rev5_DWork.s261_sf_Chart.s268_tempval = 0.0;
  Mooventure2016_Rev5_DWork.s149_sf_BarChartReset.s172_count = 0.0;
  Mooventure2016_Rev5_DWork.s149_sf_BarChart.s172_count = 0.0;
  Mooventure2016_Rev5_DWork.s169_sf_Chart.s172_count = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for Triggered SubSystem: '<S692>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S702>/Function-Call Generator'
   *  Start for SubSystem: '<S689>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S693>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S703>/Function-Call Generator'
   *  Start for SubSystem: '<S689>/motohawk_store_nvmem'
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
