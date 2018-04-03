#ifndef __BuckyWagon_01_sfun_h__
#define __BuckyWagon_01_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "sfcdebug.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

/* Custom Code from Simulation Target dialog*/
#include <string.h>
#define charPtr(p)                     ((char *)p)

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */
extern int32_T _sfEvent_;
extern uint32_T _BuckyWagon_01MachineNumber_;
extern real_T _sfTime_;

/* Variable Definitions */

/* Function Declarations */
extern void BuckyWagon_01_initializer(void);
extern void BuckyWagon_01_terminator(void);

/* Function Definitions */
#endif
