/*
 * File: cx06_MA.c
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA.h"
#include "cx06_MA_private.h"

/* Block signals (auto storage) */
BlockIO_cx06_MA cx06_MA_B;

/* Block states (auto storage) */
D_Work_cx06_MA cx06_MA_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_cx06_MA cx06_MA_PrevZCSigState;

/* Real-time model */
RT_MODEL_cx06_MA cx06_MA_M_;
RT_MODEL_cx06_MA *cx06_MA_M = &cx06_MA_M_;

/* Model step function */
void cx06_MA_step(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-006, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  cx06_MA_M->Timing.clockTick0++;
  if (!cx06_MA_M->Timing.clockTick0) {
    cx06_MA_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void cx06_MA_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)cx06_MA_M, 0,
                sizeof(RT_MODEL_cx06_MA));

  /* block I/O */
  (void) memset(((void *) &cx06_MA_B), 0,
                sizeof(BlockIO_cx06_MA));

  {
    cx06_MA_B.s2_DiscreteTimeIntegrator = 0.0;
    cx06_MA_B.s2_Sum = 0.0;
    cx06_MA_B.s2_Product1 = 0.0;
    cx06_MA_B.s2_Sum3 = 0.0;
    cx06_MA_B.s75_Product1 = 0.0;
    cx06_MA_B.s103_Saturation = 0.0;
    cx06_MA_B.s91_Gain1 = 0.0;
    cx06_MA_B.s125_Merge = 0.0;
    cx06_MA_B.s126_Merge = 0.0;
    cx06_MA_B.s127_Merge = 0.0;
    cx06_MA_B.s128_Merge = 0.0;
    cx06_MA_B.s143_Merge = 0.0;
    cx06_MA_B.s145_Merge = 0.0;
    cx06_MA_B.s147_Merge = 0.0;
    cx06_MA_B.s149_Merge = 0.0;
    cx06_MA_B.s184_Merge = 0.0;
    cx06_MA_B.s195_Merge = 0.0;
    cx06_MA_B.s204_Merge = 0.0;
    cx06_MA_B.s205_Merge = 0.0;
    cx06_MA_B.s206_Merge = 0.0;
    cx06_MA_B.s208_Merge = 0.0;
    cx06_MA_B.s175_Merge = 0.0;
    cx06_MA_B.s176_Merge = 0.0;
    cx06_MA_B.s177_Merge = 0.0;
    cx06_MA_B.s210_Switch = 0.0;
    cx06_MA_B.s168_Sum1 = 0.0;
    cx06_MA_B.s168_Saturation = 0.0;
    cx06_MA_B.s188_Merge = 0.0;
    cx06_MA_B.s192_Merge = 0.0;
    cx06_MA_B.s193_Merge = 0.0;
    cx06_MA_B.s194_Merge = 0.0;
    cx06_MA_B.s198_Merge = 0.0;
    cx06_MA_B.s80_Torque_Request = 0.0;
    cx06_MA_B.s304_Merge = 0.0;
    cx06_MA_B.s290_Gain1 = 0.0;
    cx06_MA_B.s335_Merge = 0.0;
    cx06_MA_B.s336_Merge = 0.0;
    cx06_MA_B.s337_Merge = 0.0;
    cx06_MA_B.s338_Merge = 0.0;
    cx06_MA_B.s339_Merge = 0.0;
    cx06_MA_B.s340_Merge = 0.0;
    cx06_MA_B.s376_Product = 0.0;
    cx06_MA_B.s376_Saturation = 0.0;
    cx06_MA_B.s388_Product = 0.0;
    cx06_MA_B.s380_Gain = 0.0;
    cx06_MA_B.s380_Sum = 0.0;
    cx06_MA_B.s380_Switch2 = 0.0;
    cx06_MA_B.s380_MinMax = 0.0;
    cx06_MA_B.s380_Saturation = 0.0;
    cx06_MA_B.root_motor_Torque = 0.0;
    cx06_MA_B.s365_Sum1 = 0.0;
    cx06_MA_B.s384_rear_max_torque_aval = 0.0;
    cx06_MA_B.s365_motor_torque = 0.0;
    cx06_MA_B.root_motor_Enable = 0.0;
    cx06_MA_B.root_engine_Torque = 0.0;
    cx06_MA_B.s384_Saturation2 = 0.0;
    cx06_MA_B.s365_engine_Torque = 0.0;
    cx06_MA_B.root_KillDelay_Cnt = 0.0;
    cx06_MA_B.root_Kill_Cnt = 0.0;
    cx06_MA_B.root_StartDelay_Cnt = 0.0;
    cx06_MA_B.root_StartRetryDelay_Cnt = 0.0;
    cx06_MA_B.root_StartRetry_Cnt = 0.0;
    cx06_MA_B.root_Start_Cnt = 0.0;
    cx06_MA_B.s366_Gain = 0.0;
    cx06_MA_B.s366_Sum = 0.0;
    cx06_MA_B.s366_Product1 = 0.0;
    cx06_MA_B.s416_Switch2 = 0.0;
    cx06_MA_B.s366_Inj_Freq = 0.0;
    cx06_MA_B.s416_Gain1 = 0.0;
    cx06_MA_B.s420_mult = 0.0;
    cx06_MA_B.s413_level = 0.0;
    cx06_MA_B.s378_Sum7 = 0.0;
    cx06_MA_B.s403_Product1 = 0.0;
    cx06_MA_B.s381_motor_Torque = 0.0;
    cx06_MA_B.s408_Product = 0.0;
    cx06_MA_B.s402_KillDelay_Cnt = 0.0;
    cx06_MA_B.s402_Kill_Cnt = 0.0;
    cx06_MA_B.s402_StartDelay_Cnt = 0.0;
    cx06_MA_B.s402_StartRetryDelay_Cnt = 0.0;
    cx06_MA_B.s402_StartRetry_Cnt = 0.0;
    cx06_MA_B.s402_Start_Cnt = 0.0;
    cx06_MA_B.s402_kill = 0.0;
    cx06_MA_B.s402_start = 0.0;
    cx06_MA_B.s401_KillDelay_Cnt = 0.0;
    cx06_MA_B.s401_Kill_Cnt = 0.0;
    cx06_MA_B.s401_StartDelay_Cnt = 0.0;
    cx06_MA_B.s401_StartRetryDelay_Cnt = 0.0;
    cx06_MA_B.s401_StartRetry_Cnt = 0.0;
    cx06_MA_B.s401_Start_Cnt = 0.0;
    cx06_MA_B.s401_kill = 0.0;
    cx06_MA_B.s401_start = 0.0;
    cx06_MA_B.s393_Sum = 0.0;
    cx06_MA_B.s394_Sum = 0.0;
    cx06_MA_B.s395_Sum = 0.0;
    cx06_MA_B.s396_Sum = 0.0;
    cx06_MA_B.s17_AC_Pres = 0.0;
    cx06_MA_B.s25_Accel = 0.0;
    cx06_MA_B.s21_WeightedMovingAverage = 0.0;
    cx06_MA_B.s21_MAF = 0.0;
    cx06_MA_B.s11_CAN_EWARN2 = 0.0;
    cx06_MA_B.s11_Output2_V = 0.0;
    cx06_MA_B.s11_CAN_EWARN1 = 0.0;
    cx06_MA_B.s11_Output1_V = 0.0;
    cx06_MA_B.s12_Eng_Spd_V = 0.0;
    cx06_MA_B.s12_Acel_Effect_Pos_V = 0.0;
    cx06_MA_B.s12_Acel_Grad_V = 0.0;
    cx06_MA_B.s12_Throt_Pos_V = 0.0;
    cx06_MA_B.s12_Acel_Actual_Pos_V = 0.0;
    cx06_MA_B.s12_Eng_Spd = 0.0;
    cx06_MA_B.s12_Acel_Effect_Pos = 0.0;
    cx06_MA_B.s12_Acel_Grad = 0.0;
    cx06_MA_B.s12_Throt_Pos = 0.0;
    cx06_MA_B.s12_Acel_Actual_Pos = 0.0;
    cx06_MA_B.s12_Eng_Torq_Actual_V = 0.0;
    cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V = 0.0;
    cx06_MA_B.s12_Eng_Max_Drag_Torq_V = 0.0;
    cx06_MA_B.s12_Eng_Torq_Max_V = 0.0;
    cx06_MA_B.s12_Eng_Torq_Actual = 0.0;
    cx06_MA_B.s12_Eng_Torq_Request = 0.0;
    cx06_MA_B.s12_Eng_Max_Drag_Torq = 0.0;
    cx06_MA_B.s12_Eng_Torq_Max = 0.0;
    cx06_MA_B.s12_Eng_Idle_Spd_V = 0.0;
    cx06_MA_B.s12_Eng_Idle_Spd = 0.0;
    cx06_MA_B.s12_Base_Target_Eng_Idle_Spd = 0.0;
    cx06_MA_B.s12_Eng_Airflow_Backup_Mode = 0.0;
    cx06_MA_B.s12_Eng_Throt_Control_Operat = 0.0;
    cx06_MA_B.s12_Eng_Crankshaft_Backup_Mode = 0.0;
    cx06_MA_B.s12_Eng_Allowed_Clutch_Adapt = 0.0;
    cx06_MA_B.s12_Brake_Ped_Switch_Active_V = 0.0;
    cx06_MA_B.s12_Part_Filter_Clean_Alg_Active = 0.0;
    cx06_MA_B.s12_Fuel_Inj_Roll_Cnt_Reset_Occured = 0.0;
    cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V = 0.0;
    cx06_MA_B.s12_Eng_Limp_Home_Mode = 0.0;
    cx06_MA_B.s12_Eng_Torq_Reduction_Failed = 0.0;
    cx06_MA_B.s12_Eng_Fail_Code_Retrieval_Required = 0.0;
    cx06_MA_B.s12_Generator_Failed = 0.0;
    cx06_MA_B.s12_Brake_Ped_Switch = 0.0;
    cx06_MA_B.s12_Cruise_Control_Clutch_Switch = 0.0;
    cx06_MA_B.s12_Cruise_Control_Active = 0.0;
    cx06_MA_B.s12_Eng_Running_Stat = 0.0;
    cx06_MA_B.s12_Warm_Up_Shift_Pattern_Req = 0.0;
    cx06_MA_B.s12_Rough_Road = 0.0;
    cx06_MA_B.s12_Eng_Warm_Up_Cycle_Achieved = 0.0;
    cx06_MA_B.s12_Service_Eng_Non_Emission = 0.0;
    cx06_MA_B.s12_Cruise_Control_Throt_Cmd_Stat = 0.0;
    cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V = 0.0;
    cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In = 0.0;
    cx06_MA_B.s12_PrwTrn_Brk_Ped_In = 0.0;
    cx06_MA_B.s12_Eng_Oil_Lvl_Low = 0.0;
    cx06_MA_B.s12_Eng_Oil_Pres_Low = 0.0;
    cx06_MA_B.s12_Accel_Kick_Down = 0.0;
    cx06_MA_B.s12_PrwTrn_Crank = 0.0;
    cx06_MA_B.s12_Eng_Trans_Emission_DTC_Stored = 0.0;
    cx06_MA_B.s12_Eng_Torq_Tract_Control_Req_Failed = 0.0;
    cx06_MA_B.s12_Eng_Torq_Trans_Req_Failed = 0.0;
    cx06_MA_B.s12_Fuel_Inj_Roll_Cnt = 0.0;
    cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed = 0.0;
    cx06_MA_B.s12_Eng_Emissions_Malfunction = 0.0;
    cx06_MA_B.s12_Cruise_Control_Enabled = 0.0;
    cx06_MA_B.s12_Eng_Coast_Limit_Slip = 0.0;
    cx06_MA_B.s12_Eng_Coast_Fuel_Cut_Off_Active = 0.0;
    cx06_MA_B.s12_Eng_Torq_Cruise_Control_Req_Failed = 0.0;
    cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V = 0.0;
    cx06_MA_B.s12_Eng_Boost_Pres_V = 0.0;
    cx06_MA_B.s12_Baro_Pres_Abs_V = 0.0;
    cx06_MA_B.s12_PwrTrn_Hi_Elect_Load_Req = 0.0;
    cx06_MA_B.s12_Aply_Brk_Pedal_Ind = 0.0;
    cx06_MA_B.s12_Check_Fuel_Cap = 0.0;
    cx06_MA_B.s12_Eng_Recommend_Shft = 0.0;
    cx06_MA_B.s12_Eng_H20_In_Fuel = 0.0;
    cx06_MA_B.s12_Eng_Boost_Pres = 0.0;
    cx06_MA_B.s12_Eng_Oil_Remaining_Life = 0.0;
    cx06_MA_B.s12_Eng_Prod_Option_Ident = 0.0;
    cx06_MA_B.s12_Eng_Fan_Spd = 0.0;
    cx06_MA_B.s12_Eng_Gear_Shift_Inh_Req = 0.0;
    cx06_MA_B.s12_Eng_Jerk_Shift_Pattern_Req = 0.0;
    cx06_MA_B.s12_Eng_Ntral_Control_Inh_Req = 0.0;
    cx06_MA_B.s12_Reduce_Prf_Shft_Ptrn_Req = 0.0;
    cx06_MA_B.s12_Throt_Progression = 0.0;
    cx06_MA_B.s12_PwrTrn_Part_FilterWarning = 0.0;
    cx06_MA_B.s12_Baro_Pres_Abs = 0.0;
    cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V = 0.0;
    cx06_MA_B.s12_AC_Comp_Clutch_Engaged = 0.0;
    cx06_MA_B.s12_AC_Comp_Stroke_Req = 0.0;
    cx06_MA_B.s12_AC_Off_Ind = 0.0;
    cx06_MA_B.s12_AC_Ref_Hi_Side_Pres = 0.0;
    cx06_MA_B.s12_Veh_Spd_V = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Lft_Reset = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Rht_Reset = 0.0;
    cx06_MA_B.s12_Veh_Spd = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Lft = 0.0;
    cx06_MA_B.s12_Dist_Roll_Cnt_Rht = 0.0;
    cx06_MA_B.s12_Eng_Coolant_Temp_V = 0.0;
    cx06_MA_B.s12_Eng_Intake_Air_Temp_V = 0.0;
    cx06_MA_B.s12_Eng_Coolant_Temp = 0.0;
    cx06_MA_B.s12_Eng_Intake_Air_Temp = 0.0;
    cx06_MA_B.s13_AC_Clutch_Req = 0.0;
    cx06_MA_B.s13_System_Power_Mode = 0.0;
    cx06_MA_B.s13_RunCrank_Status = 0.0;
    cx06_MA_B.s13_Acc_Status = 0.0;
    cx06_MA_B.s13_Park_Brake = 0.0;
    cx06_MA_B.s13_FL_Wheel_Vel = 0.0;
    cx06_MA_B.s13_FL_Wheel_Valid = 0.0;
    cx06_MA_B.s13_FR_Wheel_Vel = 0.0;
    cx06_MA_B.s13_FR_Wheel_Valid = 0.0;
    cx06_MA_B.s13_RL_Wheel_Vel = 0.0;
    cx06_MA_B.s13_RL_Wheel_Valid = 0.0;
    cx06_MA_B.s13_RR_Wheel_Vel = 0.0;
    cx06_MA_B.s13_RR_Wheel_Valid = 0.0;
    cx06_MA_B.s41_Switch = 0.0;
    cx06_MA_B.s42_Switch = 0.0;
    cx06_MA_B.s43_Switch = 0.0;
    cx06_MA_B.s44_Switch = 0.0;
    cx06_MA_B.s14_TorqueDelivered = 0.0;
    cx06_MA_B.s14_DCCurrent = 0.0;
    cx06_MA_B.s14_DCVoltage = 0.0;
    cx06_MA_B.s14_MotorSpeed = 0.0;
    cx06_MA_B.s14_DeratedOperation = 0.0;
    cx06_MA_B.s14_EDriveSystemError = 0.0;
    cx06_MA_B.s14_EmergencyShutdown = 0.0;
    cx06_MA_B.s14_OverCurrentIGBTError = 0.0;
    cx06_MA_B.s14_LubeAnalError = 0.0;
    cx06_MA_B.s14_EncoderError = 0.0;
    cx06_MA_B.s14_OverVoltageError = 0.0;
    cx06_MA_B.s14_UnderVoltageError = 0.0;
    cx06_MA_B.s14_OverCurrentACError = 0.0;
    cx06_MA_B.s14_MotorOverTemp = 0.0;
    cx06_MA_B.s14_InverterOverTemp = 0.0;
    cx06_MA_B.s14_OverSpeedError = 0.0;
    cx06_MA_B.s14_CANError = 0.0;
    cx06_MA_B.s14_UnreasonableLimits = 0.0;
    cx06_MA_B.s14_EPOLineError = 0.0;
    cx06_MA_B.s14_SensorOutOfRange = 0.0;
    cx06_MA_B.s14_VoltageLimitationactive = 0.0;
    cx06_MA_B.s14_CurrentLimitiationactive = 0.0;
    cx06_MA_B.s14_PullOutTorqueProtectionactive = 0.0;
    cx06_MA_B.s14_PeakLevelOverflow = 0.0;
    cx06_MA_B.s14_Paritybitphasecurrent = 0.0;
    cx06_MA_B.s14_PhaseCurrentPeakValue = 0.0;
    cx06_MA_B.s14_MaxTorqueavailable = 0.0;
    cx06_MA_B.s14_MCUReadytoGo = 0.0;
    cx06_MA_B.s14_MCUHardwareSoftwareError = 0.0;
    cx06_MA_B.s14_MCUSpeedErrorTrackMissing = 0.0;
    cx06_MA_B.s14_MCUSpeedErrorSpeedJump = 0.0;
    cx06_MA_B.s14_ErrorinErrorStore = 0.0;
    cx06_MA_B.s14_SupplyLineLowError = 0.0;
    cx06_MA_B.s14_MCUOn = 0.0;
    cx06_MA_B.s14_Sw_Ver = 0.0;
    cx06_MA_B.s14_IPT_Ser_Num = 0.0;
    cx06_MA_B.s14_Gear_Ratio = 0.0;
    cx06_MA_B.s14_Oil_Pressure = 0.0;
    cx06_MA_B.s14_Motor_Temp = 0.0;
    cx06_MA_B.s14_MCU_Temp = 0.0;
    cx06_MA_B.s14_LV_Current = 0.0;
    cx06_MA_B.s14_LV_Voltage = 0.0;
    cx06_MA_B.s14_HV_DCDC_Current = 0.0;
    cx06_MA_B.s14_DCDC_GenError = 0.0;
    cx06_MA_B.s14_DCDC_HV_Over_I = 0.0;
    cx06_MA_B.s14_DCDC_HV_Over_V = 0.0;
    cx06_MA_B.s14_DCDC_LV_Over_I_Buck = 0.0;
    cx06_MA_B.s14_DCDC_LV_Under_V = 0.0;
    cx06_MA_B.s14_DCDC_LV_Over_V = 0.0;
    cx06_MA_B.s14_DCDC_LV_Over_I_Boost = 0.0;
    cx06_MA_B.s14_DCDC_Temp_Reduction = 0.0;
    cx06_MA_B.s14_DCDC_Buck = 0.0;
    cx06_MA_B.s14_DCDC_Boost = 0.0;
    cx06_MA_B.s14_DCDC_Reduce_Buck = 0.0;
    cx06_MA_B.s14_DCDC_Reduce_Boost = 0.0;
    cx06_MA_B.s14_DCDC_CAN_Err = 0.0;
    cx06_MA_B.s14_DCDC_Meas_Err = 0.0;
    cx06_MA_B.s14_DCDC_OverTemp = 0.0;
    cx06_MA_B.s14_DCDC_90I2t = 0.0;
    cx06_MA_B.s14_DCDC_Break = 0.0;
    cx06_MA_B.s14_DCDC_3x_En = 0.0;
    cx06_MA_B.s14_DCDC_0C = 0.0;
    cx06_MA_B.s14_DCDC_HV_Under_V = 0.0;
    cx06_MA_B.s14_DCDC_HW_Err = 0.0;
    cx06_MA_B.s14_DCDC_Err_in_Store = 0.0;
    cx06_MA_B.s49_Divide = 0.0;
    cx06_MA_B.s15_Voltage = 0.0;
    cx06_MA_B.s15_Current = 0.0;
    cx06_MA_B.s15_Batt_Temp = 0.0;
    cx06_MA_B.s16_Temp_1 = 0.0;
    cx06_MA_B.s16_Temp_2 = 0.0;
    cx06_MA_B.s16_Temp_3 = 0.0;
    cx06_MA_B.s16_Temp_4 = 0.0;
    cx06_MA_B.s16_Temp_5 = 0.0;
    cx06_MA_B.s16_Temp_6 = 0.0;
    cx06_MA_B.s16_Temp_7 = 0.0;
    cx06_MA_B.s16_Temp_8 = 0.0;
    cx06_MA_B.s16_NOxPre_O2 = 0.0;
    cx06_MA_B.s16_NOxMid_NOx = 0.0;
    cx06_MA_B.s16_NOxMid_O2 = 0.0;
    cx06_MA_B.s16_NOxPost_NOx = 0.0;
    cx06_MA_B.s16_NOxPost_O2 = 0.0;
    cx06_MA_B.s16_NOxPre_CANOpen_Er_Code = 0.0;
    cx06_MA_B.s16_NOxPre_CANOpen_Er_Reg = 0.0;
    cx06_MA_B.s16_ReadCANMessage2_o3 = 0.0;
    cx06_MA_B.s16_NOxMid_CANOpen_Er_Code = 0.0;
    cx06_MA_B.s16_NOxMid_CANOpen_Er_Reg = 0.0;
    cx06_MA_B.s16_ReadCANMessage4_o3 = 0.0;
    cx06_MA_B.s16_NOxPost_CANOpen_Er_Code = 0.0;
    cx06_MA_B.s16_NOxPost_CANOpen_Er_Reg = 0.0;
    cx06_MA_B.s16_ReadCANMessage6_o3 = 0.0;
    cx06_MA_B.s50_SOC = 0.0;
    cx06_MA_B.s24_cruiseBut = 0.0;
    cx06_MA_B.s4_Gain = 0.0F;
    cx06_MA_B.s25_Saturation = 0.0F;
    cx06_MA_B.s25_Saturation1 = 0.0F;
    cx06_MA_B.s26_Brake = 0.0F;
    cx06_MA_B.s26_BrakeBackup = 0.0F;
    cx06_MA_B.s27_Clutch = 0.0F;
    cx06_MA_B.s27_ClutchBackup = 0.0F;
    cx06_MA_B.s20_Fuel_Level = 0.0F;
    cx06_MA_B.s79_sf_Gear_Pos_Translate.s166_y = 0.0;
    cx06_MA_B.s79_sf_Act_Gear_Translate.s166_y = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&cx06_MA_DWork, 0,
                sizeof(D_Work_cx06_MA));
  cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE = 0.0;
  cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE = 0.0;
  cx06_MA_DWork.s75_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s103_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s91_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s210_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s168_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s170_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s290_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s380_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s380_UnitDelay2_DSTATE = 0.0;
  cx06_MA_DWork.s384_UnitDelay2_DSTATE = 0.0;
  cx06_MA_DWork.s384_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s416_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay2_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay6_DSTATE = 0.0;
  cx06_MA_DWork.s393_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay7_DSTATE = 0.0;
  cx06_MA_DWork.s394_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay5_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay8_DSTATE = 0.0;
  cx06_MA_DWork.s395_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay4_DSTATE = 0.0;
  cx06_MA_DWork.s392_UnitDelay9_DSTATE = 0.0;
  cx06_MA_DWork.s396_UnitDelay1_DSTATE = 0.0;
  cx06_MA_DWork.s41_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s42_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s43_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s44_UnitDelay_DSTATE = 0.0;
  cx06_MA_DWork.s15_UnitDelay_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger3' */
  cx06_MA_MainState_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger2' */
  cx06_MA_Outputs_Start();

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe' */
  (buildyear_DataStore()) = (((uint16_T)2017U));

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe1' */
  (buildmonth_DataStore()) = (((uint16_T)3U));

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe2' */
  (buildday_DataStore()) = (((uint16_T)8U));

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe3' */
  (buildhour_DataStore()) = (((uint16_T)22U));

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe4' */
  (buildmin_DataStore()) = (((uint16_T)41U));

  /* S-Function (motohawk_sfun_probe): '<S1>/motohawk_probe5' */
  (buildsec_DataStore()) = (((uint16_T)4U));
  cx06_MA_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE = ZERO_ZCSIG;
  cx06_MA_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE = ZERO_ZCSIG;
  cx06_MA_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE = ZERO_ZCSIG;
  cx06_MA_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  cx06_MA_PrevZCSigState.Clear_Trig_ZCE_f = ZERO_ZCSIG;
  cx06_MA_PrevZCSigState.CallStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger3' */
  cx06_MA_MainState_Init();

  /* Initial conditions for function-call system: '<Root>/Fiat Accel Control' */
  cx06_MA_DWork.root_FiatAccelControl_PREV_T = cx06_MA_M->Timing.clockTick0;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger1' */
  cx06_MA_Strategy_Init();

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger2' */
  cx06_MA_Outputs_Init();
}

/* Model terminate function */
void cx06_MA_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
