/*
 * Trigger_FGND_20XRTI_PERIODIC_10837p0011.c
 *
 * Code generation for model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.298
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Jan 15 12:10:05 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_FGND_20XRTI_PERIODIC_10837p0011(void)
{
  if (DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S6>/Guages' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      uint16_T rtb_Switch1;
      real_T tmp;

      /* If: '<S121>/If' incorporates:
       *  Inport: '<S127>/In1'
       *  Inport: '<S128>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S121>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S121>/override_enable'
       */
      if ((RPM_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S121>/NewValue' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        DynoController_Rev1_B.s121_Merge = ((int16_T)
          (RPM_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S127>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(67);
        }

        /* End of Outputs for SubSystem: '<S121>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S121>/OldValue' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        DynoController_Rev1_B.s121_Merge = DynoController_Rev1_B.s55_Merge;

        /* S-Function (motohawk_sfun_code_cover): '<S128>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(68);
        }

        /* End of Outputs for SubSystem: '<S121>/OldValue' */
      }

      /* End of If: '<S121>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 0,
          DynoController_Rev1_B.s121_Merge, (E_VDOGaugePriority) 1);
      }

      /* Gain: '<S77>/Gain' */
      tmp = 10.0 * DynoController_Rev1_B.s39_Merge;
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(tmp), 65536.0);
      }

      DynoController_Rev1_B.s77_Gain = (int16_T)(tmp < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-tmp : (int16_T)(uint16_T)tmp);

      /* End of Gain: '<S77>/Gain' */
      /* If: '<S120>/If' incorporates:
       *  Inport: '<S125>/In1'
       *  Inport: '<S126>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S120>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S120>/override_enable'
       */
      if ((SOC_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S120>/NewValue' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        DynoController_Rev1_B.s120_Merge = ((int16_T)
          (SOC_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S125>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(65);
        }

        /* End of Outputs for SubSystem: '<S120>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S120>/OldValue' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        DynoController_Rev1_B.s120_Merge = DynoController_Rev1_B.s77_Gain;

        /* S-Function (motohawk_sfun_code_cover): '<S126>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(66);
        }

        /* End of Outputs for SubSystem: '<S120>/OldValue' */
      }

      /* End of If: '<S120>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write1' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 2,
          DynoController_Rev1_B.s120_Merge, (E_VDOGaugePriority) 1);
      }

      /* Gain: '<S77>/Gain1' */
      tmp = 10.0 * DynoController_Rev1_B.s54_Merge;
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(tmp), 65536.0);
      }

      DynoController_Rev1_B.s77_Gain1 = (int16_T)(tmp < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-tmp : (int16_T)(uint16_T)tmp);

      /* End of Gain: '<S77>/Gain1' */
      /* If: '<S122>/If' incorporates:
       *  Inport: '<S129>/In1'
       *  Inport: '<S130>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S122>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S122>/override_enable'
       */
      if ((OilPressure_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S122>/NewValue' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        DynoController_Rev1_B.s122_Merge = ((int16_T)
          (OilPressure_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S129>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(69);
        }

        /* End of Outputs for SubSystem: '<S122>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S122>/OldValue' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        DynoController_Rev1_B.s122_Merge = DynoController_Rev1_B.s77_Gain1;

        /* S-Function (motohawk_sfun_code_cover): '<S130>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(70);
        }

        /* End of Outputs for SubSystem: '<S122>/OldValue' */
      }

      /* End of If: '<S122>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write2' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 5,
          DynoController_Rev1_B.s122_Merge, (E_VDOGaugePriority) 1);
      }

      /* Gain: '<S77>/Gain2' */
      tmp = 10.0 * DynoController_Rev1_B.s56_Merge;
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(tmp), 65536.0);
      }

      DynoController_Rev1_B.s77_Gain2 = (int16_T)(tmp < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-tmp : (int16_T)(uint16_T)tmp);

      /* End of Gain: '<S77>/Gain2' */
      /* If: '<S123>/If' incorporates:
       *  Inport: '<S131>/In1'
       *  Inport: '<S132>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S123>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S123>/override_enable'
       */
      if ((CoolantTemp_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S123>/NewValue' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        DynoController_Rev1_B.s123_Merge = ((int16_T)
          (CoolantTemp_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S131>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(71);
        }

        /* End of Outputs for SubSystem: '<S123>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S123>/OldValue' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        DynoController_Rev1_B.s123_Merge = DynoController_Rev1_B.s77_Gain2;

        /* S-Function (motohawk_sfun_code_cover): '<S132>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(72);
        }

        /* End of Outputs for SubSystem: '<S123>/OldValue' */
      }

      /* End of If: '<S123>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write3' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 1,
          DynoController_Rev1_B.s123_Merge, (E_VDOGaugePriority) 1);
      }

      /* S-Function Block: <S124>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&DynoController_Rev1_DWork.s124_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S124>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S124>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S124>/motohawk_delta_time'
       */
      DynoController_Rev1_B.s124_Sum = rtb_motohawk_delta_time +
        TimeSinceKeyOnTimer_DataStore();

      /* Switch: '<S77>/Switch1' incorporates:
       *  Constant: '<S77>/Constant6'
       *  RelationalOperator: '<S77>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration2'
       */
      if ((VDO_Gauge_StartupDelay_DataStore()) >= DynoController_Rev1_B.s124_Sum)
      {
        rtb_Switch1 = ((uint16_T)(VDO_Gauge_Brightness_DataStore()));
      } else {
        rtb_Switch1 = 1U;
      }

      /* End of Switch: '<S77>/Switch1' */

      /* S-Function (motohawk_sfun_vdogauge_brightness): '<S77>/VDO Gauge Brightness' */
      /* VDO Gauge Brightness */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_Illumination_Set
          (E_VDOGaugeBrightness in_eLevel);
        VDOGaugeService_GaugeChain_Illumination_Set((E_VDOGaugeBrightness)
          rtb_Switch1);
      }

      /* Saturate: '<S124>/Saturation' */
      rtb_Saturation = DynoController_Rev1_B.s124_Sum >= 16000.0 ? 16000.0 :
        DynoController_Rev1_B.s124_Sum <= 0.0 ? 0.0 :
        DynoController_Rev1_B.s124_Sum;

      /* S-Function (motohawk_sfun_data_write): '<S124>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
      {
        TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
      }
    }
  }
}
