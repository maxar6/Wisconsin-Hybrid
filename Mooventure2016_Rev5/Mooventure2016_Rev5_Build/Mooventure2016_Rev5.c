/*
 * File: Mooventure2016_Rev5.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2141
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 21:19:10 2018
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
  /* Enable for Trigger_IDLE_EVENT_17123p0007 */
  if (Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_18252p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_18251p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_18253p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_18254p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_18255p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_18256p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_18257p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_18258p0001 */
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_18182p0001 */
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
    Mooventure2016_Rev5_B.s202_IPT_CurrentUsed = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_CurrentRequest = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_MotorSpeed = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_WheelTorqueDelivered = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_CurrentLimit = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_Antishudder = 0.0;
    Mooventure2016_Rev5_B.s453_Merge = 0.0;
    Mooventure2016_Rev5_B.s142_Product = 0.0;
    Mooventure2016_Rev5_B.s140_Sum2 = 0.0;
    Mooventure2016_Rev5_B.s144_Product = 0.0;
    Mooventure2016_Rev5_B.s140_Product2 = 0.0;
    Mooventure2016_Rev5_B.s145_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s147_MinMax1 = 0.0;
    Mooventure2016_Rev5_B.s169_Switch1 = 0.0;
    Mooventure2016_Rev5_B.s167_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s199_Shift_Position = 0.0;
    Mooventure2016_Rev5_B.s195_JCS_PackIdentifier = 0.0;
    Mooventure2016_Rev5_B.s195_PackState = 0.0;
    Mooventure2016_Rev5_B.s195_PrechargeState = 0.0;
    Mooventure2016_Rev5_B.s195_HVIL_Status = 0.0;
    Mooventure2016_Rev5_B.s195_IsolationStatus = 0.0;
    Mooventure2016_Rev5_B.s195_WakeSignal = 0.0;
    Mooventure2016_Rev5_B.s195_SleepInhibited = 0.0;
    Mooventure2016_Rev5_B.s195_MILState = 0.0;
    Mooventure2016_Rev5_B.s195_StateOfCharge = 0.0;
    Mooventure2016_Rev5_B.s195_PS_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s199_Brake_Position = 0.0;
    Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s118_IPT_Torque_Request = 0.0;
    Mooventure2016_Rev5_B.s118_Saturation = 0.0;
    Mooventure2016_Rev5_B.s193_TCS_ENG_EVNT_IN_PROGRESS = 0.0;
    Mooventure2016_Rev5_B.s184_Product = 0.0;
    Mooventure2016_Rev5_B.s193_Front_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s193_Front_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s193_Rear_left_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s193_Rear_right_whl_speed = 0.0;
    Mooventure2016_Rev5_B.s186_Abs2 = 0.0;
    Mooventure2016_Rev5_B.s185_Product = 0.0;
    Mooventure2016_Rev5_B.s121_MultiportSwitch = 0.0;
    Mooventure2016_Rev5_B.s535_Pct_whl_trq_desired = 0.0;
    Mooventure2016_Rev5_B.s454_Merge = 0.0;
    Mooventure2016_Rev5_B.s535_Commanded_mot_torq = 0.0;
    Mooventure2016_Rev5_B.s195_BatteryVoltage = 0.0;
    Mooventure2016_Rev5_B.s195_BatteryCurrent = 0.0;
    Mooventure2016_Rev5_B.s195_BusVoltage = 0.0;
    Mooventure2016_Rev5_B.s195_PVC_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s196_HEV_CC_Defrost_Mode = 0.0;
    Mooventure2016_Rev5_B.s196_AC_Engaged_CMD = 0.0;
    Mooventure2016_Rev5_B.s285_Merge = 0.0;
    Mooventure2016_Rev5_B.s286_Merge = 0.0;
    Mooventure2016_Rev5_B.s248_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s195_MaxCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s195_MinCellVoltage = 0.0;
    Mooventure2016_Rev5_B.s195_MaxCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s195_MinCellTemperature = 0.0;
    Mooventure2016_Rev5_B.s195_CoolantTemperature = 0.0;
    Mooventure2016_Rev5_B.s195_DPI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s247_Sum1 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion2 = 0.0;
    Mooventure2016_Rev5_B.s15_DataTypeConversion3 = 0.0;
    Mooventure2016_Rev5_B.s199_DRIVER_1 = 0.0;
    Mooventure2016_Rev5_B.s199_DRIVER_10 = 0.0;
    Mooventure2016_Rev5_B.s199_PASSENGER_1 = 0.0;
    Mooventure2016_Rev5_B.s199_PASSENGER_10 = 0.0;
    Mooventure2016_Rev5_B.s200_InputVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_OutputVoltage = 0.0;
    Mooventure2016_Rev5_B.s200_InputCurrentLimitMax = 0.0;
    Mooventure2016_Rev5_B.s200_InputCurrent = 0.0;
    Mooventure2016_Rev5_B.s200_OutputCurrent = 0.0;
    Mooventure2016_Rev5_B.s200_Eaton_HV_Charger_Temperature = 0.0;
    Mooventure2016_Rev5_B.s200_ChargerState = 0.0;
    Mooventure2016_Rev5_B.s200_MessageCounter = 0.0;
    Mooventure2016_Rev5_B.s200_MessageChecksum = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o1 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o2 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o3 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o4 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o5 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o6 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o7 = 0.0;
    Mooventure2016_Rev5_B.s201_ReadCANMessage_o8 = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_InverterTemperature = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_MotorTemperature = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_MaxTorqueAvailGen = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_MaxTorqueAvailMotor = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_HVDCVoltage = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_ErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_IPTReady = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_IPTAwake = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_MaxWasteAvailable = 0.0;
    Mooventure2016_Rev5_B.s339_Merge = 0.0;
    Mooventure2016_Rev5_B.s373_Merge = 0.0;
    Mooventure2016_Rev5_B.s405_Merge = 0.0;
    Mooventure2016_Rev5_B.s410_Merge = 0.0;
    Mooventure2016_Rev5_B.s458_Merge = 0.0;
    Mooventure2016_Rev5_B.s32_Merge = 0.0;
    Mooventure2016_Rev5_B.s33_Merge = 0.0;
    Mooventure2016_Rev5_B.s540_Engine_Speed = 0.0;
    Mooventure2016_Rev5_B.s540_Current = 0.0;
    Mooventure2016_Rev5_B.s540_Vehi_Speed = 0.0;
    Mooventure2016_Rev5_B.s540_ODO_Count = 0.0;
    Mooventure2016_Rev5_B.s195_TripAmpHoursIn = 0.0;
    Mooventure2016_Rev5_B.s195_TripAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s195_StateOfChargeMax = 0.0;
    Mooventure2016_Rev5_B.s195_StateOfChargeMin = 0.0;
    Mooventure2016_Rev5_B.s195_TAH_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s62_Merge = 0.0;
    Mooventure2016_Rev5_B.s269_Merge = 0.0;
    Mooventure2016_Rev5_B.s542_Vehicle_Speed = 0.0;
    Mooventure2016_Rev5_B.s65_Merge = 0.0;
    Mooventure2016_Rev5_B.s64_Merge = 0.0;
    Mooventure2016_Rev5_B.s543_VSC_WheelTorqueRequest = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Enable = 0.0;
    Mooventure2016_Rev5_B.s195_MaximumDischargePower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s195_MaximumRegenPower_Continuous = 0.0;
    Mooventure2016_Rev5_B.s195_PPLCont_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s195_MaximumDischargePower_10s = 0.0;
    Mooventure2016_Rev5_B.s195_MaximumRegenPower_10s = 0.0;
    Mooventure2016_Rev5_B.s195_IsolationLevel = 0.0;
    Mooventure2016_Rev5_B.s195_ActiveDTC = 0.0;
    Mooventure2016_Rev5_B.s195_PPL10s_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s267_Merge = 0.0;
    Mooventure2016_Rev5_B.s830_Switch = 0.0;
    Mooventure2016_Rev5_B.s829_Switch = 0.0;
    Mooventure2016_Rev5_B.s843_Merge = 0.0;
    Mooventure2016_Rev5_B.s844_Merge = 0.0;
    Mooventure2016_Rev5_B.s431_Merge = 0.0;
    Mooventure2016_Rev5_B.s203_STR_WHL_ANGLE_CNTR_FND = 0.0;
    Mooventure2016_Rev5_B.s203_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s203_RELATIVE_STR_WHL_ANGLE = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCErrorCategory = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCLVOn = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCLVGeneralError = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCLVMaxPower = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCLVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCLVBusVoltage = 0.0;
    Mooventure2016_Rev5_B.s202_IPT_DCHVBusCurrent = 0.0;
    Mooventure2016_Rev5_B.s193_LF_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s193_RT_Wheel_Rolling_Count = 0.0;
    Mooventure2016_Rev5_B.s193_Wheel_Rolling_Timestamp = 0.0;
    Mooventure2016_Rev5_B.s195_LifeTimeAmpHoursOut = 0.0;
    Mooventure2016_Rev5_B.s195_LTAHI_RollingCounter = 0.0;
    Mooventure2016_Rev5_B.s199_Button_Pressed = 0.0;
    Mooventure2016_Rev5_B.s202_Heading = 0.0;
    Mooventure2016_Rev5_B.s202_Speed = 0.0;
    Mooventure2016_Rev5_B.s202_Altitude = 0.0;
    Mooventure2016_Rev5_B.s202_GPSQuality = 0.0;
    Mooventure2016_Rev5_B.s202_DateTime = 0.0;
    Mooventure2016_Rev5_B.s266_Merge = 0.0;
    Mooventure2016_Rev5_B.s665_CEL = 0.0;
    Mooventure2016_Rev5_B.s661_engTemp = 0.0;
    Mooventure2016_Rev5_B.s661_transTemp = 0.0;
    Mooventure2016_Rev5_B.s661_timerOut = 0.0;
    Mooventure2016_Rev5_B.s587_fan1 = 0.0;
    Mooventure2016_Rev5_B.s587_fan2 = 0.0;
    Mooventure2016_Rev5_B.s587_fan3 = 0.0;
    Mooventure2016_Rev5_B.s545_dirOut = 0.0;
    Mooventure2016_Rev5_B.s327_posOut = 0.0;
    Mooventure2016_Rev5_B.s327_ecoModeOut = 0.0;
    Mooventure2016_Rev5_B.s326_passengerTemp = 0.0;
    Mooventure2016_Rev5_B.s325_driverTemp = 0.0;
    Mooventure2016_Rev5_B.s296_Out = 0.0;
    Mooventure2016_Rev5_B.s241_temp_reading = 0.0;
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
    Mooventure2016_Rev5_B.s538_sf_RadiatorMotionControl.s588_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s538_sf_RadiatorMotionControl.s588_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s538_sf_HeaterCoreMotionControl.s588_motorEnable = 0.0;
    Mooventure2016_Rev5_B.s538_sf_HeaterCoreMotionControl.s588_motorDirection =
      0.0;
    Mooventure2016_Rev5_B.s535_sf_DataCorrectionMotorABS.s111_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s185_sf_CALCChart.s187_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s184_sf_ABSChart.s187_TorqueOut = 0.0;
    Mooventure2016_Rev5_B.s119_sf_GasPedalScaling.s125_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s119_sf_Chart.s124_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s119_sf_Chart.s124_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s119_sf_BrakePedalScaling.s123_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s115_sf_GasPedalScaling.s125_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s115_sf_Chart.s124_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s115_sf_Chart.s124_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s115_sf_BrakePedalScaling.s123_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s113_sf_GasPedalScaling.s125_throttleOut = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s124_driveTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_Chart.s124_regenTorque = 0.0;
    Mooventure2016_Rev5_B.s113_sf_BrakePedalScaling.s123_brakeOut = 0.0;
    Mooventure2016_Rev5_B.s105_sf_DataCorrection.s111_torqueOut = 0.0;
    Mooventure2016_Rev5_B.s100_sf_DataCorrectionMotorFault.s111_torqueOut = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Mooventure2016_Rev5_DWork, 0,
                sizeof(D_Work_Mooventure2016_Rev5));
  Mooventure2016_Rev5_DWork.s142_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s143_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s144_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s145_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s169_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s167_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s272_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s175_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s274_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s248_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s247_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE = 0.0;
  Mooventure2016_Rev5_DWork.s686_count = 0.0;
  Mooventure2016_Rev5_DWork.s192_count = 0.0;
  Mooventure2016_Rev5_DWork.s28_count = 0.0;
  Mooventure2016_Rev5_DWork.s185_sf_CALCChart.s187_lastTorque = 0.0;
  Mooventure2016_Rev5_DWork.s184_sf_ABSChart.s187_lastTorque = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  Mooventure2016_Rev5_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_17123p0007 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_18252p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_18251p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_18253p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_18254p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_18255p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_18256p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_18257p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_18258p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_18182p0001 */
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

  /* Enable for Trigger_IDLE_EVENT_17123p0007 */
  Mooventure2016_Rev5_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_18252p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_18251p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_18253p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_18254p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_18255p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_18256p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_18257p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_18258p0001 */
  Mooventure2016_Rev5_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_18182p0001 */
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
