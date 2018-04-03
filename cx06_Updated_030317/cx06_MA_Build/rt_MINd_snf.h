/*
 * File: rt_MINd_snf.h
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

#ifndef RTW_HEADER_rt_MINd_snf_h_
#define RTW_HEADER_rt_MINd_snf_h_
#include "rt_nonfinite.h"
#define rt_MINd_snf(a, b)              (( ((a) <= (b)) || rtIsNaN(b) ) ? (a) : (b))
#endif                                 /* RTW_HEADER_rt_MINd_snf_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
