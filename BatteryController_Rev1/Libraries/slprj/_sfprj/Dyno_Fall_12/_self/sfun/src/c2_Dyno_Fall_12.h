#ifndef __c2_Dyno_Fall_12_h__
#define __c2_Dyno_Fall_12_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_testPointAddrMap[12];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint16_T c2_counts;
  boolean_T c2_isStable;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_WaitForStart;
  uint8_T c2_is_active_c2_Dyno_Fall_12;
  uint8_T c2_is_c2_Dyno_Fall_12;
  uint8_T c2_tp_Default_State;
  uint8_T c2_tp_Disable;
  uint8_T c2_tp_IdleRun;
  uint8_T c2_tp_Key_On_FuelPump;
  uint8_T c2_tp_LoadReady;
  uint8_T c2_tp_Overcrank;
  uint8_T c2_tp_Stall;
  uint8_T c2_tp_Start;
  uint8_T c2_tp_WaitForStart;
  uint8_T c2_tp_WaitForStartFuelPumpTO;
  uint8_T c2_tp_WaitForStartStandard;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c2_testPointMappingInfo;
} SFc2_Dyno_Fall_12InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_Dyno_Fall_12_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_Dyno_Fall_12_get_check_sum(mxArray *plhs[]);
extern void c2_Dyno_Fall_12_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
