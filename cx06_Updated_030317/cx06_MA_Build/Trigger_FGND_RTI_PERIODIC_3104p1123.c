/*
 * Trigger_FGND_RTI_PERIODIC_3104p1123.c
 *
 * Real-Time Workshop code generation for Simulink model "cx06_MA.mdl".
 *
 * Model version              : 1.1504
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA.h"
#include "cx06_MA_private.h"

void Trigger_FGND_RTI_PERIODIC_3104p1123(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    cx06_MA_M->Timing.clockTick0 = lower32Bits;
    cx06_MA_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    cx06_MA_Strategy();
  }
}
