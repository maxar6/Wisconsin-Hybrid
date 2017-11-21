/*
 * File: Foreground.h
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

#ifndef RTW_HEADER_Foreground_h_
#define RTW_HEADER_Foreground_h_
#ifndef BaseEngineController_A02_COMMON_INCLUDES_
# define BaseEngineController_A02_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "rt_zcfcn.h"
#include "Application.h"
#include "rt_ABS.h"
#include "rt_MAXd_snf.h"
#include "rt_MINd_snf.h"
#include "rt_SATURATE.h"
#include "rt_nonfinite.h"
#endif                                 /* BaseEngineController_A02_COMMON_INCLUDES_ */

#include "BaseEngineController_A02_types.h"

/* Child system includes */
#include "BaseEngineController_A02_IdleStateMachine.h"

/* Block signals for system '<S162>/Multiply and Divide, avoiding divde by zero' */
typedef struct {
  real_T s168_chargemass;              /* '<S168>/charge mass' */
} rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02;

extern void BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero
  (boolean_T rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T
   rtu_Divide2,
   rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02 *localB);
extern void BaseEngineController_A02_PassThrough1_Start(real_T *rty_Out1);
extern void BaseEngineController_A02_PassThrough1(boolean_T rtu_0, real_T rtu_1,
  real_T *rty_Out1);
extern void BaseEngineController_A02_IfActionSubsystem(real_T rtu_0, real_T
  *rty_Out);
extern void BaseEngineController_A02_IfActionSubsystem_m(real_T rtu_0, real_T
  *rty_Out);
extern void BaseEngineController_A02_Foreground_Init(void);
extern void BaseEngineController_A02_Foreground_Enable(void);
extern void BaseEngineController_A02_Foreground_Start(void);
extern void BaseEngineController_A02_Foreground_Disable(void);
extern void BaseEngineController_A02_Foreground(void);

#endif                                 /* RTW_HEADER_Foreground_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
