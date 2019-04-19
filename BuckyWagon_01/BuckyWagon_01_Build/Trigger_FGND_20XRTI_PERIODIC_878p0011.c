/*
 * Trigger_FGND_20XRTI_PERIODIC_878p0011.c
 *
 * Code generation for model "BuckyWagon_01.mdl".
 *
 * Model version              : 1.1575
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Apr 18 08:31:45 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

void Trigger_FGND_20XRTI_PERIODIC_878p0011(void)
{
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S2>/Gauges' */
    {
      /* local block i/o variables */
      uint16_T rtb_Switch1;
      boolean_T rtb_motohawk_fault_statuses[33];
      boolean_T rtb_Temperature;
      uint8_T rtb_DataTypeConversion9;
      uint8_T rtb_Switch3;
      real_T u;

      /* Switch: '<S10>/Switch1' incorporates:
       *  Constant: '<S10>/Constant6'
       *  RelationalOperator: '<S10>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration2'
       */
      if ((VDO_Gauge_StartupDelay_DataStore()) >= BuckyWagon_01_B.s359_Sum) {
        rtb_Switch1 = ((uint16_T)(VDO_Gauge_Brightness_DataStore()));
      } else {
        rtb_Switch1 = 1U;
      }

      /* End of Switch: '<S10>/Switch1' */

      /* S-Function (motohawk_sfun_vdogauge_brightness): '<S10>/VDO Gauge Brightness' */
      /* VDO Gauge Brightness */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_Illumination_Set
          (E_VDOGaugeBrightness in_eLevel);
        VDOGaugeService_GaugeChain_Illumination_Set((E_VDOGaugeBrightness)
          rtb_Switch1);
      }

      /* Logic: '<S10>/Logical Operator3' */
      rtb_Temperature = !BuckyWagon_01_B.s223_RelationalOperator;

      /* DataTypeConversion: '<S10>/Data Type Conversion7' */
      BuckyWagon_01_B.s10_DataTypeConversion7 = rtb_Temperature;

      /* S-Function (motohawk_sfun_fault_statuses): '<S10>/motohawk_fault_statuses' */
      /* Get Fault Statuses */
      {
        extern boolean_T IsFaultActive(uint32_T fault);

        /* |Accel_NeverZeroed| */
        {
          rtb_motohawk_fault_statuses[0] = IsFaultActive(0);
        }

        /* |Accel_RangeHigh| */
        {
          rtb_motohawk_fault_statuses[1] = IsFaultActive(1);
        }

        /* |Accel_RangeLow| */
        {
          rtb_motohawk_fault_statuses[2] = IsFaultActive(2);
        }

        /* |Battery_OverTemp| */
        {
          rtb_motohawk_fault_statuses[3] = IsFaultActive(3);
        }

        /* |Battery_UnderTemp| */
        {
          rtb_motohawk_fault_statuses[4] = IsFaultActive(4);
        }

        /* |Brake_RangeHigh| */
        {
          rtb_motohawk_fault_statuses[5] = IsFaultActive(5);
        }

        /* |Brake_RangeLow| */
        {
          rtb_motohawk_fault_statuses[6] = IsFaultActive(6);
        }

        /* |ChargeComplete| */
        {
          rtb_motohawk_fault_statuses[7] = IsFaultActive(7);
        }

        /* |CoolingOverheat| */
        {
          rtb_motohawk_fault_statuses[8] = IsFaultActive(8);
        }

        /* |ESTOPped| */
        {
          rtb_motohawk_fault_statuses[9] = IsFaultActive(9);
        }

        /* |Eaton_CAN_Timeout| */
        {
          rtb_motohawk_fault_statuses[10] = IsFaultActive(10);
        }

        /* |GroundFault| */
        {
          rtb_motohawk_fault_statuses[11] = IsFaultActive(11);
        }

        /* |HV_BUS_OFFLINE_check_fuse| */
        {
          rtb_motohawk_fault_statuses[12] = IsFaultActive(12);
        }

        /* |High_Cell_Voltage_Shutdown| */
        {
          rtb_motohawk_fault_statuses[13] = IsFaultActive(13);
        }

        /* |High_SOC_Alert| */
        {
          rtb_motohawk_fault_statuses[14] = IsFaultActive(14);
        }

        /* |High_SOC_Shutdown| */
        {
          rtb_motohawk_fault_statuses[15] = IsFaultActive(15);
        }

        /* |Inverter_OverTemp| */
        {
          rtb_motohawk_fault_statuses[16] = IsFaultActive(16);
        }

        /* |LVVoltHigh| */
        {
          rtb_motohawk_fault_statuses[17] = IsFaultActive(17);
        }

        /* |LVVoltLow| */
        {
          rtb_motohawk_fault_statuses[18] = IsFaultActive(18);
        }

        /* |LVVolt_RangeHigh| */
        {
          rtb_motohawk_fault_statuses[19] = IsFaultActive(19);
        }

        /* |LVVolt_RangeLow| */
        {
          rtb_motohawk_fault_statuses[20] = IsFaultActive(20);
        }

        /* |LockedRotor| */
        {
          rtb_motohawk_fault_statuses[21] = IsFaultActive(21);
        }

        /* |Low_SOC_Alert| */
        {
          rtb_motohawk_fault_statuses[22] = IsFaultActive(22);
        }

        /* |Low_SOC_Shutdown| */
        {
          rtb_motohawk_fault_statuses[23] = IsFaultActive(23);
        }

        /* |NoCAN_BCM_410| */
        {
          rtb_motohawk_fault_statuses[24] = IsFaultActive(24);
        }

        /* |NoCAN_BCM_420| */
        {
          rtb_motohawk_fault_statuses[25] = IsFaultActive(25);
        }

        /* |NoCAN_BCM_430| */
        {
          rtb_motohawk_fault_statuses[26] = IsFaultActive(26);
        }

        /* |NoCAN_CoolantPump| */
        {
          rtb_motohawk_fault_statuses[27] = IsFaultActive(27);
        }

        /* |NoCAN_CoolingFan| */
        {
          rtb_motohawk_fault_statuses[28] = IsFaultActive(28);
        }

        /* |NoCAN_PowerSteering| */
        {
          rtb_motohawk_fault_statuses[29] = IsFaultActive(29);
        }

        /* |NoCAN_UQM_04EF| */
        {
          rtb_motohawk_fault_statuses[30] = IsFaultActive(30);
        }

        /* |NoCAN_UQM_14EF| */
        {
          rtb_motohawk_fault_statuses[31] = IsFaultActive(31);
        }

        /* |NoCAN_UQM_18EF| */
        {
          rtb_motohawk_fault_statuses[32] = IsFaultActive(32);
        }
      }

      /* Logic: '<S10>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_statuses): '<S10>/motohawk_fault_statuses'
       */
      rtb_Temperature = (rtb_motohawk_fault_statuses[0] ||
                         rtb_motohawk_fault_statuses[1] ||
                         rtb_motohawk_fault_statuses[2] ||
                         rtb_motohawk_fault_statuses[3] ||
                         rtb_motohawk_fault_statuses[4] ||
                         rtb_motohawk_fault_statuses[5] ||
                         rtb_motohawk_fault_statuses[6] ||
                         rtb_motohawk_fault_statuses[7] ||
                         rtb_motohawk_fault_statuses[8] ||
                         rtb_motohawk_fault_statuses[9] ||
                         rtb_motohawk_fault_statuses[10] ||
                         rtb_motohawk_fault_statuses[11] ||
                         rtb_motohawk_fault_statuses[12] ||
                         rtb_motohawk_fault_statuses[13] ||
                         rtb_motohawk_fault_statuses[14] ||
                         rtb_motohawk_fault_statuses[15] ||
                         rtb_motohawk_fault_statuses[16] ||
                         rtb_motohawk_fault_statuses[17] ||
                         rtb_motohawk_fault_statuses[18] ||
                         rtb_motohawk_fault_statuses[19] ||
                         rtb_motohawk_fault_statuses[20] ||
                         rtb_motohawk_fault_statuses[21] ||
                         rtb_motohawk_fault_statuses[22] ||
                         rtb_motohawk_fault_statuses[23] ||
                         rtb_motohawk_fault_statuses[24] ||
                         rtb_motohawk_fault_statuses[25] ||
                         rtb_motohawk_fault_statuses[26] ||
                         rtb_motohawk_fault_statuses[27] ||
                         rtb_motohawk_fault_statuses[28] ||
                         rtb_motohawk_fault_statuses[29] ||
                         rtb_motohawk_fault_statuses[30] ||
                         rtb_motohawk_fault_statuses[31] ||
                         rtb_motohawk_fault_statuses[32]);

      /* DataTypeConversion: '<S10>/Data Type Conversion4' */
      BuckyWagon_01_B.s10_Data = rtb_Temperature;

      /* Saturate: '<S10>/Saturation3' incorporates:
       *  S-Function (motohawk_sfun_fault_action): '<S10>/motohawk_fault_action'
       *  S-Function (motohawk_sfun_fault_action): '<S10>/motohawk_fault_action1'
       *  S-Function (motohawk_sfun_fault_action): '<S10>/motohawk_fault_action2'
       *  Sum: '<S10>/Add2'
       */
      rtb_DataTypeConversion9 = (uint8_T)(((uint32_T)GetFaultActionStatus(2) +
        (uint32_T)GetFaultActionStatus(1)) + (uint32_T)GetFaultActionStatus(0));

      /* Product: '<S10>/Product' incorporates:
       *  Saturate: '<S10>/Saturation3'
       */
      BuckyWagon_01_B.s10_Product = (uint8_T)(BuckyWagon_01_B.s229_Merge ?
        (uint8_T)(rtb_DataTypeConversion9 <= 2 ? rtb_DataTypeConversion9 : 2) :
        0);

      /* Switch: '<S10>/Switch2' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Logic: '<S10>/Logical Operator2'
       *  S-Function (motohawk_sfun_fault_status): '<S10>/motohawk_fault_status'
       */
      if (IsFaultActive(11)) {
        rtb_Temperature = TRUE;
      } else {
        rtb_Temperature = !BuckyWagon_01_B.s229_Merge;
      }

      /* End of Switch: '<S10>/Switch2' */

      /* DataTypeConversion: '<S10>/Data Type Conversion3' */
      BuckyWagon_01_B.s10_Volt = rtb_Temperature;

      /* S-Function (motohawk_sfun_fault_status): '<S10>/motohawk_fault_status3'
       *
       * Regarding '<S10>/motohawk_fault_status3':
         Status : "Active"
       */
      {
        extern boolean_T IsFaultActive(uint32_T fault);
        rtb_Temperature = IsFaultActive(16);
      }

      /* DataTypeConversion: '<S10>/Data Type Conversion9' */
      rtb_DataTypeConversion9 = rtb_Temperature;

      /* Switch: '<S10>/Switch3' incorporates:
       *  Constant: '<S10>/Constant7'
       *  Constant: '<S10>/Constant8'
       *  Logic: '<S10>/Logical Operator4'
       *  S-Function (motohawk_sfun_fault_status): '<S10>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S10>/motohawk_fault_status2'
       */
      if (IsFaultActive(4) || IsFaultActive(3)) {
        rtb_Switch3 = 2U;
      } else {
        rtb_Switch3 = 0U;
      }

      /* End of Switch: '<S10>/Switch3' */

      /* MinMax: '<S10>/MinMax' */
      BuckyWagon_01_B.s10_MinMax = (uint8_T)(rtb_DataTypeConversion9 >=
        rtb_Switch3 ? rtb_DataTypeConversion9 : rtb_Switch3);

      /* DataTypeConversion: '<S10>/Data Type Conversion10' */
      if (rtIsNaN(BuckyWagon_01_B.s9_InReverse) || rtIsInf
          (BuckyWagon_01_B.s9_InReverse)) {
        u = 0.0;
      } else {
        u = fmod(floor(BuckyWagon_01_B.s9_InReverse), 256.0);
      }

      BuckyWagon_01_B.s10_DataTypeConversion10 = (uint8_T)(u < 0.0 ? (uint8_T)
        (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

      /* End of DataTypeConversion: '<S10>/Data Type Conversion10' */

      /* S-Function (motohawk_sfun_vdoledalarmgauge_write): '<S10>/VDO Gauge LED Alarm Write' */
      /* VDO Gauge LED Alarm Write */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage)
          VDOGAUGE_LED_ALARM, VDOGauge_LEDAlarm_Value_Get(((uint8_T)0U),
          BuckyWagon_01_B.s10_DataTypeConversion7, ((uint8_T)0U),
          BuckyWagon_01_B.s10_Data, BuckyWagon_01_B.s10_Product,
          BuckyWagon_01_B.s10_Volt, BuckyWagon_01_B.s10_MinMax,
          BuckyWagon_01_B.s10_DataTypeConversion10) , (E_VDOGaugePriority) 1);
      }

      /* Saturate: '<S10>/Saturation' incorporates:
       *  Gain: '<S10>/Gain'
       */
      u = 100.0 * BuckyWagon_01_B.s224_Abs;

      /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
       *  Abs: '<S10>/Abs'
       *  Saturate: '<S10>/Saturation'
       */
      u = fabs(u >= 10000.0 ? 10000.0 : u <= -10000.0 ? -10000.0 : u);
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = fmod(floor(u), 65536.0);
      }

      BuckyWagon_01_B.s10_DataTypeConversion = (int16_T)(u < 0.0 ? (int16_T)
        -(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

      /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S10>/VDO Gauge Write' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 9,
          BuckyWagon_01_B.s10_DataTypeConversion, (E_VDOGaugePriority) 1);
      }

      /* Saturate: '<S10>/Saturation2' incorporates:
       *  Gain: '<S10>/Gain2'
       */
      u = 100.0 * BuckyWagon_01_B.s347_Merge;

      /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
       *  Saturate: '<S10>/Saturation2'
       */
      u = u >= 2000.0 ? 2000.0 : u <= 0.0 ? 0.0 : u;
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = fmod(floor(u), 65536.0);
      }

      BuckyWagon_01_B.s10_DataTypeConversion2 = (int16_T)(u < 0.0 ? (int16_T)
        -(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

      /* End of DataTypeConversion: '<S10>/Data Type Conversion2' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S10>/VDO Gauge Write1' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 8,
          BuckyWagon_01_B.s10_DataTypeConversion2, (E_VDOGaugePriority) 1);
      }

      /* Saturate: '<S10>/Saturation1' incorporates:
       *  Gain: '<S10>/Gain1'
       */
      u = 10.0 * BuckyWagon_01_B.s232_Merge;

      /* DataTypeConversion: '<S10>/Data Type Conversion1' incorporates:
       *  Saturate: '<S10>/Saturation1'
       */
      u = u >= 1000.0 ? 1000.0 : u <= 0.0 ? 0.0 : u;
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = fmod(floor(u), 65536.0);
      }

      BuckyWagon_01_B.s10_DataTypeConversion1 = (int16_T)(u < 0.0 ? (int16_T)
        -(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

      /* End of DataTypeConversion: '<S10>/Data Type Conversion1' */

      /* S-Function (motohawk_sfun_vdogauge_write): '<S10>/VDO Gauge Write2' */
      /* VDO Gauge Write GaugeChain */
      {
        extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
          (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
           in_ePriority);
        VDOGaugeService_GaugeChain_GaugeData_Write((E_VDOGaugeMessage) 2,
          BuckyWagon_01_B.s10_DataTypeConversion1, (E_VDOGaugePriority) 1);
      }
    }
  }
}
