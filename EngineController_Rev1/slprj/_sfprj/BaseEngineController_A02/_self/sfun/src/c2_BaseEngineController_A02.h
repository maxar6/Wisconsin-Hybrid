#ifndef __c2_BaseEngineController_A02_h__
#define __c2_BaseEngineController_A02_h__

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
  void *c2_testPointAddrMap[3];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_doneDoubleBufferReInit;
  boolean_T c2_isStable;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_active_c2_BaseEngineController_A02;
  uint8_T c2_is_c2_BaseEngineController_A02;
  uint8_T c2_tp_Crank;
  uint8_T c2_tp_Run;
  uint8_T c2_tp_Stall;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c2_testPointMappingInfo;
} SFc2_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c2_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
