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

/* Name: hsc_bcm_leakage_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s21_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: hsc_bcm_mainc_enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s136_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | BCM" Help:""   */

/* Name: Flash_Reverse_Lights_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s44_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: RevOut_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s39_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | Reverse | ReverseOut" Help:"Display output in engineering units" Unit:bool  */

/* Name: FanOut_DutyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s53_MinMax1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Fan | FanOut" Help:"Actual duty cycle of actuator" Unit:%  */

/* Name: InhibitDCDC_Out_ ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s40_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | DC/DC | InhibitDCDC_Out" Help:"Display output in engineering units" Unit:bool  */

/* Name: OutCrntCmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s58_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""   */

/* Name: OutVoltCmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s59_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""   */

/* Name: MaxMainsCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s60_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""   */

/* Name: CntrlPltVentReq ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s61_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""  EnumDec:VarDecEnum_8 */

/* Name: ClearErrorLtch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s62_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""   */

/* Name: CAN_Enable ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s63_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | Brusa" Help:""  EnumDec:VarDecEnum_5 */

/* Name: EHPAS_Operating_Mode_Command ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s16_OperatingMode_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EHPAS" Help:""   */

/* Name: EMP_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s79_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EMP Coolant Pump" Help:""   */

/* Name: startCharge ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s143_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Brusa Charger (No Longer Used)" Help:""   */

/* Name: ChargingTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s141_timer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Brusa Charger (No Longer Used)" Help:""   */

/* Name: filteredCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s142_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Brusa Charger (No Longer Used)" Help:""   */

/* Name: ChargingState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s141_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Brusa Charger (No Longer Used)" Help:""  EnumDec:VarDecEnum_9 */

/* Name: Regen_SOCSpd_Ramp_probe_preOVR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s164_Saturation1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Raw_Regen_Tq_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s164_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Coast_Down_Tq_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s164_Product2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|Normal Driving|Regen" Help:""   */

/* Name: Hill_Hold_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s152_HillHoldOn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|HillHold Algorithm" Help:""   */

/* Name: HillHoldPI_Output ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s157_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|HillHold Algorithm|HillHold PI Controller1" Help:""   */

/* Name: HillHold_UQMSpeed_Postfilt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s158_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Drive|HillHold Algorithm|HillHold PI Controller1" Help:""   */

/* Name: In_Reverse ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s195_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Reverse" Help:""   */

/* Name: DC_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors" Help:""   */

/* Name: bcm_alarm ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_alarm Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cpwr_cmd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cpwr_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cpwr_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_epo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_epo Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_gfd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_gfd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_hvil_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_hvil_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ibat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_ibat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mainc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s265_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_ready ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s269_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_soc ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_soc_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_vbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_vbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_done ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_chg_done Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chgc_stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s266_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cool_req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cool_req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cell_tmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_tmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cell_tmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cell_vmax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_vmin ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cell_vmin Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_chga_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chga_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_chga_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_lvbat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_lvbat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_mod_ena ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_mod_ena Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_veh_mon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_veh_mon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_overvolt_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s267_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_cell_undervolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_cell_undervolt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_chg_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_chg_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_chg_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_buf ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_dis_buf Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_dis_max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_dis_max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: bcm_t_coolant ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s248_bcm_t_coolant Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | BCM" Help:""   */

/* Name: AgeCount ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_AgeCount Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:4294967295.000000 Format:8.0 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_TempMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_TempCur ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_TempCur Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Op_State ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_Op_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Fault ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_Fault Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_Input_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EHPAS_Input_Current_NA ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s251_EHPAS_Input_Current_NA Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Pump_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Board_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Board_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Pump_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Speed_Percent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Speed_Percent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Pump_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: EMP_Pump_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s252_EMP_Pump_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EHPAS" Help:""   */

/* Name: Fault_Severity_Indicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Fault_Severity_Indicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s365_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Percent_Torque_Available ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Percent_Torque_Available Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Control_State ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Motor_Control_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Drive_Ready_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Message_Checksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Message_Checksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Message_Counter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Message_Counter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Torque_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s366_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Phase_phase_voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Phase_phase_voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Motor_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Motor_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: DC_Bus_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_DC_Bus_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: DC_Bus_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_DC_Bus_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Inverter_Temperature ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Inverter_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Phase_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Phase_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Isolation_Resistance ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Isolation_Resistance Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Power ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Maximum_Rated_Power Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Maximum_Rated_Speed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: Maximum_Rated_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s254_Maximum_Rated_Torqe Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonController" Help:""   */

