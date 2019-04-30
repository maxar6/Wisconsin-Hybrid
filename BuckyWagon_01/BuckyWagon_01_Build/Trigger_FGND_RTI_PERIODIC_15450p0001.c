/*
 * Trigger_FGND_RTI_PERIODIC_15450p0001.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1586
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 29 19:20:54 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_FGND_RTI_PERIODIC_15450p0001(void)
{
  if (BuckyWagon_01_DWork.s9_motohawk_trigger1_DWORK1) {
    BuckyWagon_01_CCPDaqProcessing(0);
  }
}
