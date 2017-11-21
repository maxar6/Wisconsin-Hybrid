#ifndef __c4_BaseEngineController_A02_h__
#define __c4_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c4_setSimStateSideEffectsInfo;
  void *c4_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint16_T c4_FltOrderOld;
  boolean_T c4_isStable;
  uint8_T c4_ActvFltCount;
  uint8_T c4_FltOrderCount;
  uint8_T c4_OldIndex;
  uint8_T c4_doSetSimStateSideEffects;
  uint8_T c4_is_active_c4_BaseEngineController_A02;
  uint8_T c4_is_c4_BaseEngineController_A02;
  uint8_T c4_tp_AT_STARTUP;
  uint8_T c4_tp_TIME_STEP;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c4_testPointMappingInfo;
} SFc4_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c4_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
