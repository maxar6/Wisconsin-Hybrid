
/* MotoCoder_DataStore.c */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-04-23 14:26:05 */
/* Copyright: 2018 Woodward. */


#include <MotoCoder_DataStore.h>

/* DataStore */
/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                           (100000000000000000.000000)
#define rtMinusInf                      (-100000000000000000.000000)
  
/*---- TYPEDEFN -------------------------------------------------------------------------------------------*/

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/

        
     

#include <Pragma_Section_Start_romcals_rodata.h>
        
const NonVolatile_T NonVolatileDefault __SECTION_ROMCALS_RODATA__ =  
{
    
         (20301U), /* NonVolatileFormatID */
        0x0000,  /* crc */    
    0.0, /* Odometer */ 
    0, /* MotoHawkModelSecondsInUse */ 
    0U, /* startupCount */ 
    0U, /* totalOnTime */ 
    11, /* CityID_CAN_1 */ 
    0, /* FaultCommand */ 
    { 10U, 27U }, /* dualIndex */ 
    0U, /* listIndex */ 
    { 0U, 5U, 16U, 19U }, /* quadIndex */ 
    0U, /* screen */ 
    15U, /* singleIndex */ 
    { { 0, 0, 0} } , /* FaultMarquees */ 
    { { { 0.0, 0.0, 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0 }, 0, 0, 0, 0, 0} } , /* VolFaultManager */ 
    
};

#include <Pragma_Section_End_rodata.h>
    


#include <Pragma_Section_End_rodata.h>
Volatile_T VolatileWork
= 
{    0.5, /* SOC_new */ 
    { 36, 36, 36, 36, 36, 36, 36 }, /* FaultActionReason */ 
	
};
Volatile_BSS_T VolatileWork_BSS
; 


#include <Pragma_Section_Start_cals_rodata.h>
    
