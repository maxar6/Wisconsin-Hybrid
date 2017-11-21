/*
 * File: rt_MAXd_snf.h
 *
 * Real-Time Workshop code generated for Simulink model BaseEngineController_A02.
 *
 * Model version                        : 1.1510
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 15:20:16 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rt_MAXd_snf_h_
#define RTW_HEADER_rt_MAXd_snf_h_
#include "rt_nonfinite.h"
#define rt_MAXd_snf(a, b)              (( ((a) >= (b)) || rtIsNaN(b) ) ? (a) : (b))
#endif                                 /* RTW_HEADER_rt_MAXd_snf_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
