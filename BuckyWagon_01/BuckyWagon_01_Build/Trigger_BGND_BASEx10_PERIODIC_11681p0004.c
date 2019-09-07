/*
 * Trigger_BGND_BASEx10_PERIODIC_11681p0004.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1596
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Sep 07 17:36:03 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_BGND_BASEx10_PERIODIC_11681p0004(void)
{
  if (BuckyWagon_01_DWork.s9_motohawk_trigger6_DWORK1) {
    BuckyWagon_01_CCPDaqProcessing(6);
  }
}
