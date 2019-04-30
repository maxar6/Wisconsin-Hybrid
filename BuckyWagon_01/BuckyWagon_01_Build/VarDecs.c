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

/* Name: hsc_bcm_epo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s21_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: hsc_bcm_leakage_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s28_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: hsc_bcm_mainc_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s123_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: Flash_Reverse_Lights_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s51_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Reverse" Help:""   */

/* Name: RevOut_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s46_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | Reverse | ReverseOut" Help:"Display output in engineering units" Unit:bool  */

/* Name: FanOut_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s60_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Fan | FanOut" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InhibitDCDC_Out_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s47_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | DC/DC | InhibitDCDC_Out" Help:"Display output in engineering units" Unit:bool  */

/* Name: EHPAS_Operating_Mode_Command ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s23_OperatingMode_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EHPAS" Help:""   */

/* Name: EMP_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s69_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EMP Coolant Pump" Help:""   */

/* Name: EMP_Fan_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s75_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EMP Cooling Fan" Help:""   */

/* Name: Regen_SOCSpd_Ramp_probe_preOVR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s132_Saturation1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Raw_Regen_Tq_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s132_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Coast_Down_Tq_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s132_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: In_Reverse ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s157_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Reverse" Help:""   */

/* Name: DC_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors" Help:""   */

/* Name: bcm_alarm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_alarm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cpwr_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cpwr_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_epo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_epo Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_gfd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_gfd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_hvil_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_hvil_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ibat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_ibat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mainc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s227_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ready ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s231_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_soc ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_soc_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_vbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_done ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_chg_done Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chgc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s228_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cool_req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cool_req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cell_tmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cell_tmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cell_vmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cell_vmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_chga_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_chga_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_lvbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_lvbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mod_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_mod_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_veh_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_veh_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_overvolt_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_undervolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_cell_undervolt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_chg_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_chg_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_dis_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_dis_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_t_coolant ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s210_bcm_t_coolant Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: AgeCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_TempMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempCur ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_TempCur Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Op_State ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_Op_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Fault ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_Fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_Input_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Current_NA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s212_EHPAS_Input_Current_NA Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Board_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Board_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Pump_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Pump_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Speed_Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Speed_Percent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Pump_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Pump_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Pump_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s213_EMP_Pump_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Coolant Pump" Help:""   */

/* Name: EMP_Cooling_Fan_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: EMP_Cooling_Fan_Board_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Board_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: EMP_Cooling_Fan_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Pump_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: EMP_Cooling_Fan_Speed_Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Speed_Percent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: EMP_Cooling_Fan_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Pump_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: EMP_Cooling_Fan_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s214_EMP_Pump_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EMP Cooling Fan" Help:""   */

/* Name: Accurate_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Accurate_Torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Accurate_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Accurate_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Accurate_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Accurate_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Accurate_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Accurate_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Drive_Ready_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Rotor_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Rotor_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Stator_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Stator_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Leg_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Leg_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: High_Bound ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_High_Bound Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Low_Bound ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Low_Bound Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Stall_Safety_Percentage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Stall_Safety_Percentage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Angular_Distance ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Angular_Distance Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Torque_Desired ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Torque_Desired Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Watchdog_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Command_Watchdog_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Status_A ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Status_A Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Software_Release_Sub_Version ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Software_Release_Sub_Version Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Software_Release_Minor_Version ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Software_Release_Minor_Version Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Software_Release_Major_Version ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Software_Release_Major_Version Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Status_C ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Status_C Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Watchdog_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Watchdog_Error Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Motor_Derate ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Derate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Motor_Shutdown ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Shutdown Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Motor_Not_Enabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Not_Enabled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Motor_Not_Enabled_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Not_Enabled_Histroy Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Leg_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Leg_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Leg_Current_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Leg_Current_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Bus_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Bus_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Bus_Current_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Bus_Current_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Phase_Advance ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Phase_Advance Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Phase_Advance_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Phase_Advance_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Under_Voltage_Warning ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Under_Voltage_Warning Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Under_Voltage_Warning_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Under_Voltage_Warning_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Rotor_Over_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Rotor_Over_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Rotor_Over_Temperature_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Rotor_Over_Temperature_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Stator_Over_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Stator_Over_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Stator_Over_Temperature_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Stator_Over_Temperature_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Over_Temperautre ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Over_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Over_Temperature_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Over_Temperature_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Speed_Warning ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Speed_Warning Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Speed_Warning_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Speed_Warning_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Voltage_Warning ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Voltage_Warning Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Voltage_Warning_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Voltage_Warning_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Speed_Alarm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Speed_Alarm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Speed_Alarm_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Speed_Alarm_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Voltage_Alarm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Voltage_Alarm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Over_Voltage_Alarm_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Over_Voltage_Alarm_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: ADC_Calibration_Problem ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_ADC_Calibration_Problem Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: ADC_Calibration_Problem_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_ADC_Calibration_Problem_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Limp_Home_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Limp_Home_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Limp_Home_Mode_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Limp_Home_Mode_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Fault_Occured ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Fault_Occured Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Fault_Occured_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Iverter_Fault_Occured_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Fault ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Inverter_Fault_History ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Inverter_Fault_History Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Forced_Voltage_Control ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Forced_Voltage_Control Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: CAN_Limits_In_Effect ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_CAN_Limits_In_Effect Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: System_Disabled_In_Motrion ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_System_Disabled_In_Motion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: ABC_Phase_Order ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_ABC_Phase_Order Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Regen_Switch_Open ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Regen_Switch_Open Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Current_Transducer_Fault_IbusIleg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Current_Transducer_Fault_IbusIleg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Acceleration_Limited ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Acceleration_Limited Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Using_Raw_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Using_Raw_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Turbo_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Turbo_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Forced_Open_Loop ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Forced_Open_Loop Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Motor_Stalled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Motor_Stalled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Phase_Current_Sensor_Error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Phase_Current_Sensor_Error Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Bad_Position_Signal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Bad_Position_Signal Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Bad_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Bad_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Invalid_Power_Supply ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Invalid_Power_Supply Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: Power_Switches_Off ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s221_Power_Switches_Off Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | UQMController" Help:""   */

