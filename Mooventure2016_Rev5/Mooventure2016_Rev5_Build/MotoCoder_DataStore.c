
/* MotoCoder_DataStore.c */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-09-04 13:38:00 */
/* Copyright: 2018 Woodward. */


#include <MotoCoder_DataStore.h>

/* DataStore */
/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define EXTERN_AS_CONST
#define rtInf                           (100000000000000000.000000)
#define rtMinusInf                      (-100000000000000000.000000)
  
/*---- TYPEDEFN -------------------------------------------------------------------------------------------*/

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_romcals_rodata.h>
     

const NonVolatile_T NonVolatileDefault __SECTION_ROMCALS_RODATA__=  
{
    
         (38239U), /* FormatID */
    
        0x0000,  /* CRC */
        0, /* MotoHawkModelSecondsInUse */ 
    11, /* CityID_CAN_1 */ 
    11, /* CityID_CAN_2 */ 
    11, /* CityID_CAN_3 */ 
    0, /* FaultCommand */ 
     {6, {{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },}, }, /* Freeze_Frame */ 
    { { 0, 0, 0} } , /* FaultMarquees */ 
    { { { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }, 0, 0, 0, 0, 0} } , /* VolFaultManager */ 
    
};


#include <Pragma_Section_End_rodata.h>


#include <Pragma_Section_Start_AppVolatile_data.h>
Volatile_T VolatileWork
= 
{    2048.0, /* IPT_DutyCycle_Ovr_new */ 
    10000.0, /* IPT_Freq_Ovr_new */ 
    0.05, /* ODO_INCRE */ 
    23.0, /* TempReading */ 
    1.0, /* Torque_Reverse_Override69_new */ 
    1.0, /* Torque_Reverse_Override_new */ 
    { 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96 }, /* FaultActionReason */ 
	
};
Volatile_BSS_T VolatileWork_BSS
; 


#include <Pragma_Section_End_data.h>
 
#include <Pragma_Section_Start_cals_bss.h>
Constant_T ConstantWork __SECTION_CALS_BSS__;

