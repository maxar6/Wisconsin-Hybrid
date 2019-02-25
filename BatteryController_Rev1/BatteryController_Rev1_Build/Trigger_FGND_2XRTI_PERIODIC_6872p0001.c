/*
 * Trigger_FGND_2XRTI_PERIODIC_6872p0001.c
 *
 * Code generation for model "BatteryController_Rev1.mdl".
 *
 * Model version              : 1.590
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Fri Sep 07 09:42:57 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

void Trigger_FGND_2XRTI_PERIODIC_6872p0001(void)
{
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger_DWORK1) {
    BatteryController_Rev1_CCPDaqProcessing(1);
  }
}
