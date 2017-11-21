/*
 * File: DynoController_Rev1_Foreground.h
 *
 * Real-Time Workshop code generated for Simulink model DynoController_Rev1.
 *
 * Model version                        : 1.279
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 19:40:13 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 19:40:14 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DynoController_Rev1_Foreground_h_
#define RTW_HEADER_DynoController_Rev1_Foreground_h_
#ifndef DynoController_Rev1_COMMON_INCLUDES_
# define DynoController_Rev1_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_SATURATE.h"
#include "rt_nonfinite.h"
#endif                                 /* DynoController_Rev1_COMMON_INCLUDES_ */

#include "DynoController_Rev1_types.h"

extern void DynoController_Rev1_Foreground_Init(void);
extern void DynoController_Rev1_Foreground_Start(void);
extern void DynoController_Rev1_Foreground(void);

#endif                                 /* RTW_HEADER_DynoController_Rev1_Foreground_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */