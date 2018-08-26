/*
 * Trigger_FGND_5XRTI_PERIODIC_1409p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1639
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Aug 25 19:54:14 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1409p0004(void)
{
  /* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S14>/Spark Coil Characterization' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d1;
      index_T rtb_SpkEnergy09Idx;
      real_T rtb_Merge_e;

      /* S-Function Block: <S25>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkEnergy09In_DataStore()) =
          BaseEngineController_A02_B.s128_SparkEnergy;
        (SpkEnergy09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s128_SparkEnergy,
           (SpkEnergy09IdxArr_DataStore()), 9, (SpkEnergy09Idx_DataStore()));
        rtb_SpkEnergy09Idx = (SpkEnergy09Idx_DataStore());
      }

      /* S-Function Block: <S25>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1 = TableInterpolation2D_real_T
          (rtb_SpkEnergy09Idx,
           BaseEngineController_A02_B.s340_motohawk_prelookup, (real_T *)
           ((CoilDwellMap_DataStore())), 9, 9);
        (CoilDwell_DataStore()) = rtb_motohawk_interpolation_2d1;
      }

      /* If: '<S122>/If' incorporates:
       *  Constant: '<S25>/Constant'
       *  Inport: '<S123>/In1'
       *  Inport: '<S124>/In1'
       *  Product: '<S25>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S122>/override_enable'
       *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S25>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S25>/motohawk_prelookup'
       *  Sum: '<S25>/Sum'
       *  UnitDelay: '<S122>/Unit Delay'
       */
      if ((SparkDwell_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S122>/NewValue' incorporates:
         *  ActionPort: '<S123>/Action Port'
         */
        rtb_Merge_e = BaseEngineController_A02_DWork.s122_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S122>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S122>/OldValue' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        rtb_Merge_e = (CoilDrvrDlyTime_DataStore()) / 1000.0 +
          rtb_motohawk_interpolation_2d1;

        /* End of Outputs for SubSystem: '<S122>/OldValue' */
      }

      /* End of If: '<S122>/If' */

      /* Sum: '<S122>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S122>/offset'
       */
      BaseEngineController_A02_B.s122_Sum = rtb_Merge_e +
        (SparkDwell_offset_DataStore());

      /* RelationalOperator: '<S25>/Only Enable Spark when Energy is Above Zero' incorporates:
       *  Constant: '<S25>/Constant1'
       */
      BaseEngineController_A02_B.s25_OnlyEnableSparkwhenEnergyisAboveZero =
        ((BaseEngineController_A02_B.s128_SparkEnergy > 0.0));

      /* Update for UnitDelay: '<S122>/Unit Delay' */
      BaseEngineController_A02_DWork.s122_UnitDelay_DSTATE = rtb_Merge_e;
    }
  }
}
