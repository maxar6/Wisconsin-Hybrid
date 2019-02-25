/*
 * File: BaseEngineController_A02_private.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1524
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 03:08:50 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BaseEngineController_A02_private_h_
#define RTW_HEADER_BaseEngineController_A02_private_h_
#include "rtwtypes.h"
#define CALL_EVENT                     (-1)

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetFirstInitCond
# define rtmSetFirstInitCond(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm)       ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error "Code was generated for compiler with different sized uchar/char. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compiler's limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, which will disable the preprocessor word size checks."
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error "Code was generated for compiler with different sized ushort/short. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error "Code was generated for compiler with different sized uint/int. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error "Code was generated for compiler with different sized ulong/long. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);

#endif                                 /* RTW_HEADER_BaseEngineController_A02_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
