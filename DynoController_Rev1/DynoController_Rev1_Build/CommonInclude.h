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
#define SOC_Gauges_Prb_DataStore()     (DynoController_Rev1_B.s77_Gain)
#define SOC_Gauges_Prb_DataStore_ELEMS() (1)
#define SOC_Gauges_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s77_Gain)
#define SOC_Gauges_Prb_DataStore_ROWS() (1)
#define SOC_Gauges_Prb_DataStore_COLS() (1)
#define RPM_Gauges_Prb_DataStore()     (DynoController_Rev1_B.s55_Merge)
#define RPM_Gauges_Prb_DataStore_ELEMS() (1)
#define RPM_Gauges_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s55_Merge)
#define RPM_Gauges_Prb_DataStore_ROWS() (1)
#define RPM_Gauges_Prb_DataStore_COLS() (1)
#define OilPressure_Gauges_Prb_DataStore() (DynoController_Rev1_B.s77_Gain1)
#define OilPressure_Gauges_Prb_DataStore_ELEMS() (1)
#define OilPressure_Gauges_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s77_Gain1)
#define OilPressure_Gauges_Prb_DataStore_ROWS() (1)
#define OilPressure_Gauges_Prb_DataStore_COLS() (1)
#define CoolantTemp_Gauges_Prb_DataStore() (DynoController_Rev1_B.s77_Gain2)
#define CoolantTemp_Gauges_Prb_DataStore_ELEMS() (1)
#define CoolantTemp_Gauges_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s77_Gain2)
#define CoolantTemp_Gauges_Prb_DataStore_ROWS() (1)
#define CoolantTemp_Gauges_Prb_DataStore_COLS() (1)
#define TimeSinceKeyOn_DataStore()     (DynoController_Rev1_B.s124_Sum)
#define TimeSinceKeyOn_DataStore_ELEMS() (1)
#define TimeSinceKeyOn_DataStore_BYTES() sizeof(DynoController_Rev1_B.s124_Sum)
#define TimeSinceKeyOn_DataStore_ROWS() (1)
#define TimeSinceKeyOn_DataStore_COLS() (1)
#define Coil_Neg_Prb_DataStore()       (DynoController_Rev1_B.s75_LogicalOperator1)
#define Coil_Neg_Prb_DataStore_ELEMS() (1)
#define Coil_Neg_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_LogicalOperator1)
#define Coil_Neg_Prb_DataStore_ROWS()  (1)
#define Coil_Neg_Prb_DataStore_COLS()  (1)
#define Coil_Pos_Prb_DataStore()       (DynoController_Rev1_B.s75_LogicalOperator1)
#define Coil_Pos_Prb_DataStore_ELEMS() (1)
#define Coil_Pos_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_LogicalOperator1)
#define Coil_Pos_Prb_DataStore_ROWS()  (1)
#define Coil_Pos_Prb_DataStore_COLS()  (1)
#define Battery_Enable_Light_Prb_DataStore() (DynoController_Rev1_B.s75_RelationalOperator2)
#define Battery_Enable_Light_Prb_DataStore_ELEMS() (1)
#define Battery_Enable_Light_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_RelationalOperator2)
#define Battery_Enable_Light_Prb_DataStore_ROWS() (1)
#define Battery_Enable_Light_Prb_DataStore_COLS() (1)
#define Load_Dump_Enable_Light_Prb_DataStore() (DynoController_Rev1_B.s75_LogicalOperator)
#define Load_Dump_Enable_Light_Prb_DataStore_ELEMS() (1)
#define Load_Dump_Enable_Light_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_LogicalOperator)
#define Load_Dump_Enable_Light_Prb_DataStore_ROWS() (1)
#define Load_Dump_Enable_Light_Prb_DataStore_COLS() (1)
#define Genset_Enable_Light_Prb_DataStore() (DynoController_Rev1_B.s75_LogicalOperator)
#define Genset_Enable_Light_Prb_DataStore_ELEMS() (1)
#define Genset_Enable_Light_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_LogicalOperator)
#define Genset_Enable_Light_Prb_DataStore_ROWS() (1)
#define Genset_Enable_Light_Prb_DataStore_COLS() (1)
#define Genset_Load_Light_Prb_DataStore() (DynoController_Rev1_B.s75_LogicalOperator2)
#define Genset_Load_Light_Prb_DataStore_ELEMS() (1)
#define Genset_Load_Light_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s75_LogicalOperator2)
#define Genset_Load_Light_Prb_DataStore_ROWS() (1)
#define Genset_Load_Light_Prb_DataStore_COLS() (1)
#define Batt_Connect_Cmd_Probe_DataStore() (DynoController_Rev1_B.s102_ConnectCommand)
#define Batt_Connect_Cmd_Probe_DataStore_ELEMS() (1)
#define Batt_Connect_Cmd_Probe_DataStore_BYTES() sizeof(DynoController_Rev1_B.s102_ConnectCommand)
#define Batt_Connect_Cmd_Probe_DataStore_ROWS() (1)
#define Batt_Connect_Cmd_Probe_DataStore_COLS() (1)
#define Isolation_Measure_Enable_Probe_DataStore() (DynoController_Rev1_B.s102_IsolationMeasurementEnable)
#define Isolation_Measure_Enable_Probe_DataStore_ELEMS() (1)
#define Isolation_Measure_Enable_Probe_DataStore_BYTES() sizeof(DynoController_Rev1_B.s102_IsolationMeasurementEnable)
#define Isolation_Measure_Enable_Probe_DataStore_ROWS() (1)
#define Isolation_Measure_Enable_Probe_DataStore_COLS() (1)
#define Gen_Load_Prb_DataStore()       (DynoController_Rev1_B.s103_Gen_Load)
#define Gen_Load_Prb_DataStore_ELEMS() (1)
#define Gen_Load_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s103_Gen_Load)
#define Gen_Load_Prb_DataStore_ROWS()  (1)
#define Gen_Load_Prb_DataStore_COLS()  (1)
#define Gen_Enable_Prb_DataStore()     (DynoController_Rev1_B.s103_Gen_Enable)
#define Gen_Enable_Prb_DataStore_ELEMS() (1)
#define Gen_Enable_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s103_Gen_Enable)
#define Gen_Enable_Prb_DataStore_ROWS() (1)
#define Gen_Enable_Prb_DataStore_COLS() (1)
#define Batt_Boot_request_fromcontrol_Prb_DataStore() (DynoController_Rev1_B.s10_LogicalOperator2)
#define Batt_Boot_request_fromcontrol_Prb_DataStore_ELEMS() (1)
#define Batt_Boot_request_fromcontrol_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s10_LogicalOperator2)
#define Batt_Boot_request_fromcontrol_Prb_DataStore_ROWS() (1)
#define Batt_Boot_request_fromcontrol_Prb_DataStore_COLS() (1)
#define Batt_Shutdown_Request_Prb_DataStore() (DynoController_Rev1_B.s11_Merge)
#define Batt_Shutdown_Request_Prb_DataStore_ELEMS() (1)
#define Batt_Shutdown_Request_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s11_Merge)
#define Batt_Shutdown_Request_Prb_DataStore_ROWS() (1)
#define Batt_Shutdown_Request_Prb_DataStore_COLS() (1)
#define Shutdown_Probe_DataStore()     (DynoController_Rev1_B.s11_Merge)
#define Shutdown_Probe_DataStore_ELEMS() (1)
#define Shutdown_Probe_DataStore_BYTES() sizeof(DynoController_Rev1_B.s11_Merge)
#define Shutdown_Probe_DataStore_ROWS() (1)
#define Shutdown_Probe_DataStore_COLS() (1)
#define LoadDumpEnable_Prb_DataStore() (DynoController_Rev1_B.s17_motohawk_din1)
#define LoadDumpEnable_Prb_DataStore_ELEMS() (1)
#define LoadDumpEnable_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s17_motohawk_din1)
#define LoadDumpEnable_Prb_DataStore_ROWS() (1)
#define LoadDumpEnable_Prb_DataStore_COLS() (1)
#define BatteryEnable_Prb_DataStore()  (DynoController_Rev1_B.s17_motohawk_din)
#define BatteryEnable_Prb_DataStore_ELEMS() (1)
#define BatteryEnable_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s17_motohawk_din)
#define BatteryEnable_Prb_DataStore_ROWS() (1)
#define BatteryEnable_Prb_DataStore_COLS() (1)
#define GensetEnable_Prb_DataStore()   (DynoController_Rev1_B.s17_motohawk_din2)
#define GensetEnable_Prb_DataStore_ELEMS() (1)
#define GensetEnable_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s17_motohawk_din2)
#define GensetEnable_Prb_DataStore_ROWS() (1)
#define GensetEnable_Prb_DataStore_COLS() (1)
#define GensetLoad_Prb_DataStore()     (DynoController_Rev1_B.s17_motohawk_din3)
#define GensetLoad_Prb_DataStore_ELEMS() (1)
#define GensetLoad_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s17_motohawk_din3)
#define GensetLoad_Prb_DataStore_ROWS() (1)
#define GensetLoad_Prb_DataStore_COLS() (1)
#define ACC1_Prb_DataStore()           (DynoController_Rev1_B.s17_motohawk_din4)
#define ACC1_Prb_DataStore_ELEMS()     (1)
#define ACC1_Prb_DataStore_BYTES()     sizeof(DynoController_Rev1_B.s17_motohawk_din4)
#define ACC1_Prb_DataStore_ROWS()      (1)
#define ACC1_Prb_DataStore_COLS()      (1)
#define ACC2_Prb_DataStore()           (DynoController_Rev1_B.s17_motohawk_din5)
#define ACC2_Prb_DataStore_ELEMS()     (1)
#define ACC2_Prb_DataStore_BYTES()     sizeof(DynoController_Rev1_B.s17_motohawk_din5)
#define ACC2_Prb_DataStore_ROWS()      (1)
#define ACC2_Prb_DataStore_COLS()      (1)
#define StateOfCharge_Prb_DataStore()  (DynoController_Rev1_B.s37_StateOfCharge)
#define StateOfCharge_Prb_DataStore_ELEMS() (1)
#define StateOfCharge_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s37_StateOfCharge)
#define StateOfCharge_Prb_DataStore_ROWS() (1)
#define StateOfCharge_Prb_DataStore_COLS() (1)
#define PackState_Prb_DataStore()      (DynoController_Rev1_B.s37_PackState)
#define PackState_Prb_DataStore_ELEMS() (1)
#define PackState_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s37_PackState)
#define PackState_Prb_DataStore_ROWS() (1)
#define PackState_Prb_DataStore_COLS() (1)
#define BatteryVoltage_Prb_DataStore() (DynoController_Rev1_B.s37_BatteryVoltage)
#define BatteryVoltage_Prb_DataStore_ELEMS() (1)
#define BatteryVoltage_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s37_BatteryVoltage)
#define BatteryVoltage_Prb_DataStore_ROWS() (1)
#define BatteryVoltage_Prb_DataStore_COLS() (1)
#define BatteryCurrent_Prb_DataStore() (DynoController_Rev1_B.s37_BatteryCurrent)
#define BatteryCurrent_Prb_DataStore_ELEMS() (1)
#define BatteryCurrent_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s37_BatteryCurrent)
#define BatteryCurrent_Prb_DataStore_ROWS() (1)
#define BatteryCurrent_Prb_DataStore_COLS() (1)
#define MaxCellTemperature_Prb_DataStore() (DynoController_Rev1_B.s37_MaxCellTemperature)
#define MaxCellTemperature_Prb_DataStore_ELEMS() (1)
#define MaxCellTemperature_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s37_MaxCellTemperature)
#define MaxCellTemperature_Prb_DataStore_ROWS() (1)
#define MaxCellTemperature_Prb_DataStore_COLS() (1)
#define Oil_Pressure_Prb_DataStore()   (DynoController_Rev1_B.s38_ReadCANMessage_o2)
#define Oil_Pressure_Prb_DataStore_ELEMS() (1)
#define Oil_Pressure_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o2)
#define Oil_Pressure_Prb_DataStore_ROWS() (1)
#define Oil_Pressure_Prb_DataStore_COLS() (1)
#define RPM_Prb_DataStore()            (DynoController_Rev1_B.s38_ReadCANMessage_o1)
#define RPM_Prb_DataStore_ELEMS()      (1)
#define RPM_Prb_DataStore_BYTES()      sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o1)
#define RPM_Prb_DataStore_ROWS()       (1)
#define RPM_Prb_DataStore_COLS()       (1)
#define Temp_Guage_Ovr_DataStore()     (DynoController_Rev1_B.s38_ReadCANMessage_o3)
#define Temp_Guage_Ovr_DataStore_ELEMS() (1)
#define Temp_Guage_Ovr_DataStore_BYTES() sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o3)
#define Temp_Guage_Ovr_DataStore_ROWS() (1)
#define Temp_Guage_Ovr_DataStore_COLS() (1)
#define Engine_Crank_Prb_DataStore()   (DynoController_Rev1_B.s38_ReadCANMessage_o4)
#define Engine_Crank_Prb_DataStore_ELEMS() (1)
#define Engine_Crank_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o4)
#define Engine_Crank_Prb_DataStore_ROWS() (1)
#define Engine_Crank_Prb_DataStore_COLS() (1)
#define Engine_On_Prb_DataStore()      (DynoController_Rev1_B.s38_ReadCANMessage_o5)
#define Engine_On_Prb_DataStore_ELEMS() (1)
#define Engine_On_Prb_DataStore_BYTES() sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o5)
#define Engine_On_Prb_DataStore_ROWS() (1)
#define Engine_On_Prb_DataStore_COLS() (1)
#define Load_On_Prb_DataStore()        (DynoController_Rev1_B.s38_ReadCANMessage_o6)
#define Load_On_Prb_DataStore_ELEMS()  (1)
#define Load_On_Prb_DataStore_BYTES()  sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o6)
#define Load_On_Prb_DataStore_ROWS()   (1)
#define Load_On_Prb_DataStore_COLS()   (1)
#define Fault_Prb_DataStore()          (DynoController_Rev1_B.s38_ReadCANMessage_o7)
#define Fault_Prb_DataStore_ELEMS()    (1)
#define Fault_Prb_DataStore_BYTES()    sizeof(DynoController_Rev1_B.s38_ReadCANMessage_o7)
#define Fault_Prb_DataStore_ROWS()     (1)
#define Fault_Prb_DataStore_COLS()     (1)
#include "Application.h"

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
#endif                                 /* COMMON_INCLUDE_H */
