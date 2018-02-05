#ifndef __c19_BaseEngineController_A02_h__
#define __c19_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c19_TOld;
  SimStruct *S;
  const mxArray *c19_setSimStateSideEffectsInfo;
  int32_T c19_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c19_doneDoubleBufferReInit;
  boolean_T c19_isStable;
  uint8_T c19_doSetSimStateSideEffects;
  uint8_T c19_is_active_c19_BaseEngineController_A02;
  uint8_T c19_is_c19_BaseEngineController_A02;
  uint8_T c19_tp_CrankRun;
  uint8_T c19_tp_Stall;
  uint8_T c19_tp_StallDelay;
  ChartInfoStruct chartInfo;
} SFc19_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c19_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c19_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c19_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
