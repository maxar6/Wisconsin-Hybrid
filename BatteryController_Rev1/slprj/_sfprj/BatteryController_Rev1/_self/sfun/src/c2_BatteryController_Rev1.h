#ifndef __c2_BatteryController_Rev1_h__
#define __c2_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c2_setSimStateSideEffectsInfo;
  int32_T c2_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_isStable;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_active_c2_BatteryController_Rev1;
  uint8_T c2_is_c2_BatteryController_Rev1;
  uint8_T c2_tp_Offsets;
  uint8_T c2_tp_default_off;
  uint8_T c2_tp_default_on;
  ChartInfoStruct chartInfo;
} SFc2_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c2_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
