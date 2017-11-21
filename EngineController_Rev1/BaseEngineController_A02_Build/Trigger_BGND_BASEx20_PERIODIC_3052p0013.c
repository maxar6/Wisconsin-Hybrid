/*
 * Trigger_BGND_BASEx20_PERIODIC_3052p0013.c
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

void Trigger_BGND_BASEx20_PERIODIC_3052p0013(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S281>/Run Timers' */
    {
      /* local block i/o variables */
      uint32_T rtb_Merge_d;
      boolean_T rtb_RelOp_f;
      real_T rtb_DataTypeConversion_f;

      /* RelationalOperator: '<S312>/RelOp' incorporates:
       *  Constant: '<S312>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S311>/motohawk_data_read'
       */
      rtb_RelOp_f = (((uint8_T)EngineState_DataStore()) == 3);

      /* Gain: '<S314>/Gain' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S314>/new_value'
       */
      rtb_DataTypeConversion_f = 3600.0 * (Hour_Meter_Overwite_new_DataStore());

      /* Switch: '<S313>/Switch' incorporates:
       *  Constant: '<S313>/Constant'
       *  Constant: '<S313>/Constant1'
       */
      if (rtb_RelOp_f) {
        BaseEngineController_A02_B.s313_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s313_Switch = 0U;
      }

      /* If: '<S314>/If' incorporates:
       *  ActionPort: '<S315>/Action Port'
       *  ActionPort: '<S316>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S314>/override_enable'
       *  SubSystem: '<S314>/NewValue'
       *  SubSystem: '<S314>/OldValue'
       */
      if ((Hour_Meter_Overwite_ovr_DataStore())) {
        /* Inport: '<S315>/In1' incorporates:
         *  DataTypeConversion: '<S314>/Data Type Conversion'
         */
        if (rtIsNaN(rtb_DataTypeConversion_f) || rtIsInf
            (rtb_DataTypeConversion_f)) {
          rtb_DataTypeConversion_f = 0.0;
        } else {
          rtb_DataTypeConversion_f = fmod(floor(rtb_DataTypeConversion_f),
            4.294967296E+009);
        }

        rtb_Merge_d = rtb_DataTypeConversion_f < 0.0 ? (uint32_T)(-((int32_T)
          (uint32_T)(-rtb_DataTypeConversion_f))) : (uint32_T)
          rtb_DataTypeConversion_f;
      } else {
        /* Inport: '<S316>/In1' incorporates:
         *  S-Function (motohawk_sfun_data_read): '<S313>/motohawk_data_read1'
         *  Sum: '<S313>/Sum'
         */
        rtb_Merge_d = BaseEngineController_A02_B.s313_Switch +
          EngineHours_DataStore();
      }

      /* S-Function (motohawk_sfun_data_write): '<S313>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineHours */
      {
        EngineHours_DataStore() = rtb_Merge_d;
      }

      /* Gain: '<S313>/Gain' incorporates:
       *  DataTypeConversion: '<S313>/Data Type Conversion'
       */
      BaseEngineController_A02_B.s313_Gain = 2.7777777777777778E-004 * (real_T)
        rtb_Merge_d;
    }
  }
}
