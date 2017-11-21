/*
 * Trigger_FGND_5XRTI_PERIODIC_15457p0007.c
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

void Trigger_FGND_5XRTI_PERIODIC_15457p0007(void)
{
  /* Named constants for Stateflow: '<S840>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

  if (BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Coil Characterization' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d1;
      index_T rtb_SpkEnergy09Idx;
      real_T rtb_UnitDelay_c;

      /* UnitDelay: '<S114>/Unit Delay' */
      rtb_UnitDelay_c = BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE;

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
           BaseEngineController_A02_B.s362_motohawk_prelookup, (real_T *)
           ((CoilDwellMap_DataStore())), 9, 9);
        (CoilDwell_DataStore()) = rtb_motohawk_interpolation_2d1;
      }

      /* If: '<S114>/If' incorporates:
       *  ActionPort: '<S115>/Action Port'
       *  ActionPort: '<S116>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S114>/override_enable'
       *  SubSystem: '<S114>/NewValue'
       *  SubSystem: '<S114>/OldValue'
       */
      if ((SparkDwell_ovr_DataStore())) {
      } else {
        /* Inport: '<S116>/In1' incorporates:
         *  Constant: '<S17>/Constant'
         *  Product: '<S17>/Product'
         *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration'
         *  S-Function (motohawk_sfun_interpolation_2d): '<S17>/motohawk_interpolation_2d1'
         *  S-Function (motohawk_sfun_prelookup): '<S17>/motohawk_prelookup'
         *  Sum: '<S17>/Sum'
         */
        rtb_UnitDelay_c = (CoilDrvrDlyTime_DataStore()) / 1000.0 +
          rtb_motohawk_interpolation_2d1;
      }

      /* Sum: '<S114>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S114>/offset'
       */
      BaseEngineController_A02_B.s114_Sum = rtb_UnitDelay_c +
        (SparkDwell_offset_DataStore());

      /* RelationalOperator: '<S17>/Only Enable Spark when Energy is Above Zero' incorporates:
       *  Constant: '<S17>/Constant1'
       */
      BaseEngineController_A02_B.s17_OnlyEnableSparkwhenEnergyisAboveZero =
        (BaseEngineController_A02_B.s120_SparkEnergy > 0.0);

      /* Update for UnitDelay: '<S114>/Unit Delay' */
      BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE = rtb_UnitDelay_c;
    }
  }
}
