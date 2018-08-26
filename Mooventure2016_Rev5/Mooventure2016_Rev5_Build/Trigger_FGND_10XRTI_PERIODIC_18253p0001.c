/*
 * Trigger_FGND_10XRTI_PERIODIC_18253p0001.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2141
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 21:19:10 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_FGND_10XRTI_PERIODIC_18253p0001(void)
{
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger2_DWORK1) {
    Mooventure2016_Rev5_CCPDaqProcessing(2);
  }
}