#include <Pragma_Section_End_bss.h>
#include <Pragma_Section_Start_cals_storage_rodata.h>
const Constant_T  ConstantStorage __SECTION_CALIBRATION_STORAGE_RODATA__ = 
{
    1000.0, /* ABS_ToneRing_AgeCount_Fault */ 
    1000.0, /* ABS_Traction_Control_AgeCount_Fault */ 
    1000.0, /* ABS_WheelSpeed_AgeCount_Fault */ 
    0.0, /* Auto_Battery_Startup */ 
    0.0, /* BCU_Caution */ 
    0.0, /* BCU_Hazard */ 
    1.0, /* Batt_Ign_Cal */ 
    1.0, /* Batt_Isolation_det_Cal */ 
    1000.0, /* Battery_AgeCount_Fault */ 
    400.0, /* Battery_Voltage_Too_High_Fault */ 
    200.0, /* Battery_Voltage_Too_Low_Fault */ 
    25.0, /* Blend_Pump_On_Threshold */ 
    100.0, /* Blend_Valve_A_No_Response_Fault */ 
    100.0, /* Blend_Valve_B_No_Response_Fault */ 
    250.0, /* Blend_Valve_Sensor_A_High_Voltage_Fault */ 
    4.0, /* Blend_Valve_Sensor_A_Intermittent_Fault */ 
    5.0, /* Blend_Valve_Sensor_A_Low_Voltage_Fault */ 
    250.0, /* Blend_Valve_Sensor_B_High_Voltage_Fault */ 
    4.0, /* Blend_Valve_Sensor_B_Intermittent_Fault */ 
    5.0, /* Blend_Valve_Sensor_B_Low_Voltage_Fault */ 
    1000.0, /* Brake_Pedal_Position_Communication_Loss_Fault */ 
    33000.0, /* Brake_Pedal_Position_High_Fault */ 
    150.0, /* Brake_Pedal_Position_Intermiitent_Fault */ 
    0.0, /* Brake_Pedal_Position_Low_Fault */ 
    { -32767.0, -29567.0, -26367.0, -23167.0, -19967.0, -16767.0, -13567.0, -10367.0, -7167.0, -3967.0, -767.0, 2433.0, 5633.0, 8833.0, 12033.0, 15233.0, 18433.0, 21633.0, 24833.0, 28033.0, 31233.0 }, /* Brake_Position_PreIdxArr */ 
    { 1.0, 0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 }, /* Brake_Position_TblTbl */ 
    1000.0, /* Brakes_AgeCount_Fault */ 
    1.0, /* Charger_Auto_Start */ 
    60.0, /* Charger_Derated_Over_Temperature_Fault */ 
    -30.0, /* Charger_Derated_Under_Temperature_Fault */ 
    100.0, /* Charger_Line_Voltage_Too_Low_Fault */ 
    300.0, /* Charger_Line_Votlage_Too_High_Fault */ 
    50.0, /* Charger_Requested_But_No_High_Voltage_Fault */ 
    16.0, /* Charger_Requested_Current_Too_High_Fault */ 
    298.0, /* Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower */ 
    428.0, /* Charger_Requested_Voltage_Out_of_Bounds_Fault_Upper */ 
    0.0, /* Commanded_gen_trq */ 
    8.3, /* Commanded_motor_trq_div */ 
    0.5, /* Contactor_Disable_Delay */ 
    20.0, /* Coolant_Cold */ 
    60.0, /* Coolant_Hot */ 
    2.0, /* Coolant_Hyst */ 
    40.0, /* Coolant_Warm */ 
    14.0, /* CrawlHomeEnterSOC */ 
    0.0, /* Cruise_Control_Enable */ 
    { 0.0, 15.0, 30.0, 45.0, 60.0, 75.0, 90.0, 105.0, 120.0, 135.0, 150.0, 165.0, 180.0, 195.0, 210.0, 225.0, 240.0, 255.0, 270.0, 285.0, 300.0, 315.0, 330.0, 345.0, 360.0, 375.0, 390.0, 405.0, 420.0, 435.0, 450.0, 465.0, 480.0, 495.0, 510.0, 525.0, 540.0, 555.0, 570.0, 585.0, 600.0, 615.0, 630.0, 645.0, 660.0, 675.0, 690.0, 705.0, 720.0, 735.0, 750.0, 765.0, 780.0, 795.0, 810.0, 825.0, 840.0, 855.0, 870.0, 885.0, 900.0, 915.0, 930.0, 945.0, 960.0, 975.0, 990.0, 1005.0, 1020.0, 1035.0, 1050.0, 1065.0, 1080.0, 1095.0, 1110.0, 1125.0, 1140.0, 1155.0, 1170.0, 1185.0, 1200.0, 1215.0, 1230.0, 1245.0, 1260.0, 1275.0, 1290.0, 1305.0, 1320.0, 1335.0, 1350.0, 1365.0, 1380.0, 1395.0, 1410.0, 1425.0, 1440.0, 1455.0, 1470.0, 1485.0, 1500.0, 1515.0, 1530.0, 1545.0, 1560.0, 1575.0, 1590.0, 1605.0, 1620.0, 1635.0, 1650.0, 1665.0, 1680.0, 1695.0, 1710.0, 1725.0, 1740.0, 1755.0, 1770.0, 1785.0, 1800.0 }, /* Cruise_Control_MapTbl */ 
    { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0, 41.0, 42.0, 43.0, 44.0, 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0, 57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0, 65.0, 66.0, 67.0, 68.0, 69.0, 70.0, 71.0, 72.0, 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0, 85.0, 86.0, 87.0, 88.0, 89.0, 90.0, 91.0, 92.0, 93.0, 94.0, 95.0, 96.0, 97.0, 98.0, 99.0, 100.0, 101.0, 102.0, 103.0, 104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0, 113.0, 114.0, 115.0, 116.0, 117.0, 118.0, 119.0, 120.0 }, /* Cruise_Control_PreIdxArr */ 
    32800.0, /* Cruise_Disable_Brake */ 
    33000.0, /* Cruise_Disable_Brake_Fault1 */ 
    0.0, /* Cruise_Disable_Brake_Fault2 */ 
    25.0, /* Cruise_On_Speed */ 
    0.0, /* CurrentLimitingEnabled */ 
    48.0, /* DATA_MODE_2 */ 
    49.0, /* DATA_MODE_3 */ 
    50.0, /* DATA_MODE_4 */ 
    200.0, /* DCDC_Converter_Not_Running_Fault */ 
    16.0, /* Data_Mode_1 */ 
    4012.0, /* DefaultLevel */ 
    0.08, /* Delay */ 
    13.0, /* Drive_Switch_Input_High_Fault */ 
    0.0, /* Drive_Switch_Input_Low_Fault */ 
    0.0, /* ETC_DCOffset */ 
    1.0, /* ETC_DGain */ 
    1.0, /* ETC_DampGainDown */ 
    1.0, /* ETC_DampGainUp */ 
    1.0, /* ETC_ErrorGain */ 
    1.0, /* ETC_IGain */ 
    1.0, /* ETC_IMax */ 
    0.0, /* ETC_IMin */ 
    0.0, /* ETC_LwrLim */ 
    1.0, /* ETC_PGain */ 
    1.0, /* ETC_UprLim */ 
    1000.0, /* Eaton_Charger_AgeCount_Fault */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* EcoMode_AccelIdxArr */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* EcoMode_Accel_MapTbl */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* EcoMode_BrakeIdxArr */ 
    { 0.0, 0.1, 0.2, 0.30000000000000004, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }, /* EcoMode_Brake_MapTbl */ 
    65.0, /* Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Over */ 
    50.0, /* Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under */ 
    65.0, /* Electric_Motor_Derated_Over_Temperature_Fault */ 
    420.0, /* Electric_Motor_Derated_Over_Voltage_Fault */ 
    -25.0, /* Electric_Motor_Derated_Under_Temperature_Fault */ 
    250.0, /* Electric_Motor_Derated_Under_Voltage_Fault */ 
    8.0, /* Electric_Motor_General_Error_Fault_Over */ 
    3.0, /* Electric_Motor_General_Error_Fault_Under */ 
    120.0, /* Electric_Motor_Over_Speed_Forward_Fault */ 
    -40.0, /* Electric_Motor_Over_Speed_Reverse_Fault */ 
    8.0, /* Electric_Motor_Shutdown_Error_Fault */ 
    200.0, /* Electric_Motor_Torque_Output_Fault */ 
    20.0, /* Engine_Fan_Offset */ 
    0.0, /* Engine_On */ 
    3.0, /* Engine_On_Time_Threshold */ 
    0.4, /* FiltConst */ 
    200.0, /* Flash_Timer */ 
    1000.0, /* Gear_Shift_Module_Communication_Circuit */ 
    0.0, /* HV_Battery_2G_BMS_Fault */ 
    1000.0, /* HV_Battery_48_Controller_Communication_Fault */ 
    395.0, /* HV_Battery_Above_Safe_Charge_Point */ 
    0.3, /* HV_Battery_Cell_Balancing_Required_Fault */ 
    50.0, /* HV_Battery_Pack_Above_Operating_Temperature_Fault */ 
    -20.0, /* HV_Battery_Pack_Below_Operating_Temperature_Fault */ 
    50.0, /* HV_Battery_Pack_High_Temperature_Fault_High */ 
    40.0, /* HV_Battery_Pack_High_Temperature_Fault_Low */ 
    -10.0, /* HV_Battery_Pack_Low_Temperature_Fault_High */ 
    -20.0, /* HV_Battery_Pack_Low_Temperature_Fault_Low */ 
    4.0, /* HV_Battery_Precharge_Failure_Fault */ 
    0.0, /* HV_Battery_Too_Low_For_Load_Fault */ 
    1.0, /* HV_Battery_Try_To_Balance_Under_Load_Fault */ 
    93.0, /* HV_Heater_Over_Temperature_Fault */ 
    250.0, /* HV_Heater_Temperature_Sensor_A_High_Voltage_Fault */ 
    4.0, /* HV_Heater_Temperature_Sensor_A_Intermittent_Fault */ 
    20.0, /* HV_Heater_Temperature_Sensor_A_Low_Voltage_Fault */ 
    3.0, /* HYST */ 
    -1.0, /* Heat1_Threshold */ 
    -5.0, /* Heat2_Threshold */ 
    -10.0, /* Heat3_Threshold */ 
    -15.0, /* Heat4_Threshold */ 
    72.0, /* Heat_On_Driver_Threshold */ 
    46.0, /* Heater_Core_Threshold */ 
    3800.0, /* High_RPM */ 
    65.0, /* High_Threshold */ 
    100.0, /* High_Throttle */ 
    0.4, /* HtrCoreLowPass */ 
    1000.0, /* IPT_DCDC_AgeCount_Fault */ 
    2048.0, /* IPT_Duty_Cycle */ 
    10000.0, /* IPT_Frequency */ 
    1000.0, /* IPT_Status1_AgeCount_Fault */ 
    1000.0, /* IPT_Status2_AgeCount_Fault */ 
    1.0, /* InterlockEnable */ 
    900.0, /* Key_Line_Voltage_Fault */ 
    100.0, /* Key_Off_Coltage_High_Fault */ 
    2.0, /* Load_Enable_Delay */ 
    2400.0, /* Low_RPM */ 
    40.0, /* Low_Threshold */ 
    45.0, /* Low_Throttle */ 
    0.01001896, /* MPH_Conversion */ 
    1.60934, /* MPH_to_KMH */ 
    16.0, /* MaxAmpCal */ 
    383.3, /* MaxVoltageCal */ 
    4.16, /* Max_Cell_Voltage_Limit */ 
    0.03, /* Max_Dist_Travel_In_Sec */ 
    2600.0, /* Max_Motor_Torque */ 
    -2500.0, /* Max_Regen_Torque */ 
    2800.0, /* Medium_RPM */ 
    50.0, /* Medium_Threshold */ 
    65.0, /* Medium_Throttle */ 
    0.0, /* MessageChecksum */ 
    15.0, /* MessageCounterOutput */ 
    100.0, /* Min_Torque_ABS */ 
    100.0, /* Min_Torque_CALC */ 
    3.0, /* Mode_1 */ 
    34.0, /* Mode_2 */ 
    97.0, /* Mode_3 */ 
    1.0, /* Mode_4 */ 
    { 0.0, 200.0, 900.0, 1500.0 }, /* ModifiedAmpSecIdxArr */ 
    12500.0, /* Motor_Speed_High_Fault */ 
    -4000.0, /* Motor_Speed_Low_Fault */ 
    10.0, /* Motor_Speed_TorqueRPM_Fault */ 
    100.0, /* Motor_Speed_Torque_Fault */ 
    2.5, /* Motor_Startup_Delay */ 
    4053.0, /* ON */ 
    4092.0, /* Off */ 
    0.005, /* Overcurrent_Tq_Lim_Filter */ 
    13.0, /* Park_Nuetral_Switch_Input_High_Fault */ 
    0.0, /* Park_Nuetral_Switch_Input_Low_Fault */ 
    15.0, /* Pedal_Poition_Sensor_A_Intermittent */ 
    130.0, /* Pedal_Position_Sensor_A_Circuit_High */ 
    0.0, /* Pedal_Position_Sensor_A_Circuit_Low */ 
    25.0, /* Pump_Off_Temp */ 
    30.0, /* Pump_On_Temp */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier2 */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier3 */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier4 */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier_SUVMode */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier_ecoMode */ 
    0.01001896, /* RPM_to_Wheel_Speed_Multiplier_safetyMode */ 
    4071.0, /* RSM */ 
    0.4, /* RadLowPass */ 
    1.0, /* Ramp_In_Rate_ABS */ 
    1.0, /* Ramp_In_Rate_CALC */ 
    1.0, /* Ramp_Out_Rate_ABS */ 
    1.0, /* Ramp_Out_Rate_CALC */ 
    5.0, /* SOCFilt */ 
    20.0, /* SOC_Critical */ 
    45.0, /* SOC_High */ 
    30.0, /* SOC_Low */ 
    4.0, /* SOC_Multiplier */ 
    200.0, /* SOC_Subtract */ 
    5.0, /* SOC_Time_Threshold */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* SUVMode_AccelIdxArr */ 
    { 0.0, 0.05, 0.1, 0.15, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }, /* SUVMode_Accel_MapTbl */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* SUVMode_BrakeIdxArr */ 
    { 0.0, 0.1, 0.2, 0.30000000000000004, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }, /* SUVMode_Brake_MapTbl */ 
    5.0, /* SafetyModeEnterSOC */ 
    -400.0, /* Saturated_Sensor_Discharge */ 
    230.0, /* Saturated_Sensor_Regen */ 
    4085.0, /* SetMinus */ 
    4081.0, /* SetPlus */ 
    5.0, /* Startup_Delay */ 
    1000.0, /* Steering_Wheel_AgeCount_Fault */ 
    0.5, /* TC_Event_Time */ 
    30.0, /* TC_Wheel_Speed_Diff */ 
    4.0, /* Temp_Fault_Hyst */ 
    { 0.0, 15.5, 31.0, 46.5, 62.0, 77.5, 93.0, 108.5, 124.0, 139.5, 155.0, 170.5, 186.0, 201.5, 217.0, 232.5, 248.0 }, /* Throttle_Position_PreIdxArr */ 
    { 0.0, 0.061, 0.122, 0.183, 0.244, 0.305, 0.366, 0.427, 0.488, 0.54899999999999993, 0.61, 0.671, 0.732, 0.79299999999999993, 0.854, 0.915, 0.976 }, /* Throttle_Position_TblTbl */ 
    0.0, /* Too_Cold_Temp */ 
    { 1.0, 1.0, 0.0, 0.0 }, /* TorqueLimMultiplierTbl */ 
    -5.0, /* TorqueRecoveryValue */ 
    5.0, /* Traction_Control_System_Maulfunction_Fault */ 
    1000.0, /* Traction_Control_Vehicle_Moving */ 
    1000.0, /* Transmission_AgeCount_Fault */ 
    2.0, /* V12_Battery_Erratic_Fault */ 
    14.2, /* V12_High */ 
    12.0, /* V12_Low */ 
    70.0, /* VEH_ID */ 
    5.0, /* VFilt */ 
    49.0, /* VIN_DATA_BYTE_1 */ 
    57.0, /* VIN_DATA_BYTE_10 */ 
    75.0, /* VIN_DATA_BYTE_11 */ 
    65.0, /* VIN_DATA_BYTE_12 */ 
    51.0, /* VIN_DATA_BYTE_13 */ 
    55.0, /* VIN_DATA_BYTE_14 */ 
    55.0, /* VIN_DATA_BYTE_15 */ 
    52.0, /* VIN_DATA_BYTE_16 */ 
    51.0, /* VIN_DATA_BYTE_17 */ 
    70.0, /* VIN_DATA_BYTE_2 */ 
    77.0, /* VIN_DATA_BYTE_3 */ 
    67.0, /* VIN_DATA_BYTE_4 */ 
    85.0, /* VIN_DATA_BYTE_5 */ 
    52.0, /* VIN_DATA_BYTE_6 */ 
    57.0, /* VIN_DATA_BYTE_7 */ 
    51.0, /* VIN_DATA_BYTE_8 */ 
    53.0, /* VIN_DATA_BYTE_9 */ 
    0.0, /* VSC_ActiveDischargeDisable_Cal */ 
    0.0, /* VSC_AntishudderDisable_Cal */ 
    27.8, /* VSC_DCOutputVoltage_Cal */ 
    384.0, /* VSC_MaxDCVoltage_Cal */ 
    250.0, /* VSC_MinDCVoltage_Cal */ 
    0.0, /* VSC_PowerWasteRequest_Cal */ 
    0.0, /* VSC_SDPTActive_Cal */ 
    3.0, /* Vehicle_Speed_Off */ 
    8.0, /* Vehicle_Speed_On */ 
    300.0, /* Vehicle_Speed_Sensor_Circuit_Low_Fault */ 
    3.0, /* Vehicle_Speed_Time_Threshold */ 
    2.0, /* Voltage_Filt_Cal */ 
    15.0, /* Warmed_Up_Temp */ 
    0.01, /* accelEnd_Pedal_SUVMode */ 
    0.01, /* accelEnd_Pedal_ecoMode */ 
    0.003, /* accelEnd_Pedal_safetyMode */ 
    0.02, /* accelStart_Pedal_SUVMode */ 
    0.02, /* accelStart_Pedal_ecoMode */ 
    0.03, /* accelStart_Pedal_safetyMode */ 
    0.01, /* brakeEnd_Pedal_SUVMode */ 
    0.01, /* brakeEnd_Pedal_ecoMode */ 
    0.003, /* brakeEnd_Pedal_safetyMode */ 
    0.02, /* brakeStart_Pedal_SUVMode */ 
    0.02, /* brakeStart_Pedal_ecoMode */ 
    0.01, /* brakeStart_Pedal_safetyMode */ 
    0.095, /* dragTorque_SUVMode */ 
    0.09, /* dragTorque_ecoMode */ 
    0.028, /* dragTorque_safetyMode */ 
    2500.0, /* driveMaxTorque_SUVMode */ 
    1600.0, /* driveMaxTorque_ecoMode */ 
    1600.0, /* driveMaxTorque_safetyMode */ 
    0.75, /* regenEnd_Speed_SUVMode */ 
    0.75, /* regenEnd_Speed_ecoMode */ 
    0.75, /* regenEnd_Speed_safetyMode */ 
    -1500.0, /* regenMaxTorque_SUVMode */ 
    -1500.0, /* regenMaxTorque_ecoMode */ 
    -300.0, /* regenMaxTorque_safetyMode */ 
    2.0, /* regenStart_Speed_SUVMode */ 
    2.0, /* regenStart_Speed_ecoMode */ 
    2.0, /* regenStart_Speed_safetyMode */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* safetyMode_AccelIdxArr */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* safetyMode_Accel_MapTbl */ 
    { 0.0, 0.05, 0.1, 0.15000000000000002, 0.2, 0.25, 0.30000000000000004, 0.35000000000000003, 0.4, 0.45, 0.5, 0.55, 0.6, 0.64999999999999991, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0 }, /* safetyMode_BrakeIdxArr */ 
    { 0.0, 0.1, 0.2, 0.30000000000000004, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }, /* safetyMode_Brake_MapTbl */ 
    418316849U, /* CCP1RxID */ 
    0U, /* CCP1RxIDMask */ 
    418328834U, /* CCP1TxID */ 
    49U, /* CCP1_StationAddr */ 
    100U, /* ECUP_Threshold */ 
    { 'M', 'o', 'o', 'v', 'e', 'n', 't', 'u', 'r', 'e', '2', '0', '1', '6', '_', 'R', 'e', 'v', '5', '_', '2', '1', '5', '_', '0', '0', '0', '\0', '\0', '\0', '\0', '\0', '\0' }, /* CalIdTxt */ 
    2, /* Traction_Control_Model */ 
    1, /* Automatic_Battery_Bootup */ 
    { { 96, 16} } , /* ConstFaultManager */ 
    { { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 11, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 1000, 2000, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9000, 10000, 2, 6, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 14, 2, 5, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 15, 20, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 15, 20, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 15, 20, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 6, 2, 16, 0, 16, 0} , { 1, 0, 0, 15, 20, 15, 2, 6, 2, 16, 0, 16, 0} , { 0, 0, 0, 9, 10, 0, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 5, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 14, 2, 7, 2, 5, 2, 16, 0} , { 1, 0, 0, 500, 1000, 3, 2, 7, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 500, 1000, 4, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 3, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 4, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 900, 2500, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 9, 2, 7, 2, 16, 0, 16, 0} , { 1, 0, 0, 1500, 2000, 9, 2, 7, 2, 16, 0, 16, 0} , { 0, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 9, 2, 5, 2, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 9, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 5, 2, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 13, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 1500, 2000, 9, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 1500, 2000, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 2, 0, 0, 5, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 7, 0, 16, 0, 16, 0} , { 0, 0, 0, 90, 250, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 5, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 150, 200, 0, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 150, 200, 0, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 0, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 1000, 2000, 15, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 25, 50, 15, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 25, 50, 15, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 25, 50, 15, 2, 16, 0, 16, 0, 16, 0} , { 0, 0, 0, 25, 50, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 25, 50, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 16, 0, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 90, 100, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 9, 10, 15, 2, 16, 0, 16, 0, 16, 0} , { 1, 0, 0, 150, 200, 15, 2, 16, 0, 16, 0, 16, 0} } , /* FaultManager */ 
    
};    
#include <Pragma_Section_End_rodata.h>

    
  
