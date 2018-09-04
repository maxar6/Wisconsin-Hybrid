#include "Application.h"
#include "Mooventure2016_Rev5.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_sbss.h>

/* Name: Gas_Pedal_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: driveTorque_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s113_sf_Chart.s123_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: Brake_Pedal_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Brake_Position_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: regenTorque_Prb_safetyMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s113_sf_Chart.s123_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|CrawlHomeMode" Help:""   */

/* Name: Gas_Pedal_Prb_EcoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: driveTorque_Prb_ecoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s115_sf_Chart.s123_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: Brake_Pedal_Prb_EcoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Brake_Position_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: regenTorque_Prb_ecoMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s115_sf_Chart.s123_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|EcoMode" Help:""   */

/* Name: Gas_Pedal_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: driveTorque_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s119_sf_Chart.s123_driveTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: Brake_Pedal_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Brake_Position_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: regenTorque_Prb_SUVMode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s119_sf_Chart.s123_regenTorque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|SUVMode" Help:""   */

/* Name: ACC_torq_rqstd_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s121_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Pct_whl_trq_cmd_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s529_Pct_whl_trq_desired Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Power_train_torq_actual_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s529_sf_DataCorrectionMotorABS.s111_torqueOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: prndl_dir_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s539_dirOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Commanded_motor_torq_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s529_Commanded_mot_torq Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|ABS Outputs" Help:""   */

/* Name: Batt_Connect_Cmd_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s530_ConnectCommand Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Battery Outputs" Help:""   */

/* Name: Isolation_Measure_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s530_IsolationMeasurementEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Battery Outputs" Help:""   */

/* Name: AC_Command_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s279_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|CAN Gateway Out" Help:""   */

/* Name: Defrost_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s280_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|CAN Gateway Out" Help:""   */

/* Name: Radiator_Motor_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_DataTypeConversion5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat4_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_LogicalOperator8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Pump_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s15_Cooling_Pump_Radiator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Pump_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s15_Cooling_Pump_Heater_Core Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s581_fan1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s581_fan2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Fan3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s581_fan3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Motor_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_DataTypeConversion4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Motor_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Motor_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_DataTypeConversion2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Radiator_Pos_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s32_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heater_Core_Pos_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s33_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_LogicalOperator5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_LogicalOperator6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Heat3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s532_LogicalOperator7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Coolant Outputs" Help:""   */

/* Name: Coil1_IPT_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s633_Coil1State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Coil2_Charger_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s634_Coil2State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Coil3_Heater_AC_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s635_Coil3State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|DistributionBox" Help:""   */

/* Name: Ready_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s662_VehicleReadyOutput Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Vehicle_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Vehi_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Check_Engine_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s659_CEL Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Battery_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Battery_Light Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Regen_Brakes_Disabled_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Regen_Brakes_Disabled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: HV_Elec_Sys_Wrn_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_HV_Elec_Sys_Warm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Repair_Wrench_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Repair_Wrench Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Cruise_Ctrl_Light_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s130_System Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Eng_Cool_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s655_engTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Me_Cool_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s655_transTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Engine_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Engine_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: ODO_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s534_ODO_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Driver Ouputs" Help:""   */

/* Name: Charge_Falt_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s535_ChargeSystemFault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Charge_Complete_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s535_ChargeComplete Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Charge_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s535_ChargeEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|EatonCharger" Help:""   */

/* Name: Gen_Load_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s62_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Gen_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s536_Gen_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Vehicle_Speed2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s536_Vehicle_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Load_Throttle_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s65_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: Load_RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s64_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|Engine Outputs" Help:""   */

/* Name: VSC_WheelTorqueRequest_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s537_VSC_WheelTorqueRequest Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_IPTWakeup_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s537_VSC_IPTEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_TRSPosition_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s321_posOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_MotorEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s537_VSC_MotorEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_IPTEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s537_VSC_IPTEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_MaxCurrOutputGen_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s822_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_MaxCurrInputMotor_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s821_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: VSC_DCDCEnable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s537_VSC_DCDCEnable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: IPT_Freq_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s835_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: IPT_DutyCycle_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s836_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Outputs|IPT Outputs" Help:""   */

/* Name: CAN1_Bus_Passive_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN1_TX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN1_RX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN2_Bus_Passive_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN2_TX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN2_RX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus1_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN3_Bus_Passive_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN3_TX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus2_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: CAN3_RX_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s82_CANFaultStatus2_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Faults|CAN" Help:""   */

