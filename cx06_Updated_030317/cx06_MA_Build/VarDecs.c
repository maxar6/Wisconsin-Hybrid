#include "Application.h"
#include "cx06_MA.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define rtInf                          (100000000000000000.000000)
#define rtMinusInf                     (-100000000000000000.000000)

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>
#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: In_ACPres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s17_motohawk_ain1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: In_CruiseButtons ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s18_motohawk_ain2_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: raw_CruiseButton ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s18_motohawk_ain2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Cruise Buttons" Help:""   */

/* Name: raw_Accel1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_motohawk_ain4_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Accel" Help:""   */

/* Name: raw_Accel2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_motohawk_ain1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Accel" Help:""   */

/* Name: In_Accel2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_motohawk_ain1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: cal_Accel1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Accel" Help:""   */

/* Name: cal_Accel2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_Saturation1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Accel" Help:""   */

/* Name: cal_Accel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_Accel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Accel" Help:""   */

/* Name: In_Accel1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s25_motohawk_ain4_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: In_Brake ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_motohawk_ain2_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: In_BrakeBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_motohawk_ain6_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: raw_BrakeBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_motohawk_ain6_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Brake" Help:""   */

/* Name: cal_BrakeBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_BrakeBackup Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Brake" Help:""   */

/* Name: raw_Brake ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_motohawk_ain2_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Brake" Help:""   */

/* Name: cal_Brake ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s26_Brake Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Brake" Help:""   */

/* Name: In_Clutch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_motohawk_ain3_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: In_ClutchBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_motohawk_ain5_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: raw_ClutchBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_motohawk_ain5_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Clutch" Help:""   */

/* Name: cal_ClutchBackup ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_ClutchBackup Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Clutch" Help:""   */

/* Name: raw_Clutch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_motohawk_ain3_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Clutch" Help:""   */

/* Name: cal_Clutch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s27_Clutch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Driver Inputs|Clutch" Help:""   */

/* Name: In_FuelLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s20_motohawk_ain3_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: raw_FuelLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s20_motohawk_ain3_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Fuel Level" Help:""   */

/* Name: cal_FuelLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s20_Fuel_Level Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Fuel Level" Help:""   */

/* Name: raw_filtMAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s21_WeightedMovingAverage Mask:FFFFFFFF
   Gain:0.01 Offset:0.0 Exp:1.0 Min:-1000000000000000.000000
   Max:1000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|MAF" Help:""   */

/* Name: cal_MAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s21_MAF Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|MAF" Help:""   */

/* Name: raw_MAF ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s21_motohawk_frequency_in Mask:FFFFFFFF
   Gain:0.01 Offset:0.0 Exp:1.0 Min:0.000000
   Max:42949672.950000 Format:8.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|MAF" Help:""   */

/* Name: cal_Neutral ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s22_Neutral Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Trans Inputs" Help:""  EnumDec:VarDecEnum_0 */

/* Name: cal_Reverse ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s22_Reverse Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Analog Inputs|Trans Inputs" Help:""  EnumDec:VarDecEnum_0 */

/* Name: Err_Reverse ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s22_motohawk_din1_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: Err_Neutral ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s22_motohawk_din_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: CAN_EWARN1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s11_CAN_EWARN1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Drive-by-Wire CAN Input" Help:""   */

/* Name: Output1_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s11_Output1_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Drive-by-Wire CAN Input" Help:""   */

/* Name: CAN_EWARN2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s11_CAN_EWARN2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Drive-by-Wire CAN Input" Help:""   */

/* Name: Output2_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s11_Output2_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Drive-by-Wire CAN Input" Help:""   */

