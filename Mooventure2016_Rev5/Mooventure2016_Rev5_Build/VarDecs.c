#include "Application.h"
#include "Mooventure2016_Rev5.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_sbss.h>

/* Name: Gas_Pedal_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s93_sf_GasPedalScaling.s105_throttleOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: driveTorque_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s93_sf_Chart.s104_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: Brake_Pedal_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s93_sf_BrakePedalScaling.s103_brakeOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: regenTorque_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s93_sf_Chart.s104_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: Gas_Pedal_Prb_EcoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s95_sf_GasPedalScaling.s105_throttleOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: driveTorque_Prb_ecoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s95_sf_Chart.s104_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: Brake_Pedal_Prb_EcoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s95_sf_BrakePedalScaling.s103_brakeOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: regenTorque_Prb_ecoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s95_sf_Chart.s104_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: Gas_Pedal_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s99_sf_GasPedalScaling.s105_throttleOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: driveTorque_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s99_sf_Chart.s104_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: Brake_Pedal_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s99_sf_BrakePedalScaling.s103_brakeOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: regenTorque_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s99_sf_Chart.s104_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: ACC_torq_rqstd_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s101_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Pct_whl_trq_cmd_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s342_Pct_whl_trq_desired Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Power_train_torq_actual_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s342_sf_DataCorrectionMotorABS.s87_torqueOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: prndl_dir_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s352_dirOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Commanded_motor_torq_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s342_Commanded_mot_torq Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Batt_Connect_Cmd_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s343_ConnectCommand Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Battery Outputs" Help:""   */

/* Name: Isolation_Measure_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s343_IsolationMeasurementEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Battery Outputs" Help:""   */

/* Name: Radiator_Motor_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_DataTypeConversion5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat4_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_LogicalOperator8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Pump_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s25_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Pump_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s24_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s388_fan1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s388_fan2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s388_fan3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Motor_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_DataTypeConversion4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Motor_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Motor_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_DataTypeConversion2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Pos_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s21_radBlend Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Pos_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s20_HeaterCoreBlend Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_LogicalOperator5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_LogicalOperator6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s345_LogicalOperator7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Coil1_IPT_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s440_Coil1State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Coil2_Charger_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s441_Coil2State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Coil3_Heater_AC_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s442_Coil3State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Ready_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s468_VehicleReadyOutput Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Vehicle_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Vehi_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Regen_Brakes_Disabled_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Regen_Brakes_Disabled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: HV_Elec_Sys_Wrn_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_HV_Elec_Sys_Warm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Repair_Wrench_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Repair_Wrench Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Cruise_Ctrl_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s112_System Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Eng_Cool_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s463_engTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Me_Cool_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s463_transTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Engine_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Engine_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Check_Engine_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s464_CEL Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Battery_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_Battery_Light Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: ODO_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s347_ODO_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Charge_Falt_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s348_ChargeSystemFault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Charge_Complete_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s348_ChargeComplete Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Charge_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s348_ChargeEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Gen_Load_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s34_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Gen_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s349_Gen_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Vehicle_Speed2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s349_Vehicle_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Load_Throttle_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s37_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Load_RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s36_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: VSC_WheelTorqueRequest_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s350_VSC_WheelTorqueRequest Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_IPTWakeup_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s350_VSC_IPTEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_TRSPosition_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s275_posOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_MotorEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s628_MotorEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_IPTEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s350_VSC_IPTEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_DCDCEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s350_VSC_DCDCEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: IPT_Freq_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s640_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: IPT_DutyCycle_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s641_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: Batt_Boot_request_fromcontrol_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s13_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Battery" Help:""   */

/* Name: Batt_Shutdown_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s14_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Battery" Help:""   */

/* Name: Shutdown_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s14_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Battery" Help:""   */

/* Name: Cooling_Pump_Heater_Core_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s7_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Cooling_Pump_Radiator_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s7_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: System_Warm_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s7_Warmed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: System_Cold_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s7_VeryCold Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Genset_Load_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s30_Genset_Load Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s30_Genset_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s30_Genset_RPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_Throttle_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s30_Genset_Throttle Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: HybridStateProbe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s96_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code" Help:""   */

/* Name: ETC_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s127_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Final Output"   */

/* Name: ETC_PTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s120_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Proportional Term"   */

/* Name: ETC_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s125_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Integrator Term"   */

/* Name: ETC_DTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s124_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Derivative Term"   */

/* Name: ETC_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s120_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Error Term"   */

/* Name: ETC_DampTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s122_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Damper Term"   */

/* Name: Torque_Request_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s98_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: IPT_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s98_Torque_Direction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: pre_Filter_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s98_IPT_Torque_Request Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: overcurrentintegral_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s149_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT|CurrentLimiting_TurboRequest" Help:""   */

/* Name: Overcurrent_Torque_Derate_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s147_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT|CurrentLimiting_TurboRequest" Help:""   */

