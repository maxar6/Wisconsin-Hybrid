#ifndef __c12_BaseEngineController_A02_h__
#define __c12_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c12_setSimStateSideEffectsInfo;
  int32_T c12_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c12_isStable;
  uint8_T c12_doSetSimStateSideEffects;
  uint8_T c12_is_active_c12_BaseEngineController_A02;
  uint8_T c12_is_c12_BaseEngineController_A02;
  uint8_T c12_tp_Flaring;
  uint8_T c12_tp_OffIdle;
  uint8_T c12_tp_OnIdle;
  ChartInfoStruct chartInfo;
} SFc12_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c12_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c12_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