/* Name: Eng_Spd_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Spd_V_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Acel_Grad_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Grad_V_h Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Torq_Driver_Reqest_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Driver_Reqest_V_h Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Max_Drag_Torq_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Max_Drag_Torq_V_i Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Torq_Max_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Max_V_g Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Idle_Spd_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Idle_Spd_V_c Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Torq_Actual ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Actual Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Request Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Max_Drag_Torq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Max_Drag_Torq Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Max Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Brake_Ped_Switch_Active_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Brake_Ped_Switch_Active_V_n Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Idle_Spd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Idle_Spd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Throt_Pos_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Throt_Pos_V_d Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Base_Target_Eng_Idle_Spd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Base_Target_Eng_Idle_Spd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Airflow_Backup_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Airflow_Backup_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Throt_Control_Operat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Throt_Control_Operat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Crankshaft_Backup_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Crankshaft_Backup_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Allowed_Clutch_Adapt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Allowed_Clutch_Adapt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PwrTrn_Brk_Ped_Sec_In_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In_V_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Acel_Effect_Pos_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Effect_Pos_V_g Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Part_Filter_Clean_Alg_Active ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Part_Filter_Clean_Alg_Active Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PwrTrn_Brk_Ped_In_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PwrTrn_Brk_Ped_In_V_h Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Boost_Pres_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Boost_Pres_V_p Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Torq_Actual_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Actual_V_b Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Baro_Pres_Abs_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Baro_Pres_Abs_V_j Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Fuel_Inj_Roll_Cnt_Reset_Occured ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Fuel_Inj_Roll_Cnt_Reset_Occured Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Limp_Home_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Limp_Home_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Reduction_Failed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Reduction_Failed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Fail_Code_Retrieval_Required ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Fail_Code_Retrieval_Required Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Generator_Failed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Generator_Failed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Brake_Ped_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Brake_Ped_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Cruise_Control_Clutch_Switch ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Cruise_Control_Clutch_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Cruise_Control_Active ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Cruise_Control_Active Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Running_Stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Running_Stat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Acel_Actual_Pos_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Actual_Pos_V_e Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_2 */

/* Name: Warm_Up_Shift_Pattern_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Warm_Up_Shift_Pattern_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Rough_Road ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Rough_Road Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Warm_Up_Cycle_Achieved ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Warm_Up_Cycle_Achieved Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Service_Eng_Non_Emission ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Service_Eng_Non_Emission Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Cruise_Control_Throt_Cmd_Stat ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Cruise_Control_Throt_Cmd_Stat Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PwrTrn_Brk_Ped_Sec_In ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PwrTrn_Brk_Ped_Sec_In Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PrwTrn_Brk_Ped_In ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PrwTrn_Brk_Ped_In Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Oil_Lvl_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Oil_Lvl_Low Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Oil_Pres_Low ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Oil_Pres_Low Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Accel_Kick_Down ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Accel_Kick_Down Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Spd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Spd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Glow_Plug ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Glow_Plug Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PrwTrn_Crank ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PrwTrn_Crank Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Trans_Emission_DTC_Stored ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Trans_Emission_DTC_Stored Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Tract_Control_Req_Failed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Tract_Control_Req_Failed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Trans_Req_Failed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Trans_Req_Failed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Fuel_Inj_Roll_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Fuel_Inj_Roll_Cnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Fuel_Lvl_Sensor_Unprocessed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Emissions_Malfunction ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Emissions_Malfunction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Cruise_Control_Enabled ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Cruise_Control_Enabled Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Coast_Limit_Slip ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Coast_Limit_Slip Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Acel_Effect_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Effect_Pos Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Oil_Change_Now ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Oil_Change_Now Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Oil_Change_Soon ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Oil_Change_Soon Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Coast_Fuel_Cut_Off_Active ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Coast_Fuel_Cut_Off_Active Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Torq_Cruise_Control_Req_Failed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Torq_Cruise_Control_Req_Failed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: AC_Ref_Hi_Side_Pres_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_AC_Ref_Hi_Side_Pres_V_p Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Veh_Spd_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Veh_Spd_V_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: PwrTrn_Hi_Elect_Load_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PwrTrn_Hi_Elect_Load_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Aply_Brk_Pedal_Ind ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Aply_Brk_Pedal_Ind Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Check_Fuel_Cap ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Check_Fuel_Cap Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Recommend_Shft ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Recommend_Shft Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Acel_Grad ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Grad Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_H20_In_Fuel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_H20_In_Fuel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Boost_Pres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Boost_Pres Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Oil_Remaining_Life ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Oil_Remaining_Life Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Prod_Option_Ident ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Prod_Option_Ident Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Fan_Spd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Fan_Spd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Gear_Shift_Inh_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Gear_Shift_Inh_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Jerk_Shift_Pattern_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Jerk_Shift_Pattern_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Ntral_Control_Inh_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Ntral_Control_Inh_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Reduce_Prf_Shft_Ptrn_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Reduce_Prf_Shft_Ptrn_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Throt_Progression ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Throt_Progression Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Throt_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Throt_Pos Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: PwrTrn_Part_FilterWarning ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_PwrTrn_Part_FilterWarning Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Baro_Pres_Abs ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Baro_Pres_Abs Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Lft_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Lft_V_n Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: AC_Comp_Clutch_Engaged ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_AC_Comp_Clutch_Engaged Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: AC_Comp_Stroke_Req ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_AC_Comp_Stroke_Req_e Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""  EnumDec:VarDecEnum_3 */

