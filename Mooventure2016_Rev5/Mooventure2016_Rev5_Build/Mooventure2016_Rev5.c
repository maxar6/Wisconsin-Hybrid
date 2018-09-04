/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2150
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Sep 04 13:37:31 2018
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

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void Mooventure2016_Rev5_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_a[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_a[i] = 0;
  }

  rtb_f_a[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
  {
    extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_a, &mh_CCP1_CCPHandlerConfig,
                      &mh_CCP1_CCPHandlerInstance);
  }

  /* S-Function (motohawk_sfun_code_cover): '<S7>/motohawk_code_coverage' */
  /* Code Coverage Test: Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(3);
  }
}

/* Model step function */
void Mooventure2016_Rev5_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_7280p0001 */
  if (Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_10472p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_10471p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_10473p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10474p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_10475p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_10476p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_10477p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_10478p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_10402p0001 */
  if (Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1 = 1;
  }
}

/* Model initialize function */
void Mooventure2016_Rev5_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Mooventure2016_Rev5_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Mooventure2016_Rev5_B), 0,
                sizeof(BlockIO_Mooventure2016_Rev5));

  {
    Mooventure2016_Rev5_B.s196_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s447_Merge = 0.0;
    Mooventure2016_Rev5_B.s140_Product = 0.0;
    Mooventure2016_Rev5_B.s138_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s142_Product = 0.0;
    Mooventure2016_Rev5_B.s138_Product2 = 0.0;
    Mooventure2016_Rev5_B.s143_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s145_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s165_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s163_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s193_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s193_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s193_Brake_Position_l = 0.0;
    Mooventure2016_Rev5_B.s234_DataTypeConversion = 0.0;
    Mooventure2016_Rev5_B.s189_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s189_PackState = 0.0;
    Mooventure2016_Rev5_B.s189_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s189_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s189_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s189_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s189_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s189_MILState = 0.0;
    Mooventure2016_Rev5_B.s189_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s189_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s118_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s118_Saturation = 0.0;
    Mooventure2016_Rev5_B.s187_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s178_Product = 0.0;
    Mooventure2016_Rev5_B.s187_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s187_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s187_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s187_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s180_Abs2 = 0.0;
    Mooventure2016_Rev5_B.s179_Product = 0.0;
    Mooventure2016_Rev5_B.s121_MultiportSwitch = 0.0;
    Mooventure2016_Rev5_B.s529_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s448_Merge = 0.0;
    Mooventure2016_Rev5_B.s529_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s189_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s189_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s189_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s189_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s190_HEV_CC_Defrost_Mode = 0.0;
    Mooventure2016_Rev5_B.s190_AC_Engaged_CMD = 0.0;
    Mooventure2016_Rev5_B.s279_Merge = 0.0;
    Mooventure2016_Rev5_B.s280_Merge = 0.0;
    Mooventure2016_Rev5_B.s242_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s189_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s189_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s189_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s189_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s189_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s189_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s241_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion2 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion3 = 0.0;
    Mooventure2016_Rev5_B.s193_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s193_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s193_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s193_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s194_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s194_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s194_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s194_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s194_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s194_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s194_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s194_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s194_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o1 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o2 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o3 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o4 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o5 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o6 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o7 = 0.0;
    Mooventure2016_Rev5_B.s195_ReadCANMessage_o8 = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s333_Merge = 0.0;
    Mooventure2016_Rev5_B.s367_Merge = 0.0;
    Mooventure2016_Rev5_B.s399_Merge = 0.0;
    Mooventure2016_Rev5_B.s404_Merge = 0.0;
    Mooventure2016_Rev5_B.s452_Merge = 0.0;
    Mooventure2016_Rev5_B.s32_Merge = 0.0;
    Mooventure2016_Rev5_B.s33_Merge = 0.0;
    Mooventure2016_Rev5_B.s534_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s534_Current = 0.0;
    Mooventure2016_Rev5_B.s534_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s534_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s189_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s189_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s189_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s189_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s189_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s62_Merge = 0.0;
    Mooventure2016_Rev5_B.s263_Merge = 0.0;
    Mooventure2016_Rev5_B.s536_Vehicle_Speed = 0.0;
    Mooventure2016_Rev5_B.s65_Merge = 0.0;
    Mooventure2016_Rev5_B.s64_Merge = 0.0;
    Mooventure2016_Rev5_B.s537_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s189_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s189_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s189_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s189_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s189_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s189_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s189_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s189_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s261_Merge = 0.0;
    Mooventure2016_Rev5_B.s822_Switch = 0.0;
    Mooventure2016_Rev5_B.s821_Switch = 0.0;
    Mooventure2016_Rev5_B.s835_Merge = 0.0;
    Mooventure2016_Rev5_B.s836_Merge = 0.0;
    Mooventure2016_Rev5_B.s425_Merge = 0.0;
    Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s197_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s196_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s187_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s187_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s187_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s189_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s189_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s193_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s196_Heading = 0.0;
    Mooventure2016_Rev5_B.s196_Speed = 0.0;
    Mooventure2016_Rev5_B.s196_Altitude = 0.0;
    Mooventure2016_Rev5_B.s196_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s196_DateTime = 0.0;
    Mooventure2016_Rev5_B.s260_Merge = 0.0;
    Mooventure2016_Rev5_B.s659_CEL = 0.0;
    Mooventure2016_Rev5_B.s655_engTemp = 0.0;
    Mooventure2016_Rev5_B.s655_transTemp = 0.0;
    Mooventure2016_Rev5_B.s581_fan1 = 0.0;
    Mooventure2016_Rev5_B.s581_fan2 = 0.0;
    Mooventure2016_Rev5_B.s581_fan3 = 0.0;
    Mooventure2016_Rev5_B.s539_dirOut = 0.0;
    Mooventure2016_Rev5_B.s321_posOut = 0.0;
    Mooventure2016_Rev5_B.s321_ecoModeOut = 0.0;
    Mooventure2016_Rev5_B.s320_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s319_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s290_Out = 0.0;
    Mooventure2016_Rev5_B.s235_temp_reading = 0.0;
    Mooventure2016_Rev5_B.s116_state = 0.0;
    Mooventure2016_Rev5_B.s58_Genset_Enable = 0.0;
    Mooventure2016_Rev5_B.s58_Genset_Load = 0.0;
    Mooventure2016_Rev5_B.s58_Genset_RPM = 0.0;
    Mooventure2016_Rev5_B.s58_Genset_Throttle = 0.0;
    Mooventure2016_Rev5_B.s28_RadPump = 0.0;
    Mooventure2016_Rev5_B.s28_CorePump = 0.0;
    Mooventure2016_Rev5_B.s28_fan = 0.0;
    Mooventure2016_Rev5_B.s28_RadBlendOut = 0.0;
    Mooventure2016_Rev5_B.s28_CoreBlendOut = 0.0;
    Mooventure2016_Rev5_B.s28_Heat1 = 0.0;
    Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
    Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
    Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
    Mooventure2016_Rev5_B.s28_u1 = 0.0;
    Mooventure2016_Rev5_B.s28_u2 = 0.0;
    Mooventure2016_Rev5_B.s28_u3 = 0.0;
    Mooventure2016_Rev5_B.s28_u4 = 0.0;
    Mooventure2016_Rev5_B.s28_u5 = 0.0;
    Mooventure2016_Rev5_B.s28_u6 = 0.0;
    Mooventure2016_Rev5_B.s28_u7 = 0.0;
    Mooventure2016_Rev5_B.s28_u1_a = 0.0;
    Mooventure2016_Rev5_B.s28_u2_e = 0.0;
    Mooventure2016_Rev5_B.s28_u3_f = 0.0;
    Mooventure2016_Rev5_B.s28_u4_d = 0.0;
    Mooventure2016_Rev5_B.s28_u5_h = 0.0;
    Mooventure2016_Rev5_B.s28_u6_k = 0.0;
    Mooventure2016_Rev5_B.s28_u7_a = 0.0;
    Mooventure2016_Rev5_B.s39_Switch = 0.0;
    Mooventure2016_Rev5_B.s38_Switch = 0.0;
    Mooventure2016_Rev5_B.s532_sf_RadiatorMotionControl.s582_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s532_sf_RadiatorMotionControl.s582_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s532_sf_HeaterCoreMotionControl.s582_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s532_sf_HeaterCoreMotionControl.s582_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s529_sf_DataCorrectionMotorABS.s111_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s179_sf_CALCChart.s181_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s178_sf_ABSChart.s181_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s119_sf_Chart.s123_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s119_sf_Chart.s123_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s115_sf_Chart.s123_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s115_sf_Chart.s123_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s123_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s123_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s105_sf_DataCorrection.s111_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s100_sf_DataCorrectionMotorFault.s111_torqueOut = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s142_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s143_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s165_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s266_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s171_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s268_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s241_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s655_count = 0.0;
  Mooventure2016_Rev5_DWork.s186_count = 0.0;
  Mooventure2016_Rev5_DWork.s28_count = 0.0;
  Mooventure2016_Rev5_DWork.s179_sf_CALCChart.s181_lastTorque = 0.0;
  Mooventure2016_Rev5_DWork.s178_sf_ABSChart.s181_lastTorque = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_7280p0001 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_10472p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_10471p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_10473p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10474p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_10475p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_10476p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_10477p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_10478p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_10402p0001 */
  Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S880>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S890>/Function-Call Generator'
   *  Start for SubSystem: '<S877>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S881>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S891>/Function-Call Generator'
   *  Start for SubSystem: '<S877>/motohawk_store_nvmem'
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

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_7280p0001 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_10472p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_10471p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_10473p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10474p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_10475p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_10476p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_10477p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_10478p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_10402p0001 */
  Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1 = 1;
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
