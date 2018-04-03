#ifndef __c9_cx06_MA_h__
#define __c9_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  const char *context;
  const char *name;
  const char *dominantType;
  const char *resolved;
  uint32_T fileLength;
  uint32_T fileTime1;
  uint32_T fileTime2;
} c9_ResolvedFunctionInfo;

typedef struct {
  SimStruct *S;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c9_doneDoubleBufferReInit;
  boolean_T c9_isStable;
  uint8_T c9_is_active_c9_cx06_MA;
  ChartInfoStruct chartInfo;
} SFc9_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c9_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