/* Name: AC_Off_Ind ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_AC_Off_Ind Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: AC_Ref_Hi_Side_Pres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_AC_Ref_Hi_Side_Pres Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Rht_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Rht_V_n Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Coolant_Temp_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Coolant_Temp_V_e Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Intake_Air_Temp_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Intake_Air_Temp_V_c Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Acel_Actual_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Acel_Actual_Pos Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Lft_Reset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Lft_Reset Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Rht_Reset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Rht_Reset Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Veh_Spd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Veh_Spd Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Lft ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Lft Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Dist_Roll_Cnt_Rht ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Dist_Roll_Cnt_Rht Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Fuel_Lvl_Sensor_Unprocessed_Value_V ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Fuel_Lvl_Sensor_Unprocessed_Value_V_l Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input | Validities" Help:""  EnumDec:VarDecEnum_1 */

/* Name: Eng_Coolant_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Coolant_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: Eng_Intake_Air_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Eng_Intake_Air_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Fiat CAN Input" Help:""   */

/* Name: FL_Wheel_Vel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_FL_Wheel_Vel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: FL_Wheel_Valid ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_FL_Wheel_Valid Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: RunCrank_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_RunCrank_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: Acc_Status ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_Acc_Status Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: Park_Brake ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_Park_Brake Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: FR_Wheel_Vel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_FR_Wheel_Vel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: FR_Wheel_Valid ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_FR_Wheel_Valid Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: RL_Wheel_Vel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_RL_Wheel_Vel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: RL_Wheel_Valid ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_RL_Wheel_Valid Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: RR_Wheel_Vel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_RR_Wheel_Vel Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: RR_Wheel_Valid ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_RR_Wheel_Valid Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: AC_Clutch_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_AC_Clutch_Req Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: System_Power_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s13_System_Power_Mode Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|GMLAN Inputs" Help:""   */

/* Name: TorqueDelivered ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_TorqueDelivered Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCCurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCCurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: EncoderError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_EncoderError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: OverVoltageError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_OverVoltageError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: UnderVoltageError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_UnderVoltageError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: OverCurrentACError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_OverCurrentACError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MotorOverTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MotorOverTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: InverterOverTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_InverterOverTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: OverSpeedError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_OverSpeedError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: vehicle_speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s49_Divide Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: UnreasonableLimits ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_UnreasonableLimits Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: EPOLineError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_EPOLineError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCVoltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCVoltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: SensorOutOfRange ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_SensorOutOfRange Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: VoltageLimitationactive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_VoltageLimitationactive Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: CurrentLimitiationactive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_CurrentLimitiationactive Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: PullOutTorqueProtectionactive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_PullOutTorqueProtectionactive Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: PeakLevelOverflow ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_PeakLevelOverflow Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Paritybitphasecurrent ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_Paritybitphasecurrent Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: PhaseCurrentPeakValue ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_PhaseCurrentPeakValue Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MaxTorqueavailable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MaxTorqueavailable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUReadytoGo ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUReadytoGo Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUHardwareSoftwareError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUHardwareSoftwareError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MotorSpeed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MotorSpeed Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUSpeedErrorTrackMissing ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUSpeedErrorTrackMissing Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUSpeedErrorSpeedJump ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUSpeedErrorSpeedJump Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: ErrorinErrorStore ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_ErrorinErrorStore Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: SupplyLineLowError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_SupplyLineLowError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUOn ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUOn Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Sw_Ver ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_Sw_Ver Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: IPT_Ser_Num ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_IPT_Ser_Num Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Gear_Ratio ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_Gear_Ratio Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Oil_Pressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_Oil_Pressure Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Motor_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_Motor_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCUReady ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCUReady Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: MCU_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_MCU_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: LV_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_LV_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: LV_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_LV_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: HV_DCDC_Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_HV_DCDC_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_GenError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_GenError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_HV_Over_I ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_HV_Over_I Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_HV_Over_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_HV_Over_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_LV_Over_I_Buck ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_LV_Over_I_Buck Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_LV_Under_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_LV_Under_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_LV_Over_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_LV_Over_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DeratedOperation ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DeratedOperation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_LV_Over_I_Boost ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_LV_Over_I_Boost Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Temp_Reduction ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Temp_Reduction Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Buck ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Buck Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Boost ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Boost Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Reduce_Buck ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Reduce_Buck Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Reduce_Boost ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Reduce_Boost Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_CAN_Err ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_CAN_Err Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Meas_Err ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Meas_Err Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_OverTemp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_OverTemp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_90I2t ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_90I2t Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: EDriveSystemError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_EDriveSystemError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Break ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Break Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_3x_En ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_3x_En Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_0C ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_0C Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_HV_Under_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_HV_Under_V Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_HW_Err ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_HW_Err Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: DCDC_Err_in_Store ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_DCDC_Err_in_Store Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: CANError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_CANError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: EmergencyShutdown ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_EmergencyShutdown Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: OverCurrentIGBTError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_OverCurrentIGBTError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: LubeAnalError ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s14_LubeAnalError Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|IPT CAN Input" Help:""   */