const Constant_T ConstantWork __SECTION_CALS_RODATA__ =
    {
    20.0, /* A123_Isolation_Monitor_Ground_Fault_Threshold */ 
    { 0.0, 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.2, 0.21, 0.22, 0.23, 0.24, 0.25, 0.26, 0.27, 0.28, 0.29, 0.3, 0.31, 0.32, 0.33, 0.34, 0.35000000000000003, 0.36, 0.37, 0.38, 0.39, 0.4, 0.41000000000000003, 0.42, 0.43, 0.44, 0.45, 0.46, 0.47000000000000003, 0.48, 0.49, 0.5, 0.51, 0.52, 0.53, 0.54, 0.55, 0.56, 0.57000000000000006, 0.58000000000000007, 0.59, 0.6, 0.61, 0.62, 0.63, 0.64, 0.64999999999999991, 0.65999999999999992, 0.66999999999999993, 0.67999999999999994, 0.69, 0.7, 0.71, 0.72, 0.73, 0.74, 0.75, 0.76, 0.77, 0.78, 0.79, 0.8, 0.81, 0.82000000000000006, 0.83, 0.84, 0.85, 0.86, 0.87, 0.88, 0.89, 0.9, 0.91, 0.92, 0.92999999999999994, 0.94, 0.95, 0.96, 0.97, 0.98, 0.99, 1.0 }, /* AccelPedalMapIdxArr */ 
    { 0.0, 0.0, 0.0, 0.015, 0.03, 0.045, 0.06, 0.075, 0.09, 0.105, 0.12, 0.135, 0.15, 0.165, 0.18, 0.195, 0.21, 0.225, 0.24, 0.255, 0.27, 0.285, 0.3, 0.315, 0.33, 0.345, 0.36, 0.375, 0.39, 0.405, 0.42, 0.435, 0.45, 0.465, 0.48, 0.495, 0.51, 0.525, 0.54, 0.555, 0.57, 0.585, 0.6, 0.615, 0.63, 0.645, 0.66, 0.675, 0.69, 0.7, 0.707106781, 0.714142843, 0.721110255, 0.728010989, 0.734846923, 0.741619849, 0.748331477, 0.754983444, 0.761577311, 0.768114575, 0.774596669, 0.781024968, 0.787400787, 0.793725393, 0.8, 0.806225775, 0.81240384, 0.818535277, 0.824621125, 0.830662386, 0.836660027, 0.842614977, 0.848528137, 0.854400375, 0.860232527, 0.866025404, 0.871779789, 0.877496439, 0.883176087, 0.888819442, 0.894427191, 0.9, 0.905538514, 0.911043358, 0.916515139, 0.921954446, 0.92736185, 0.932737905, 0.938083152, 0.943398113, 0.948683298, 0.953939201, 0.959166305, 0.964365076, 0.969535971, 0.974679434, 0.979795897, 0.98488578, 0.989949494, 0.994987437, 1.0 }, /* AccelPedalMapTbl */ 
    2.0, /* AccelRstSpd */ 
    0.05, /* AccelRstThres */ 
    0.0, /* Accel_DfltValue */ 
    0.005, /* Accel_FilterConst */ 
    800.0, /* Accel_Full */ 
    850.0, /* Accel_InputHiFltPos */ 
    300.0, /* Accel_InputLoFltPos */ 
    455.0, /* Accel_Zero */ 
    40.0, /* Battery_OverTemp_Threshold */ 
    0.0, /* Battery_UnderTemp_Threshold */ 
    0.1, /* Brake_Active_Threshold */ 
    0.0, /* Brake_DfltValue */ 
    0.005, /* Brake_FilterConst */ 
    130.0, /* Brake_Full */ 
    400.0, /* Brake_InputHiFltPos */ 
    100.0, /* Brake_InputLoFltPos */ 
    279.0, /* Brake_Zero */ 
    0.03, /* Brake_light_On_Setpoint */ 
    10.0, /* CV_CurrentLimit */ 
    2.0, /* CV_EndCurrent */ 
    372.0, /* CV_Voltage */ 
    399.0, /* ChargeInterruptor_Voltage */ 
    8.0, /* Charger_Curr */ 
    40.0, /* Charging_Cooling_Speed */ 
    0.4, /* Coast_down_torque_const */ 
    0.5, /* Contactor_Disable_Delay */ 
    { 0.0, 10.0, 28.0, 30.0, 35.0, 40.0, 60.0, 70.0, 80.0, 90.0, 100.0 }, /* CoolantPumpSpeedIdxArr */ 
    { 20.0, 25.0, 35.0, 45.0, 53.0, 65.0, 75.0, 80.0, 80.0, 80.0, 80.0 }, /* CoolantPumpSpeedTbl */ 
    16.0, /* Current_Limit */ 
    400.0, /* Downsample */ 
    0.0, /* Drive_Ready */ 
    100.0, /* EHPAS_Performance_Limit */ 
    200.0, /* EMP_CAN_MaxAge */ 
    0.0, /* Enable_Coast_Neg_Torque */ 
    0.0, /* Enable_Regen */ 
    100.0, /* FanOut_Frequency */ 
    1.0, /* FanOut_Gain */ 
    100.0, /* FanOut_MaxLimit */ 
    -100.0, /* FanOut_MinLimit */ 
    0.0, /* FanOut_Offset */ 
    0.4, /* FiltConst */ 
    0.0, /* GFD_Enable */ 
    20.0, /* GFD_Torque_Off */ 
    30.0, /* HV_Bus_allowed_mismatch */ 
    1.0, /* HV_Bus_offline_delay */ 
    0.4, /* HV_GFI_Check */ 
    14.2, /* High12VThres */ 
    0.4, /* HillHoldDisengageBrakePct */ 
    0.0, /* HillHoldEnable */ 
    70.0, /* HillHoldMaxFWDTqSaturation */ 
    0.0, /* HillHoldMaxREVTqSaturation */ 
    1.45, /* HillHoldTorqueGain */ 
    0.6, /* HillHold_kI */ 
    0.4, /* HillHold_kP */ 
    0.01, /* IFilterAlpha */ 
    50.0, /* InverterTemp_Overheat */ 
    0.69, /* LVVolt_DfltValue */ 
    0.01, /* LVVolt_FilterConst */ 
    0.041379, /* LVVolt_Gain */ 
    1020.0, /* LVVolt_InputHiFltPos */ 
    10.0, /* LVVolt_InputLoFltPos */ 
    0.0, /* LVVolt_Ofst */ 
    2.0, /* Load_Enable_Delay */ 
    11.85, /* Low12VThres */ 
    16.0, /* MaxMainsCurrent */ 
    15.0, /* Max_Coast_Tq */ 
    100.0, /* Max_Regen_Tq */ 
    90.0, /* Max_SOC_For_Coast_Tq_EN */ 
    800.0, /* Max_Slect_Tq_drive */ 
    0.001, /* MinBrakeBedPosforHillHold */ 
    12.0, /* Min_Speed_Allow_Coast_NegT */ 
    { 0.0, 100.0, 200.0, 400.0, 600.0, 700.0, 800.0, 6800.0 }, /* MotorSpdIdxArr */ 
    4.0, /* Motor_Start_Delay */ 
    12.0, /* Motor_Start_Off_Delay */ 
    100.0, /* Over_SOCAlertThresh */ 
    101.0, /* Over_SOC_Shutdown_Thresh */ 
    0.0263, /* OverallRatio */ 
    300.0, /* PluggedInHistTime */ 
    100.0, /* PluggedInHistTimeeaton */ 
    100.0, /* PluggedInMainsThes */ 
    90.0, /* PluggedInMainsThesEaton */ 
    { 0.0, 0.0, 0.0, 30.0, 50.0 }, /* RadiatorFanSpeedTbl */ 
    { 0.0, 20.0, 30.0, 45.0, 100.0 }, /* RadiatorFanSpeed_InverterTempIdxArr */ 
    0.7, /* Regen_Full */ 
    0.03, /* Regen_Start */ 
    0.01, /* Regin_torque_const */ 
    -0.6, /* ReverseDerate */ 
    500.0, /* Reverse_SwitchPt */ 
    0.0, /* Speed */ 
    0.0, /* Speed_Ramp_Rate */ 
    1.0, /* StallSpd */ 
    3.0, /* StallTrqThres */ 
    { 0.0, 85.0, 90.0, 93.0 }, /* StateOfChargePctIdxArr */ 
    0.005, /* Temp_ped_switchOver */ 
    5.0, /* Torqe_Threshold */ 
    75.0, /* Torque_Ramp_Rate */ 
    0.05, /* UQM_HillHoldSpeed_Filt */ 
    26.0, /* Under_SOCAlertThresh */ 
    21.0, /* Under_SOC_Shutdown_Thresh */ 
    2.0, /* VDO_Gauge_StartupDelay */ 
    0.1, /* Veh_Speed_Regen_Filter */ 
    427.1, /* Voltage_Limit */ 
    1.0, /* brakeTime_sec */ 
    0.8, /* creepSpeed */ 
    0.02, /* fwdAccThres */ 
    5.0, /* fwdSpdThres */ 
    0.5, /* hardBrakeLev */ 
    1.0, /* initState */ 
    5.0, /* minPumpRunTime */ 
    0.0, /* offState */ 
    20.0, /* offTime */ 
    2.0, /* onState */ 
    10.0, /* onTime */ 
    350.0, /* restartChargeVolt */ 
    0.02, /* revAccThres */ 
    5.0, /* revSpdThres */ 
    0.2, /* stopSpeed */ 
    3000U, /* CV_EndCurrentTime */ 
    400U, /* ChargeStartupDelay */ 
    100U, /* ECUP_Threshold */ 
    50U, /* EHPAS_BrakingNormalDriving */ 
    50U, /* EHPAS_BrakingZeroSpeed */ 
    0U, /* EHPAS_IdleEn */ 
    50U, /* EHPAS_KeyUpActive */ 
    50U, /* EHPAS_LowSpeedManeuvering */ 
    50U, /* EHPAS_NormalDriving */ 
    0U, /* EHPAS_ZeroCommand */ 
    1U, /* EHPAS_brakeEn */ 
    1U, /* EHPAS_driveEn */ 
    1U, /* EHPAS_driveNbrakeEn */ 
    1U, /* EHPAS_keyUpEn */ 
    1U, /* EHPAS_lowSpeedEn */ 
    1U, /* EHPAS_slowingEn */ 
    1U, /* EHPAS_stoppingEn */ 
    10U, /* KeyOnRuntime_Sec */ 
    20U, /* LowSpeedManeuverRuntime */ 
    5U, /* VDO_Gauge_Brightness */ 
    300U, /* cCInd_LongOff */ 
    10U, /* cCInd_OnTime */ 
    20U, /* cCInd_ShortTime */ 
    200U, /* firstScrollTime */ 
    100U, /* lastScrollTime */ 
    300U, /* minTime */ 
    40U, /* scrollTime */ 
    300U, /* startupDelay */ 
    RES_AN12M, /* Accel_Pedal_Pin */ 
    34, /* Brake_Light_Out */ 
    RES_AN10M, /* Brake_Pedal_Pin */ 
    31, /* DCDCInhibit_Out_Pin */ 
    RES_DG1M, /* EStop_Switch_Pin */ 
    RES_H2, /* Fan_Pin */ 
    RES_DRVP, /* LV_Voltage_Pin */ 
    150, /* ReverseIndFlash_Period */ 
    33, /* ReverseOut_Pin */ 
    RES_AN16M, /* Reverse_Switch_Pin */ 
    0, /* Accel_Pedal_Pin_ref */ 
    0, /* Brake_Pedal_Pin_ref */ 
    0, /* LV_Voltage_Pin_ref */ 
    1U, /* RevIndType */ 
    0, /* Reverse_Switch_Pin_ref */ 
    6U, /* dispLength */ 
    { 32U, 66U, 117U, 99U, 107U, 69U, 86U, 0U, 0U, 0U }, /* noErrText */ 
    1, /* Allow_MainContactor_Close */ 
    1, /* DisplayFaults */ 
    0, /* E_Stop_Invert */ 
    1, /* Enable_Brake_Light_Out */ 
    1, /* Enable_PowerSteering_CAN_Msg */ 
    0, /* InhibitDCDC_Out__Polarity */ 
    0, /* InvertMode */ 
    0, /* RevOut__Polarity */ 
    1, /* Reverse_Polarity */ 
     {8, {{ 0.0, 0.05, 0.15, 0.2, 0.35, 0.5, 1.0, 1.0 },{ 0.0, 0.05, 0.15, 0.2, 0.35, 0.5, 1.0, 1.0 },{ 0.0, 0.05, 0.15, 0.2, 0.35, 0.5, 0.5, 0.5 },{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },}, }, /* MotoHawkTable2DMap */ 
    { { 36, 7} } , /* ConstFaultManager */ 
    { { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 7, 0, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 100, 200, 6, 2, 1, 2, 7, 0, 7, 0} , { 0, 0, 0, 25, 50, 7, 0, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 5, 10, 4, 2, 6, 2, 7, 0, 7, 0} , { 1, 0, 0, 50, 100, 3, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 6, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 2, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 100, 200, 6, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 200, 200, 2, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 100, 200, 6, 2, 0, 2, 7, 0, 7, 0} , { 2, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 1000, 1500, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 25, 50, 7, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 25, 50, 4, 2, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 200, 200, 2, 2, 7, 0, 7, 0, 7, 0} , { 2, 0, 0, 100, 200, 6, 2, 1, 2, 7, 0, 7, 0} , { 1, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 1, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 10, 20, 7, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 10, 40, 3, 2, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 10, 40, 3, 2, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 10, 40, 3, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 100, 400, 7, 0, 7, 0, 7, 0, 7, 0} , { 0, 0, 0, 100, 400, 7, 0, 7, 0, 7, 0, 7, 0} } , /* FaultManager */ 
    
};    
#include <Pragma_Section_End_rodata.h>
    
    
  
