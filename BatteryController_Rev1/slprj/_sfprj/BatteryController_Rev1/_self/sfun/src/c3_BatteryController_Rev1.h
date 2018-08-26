#ifndef __c3_BatteryController_Rev1_h__
#define __c3_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c3_count;
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T c3_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_isStable;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_active_c3_BatteryController_Rev1;
  uint8_T c3_is_c3_BatteryController_Rev1;
  uint8_T c3_tp_Clear;
  uint8_T c3_tp_Counting;
  uint8_T c3_tp_Init;
  uint8_T c3_tp_Write;
  ChartInfoStruct chartInfo;
} SFc3_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c3_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
