/*
 * Trigger_FGND_20XRTI_PERIODIC_10474p0001.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2150
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Sep 04 13:37:31 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_FGND_20XRTI_PERIODIC_10474p0001(void)
{
  if (Mooventure2016_Rev5_DWork.s5_motohawk_trigger3_DWORK1) {
    Mooventure2016_Rev5_CCPDaqProcessing(3);
  }
}
