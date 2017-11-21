#ifndef __c35_Mooventure2016_Rev5_h__
#define __c35_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c35_count;
  SimStruct *S;
  const mxArray *c35_setSimStateSideEffectsInfo;
  int32_T c35_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c35_isStable;
  uint8_T c35_doSetSimStateSideEffects;
  uint8_T c35_is_active_c35_Mooventure2016_Rev5;
  uint8_T c35_is_c35_Mooventure2016_Rev5;
  uint8_T c35_tp_Clear;
  uint8_T c35_tp_Counting;
  uint8_T c35_tp_Init;
  uint8_T c35_tp_Write;
  ChartInfoStruct chartInfo;
} SFc35_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c35_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c35_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c35_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
