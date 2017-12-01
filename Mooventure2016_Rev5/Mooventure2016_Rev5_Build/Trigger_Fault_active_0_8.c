/*
 * Trigger_Fault_active_0_8.c
 *
 * Code generation for model "Mooventure2016_Rev5.mdl".
 *
 * Model version              : 1.2026
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Nov 29 16:58:34 2017
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

void Trigger_Fault_active_0_8(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    Mooventure2016_Rev5_M->Timing.clockTick0 = lower32Bits;
    Mooventure2016_Rev5_M->Timing.clockTickH0 = upper32Bits;
  }

  /* Output and update for function-call system: '<S33>/Data Write' */
  {
    /* local block i/o variables */
    real_T rtb_motohawk_abs_time;
    real_T rtb_Torque_Request;
    real_T rtb_data;
    real_T rtb_col;
    uint32_T rtb_motohawk_data_sizeof;
    uint32_T rtb_row;
    int32_T i;
    real_T rtb_TmpSignalConversionAtSFunctionInport1[6];
    uint32_T qY;

    /* S-Function Block: <S50>/motohawk_abs_time */
    {
      extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
        uint32_T *upper32Bits_us);
      real_T now;
      uint32_T low32;
      uint32_T high32;
      Timer_FreeRunningCounter_GetTime(&low32, &high32);
      now = (real_T) (high32 * 4294.967296);
      now += (real_T) (low32 * 0.000001);
      rtb_motohawk_abs_time = now;
    }

    /* S-Function (motohawk_sfun_data_read): '<S50>/motohawk_data_read' */
    rtb_Torque_Request = TorqueRequest_DataStore();

    /* S-Function (motohawk_sfun_data_sizeof): '<S50>/motohawk_data_sizeof' */
    rtb_motohawk_data_sizeof = (Freeze_Frame_DataStore_ROWS());

    /* SignalConversion: '<S51>/TmpSignal ConversionAt SFunction Inport1' incorporates:
     *  MATLAB Function Block: '<S50>/Data Iterator'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[0] = rtb_motohawk_abs_time;
    rtb_TmpSignalConversionAtSFunctionInport1[1] =
      Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage;
    rtb_TmpSignalConversionAtSFunctionInport1[2] =
      Mooventure2016_Rev5_B.s330_Merge;
    rtb_TmpSignalConversionAtSFunctionInport1[3] = rtb_Torque_Request;
    rtb_TmpSignalConversionAtSFunctionInport1[4] =
      Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered;
    rtb_TmpSignalConversionAtSFunctionInport1[5] =
      Mooventure2016_Rev5_B.s206_IPT_InverterTemperature;

    /* MATLAB Function Block: '<S50>/Data Iterator' incorporates:
     *  S-Function (motohawk_sfun_data_sizeof): '<S50>/motohawk_data_sizeof'
     */

    /* MATLAB Function 'Foreground/Control/Faults/Freeze Frame/Data Write/Data Iterator': '<S51>:1' */
    /* '<S51>:1:3' */
    qY = rtb_motohawk_data_sizeof + 1U;
    if (qY < rtb_motohawk_data_sizeof) {
      qY = MAX_uint32_T;
    }

    rtb_row = qY;

    /* '<S51>:1:4' */
    for (i = 0; i < 6; i++) {
      /* '<S51>:1:4' */
      /* '<S51>:1:5' */
      rtb_col = (real_T)i + 1.0;

      /* '<S51>:1:6' */
      rtb_data = rtb_TmpSignalConversionAtSFunctionInport1[i];
    }

    /* End of MATLAB Function Block: '<S50>/Data Iterator' */

    /* S-Function (motohawk_sfun_data_write): '<S50>/motohawk_data_write' */
    /* Write to Data Storage as matrix: Freeze_Frame */
    {
      Freeze_Frame_DataStore()[(uint32_T)(rtb_row)][(uint32_T)(rtb_col)] =
        rtb_data;
    }
  }
}
