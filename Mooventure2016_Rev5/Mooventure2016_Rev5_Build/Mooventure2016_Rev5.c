/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2161
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 17:16:08 2018
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
  /* Enable for Trigger_IDLE_EVENT_7164p0005 */
  if (Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_9594p0002 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_9593p0002 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_9595p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9596p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_9597p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_9598p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_9599p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_9600p0005 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_7217p0001 */
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
    Mooventure2016_Rev5_B.s194_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s444_Merge = 0.0;
    Mooventure2016_Rev5_B.s138_Product = 0.0;
    Mooventure2016_Rev5_B.s136_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s140_Product = 0.0;
    Mooventure2016_Rev5_B.s136_Product2 = 0.0;
    Mooventure2016_Rev5_B.s141_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s143_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s163_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s161_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s191_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s191_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s191_Brake_Position_l = 0.0;
    Mooventure2016_Rev5_B.s232_DataTypeConversion = 0.0;
    Mooventure2016_Rev5_B.s187_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s187_PackState = 0.0;
    Mooventure2016_Rev5_B.s187_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s187_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s187_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s187_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s187_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s187_MILState = 0.0;
    Mooventure2016_Rev5_B.s187_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s187_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s116_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s116_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s116_Saturation = 0.0;
    Mooventure2016_Rev5_B.s185_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s176_Product = 0.0;
    Mooventure2016_Rev5_B.s185_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s185_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s185_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s185_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s178_Abs2 = 0.0;
    Mooventure2016_Rev5_B.s177_Product = 0.0;
    Mooventure2016_Rev5_B.s119_MultiportSwitch = 0.0;
    Mooventure2016_Rev5_B.s526_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s445_Merge = 0.0;
    Mooventure2016_Rev5_B.s526_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s187_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s187_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s187_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s187_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s188_HEV_CC_Defrost_Mode = 0.0;
    Mooventure2016_Rev5_B.s188_AC_Engaged_CMD = 0.0;
    Mooventure2016_Rev5_B.s276_Merge = 0.0;
    Mooventure2016_Rev5_B.s277_Merge = 0.0;
    Mooventure2016_Rev5_B.s239_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s187_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s187_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s187_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s187_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s187_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s187_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s229_temp_reading = 0.0;
    Mooventure2016_Rev5_B.s238_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion2 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion3 = 0.0;
    Mooventure2016_Rev5_B.s191_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s191_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s191_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s191_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s192_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s192_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s192_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s192_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s192_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s192_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s192_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s192_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s192_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o1 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o2 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o3 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o4 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o5 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o6 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o7 = 0.0;
    Mooventure2016_Rev5_B.s193_ReadCANMessage_o8 = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s330_Merge = 0.0;
    Mooventure2016_Rev5_B.s364_Merge = 0.0;
    Mooventure2016_Rev5_B.s396_Merge = 0.0;
    Mooventure2016_Rev5_B.s401_Merge = 0.0;
    Mooventure2016_Rev5_B.s449_Merge = 0.0;
    Mooventure2016_Rev5_B.s32_Merge = 0.0;
    Mooventure2016_Rev5_B.s33_Merge = 0.0;
    Mooventure2016_Rev5_B.s531_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s531_Current = 0.0;
    Mooventure2016_Rev5_B.s531_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s531_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s187_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s187_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s187_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s187_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s187_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s62_Merge = 0.0;
    Mooventure2016_Rev5_B.s260_Merge = 0.0;
    Mooventure2016_Rev5_B.s533_Vehicle_Speed = 0.0;
    Mooventure2016_Rev5_B.s65_Merge = 0.0;
    Mooventure2016_Rev5_B.s64_Merge = 0.0;
    Mooventure2016_Rev5_B.s534_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s187_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s187_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s187_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s187_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s187_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s187_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s187_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s187_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s258_Merge = 0.0;
    Mooventure2016_Rev5_B.s830_Switch = 0.0;
    Mooventure2016_Rev5_B.s829_Switch = 0.0;
    Mooventure2016_Rev5_B.s843_Merge = 0.0;
    Mooventure2016_Rev5_B.s844_Merge = 0.0;
    Mooventure2016_Rev5_B.s422_Merge = 0.0;
    Mooventure2016_Rev5_B.s195_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s195_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s195_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s194_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s185_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s185_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s185_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s187_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s187_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s191_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s194_Heading = 0.0;
    Mooventure2016_Rev5_B.s194_Speed = 0.0;
    Mooventure2016_Rev5_B.s194_Altitude = 0.0;
    Mooventure2016_Rev5_B.s194_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s194_DateTime = 0.0;
    Mooventure2016_Rev5_B.s257_Merge = 0.0;
    Mooventure2016_Rev5_B.s655_CEL = 0.0;
    Mooventure2016_Rev5_B.s651_engTemp = 0.0;
    Mooventure2016_Rev5_B.s651_transTemp = 0.0;
    Mooventure2016_Rev5_B.s577_fan1 = 0.0;
    Mooventure2016_Rev5_B.s577_fan2 = 0.0;
    Mooventure2016_Rev5_B.s577_fan3 = 0.0;
    Mooventure2016_Rev5_B.s535_dirOut = 0.0;
    Mooventure2016_Rev5_B.s318_posOut = 0.0;
    Mooventure2016_Rev5_B.s318_ecoModeOut = 0.0;
    Mooventure2016_Rev5_B.s317_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s316_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s287_Out = 0.0;
    Mooventure2016_Rev5_B.s114_state = 0.0;
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
    Mooventure2016_Rev5_B.s529_sf_RadiatorMotionControl.s578_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s529_sf_RadiatorMotionControl.s578_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s529_sf_HeaterCoreMotionControl.s578_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s529_sf_HeaterCoreMotionControl.s578_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s177_sf_CALCChart.s179_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s176_sf_ABSChart.s179_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s117_sf_Chart.s121_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s117_sf_Chart.s121_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s121_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s121_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s111_sf_Chart.s121_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s111_sf_Chart.s121_regenTorque = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s138_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s139_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s263_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s169_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s265_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s239_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s238_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s651_count = 0.0;
  Mooventure2016_Rev5_DWork.s184_count = 0.0;
  Mooventure2016_Rev5_DWork.s28_count = 0.0;
  Mooventure2016_Rev5_DWork.s177_sf_CALCChart.s179_lastTorque = 0.0;
  Mooventure2016_Rev5_DWork.s176_sf_ABSChart.s179_lastTorque = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_7164p0005 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_9594p0002 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_9593p0002 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_9595p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9596p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_9597p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_9598p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_9599p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_9600p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_7217p0001 */
  Mooventure2016_Rev5_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S888>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S898>/Function-Call Generator'
   *  Start for SubSystem: '<S885>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S889>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S899>/Function-Call Generator'
   *  Start for SubSystem: '<S885>/motohawk_store_nvmem'
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

  /* Enable for Trigger_IDLE_EVENT_7164p0005 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_9594p0002 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_9593p0002 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_9595p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9596p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_9597p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_9598p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_9599p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_9600p0005 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_7217p0001 */
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
