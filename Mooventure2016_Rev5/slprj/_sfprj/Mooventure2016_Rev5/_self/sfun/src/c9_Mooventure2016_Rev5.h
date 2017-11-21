#ifndef __c9_Mooventure2016_Rev5_h__
#define __c9_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c9_setSimStateSideEffectsInfo;
  int32_T c9_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c9_isStable;
  uint8_T c9_doSetSimStateSideEffects;
  uint8_T c9_is_active_c9_Mooventure2016_Rev5;
  uint8_T c9_is_c9_Mooventure2016_Rev5;
  uint8_T c9_tp_Coil2Disabled;
  uint8_T c9_tp_Coil2Enabled;
  ChartInfoStruct chartInfo;
} SFc9_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c9_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c9_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
