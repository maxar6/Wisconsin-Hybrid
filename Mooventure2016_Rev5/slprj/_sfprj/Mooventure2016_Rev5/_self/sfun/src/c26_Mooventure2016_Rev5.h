#ifndef __c26_Mooventure2016_Rev5_h__
#define __c26_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  int32_T c26_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c26_doneDoubleBufferReInit;
  boolean_T c26_isStable;
  uint8_T c26_is_active_c26_Mooventure2016_Rev5;
  ChartInfoStruct chartInfo;
} SFc26_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c26_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c26_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c26_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
