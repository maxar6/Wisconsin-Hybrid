/*
 * Trigger_FGND_TDC_EVENT_5531p0006.c
 *
 * Real-Time Workshop code generation for Simulink model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1510
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_TDC_EVENT_5531p0006(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s783_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S783>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S785>/Switch1' incorporates:
       *  Constant: '<S785>/Constant'
       *  Constant: '<S785>/Constant1'
       *  Sum: '<S785>/Sum'
       *  UnitDelay: '<S785>/CrankCounter'
       */
      if (BaseEngineController_A02_B.s783_CrankCounter >= 1.0) {
        BaseEngineController_A02_B.s785_Switch1 = 0U;
      } else {
        tmp = 1 + BaseEngineController_A02_DWork.s785_CrankCounter_DSTATE;
        if ((uint32_T)tmp > 255U) {
          BaseEngineController_A02_B.s785_Switch1 = MAX_uint8_T;
        } else {
          BaseEngineController_A02_B.s785_Switch1 = (uint8_T)tmp;
        }
      }

      /* Update for UnitDelay: '<S785>/CrankCounter' */
      BaseEngineController_A02_DWork.s785_CrankCounter_DSTATE =
        BaseEngineController_A02_B.s785_Switch1;
    }
  }
}
