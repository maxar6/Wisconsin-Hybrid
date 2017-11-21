#ifndef __c62_Mooventure2016_Rev5_h__
#define __c62_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c62_tempval;
  SimStruct *S;
  const mxArray *c62_setSimStateSideEffectsInfo;
  int32_T c62_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c62_isStable;
  uint8_T c62_doSetSimStateSideEffects;
  uint8_T c62_is_active_c62_Mooventure2016_Rev5;
  uint8_T c62_is_c62_Mooventure2016_Rev5;
  uint8_T c62_tp_CommsLost;
  uint8_T c62_tp_Default;
  ChartInfoStruct chartInfo;
} SFc62_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c62_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c62_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c62_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