/*---- SERIAL EEPROM VARIABLES ----------------------------------------------------------------------------*/


/* Uninitialised EE Variables */
#include <Pragma_Section_Start_bss_ee_bss_engcode.h>
NonVolatile_T NonVolatileStorage __SECTION_BSS_EEBSSENGCODE__;
#include <Pragma_Section_End_bss.h>
    

/* Initialised EE Variables */
#include <Pragma_Section_Start_data_ee_data_engcode.h>
    
uint8_T IsFirstApplicationBoot __SECTION_DATA_EEDATAENGCODE__= 0xFF;
    
/* Name: NonVolatileRestoreOnStartup ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RW2+RW1 TypeID:UINT1 CType:uint8_T
Struct:NonVolatileRestoreOnStartup  Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:1 Format:1.0
EnumDec:E_NVRestore UpdateID:BACKGND Group:"System | NonVolatile Storage | NonVolatile Storage Config"
Help:"Selects whether to restore from factory defaults on next startup" */
uint8_T NonVolatileRestoreOnStartup __SECTION_DATA_EEDATAENGCODE__ = 0; /* defaults to restore from eeprom */

/* Name: NonVolatileRestoreOnFirstStartup ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RW2+RW1 TypeID:UINT1 CType:uint8_T
Struct:NonVolatileRestoreOnFirstStartup  Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:1 Format:1.0
EnumDec:E_NVRestore UpdateID:BACKGND Group:"System | NonVolatile Storage | NonVolatile Storage Config"
Help:"Selects whether to restore from factory defaults the first time an application boots" */
uint8_T NonVolatileRestoreOnFirstStartup __SECTION_DATA_EEDATAENGCODE__ = 1;