/* Name: Batt_Boot_request_fromcontrol_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s21_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Battery" Help:""   */

/* Name: Batt_Shutdown_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s14_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Battery" Help:""   */

/* Name: Cooling_Pump_Heater_Core_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_CorePump Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Cooling_Pump_Radiator_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_RadPump Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Radiator_Blend_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_RadBlendOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Radiator_Fan_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_fan Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Heater_Core_Blend_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_CoreBlendOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Heat_1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_Heat1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Heat_2_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_Heat2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Heat_3_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_Heat3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Heat_4_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s28_Heat4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Coolant Control" Help:""   */

/* Name: Genset_Load_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s58_Genset_Load Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_Enable_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s58_Genset_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s58_Genset_RPM Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: Genset_Throttle_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s58_Genset_Throttle Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Engine Control" Help:""   */

/* Name: HybridStateProbe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s116_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code" Help:""   */

/* Name: ETC_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s145_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Final Output"   */

/* Name: ETC_PTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s138_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Proportional Term"   */

/* Name: ETC_ITerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s143_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Integrator Term"   */

/* Name: ETC_DTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s142_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Derivative Term"   */

/* Name: ETC_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s138_Sum2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Error Term"   */

/* Name: ETC_DampTerm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s140_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Cruise Control|Speed Control" Help:"PID Damper Term"   */

/* Name: Torque_Request_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s118_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: IPT_Direction_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s118_Torque_Direction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: pre_Filter_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s118_IPT_Torque_Request Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT" Help:""   */

/* Name: overcurrentintegral_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s165_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT|CurrentLimiting_TurboRequest" Help:""   */

/* Name: Overcurrent_Torque_Derate_prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s163_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|IPT|CurrentLimiting_TurboRequest" Help:""   */

/* Name: Traction_Control_Trq_Out_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s121_MultiportSwitch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Traction Control" Help:""   */

/* Name: ABS_Trq_Out_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s178_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Traction Control|ABS Ramp Control" Help:""   */

/* Name: Calc_Trq_Out_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s179_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Traction Control|CALC Ramp Control" Help:""   */

/* Name: Speed_Diff_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s180_Abs2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Traction Control|Traction Control Event Needed" Help:""   */

/* Name: Calc_Active_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s180_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Control|Hybrid Control Code|Traction Control|Traction Control Event Needed" Help:""   */

/* Name: RT_Wheel_Rolling_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_RT_Wheel_Rolling_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: TCS_ENG_EVNT_IN_PROGRESS_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_TCS_ENG_EVNT_IN_PROGRESS Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_417_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Wheel_Rolling_Timestamp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_Wheel_Rolling_Timestamp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_217_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_AgeCount_b Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Front_right_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_Front_right_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Rear_left_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_Rear_left_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: ABS_4B0_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_AgeCount_n Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: LF_Wheel_Rolling_Count_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_LF_Wheel_Rolling_Count Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Front_left_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_Front_left_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Rear_right_whl_speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s187_Rear_right_whl_speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|ABS" Help:""   */

/* Name: Radiator_Blend_Valve_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s231_motohawk_ain2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Temp_Raw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s231_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Core_Blend_Valve_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s231_motohawk_ain1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-2147483647.000000
   Max:2147483647.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Heater_Temp_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s235_temp_reading Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Coolant" Help:""   */

/* Name: Cruise_Control_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s232_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Cruise Control In" Help:""   */

/* Name: DCDC_Status_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s233_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|DCDC Converter" Help:""   */

/* Name: Throttle_Position_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Analog Inputs|Throttle Position" Help:""   */

/* Name: JCS_PackIdentifier ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_JCS_PackIdentifier Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PackState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s263_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PS_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_PS_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumDischargePower_10s ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaximumDischargePower_10s Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumRegenPower_10s ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaximumRegenPower_10s Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: IsolationLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_IsolationLevel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: ActiveDTC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_ActiveDTC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PPL10s_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_PPL10s_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumDischargePower_Continuous ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaximumDischargePower_Continuous Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaximumRegenPower_Continuous ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaximumRegenPower_Continuous Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PPLCont_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_PPLCont_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BatteryVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_BatteryVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PrechargeState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_PrechargeState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BatteryCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s261_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: BusVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_BusVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: PVC_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_PVC_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaxCellVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaxCellVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MinCellVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MinCellVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MaxCellTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MaxCellTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MinCellTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MinCellTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: CoolantTemperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s260_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: DPI_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_DPI_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TripAmpHoursIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_TripAmpHoursIn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: HVIL_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_HVIL_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TripAmpHoursOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_TripAmpHoursOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfChargeMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_StateOfChargeMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfChargeMin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_StateOfChargeMin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: TAH_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_TAH_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: LifeTimeAmpHoursOut ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_LifeTimeAmpHoursOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: LTAHI_RollingCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_LTAHI_RollingCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: IsolationStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_IsolationStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: WakeSignal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_WakeSignal Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: SleepInhibited ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_SleepInhibited Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: CellBalanceingActive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_CellBalanceingActive Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: MILState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_MILState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: StateOfCharge ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s189_StateOfCharge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Battery_Inputs" Help:""   */

