#ifndef __c55_Mooventure2016_Rev5_h__
#define __c55_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c55_count;
  SimStruct *S;
  const mxArray *c55_setSimStateSideEffectsInfo;
  int32_T c55_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c55_isStable;
  uint8_T c55_doSetSimStateSideEffects;
  uint8_T c55_is_active_c55_Mooventure2016_Rev5;
  uint8_T c55_is_c55_Mooventure2016_Rev5;
  uint8_T c55_tp_Clear;
  uint8_T c55_tp_Counting;
  uint8_T c55_tp_Init;
  uint8_T c55_tp_Write;
  ChartInfoStruct chartInfo;
} SFc55_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c55_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c55_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c55_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