/* Name: minTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_minTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollTimer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_scrollTimer Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:0.000000
   Max:327.675000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: scrollIndex ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s229_scrollIndex Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|MiniViewDisplay|GetFaultName" Help:""   */

/* Name: Control_Mode_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s85_ctrlState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonController" Help:""   */

/* Name: Torque_Command_Prb ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s18_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonController" Help:""   */

/* Name: Current_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s92_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Voltage_Limit_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s93_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Falt_Probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s94_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""  EnumDec:VarDecEnum_8 */

/* Name: Charge_Complete_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s95_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: Charge_Enable_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s96_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Actuators | EatonCharger" Help:""   */

/* Name: LowerTorqueLimit ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s110_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Solectria" Help:""   */

/* Name: UpperTorqueLimit ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s110_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Actuators | Solectria" Help:""   */

/* Name: IntStallTorque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s128_Switch1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Addl_Fault_Detection|Traction Drive" Help:""   */

/* Name: Accel_Zeroed_Since_KeyUp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s121_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Diagnostic & Protection" Help:"Accel pedal has been at zero position since key-up" Unit:boolean  */

/* Name: CoolantPumpSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_CoolantPumpSpeed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: motor_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s181_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: RadiatorFanSpeed_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_FanDutyCycle Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: pre_Filter_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s9_Motor_Torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy" Help:""   */

/* Name: InstBattKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstPhxKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstUQMKW ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: KeyCycleKWh_without_12v_dcdc_current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: WhPerMileKeyCycle_without_12v_dcdc_current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Divide3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstVehicleKWUsed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: KeyCycleKWh ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstPhxCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Gain4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: WhPerMileKeyCycle ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Divide Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: InstWhperMile ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s147_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations" Help:""   */

/* Name: Vehicle_Odometer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s146_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations|Odometer" Help:""   */

/* Name: MilesSinceKeyed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s146_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|Calculations|Odometer" Help:""   */

/* Name: EHPAS_PumpState_probe ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s174_PumpState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Control Strategy|EHPAS_PercentControl" Help:""  EnumDec:VarDecEnum_11 */

/* Name: Estop_switch_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s261_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors" Help:""   */

/* Name: Reverse_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s280_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:Boolean  */

/* Name: Reverse_Switch_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s249_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Reverse | Reverse_Switch" Help:"Display output in engineering units" Unit:ADC  */

/* Name: NLG5PwrEn ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_DataTypeConversion Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""  EnumDec:VarDecEnum_5 */

/* Name: NLG5GenErrLtch ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_DataTypeConversion1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""  EnumDec:VarDecEnum_12 */

/* Name: LimByOutCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByOutCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByMainCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByMainCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByNLG5MaxPwr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByNLG5MaxPwr Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByNLG5MaxMainsCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByNLG5MaxMainsCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByPwrInd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByPwrInd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByCntrlPlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByCntrlPlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByTempCap ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByTempCap Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByTempPwrStg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByTempPwrStg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByNLG5MaxOutCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByNLG5MaxOutCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByNLG5MaxOutVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByNLG5MaxOutVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: NLG5GenLimWrng ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_DataTypeConversion2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""  EnumDec:VarDecEnum_13 */

/* Name: LimByBattTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByBattTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: pluggedIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s289_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByTempDiode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByTempDiode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: LimByTempXfrmr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByTempXfrmr Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsActCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsActCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsActVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsActVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutptActVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_OutptActVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutptActCrnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_OutptActCrnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsCrntByCntrlPlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsCrntByCntrlPlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsCrntByPwrInd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsCrntByPwrInd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: NLG5FanActv ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_DataTypeConversion3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""  EnumDec:VarDecEnum_2 */