/* Name: Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s15_Voltage Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|JCI CAN Input" Help:""   */

/* Name: Current ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s15_Current Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|JCI CAN Input" Help:""   */

/* Name: Batt_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s15_Batt_Temp Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|JCI CAN Input" Help:""   */

/* Name: SOC ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s50_SOC Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|JCI CAN Input" Help:""   */

/* Name: Temp_1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPre_ECM_Er_Code ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_ECM_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""  EnumDec:VarDecEnum_4 */

/* Name: NOxPre_NOx ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_NOx Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPre_O2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_O2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NoxMid_ECM_Er_Code ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NoxMid_ECM_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""  EnumDec:VarDecEnum_4 */

/* Name: NOxMid_NOx ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxMid_NOx Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxMid_O2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxMid_O2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxMid_CANOpen_Er_Code ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxMid_CANOpen_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxMid_CANOpen_Er_Reg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxMid_CANOpen_Er_Reg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NoxPost_ECM_Er_Code ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NoxPost_ECM_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""  EnumDec:VarDecEnum_4 */

/* Name: NOxPost_NOx ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPost_NOx Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_3 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPost_O2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPost_O2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPost_CANOpen_Er_Code ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPost_CANOpen_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPost_CANOpen_Er_Reg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPost_CANOpen_Er_Reg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPre_ECM_Er_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_ECM_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxMid_ECM_Er_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NoxMid_ECM_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_4 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_4 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_5 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_5 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_6 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_7 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Temp_8 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_Temp_8 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPre_CANOpen_Er_Code ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_CANOpen_Er_Code Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: NOxPre_CANOpen_Er_Reg ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s16_NOxPre_CANOpen_Er_Reg Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Inputs|Urea Inputs" Help:""   */

/* Name: Current_Derivative_Front_Left ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s393_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control|Wheel_Acceleration" Help:""   */

/* Name: Current_Derivative_Front_Right ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s394_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control|Wheel_Acceleration" Help:""   */

/* Name: Current_Derivative_Rear_Left ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s395_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control|Wheel_Acceleration" Help:""   */

/* Name: Current_Derivative_Rear_Right ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s396_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control|Wheel_Acceleration" Help:""   */

/* Name: after_saturation ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s381_motor_Torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Regen" Help:""   */

/* Name: speed_ramp_out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s408_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Regen" Help:""   */

/* Name: Dir_Component ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s378_Sum7 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|HEV" Help:""   */

/* Name: AT_TLevel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s403_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|HEV|AssistedTakeOff" Help:""   */

/* Name: HVAC_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s363_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|A/C Control Code" Help:""   */

/* Name: AC_Pressure ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s17_AC_Pres Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|A/C Control Code" Help:""   */

