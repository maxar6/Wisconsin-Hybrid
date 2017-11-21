#ifndef __c30_Mooventure2016_Rev5_h__
#define __c30_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c30_setSimStateSideEffectsInfo;
  int32_T c30_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c30_isStable;
  uint8_T c30_doSetSimStateSideEffects;
  uint8_T c30_is_active_c30_Mooventure2016_Rev5;
  uint8_T c30_is_c30_Mooventure2016_Rev5;
  uint8_T c30_tp_Off;
  uint8_T c30_tp_On;
  ChartInfoStruct chartInfo;
} SFc30_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c30_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c30_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c30_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
