/*
 * File: rt_nonfinite.h
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rt_nonfinite_h_
#define RTW_HEADER_rt_nonfinite_h_

/*
 * Description: This file generates custom content that replaces the default rtnonfinite.c.
 * The content of the rtnonfinite.c file varies quite a bit from version
 * to version, so this is a way to make the results more consistent.
 */
#include <stddef.h>
#include "rtwtypes.h"

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern boolean_T rtIsInf(real_T value);
extern boolean_T rtIsInfF(real32_T value);
extern boolean_T rtIsNaN(real_T value);
extern boolean_T rtIsNaNF(real32_T value);

#endif                                 /* RTW_HEADER_rt_nonfinite_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
