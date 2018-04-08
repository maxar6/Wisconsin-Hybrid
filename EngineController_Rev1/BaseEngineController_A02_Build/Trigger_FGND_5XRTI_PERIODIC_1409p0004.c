/*
 * Trigger_FGND_5XRTI_PERIODIC_1409p0004.c
 *
 * Code generation for model "BaseEngineController_A02.mdl".
 *
 * Model version              : 1.1615
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Apr 07 14:22:48 2018
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
  /* Named constants for Stateflow: '<S805>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Coil Characterization' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d1;
      index_T rtb_SpkEnergy09Idx;
      real_T rtb_Merge_e;

      /* S-Function Block: <S17>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkEnergy09In_DataStore()) =
          BaseEngineController_A02_B.s120_SparkEnergy;
        (SpkEnergy09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s120_SparkEnergy,
           (SpkEnergy09IdxArr_DataStore()), 9, (SpkEnergy09Idx_DataStore()));
        rtb_SpkEnergy09Idx = (SpkEnergy09Idx_DataStore());
      }

      /* S-Function Block: <S17>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1 = TableInterpolation2D_real_T
          (rtb_SpkEnergy09Idx,
           BaseEngineController_A02_B.s318_motohawk_prelookup, (real_T *)
           ((CoilDwellMap_DataStore())), 9, 9);
        (CoilDwell_DataStore()) = rtb_motohawk_interpolation_2d1;
      }

      /* If: '<S114>/If' incorporates:
       *  Constant: '<S17>/Constant'
       *  Inport: '<S115>/In1'
       *  Inport: '<S116>/In1'
       *  Product: '<S17>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S114>/override_enable'
       *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S17>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S17>/motohawk_prelookup'
       *  Sum: '<S17>/Sum'
       *  UnitDelay: '<S114>/Unit Delay'
       */
      if ((SparkDwell_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S114>/NewValue' incorporates:
         *  ActionPort: '<S115>/Action Port'
         */
        rtb_Merge_e = BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S114>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S114>/OldValue' incorporates:
         *  ActionPort: '<S116>/Action Port'
         */
        rtb_Merge_e = (CoilDrvrDlyTime_DataStore()) / 1000.0 +
          rtb_motohawk_interpolation_2d1;

        /* End of Outputs for SubSystem: '<S114>/OldValue' */
      }

      /* End of If: '<S114>/If' */

      /* Sum: '<S114>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S114>/offset'
       */
      BaseEngineController_A02_B.s114_Sum = rtb_Merge_e +
        (SparkDwell_offset_DataStore());

      /* RelationalOperator: '<S17>/Only Enable Spark when Energy is Above Zero' incorporates:
       *  Constant: '<S17>/Constant1'
       */
      BaseEngineController_A02_B.s17_OnlyEnableSparkwhenEnergyisAboveZero =
        ((BaseEngineController_A02_B.s120_SparkEnergy > 0.0));

      /* Update for UnitDelay: '<S114>/Unit Delay' */
      BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE = rtb_Merge_e;
    }
  }
}