/* Name: Pres_In_Range ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s367_activate Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|A/C Control Code" Help:""   */

/* Name: Estimated_Gear ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s369_Add1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Fiat/GMLAN Control Code" Help:""   */

/* Name: Exp_Neutral_Fault ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s370_LogicalOperator1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Fiat/GMLAN Control Code" Help:""   */

/* Name: Gear ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s368_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-128.000000
   Max:127.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Fiat/GMLAN Control Code|Gear Calc" Help:""   */

/* Name: Hybrid_State ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_hybrid_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""  EnumDec:VarDecEnum_5 */

/* Name: motor_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_motor_torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""   */

/* Name: motor_Enable ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_motor_Enable Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""  EnumDec:VarDecEnum_7 */

/* Name: diesel_Torque ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_engine_Torque Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""   */

/* Name: eng_Kill ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_engine_kill Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""  EnumDec:VarDecEnum_0 */

/* Name: eng_Start ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_engine_start Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""  EnumDec:VarDecEnum_0 */

/* Name: EBrake_Multiplier ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s376_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.1 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""   */

/* Name: EBrake_Offset ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s376_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""   */

/* Name: Motor_Torque_Pre_Filt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s365_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code" Help:""   */

/* Name: Sport_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s373_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Accel Through Shifts" Help:""   */

/* Name: AT_Active ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s390_active Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Assisted Take-off" Help:""  EnumDec:VarDecEnum_0 */

/* Name: Front_Slip ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s375_Front_Slip Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control" Help:""   */

/* Name: Rear_Slip ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s375_LogicalOperator3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Activation of Traction Control" Help:""   */

/* Name: KillDelay_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_KillDelay_Cnt Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:-500000000000000.000000
   Max:500000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: Kill_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_Kill_Cnt Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:-500000000000000.000000
   Max:500000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: StartDelay_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_StartDelay_Cnt Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:-500000000000000.000000
   Max:500000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: StartRetryDelay_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_StartRetryDelay_Cnt Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:-500000000000000.000000
   Max:500000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: Engine_Running ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s398_running Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""  EnumDec:VarDecEnum_0 */

/* Name: StartRetry_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_StartRetry_Cnt Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: Start_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_Start_Cnt Mask:FFFFFFFF
   Gain:0.005 Offset:0.0 Exp:1.0 Min:-500000000000000.000000
   Max:500000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: Eng_Glow_Plug_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s12_Glow_Plug Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""   */

/* Name: ESS_State ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.root_ESS_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Engine Start-Stop" Help:""  EnumDec:VarDecEnum_10 */

/* Name: Filt_Accel ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s380_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Ramp_In_Pt" Help:""   */

/* Name: Ramp_In_Pt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s380_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Ramp_In_Pt" Help:""   */

/* Name: SOC_Component ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s380_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Ramp_In_Pt" Help:""   */

/* Name: Pedal_Component ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s380_MinMax Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Ramp_In_Pt" Help:""   */

/* Name: TC_Floater ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s380_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Ramp_In_Pt" Help:""   */

/* Name: front_max_torque_aval ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s384_Saturation2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Traction Control" Help:""   */

/* Name: rear_max_torque_aval ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s384_rear_max_torque_aval Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Traction Control" Help:""   */

/* Name: TC_Indictator ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s384_TC_Active Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|Traction Control" Help:""  EnumDec:VarDecEnum_11 */

/* Name: Sustain_Brake ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s413_SB Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|sustain Brake" Help:""  EnumDec:VarDecEnum_0 */

/* Name: Sustain_Brake_Level ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s388_Product Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Hybrid Control Code|sustain Brake" Help:""   */

/* Name: NOx_MFlow_Theory ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s366_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: Urea_MFlow ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s366_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: Solution_MFlow ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s366_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: UreaInj_Freq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s366_Inj_Freq Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: Dosing_Freq ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s416_Switch2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:1.3 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: Urea_OK_Eng_Kill ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s416_LogicalOperator2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.1 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code" Help:""   */

/* Name: Dosing_Cnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s416_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|Dosing_Alg" Help:""   */

