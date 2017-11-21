#ifndef __c20_Dyno_IPT_2014_h__
#define __c20_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c20_setSimStateSideEffectsInfo;
  void *c20_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c20_isStable;
  uint8_T c20_doSetSimStateSideEffects;
  uint8_T c20_is_active_c20_Dyno_IPT_2014;
  uint8_T c20_is_c20_Dyno_IPT_2014;
  uint8_T c20_tp_moved;
  uint8_T c20_tp_nomove;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c20_testPointMappingInfo;
} SFc20_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c20_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c20_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c20_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