/*---- SERIAL EEPROM VARIABLES ----------------------------------------------------------------------------*/


#include <Pragma_Section_Start_SerialEE_data.h>
uint8_T IsFirstApplicationBoot __SECTION_SERIALEE_DATA__ = 0xFF;

#include <Pragma_Section_Start_SerialEE_bss.h>
NonVolatile_T  NonVolatileStorage __SECTION_SERIALEE_BSS__;
        

    
/* Name: NonVolatileRestoreOnStartup ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RW2+RW1 TypeID:UINT1 CType:S_NVEEStatus
Struct:NonVolatileEEStatus.RestoreOnStartup  Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:1 Format:1.0
EnumDec:E_NVRestore UpdateID:BACKGND Group:"System | NonVolatile Storage | NonVolatile Storage Config"
Help:"Selects whether to restore from factory defaults on next startup" */

/* Name: NonVolatileRestoreOnFirstStartup ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RW2+RW1 TypeID:UINT1 CType:S_NVEEStatus
Struct:NonVolatileEEStatus.RestoreOnFirstStartup  Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:1 Format:1.0
EnumDec:E_NVRestore UpdateID:BACKGND Group:"System | NonVolatile Storage | NonVolatile Storage Config"
Help:"Selects whether to restore from factory defaults the first time an application boots" */

