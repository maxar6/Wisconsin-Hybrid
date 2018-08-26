#ifndef __c6_BaseEngineController_A02_h__
#define __c6_BaseEngineController_A02_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  int32_T c6_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c6_doneDoubleBufferReInit;
  boolean_T c6_isStable;
  uint8_T c6_is_active_c6_BaseEngineController_A02;
  ChartInfoStruct chartInfo;
} SFc6_BaseEngineController_A02InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_BaseEngineController_A02_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_BaseEngineController_A02_get_check_sum(mxArray *plhs[]);
extern void c6_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
