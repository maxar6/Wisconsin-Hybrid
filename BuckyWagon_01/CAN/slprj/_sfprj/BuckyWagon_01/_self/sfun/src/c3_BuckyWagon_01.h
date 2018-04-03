#ifndef __c3_BuckyWagon_01_h__
#define __c3_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_isStable;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_Fault;
  uint8_T c3_is_active_c3_BuckyWagon_01;
  uint8_T c3_is_c3_BuckyWagon_01;
  uint8_T c3_tp_CheckNextFault;
  uint8_T c3_tp_Fault;
  uint8_T c3_tp_NoFault;
  uint8_T c3_tp_lastWait;
  uint8_T c3_tp_scrollText;
  uint8_T c3_tp_scrollTextFirst;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c3_testPointMappingInfo;
} SFc3_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c3_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