/* Name: Ammonia ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s420_Ammonia Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|LeanRich" Help:""  EnumDec:VarDecEnum_0 */

/* Name: LeanRichMult ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s420_mult Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|LeanRich" Help:""   */

/* Name: LeanRichState ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s420_State Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|LeanRich" Help:""  EnumDec:VarDecEnum_12 */

/* Name: LeanCnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s420_LeanCnt Mask:FFFFFFFF
   Gain:0.05 Offset:0.0 Exp:1.0 Min:0.000000
   Max:3276.750000 Format:1.1 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|LeanRich" Help:""   */

/* Name: RichCnt ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s420_RichCnt Mask:FFFFFFFF
   Gain:0.05 Offset:0.0 Exp:1.0 Min:0.000000
   Max:3276.750000 Format:1.1 UpdateID:BACKGND Group:"cx06_MA|Strategy|Urea Control Code|LeanRich" Help:""   */

/* Name: engineKill ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s92_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: engineStart ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s93_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: AC_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s363_AC_On Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: UreaTimeSinceInj ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s75_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: AC_Clutch_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s94_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: AC_Fan_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s95_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs" Help:""   */

/* Name: KevOBox_State ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s102_state Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs|Backup_Relay_Control" Help:""  EnumDec:VarDecEnum_14 */

/* Name: Timer ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s103_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs|Backup_Relay_Control" Help:""   */

/* Name: Nav_Cnt_Seconds ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s91_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Analog Outputs|Nav Sys Timer" Help:""   */

/* Name: Output_1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s126_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Drive-by-Wire CAN Output" Help:""   */

/* Name: Reset_AO1 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s125_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Drive-by-Wire CAN Output" Help:""   */

/* Name: Reset_AO2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s127_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Drive-by-Wire CAN Output" Help:""   */

/* Name: Output_2 ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s128_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Drive-by-Wire CAN Output" Help:""   */

/* Name: AO_Checksum ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s124_BitwiseOperator6 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Drive-by-Wire CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_FL_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s142_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_FL ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s143_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_FR_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s144_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_FR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s145_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_RL_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s146_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_RL ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s147_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_RR_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s148_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Wheel_Ang_Vel_RR ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s149_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|Fiat CAN Output" Help:""   */

/* Name: Torque_Act ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s208_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Engine_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s184_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Actual_Gear ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s192_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Cmd_Gear ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s193_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Gear_Sel_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s194_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Veh_Speed ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s198_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Acc_Eff_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s195_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Acc_Act_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s204_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Throttle_Pos ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s205_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Throttle_Cmd ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s206_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Torque_Req ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s175_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Torque_Max ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s176_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Torque_Min ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s177_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Fuel_Level ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s188_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs" Help:""   */

/* Name: Bat_Lvl_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s168_Sum1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs|Fuel/SOC_Gage_Conditioning" Help:""   */

/* Name: Fuel_Lvl_Out ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s210_Switch Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs|Fuel/SOC_Gage_Conditioning" Help:""   */

/* Name: Delay_Count ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s168_Saturation Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|GMLAN Outputs|Fuel/SOC_Gage_Conditioning" Help:""   */

/* Name: In_Drive ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s299_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: VCU_Off ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s298_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Boost_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s293_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: DCDC_Enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s294_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Boost_Mode ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s295_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Filt_Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s291_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Disable_AntiShudder ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s297_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Enable_MCU ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s292_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Torque_Request ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s80_Torque_Request Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Buck_V ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s304_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Below_Thres_Comparison ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s290_RelationalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output|MCU_Management" Help:""   */

/* Name: Cnt_Seconds ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s290_Gain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output|MCU_Management" Help:""   */

/* Name: Max_DC_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s300_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Min_DC_Voltage ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s301_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Max_DC_Motor_I ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s302_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Max_DC_Gen_I ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s303_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|IPT CAN Output" Help:""   */

/* Name: Contactor_Enable ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s333_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Contactor_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s334_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: BMS_Standby ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s335_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Charger_Ready ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s336_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Emergency_Contactor_Off ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s337_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Quit_Batt_Locked ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s338_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Ambient_Temp ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s339_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: Air_Pres ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s340_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:4.2 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: ISO_On ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s342_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255.000000 Format:3.0 UpdateID:BACKGND Group:"cx06_MA|Outputs|JCI CAN Output" Help:""   */

