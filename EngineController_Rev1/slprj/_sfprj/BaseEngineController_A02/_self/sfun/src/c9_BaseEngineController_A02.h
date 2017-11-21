#ifndef __c9_BaseEngineController_A02_h__
#define __c9_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c9_TimerOld;
  SimStruct *S;
  const mxArray *c9_setSimStateSideEffectsInfo;
  void *c9_testPointAddrMap[7];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c9_doneDoubleBufferReInit;
  boolean_T c9_isStable;
  uint8_T c9_doSetSimStateSideEffects;
  uint8_T c9_is_active_c9_BaseEngineController_A02;
  uint8_T c9_is_c9_BaseEngineController_A02;
  uint8_T c9_tp_ForcedShutdown;
  uint8_T c9_tp_LowAdapt;
  uint8_T c9_tp_PassThrough;
  uint8_T c9_tp_SpringTest;
  uint8_T c9_tp_SpringTestComplete;
  uint8_T c9_tp_SpringTestSetpoint;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c9_testPointMappingInfo;
} SFc9_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c9_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c9_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
