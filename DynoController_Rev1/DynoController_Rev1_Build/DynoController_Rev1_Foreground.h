/*
 * File: DynoController_Rev1_Foreground.h
 *
 * Code generated for Simulink model 'DynoController_Rev1'.
 *
 * Model version                  : 1.301
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Apr 07 14:25:46 2018
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
#include "rt_nonfinite.h"
#endif                                 /* DynoController_Rev1_COMMON_INCLUDES_ */

#include "DynoController_Rev1_types.h"

extern void DynoController_Rev1_Foreground_Init(void);
extern void DynoController_Rev1_Foreground_Enable(void);
extern void DynoController_Rev1_Foreground_Start(void);
extern void DynoController_Rev1_Foreground_Disable(void);
extern void DynoController_Rev1_Foreground(void);

#endif                                 /* RTW_HEADER_DynoController_Rev1_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
