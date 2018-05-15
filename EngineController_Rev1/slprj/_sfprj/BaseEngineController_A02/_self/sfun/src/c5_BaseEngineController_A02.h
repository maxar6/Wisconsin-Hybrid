#ifndef __c5_BaseEngineController_A02_h__
#define __c5_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c5_count;
  SimStruct *S;
  const mxArray *c5_setSimStateSideEffectsInfo;
  int32_T c5_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c5_isStable;
  uint8_T c5_doSetSimStateSideEffects;
  uint8_T c5_is_active_c5_BaseEngineController_A02;
  uint8_T c5_is_c5_BaseEngineController_A02;
  uint8_T c5_tp_cranking;
  uint8_T c5_tp_default;
  uint8_T c5_tp_generating;
  uint8_T c5_tp_idle;
  uint8_T c5_tp_rampDown;
  uint8_T c5_tp_startFail;
  ChartInfoStruct chartInfo;
} SFc5_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c5_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