/* Name: EStop_Cal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"cx06_MA|MainState" Help:""   */

/* Name: In_EStop ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_LogicalOperator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:1.000000 Format:1.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: ECUP_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_motohawk_ain5_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|MainState" Help:""   */

/* Name: In_ECUP ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_motohawk_ain5_o2 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"Debug | Inputs" Help:""   */

/* Name: DRVP_Raw ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_motohawk_ain1_o1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:5.0 UpdateID:BACKGND Group:"cx06_MA|MainState" Help:""   */

/* Name: DRVP_Cal ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s4_Gain Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:2.1 UpdateID:BACKGND Group:"cx06_MA|MainState" Help:""   */

/* Name: effect ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s2_Sum3 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: error ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s2_Sum Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: duty ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:SINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s7_Merge Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-32768.000000
   Max:32767.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: ain ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT2 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s2_motohawk_ain1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:65535.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: Ipart ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s2_DiscreteTimeIntegrator Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: Ppart ClassID:VAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:REAL4 CType:BlockIO_cx06_MA Struct:cx06_MA_B.s2_Product1 Mask:FFFFFFFF
   Gain:1.0 Offset:0.0 Exp:1.0 Min:-100000000000000000.000000
   Max:100000000000000000.000000 Format:3.3 UpdateID:BACKGND Group:"cx06_MA|Fiat Accel Control" Help:""   */

/* Name: dout_create_INJ1D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ1D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ1D = 7;

/* Name: dout_create_INJ2D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ2D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ2D = 7;

/* Name: dout_create_AC_Clutch ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_AC_Clutch Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_AC_Clutch = 7;

/* Name: dout_create_AC_Fan ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_AC_Fan Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_AC_Fan = 7;

/* Name: dout_create_Urea_Power ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_Urea_Power Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_Urea_Power = 7;

/* Name: dout_create_INJ8D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ8D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ8D = 7;

/* Name: dout_create_INJ6D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ6D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ6D = 7;

/* Name: dout_create_INJ3D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ3D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ3D = 7;

/* Name: dout_create_INJ10D ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_INJ10D Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_INJ10D = 7;

/* Name: dout_create_MPRD ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:dout_create_MPRD Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DiscreteOut" Help:"Debug Variable" */
uint8_T dout_create_MPRD = 7;

/* Name: ain_create_AC_Pres ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_AC_Pres Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_AC_Pres = RESOURCE_NOT_CREATED;

/* Name: ain_read_AC_Pres ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_AC_Pres Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_AC_Pres = RESOURCE_NOT_CREATED;

/* Name: ain_create_CruiseButtons ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_CruiseButtons Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_CruiseButtons = RESOURCE_NOT_CREATED;

/* Name: ain_read_CruiseButtons ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_CruiseButtons Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_CruiseButtons = RESOURCE_NOT_CREATED;

/* Name: ain_create_Accel1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Accel1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Accel1 = RESOURCE_NOT_CREATED;

/* Name: ain_read_Accel1 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Accel1 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Accel1 = RESOURCE_NOT_CREATED;

/* Name: ain_create_Accel2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Accel2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Accel2 = RESOURCE_NOT_CREATED;

/* Name: ain_read_Accel2 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Accel2 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Accel2 = RESOURCE_NOT_CREATED;

/* Name: ain_create_Brake ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Brake Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Brake = RESOURCE_NOT_CREATED;

/* Name: ain_read_Brake ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Brake Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Brake = RESOURCE_NOT_CREATED;

/* Name: ain_create_BrakeBackUp ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_BrakeBackUp Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_BrakeBackUp = RESOURCE_NOT_CREATED;

/* Name: ain_read_BrakeBackUp ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_BrakeBackUp Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_BrakeBackUp = RESOURCE_NOT_CREATED;

/* Name: ain_create_Clutch ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_Clutch Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_Clutch = RESOURCE_NOT_CREATED;

/* Name: ain_read_Clutch ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_Clutch Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_Clutch = RESOURCE_NOT_CREATED;

/* Name: ain_create_ClutchBackup ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ClutchBackup Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ClutchBackup = RESOURCE_NOT_CREATED;

/* Name: ain_read_ClutchBackup ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ClutchBackup Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ClutchBackup = RESOURCE_NOT_CREATED;

/* Name: ain_create_FuelLevel ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_FuelLevel Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_FuelLevel = RESOURCE_NOT_CREATED;

/* Name: ain_read_FuelLevel ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_FuelLevel Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_FuelLevel = RESOURCE_NOT_CREATED;

/* Name: freq_in_create_MAF_Input ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_create_MAF_Input Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_create_MAF_Input = 7;

/* Name: freq_in_read_MAF_Input ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:freq_in_read_MAF_Input Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | FrequencyIn" Help:"Debug Variable" */
uint8_T freq_in_read_MAF_Input = 7;

