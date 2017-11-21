#ifndef __c13_BaseEngineController_A02_h__
#define __c13_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c13_setSimStateSideEffectsInfo;
  void *c13_testPointAddrMap[5];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_isStable;
  uint8_T c13_doSetSimStateSideEffects;
  uint8_T c13_is_active_c13_BaseEngineController_A02;
  uint8_T c13_is_c13_BaseEngineController_A02;
  uint8_T c13_tp_Level1Limit;
  uint8_T c13_tp_Level2Limit;
  uint8_T c13_tp_Level3Limit;
  uint8_T c13_tp_Level4Limit;
  uint8_T c13_tp_NoLimit;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c13_testPointMappingInfo;
} SFc13_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c13_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c13_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