/* Name: AC_Cmd_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s190_AC_Engaged_CMD Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|CAN Gateway In" Help:""   */

/* Name: Defrost_Mode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s190_HEV_CC_Defrost_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|CAN Gateway In" Help:""   */

/* Name: Cruise_Control_State_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s290_Out Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_Raw_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s249_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_Off_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s285_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Curise_Control_SetM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s286_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_SetP_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s287_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_RSM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s288_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Cruise_Control_ON_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s289_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Cruise Control" Help:""   */

/* Name: Brake_Position_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Brake_Position Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Passenger_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s320_passengerTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Driver_10_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_DRIVER_10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Brakes_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_AgeCount_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Passenger_1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_PASSENGER_1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Passenger_10_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_PASSENGER_10 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Transmission_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Shift_Position_Raw_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Shift_Position Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Throttle_Position_Raw_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s234_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: ecoMode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s321_ecoModeOut Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Button_Pressed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_Button_Pressed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Driver_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s319_driverTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Driver_1_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s193_DRIVER_1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Driver Inputs" Help:""   */

/* Name: Output_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_OutputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Eaton_Charger_Message_Counter_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_MessageCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Eaton_Charger_Message_Checksum_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_MessageChecksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Eaton_Charger_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Input_Current_Limit_Max_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_InputCurrentLimitMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Input_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_InputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Output_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_OutputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Input_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_InputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Eaton_HV_Charger_Temperature_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_Eaton_HV_Charger_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Ignition_Status_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_IgnitionStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Charger_State_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_ChargerState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Fault_Severity_Indiciator_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s194_FaultSeverityIndicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Eaton Charger" Help:""   */

/* Name: Oil_Pressure_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: RPM_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Temp_Guage_Ovr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Engine_Crank_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Engine_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Load_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Fault_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: Inv_Temp_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s195_ReadCANMessage_o8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Engine Inputs" Help:""   */

/* Name: IPT_Current_Used_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_CurrentUsed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Max_Torque_Avail_Gen_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailGen Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Age_Count_624_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_AgeCount_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Max_Torque_Avail_Motor_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailMotor Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_HVDC_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_HVDCVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DC_Error_Category_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCErrorCategory Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Error_Category_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_ErrorCategory Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_IPTReady_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_IPTReady Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_IPTAwake_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_IPTAwake Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Motor_Ready_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MotorReady Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Max_Waste_Available_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MaxWasteAvailable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Age_Count_260_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_On_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCLVOn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Age_Count_590_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_AgeCount_o Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Heading_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_Heading Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Altitude_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_Altitude Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: GPSQuality_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_GPSQuality Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: DateTime_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_DateTime Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_General_Error_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCLVGeneralError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Max_Power_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCLVMaxPower Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Bus_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCLVBusCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Current_Request_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_CurrentRequest Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCLV_Bus_Voltage_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCLVBusVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_DCHV_Bus_Current_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_DCHVBusCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Antishudder_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_Antishudder Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Motor_Speed_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MotorSpeed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Wheel_Torque_Delivered_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_WheelTorqueDelivered Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Current_Limit_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_CurrentLimit Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: Age_Count_278_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_AgeCount_m Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Inverter_Temperature_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_InverterTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: IPT_Motor_Temperature_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s196_IPT_MotorTemperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|IPT CAN Inputs" Help:""   */

/* Name: STR_WHL_ANGLE_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: RELATIVE_STR_WHL_ANGLE_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s197_RELATIVE_STR_WHL_ANGLE Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: PSCM_80_AgeCount_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s197_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */

/* Name: STR_WHL_ANGLE_CNTR_FND_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_Mooventure2016_Rev5 Struct:Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE_CNTR_FND Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Mooventure2016_Rev5|Foreground|Inputs|Steering Wheel" Help:""   */
#include <Pragma_Section_End_sbss.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
