#ifndef __c37_Mooventure2016_Rev5_h__
#define __c37_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  int32_T c37_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c37_doneDoubleBufferReInit;
  boolean_T c37_isStable;
  uint8_T c37_is_active_c37_Mooventure2016_Rev5;
  ChartInfoStruct chartInfo;
} SFc37_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c37_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c37_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c37_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
