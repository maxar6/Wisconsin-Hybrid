#include "Application.h"
#include "BuckyWagon_01.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>
#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: hsc_bcm_epo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s13_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: hsc_bcm_leakage_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s20_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: hsc_bcm_mainc_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s121_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: Flash_Reverse_Lights_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s43_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Reverse" Help:""   */

/* Name: RevOut_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s38_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | Reverse | ReverseOut" Help:"Display output in engineering units" Unit:bool  */

/* Name: FanOut_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s52_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Fan | FanOut" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InhibitDCDC_Out_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s39_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | DC/DC | InhibitDCDC_Out" Help:"Display output in engineering units" Unit:bool  */

/* Name: EHPAS_Operating_Mode_Command ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s15_OperatingMode_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EHPAS" Help:""   */

/* Name: EMP_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s60_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EMP Coolant Pump" Help:""   */

/* Name: Regen_SOCSpd_Ramp_probe_preOVR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s133_Saturation1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Raw_Regen_Tq_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s133_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Coast_Down_Tq_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s133_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: TqManagement_tq_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s149_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management" Help:""   */

/* Name: DriveDemand_tq_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s140_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|DriverDemandBase" Help:""   */

/* Name: DriveDemand_tq_Forward ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s140_motohawk_interpolation_2d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|DriverDemandBase" Help:""   */

/* Name: DriveDemand_tq_Reverse ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s140_motohawk_interpolation_2d1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|DriverDemandBase" Help:""   */

/* Name: OverheatClip_InvTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Inverter_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Overheat Clip" Help:""   */

/* Name: OverheatClip_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s145_out Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Overheat Clip" Help:""   */

/* Name: OverheatClip_tq_In ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Overheat Clip" Help:""   */

/* Name: OverheatClip_tq_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s141_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Overheat Clip" Help:""   */

/* Name: Regen_tq_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Regen" Help:""   */

/* Name: Regen_tq_In ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s140_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Regen" Help:""   */

/* Name: Regen_tq_Accel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_motohawk_interpolation_2d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Regen" Help:""   */

/* Name: Regen_tq_Brake ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_motohawk_interpolation_2d1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Regen" Help:""   */

/* Name: Regen_tq_Max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|Regen" Help:""   */

/* Name: SOC_tq_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|SOC Clip" Help:""   */

/* Name: SOC_tq_Discharge ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_motohawk_interpolation_2d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|SOC Clip" Help:""   */

/* Name: SOC_tq_In ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|SOC Clip" Help:""   */

/* Name: SOC_tq_Charge ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_motohawk_interpolation_2d1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Torque Management|SOC Clip" Help:""   */

/* Name: In_Reverse ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s171_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Reverse" Help:""   */

/* Name: DC_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors" Help:""   */

/* Name: bcm_alarm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_alarm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cpwr_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cpwr_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_epo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_epo Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_gfd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_gfd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_hvil_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_hvil_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ibat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_ibat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mainc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s240_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ready ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s244_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_soc ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_soc_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_vbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_done ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_chg_done Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chgc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s241_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cool_req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cool_req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cell_tmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cell_tmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cell_vmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cell_vmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_chga_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_chga_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_lvbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_lvbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mod_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_mod_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_veh_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_veh_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_overvolt_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s242_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_undervolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_cell_undervolt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_chg_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_chg_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_dis_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_dis_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_t_coolant ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s224_bcm_t_coolant Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: AgeCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_TempMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempCur ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_TempCur Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Op_State ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_Op_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Fault ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_Fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_Input_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Current_NA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s226_EHPAS_Input_Current_NA Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Board_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Board_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Pump_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Speed_Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Speed_Percent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Pump_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_EMP_Pump_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: Fault_Severity_Indicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Fault_Severity_Indicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s330_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Percent_Torque_Available ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Percent_Torque_Available Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Control_State ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Motor_Control_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Drive_Ready_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Message_Checksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Message_Checksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Message_Counter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Message_Counter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Torque_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s331_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Phase_phase_voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Phase_phase_voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Motor_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: DC_Bus_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_DC_Bus_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: DC_Bus_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_DC_Bus_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Inverter_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Inverter_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Phase_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Phase_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Isolation_Resistance ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Isolation_Resistance Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Maximum_Rated_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Maximum_Rated_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Maximum_Rated_Torqe Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: minTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s205_minTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s205_scrollTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollIndex ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s205_scrollIndex Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: Control_Mode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s66_ctrlState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonController" Help:""   */

/* Name: Torque_Command_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s17_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonController" Help:""   */

/* Name: Message_Counter_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s71_UnitDelay2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonController" Help:""   */

/* Name: Current_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s78_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Voltage_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s79_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Falt_Probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s80_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""  EnumDec:VarDecEnum_10 */

/* Name: Charge_Complete_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s81_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s82_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: LowerTorqueLimit ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s96_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Solectria" Help:""   */

/* Name: UpperTorqueLimit ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s96_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Solectria" Help:""   */

/* Name: IntStallTorque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s114_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics and Protection" Help:""   */

/* Name: Accel_Zeroed_Since_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s107_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Diagnostic & Protection" Help:"Accel pedal has been at zero position since key-up" Unit:boolean  */