#include <Pragma_Section_End_data.h>
        

    
/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>


        
/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_ramcals_bss.h>

NonVolatile_T NonVolatileWork __SECTION_RAMCALS_BSS__;

#include <Pragma_Section_End_bss.h>


/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>
            
/* Name: NonVolatileFormatID ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:NonVolatile_T Struct:NonVolatileWork.NonVolatileFormatID
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
Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:65535 Format:1.0 UpdateID:BACKGND 
Group:"System | NonVolatile Storage" Help:"Calculated NonVolatile CRC" */
uint32_T NonVolatile_NonVolatileCRC = 0;



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
void NonVolatile_RestoreDefaultNonVolatile(void)
{
    uint16_T crc = 0xFFFF;
    DISABLE();

    MemReadSynch(&NonVolatileWork, &NonVolatileDefault, sizeof(NonVolatile_T));

    
    
    crc = calculate_crc((uint8_T *)&NonVolatileWork + NON_VOLATILE_OVERHEAD_BYTES, sizeof(NonVolatile_T) - NON_VOLATILE_OVERHEAD_BYTES, crc);
    
    
        
    NonVolatileWork.crc = crc;
    NonVolatile_NonVolatileCRC = NonVolatileWork.crc;
    
    UNDISABLE();
}
void NonVolatile_StoreNonVolatile(void)
{
    extern uint16_T calculate_crc(void *pointer1, uint32_T number_bytes, uint16_T icrc);
    uint16_T icrc = 0xFFFFu;
    uint32_T *work_ptr = (uint32_T *) &NonVolatileWork;
    uint32_T * storage_ptr = (uint32_T *) &NonVolatileStorage;
    uint32_T word_count = sizeof(NonVolatile_T) / 4 - NON_VOLATILE_OVERHEAD_BYTES / 4;
    uint32_T final_byte_count = sizeof(NonVolatile_T) % 4;
    uint32_T tmp_word;
    static uint32_T tmp_word2;
    uint8_T oldStatus = NonVolatile_NonVolatileStatus;
    uint32_T i;
    
    NonVolatile_NonVolatileStatus = NV_STORING_EEPROM;
    
    work_ptr += NON_VOLATILE_OVERHEAD_BYTES / 4;
    storage_ptr += NON_VOLATILE_OVERHEAD_BYTES / 4;
    for (i=0; i < word_count; i++)
    {
        DISABLE();
        tmp_word = *work_ptr;
        UNDISABLE();
        MemReadSynch(&tmp_word2, storage_ptr, sizeof(tmp_word2));
        if (tmp_word != tmp_word2) {
            MemWriteSynch(storage_ptr, &tmp_word, sizeof(tmp_word));
        }
        icrc = calculate_crc(&tmp_word, sizeof(tmp_word), icrc);
        work_ptr++;
        storage_ptr++;
    }
    if (final_byte_count > 0)
    {
        DISABLE();
        tmp_word = *work_ptr;
        UNDISABLE();
        MemReadSynch(&tmp_word2, storage_ptr, final_byte_count);
        if (tmp_word != tmp_word2) {
            MemWriteSynch(storage_ptr, &tmp_word, final_byte_count);
        }
        icrc = calculate_crc(&tmp_word, final_byte_count, icrc);
    }
    
    NonVolatile_NonVolatileCRC = icrc;
    
    MemWriteSynch(&NonVolatileStorage.NonVolatileFormatID, &NonVolatileDefault.NonVolatileFormatID, sizeof(NonVolatileWork.NonVolatileFormatID));
    MemWriteSynch(&NonVolatileStorage.crc, &NonVolatile_NonVolatileCRC, sizeof(NonVolatile_NonVolatileCRC));
    
    NonVolatile_NonVolatileStatus = oldStatus;
    
}
void NonVolatile_OpenNonVolatile(void)
{
    uint32_T storedNonVolatileFormatID = 0;
    uint8_T firstApplicationBoot = 0;
    uint8_T restoreFactoryDefaults = 0;
    uint8_T restoreFactoryDefaultsFirstBoot = 0;
    
    MemReadSynch(&firstApplicationBoot, &IsFirstApplicationBoot, sizeof(IsFirstApplicationBoot));
    MemReadSynch(&restoreFactoryDefaults, &NonVolatileRestoreOnStartup, sizeof(NonVolatileRestoreOnStartup));
    MemReadSynch(&restoreFactoryDefaultsFirstBoot,&NonVolatileRestoreOnFirstStartup, sizeof(NonVolatileRestoreOnFirstStartup));
    MemReadSynch(&storedNonVolatileFormatID,&(NonVolatileStorage.NonVolatileFormatID),sizeof(NonVolatileStorage.NonVolatileFormatID));
    
    if ((firstApplicationBoot && restoreFactoryDefaultsFirstBoot) || restoreFactoryDefaults)
    {
        NonVolatile_NonVolatileStatus = NV_LOADING_FACTORY;
        NonVolatile_RestoreDefaultNonVolatile();
        
        restoreFactoryDefaults = 0;
        MemWriteSynch(&NonVolatileRestoreOnStartup, &restoreFactoryDefaults,sizeof(NonVolatileRestoreOnStartup));
        
        NonVolatile_NonVolatileStatus = NV_LOADED_FACTORY_USER_CMD;
    }
    else if (storedNonVolatileFormatID != NonVolatileDefault.NonVolatileFormatID)
    {
        NonVolatile_NonVolatileStatus = NV_LOADING_FACTORY;
        NonVolatile_RestoreDefaultNonVolatile();
        NonVolatile_NonVolatileStatus = NV_LOADED_FACTORY_BAD_MAGIC;
    }
    else
    {
        extern uint16_T calculate_crc(void *pointer1, uint32_T number_bytes,
        uint16_T icrc);
        uint16_T icrc = 0xFFFFu;
        uint32_T *work_ptr = (uint32_T *) &NonVolatileWork;
        uint32_T * storage_ptr = (uint32_T *) &NonVolatileStorage;
        uint32_T word_count = sizeof(NonVolatile_T) / 4 - NON_VOLATILE_OVERHEAD_BYTES / 4;
        uint32_T final_byte_count = sizeof(NonVolatile_T) % 4;
        uint32_T tmp_word;
        uint32_T i;
        
        NonVolatile_NonVolatileStatus = NV_LOADING_EEPROM;
    
        work_ptr += NON_VOLATILE_OVERHEAD_BYTES / 4;
        storage_ptr += NON_VOLATILE_OVERHEAD_BYTES / 4;
        for (i=0; i < word_count; i++)
        {
            MemReadSynch(&tmp_word, storage_ptr, sizeof(tmp_word));
            DISABLE();
            *work_ptr = tmp_word;
            UNDISABLE();
            icrc = calculate_crc(&tmp_word, sizeof(tmp_word), icrc);
            work_ptr++;
            storage_ptr++;
        }
        if (final_byte_count > 0)
        {
            MemReadSynch(&tmp_word, storage_ptr, final_byte_count);
            DISABLE();
            *work_ptr = tmp_word;
            UNDISABLE();
            icrc = calculate_crc(&tmp_word, final_byte_count, icrc);
        }
    
        
        NonVolatile_NonVolatileCRC = icrc;
    
        MemReadSynch(&NonVolatileWork.crc, &(NonVolatileStorage.crc), sizeof(NonVolatileStorage.crc));
    
        if(NonVolatile_NonVolatileCRC != NonVolatileWork.crc)
        {
            NonVolatile_NonVolatileStatus = NV_LOADING_FACTORY;
            NonVolatile_RestoreDefaultNonVolatile();
            NonVolatile_NonVolatileStatus = NV_LOADED_FACTORY_BAD_CRC;
        }
        else
        {
            NonVolatileWork.NonVolatileFormatID = storedNonVolatileFormatID;
            NonVolatile_NonVolatileStatus = NV_LOADED_EEPROM;
        }
    }
    
    if (firstApplicationBoot)
    {
        firstApplicationBoot = 0;
        MemWriteSynch(&IsFirstApplicationBoot, &firstApplicationBoot, sizeof(IsFirstApplicationBoot));
    }
}
