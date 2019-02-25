#ifndef COMMON_INCLUDE_H
#define COMMON_INCLUDE_H

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include <stdlib.h>
#include <string.h>
#include <typedefn.h>
#include <rtwtypes.h>

/*---- TYPEDEFS -------------------------------------------------------------------------------------------*/

/* index_T used for prelookup index/fraction values */
typedef uint16_T index_T;

#include "MotoCoder.h"

/* fault_T used as an index to reference a Fault */
typedef uint32_T fault_T;

/* DataStorage uses matrix types for each built-in type */
typedef struct {
  uint32_T numCols;
  real_T data[1];
} matrix_real_T;

typedef struct {
  uint32_T numCols;
  real32_T data[1];
} matrix_real32_T;

typedef struct {
  uint32_T numCols;
  int8_T data[1];
} matrix_int8_T;

typedef struct {
  uint32_T numCols;
  uint8_T data[1];
} matrix_uint8_T;

typedef struct {
  uint32_T numCols;
  int16_T data[1];
} matrix_int16_T;

typedef struct {
  uint32_T numCols;
  uint16_T data[1];
} matrix_uint16_T;

typedef struct {
  uint32_T numCols;
  int32_T data[1];
} matrix_int32_T;

typedef struct {
  uint32_T numCols;
  uint32_T data[1];
} matrix_uint32_T;

typedef struct {
  uint32_T numCols;
  boolean_T data[1];
} matrix_boolean_T;

typedef struct {
  uint32_T numCols;
  reference_T data[1];
} matrix_reference_T;

typedef struct {
  uint32_T numCols;
  struct_reference_T data[1];
} matrix_struct_reference_T;