/* Name: AuxBattVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_AuxBattVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: AhrsByExtShnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_AhrsByExtShnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutptCrntByBstr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_OutptCrntByBstr Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PwrStgTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PwrStgTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempExtrn1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempExtrn1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempExtrn2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempExtrn2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempExtrn3 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempExtrn3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutptOvrVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_OutptOvrVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsOvrVlt2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsOvrVlt2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsOvrVlt1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsOvrVlt1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: EuropeMains ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_EuropeMains Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PwrStgShrtCkt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PwrStgShrtCkt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PlsbltyOutptVltMeas ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PlsbltyOutptVltMeas Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PlsbltyMainsVltMeas ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PlsbltyMainsVltMeas Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutptFuseDefect ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_OutptFuseDefect Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: MainsFuseDefect ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_MainsFuseDefect Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: BattPolarity ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_BattPolarity Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensCap ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensCap Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensPwrStg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensPwrStg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensDiode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensDiode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensXfrmr ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensXfrmr Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: USAMainsL1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_USAMainsL1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensExt1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensExt1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensExt2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensExt2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: TempSensExt3 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_TempSensExt3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: FlashChksmFail ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_FlashChksmFail Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: NVSRAMChksmFail ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_NVSRAMChksmFail Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: EEPROMSysChksmFail ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_EEPROMSysChksmFail Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: EEPROMPOWChksmFail ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_EEPROMPOWChksmFail Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: WatchdogInternal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_WatchdogInternal Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: Initialization ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_Initialization Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CANTimeout ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CANTimeout Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: USAMainsL2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_USAMainsL2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CANOff ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CANOff Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CAN_Xmit ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CAN_Xmit Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CAN_Rcv ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CAN_Rcv Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: ShtdwnThrsBattTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_ShtdwnThrsBattTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: ShtdwnThresBattVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_ShtdwnThresBattVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: ShtdwnThresBattAhrs ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_ShtdwnThresBattAhrs Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: ShtdwnThresChrgTime ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_ShtdwnThresChrgTime Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PwrLimByLowMainsVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PwrLimByLowMainsVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PwrLimByLowBattVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PwrLimByLowBattVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CmdValOutRange ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CmdValOutRange Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: CntrlPltDet ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_CntrlPltDet Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: PwrLimByIntOvrTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_PwrLimByIntOvrTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: BypassDet ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_DataTypeConversion4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""  EnumDec:VarDecEnum_14 */

/* Name: LimByOutVlt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s250_LimByOutVlt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01|Foreground|Sensors|Brusa Charger" Help:""   */

/* Name: OutputVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_OutputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageCounter ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_MessageCounter Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: MessageChecksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_MessageChecksum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: InputCurrentLimitMax ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_InputCurrentLimitMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: EatonpluggedIn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s334_sf_Chart.s290_pluggedIn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Current_Draw_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_InputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: OutputCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_OutputCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Mains_Voltage_Probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_InputVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Eaton_HV_Charger_Temperature_probe ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_Eaton_HV_Charger_Temperature Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: IgnitionStatus ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_IgnitionStatus Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: ChargerState ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_ChargerState Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: FaultSeverityIndicator ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s253_FaultSeverityIndicator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | EatonCharger" Help:""   */

/* Name: Accel_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s375_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Accel_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Accel_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s255_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Accel | Accel_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: LVVolt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s383_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Final value after Linear Sensor Characterization" Unit:V  */

/* Name: LVVolt_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: LVVolt_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s256_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | LVVolt | LVVolt" Help:"After conversion to engineering units, before range checking" Unit:V  */

/* Name: Brake_Pedal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s391_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Final value after Linear Sensor Characterization" Unit:%  */

/* Name: Brake_ADC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s12_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"Singal measured directly from sensor" Unit:ADC  */

/* Name: Brake_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s257_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"Sensors | Brake | Brake_Pedal" Help:"After conversion to engineering units, before range checking" Unit:%  */

/* Name: TimeSinceKeyOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s395_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"BuckyWagon_01" Help:""   */

/* Name: Vehicle_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_BuckyWagon_01 Struct:BuckyWagon_01_B.s396_Merge Mask:FFFFFFFF
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

/* Name: dout_create_DOut4231p0005 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut4231p0005 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut4231p0005 = 7;

/* Name: dout_create_DOut150p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut150p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut150p001 = 7;

/* Name: pwm_create_Fan_Pin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_Fan_Pin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_Fan_Pin_PWMOutput = 7;

/* Name: pwm_set_Fan_Pin_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_Fan_Pin_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_Fan_Pin_PWMOutput = 0;

/* Name: dout_create_DOut151p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut151p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut151p001 = 7;

/* Name: dout_create_DOut152p001 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_DOut152p001 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_DOut152p001 = 7;

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

/* Name: can_tx_err_CAN_1_0_23 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_23 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_23 = 0;

/* Name: can_tx_err_CAN_2_0_24 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_24 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_24 = 0;

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
