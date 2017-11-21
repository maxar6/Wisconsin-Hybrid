#ifndef __c3_BaseEngineController_A02_h__
#define __c3_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_testPointAddrMap[4];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_doneDoubleBufferReInit;
  boolean_T c3_isStable;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_active_c3_BaseEngineController_A02;
  uint8_T c3_is_c3_BaseEngineController_A02;
  uint8_T c3_tp_CountTDCs;
  uint8_T c3_tp_SparkEnabled;
  uint8_T c3_tp_SparkEnabled_Crank;
  uint8_T c3_tp_SparkEnabled_Run;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c3_testPointMappingInfo;
} SFc3_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c3_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
