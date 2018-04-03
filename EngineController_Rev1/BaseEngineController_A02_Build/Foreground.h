/*
 * File: Foreground.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1579
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Feb 16 15:06:38 2018
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
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_A02_COMMON_INCLUDES_ */

#include "BaseEngineController_A02_types.h"

/* Child system includes */
#include "BaseEngineController_A02_IdleStateMachine.h"

/* Block signals for system '<S145>/Multiply and Divide, avoiding divde by zero' */
typedef struct {
  real_T s150_chargemass;              /* '<S150>/charge mass' */
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
extern void BaseEngineController_A02_Foreground_Init(void);
extern void BaseEngineController_A02_Foreground_Enable(void);
extern void BaseEngineController_A02_Foreground_Start(void);
extern void BaseEngineController_A02_Foreground_Disable(void);
extern void BaseEngineController_A02_Foreground(void);
extern void BaseEngineController_A02_Foreground_Term(void);

#endif                                 /* RTW_HEADER_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
