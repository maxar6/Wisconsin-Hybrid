/*
 * Trigger_BGND_BASEx20_PERIODIC_6201p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1522
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 23 13:00:54 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_BGND_BASEx20_PERIODIC_6201p0004(void)
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
      uint32_T rtb_Sum_m;
      real_T tmp;

      /* RelationalOperator: '<S312>/RelOp' incorporates:
       *  Constant: '<S312>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S311>/motohawk_data_read'
       */
      rtb_RelOp_f = (((uint8_T)EngineState_DataStore()) == 3);

      /* Switch: '<S313>/Switch' incorporates:
       *  Constant: '<S313>/Constant'
       *  Constant: '<S313>/Constant1'
       */
      if (rtb_RelOp_f) {
        BaseEngineController_A02_B.s313_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s313_Switch = 0U;
      }

      /* End of Switch: '<S313>/Switch' */
      /* Sum: '<S313>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S313>/motohawk_data_read1'
       */
      rtb_Sum_m = BaseEngineController_A02_B.s313_Switch + EngineHours_DataStore
        ();

      /* If: '<S314>/If' incorporates:
       *  DataTypeConversion: '<S314>/Data Type Conversion'
       *  Inport: '<S315>/In1'
       *  Inport: '<S316>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S314>/override_enable'
       */
      if ((Hour_Meter_Overwite_ovr_DataStore())) {
        /* DataTypeConversion: '<S314>/Data Type Conversion' incorporates:
         *  Gain: '<S314>/Gain'
         *  S-Function (motohawk_sfun_calibration): '<S314>/new_value'
         */
        tmp = 3600.0 * (Hour_Meter_Overwite_new_DataStore());
        if (rtIsNaN(tmp) || rtIsInf(tmp)) {
          tmp = 0.0;
        } else {
          tmp = fmod(floor(tmp), 4.294967296E+9);
        }

        /* End of DataTypeConversion: '<S314>/Data Type Conversion' */

        /* Outputs for IfAction SubSystem: '<S314>/NewValue' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        rtb_Merge_d = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)
          tmp;

        /* End of Outputs for SubSystem: '<S314>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S314>/OldValue' incorporates:
         *  ActionPort: '<S316>/Action Port'
         */
        rtb_Merge_d = rtb_Sum_m;

        /* End of Outputs for SubSystem: '<S314>/OldValue' */
      }

      /* End of If: '<S314>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S313>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineHours */
      {
        EngineHours_DataStore() = rtb_Merge_d;
      }

      /* Gain: '<S313>/Gain' incorporates:
       *  DataTypeConversion: '<S313>/Data Type Conversion'
       */
      BaseEngineController_A02_B.s313_Gain = 0.00027777777777777778 * (real_T)
        rtb_Merge_d;
    }
  }
}
