#ifndef __c11_BuckyWagon_01_h__
#define __c11_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c11_Val1;
  real_T c11_Val2;
  real_T c11_count;
  real_T c11_state;
  SimStruct *S;
  const mxArray *c11_setSimStateSideEffectsInfo;
  int32_T c11_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c11_isStable;
  uint8_T c11_doSetSimStateSideEffects;
  uint8_T c11_is_active_c11_BuckyWagon_01;
  uint8_T c11_is_c11_BuckyWagon_01;
  uint8_T c11_tp_Out;
  uint8_T c11_tp_Value_1;
  uint8_T c11_tp_Value_2;
  uint8_T c11_tp_downsample;
  uint8_T c11_tp_downsample_2;
  ChartInfoStruct chartInfo;
} SFc11_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c11_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c11_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