#include <Pragma_Section_Start_SerialEE_data.h>
S_NVEEStatus  NonVolatileEEStatus __SECTION_SERIALEE_DATA__ = 
{
    0, /* RestoreOnStartup */
    1  /* RestoreOnFirstStartup */
};

    
/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>


        
#include <Pragma_Section_Start_ramcals_bss.h>
NonVolatile_T NonVolatileWork __SECTION_RAMCALS_BSS__;
#include <Pragma_Section_End_bss.h>

/* Name: NonVolatileFormatID ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:NonVolatile_T Struct:NonVolatileWork.FormatID
    Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:4294967295 Format:8.0 UpdateID:BACKGND Group:"System | NonVolatile Storage"
Help:"Unique identifier of the NonVolatile memory format.  Used to validate whether stored variables are in the correct form for the program" */
    
    
    /* Name: NonVolatileStatus ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:uint8_T Struct:NonVolatile_NonVolatileStatus
Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:6 Format:1.0 UpdateID:BACKGND
Group:"System | NonVolatile Storage" Help:"Indicates how NonVolatile memory was loaded"  EnumDec:E_NVStatus */
uint8_T NonVolatile_NonVolatileStatus
= 0;
void NonVolatile_NonVolatileStatus_Reset(void)
{
    NonVolatile_NonVolatileStatus_DataStore()=NV_LOADED_FACTORY_USER_CMD;
}

    /* Name: NonVolatileCRC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:uint32_T Struct:NonVolatile_NonVolatileCRC
Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0  Max:65535 Format:1.0 UpdateID:BACKGND 
Group:"System | NonVolatile Storage" Help:"Calculated NonVolatile CRC" */
uint32_T NonVolatile_NonVolatileCRC = 0;
#define NonVolatile_NonVolatileCRC_DataStore() (NonVolatile_NonVolatileCRC)


