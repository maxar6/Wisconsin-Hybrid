#ifndef __c7_BatteryController_Rev1_h__
#define __c7_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  int32_T c7_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c7_doneDoubleBufferReInit;
  boolean_T c7_isStable;
  uint8_T c7_is_active_c7_BatteryController_Rev1;
  ChartInfoStruct chartInfo;
} SFc7_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c7_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c7_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
