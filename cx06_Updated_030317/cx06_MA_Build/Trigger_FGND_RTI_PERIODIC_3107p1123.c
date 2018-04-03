/*
 * Trigger_FGND_RTI_PERIODIC_3107p1123.c
 *
 * Real-Time Workshop code generation for Simulink model "cx06_MA.mdl".
 *
 * Model version              : 1.1504
 * Real-Time Workshop version : 7.5  (R2010a)  25-Jan-2010
 * C source code generated on : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA.h"
#include "cx06_MA_private.h"

void Trigger_FGND_RTI_PERIODIC_3107p1123(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    cx06_MA_M->Timing.clockTick0 = lower32Bits;
    cx06_MA_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    /* Output and update for function-call system: '<Root>/Fiat Accel Control' */
    {
      /* local block i/o variables */
      uint32_T rtb_DataTypeConversion2;
      uint32_T rtb_DataTypeConversion3_d;
      int16_T rtb_DataTypeConversion1_g;
      uint16_T rtb_motohawk_ain;
      real_T rtb_Product_d;
      real_T rtb_Sum1_h;
      cx06_MA_DWork.root_FiatAccelControl_ELAPS_T = cx06_MA_M->Timing.clockTick0
        - cx06_MA_DWork.root_FiatAccelControl_PREV_T;
      cx06_MA_DWork.root_FiatAccelControl_PREV_T = cx06_MA_M->Timing.clockTick0;

      /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
      cx06_MA_B.s2_DiscreteTimeIntegrator =
        cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE;

      /* Product: '<S2>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration4'
       */
      rtb_Product_d = cx06_MA_B.s2_DiscreteTimeIntegrator * (Ki_DataStore());

      /* S-Function Block: <S2>/motohawk_ain1 Resource: AN10M */
      {
        extern NativeError_S AN10M_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        AN10M_AnalogInput_Get(&cx06_MA_B.s2_motohawk_ain1, NULL);
      }

      /* Sum: '<S2>/Sum' incorporates:
       *  Gain: '<S2>/Gain'
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration1'
       */
      cx06_MA_B.s2_Sum = (volt_out_1_DataStore()) - ldexp(41000.0 * (real_T)
        cx06_MA_B.s2_motohawk_ain1, -23);

      /* Product: '<S2>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration3'
       */
      cx06_MA_B.s2_Product1 = cx06_MA_B.s2_Sum * (Kp_DataStore());

      /* Sum: '<S2>/Sum3' */
      cx06_MA_B.s2_Sum3 = rtb_Product_d + cx06_MA_B.s2_Product1;

      /* If: '<S7>/If' incorporates:
       *  ActionPort: '<S8>/Action Port'
       *  ActionPort: '<S9>/Action Port'
       *  S-Function (motohawk_sfun_calibration): '<S7>/override_enable'
       *  SubSystem: '<S7>/NewValue'
       *  SubSystem: '<S7>/OldValue'
       */
      if ((duty_override_ovr_DataStore())) {
        /* Inport: '<S8>/In1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S7>/new_value'
         */
        cx06_MA_B.s7_Merge = ((int16_T)(duty_override_new_DataStore()));
      } else {
        /* Inport: '<S9>/In1' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Gain: '<S2>/Gain2'
         *  Saturate: '<S2>/Saturation'
         */
        rtb_Product_d = 8.192E+002 * rt_SATURATE(cx06_MA_B.s2_Sum3, 0.0, 5.0);
        if (rtIsNaN(rtb_Product_d) || rtIsInf(rtb_Product_d)) {
          rtb_Product_d = 0.0;
        } else {
          rtb_Product_d = fmod(floor(rtb_Product_d), 65536.0);
        }

        cx06_MA_B.s7_Merge = (int16_T)(rtb_Product_d < 0.0 ? (int32_T)(int16_T)(
          -((int16_T)(uint16_T)(-rtb_Product_d))) : (int32_T)(int16_T)(uint16_T)
          rtb_Product_d);
      }

      /* Product: '<S2>/Product2' incorporates:
       *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator1'
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration4'
       */
      rtb_Product_d = (Ki_DataStore()) *
        cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE;

      /* S-Function Block: <S2>/motohawk_ain Resource: AN11M */
      {
        extern NativeError_S AN11M_AnalogInput_Get(uint16_T *adc, uint16_T
          *status);
        AN11M_AnalogInput_Get(&rtb_motohawk_ain, NULL);
      }

      /* Sum: '<S2>/Sum1' incorporates:
       *  Gain: '<S2>/Gain1'
       *  S-Function (motohawk_sfun_ain): '<S2>/motohawk_ain'
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration2'
       */
      rtb_Sum1_h = (volt_out_2_DataStore()) - ldexp(41000.0 * (real_T)
        rtb_motohawk_ain, -23);

      /* Sum: '<S2>/Sum2' incorporates:
       *  Product: '<S2>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration3'
       */
      rtb_Product_d += (Kp_DataStore()) * rtb_Sum1_h;

      /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
       *  Gain: '<S2>/Gain3'
       *  Saturate: '<S2>/Saturation1'
       */
      rtb_Product_d = 8.192E+002 * rt_SATURATE(rtb_Product_d, 0.0, 5.0);
      if (rtIsNaN(rtb_Product_d) || rtIsInf(rtb_Product_d)) {
        rtb_Product_d = 0.0;
      } else {
        rtb_Product_d = fmod(floor(rtb_Product_d), 65536.0);
      }

      rtb_DataTypeConversion1_g = (int16_T)(rtb_Product_d < 0.0 ? (int32_T)
        (int16_T)(-((int16_T)(uint16_T)(-rtb_Product_d))) : (int32_T)(int16_T)
        (uint16_T)rtb_Product_d);

      /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration5'
       */
      if (rtIsNaN((PWM_Freq_DataStore())) || rtIsInf((PWM_Freq_DataStore()))) {
        rtb_Product_d = 0.0;
      } else {
        rtb_Product_d = fmod(floor((PWM_Freq_DataStore())), 4.294967296E+009);
      }

      rtb_DataTypeConversion2 = rtb_Product_d < 0.0 ? (uint32_T)(-((int32_T)
        (uint32_T)(-rtb_Product_d))) : (uint32_T)rtb_Product_d;

      /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S2>/motohawk_calibration5'
       */
      if (rtIsNaN((PWM_Freq_DataStore())) || rtIsInf((PWM_Freq_DataStore()))) {
        rtb_Product_d = 0.0;
      } else {
        rtb_Product_d = fmod(floor((PWM_Freq_DataStore())), 4.294967296E+009);
      }

      rtb_DataTypeConversion3_d = rtb_Product_d < 0.0 ? (uint32_T)(-((int32_T)
        (uint32_T)(-rtb_Product_d))) : (uint32_T)rtb_Product_d;

      /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
      cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE = 0.2 * (real_T)
        cx06_MA_DWork.root_FiatAccelControl_ELAPS_T * cx06_MA_B.s2_Sum +
        cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE;
      if (cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE >= 1.0) {
        cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE = 1.0;
      } else {
        if (cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE <= 0.0) {
          cx06_MA_DWork.s2_DiscreteTimeIntegrator_DSTATE = 0.0;
        }
      }

      /* Update for S-Function (motohawk_sfun_pwm): '<S2>/motohawk_pwm' */

      /* S-Function Block: INJ5D_PWMOutput */
      INJ5D_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_d,
        cx06_MA_B.s7_Merge, 0, 1);

      /* Update for S-Function (motohawk_sfun_pwm): '<S2>/motohawk_pwm1' */

      /* S-Function Block: INJ11D_PWMOutput */
      INJ11D_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2,
        rtb_DataTypeConversion1_g, 0, 1);

      /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator1' */
      cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE = 0.2 * (real_T)
        cx06_MA_DWork.root_FiatAccelControl_ELAPS_T * rtb_Sum1_h +
        cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE;
      if (cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE >= 1.0) {
        cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE = 1.0;
      } else {
        if (cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE <= 0.0) {
          cx06_MA_DWork.s2_DiscreteTimeIntegrator1_DSTATE = 0.0;
        }
      }
    }
  }
}