/* Name: din_create_Neutral ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_Neutral Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_Neutral = RESOURCE_NOT_CREATED;

/* Name: din_read_Neutral ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_Neutral Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_Neutral = RESOURCE_NOT_CREATED;

/* Name: din_create_Reverse ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_Reverse Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_Reverse = RESOURCE_NOT_CREATED;

/* Name: din_read_Reverse ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_Reverse Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_Reverse = RESOURCE_NOT_CREATED;

/* Name: pwm_create_EST6_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_EST6_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_EST6_PWMOutput = 7;

/* Name: pwm_set_EST6_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_EST6_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_EST6_PWMOutput = 0;

/* Name: pwm_create_IPT_EPO_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_IPT_EPO_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_IPT_EPO_PWMOutput = 7;

/* Name: pwm_set_IPT_EPO_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_IPT_EPO_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_IPT_EPO_PWMOutput = 0;

/* Name: din_create_ESTOP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_create_ESTOP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_create_ESTOP = RESOURCE_NOT_CREATED;

/* Name: din_read_ESTOP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:din_read_ESTOP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | DigitalInput" Help:"Debug Variable" */
uint8_T din_read_ESTOP = RESOURCE_NOT_CREATED;

/* Name: ain_create_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_read_ECUP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_ECUP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_ECUP = RESOURCE_NOT_CREATED;

/* Name: ain_create_DRVP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_DRVP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_DRVP = RESOURCE_NOT_CREATED;

/* Name: ain_read_DRVP ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_DRVP Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_DRVP = RESOURCE_NOT_CREATED;

/* Name: ain_create_AN10M ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_AN10M Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_AN10M = RESOURCE_NOT_CREATED;

/* Name: ain_read_AN10M ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_AN10M Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_AN10M = RESOURCE_NOT_CREATED;

/* Name: pwm_create_INJ5D_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_INJ5D_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_INJ5D_PWMOutput = 7;

/* Name: pwm_set_INJ5D_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_INJ5D_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_INJ5D_PWMOutput = 0;

/* Name: pwm_create_INJ11D_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_create_INJ11D_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_create_INJ11D_PWMOutput = 7;

/* Name: pwm_set_INJ11D_PWMOutput ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:pwm_set_INJ11D_PWMOutput Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | PWM" Help:"Debug Variable" */
uint8_T pwm_set_INJ11D_PWMOutput = 0;

/* Name: ain_create_AN11M ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_create_AN11M Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_create_AN11M = RESOURCE_NOT_CREATED;

/* Name: ain_read_AN11M ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:ain_read_AN11M Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | AnalogIn" Help:"Debug Variable" */
uint8_T ain_read_AN11M = RESOURCE_NOT_CREATED;

/* Name: oneshot_create_Urea_Injector ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:oneshot_create_Urea_Injector Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | OneShot" Help:"Debug Variable" */
uint8_T oneshot_create_Urea_Injector = 7;

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

/* Name: can_tx_err_CAN_1_0_33 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_1_0_33 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_1_0_33 = 0;

/* Name: can_tx_err_CAN_2_0_34 ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:E_NativeFWError Struct:can_tx_err_CAN_2_0_34 Mask:FFFFFFFF EnumDec:E_NativeFWError
   UpdateID:BACKGND Group:"System | Debug | Resources | CAN" Help:"Debug Variable" */
uint8_T can_tx_err_CAN_2_0_34 = 0;

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