/* Name: minTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s191_minTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s191_scrollTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollIndex ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s191_scrollIndex Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: Current_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s78_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Voltage_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s79_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Falt_Probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s80_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""  EnumDec:VarDecEnum_14 */

/* Name: Charge_Complete_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s81_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s82_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: UQM_Enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s94_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | UQM" Help:""   */

/* Name: UQM_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s95_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | UQM" Help:""   */

/* Name: UQM_Direction ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s96_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | UQM" Help:""  EnumDec:VarDecEnum_18 */

/* Name: Counter_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s93_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | UQM | Counter" Help:""   */

/* Name: IntStallTorque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s115_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Diagnostics and Protection" Help:""   */

/* Name: Accel_Zeroed_Since_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s108_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Diagnostic & Protection" Help:"Accel pedal has been at zero position since key-up" Unit:boolean  */

/* Name: motor_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: pre_Filter_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s17_Motor_Torque Mask:FFFFFFFF
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

/* Name: CoolantPumpSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s119_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Cooling" Help:""   */

/* Name: RadiatorFanSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s119_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Cooling" Help:""   */

/* Name: EHPAS_PumpState_probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s139_PumpState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|EHPAS_PercentControl" Help:""  EnumDec:VarDecEnum_13 */

/* Name: Estop_switch_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s223_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors" Help:""   */

/* Name: Reverse_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s242_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: Reverse_Switch_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s211_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:ADC  */

/* Name: OutputVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_OutputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_MessageCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageChecksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_MessageChecksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: InputCurrentLimitMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_InputCurrentLimitMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: EatonpluggedIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s314_pluggedIn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Current_Draw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_InputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: OutputCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_OutputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Voltage_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_InputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Eaton_HV_Charger_Temperature_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_Eaton_HV_Charger_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: IgnitionStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_IgnitionStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: ChargerState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_ChargerState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: FaultSeverityIndicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s215_FaultSeverityIndicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Accel_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s337_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Accel_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s20_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Accel_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s216_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: LVVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s345_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Final value after Linear Sensor Characterization" Unit:V  */

/* Name: LVVolt_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s20_motohawk_ain5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: LVVolt_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s217_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"After conversion to engineering units, before range checking" Unit:V  */

/* Name: Brake_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s353_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Brake_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s20_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Brake_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s218_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s357_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01" Help:""   */

/* Name: Vehicle_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s362_Merge Mask:FFFFFFFF
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

/* Name: dout_create_DOut3919p0004 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut3919p0004 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut3919p0004 = 7;

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

/* Name: can_tx_err_CAN_1_0_27 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_27 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_27 = 0;

/* Name: can_tx_err_CAN_2_0_28 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_28 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_28 = 0;

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
