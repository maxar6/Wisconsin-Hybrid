#ifndef __c8_Mooventure2016_Rev5_h__
#define __c8_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c8_setSimStateSideEffectsInfo;
  int32_T c8_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c8_isStable;
  uint8_T c8_doSetSimStateSideEffects;
  uint8_T c8_is_active_c8_Mooventure2016_Rev5;
  uint8_T c8_is_c8_Mooventure2016_Rev5;
  uint8_T c8_tp_Coil1Disabled;
  uint8_T c8_tp_Coil1Enabled;
  ChartInfoStruct chartInfo;
} SFc8_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c8_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c8_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