/* Name: RT_Wheel_Rolling_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_RT_Wheel_Rolling_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: TCS_ENG_EVNT_IN_PROGRESS_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_TCS_ENG_EVNT_IN_PROGRESS Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_417_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_AgeCount_e Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Wheel_Rolling_Timestamp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_Wheel_Rolling_Timestamp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_217_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Front_right_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_Front_right_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Rear_left_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_Rear_left_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_4B0_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_AgeCount_n Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: LF_Wheel_Rolling_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_LF_Wheel_Rolling_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Front_left_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_Front_left_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Rear_right_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s168_Rear_right_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Radiator_Blend_Valve_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s213_motohawk_ain2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Temp_Raw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s213_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Core_Blend_Valve_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s213_motohawk_ain1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Temp_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s215_temp_reading Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: DCDC_Status_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s214_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|DCDC Converter" Help:""   */

/* Name: JCS_PackIdentifier ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_JCS_PackIdentifier Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PackState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s237_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PS_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_PS_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumDischargePower_10s ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaximumDischargePower_10s Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumRegenPower_10s ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaximumRegenPower_10s Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: IsolationLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_IsolationLevel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: ActiveDTC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_ActiveDTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PPL10s_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_PPL10s_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumDischargePower_Continuous ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaximumDischargePower_Continuous Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumRegenPower_Continuous ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaximumRegenPower_Continuous Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PPLCont_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_PPLCont_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BatteryVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_BatteryVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PrechargeState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_PrechargeState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BatteryCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s235_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BusVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_BusVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PVC_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_PVC_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaxCellVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaxCellVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MinCellVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MinCellVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaxCellTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MaxCellTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MinCellTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MinCellTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: CoolantTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: DPI_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_DPI_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TripAmpHoursIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_TripAmpHoursIn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: HVIL_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_HVIL_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TripAmpHoursOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_TripAmpHoursOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfChargeMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_StateOfChargeMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfChargeMin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_StateOfChargeMin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TAH_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_TAH_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: LifeTimeAmpHoursOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_LifeTimeAmpHoursOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: LTAHI_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_LTAHI_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: IsolationStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_IsolationStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: WakeSignal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_WakeSignal Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: SleepInhibited ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_SleepInhibited Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: CellBalanceingActive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_CellBalanceingActive Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MILState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_MILState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfCharge ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s170_StateOfCharge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: AC_Cmd_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s171_AC_Engaged_CMD Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|CAN Gateway In" Help:""   */

/* Name: Defrost_Mode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s171_HEV_CC_Defrost_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|CAN Gateway In" Help:""   */

/* Name: Cruise_Control_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s173_RawSignal Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_State_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s264_Out Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Brakes_Position_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_Brake_Position Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Passenger_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s277_passengerTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Brakes_Age_Count_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_AgeCount_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Transmission_Age_Count_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Transmission_Position_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_Shift_Position Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Throttle_Position_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_Throttle_Position Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Button_Pressed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s174_Button_Pressed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Driver_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s276_driverTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: OutputVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_OutputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: MessageCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_MessageCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: MessageChecksumInput_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_MessageChecksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: InputCurrentLimitMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_InputCurrentLimitMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Mains_Current_Draw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_InputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: OutputCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_OutputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Mains_Voltage_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_InputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Eaton_HV_Charger_Temperature_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_Eaton_HV_Charger_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: IgnitionStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_IgnitionStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: ChargerState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_ChargerState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: FaultSeverityIndicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s175_FaultSeverityIndicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Oil_Pressure_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Temp_Guage_Ovr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Engine_Crank_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Engine_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Load_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Fault_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s176_ReadCANMessage_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: IPT_Status2_AgeCount_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_CurrentUsed_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_CurrentUsed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MotorReady_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MotorReady Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Bus_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCLVBusCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MaxTorqueAvailGen_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailGen Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_InverterTemperature_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_InverterTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Bus_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCLVBusVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_IPTReady_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_IPTReady Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_IPTAwake_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_IPTAwake Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_HVDCVoltage_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_ErrorCategory_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_ErrorCategory Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MaxWasteAvailable_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MaxWasteAvailable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_CurrentRequest_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_CurrentRequest Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Max_Power_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCLVMaxPower Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_ClockStatus_AgeCount_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_AgeCount_o Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Heading_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_Heading Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Speed_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Altitude_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_Altitude Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_GPSQuality_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_GPSQuality Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DateTime_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_DateTime Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Age_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_AgeCount_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DC_Error_Category_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCErrorCategory Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCLVOn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_CurrentLimit_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_CurrentLimit Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_General_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCLVGeneralError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCHV_Bus_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_DCHVBusCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MotorSpeed_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MotorSpeed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_WheelTorqueDelivered_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Antishudder_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_Antishudder Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Status1_AgeCount_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_AgeCount_m Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MotorTemperature_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MotorTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_MaxTorqueAvailMotor_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailMotor Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: STR_WHL_ANGLE_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: RELATIVE_STR_WHL_ANGLE_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s178_RELATIVE_STR_WHL_ANGLE Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: PSCM_80_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s178_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: STR_WHL_ANGLE_CNTR_FND_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE_CNTR_FND Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */
#include <Pragma_Section_End_sbss.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
