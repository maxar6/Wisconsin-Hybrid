/*
 * Trigger_FGND_20XRTI_PERIODIC_589p0005.c
 *
 * Code generation for model "DynoController_Rev1.mdl".
 *
 * Model version              : 1.309
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Feb 28 16:20:04 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

void Trigger_FGND_20XRTI_PERIODIC_589p0005(void)
{
  if (DynoController_Rev1_DWork.s6_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S6>/Guages' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time;
      real_T rtb_Saturation;
      uint16_T rtb_Switch1;
      real_T tmp;

      /* If: '<S127>/If' incorporates:
       *  Inport: '<S133>/In1'
       *  Inport: '<S134>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S127>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S127>/override_enable'
       */
      if ((RPM_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S127>/NewValue' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        DynoController_Rev1_B.s127_Merge = ((int16_T)
          (RPM_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S133>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(71);
        }

        /* End of Outputs for SubSystem: '<S127>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S127>/OldValue' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        DynoController_Rev1_B.s127_Merge = DynoController_Rev1_B.s55_Merge;

        /* S-Function (motohawk_sfun_code_cover): '<S134>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(72);
        }

        /* End of Outputs for SubSystem: '<S127>/OldValue' */
      }

      /* End of If: '<S127>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 0,
          DynoController_Rev1_B.s127_Merge, (E_VDOGaugePriority) 1);
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
      /* If: '<S126>/If' incorporates:
       *  Inport: '<S131>/In1'
       *  Inport: '<S132>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S126>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S126>/override_enable'
       */
      if ((SOC_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S126>/NewValue' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        DynoController_Rev1_B.s126_Merge = ((int16_T)
          (SOC_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S131>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(69);
        }

        /* End of Outputs for SubSystem: '<S126>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S126>/OldValue' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        DynoController_Rev1_B.s126_Merge = DynoController_Rev1_B.s77_Gain;

        /* S-Function (motohawk_sfun_code_cover): '<S132>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(70);
        }

        /* End of Outputs for SubSystem: '<S126>/OldValue' */
      }

      /* End of If: '<S126>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write1' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 2,
          DynoController_Rev1_B.s126_Merge, (E_VDOGaugePriority) 1);
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
      /* If: '<S128>/If' incorporates:
       *  Inport: '<S135>/In1'
       *  Inport: '<S136>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S128>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S128>/override_enable'
       */
      if ((OilPressure_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S128>/NewValue' incorporates:
         *  ActionPort: '<S135>/Action Port'
         */
        DynoController_Rev1_B.s128_Merge = ((int16_T)
          (OilPressure_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S135>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(73);
        }

        /* End of Outputs for SubSystem: '<S128>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S128>/OldValue' incorporates:
         *  ActionPort: '<S136>/Action Port'
         */
        DynoController_Rev1_B.s128_Merge = DynoController_Rev1_B.s77_Gain1;

        /* S-Function (motohawk_sfun_code_cover): '<S136>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(74);
        }

        /* End of Outputs for SubSystem: '<S128>/OldValue' */
      }

      /* End of If: '<S128>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write2' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 5,
          DynoController_Rev1_B.s128_Merge, (E_VDOGaugePriority) 1);
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
      /* If: '<S129>/If' incorporates:
       *  Inport: '<S137>/In1'
       *  Inport: '<S138>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S129>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S129>/override_enable'
       */
      if ((CoolantTemp_Gauges_Ovr_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S129>/NewValue' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        DynoController_Rev1_B.s129_Merge = ((int16_T)
          (CoolantTemp_Gauges_Ovr_new_DataStore()));

        /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(75);
        }

        /* End of Outputs for SubSystem: '<S129>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S129>/OldValue' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        DynoController_Rev1_B.s129_Merge = DynoController_Rev1_B.s77_Gain2;

        /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
        /* Code Coverage Test: DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue */
        {
          extern void MH_CodeCovered(uint32_T idx);
          MH_CodeCovered(76);
        }

        /* End of Outputs for SubSystem: '<S129>/OldValue' */
      }

      /* End of If: '<S129>/If' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S77>/VDO Gauge Write3' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 1,
          DynoController_Rev1_B.s129_Merge, (E_VDOGaugePriority) 1);
      }

      /* S-Function Block: <S130>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&DynoController_Rev1_DWork.s130_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S130>/Sum' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S130>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S130>/motohawk_delta_time'
       */
      DynoController_Rev1_B.s130_Sum = rtb_motohawk_delta_time +
        TimeSinceKeyOnTimer_DataStore();

      /* Switch: '<S77>/Switch1' incorporates:
       *  Constant: '<S77>/Constant6'
       *  RelationalOperator: '<S77>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration2'
       */
      if ((VDO_Gauge_StartupDelay_DataStore()) >= DynoController_Rev1_B.s130_Sum)
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

      /* Saturate: '<S130>/Saturation' */
      rtb_Saturation = DynoController_Rev1_B.s130_Sum >= 16000.0 ? 16000.0 :
        DynoController_Rev1_B.s130_Sum <= 0.0 ? 0.0 :
        DynoController_Rev1_B.s130_Sum;

      /* S-Function (motohawk_sfun_data_write): '<S130>/motohawk_data_write' */
      /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
      {
        TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
      }
    }
  }
}
