/*
 * Trigger_FGND_RTI_PERIODIC_6605p0005.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2026
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Nov 29 16:58:34 2017
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_FGND_RTI_PERIODIC_6605p0005(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    Mooventure2016_Rev5_M->Timing.clockTick0 = lower32Bits;
    Mooventure2016_Rev5_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    Mooventure2016_Rev5_Foreground();
  }
}