/* Name: CoolantPumpSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_CoolantPumpSpeed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: motor_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s157_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: RadiatorFanSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_FanDutyCycle Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: pre_Filter_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_Motor_Torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: InstBattKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstPhxKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstUQMKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: KeyCycleKWh_without_12v_dcdc_current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: WhPerMileKeyCycle_without_12v_dcdc_current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Divide3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstVehicleKWUsed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: KeyCycleKWh ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstPhxCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Gain4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: WhPerMileKeyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Divide Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstWhperMile ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s127_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: Vehicle_Odometer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s126_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations|Odometer" Help:""   */

/* Name: MilesSinceKeyed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s126_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations|Odometer" Help:""   */

/* Name: EHPAS_PumpState_probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s150_PumpState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|EHPAS_PercentControl" Help:""  EnumDec:VarDecEnum_9 */

/* Name: Estop_switch_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s236_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors" Help:""   */

/* Name: Reverse_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s255_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: Reverse_Switch_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s225_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:ADC  */

/* Name: OutputVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_OutputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_MessageCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageChecksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_MessageChecksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: InputCurrentLimitMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_InputCurrentLimitMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: EatonpluggedIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s309_pluggedIn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Current_Draw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_InputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: OutputCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_OutputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Voltage_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_InputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Eaton_HV_Charger_Temperature_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_Eaton_HV_Charger_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: IgnitionStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_IgnitionStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: ChargerState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_ChargerState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: FaultSeverityIndicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_FaultSeverityIndicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Accel_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s340_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Accel_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Accel_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s230_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: LVVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s348_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Final value after Linear Sensor Characterization" Unit:V  */

/* Name: LVVolt_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: LVVolt_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s231_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"After conversion to engineering units, before range checking" Unit:V  */

/* Name: Brake_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s356_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Brake_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Brake_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s232_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s360_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01" Help:""   */

/* Name: Vehicle_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s361_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"Sensors | Vehicle Speed" Help:""   */

/* Name: ain_create_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECUP = RESOURCE_NOT_CREATED;

/* Name: dout_create_DOut4296p0004 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut4296p0004 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut4296p0004 = 7;

/* Name: dout_create_DOut177p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut177p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut177p001 = 7;

/* Name: pwm_create_Fan_Pin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_Fan_Pin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_Fan_Pin_PWMOutput = 7;

/* Name: pwm_set_Fan_Pin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_Fan_Pin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_Fan_Pin_PWMOutput = 0;

/* Name: dout_create_DOut178p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut178p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut178p001 = 7;

/* Name: dout_create_DOut179p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut179p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut179p001 = 7;

/* Name: din_create_EStop_Switch_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_EStop_Switch_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_EStop_Switch_Pin = RESOURCE_NOT_CREATED;

/* Name: din_read_EStop_Switch_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_EStop_Switch_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_EStop_Switch_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_create_Reverse_Switch_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Reverse_Switch_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Reverse_Switch_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_Reverse_Switch_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Reverse_Switch_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Reverse_Switch_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_create_Accel_Pedal_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Accel_Pedal_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Accel_Pedal_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_Accel_Pedal_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Accel_Pedal_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Accel_Pedal_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_create_Brake_Pedal_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Brake_Pedal_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Brake_Pedal_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_Brake_Pedal_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Brake_Pedal_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Brake_Pedal_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_create_LV_Voltage_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_LV_Voltage_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_LV_Voltage_Pin = RESOURCE_NOT_CREATED;

/* Name: ain_read_LV_Voltage_Pin ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_LV_Voltage_Pin Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_LV_Voltage_Pin = RESOURCE_NOT_CREATED;

/* Name: mh_EZlink ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:mh_EZlink Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | EZLink" Help:"Debug Variable" */
uint8_T mh_EZlink = 7;

/* Name: MaxQueueDepth ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:uint8_T Struct:MaxQueueDepth Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:3.0
   UpdateID:BACKGND Group:"System | Debug | General | EZLink" Help:"Debug Variable" */
uint8_T MaxQueueDepth = 0;

/* Name: GaugeChain_EZlinkTx ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:GaugeChain_EZlinkTx Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | EZLink" Help:"Debug Variable" */
uint8_T GaugeChain_EZlinkTx = 0;

/* Name: GaugeChain_EZLinkNoPendingTxCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4
   CType:uint32_T Struct:GaugeChain_EZLinkNoPendingTxCounter Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:8.0
   UpdateID:BACKGND Group:"System | Debug | General | EZLink" Help:"Debug Variable" */
uint32_T GaugeChain_EZLinkNoPendingTxCounter = 0;

/* Name: GaugeChain_EZLinkCallbackCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4
   CType:uint32_T Struct:GaugeChain_EZLinkCallbackCounter Mask:FFFFFFFF Gain:1 Offset:0 Exp:1 Format:8.0
   UpdateID:BACKGND Group:"System | Debug | General | EZLink" Help:"Debug Variable" */
uint32_T GaugeChain_EZLinkCallbackCounter = 0;

/* Name: resource_allocation ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:resource_allocation Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | Other" Help:"Debug Variable" */
uint8_T resource_allocation = 7;

/* Name: can_tx_err_CAN_1_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0 = 0;

/* Name: can_tx_err_CAN_2_0 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0 = 0;

/* Name: can_tx_err_CAN_1_0_19 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_19 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_19 = 0;

/* Name: can_tx_err_CAN_2_0_20 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_20 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_20 = 0;

/* Name: can_create_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_1 = 7;

/* Name: protocol_register_CAN_1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:protocol_register_CAN_1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T protocol_register_CAN_1 = 7;

/* Name: can_create_CAN_2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_create_CAN_2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_create_CAN_2 = 7;

#include <Pragma_Section_End_sbss.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
