#ifndef __c33_Mooventure2016_Rev5_h__
#define __c33_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c33_setSimStateSideEffectsInfo;
  int32_T c33_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c33_isStable;
  uint8_T c33_doSetSimStateSideEffects;
  uint8_T c33_is_Running;
  uint8_T c33_is_active_c33_Mooventure2016_Rev5;
  uint8_T c33_is_c33_Mooventure2016_Rev5;
  uint8_T c33_tp_Running;
  uint8_T c33_tp_Shutdown;
  uint8_T c33_tp_Startup;
  uint8_T c33_tp_default;
  uint8_T c33_tp_default_gen;
  uint8_T c33_tp_high_gen;
  uint8_T c33_tp_low_gen;
  uint8_T c33_tp_medium_gen;
  ChartInfoStruct chartInfo;
} SFc33_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c33_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c33_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c33_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
