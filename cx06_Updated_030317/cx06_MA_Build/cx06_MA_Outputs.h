/*
 * File: cx06_MA_Outputs.h
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_cx06_MA_Outputs_h_
#define RTW_HEADER_cx06_MA_Outputs_h_
#ifndef cx06_MA_COMMON_INCLUDES_
# define cx06_MA_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_MAXd_snf.h"
#include "rt_MAXf_snf.h"
#include "rt_MINd_snf.h"
#include "rt_MINf_snf.h"
#include "rt_SATURATE.h"
#include "rt_SIGNd_snf.h"
#endif                                 /* cx06_MA_COMMON_INCLUDES_ */

#include "cx06_MA_types.h"

/* Block signals for system '<S79>/Act_Gear_Translate' */
typedef struct {
  real_T s166_y;                       /* '<S79>/Act_Gear_Translate' */
} rtB_Act_Gear_Translate_cx06_MA;

extern void cx06_MA_Act_Gear_Translate(int8_T rtu_u,
  rtB_Act_Gear_Translate_cx06_MA *localB);
extern void cx06_MA_Outputs_Init(void);
extern void cx06_MA_Outputs_Start(void);
extern void cx06_MA_Outputs(void);

#endif                                 /* RTW_HEADER_cx06_MA_Outputs_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
