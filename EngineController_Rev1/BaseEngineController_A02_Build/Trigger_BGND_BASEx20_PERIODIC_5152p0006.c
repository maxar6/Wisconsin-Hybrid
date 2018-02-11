/*
 * Trigger_BGND_BASEx20_PERIODIC_5152p0006.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1560
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Feb 10 00:15:12 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_BGND_BASEx20_PERIODIC_5152p0006(void)
{
  /* Named constants for Stateflow: '<S823>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  {
    /* Output and update for function-call system: '<S277>/Run Timers' */
    {
      /* local block i/o variables */
      uint32_T rtb_Merge_d;
      boolean_T rtb_RelOp_f;
      uint32_T rtb_Sum_m;
      real_T tmp;

      /* RelationalOperator: '<S298>/RelOp' incorporates:
       *  Constant: '<S298>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
       */
      rtb_RelOp_f = (((uint8_T)EngineState_DataStore()) == 3);

      /* Switch: '<S299>/Switch' incorporates:
       *  Constant: '<S299>/Constant'
       *  Constant: '<S299>/Constant1'
       */
      if (rtb_RelOp_f) {
        BaseEngineController_A02_B.s299_Switch = 1U;
      } else {
        BaseEngineController_A02_B.s299_Switch = 0U;
      }

      /* End of Switch: '<S299>/Switch' */
      /* Sum: '<S299>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read1'
       */
      rtb_Sum_m = BaseEngineController_A02_B.s299_Switch + EngineHours_DataStore
        ();

      /* If: '<S300>/If' incorporates:
       *  DataTypeConversion: '<S300>/Data Type Conversion'
       *  Inport: '<S301>/In1'
       *  Inport: '<S302>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S300>/override_enable'
       */
      if ((Hour_Meter_Overwite_ovr_DataStore())) {
        /* DataTypeConversion: '<S300>/Data Type Conversion' incorporates:
         *  Gain: '<S300>/Gain'
         *  S-Function (motohawk_sfun_calibration): '<S300>/new_value'
         */
        tmp = 3600.0 * (Hour_Meter_Overwite_new_DataStore());
        if (rtIsNaN(tmp) || rtIsInf(tmp)) {
          tmp = 0.0;
        } else {
          tmp = fmod(floor(tmp), 4.294967296E+9);
        }

        /* End of DataTypeConversion: '<S300>/Data Type Conversion' */

        /* Outputs for IfAction SubSystem: '<S300>/NewValue' incorporates:
         *  ActionPort: '<S301>/Action Port'
         */
        rtb_Merge_d = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)
          tmp;

        /* End of Outputs for SubSystem: '<S300>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S300>/OldValue' incorporates:
         *  ActionPort: '<S302>/Action Port'
         */
        rtb_Merge_d = rtb_Sum_m;

        /* End of Outputs for SubSystem: '<S300>/OldValue' */
      }

      /* End of If: '<S300>/If' */

      /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
      /* Write to Data Storage as scalar: EngineHours */
      {
        EngineHours_DataStore() = rtb_Merge_d;
      }

      /* Gain: '<S299>/Gain' incorporates:
       *  DataTypeConversion: '<S299>/Data Type Conversion'
       */
      BaseEngineController_A02_B.s299_Gain = 0.00027777777777777778 * (real_T)
        rtb_Merge_d;
    }
  }
}