/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

     
uint16_T calculate_crc(void *pointer, uint32_T number_bytes, uint16_T icrc)
{
    uint32_T bitmask;
    uint32_T mdx;
    uint8_T *pointer1 = (uint8_T *) pointer;
    
    for(mdx=0; mdx < number_bytes; mdx++) 
    {
        bitmask = 1 << 7;
        do 
        {
            if ( !(icrc & 0x8000) ^ !(*pointer1 & bitmask)) 
            {
                icrc <<= 1;
                icrc ^= 0x8005;
            }
            else 
            {
                icrc <<= 1;
            }
        } while ( bitmask >>= 1);
        pointer1++;
    }
    return icrc;
}
void  NonVolatile_RestoreDefaultNonVolatile(void)
{
    Interrupt_Disable();
    {
        MemReadSynch((void *)&NonVolatileWork, (void const* __FAR_POINTER)&NonVolatileDefault, sizeof(NonVolatile_T));

        NonVolatileWork.CRC = 0xFFFF;
        NonVolatileWork.CRC = calculate_crc(&NonVolatileWork.CRC, sizeof(NonVolatile_T) - NON_VOLATILE_OVERHEAD_BYTES, (uint16_T) NonVolatileWork.CRC);
        NonVolatile_NonVolatileCRC_DataStore() = NonVolatileWork.CRC;

    }
    Interrupt_Enable();
}