/*---- CUSTOM TYPEDEF CODE ---------------------------------------------------------------------------------*/
#define TripAmoHoursOut_Prb_DataStore() (BatteryController_Rev1_B.s90_Sum1)
#define TripAmoHoursOut_Prb_DataStore_ELEMS() (1)
#define TripAmoHoursOut_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s90_Sum1)
#define TripAmoHoursOut_Prb_DataStore_ROWS() (1)
#define TripAmoHoursOut_Prb_DataStore_COLS() (1)
#define BatteryVoltage_Prb_DataStore() (BatteryController_Rev1_B.s52_Merge)
#define BatteryVoltage_Prb_DataStore_ELEMS() (1)
#define BatteryVoltage_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s52_Merge)
#define BatteryVoltage_Prb_DataStore_ROWS() (1)
#define BatteryVoltage_Prb_DataStore_COLS() (1)
#define BatteryCurrent_prb_DataStore() (BatteryController_Rev1_B.s21_Merge)
#define BatteryCurrent_prb_DataStore_ELEMS() (1)
#define BatteryCurrent_prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s21_Merge)
#define BatteryCurrent_prb_DataStore_ROWS() (1)
#define BatteryCurrent_prb_DataStore_COLS() (1)
#define BusVoltage_Prb_DataStore()     (BatteryController_Rev1_B.s52_Merge)
#define BusVoltage_Prb_DataStore_ELEMS() (1)
#define BusVoltage_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s52_Merge)
#define BusVoltage_Prb_DataStore_ROWS() (1)
#define BusVoltage_Prb_DataStore_COLS() (1)
#define MaximumDischargePower_Continuos_Prb_DataStore() (BatteryController_Rev1_B.s87_motohawk_interpolation_2d)
#define MaximumDischargePower_Continuos_Prb_DataStore_ELEMS() (1)
#define MaximumDischargePower_Continuos_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s87_motohawk_interpolation_2d)
#define MaximumDischargePower_Continuos_Prb_DataStore_ROWS() (1)
#define MaximumDischargePower_Continuos_Prb_DataStore_COLS() (1)
#define MaximumRegenPower_Continuous_Prb_DataStore() (BatteryController_Rev1_B.s87_motohawk_interpolation_2d1)
#define MaximumRegenPower_Continuous_Prb_DataStore_ELEMS() (1)
#define MaximumRegenPower_Continuous_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s87_motohawk_interpolation_2d1)
#define MaximumRegenPower_Continuous_Prb_DataStore_ROWS() (1)
#define MaximumRegenPower_Continuous_Prb_DataStore_COLS() (1)
#define MaximumDischargePower_10s_Prb_DataStore() (BatteryController_Rev1_B.s87_motohawk_interpolation_2d2)
#define MaximumDischargePower_10s_Prb_DataStore_ELEMS() (1)
#define MaximumDischargePower_10s_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s87_motohawk_interpolation_2d2)
#define MaximumDischargePower_10s_Prb_DataStore_ROWS() (1)
#define MaximumDischargePower_10s_Prb_DataStore_COLS() (1)
#define MaximumRegenPower_10s_Prb_DataStore() (BatteryController_Rev1_B.s87_motohawk_interpolation_2d3)
#define MaximumRegenPower_10s_Prb_DataStore_ELEMS() (1)
#define MaximumRegenPower_10s_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s87_motohawk_interpolation_2d3)
#define MaximumRegenPower_10s_Prb_DataStore_ROWS() (1)
#define MaximumRegenPower_10s_Prb_DataStore_COLS() (1)
#define PackState_Prb_DataStore()      (BatteryController_Rev1_B.s31_Merge)
#define PackState_Prb_DataStore_ELEMS() (1)
#define PackState_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s31_Merge)
#define PackState_Prb_DataStore_ROWS() (1)
#define PackState_Prb_DataStore_COLS() (1)
#define PrechargeState_Prb_DataStore() (BatteryController_Rev1_B.s30_Merge)
#define PrechargeState_Prb_DataStore_ELEMS() (1)
#define PrechargeState_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s30_Merge)
#define PrechargeState_Prb_DataStore_ROWS() (1)
#define PrechargeState_Prb_DataStore_COLS() (1)
#define CellBalancingActive_Prb_DataStore() (BatteryController_Rev1_B.s89_Compare)
#define CellBalancingActive_Prb_DataStore_ELEMS() (1)
#define CellBalancingActive_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s89_Compare)
#define CellBalancingActive_Prb_DataStore_ROWS() (1)
#define CellBalancingActive_Prb_DataStore_COLS() (1)
#define StateOfCharge_Prb_DataStore()  (BatteryController_Rev1_B.s40_Merge)
#define StateOfCharge_Prb_DataStore_ELEMS() (1)
#define StateOfCharge_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s40_Merge)
#define StateOfCharge_Prb_DataStore_ROWS() (1)
#define StateOfCharge_Prb_DataStore_COLS() (1)
#define MaxCellVoltage_Prb_DataStore() (BatteryController_Rev1_B.s46_Merge)
#define MaxCellVoltage_Prb_DataStore_ELEMS() (1)
#define MaxCellVoltage_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s46_Merge)
#define MaxCellVoltage_Prb_DataStore_ROWS() (1)
#define MaxCellVoltage_Prb_DataStore_COLS() (1)
#define MinCellVoltage_Prb_DataStore() (BatteryController_Rev1_B.s47_Merge)
#define MinCellVoltage_Prb_DataStore_ELEMS() (1)
#define MinCellVoltage_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s47_Merge)
#define MinCellVoltage_Prb_DataStore_ROWS() (1)
#define MinCellVoltage_Prb_DataStore_COLS() (1)
#define TripAmpsHoursIn_Prb_DataStore() (BatteryController_Rev1_B.s90_Sum)
#define TripAmpsHoursIn_Prb_DataStore_ELEMS() (1)
#define TripAmpsHoursIn_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s90_Sum)
#define TripAmpsHoursIn_Prb_DataStore_ROWS() (1)
#define TripAmpsHoursIn_Prb_DataStore_COLS() (1)
#define Coil1_Pos_Prb_DataStore()      (BatteryController_Rev1_B.s24_Positive)
#define Coil1_Pos_Prb_DataStore_ELEMS() (1)
#define Coil1_Pos_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s24_Positive)
#define Coil1_Pos_Prb_DataStore_ROWS() (1)
#define Coil1_Pos_Prb_DataStore_COLS() (1)
#define Coil2_Pos_Prb_DataStore()      (BatteryController_Rev1_B.s24_PreChargeCoil)
#define Coil2_Pos_Prb_DataStore_ELEMS() (1)
#define Coil2_Pos_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s24_PreChargeCoil)
#define Coil2_Pos_Prb_DataStore_ROWS() (1)
#define Coil2_Pos_Prb_DataStore_COLS() (1)
#define PreCharge_Enable_Prb_DataStore() (BatteryController_Rev1_B.s24_PreChargeEnable)
#define PreCharge_Enable_Prb_DataStore_ELEMS() (1)
#define PreCharge_Enable_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s24_PreChargeEnable)
#define PreCharge_Enable_Prb_DataStore_ROWS() (1)
#define PreCharge_Enable_Prb_DataStore_COLS() (1)
#define PreCharge_Duty_Cycle_Prb_DataStore() (BatteryController_Rev1_B.s45_DutyCycle)
#define PreCharge_Duty_Cycle_Prb_DataStore_ELEMS() (1)
#define PreCharge_Duty_Cycle_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s45_DutyCycle)
#define PreCharge_Duty_Cycle_Prb_DataStore_ROWS() (1)
#define PreCharge_Duty_Cycle_Prb_DataStore_COLS() (1)
#define PreCharge_Freq_Prb_DataStore() (BatteryController_Rev1_B.s88_DataTypeConversion3)
#define PreCharge_Freq_Prb_DataStore_ELEMS() (1)
#define PreCharge_Freq_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s88_DataTypeConversion3)
#define PreCharge_Freq_Prb_DataStore_ROWS() (1)
#define PreCharge_Freq_Prb_DataStore_COLS() (1)
#define Coil1_Neg_Prb_DataStore()      (BatteryController_Rev1_B.s24_Negative)
#define Coil1_Neg_Prb_DataStore_ELEMS() (1)
#define Coil1_Neg_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s24_Negative)
#define Coil1_Neg_Prb_DataStore_ROWS() (1)
#define Coil1_Neg_Prb_DataStore_COLS() (1)
#define AMPCurrent_Pre_Filter_Prb_DataStore() (BatteryController_Rev1_B.s15_Sum)
#define AMPCurrent_Pre_Filter_Prb_DataStore_ELEMS() (1)
#define AMPCurrent_Pre_Filter_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s15_Sum)
#define AMPCurrent_Pre_Filter_Prb_DataStore_ROWS() (1)
#define AMPCurrent_Pre_Filter_Prb_DataStore_COLS() (1)
#define AMPCurrent_Pre_Offset_Prb_DataStore() (BatteryController_Rev1_B.s20_amps)
#define AMPCurrent_Pre_Offset_Prb_DataStore_ELEMS() (1)
#define AMPCurrent_Pre_Offset_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s20_amps)
#define AMPCurrent_Pre_Offset_Prb_DataStore_ROWS() (1)
#define AMPCurrent_Pre_Offset_Prb_DataStore_COLS() (1)
#define AMPCurrent_Prb_DataStore()     (BatteryController_Rev1_B.s15_Product)
#define AMPCurrent_Prb_DataStore_ELEMS() (1)
#define AMPCurrent_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s15_Product)
#define AMPCurrent_Prb_DataStore_ROWS() (1)
#define AMPCurrent_Prb_DataStore_COLS() (1)
#define PreChargeState__Prb_DataStore() (BatteryController_Rev1_B.s29_state)
#define PreChargeState__Prb_DataStore_ELEMS() (1)
#define PreChargeState__Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s29_state)
#define PreChargeState__Prb_DataStore_ROWS() (1)
#define PreChargeState__Prb_DataStore_COLS() (1)
#define PackState__Prb_DataStore()     (BatteryController_Rev1_B.s28_PackState)
#define PackState__Prb_DataStore_ELEMS() (1)
#define PackState__Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s28_PackState)
#define PackState__Prb_DataStore_ROWS() (1)
#define PackState__Prb_DataStore_COLS() (1)
#define currState_Prb_DataStore()      (BatteryController_Rev1_B.s39_currState)
#define currState_Prb_DataStore_ELEMS() (1)
#define currState_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s39_currState)
#define currState_Prb_DataStore_ROWS() (1)
#define currState_Prb_DataStore_COLS() (1)
#define IT_Table_Prb_DataStore()       (BatteryController_Rev1_B.s17_motohawk_interpolation_2d)
#define IT_Table_Prb_DataStore_ELEMS() (1)
#define IT_Table_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s17_motohawk_interpolation_2d)
#define IT_Table_Prb_DataStore_ROWS()  (1)
#define IT_Table_Prb_DataStore_COLS()  (1)
#define SOC_PreFilter_Prb_DataStore()  (BatteryController_Rev1_B.s17_motohawk_interpolation_1d)
#define SOC_PreFilter_Prb_DataStore_ELEMS() (1)
#define SOC_PreFilter_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s17_motohawk_interpolation_1d)
#define SOC_PreFilter_Prb_DataStore_ROWS() (1)
#define SOC_PreFilter_Prb_DataStore_COLS() (1)
#define SOC_Prb_DataStore()            (BatteryController_Rev1_B.s38_Switch)
#define SOC_Prb_DataStore_ELEMS()      (1)
#define SOC_Prb_DataStore_BYTES()      sizeof(BatteryController_Rev1_B.s38_Switch)
#define SOC_Prb_DataStore_ROWS()       (1)
#define SOC_Prb_DataStore_COLS()       (1)
#define MaxCellVoltage__Prb_DataStore() (BatteryController_Rev1_B.s43_Gain1)
#define MaxCellVoltage__Prb_DataStore_ELEMS() (1)
#define MaxCellVoltage__Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_Gain1)
#define MaxCellVoltage__Prb_DataStore_ROWS() (1)
#define MaxCellVoltage__Prb_DataStore_COLS() (1)
#define MinCellVoltage__Prb_DataStore() (BatteryController_Rev1_B.s43_Gain2)
#define MinCellVoltage__Prb_DataStore_ELEMS() (1)
#define MinCellVoltage__Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_Gain2)
#define MinCellVoltage__Prb_DataStore_ROWS() (1)
#define MinCellVoltage__Prb_DataStore_COLS() (1)
#define MaxCellTemp_Prb_DataStore()    (BatteryController_Rev1_B.s43_ReadCANMessage3_o3)
#define MaxCellTemp_Prb_DataStore_ELEMS() (1)
#define MaxCellTemp_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_ReadCANMessage3_o3)
#define MaxCellTemp_Prb_DataStore_ROWS() (1)
#define MaxCellTemp_Prb_DataStore_COLS() (1)
#define MinCellTemp_Prb_DataStore()    (BatteryController_Rev1_B.s43_ReadCANMessage3_o4)
#define MinCellTemp_Prb_DataStore_ELEMS() (1)
#define MinCellTemp_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_ReadCANMessage3_o4)
#define MinCellTemp_Prb_DataStore_ROWS() (1)
#define MinCellTemp_Prb_DataStore_COLS() (1)
#define BalancingCount_Prb_DataStore() (BatteryController_Rev1_B.s43_ReadCANMessage1)
#define BalancingCount_Prb_DataStore_ELEMS() (1)
#define BalancingCount_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_ReadCANMessage1)
#define BalancingCount_Prb_DataStore_ROWS() (1)
#define BalancingCount_Prb_DataStore_COLS() (1)
#define Voltage_Prb_DataStore()        (BatteryController_Rev1_B.s43_Gain)
#define Voltage_Prb_DataStore_ELEMS()  (1)
#define Voltage_Prb_DataStore_BYTES()  sizeof(BatteryController_Rev1_B.s43_Gain)
#define Voltage_Prb_DataStore_ROWS()   (1)
#define Voltage_Prb_DataStore_COLS()   (1)
#define FaultsDTC_Prb_DataStore()      (BatteryController_Rev1_B.s43_ReadCANMessage)
#define FaultsDTC_Prb_DataStore_ELEMS() (1)
#define FaultsDTC_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s43_ReadCANMessage)
#define FaultsDTC_Prb_DataStore_ROWS() (1)
#define FaultsDTC_Prb_DataStore_COLS() (1)
#define Current_Prb_DataStore()        (BatteryController_Rev1_B.s44_motohawk_ain)
#define Current_Prb_DataStore_ELEMS()  (1)
#define Current_Prb_DataStore_BYTES()  sizeof(BatteryController_Rev1_B.s44_motohawk_ain)
#define Current_Prb_DataStore_ROWS()   (1)
#define Current_Prb_DataStore_COLS()   (1)
#define V5V_Reference_Prb_DataStore()  (BatteryController_Rev1_B.s44_motohawk_ain1)
#define V5V_Reference_Prb_DataStore_ELEMS() (1)
#define V5V_Reference_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s44_motohawk_ain1)
#define V5V_Reference_Prb_DataStore_ROWS() (1)
#define V5V_Reference_Prb_DataStore_COLS() (1)
#define Battey_Enable_Prb_DataStore()  (BatteryController_Rev1_B.s45_ReadCANMessage_o1)
#define Battey_Enable_Prb_DataStore_ELEMS() (1)
#define Battey_Enable_Prb_DataStore_BYTES() sizeof(BatteryController_Rev1_B.s45_ReadCANMessage_o1)
#define Battey_Enable_Prb_DataStore_ROWS() (1)
#define Battey_Enable_Prb_DataStore_COLS() (1)
#include "Application.h"

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
#endif                                 /* COMMON_INCLUDE_H */