void  NonVolatile_StoreNonVolatile(void)
{
    	
        uint16_T icrc = 0xFFFFU;
        uint32_T * work_ptr = (uint32_T*)&NonVolatileWork;
        uint32_T * storage_ptr = (uint32_T*)&NonVolatileStorage;
        uint32_T word_count = (sizeof(NonVolatile_T)  - NON_VOLATILE_OVERHEAD_BYTES) / 4;
        uint32_T final_byte_count = (sizeof(NonVolatile_T)  - NON_VOLATILE_OVERHEAD_BYTES) % 4;
        uint32_T tmp_word[2];
        uint8_T oldStatus = NonVolatile_NonVolatileStatus_DataStore();
        NativeVar_U i;
        NativeError_S write_result;


        NonVolatile_NonVolatileStatus_DataStore() = NV_STORING_EEPROM;

        work_ptr += NON_VOLATILE_OVERHEAD_WORDS;
        storage_ptr += NON_VOLATILE_OVERHEAD_WORDS;

        /* 
            It is most efficient to write the data in one blob, but the duration may be long 
            enough where another thread can alter the data. Therefore we checksum the contents
            of the EEPROM as written.
        */
        
write_result = MemWriteSynch(storage_ptr, work_ptr, (sizeof(NonVolatile_T) - NON_VOLATILE_OVERHEAD_BYTES));

    
        /* If the driver indicate's a write failure, we invalidate the CRC location. */
        if(SUCCESS(write_result))
        {
            
                for (i=0; i < (word_count/_countof(tmp_word)); i++ )
                {
                    MemReadSynch(&tmp_word[0], storage_ptr, sizeof(tmp_word[0]) * _countof(tmp_word));
                    icrc = calculate_crc(&tmp_word[0], sizeof(tmp_word[0]) * _countof(tmp_word), icrc);
                    storage_ptr += _countof(tmp_word);
                }
                for (i=0; i < (word_count % _countof(tmp_word)); i++)
                {
                    MemReadSynch(&tmp_word[0], storage_ptr, sizeof(tmp_word[0]));
                    icrc = calculate_crc(&tmp_word[0], sizeof(tmp_word[0]), icrc);
                    storage_ptr++;
                }
                if (final_byte_count > 0)
                {
                    MemReadSynch(&tmp_word[0], storage_ptr, final_byte_count);
                    icrc = calculate_crc(&tmp_word[0], final_byte_count, icrc);
                }
            
        }
        NonVolatile_NonVolatileCRC_DataStore() = icrc;
        MemWriteSynch((void *  ) &NonVolatileStorage.CRC, &NonVolatile_NonVolatileCRC_DataStore(), sizeof(NonVolatile_NonVolatileCRC_DataStore()));
    
        MemWriteSynch(&NonVolatileStorage.FormatID, &NonVolatileWork.FormatID, sizeof(NonVolatileStorage.FormatID));
    
        NonVolatile_NonVolatileStatus_DataStore() = oldStatus;
 }
    
void  NonVolatile_OpenNonVolatile(NativeBool firstApplicationBoot)
{
    
    uint32_T storedNonVolatileFormatID      = 0;
    uint32_T compiledNonVolatileFormatID    = 0;
    uint8_T restoreFactoryDefaultsFirstBoot = 0;
    
    uint8_T restoreFactoryDefaults          = 0;
    S_NVEEStatus* const  pEEStatus           = &NonVolatileEEStatus;
    uint8_T* pStatus               = &NonVolatile_NonVolatileStatus_DataStore();
    
        uint32_T* const pCRC               = &NonVolatile_NonVolatileCRC_DataStore();
        uint16_T icrc = 0xFFFFU;
    
    MemReadSynch((void*)&restoreFactoryDefaults, 
                 (void*  )&pEEStatus->RestoreOnStartup, 
                 sizeof(pEEStatus->RestoreOnStartup));
    
    
    MemReadSynch((void*)&restoreFactoryDefaultsFirstBoot, 
                 (void*  )&pEEStatus->RestoreOnFirstStartup,
                 sizeof(pEEStatus->RestoreOnFirstStartup));

    MemReadSynch((void*)&storedNonVolatileFormatID, 
                 (void *  ) &NonVolatileStorage.FormatID, 
                 sizeof(NonVolatileStorage.FormatID));

	MemReadSynch((void*)&compiledNonVolatileFormatID, 
                 (void const* __FAR_POINTER) &NonVolatileDefault.FormatID, 
                 sizeof(NonVolatileDefault.FormatID));
    
    
    
    if((firstApplicationBoot && restoreFactoryDefaultsFirstBoot) ||  restoreFactoryDefaults)
    {         
        *pStatus = NV_LOADING_FACTORY;
        
        NonVolatile_RestoreDefaultNonVolatile();
        restoreFactoryDefaults = 0;
        MemWriteSynch((void*  )&pEEStatus->RestoreOnStartup, 
                      (void*)&restoreFactoryDefaults, 
                      sizeof(pEEStatus->RestoreOnStartup));

        *pStatus = NV_LOADED_FACTORY_USER_CMD;
    }
    
    else if(storedNonVolatileFormatID != compiledNonVolatileFormatID)
    {
        *pStatus = NV_LOADING_FACTORY;
        NonVolatile_RestoreDefaultNonVolatile();
        
        *pStatus = NV_LOADED_FACTORY_BAD_MAGIC;
    }
    else
    
    {
        uint8_T *work_ptr = (uint8_T *) &NonVolatileWork;
        uint8_T *  storage_ptr = (uint8_T * ) &NonVolatileStorage;

        *pStatus = NV_LOADING_EEPROM;

        work_ptr += NON_VOLATILE_OVERHEAD_BYTES;
        storage_ptr += NON_VOLATILE_OVERHEAD_BYTES;
    
        MemReadSynch(work_ptr, storage_ptr, (sizeof(NonVolatile_T) - NON_VOLATILE_OVERHEAD_BYTES));
        MemReadSynch(&NonVolatileWork.FormatID, (void *  ) &NonVolatileStorage.FormatID, sizeof(NonVolatileStorage.FormatID));
        icrc = calculate_crc(work_ptr, (sizeof(NonVolatile_T) - NON_VOLATILE_OVERHEAD_BYTES), icrc);

        NonVolatile_NonVolatileCRC_DataStore() = (uint32_T) icrc;
        
        MemReadSynch(&NonVolatileWork.CRC, (void *  ) &NonVolatileStorage.CRC, sizeof(NonVolatileStorage.CRC));
        
         if(*pCRC != NonVolatileWork.CRC)
        {
            *pStatus = NV_LOADING_FACTORY;
            NonVolatile_RestoreDefaultNonVolatile();
            *pStatus = NV_LOADED_FACTORY_BAD_CRC;
        }
        else
        {
            *pStatus = NV_LOADED_EEPROM;
        }
        
    }
}
void NonVolatile_OpenDataStore(void)
{

    uint8_T firstApplicationBoot            = 0;

    MemReadSynch((void*)&firstApplicationBoot, 
        (void* )&IsFirstApplicationBoot, 
        sizeof(IsFirstApplicationBoot));
    
    
        NonVolatile_OpenNonVolatile(firstApplicationBoot);
    
    
    if (firstApplicationBoot)
    {
        firstApplicationBoot = 0;
        MemWriteSynch((void * )&IsFirstApplicationBoot, (void*)&firstApplicationBoot, sizeof(IsFirstApplicationBoot));
    }    
    
}
void NonVolatile_CloseDataStore(void)
{
    
}

