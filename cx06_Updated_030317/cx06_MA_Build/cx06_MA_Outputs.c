/*
 * File: cx06_MA_Outputs.c
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "cx06_MA_Outputs.h"

/* Include model header file for global data */
#include "cx06_MA.h"
#include "cx06_MA_private.h"

/* Named constants for Stateflow: '<S88>/Chart' */
#define cx06_MA_IN_About_to_Crank      (1U)
#define cx06_MA_IN_About_to_Idle       (2U)
#define cx06_MA_IN_Crank               (3U)
#define cx06_MA_IN_Idle_g              (4U)

/* Named constants for Stateflow: '<S80>/Disable_DCDC' */
#define cx06_MA_IN_Active              (1U)
#define cx06_MA_IN_Passthrough         (2U)

/*
 * Output and update for atomic system:
 *    '<S79>/Act_Gear_Translate'
 *    '<S79>/Gear_Pos_Translate'
 */
void cx06_MA_Act_Gear_Translate(int8_T rtu_u, rtB_Act_Gear_Translate_cx06_MA
  *localB)
{
  /* Embedded MATLAB: '<S79>/Act_Gear_Translate' */
  /* Embedded MATLAB Function 'Outputs/GMLAN Outputs/Act_Gear_Translate': '<S166>:1' */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  if (rtu_u == -1) {
    /* '<S166>:1:5' */
    /* '<S166>:1:6' */
    localB->s166_y = 8.0;
  } else if (rtu_u == 0) {
    /* '<S166>:1:7' */
    /* '<S166>:1:8' */
    localB->s166_y = 9.0;
  } else if (rtu_u <= 6) {
    /* '<S166>:1:9' */
    /* '<S166>:1:10' */
    localB->s166_y = (real_T)rtu_u;
  } else {
    /* '<S166>:1:12' */
    localB->s166_y = 0.0;
  }
}

/* Initial conditions for function-call system: '<Root>/Outputs' */
void cx06_MA_Outputs_Init(void)
{
  /* InitializeConditions for Stateflow: '<S88>/Chart' */
  cx06_MA_DWork.s102_is_active_c16_cx06_MA = 0U;
  cx06_MA_DWork.s102_is_c16_cx06_MA = 0U;
  cx06_MA_B.s102_LSD_Eng = 0U;
  cx06_MA_B.s102_LSD_Nav = 0U;
  cx06_MA_B.s102_timer = 0U;
  cx06_MA_B.s102_state = 0U;

  /* InitializeConditions for UnitDelay: '<S91>/Unit Delay' */
  cx06_MA_DWork.s91_UnitDelay_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S210>/Unit Delay1' */
  cx06_MA_DWork.s210_UnitDelay1_DSTATE = -1.0;

  /* InitializeConditions for UnitDelay: '<S168>/Unit Delay1' */
  cx06_MA_DWork.s168_UnitDelay1_DSTATE = 1001.0;

  /* InitializeConditions for UnitDelay: '<S168>/Unit Delay' */
  cx06_MA_DWork.s168_UnitDelay_DSTATE = TRUE;

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
  cx06_MA_DWork.s290_UnitDelay_DSTATE = 1.0;

  /* InitializeConditions for Stateflow: '<S80>/Disable_DCDC' */
  cx06_MA_DWork.s289_is_active_c19_cx06_MA = 0U;
  cx06_MA_DWork.s289_is_c19_cx06_MA = 0U;
}

/* Start for function-call system: '<Root>/Outputs' */
void cx06_MA_Outputs_Start(void)
{
  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout' */

  /* S-Function Block: INJ1D */
  {
    (init_resource_INJ1D_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout1' */

  /* S-Function Block: INJ2D */
  {
    (init_resource_INJ2D_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout2' */

  /* S-Function Block: AC_Clutch */
  {
    (init_resource_AC_Clutch_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout3' */

  /* S-Function Block: AC_Fan */
  {
    (init_resource_AC_Fan_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout4' */

  /* S-Function Block: Urea_Power */
  {
    (init_resource_Urea_Power_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout8' */

  /* S-Function Block: INJ8D */
  {
    (init_resource_INJ8D_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout7' */

  /* S-Function Block: INJ6D */
  {
    (init_resource_INJ6D_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout5' */

  /* S-Function Block: INJ3D */
  {
    (init_resource_INJ3D_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout6' */

  /* S-Function Block: INJ10D */
  {
    (init_resource_INJ10D_DataStore()) = -1;
  }
}

/* Output and update for function-call system: '<Root>/Outputs' */
void cx06_MA_Outputs(void)
{
  /* local block i/o variables */
  real_T rtb_Merge;
  real_T rtb_Merge_o;
  real_T rtb_Accel;
  real_T rtb_Merge_c;
  real_T rtb_Merge_ct;
  real_T rtb_Merge_j;
  real_T rtb_Merge_a;
  real_T rtb_Merge_n;
  real_T rtb_Merge_f;
  real_T rtb_Merge_g;
  real_T rtb_Merge_ar;
  real_T rtb_Merge_k;
  real_T rtb_Merge_fk;
  real_T rtb_Merge_f2;
  real_T rtb_Merge_i;
  real_T rtb_Merge_gv;
  real_T rtb_Merge_l;
  real_T rtb_Merge_c5;
  real_T rtb_Merge_nr;
  real_T rtb_Merge_b;
  real_T rtb_Merge_nh;
  real_T rtb_Merge_dg;
  real_T rtb_Merge_io;
  real_T rtb_Merge_fz;
  real32_T rtb_Brake_Pedal_Pos;
  real32_T rtb_Brake;
  real32_T rtb_Clutch;
  uint32_T rtb_Merge_e;
  uint16_T rtb_Reset_AO1;
  uint16_T rtb_Output_1_h;
  uint16_T rtb_Reset_AO2;
  uint16_T rtb_Output_2_k;
  int8_T rtb_Merge_h;
  uint8_T rtb_Merge_p;
  uint8_T rtb_Merge_lg;
  uint8_T rtb_ExtractDesiredBits;
  uint8_T rtb_LogicalOperator_fv3;
  uint8_T rtb_Switch_o;
  boolean_T rtb_DataTypeConversion_j;
  boolean_T rtb_DataTypeConversion1_o;
  boolean_T rtb_LogicalOperator3_h;
  boolean_T rtb_Merge_ob;
  boolean_T rtb_Compare_ng;
  boolean_T rtb_Merge_j4;
  boolean_T rtb_Merge_m;
  boolean_T rtb_Merge_al;
  boolean_T rtb_Merge_eb;
  real_T rtb_Switch_cf;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_RelationalOperator1_g;
  real_T rtb_Switch1_h;
  real_T rtb_Saturation_bp;
  uint16_T rtb_BitwiseOperator5;
  uint16_T rtb_BitwiseOperator4;
  real32_T rtb_Gain_d;
  real_T rtb_Product_fb;
  uint8_T rtb_cmd;
  real_T tmp;

  /* Gain: '<S74>/Gain' */
  rtb_Brake_Pedal_Pos = 100.0F * cx06_MA_B.s26_Brake;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S74>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x430 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        int32_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        if (cx06_MA_B.s15_Voltage < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (cx06_MA_B.s15_Voltage > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(cx06_MA_B.s15_Voltage * (10.0000000000F));
        }

        if (cx06_MA_B.s15_Current < -83886.0800000000F) {
          tmp1 = (int32_T)(-8388608L);
        } else if (cx06_MA_B.s15_Current > 83886.0700000000F) {
          tmp1 = (int32_T)(8388607L);
        } else {
          tmp1 = (int32_T)(cx06_MA_B.s15_Current * (100.0000000000F));
        }

        if (cx06_MA_B.s50_SOC < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (cx06_MA_B.s50_SOC > 127.5000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s50_SOC * (2.0000000000F));
        }

        if (rtb_Brake_Pedal_Pos < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Brake_Pedal_Pos > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Brake_Pedal_Pos * (2.0000000000F));
        }

        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(0U);
        tmp6 = (uint8_T)(1U);
        tmp7 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) | ((((uint8_T *)(&tmp1))[0] &
          0x00000000)) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[2])) ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[3])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp5))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp6))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 3) ;
        CAN_2_Transmit(0, 0x430UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S82>/If' incorporates:
   *  ActionPort: '<S84>/Action Port'
   *  ActionPort: '<S85>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S82>/override_enable'
   *  SubSystem: '<S82>/NewValue'
   *  SubSystem: '<S82>/OldValue'
   */
  if ((ARDAQ_Fuel_Used_ovr_DataStore())) {
    /* Inport: '<S84>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S82>/new_value'
     */
    rtb_Merge = (ARDAQ_Fuel_Used_new_DataStore());
  } else {
    /* Inport: '<S85>/In1' incorporates:
     *  Product: '<S74>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration4'
     */
    rtb_Merge = cx06_MA_B.s12_Fuel_Inj_Roll_Cnt *
      (Fuel_Consumption_Adjustment_DataStore());
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S74>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x431 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint32_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        if ((H2_Tank_Pres_Cal_DataStore()) < 0) {
          tmp0 = (uint32_T)(0UL);
        } else {
          tmp0 = (uint32_T)((H2_Tank_Pres_Cal_DataStore()) * (100));
        }

        tmp1 = (uint16_T)(0U);
        if (rtb_Merge < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Merge > 1.9999971300F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Merge * (32767.5470214300F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp0))[2])) ;
        msg_data[3] = ((((uint8_T *)(&tmp0))[3])) ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp2))[1])) ;
        CAN_2_Transmit(0, 0x431UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S83>/If' incorporates:
   *  ActionPort: '<S86>/Action Port'
   *  ActionPort: '<S87>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S83>/override_enable'
   *  SubSystem: '<S83>/NewValue'
   *  SubSystem: '<S83>/OldValue'
   */
  if ((ARDAQ_Engine_Torque_ovr_DataStore())) {
    /* Inport: '<S86>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S83>/new_value'
     */
    rtb_Merge_o = (ARDAQ_Engine_Torque_new_DataStore());
  } else {
    /* Inport: '<S87>/In1' */
    rtb_Merge_o = cx06_MA_B.s12_Eng_Torq_Actual;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S74>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x432 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        int16_T tmp0;
        if (rtb_Merge_o < -3276.8000000000F) {
          tmp0 = (int16_T)(-32768);
        } else if (rtb_Merge_o > 3276.7000000000F) {
          tmp0 = (int16_T)(32767);
        } else {
          tmp0 = (int16_T)(rtb_Merge_o * (10.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x432UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout' */
  /* S-Function Block: INJ1D */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout1' */
  /* S-Function Block: INJ2D */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout2' */
  /* S-Function Block: AC_Clutch */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout3' */
  /* S-Function Block: AC_Fan */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout4' */
  /* S-Function Block: Urea_Power */
  {
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout8' */
  /* S-Function Block: INJ8D */
  {
  }

  /* Sum: '<S75>/Sum' incorporates:
   *  Constant: '<S75>/Constant4'
   *  UnitDelay: '<S75>/Unit Delay'
   */
  rtb_Switch_cf = 0.005 + cx06_MA_DWork.s75_UnitDelay_DSTATE;

  /* RelationalOperator: '<S89>/Compare' incorporates:
   *  Constant: '<S89>/Constant'
   *  Product: '<S75>/Product'
   */
  cx06_MA_B.s89_Compare = (cx06_MA_B.s366_Inj_Freq * rtb_Switch_cf >= 1.0);

  /* S-Function (motohawk_sfun_oneshot): '<S75>/motohawk_oneshot' */

  /* S-Function Block: Urea_Injector */
  {
    if (cx06_MA_B.s89_Compare) {
      extern NativeError_S Urea_Injector_OneShotOutput_Set(int32_T duration_us,
        boolean_T cancel);
      Urea_Injector_OneShotOutput_Set((Urea_PulseW_DataStore()), FALSE);
    }
  }

  /* If: '<S92>/If' incorporates:
   *  ActionPort: '<S104>/Action Port'
   *  ActionPort: '<S105>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S92>/override_enable'
   *  SubSystem: '<S92>/NewValue'
   *  SubSystem: '<S92>/OldValue'
   */
  if ((engineKill_ovr_DataStore())) {
    /* Inport: '<S104>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S92>/new_value'
     */
    cx06_MA_B.s92_Merge = (engineKill_new_DataStore());
  } else {
    /* Inport: '<S105>/In1' incorporates:
     *  Logic: '<S75>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration'
     */
    cx06_MA_B.s92_Merge = (((uint8_T)(EngineKill_Invert_DataStore())) != 0) ^
      (cx06_MA_B.s365_engine_kill != 0);
  }

  /* If: '<S93>/If' incorporates:
   *  ActionPort: '<S106>/Action Port'
   *  ActionPort: '<S107>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S93>/override_enable'
   *  SubSystem: '<S93>/NewValue'
   *  SubSystem: '<S93>/OldValue'
   */
  if ((engineStart_ovr_DataStore())) {
    /* Inport: '<S106>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S93>/new_value'
     */
    cx06_MA_B.s93_Merge = (engineStart_new_DataStore());
  } else {
    /* Inport: '<S107>/In1' incorporates:
     *  Logic: '<S75>/Logical Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration1'
     */
    cx06_MA_B.s93_Merge = (cx06_MA_B.s365_engine_start != 0) ^ (((uint8_T)
      (EngineStart_Invert_DataStore())) != 0);
  }

  /* Product: '<S75>/Product1' incorporates:
   *  Logic: '<S75>/Logical Operator4'
   */
  cx06_MA_B.s75_Product1 = (real_T)!cx06_MA_B.s89_Compare * rtb_Switch_cf;

  /* If: '<S94>/If' incorporates:
   *  ActionPort: '<S108>/Action Port'
   *  ActionPort: '<S109>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S94>/override_enable'
   *  SubSystem: '<S94>/NewValue'
   *  SubSystem: '<S94>/OldValue'
   */
  if ((AC_Clutch_On_ovr_DataStore())) {
    /* Inport: '<S108>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S94>/new_value'
     */
    cx06_MA_B.s94_Merge = (AC_Clutch_On_new_DataStore());
  } else {
    /* Inport: '<S109>/In1' */
    cx06_MA_B.s94_Merge = cx06_MA_B.s363_AC_On;
  }

  /* If: '<S95>/If' incorporates:
   *  ActionPort: '<S110>/Action Port'
   *  ActionPort: '<S111>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S95>/override_enable'
   *  SubSystem: '<S95>/NewValue'
   *  SubSystem: '<S95>/OldValue'
   */
  if ((AC_Fan_On_ovr_DataStore())) {
    /* Inport: '<S110>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S95>/new_value'
     */
    cx06_MA_B.s95_Merge = (AC_Fan_On_new_DataStore());
  } else {
    /* Inport: '<S111>/In1' */
    cx06_MA_B.s95_Merge = cx06_MA_B.s363_AC_On;
  }

  /* Logic: '<S75>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration2'
   */
  rtb_LogicalOperator2_k = (cx06_MA_B.s93_Merge && (((uint8_T)
    (EngineStart_Enable_DataStore())) != 0));

  /* Switch: '<S103>/Switch1' incorporates:
   *  Constant: '<S103>/Constant'
   *  Constant: '<S103>/Constant1'
   *  Sum: '<S103>/Sum'
   *  UnitDelay: '<S103>/Unit Delay'
   *  UnitDelay: '<S88>/Unit Delay'
   */
  if (cx06_MA_DWork.s88_UnitDelay_DSTATE > 0) {
    rtb_Switch_cf = cx06_MA_DWork.s103_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_Switch_cf = 0.0;
  }

  /* Saturate: '<S103>/Saturation' */
  cx06_MA_B.s103_Saturation = rt_SATURATE(rtb_Switch_cf, 0.0, 300.0);

  /* RelationalOperator: '<S103>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration'
   */
  rtb_RelationalOperator1_g = ((real_T)((uint16_T)(Idle_to_Crank_Delay_DataStore
                                 ())) <= cx06_MA_B.s103_Saturation);

  /* Stateflow: '<S88>/Chart' incorporates:
   *  RelationalOperator: '<S103>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration1'
   */
  /* Gateway: Outputs/Analog Outputs/Backup_Relay_Control/Chart */
  /* During: Outputs/Analog Outputs/Backup_Relay_Control/Chart */
  if (cx06_MA_DWork.s102_is_active_c16_cx06_MA == 0) {
    /* Entry: Outputs/Analog Outputs/Backup_Relay_Control/Chart */
    cx06_MA_DWork.s102_is_active_c16_cx06_MA = 1U;

    /* Transition: '<S102>:11' */
    /* Entry 'Idle': '<S102>:1' */
    cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Idle_g;
  } else {
    switch (cx06_MA_DWork.s102_is_c16_cx06_MA) {
     case cx06_MA_IN_About_to_Crank:
      /* During 'About_to_Crank': '<S102>:3' */
      if ((int32_T)rtb_RelationalOperator1_g == 1) {
        /* Transition: '<S102>:7' */
        /* Exit 'About_to_Crank': '<S102>:3' */
        /* Entry 'Crank': '<S102>:4' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Crank;
      } else if ((int32_T)rtb_LogicalOperator2_k == 0) {
        /* Transition: '<S102>:10' */
        /* Exit 'About_to_Crank': '<S102>:3' */
        /* Entry 'Idle': '<S102>:1' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Idle_g;
      } else {
        cx06_MA_B.s102_LSD_Eng = 0U;
        cx06_MA_B.s102_LSD_Nav = 0U;
        cx06_MA_B.s102_timer = 1U;
        cx06_MA_B.s102_state = 1U;
      }
      break;

     case cx06_MA_IN_About_to_Idle:
      /* During 'About_to_Idle': '<S102>:2' */
      if ((cx06_MA_B.s103_Saturation >= (real_T)((uint16_T)
            (Crank_to_Idle_Delay_DataStore()))) == 1) {
        /* Transition: '<S102>:5' */
        /* Exit 'About_to_Idle': '<S102>:2' */
        /* Entry 'Idle': '<S102>:1' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Idle_g;
      } else if ((int32_T)rtb_LogicalOperator2_k == 1) {
        /* Transition: '<S102>:9' */
        /* Exit 'About_to_Idle': '<S102>:2' */
        /* Entry 'Crank': '<S102>:4' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Crank;
      } else {
        cx06_MA_B.s102_LSD_Eng = 0U;
        cx06_MA_B.s102_LSD_Nav = 0U;
        cx06_MA_B.s102_timer = 1U;
        cx06_MA_B.s102_state = 3U;
      }
      break;

     case cx06_MA_IN_Crank:
      /* During 'Crank': '<S102>:4' */
      if ((int32_T)rtb_LogicalOperator2_k == 0) {
        /* Transition: '<S102>:8' */
        /* Exit 'Crank': '<S102>:4' */
        /* Entry 'About_to_Idle': '<S102>:2' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_About_to_Idle;
      } else {
        cx06_MA_B.s102_LSD_Eng = 1U;
        cx06_MA_B.s102_LSD_Nav = 0U;
        cx06_MA_B.s102_timer = 0U;
        cx06_MA_B.s102_state = 2U;
      }
      break;

     case cx06_MA_IN_Idle_g:
      /* During 'Idle': '<S102>:1' */
      if ((int32_T)rtb_LogicalOperator2_k == 1) {
        /* Transition: '<S102>:6' */
        /* Exit 'Idle': '<S102>:1' */
        /* Entry 'About_to_Crank': '<S102>:3' */
        cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_About_to_Crank;
      } else {
        cx06_MA_B.s102_LSD_Eng = 0U;
        cx06_MA_B.s102_LSD_Nav = 1U;
        cx06_MA_B.s102_timer = 0U;
        cx06_MA_B.s102_state = 0U;
      }
      break;

     default:
      /* Transition: '<S102>:11' */
      /* Entry 'Idle': '<S102>:1' */
      cx06_MA_DWork.s102_is_c16_cx06_MA = cx06_MA_IN_Idle_g;
      break;
    }
  }

  /* DataTypeConversion: '<S88>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (cx06_MA_B.s102_LSD_Eng != 0);

  /* DataTypeConversion: '<S88>/Data Type Conversion1' */
  rtb_DataTypeConversion1_o = (cx06_MA_B.s102_LSD_Nav != 0);

  /* Logic: '<S75>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration3'
   */
  rtb_LogicalOperator3_h = ((((uint8_T)(EngineKill_Enable_DataStore())) != 0) &&
    cx06_MA_B.s92_Merge);

  /* If: '<S101>/If' incorporates:
   *  ActionPort: '<S122>/Action Port'
   *  ActionPort: '<S123>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S101>/override_enable'
   *  SubSystem: '<S101>/NewValue'
   *  SubSystem: '<S101>/OldValue'
   */
  if ((Urea_Pump_On_ovr_DataStore())) {
    /* Inport: '<S122>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S101>/new_value'
     */
    rtb_Merge_ob = (Urea_Pump_On_new_DataStore());
  } else {
    /* Inport: '<S123>/In1' */
    rtb_Merge_ob = cx06_MA_B.s366_Pump_On;
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout7' */
  /* S-Function Block: INJ6D */
  {
  }

  /* If: '<S97>/If' incorporates:
   *  ActionPort: '<S114>/Action Port'
   *  ActionPort: '<S115>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S97>/override_enable'
   *  SubSystem: '<S97>/NewValue'
   *  SubSystem: '<S97>/OldValue'
   */
  if ((Nav_Veh_Spd_ovr_DataStore())) {
    /* Inport: '<S114>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/new_value'
     */
    rtb_Switch_cf = (Nav_Veh_Spd_new_DataStore());
  } else {
    /* Inport: '<S115>/In1' */
    rtb_Switch_cf = cx06_MA_B.s49_Divide;
  }

  /* RelationalOperator: '<S90>/Compare' incorporates:
   *  Constant: '<S90>/Constant'
   */
  rtb_Compare_ng = (rtb_Switch_cf != 0.0);

  /* Product: '<S75>/Product2' incorporates:
   *  Constant: '<S75>/Constant5'
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration5'
   */
  rtb_Switch_cf *= 1.4667E+002 / (real_T)(Nav_Ft_per_Pulse_DataStore());

  /* Saturate: '<S75>/Saturation' */
  rtb_Switch_cf = rt_MAXd_snf(rtb_Switch_cf, 2.0);

  /* DataTypeConversion: '<S75>/Data Type Conversion1' */
  if (rtIsNaN(rtb_Switch_cf) || rtIsInf(rtb_Switch_cf)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(rtb_Switch_cf), 4.294967296E+009);
  }

  /* Switch: '<S75>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration7'
   */
  if (((int8_T)(Nav_DVD_Safety_DataStore())) >= 1) {
    rtb_Switch_cf = cx06_MA_B.s13_Park_Brake;
  } else {
    rtb_Switch_cf = (real_T)((int8_T)(Nav_DVD_Unsafe_Value_DataStore()));
  }

  /* Sum: '<S91>/Sum' incorporates:
   *  Constant: '<S91>/Constant1'
   *  UnitDelay: '<S91>/Unit Delay'
   */
  rtb_Switch1_h = cx06_MA_DWork.s91_UnitDelay_DSTATE + 1.0;

  /* Saturate: '<S91>/Saturation' */
  rtb_Saturation_bp = rt_SATURATE(rtb_Switch1_h, 0.0, 6000.0);

  /* RelationalOperator: '<S91>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S91>/motohawk_calibration2'
   */
  rtb_ExtractDesiredBits = (rtb_Saturation_bp >
    (Disable_Nav_Safety_Delay_DataStore()));

  /* Product: '<S75>/Product3' */
  rtb_Switch1_h = rtb_Switch_cf * (real_T)rtb_ExtractDesiredBits;

  /* Gain: '<S91>/Gain1' */
  cx06_MA_B.s91_Gain1 = 0.005 * rtb_Saturation_bp;

  /* If: '<S96>/If' incorporates:
   *  ActionPort: '<S112>/Action Port'
   *  ActionPort: '<S113>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S96>/override_enable'
   *  SubSystem: '<S96>/NewValue'
   *  SubSystem: '<S96>/OldValue'
   */
  if ((Nav_Spd_Freq_100_ovr_DataStore())) {
    /* Inport: '<S112>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S96>/new_value'
     */
    rtb_Merge_e = (Nav_Spd_Freq_100_new_DataStore());
  } else {
    /* Inport: '<S113>/In1' */
    rtb_Merge_e = tmp < 0.0 ? (uint32_T)(-((int32_T)(uint32_T)(-tmp))) :
      (uint32_T)tmp;
  }

  /* If: '<S98>/If' incorporates:
   *  ActionPort: '<S116>/Action Port'
   *  ActionPort: '<S117>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S98>/override_enable'
   *  SubSystem: '<S98>/NewValue'
   *  SubSystem: '<S98>/OldValue'
   */
  if ((Nav_Park_ovr_DataStore())) {
    /* Inport: '<S116>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S98>/new_value'
     */
    rtb_Merge_j4 = (Nav_Park_new_DataStore());
  } else {
    /* Inport: '<S117>/In1' incorporates:
     *  DataTypeConversion: '<S75>/Data Type Conversion3'
     */
    rtb_Merge_j4 = (rtb_Switch1_h != 0.0);
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout5' */
  /* S-Function Block: INJ3D */
  {
  }

  /* If: '<S99>/If' incorporates:
   *  ActionPort: '<S118>/Action Port'
   *  ActionPort: '<S119>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S99>/override_enable'
   *  SubSystem: '<S99>/NewValue'
   *  SubSystem: '<S99>/OldValue'
   */
  if ((ISO_Fault_LED_ovr_DataStore())) {
    /* Inport: '<S118>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S99>/new_value'
     */
    rtb_Merge_m = (ISO_Fault_LED_new_DataStore());
  } else {
    /* Inport: '<S119>/In1' */
    rtb_Merge_m = cx06_MA_ConstB.s75_DataTypeConversion2;
  }

  /* S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout6' */
  /* S-Function Block: INJ10D */
  {
  }

  /* If: '<S100>/If' incorporates:
   *  ActionPort: '<S120>/Action Port'
   *  ActionPort: '<S121>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S100>/override_enable'
   *  SubSystem: '<S100>/NewValue'
   *  SubSystem: '<S100>/OldValue'
   */
  if ((Batt_Fan_Relay_ovr_DataStore())) {
    /* Inport: '<S120>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S100>/new_value'
     */
    rtb_Merge_h = ((int8_T)(Batt_Fan_Relay_new_DataStore()));
  } else {
    /* Inport: '<S121>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration8'
     */
    rtb_Merge_h = ((int8_T)(Batt_Fan_Circuit_DataStore()));
  }

  /* Gain: '<S76>/Gain2' */
  rtb_Brake = 100.0F * cx06_MA_B.s26_Brake;

  /* Gain: '<S76>/Gain' */
  rtb_Accel = 100.0 * cx06_MA_B.s25_Accel;

  /* Gain: '<S76>/Gain1' */
  rtb_Clutch = 100.0F * cx06_MA_B.s27_Clutch;

  /* DataTypeConversion: '<S76>/Data Type Conversion' */
  rtb_ExtractDesiredBits = cx06_MA_B.s22_Neutral;

  /* DataTypeConversion: '<S76>/Data Type Conversion1' */
  rtb_LogicalOperator_fv3 = cx06_MA_B.s22_Reverse;

  /* DataTypeConversion: '<S76>/Data Type Conversion5' */
  rtb_Switch_o = cx06_MA_B.s384_TC_Active;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S76>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (50.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (49500U)
         )) {
      /* 0x350 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        if (rtb_Brake < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Brake > 100.0000000650F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Brake * (2.5499999983F));
        }

        if (rtb_Accel < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Accel > 100.0000000650F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Accel * (2.5499999983F));
        }

        tmp2 = (uint8_T)(cx06_MA_B.s365_hybrid_state);
        if (rtb_Clutch < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Clutch > 65535.0000000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(rtb_Clutch);
        }

        if (rtb_ExtractDesiredBits > 1U) {
          tmp4 = (uint8_T)(1U);
        } else {
          tmp4 = (uint8_T)(rtb_ExtractDesiredBits != 0);
        }

        if (rtb_LogicalOperator_fv3 > 1U) {
          tmp5 = (uint8_T)(1U);
        } else {
          tmp5 = (uint8_T)(rtb_LogicalOperator_fv3 != 0);
        }

        if (cx06_MA_B.s384_rear_slip > 1U) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(cx06_MA_B.s384_rear_slip != 0);
        }

        if (cx06_MA_B.s384_front_slip > 1U) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(cx06_MA_B.s384_front_slip != 0);
        }

        if (rtb_Switch_o > 1U) {
          tmp8 = (uint8_T)(1U);
        } else {
          tmp8 = (uint8_T)(rtb_Switch_o != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 1) |
          ((((uint8_T *)(&tmp5))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp6))
          [0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 4)
          | ((((uint8_T *)(&tmp8))[0] & 0x00000001) << 5) ;
        CAN_1_Transmit(0, 0x350UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S125>/If' incorporates:
   *  ActionPort: '<S134>/Action Port'
   *  ActionPort: '<S135>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S125>/override_enable'
   *  SubSystem: '<S125>/NewValue'
   *  SubSystem: '<S125>/OldValue'
   */
  if ((Reset_AO1_ovr_DataStore())) {
    /* Inport: '<S134>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S125>/new_value'
     */
    cx06_MA_B.s125_Merge = (Reset_AO1_new_DataStore());
  } else {
    /* Inport: '<S135>/In1' incorporates:
     *  Constant: '<S77>/Constant'
     */
    cx06_MA_B.s125_Merge = 0.0;
  }

  /* DataTypeConversion: '<S77>/Data Type Conversion2' */
  if (rtIsNaN(cx06_MA_B.s125_Merge) || rtIsInf(cx06_MA_B.s125_Merge)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(cx06_MA_B.s125_Merge), 65536.0);
  }

  rtb_Reset_AO1 = (uint16_T)(tmp < 0.0 ? (int32_T)(uint16_T)(int16_T)(-((int16_T)
                               (uint16_T)(-tmp))) : (int32_T)(uint16_T)tmp);

  /* If: '<S126>/If' incorporates:
   *  ActionPort: '<S136>/Action Port'
   *  ActionPort: '<S137>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S126>/override_enable'
   *  SubSystem: '<S126>/NewValue'
   *  SubSystem: '<S126>/OldValue'
   */
  if ((Output_1_ovr_DataStore())) {
    /* Inport: '<S136>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S126>/new_value'
     */
    cx06_MA_B.s126_Merge = (Output_1_new_DataStore());
  } else {
    /* Inport: '<S137>/In1' incorporates:
     *  Product: '<S77>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration1'
     *  Sum: '<S77>/Sum'
     *  Sum: '<S77>/Sum1'
     */
    cx06_MA_B.s126_Merge = ((Out1_Full_DataStore()) - (Out1_Zero_DataStore())) *
      cx06_MA_B.s365_engine_Torque + (Out1_Zero_DataStore());
  }

  /* DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
   *  Gain: '<S77>/Gain2'
   */
  tmp = 819.0 * cx06_MA_B.s126_Merge;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  rtb_Output_1_h = (uint16_T)(int16_T)(tmp < 0.0 ? (int32_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (int32_T)(int16_T)(uint16_T)tmp);

  /* If: '<S127>/If' incorporates:
   *  ActionPort: '<S138>/Action Port'
   *  ActionPort: '<S139>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S127>/override_enable'
   *  SubSystem: '<S127>/NewValue'
   *  SubSystem: '<S127>/OldValue'
   */
  if ((Reset_AO2_ovr_DataStore())) {
    /* Inport: '<S138>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/new_value'
     */
    cx06_MA_B.s127_Merge = (Reset_AO2_new_DataStore());
  } else {
    /* Inport: '<S139>/In1' incorporates:
     *  Constant: '<S77>/Constant1'
     */
    cx06_MA_B.s127_Merge = 0.0;
  }

  /* DataTypeConversion: '<S77>/Data Type Conversion3' */
  if (rtIsNaN(cx06_MA_B.s127_Merge) || rtIsInf(cx06_MA_B.s127_Merge)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(cx06_MA_B.s127_Merge), 65536.0);
  }

  rtb_Reset_AO2 = (uint16_T)(tmp < 0.0 ? (int32_T)(uint16_T)(int16_T)(-((int16_T)
                               (uint16_T)(-tmp))) : (int32_T)(uint16_T)tmp);

  /* If: '<S128>/If' incorporates:
   *  ActionPort: '<S140>/Action Port'
   *  ActionPort: '<S141>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S128>/override_enable'
   *  SubSystem: '<S128>/NewValue'
   *  SubSystem: '<S128>/OldValue'
   */
  if ((Output_2_ovr_DataStore())) {
    /* Inport: '<S140>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S128>/new_value'
     */
    cx06_MA_B.s128_Merge = (Output_2_new_DataStore());
  } else {
    /* Inport: '<S141>/In1' incorporates:
     *  Product: '<S77>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration3'
     *  Sum: '<S77>/Sum2'
     *  Sum: '<S77>/Sum3'
     */
    cx06_MA_B.s128_Merge = ((Out2_Full_DataStore()) - (Out2_Zero_DataStore())) *
      cx06_MA_B.s365_engine_Torque + (Out2_Zero_DataStore());
  }

  /* DataTypeConversion: '<S77>/Data Type Conversion1' incorporates:
   *  Gain: '<S77>/Gain1'
   */
  tmp = 819.0 * cx06_MA_B.s128_Merge;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  rtb_Output_2_k = (uint16_T)(int16_T)(tmp < 0.0 ? (int32_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (int32_T)(int16_T)(uint16_T)tmp);

  /* S-Function (sfix_bitop): '<S124>/Bitwise Operator3' incorporates:
   *  ArithShift: '<S133>/shift'
   *  S-Function (sfix_bitop): '<S124>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<S124>/Bitwise Operator2'
   */
  rtb_BitwiseOperator4 = (uint16_T)((uint16_T)((uint16_T)(rtb_Reset_AO1 & 1) <<
    4U) | (uint16_T)(rtb_Output_1_h & 4095));

  /* DataTypeConversion: '<S130>/Extract Desired Bits' */
  rtb_Switch_o = (uint8_T)rtb_BitwiseOperator4;

  /* S-Function (sfix_bitop): '<S124>/Bitwise Operator5' incorporates:
   *  S-Function (sfix_bitop): '<S124>/Bitwise Operator1'
   *  S-Function (sfix_bitop): '<S124>/Bitwise Operator4'
   */
  rtb_BitwiseOperator5 = (uint16_T)((uint16_T)(rtb_Reset_AO2 & 1) | (uint16_T)
    (rtb_Output_2_k & 4095));

  /* DataTypeConversion: '<S131>/Extract Desired Bits' */
  rtb_LogicalOperator_fv3 = (uint8_T)(rtb_BitwiseOperator5 >> 8);

  /* DataTypeConversion: '<S132>/Extract Desired Bits' */
  rtb_ExtractDesiredBits = (uint8_T)rtb_BitwiseOperator5;

  /* S-Function (sfix_bitop): '<S124>/Bitwise Operator6' incorporates:
   *  DataTypeConversion: '<S129>/Extract Desired Bits'
   */
  cx06_MA_B.s124_BitwiseOperator6 = (uint8_T)((uint8_T)((uint8_T)((uint8_T)
    (rtb_BitwiseOperator4 >> 8) ^ rtb_Switch_o) ^ rtb_LogicalOperator_fv3) ^
    rtb_ExtractDesiredBits);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S77>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (10.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (9500U)
         )) {
      /* 0x169 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint8_T tmp4;
        if (rtb_Reset_AO1 > 1U) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Reset_AO1 != 0);
        }

        if (rtb_Output_1_h > 4095U) {
          tmp1 = (uint16_T)(4095U);
        } else {
          tmp1 = (uint16_T)(rtb_Output_1_h);
        }

        if (rtb_Reset_AO2 > 1U) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(rtb_Reset_AO2 != 0);
        }

        if (rtb_Output_2_k > 4095U) {
          tmp3 = (uint16_T)(4095U);
        } else {
          tmp3 = (uint16_T)(rtb_Output_2_k);
        }

        tmp4 = (uint8_T)(cx06_MA_B.s124_BitwiseOperator6);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 4) |
          ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0] & 0x00000001) << 4) |
          ((((uint8_T *)(&tmp3))[0] & 0x0000000F)) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_1_Transmit(0, 0x169UL, 5, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S142>/If' incorporates:
   *  ActionPort: '<S150>/Action Port'
   *  ActionPort: '<S151>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S142>/override_enable'
   *  SubSystem: '<S142>/NewValue'
   *  SubSystem: '<S142>/OldValue'
   */
  if ((Wheel_Ang_Vel_FL_V_ovr_DataStore())) {
    /* Inport: '<S150>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S142>/new_value'
     */
    cx06_MA_B.s142_Merge = ((uint8_T)(Wheel_Ang_Vel_FL_V_new_DataStore()));
  } else {
    /* Inport: '<S151>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration'
     */
    cx06_MA_B.s142_Merge = ((uint8_T)(Wheel_Speed_Validities_DataStore()));
  }

  /* If: '<S143>/If' incorporates:
   *  ActionPort: '<S152>/Action Port'
   *  ActionPort: '<S153>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S143>/override_enable'
   *  SubSystem: '<S143>/NewValue'
   *  SubSystem: '<S143>/OldValue'
   */
  if ((Wheel_Ang_Vel_FL_ovr_DataStore())) {
    /* Inport: '<S152>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S143>/new_value'
     */
    cx06_MA_B.s143_Merge = (Wheel_Ang_Vel_FL_new_DataStore());
  } else {
    /* Inport: '<S153>/In1' incorporates:
     *  MinMax: '<S78>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration1'
     */
    cx06_MA_B.s143_Merge = rt_MAXd_snf(cx06_MA_B.s41_Switch,
      (Min_Wheel_Vel_DataStore()));
  }

  /* If: '<S144>/If' incorporates:
   *  ActionPort: '<S154>/Action Port'
   *  ActionPort: '<S155>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S144>/override_enable'
   *  SubSystem: '<S144>/NewValue'
   *  SubSystem: '<S144>/OldValue'
   */
  if ((Wheel_Ang_Vel_FR_V_ovr_DataStore())) {
    /* Inport: '<S154>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/new_value'
     */
    cx06_MA_B.s144_Merge = ((uint8_T)(Wheel_Ang_Vel_FR_V_new_DataStore()));
  } else {
    /* Inport: '<S155>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration'
     */
    cx06_MA_B.s144_Merge = ((uint8_T)(Wheel_Speed_Validities_DataStore()));
  }

  /* If: '<S145>/If' incorporates:
   *  ActionPort: '<S156>/Action Port'
   *  ActionPort: '<S157>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S145>/override_enable'
   *  SubSystem: '<S145>/NewValue'
   *  SubSystem: '<S145>/OldValue'
   */
  if ((Wheel_Ang_Vel_FR_ovr_DataStore())) {
    /* Inport: '<S156>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/new_value'
     */
    cx06_MA_B.s145_Merge = (Wheel_Ang_Vel_FR_new_DataStore());
  } else {
    /* Inport: '<S157>/In1' incorporates:
     *  MinMax: '<S78>/MinMax1'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration1'
     */
    cx06_MA_B.s145_Merge = rt_MAXd_snf(cx06_MA_B.s42_Switch,
      (Min_Wheel_Vel_DataStore()));
  }

  /* If: '<S146>/If' incorporates:
   *  ActionPort: '<S158>/Action Port'
   *  ActionPort: '<S159>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S146>/override_enable'
   *  SubSystem: '<S146>/NewValue'
   *  SubSystem: '<S146>/OldValue'
   */
  if ((Wheel_Ang_Vel_RL_V_ovr_DataStore())) {
    /* Inport: '<S158>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S146>/new_value'
     */
    cx06_MA_B.s146_Merge = ((uint8_T)(Wheel_Ang_Vel_RL_V_new_DataStore()));
  } else {
    /* Inport: '<S159>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration'
     */
    cx06_MA_B.s146_Merge = ((uint8_T)(Wheel_Speed_Validities_DataStore()));
  }

  /* If: '<S147>/If' incorporates:
   *  ActionPort: '<S160>/Action Port'
   *  ActionPort: '<S161>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S147>/override_enable'
   *  SubSystem: '<S147>/NewValue'
   *  SubSystem: '<S147>/OldValue'
   */
  if ((Wheel_Ang_Vel_RL_ovr_DataStore())) {
    /* Inport: '<S160>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/new_value'
     */
    cx06_MA_B.s147_Merge = (Wheel_Ang_Vel_RL_new_DataStore());
  } else {
    /* Inport: '<S161>/In1' incorporates:
     *  MinMax: '<S78>/MinMax2'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration1'
     */
    cx06_MA_B.s147_Merge = rt_MAXd_snf(cx06_MA_B.s43_Switch,
      (Min_Wheel_Vel_DataStore()));
  }

  /* If: '<S148>/If' incorporates:
   *  ActionPort: '<S162>/Action Port'
   *  ActionPort: '<S163>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S148>/override_enable'
   *  SubSystem: '<S148>/NewValue'
   *  SubSystem: '<S148>/OldValue'
   */
  if ((Wheel_Ang_Vel_RR_V_ovr_DataStore())) {
    /* Inport: '<S162>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S148>/new_value'
     */
    cx06_MA_B.s148_Merge = ((uint8_T)(Wheel_Ang_Vel_RR_V_new_DataStore()));
  } else {
    /* Inport: '<S163>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration'
     */
    cx06_MA_B.s148_Merge = ((uint8_T)(Wheel_Speed_Validities_DataStore()));
  }

  /* If: '<S149>/If' incorporates:
   *  ActionPort: '<S164>/Action Port'
   *  ActionPort: '<S165>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S149>/override_enable'
   *  SubSystem: '<S149>/NewValue'
   *  SubSystem: '<S149>/OldValue'
   */
  if ((Wheel_Ang_Vel_RR_ovr_DataStore())) {
    /* Inport: '<S164>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S149>/new_value'
     */
    cx06_MA_B.s149_Merge = (Wheel_Ang_Vel_RR_new_DataStore());
  } else {
    /* Inport: '<S165>/In1' incorporates:
     *  MinMax: '<S78>/MinMax3'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration1'
     */
    cx06_MA_B.s149_Merge = rt_MAXd_snf(cx06_MA_B.s44_Switch,
      (Min_Wheel_Vel_DataStore()));
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S78>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x280 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        int16_T tmp1;
        uint8_T tmp2;
        int16_T tmp3;
        uint8_T tmp4;
        int16_T tmp5;
        uint8_T tmp6;
        int16_T tmp7;
        if (cx06_MA_B.s142_Merge > 1U) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(cx06_MA_B.s142_Merge != 0);
        }

        if (cx06_MA_B.s143_Merge < -4096.0000000000F) {
          tmp1 = (int16_T)(-16384);
        } else if (cx06_MA_B.s143_Merge > 4095.7500000000F) {
          tmp1 = (int16_T)(16383);
        } else {
          tmp1 = (int16_T)(cx06_MA_B.s143_Merge * (4.0000000000F));
        }

        if (cx06_MA_B.s144_Merge > 1U) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s144_Merge != 0);
        }

        if (cx06_MA_B.s145_Merge < -4096.0000000000F) {
          tmp3 = (int16_T)(-16384);
        } else if (cx06_MA_B.s145_Merge > 4095.7500000000F) {
          tmp3 = (int16_T)(16383);
        } else {
          tmp3 = (int16_T)(cx06_MA_B.s145_Merge * (4.0000000000F));
        }

        if (cx06_MA_B.s146_Merge > 1U) {
          tmp4 = (uint8_T)(1U);
        } else {
          tmp4 = (uint8_T)(cx06_MA_B.s146_Merge != 0);
        }

        if (cx06_MA_B.s147_Merge < -4096.0000000000F) {
          tmp5 = (int16_T)(-16384);
        } else if (cx06_MA_B.s147_Merge > 4095.7500000000F) {
          tmp5 = (int16_T)(16383);
        } else {
          tmp5 = (int16_T)(cx06_MA_B.s147_Merge * (4.0000000000F));
        }

        if (cx06_MA_B.s148_Merge > 1U) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(cx06_MA_B.s148_Merge != 0);
        }

        if (cx06_MA_B.s149_Merge < -4096.0000000000F) {
          tmp7 = (int16_T)(-16384);
        } else if (cx06_MA_B.s149_Merge > 4095.7500000000F) {
          tmp7 = (int16_T)(16383);
        } else {
          tmp7 = (int16_T)(cx06_MA_B.s149_Merge * (4.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x0000007F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp3))[0] & 0x0000007F)) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp5))[0] & 0x0000007F)) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp7))[0] & 0x0000007F)) ;
        msg_data[7] = ((((uint8_T *)(&tmp7))[1])) ;
        CAN_1_Transmit(0, 0x280UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S78>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x2f0 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        uint8_T tmp13;
        uint8_T tmp14;
        uint8_T tmp15;
        uint8_T tmp16;
        uint8_T tmp17;
        uint8_T tmp18;
        uint8_T tmp19;
        uint8_T tmp20;
        uint8_T tmp21;
        uint8_T tmp22;
        uint8_T tmp23;
        uint8_T tmp24;
        uint8_T tmp25;
        tmp0 = (uint8_T)(0U);
        tmp1 = (uint8_T)(1U);
        tmp2 = (uint8_T)(1U);
        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(0U);
        tmp6 = (uint8_T)(0U);
        tmp7 = (uint8_T)(0U);
        tmp8 = (uint8_T)(0U);
        tmp9 = (uint8_T)(0U);
        tmp10 = (uint8_T)(0U);
        tmp11 = (uint8_T)(0U);
        tmp12 = (uint8_T)(0U);
        tmp13 = (uint8_T)(0U);
        tmp14 = (uint8_T)(0U);
        tmp15 = (uint8_T)(0U);
        tmp16 = (uint8_T)(0U);
        tmp17 = (uint8_T)(0U);
        tmp18 = (uint8_T)(0U);
        tmp19 = (uint8_T)(0U);
        tmp20 = (uint8_T)(0U);
        tmp21 = (uint8_T)(1U);
        tmp22 = (uint8_T)(0U);
        tmp23 = (uint8_T)(0U);
        tmp24 = (uint8_T)(0U);
        tmp25 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp2))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 4)
          | ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp5))
          [0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp6))[0] & 0x00000001) << 1)
          | ((((uint8_T *)(&tmp7))[0] & 0x00000001)) | ((((uint8_T *)(&tmp8))[0]
          & 0x00000002) >> 1) ;
        msg_data[1] = ((((uint8_T *)(&tmp8))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp9))[0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp10))
          [0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp11))[0] & 0x00000001) <<
          3) ;
        msg_data[2] = ((((uint8_T *)(&tmp12))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp13))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp14))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp15))[0] & 0x00000003) <<
          4) | ((((uint8_T *)(&tmp16))[0] & 0x00000007) << 3) | ((((uint8_T *)
          (&tmp17))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp18))[0] &
          0x00000001) << 1) | ((((uint8_T *)(&tmp19))[0] & 0x00000001)) ;
        msg_data[3] = ((((uint8_T *)(&tmp20))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp21))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp22))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp23))[0] & 0x00000003) <<
          4) | ((((uint8_T *)(&tmp24))[0] & 0x00000001) << 2) | ((((uint8_T *)
          (&tmp25))[0] & 0x00000003) << 1) ;
        CAN_1_Transmit(0, 0x2f0UL, 4, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S172>/If' incorporates:
   *  ActionPort: '<S213>/Action Port'
   *  ActionPort: '<S214>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S172>/override_enable'
   *  SubSystem: '<S172>/NewValue'
   *  SubSystem: '<S172>/OldValue'
   */
  if ((Validity_110_ovr_DataStore())) {
    /* Inport: '<S213>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S172>/new_value'
     */
    rtb_Merge_c = (Validity_110_new_DataStore());
  } else {
    /* Inport: '<S214>/In1' incorporates:
     *  Constant: '<S79>/Always Valid'
     */
    rtb_Merge_c = 0.0;
  }

  /* If: '<S173>/If' incorporates:
   *  ActionPort: '<S215>/Action Port'
   *  ActionPort: '<S216>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S173>/override_enable'
   *  SubSystem: '<S173>/NewValue'
   *  SubSystem: '<S173>/OldValue'
   */
  if ((Cruise_Active_ovr_DataStore())) {
    /* Inport: '<S215>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S173>/new_value'
     */
    rtb_Merge_ct = (Cruise_Active_new_DataStore());
  } else {
    /* Inport: '<S216>/In1' incorporates:
     *  Constant: '<S79>/Always Valid7'
     */
    rtb_Merge_ct = 0.0;
  }

  /* If: '<S184>/If' incorporates:
   *  ActionPort: '<S237>/Action Port'
   *  ActionPort: '<S238>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S184>/override_enable'
   *  SubSystem: '<S184>/NewValue'
   *  SubSystem: '<S184>/OldValue'
   */
  if ((Engine_Speed_ovr_DataStore())) {
    /* Inport: '<S237>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S184>/new_value'
     */
    cx06_MA_B.s184_Merge = (Engine_Speed_new_DataStore());
  } else {
    /* Inport: '<S238>/In1' */
    cx06_MA_B.s184_Merge = cx06_MA_B.s12_Eng_Spd;
  }

  /* Gain: '<S79>/Gain' */
  rtb_Switch_cf = 100.0 * cx06_MA_B.s25_Accel;

  /* If: '<S195>/If' incorporates:
   *  ActionPort: '<S259>/Action Port'
   *  ActionPort: '<S260>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S195>/override_enable'
   *  SubSystem: '<S195>/NewValue'
   *  SubSystem: '<S195>/OldValue'
   */
  if ((Acc_Eff_Pos_ovr_DataStore())) {
    /* Inport: '<S259>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S195>/new_value'
     */
    cx06_MA_B.s195_Merge = (Acc_Eff_Pos_new_DataStore());
  } else {
    /* Inport: '<S260>/In1' */
    cx06_MA_B.s195_Merge = rtb_Switch_cf;
  }

  /* If: '<S204>/If' incorporates:
   *  ActionPort: '<S277>/Action Port'
   *  ActionPort: '<S278>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S204>/override_enable'
   *  SubSystem: '<S204>/NewValue'
   *  SubSystem: '<S204>/OldValue'
   */
  if ((Acc_Act_Pos_ovr_DataStore())) {
    /* Inport: '<S277>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S204>/new_value'
     */
    cx06_MA_B.s204_Merge = (Acc_Act_Pos_new_DataStore());
  } else {
    /* Inport: '<S278>/In1' */
    cx06_MA_B.s204_Merge = rtb_Switch_cf;
  }

  /* If: '<S205>/If' incorporates:
   *  ActionPort: '<S279>/Action Port'
   *  ActionPort: '<S280>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S205>/override_enable'
   *  SubSystem: '<S205>/NewValue'
   *  SubSystem: '<S205>/OldValue'
   */
  if ((Throttle_Pos_ovr_DataStore())) {
    /* Inport: '<S279>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S205>/new_value'
     */
    cx06_MA_B.s205_Merge = (Throttle_Pos_new_DataStore());
  } else {
    /* Inport: '<S280>/In1' */
    cx06_MA_B.s205_Merge = rtb_Switch_cf;
  }

  /* If: '<S206>/If' incorporates:
   *  ActionPort: '<S281>/Action Port'
   *  ActionPort: '<S282>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S206>/override_enable'
   *  SubSystem: '<S206>/NewValue'
   *  SubSystem: '<S206>/OldValue'
   */
  if ((Throttle_Cmd_ovr_DataStore())) {
    /* Inport: '<S281>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S206>/new_value'
     */
    cx06_MA_B.s206_Merge = (Throttle_Cmd_new_DataStore());
  } else {
    /* Inport: '<S282>/In1' */
    cx06_MA_B.s206_Merge = rtb_Switch_cf;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (12.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (11500U)
         )) {
      /* 0x110 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_c < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_c > 15.0000000000F) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_c);
        }

        if (rtb_Merge_ct < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ct > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ct != 0);
        }

        if (cx06_MA_B.s184_Merge < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (cx06_MA_B.s184_Merge > 16383.7500000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(cx06_MA_B.s184_Merge * (4.0000000000F));
        }

        if (cx06_MA_B.s195_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (cx06_MA_B.s195_Merge > 100.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(cx06_MA_B.s195_Merge * (2.5500000000F));
        }

        if (cx06_MA_B.s204_Merge < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (cx06_MA_B.s204_Merge > 100.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(cx06_MA_B.s204_Merge * (2.5500000000F));
        }

        if (cx06_MA_B.s205_Merge < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (cx06_MA_B.s205_Merge > 100.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(cx06_MA_B.s205_Merge * (2.5500000000F));
        }

        if (cx06_MA_B.s206_Merge < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (cx06_MA_B.s206_Merge > 100.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(cx06_MA_B.s206_Merge * (2.5500000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F) << 4) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 1) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x110UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S207>/If' incorporates:
   *  ActionPort: '<S283>/Action Port'
   *  ActionPort: '<S284>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S207>/override_enable'
   *  SubSystem: '<S207>/NewValue'
   *  SubSystem: '<S207>/OldValue'
   */
  if ((Validity_120_ovr_DataStore())) {
    /* Inport: '<S283>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S207>/new_value'
     */
    rtb_Merge_j = (Validity_120_new_DataStore());
  } else {
    /* Inport: '<S284>/In1' incorporates:
     *  Constant: '<S79>/Always Valid1'
     */
    rtb_Merge_j = 0.0;
  }

  /* If: '<S208>/If' incorporates:
   *  ActionPort: '<S285>/Action Port'
   *  ActionPort: '<S286>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S208>/override_enable'
   *  SubSystem: '<S208>/NewValue'
   *  SubSystem: '<S208>/OldValue'
   */
  if ((Torque_Act_ovr_DataStore())) {
    /* Inport: '<S285>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S208>/new_value'
     */
    cx06_MA_B.s208_Merge = (Torque_Act_new_DataStore());
  } else {
    /* Inport: '<S286>/In1' */
    cx06_MA_B.s208_Merge = cx06_MA_B.s12_Eng_Torq_Actual;
  }

  /* If: '<S209>/If' incorporates:
   *  ActionPort: '<S287>/Action Port'
   *  ActionPort: '<S288>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S209>/override_enable'
   *  SubSystem: '<S209>/NewValue'
   *  SubSystem: '<S209>/OldValue'
   */
  if ((Trq_Reduce_Fail_Sts_ovr_DataStore())) {
    /* Inport: '<S287>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S209>/new_value'
     */
    rtb_Merge_a = (Trq_Reduce_Fail_Sts_new_DataStore());
  } else {
    /* Inport: '<S288>/In1' incorporates:
     *  Constant: '<S79>/Always Valid8'
     */
    rtb_Merge_a = 2.0;
  }

  /* If: '<S174>/If' incorporates:
   *  ActionPort: '<S217>/Action Port'
   *  ActionPort: '<S218>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S174>/override_enable'
   *  SubSystem: '<S174>/NewValue'
   *  SubSystem: '<S174>/OldValue'
   */
  if ((Trq_Reduce_Trac_Fail_ovr_DataStore())) {
    /* Inport: '<S217>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S174>/new_value'
     */
    rtb_Merge_n = (Trq_Reduce_Trac_Fail_new_DataStore());
  } else {
    /* Inport: '<S218>/In1' incorporates:
     *  Constant: '<S79>/Always Valid1'
     */
    rtb_Merge_n = 0.0;
  }

  /* If: '<S175>/If' incorporates:
   *  ActionPort: '<S219>/Action Port'
   *  ActionPort: '<S220>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S175>/override_enable'
   *  SubSystem: '<S175>/NewValue'
   *  SubSystem: '<S175>/OldValue'
   */
  if ((Torque_Req_ovr_DataStore())) {
    /* Inport: '<S219>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S175>/new_value'
     */
    cx06_MA_B.s175_Merge = (Torque_Req_new_DataStore());
  } else {
    /* Inport: '<S220>/In1' */
    cx06_MA_B.s175_Merge = cx06_MA_B.s12_Eng_Torq_Request;
  }

  /* If: '<S176>/If' incorporates:
   *  ActionPort: '<S221>/Action Port'
   *  ActionPort: '<S222>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S176>/override_enable'
   *  SubSystem: '<S176>/NewValue'
   *  SubSystem: '<S176>/OldValue'
   */
  if ((Torque_Max_ovr_DataStore())) {
    /* Inport: '<S221>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S176>/new_value'
     */
    cx06_MA_B.s176_Merge = (Torque_Max_new_DataStore());
  } else {
    /* Inport: '<S222>/In1' */
    cx06_MA_B.s176_Merge = cx06_MA_B.s12_Eng_Torq_Max;
  }

  /* If: '<S177>/If' incorporates:
   *  ActionPort: '<S223>/Action Port'
   *  ActionPort: '<S224>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S177>/override_enable'
   *  SubSystem: '<S177>/NewValue'
   *  SubSystem: '<S177>/OldValue'
   */
  if ((Torque_Min_ovr_DataStore())) {
    /* Inport: '<S223>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S177>/new_value'
     */
    cx06_MA_B.s177_Merge = (Torque_Min_new_DataStore());
  } else {
    /* Inport: '<S224>/In1' */
    cx06_MA_B.s177_Merge = cx06_MA_B.s12_Eng_Max_Drag_Torq;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (12.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (11500U)
         )) {
      /* 0x120 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint16_T tmp4;
        uint16_T tmp5;
        uint16_T tmp6;
        if (rtb_Merge_j < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_j > 15.0000000000F) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_j);
        }

        if (cx06_MA_B.s208_Merge < -200.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (cx06_MA_B.s208_Merge > 823.7500000000F) {
          tmp1 = (uint16_T)(4095U);
        } else {
          tmp1 = (uint16_T)((cx06_MA_B.s208_Merge - (-200.0000000000F)) *
                            (4.0000000000F));
        }

        if (rtb_Merge_a < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_a > 7.0000000000F) {
          tmp2 = (uint8_T)(7U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_a);
        }

        if (rtb_Merge_n < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_n > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_n != 0);
        }

        if (cx06_MA_B.s175_Merge < -200.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (cx06_MA_B.s175_Merge > 823.7500000000F) {
          tmp4 = (uint16_T)(4095U);
        } else {
          tmp4 = (uint16_T)((cx06_MA_B.s175_Merge - (-200.0000000000F)) *
                            (4.0000000000F));
        }

        if (cx06_MA_B.s176_Merge < -200.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (cx06_MA_B.s176_Merge > 823.7500000000F) {
          tmp5 = (uint16_T)(4095U);
        } else {
          tmp5 = (uint16_T)((cx06_MA_B.s176_Merge - (-200.0000000000F)) *
                            (4.0000000000F));
        }

        if (cx06_MA_B.s177_Merge < -200.0000000000F) {
          tmp6 = (uint16_T)(0U);
        } else if (cx06_MA_B.s177_Merge > 823.7500000000F) {
          tmp6 = (uint16_T)(4095U);
        } else {
          tmp6 = (uint16_T)((cx06_MA_B.s177_Merge - (-200.0000000000F)) *
                            (4.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F) << 4) |
          ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0] & 0x00000007) << 5) |
          ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp4))
          [0] & 0x0000000F)) ;
        msg_data[3] = ((((uint8_T *)(&tmp4))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp5))[0] & 0x0000000F)) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0] & 0x0000000F)) ;
        msg_data[7] = ((((uint8_T *)(&tmp6))[1])) ;
        CAN_2_Transmit(0, 0x120UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S178>/If' incorporates:
   *  ActionPort: '<S225>/Action Port'
   *  ActionPort: '<S226>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S178>/override_enable'
   *  SubSystem: '<S178>/NewValue'
   *  SubSystem: '<S178>/OldValue'
   */
  if ((Limp_Home_ovr_DataStore())) {
    /* Inport: '<S225>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S178>/new_value'
     */
    rtb_Merge_f = (Limp_Home_new_DataStore());
  } else {
    /* Inport: '<S226>/In1' */
    rtb_Merge_f = cx06_MA_B.s12_Eng_Limp_Home_Mode;
  }

  /* If: '<S179>/If' incorporates:
   *  ActionPort: '<S227>/Action Port'
   *  ActionPort: '<S228>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S179>/override_enable'
   *  SubSystem: '<S179>/NewValue'
   *  SubSystem: '<S179>/OldValue'
   */
  if ((Gen_Failed_ovr_DataStore())) {
    /* Inport: '<S227>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S179>/new_value'
     */
    rtb_Merge_g = (Gen_Failed_new_DataStore());
  } else {
    /* Inport: '<S228>/In1' */
    rtb_Merge_g = cx06_MA_B.s12_Generator_Failed;
  }

  /* Switch: '<S171>/Switch' incorporates:
   *  Constant: '<S171>/Constant'
   *  S-Function (motohawk_sfun_fault_action): '<S171>/motohawk_fault_action'
   */
  if (GetFaultActionStatus(0)) {
    rtb_Switch_cf = cx06_MA_B.s12_Eng_Running_Stat;
  } else {
    rtb_Switch_cf = 1.0;
  }

  /* If: '<S180>/If' incorporates:
   *  ActionPort: '<S229>/Action Port'
   *  ActionPort: '<S230>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S180>/override_enable'
   *  SubSystem: '<S180>/NewValue'
   *  SubSystem: '<S180>/OldValue'
   */
  if ((Eng_Run_Sts_ovr_DataStore())) {
    /* Inport: '<S229>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S180>/new_value'
     */
    rtb_Merge_ar = (Eng_Run_Sts_new_DataStore());
  } else {
    /* Inport: '<S230>/In1' */
    rtb_Merge_ar = rtb_Switch_cf;
  }

  /* Saturate: '<S79>/Saturation' */
  rtb_Switch1_h = rt_SATURATE(cx06_MA_B.s12_Eng_Running_Stat, 0.0, 1.0);

  /* If: '<S181>/If' incorporates:
   *  ActionPort: '<S231>/Action Port'
   *  ActionPort: '<S232>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S181>/override_enable'
   *  SubSystem: '<S181>/NewValue'
   *  SubSystem: '<S181>/OldValue'
   */
  if ((Oil_Pres_Low_ovr_DataStore())) {
    /* Inport: '<S231>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S181>/new_value'
     */
    rtb_Merge_k = (Oil_Pres_Low_new_DataStore());
  } else {
    /* Inport: '<S232>/In1' incorporates:
     *  Product: '<S79>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration1'
     */
    rtb_Merge_k = rtb_Switch1_h * cx06_MA_B.s12_Eng_Oil_Pres_Low * (real_T)
      ((uint8_T)(CheckEngineLights_DataStore()));
  }

  /* If: '<S182>/If' incorporates:
   *  ActionPort: '<S233>/Action Port'
   *  ActionPort: '<S234>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S182>/override_enable'
   *  SubSystem: '<S182>/NewValue'
   *  SubSystem: '<S182>/OldValue'
   */
  if ((Svc_Eng_Non_Emis_ovr_DataStore())) {
    /* Inport: '<S233>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S182>/new_value'
     */
    rtb_Merge_fk = (Svc_Eng_Non_Emis_new_DataStore());
  } else {
    /* Inport: '<S234>/In1' incorporates:
     *  Product: '<S79>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration1'
     */
    rtb_Merge_fk = rtb_Switch1_h * cx06_MA_B.s12_Service_Eng_Non_Emission *
      (real_T)((uint8_T)(CheckEngineLights_DataStore()));
  }

  /* If: '<S183>/If' incorporates:
   *  ActionPort: '<S235>/Action Port'
   *  ActionPort: '<S236>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S183>/override_enable'
   *  SubSystem: '<S183>/NewValue'
   *  SubSystem: '<S183>/OldValue'
   */
  if ((Validity_300_ovr_DataStore())) {
    /* Inport: '<S235>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S183>/new_value'
     */
    rtb_Merge_f2 = (Validity_300_new_DataStore());
  } else {
    /* Inport: '<S236>/In1' incorporates:
     *  Constant: '<S79>/Always Valid6'
     */
    rtb_Merge_f2 = 0.0;
  }

  /* If: '<S185>/If' incorporates:
   *  ActionPort: '<S239>/Action Port'
   *  ActionPort: '<S240>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S185>/override_enable'
   *  SubSystem: '<S185>/NewValue'
   *  SubSystem: '<S185>/OldValue'
   */
  if ((Brake_Pdl_Sw2_ovr_DataStore())) {
    /* Inport: '<S239>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S185>/new_value'
     */
    rtb_Merge_i = (Brake_Pdl_Sw2_new_DataStore());
  } else {
    /* Inport: '<S240>/In1' */
    rtb_Merge_i = cx06_MA_B.s12_Brake_Ped_Switch;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x300 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        if (rtb_Merge_f < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_f > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_f != 0);
        }

        if (rtb_Merge_g < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_g > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_g != 0);
        }

        if (rtb_Merge_ar < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_ar > 3.0000000000F) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_ar);
        }

        if (rtb_Merge_k < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_k > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_k != 0);
        }

        if (rtb_Merge_fk < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_fk > 3.0000000000F) {
          tmp4 = (uint8_T)(3U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_fk);
        }

        if (rtb_Merge_f2 < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_f2 > 1.0000000000F) {
          tmp5 = (uint8_T)(1U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_f2 != 0);
        }

        if (rtb_Merge_i < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_i > 1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_i != 0);
        }

        if (rtb_Merge_i < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (rtb_Merge_i > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(rtb_Merge_i != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0] & 0x00000003)) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 5) ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp5))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp6))
          [0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 5)
          ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x300UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S186>/If' incorporates:
   *  ActionPort: '<S241>/Action Port'
   *  ActionPort: '<S242>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S186>/override_enable'
   *  SubSystem: '<S186>/NewValue'
   *  SubSystem: '<S186>/OldValue'
   */
  if ((Validity_308_ovr_DataStore())) {
    /* Inport: '<S241>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S186>/new_value'
     */
    rtb_Merge_gv = (Validity_308_new_DataStore());
  } else {
    /* Inport: '<S242>/In1' incorporates:
     *  Constant: '<S79>/Always Valid2'
     */
    rtb_Merge_gv = 0.0;
  }

  /* If: '<S187>/If' incorporates:
   *  ActionPort: '<S243>/Action Port'
   *  ActionPort: '<S244>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S187>/override_enable'
   *  SubSystem: '<S187>/NewValue'
   *  SubSystem: '<S187>/OldValue'
   */
  if ((Clnt_Hot_ovr_DataStore())) {
    /* Inport: '<S243>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S187>/new_value'
     */
    rtb_Merge_al = (Clnt_Hot_new_DataStore());
  } else {
    /* Inport: '<S244>/In1' incorporates:
     *  RelationalOperator: '<S79>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration'
     */
    rtb_Merge_al = (cx06_MA_B.s12_Eng_Coolant_Temp >
                    (Coolant_Temp_Warning_Thres_DataStore()));
  }

  /* Gain: '<S210>/Gain' */
  rtb_Gain_d = 100.0F * cx06_MA_B.s20_Fuel_Level;

  /* UnitDelay: '<S210>/Unit Delay1' */
  rtb_Switch_cf = cx06_MA_DWork.s210_UnitDelay1_DSTATE;

  /* Switch: '<S210>/Switch' incorporates:
   *  Constant: '<S210>/Constant'
   *  Product: '<S210>/Product'
   *  Product: '<S210>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration'
   *  Sum: '<S210>/Sum'
   *  Sum: '<S210>/Sum1'
   */
  if (cx06_MA_DWork.s210_UnitDelay1_DSTATE > -1.0) {
    cx06_MA_B.s210_Switch = (1.0 - (Fuel_Filter_K_DataStore())) * rtb_Switch_cf
      + (real_T)rtb_Gain_d * (Fuel_Filter_K_DataStore());
  } else {
    cx06_MA_B.s210_Switch = rtb_Gain_d;
  }

  /* RelationalOperator: '<S168>/Relational Operator' incorporates:
   *  Constant: '<S168>/Constant'
   */
  rtb_LogicalOperator2_k = (cx06_MA_B.s24_cruiseBut == 0.0);

  /* Gain: '<S168>/Gain' incorporates:
   *  Fcn: '<S168>/my2pt Cal'
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration8'
   */
  rtb_Switch1_h = (cx06_MA_B.s50_SOC - (SOC_Lvl_Zero_DataStore())) /
    ((SOC_Lvl_Full_DataStore()) - (SOC_Lvl_Zero_DataStore())) * 100.0;

  /* Sum: '<S168>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration2'
   *  Saturate: '<S168>/Saturation1'
   */
  cx06_MA_B.s168_Sum1 = rt_SATURATE(rtb_Switch1_h, 0.0, 100.0) +
    (Bat_Lvl_Offset_DataStore());

  /* Switch: '<S168>/Switch2' incorporates:
   *  RelationalOperator: '<S168>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration'
   *  UnitDelay: '<S168>/Unit Delay'
   *  UnitDelay: '<S168>/Unit Delay1'
   */
  if ((int32_T)rtb_LogicalOperator2_k == (int32_T)
      cx06_MA_DWork.s168_UnitDelay_DSTATE) {
    rtb_Switch1_h = cx06_MA_DWork.s168_UnitDelay1_DSTATE;
  } else {
    rtb_Switch1_h = (Gage_Delay_DataStore());
  }

  /* Sum: '<S168>/Sum' incorporates:
   *  Constant: '<S168>/Constant3'
   */
  rtb_Switch1_h--;

  /* Saturate: '<S168>/Saturation' */
  cx06_MA_B.s168_Saturation = rt_SATURATE(rtb_Switch1_h, 0.0, 1000.0);

  /* Switch: '<S168>/Switch1' incorporates:
   *  Constant: '<S168>/Constant2'
   *  RelationalOperator: '<S168>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration1'
   */
  if (0.0 == cx06_MA_B.s168_Saturation) {
    /* Switch: '<S168>/Switch' */
    if (rtb_LogicalOperator2_k) {
      rtb_Switch_cf = cx06_MA_B.s210_Switch;
    } else {
      /* Switch: '<S168>/Switch3' incorporates:
       *  Constant: '<S168>/Constant'
       *  Saturate: '<S168>/Saturation3'
       */
      if (cx06_MA_ConstB.s168_LogicalOperator >= 1) {
        rtb_Switch_cf = 0.0;
      } else {
        rtb_Switch_cf = rt_SATURATE(cx06_MA_B.s168_Sum1, 0.0, 100.0);
      }
    }
  } else {
    rtb_Switch_cf = (TransGoToPoint_DataStore());
  }

  /* If: '<S188>/If' incorporates:
   *  ActionPort: '<S245>/Action Port'
   *  ActionPort: '<S246>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S188>/override_enable'
   *  SubSystem: '<S188>/NewValue'
   *  SubSystem: '<S188>/OldValue'
   */
  if ((Fuel_Level_ovr_DataStore())) {
    /* Inport: '<S245>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S188>/new_value'
     */
    cx06_MA_B.s188_Merge = (Fuel_Level_new_DataStore());
  } else {
    /* Inport: '<S246>/In1' */
    cx06_MA_B.s188_Merge = rtb_Switch_cf;
  }

  /* If: '<S189>/If' incorporates:
   *  ActionPort: '<S247>/Action Port'
   *  ActionPort: '<S248>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S189>/override_enable'
   *  SubSystem: '<S189>/NewValue'
   *  SubSystem: '<S189>/OldValue'
   */
  if ((Oil_Life_Rst_ovr_DataStore())) {
    /* Inport: '<S247>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S189>/new_value'
     */
    rtb_Merge_l = (Oil_Life_Rst_new_DataStore());
  } else {
    /* Inport: '<S248>/In1' incorporates:
     *  Constant: '<S79>/Never Oil Life Reset'
     */
    rtb_Merge_l = 0.0;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x308 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        if (rtb_Merge_gv < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_gv > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_gv != 0);
        }

        tmp1 = (uint8_T)(rtb_Merge_al != 0);
        if (cx06_MA_B.s188_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (cx06_MA_B.s188_Merge > 100.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s188_Merge * (2.5500000000F));
        }

        if (rtb_Merge_l < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_l > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_l != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 2) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[2] = 0 ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 2) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x308UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S190>/If' incorporates:
   *  ActionPort: '<S249>/Action Port'
   *  ActionPort: '<S250>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S190>/override_enable'
   *  SubSystem: '<S190>/NewValue'
   *  SubSystem: '<S190>/OldValue'
   */
  if ((Validity_320_ovr_DataStore())) {
    /* Inport: '<S249>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/new_value'
     */
    rtb_Merge_c5 = (Validity_320_new_DataStore());
  } else {
    /* Inport: '<S250>/In1' incorporates:
     *  Constant: '<S79>/Always Valid3'
     */
    rtb_Merge_c5 = 0.0;
  }

  /* If: '<S191>/If' incorporates:
   *  ActionPort: '<S251>/Action Port'
   *  ActionPort: '<S252>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S191>/override_enable'
   *  SubSystem: '<S191>/NewValue'
   *  SubSystem: '<S191>/OldValue'
   */
  if ((Shift_Dir_ovr_DataStore())) {
    /* Inport: '<S251>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S191>/new_value'
     */
    rtb_Merge_nr = (Shift_Dir_new_DataStore());
  } else {
    /* Inport: '<S252>/In1' incorporates:
     *  Constant: '<S79>/Always Valid10'
     */
    rtb_Merge_nr = 0.0;
  }

  /* Embedded MATLAB: '<S79>/Act_Gear_Translate' */
  cx06_MA_Act_Gear_Translate(cx06_MA_B.s368_Product,
    &cx06_MA_B.s79_sf_Act_Gear_Translate);

  /* If: '<S192>/If' incorporates:
   *  ActionPort: '<S253>/Action Port'
   *  ActionPort: '<S254>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S192>/override_enable'
   *  SubSystem: '<S192>/NewValue'
   *  SubSystem: '<S192>/OldValue'
   */
  if ((Actual_Gear_ovr_DataStore())) {
    /* Inport: '<S253>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S192>/new_value'
     */
    cx06_MA_B.s192_Merge = (Actual_Gear_new_DataStore());
  } else {
    /* Inport: '<S254>/In1' */
    cx06_MA_B.s192_Merge = cx06_MA_B.s79_sf_Act_Gear_Translate.s166_y;
  }

  /* Embedded MATLAB: '<S79>/Cmd_Gear_Translate' */
  /* Embedded MATLAB Function 'Outputs/GMLAN Outputs/Cmd_Gear_Translate': '<S167>:1' */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  if ((cx06_MA_B.s368_Product > 0) && (cx06_MA_B.s368_Product <= 6)) {
    /* '<S167>:1:5' */
    /* '<S167>:1:6' */
    rtb_Switch_cf = (real_T)cx06_MA_B.s368_Product;
  } else {
    /* '<S167>:1:8' */
    rtb_Switch_cf = 0.0;
  }

  /* If: '<S193>/If' incorporates:
   *  ActionPort: '<S255>/Action Port'
   *  ActionPort: '<S256>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S193>/override_enable'
   *  SubSystem: '<S193>/NewValue'
   *  SubSystem: '<S193>/OldValue'
   */
  if ((Cmd_Gear_ovr_DataStore())) {
    /* Inport: '<S255>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S193>/new_value'
     */
    cx06_MA_B.s193_Merge = (Cmd_Gear_new_DataStore());
  } else {
    /* Inport: '<S256>/In1' */
    cx06_MA_B.s193_Merge = rtb_Switch_cf;
  }

  /* Embedded MATLAB: '<S79>/Gear_Pos_Translate' */
  cx06_MA_Act_Gear_Translate(cx06_MA_B.s368_Product,
    &cx06_MA_B.s79_sf_Gear_Pos_Translate);

  /* If: '<S194>/If' incorporates:
   *  ActionPort: '<S257>/Action Port'
   *  ActionPort: '<S258>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S194>/override_enable'
   *  SubSystem: '<S194>/NewValue'
   *  SubSystem: '<S194>/OldValue'
   */
  if ((Gear_Sel_Pos_ovr_DataStore())) {
    /* Inport: '<S257>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S194>/new_value'
     */
    cx06_MA_B.s194_Merge = (Gear_Sel_Pos_new_DataStore());
  } else {
    /* Inport: '<S258>/In1' incorporates:
     *  Constant: '<S79>/Always Valid4'
     *  Product: '<S79>/Product2'
     */
    cx06_MA_B.s194_Merge = cx06_MA_B.s79_sf_Gear_Pos_Translate.s166_y * 0.0;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages4' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x320 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        if (rtb_Merge_c5 < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_c5 > 15.0000000000F) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_c5);
        }

        if (rtb_Merge_nr < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_nr > 3.0000000000F) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_nr);
        }

        if (cx06_MA_B.s192_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (cx06_MA_B.s192_Merge > 15.0000000000F) {
          tmp2 = (uint8_T)(15U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s192_Merge);
        }

        if (cx06_MA_B.s193_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (cx06_MA_B.s193_Merge > 7.0000000000F) {
          tmp3 = (uint8_T)(7U);
        } else {
          tmp3 = (uint8_T)(cx06_MA_B.s193_Merge);
        }

        if (cx06_MA_B.s194_Merge < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (cx06_MA_B.s194_Merge > 63.0000000000F) {
          tmp4 = (uint8_T)(63U);
        } else {
          tmp4 = (uint8_T)(cx06_MA_B.s194_Merge);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F) << 4) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000003)) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0] & 0x0000000F)) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0] & 0x00000007) << 5) ;
        msg_data[3] = 0 ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0] & 0x0000003F)) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x320UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S196>/If' incorporates:
   *  ActionPort: '<S261>/Action Port'
   *  ActionPort: '<S262>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S196>/override_enable'
   *  SubSystem: '<S196>/NewValue'
   *  SubSystem: '<S196>/OldValue'
   */
  if ((Validity_410_ovr_DataStore())) {
    /* Inport: '<S261>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S196>/new_value'
     */
    rtb_Merge_b = (Validity_410_new_DataStore());
  } else {
    /* Inport: '<S262>/In1' incorporates:
     *  Constant: '<S79>/Always Valid4'
     */
    rtb_Merge_b = 0.0;
  }

  /* Sum: '<S170>/Sum' incorporates:
   *  Gain: '<S170>/Gain'
   *  UnitDelay: '<S170>/Unit Delay'
   */
  rtb_Switch_cf = 1.3888888888888890E-006 * cx06_MA_B.s49_Divide +
    cx06_MA_DWork.s170_UnitDelay_DSTATE;

  /* RelationalOperator: '<S211>/Compare' incorporates:
   *  Constant: '<S211>/Constant'
   */
  rtb_Switch_o = (rtb_Switch_cf > 1000.0);

  /* If: '<S197>/If' incorporates:
   *  ActionPort: '<S263>/Action Port'
   *  ActionPort: '<S264>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S197>/override_enable'
   *  SubSystem: '<S197>/NewValue'
   *  SubSystem: '<S197>/OldValue'
   */
  if ((Roll_Cnt_Rst_ovr_DataStore())) {
    /* Inport: '<S263>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S197>/new_value'
     */
    rtb_Merge_p = ((uint8_T)(Roll_Cnt_Rst_new_DataStore()));
  } else {
    /* Inport: '<S264>/In1' incorporates:
     *  Constant: '<S212>/Constant'
     *  Logic: '<S170>/Logical Operator1'
     *  RelationalOperator: '<S212>/Compare'
     */
    rtb_Merge_p = (((rtb_Switch_cf < 5.0) != 0) || (rtb_Switch_o != 0));
  }

  /* If: '<S198>/If' incorporates:
   *  ActionPort: '<S265>/Action Port'
   *  ActionPort: '<S266>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S198>/override_enable'
   *  SubSystem: '<S198>/NewValue'
   *  SubSystem: '<S198>/OldValue'
   */
  if ((Veh_Speed_ovr_DataStore())) {
    /* Inport: '<S265>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S198>/new_value'
     */
    cx06_MA_B.s198_Merge = (Veh_Speed_new_DataStore());
  } else {
    /* Inport: '<S266>/In1' */
    cx06_MA_B.s198_Merge = cx06_MA_B.s49_Divide;
  }

  /* If: '<S199>/If' incorporates:
   *  ActionPort: '<S267>/Action Port'
   *  ActionPort: '<S268>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S199>/override_enable'
   *  SubSystem: '<S199>/NewValue'
   *  SubSystem: '<S199>/OldValue'
   */
  if ((Roll_Cnt_ovr_DataStore())) {
    /* Inport: '<S267>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S199>/new_value'
     */
    rtb_Merge_nh = (Roll_Cnt_new_DataStore());
  } else {
    /* Inport: '<S268>/In1' */
    rtb_Merge_nh = rtb_Switch_cf;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages5' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x410 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint16_T tmp3;
        if (rtb_Merge_b < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_b > 3.0000000000F) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_b);
        }

        if (rtb_Merge_p > 1U) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_p != 0);
        }

        if (cx06_MA_B.s198_Merge < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (cx06_MA_B.s198_Merge > 318.1371959631F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(cx06_MA_B.s198_Merge * (205.9960320000F));
        }

        if (rtb_Merge_nh < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_nh > 1023.9843750000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_nh * (64.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 5) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x410UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S200>/If' incorporates:
   *  ActionPort: '<S269>/Action Port'
   *  ActionPort: '<S270>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S200>/override_enable'
   *  SubSystem: '<S200>/NewValue'
   *  SubSystem: '<S200>/OldValue'
   */
  if ((Validity_510_ovr_DataStore())) {
    /* Inport: '<S269>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S200>/new_value'
     */
    rtb_Merge_dg = (Validity_510_new_DataStore());
  } else {
    /* Inport: '<S270>/In1' incorporates:
     *  Constant: '<S79>/Always Valid5'
     */
    rtb_Merge_dg = 0.0;
  }

  /* If: '<S201>/If' incorporates:
   *  ActionPort: '<S271>/Action Port'
   *  ActionPort: '<S272>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S201>/override_enable'
   *  SubSystem: '<S201>/NewValue'
   *  SubSystem: '<S201>/OldValue'
   */
  if ((Chng_Oil_Soon_ovr_DataStore())) {
    /* Inport: '<S271>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S201>/new_value'
     */
    rtb_Merge_eb = (Chng_Oil_Soon_new_DataStore());
  } else {
    /* Inport: '<S272>/In1' incorporates:
     *  Logic: '<S79>/Logical Operator'
     */
    rtb_Merge_eb = (cx06_MA_B.s12_Eng_Oil_Change_Soon ||
                    cx06_MA_B.s12_Eng_Oil_Change_Now);
  }

  /* If: '<S202>/If' incorporates:
   *  ActionPort: '<S273>/Action Port'
   *  ActionPort: '<S274>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S202>/override_enable'
   *  SubSystem: '<S202>/NewValue'
   *  SubSystem: '<S202>/OldValue'
   */
  if ((Coolant_Temp_ovr_DataStore())) {
    /* Inport: '<S273>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S202>/new_value'
     */
    rtb_Merge_io = (Coolant_Temp_new_DataStore());
  } else {
    /* Inport: '<S274>/In1' */
    rtb_Merge_io = cx06_MA_B.s12_Eng_Coolant_Temp;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages6' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (500.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (499500U)
         )) {
      /* 0x510 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        if (rtb_Merge_dg < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_dg > 15.0000000000F) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_dg);
        }

        tmp1 = (uint8_T)(rtb_Merge_eb != 0);
        if (rtb_Merge_io < -40.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_io > 215.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_io - (-40.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F) << 4) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x510UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S203>/If' incorporates:
   *  ActionPort: '<S275>/Action Port'
   *  ActionPort: '<S276>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S203>/override_enable'
   *  SubSystem: '<S203>/NewValue'
   *  SubSystem: '<S203>/OldValue'
   */
  if ((Trans_Hot_ovr_DataStore())) {
    /* Inport: '<S275>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S203>/new_value'
     */
    rtb_Merge_lg = ((uint8_T)(Trans_Hot_new_DataStore()));
  } else {
    /* Inport: '<S276>/In1' incorporates:
     *  DataTypeConversion: '<S79>/Data Type Conversion'
     */
    rtb_Merge_lg = cx06_MA_B.s377_Glow_plug_inhibit;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S79>/Send CAN Messages7' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (500.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (499500U)
         )) {
      /* 0x520 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        if (rtb_Merge_lg > 1U) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_lg != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 4) ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x520UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Logic: '<S170>/Logical Operator' */
  rtb_LogicalOperator_fv3 = !(rtb_Switch_o != 0);

  /* Product: '<S170>/Product' */
  rtb_Product_fb = rtb_Switch_cf * (real_T)rtb_LogicalOperator_fv3;

  /* Product: '<S80>/Product' */
  cx06_MA_B.s80_Torque_Request = cx06_MA_B.s14_MaxTorqueavailable *
    cx06_MA_B.s365_motor_torque;

  /* If: '<S291>/If' incorporates:
   *  ActionPort: '<S305>/Action Port'
   *  ActionPort: '<S306>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S291>/override_enable'
   *  SubSystem: '<S291>/NewValue'
   *  SubSystem: '<S291>/OldValue'
   */
  if ((Filt_Torque_Request_ovr_DataStore())) {
    /* Inport: '<S305>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S291>/new_value'
     */
    cx06_MA_B.s291_Merge = ((int16_T)(Filt_Torque_Request_new_DataStore()));
  } else {
    /* Inport: '<S306>/In1' incorporates:
     *  DataTypeConversion: '<S80>/Data Type Conversion'
     */
    if (rtIsNaN(cx06_MA_B.s80_Torque_Request) || rtIsInf
        (cx06_MA_B.s80_Torque_Request)) {
      tmp = 0.0;
    } else {
      tmp = fmod(floor(cx06_MA_B.s80_Torque_Request), 65536.0);
    }

    cx06_MA_B.s291_Merge = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)(-((int16_T)
      (uint16_T)(-tmp))) : (int32_T)(int16_T)(uint16_T)tmp);
  }

  /* UnitDelay: '<S290>/Unit Delay' */
  rtb_Switch_cf = cx06_MA_DWork.s290_UnitDelay_DSTATE;

  /* Abs: '<S290>/Abs' */
  rtb_Switch1_h = fabs(cx06_MA_B.s365_motor_torque);

  /* RelationalOperator: '<S290>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration11'
   */
  cx06_MA_B.s290_RelationalOperator = (rtb_Switch1_h < (Zero_Threshold_DataStore
                                        ()));

  /* Switch: '<S290>/Switch1' incorporates:
   *  Constant: '<S290>/Constant'
   *  Constant: '<S290>/Constant1'
   *  Sum: '<S290>/Sum'
   */
  if (cx06_MA_B.s290_RelationalOperator > 0) {
    rtb_Switch1_h = rtb_Switch_cf + 1.0;
  } else {
    rtb_Switch1_h = 0.0;
  }

  /* Saturate: '<S290>/Saturation' */
  rtb_Switch_cf = rt_SATURATE(rtb_Switch1_h, 0.0, 6000.0);

  /* Switch: '<S290>/Switch' incorporates:
   *  RelationalOperator: '<S290>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration2'
   */
  if (((uint8_T)(MCU_Manage_Source_DataStore())) > 0) {
    rtb_Switch_o = (rtb_Switch_cf < (Disable_MCU_Delay_DataStore()));
  } else {
    rtb_Switch_o = cx06_MA_B.s365_motor_Enable;
  }

  /* If: '<S296>/If' incorporates:
   *  ActionPort: '<S315>/Action Port'
   *  ActionPort: '<S316>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S296>/override_enable'
   *  SubSystem: '<S296>/NewValue'
   *  SubSystem: '<S296>/OldValue'
   */
  if ((motor_Enable_ovr_DataStore())) {
    /* Inport: '<S315>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S296>/new_value'
     */
    rtb_RelationalOperator1_g = (motor_Enable_new_DataStore());
  } else {
    /* Inport: '<S316>/In1' incorporates:
     *  Logic: '<S290>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_g = ((rtb_Switch_o != 0) || (((uint8_T)
      (Inhibit_MCU_Management_DataStore())) != 0));
  }

  /* If: '<S292>/If' incorporates:
   *  ActionPort: '<S307>/Action Port'
   *  ActionPort: '<S308>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S292>/override_enable'
   *  SubSystem: '<S292>/NewValue'
   *  SubSystem: '<S292>/OldValue'
   */
  if ((Enable_MCU_ovr_DataStore())) {
    /* Inport: '<S307>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S292>/new_value'
     */
    cx06_MA_B.s292_Merge = (Enable_MCU_new_DataStore());
  } else {
    /* Inport: '<S308>/In1' incorporates:
     *  Constant: '<S80>/Constant'
     *  Logic: '<S80>/Logical Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
     */
    cx06_MA_B.s292_Merge = (rtb_RelationalOperator1_g && (((uint8_T)
      (Enable_IPT_DataStore())) != 0) && cx06_MA_B.s14_MCUReady);
  }

  /* If: '<S297>/If' incorporates:
   *  ActionPort: '<S317>/Action Port'
   *  ActionPort: '<S318>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S297>/override_enable'
   *  SubSystem: '<S297>/NewValue'
   *  SubSystem: '<S297>/OldValue'
   */
  if ((Disable_AntiShudder_ovr_DataStore())) {
    /* Inport: '<S317>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S297>/new_value'
     */
    cx06_MA_B.s297_Merge = ((uint8_T)(Disable_AntiShudder_new_DataStore()));
  } else {
    /* Inport: '<S318>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration1'
     */
    cx06_MA_B.s297_Merge = ((uint8_T)(DisableAntiShudder_DataStore()));
  }

  /* If: '<S298>/If' incorporates:
   *  ActionPort: '<S319>/Action Port'
   *  ActionPort: '<S320>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S298>/override_enable'
   *  SubSystem: '<S298>/NewValue'
   *  SubSystem: '<S298>/OldValue'
   */
  if ((VCU_Off_ovr_DataStore())) {
    /* Inport: '<S319>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S298>/new_value'
     */
    cx06_MA_B.s298_Merge = ((uint8_T)(VCU_Off_new_DataStore()));
  } else {
    /* Inport: '<S320>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration15'
     */
    cx06_MA_B.s298_Merge = ((uint8_T)(VCUOff_DataStore()));
  }

  /* If: '<S299>/If' incorporates:
   *  ActionPort: '<S321>/Action Port'
   *  ActionPort: '<S322>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S299>/override_enable'
   *  SubSystem: '<S299>/NewValue'
   *  SubSystem: '<S299>/OldValue'
   */
  if ((In_Drive_ovr_DataStore())) {
    /* Inport: '<S321>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S299>/new_value'
     */
    cx06_MA_B.s299_Merge = (In_Drive_new_DataStore());
  } else {
    /* Inport: '<S322>/In1' incorporates:
     *  Logic: '<S80>/Logical Operator'
     */
    cx06_MA_B.s299_Merge = !cx06_MA_B.s22_Reverse;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S80>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (10.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (9500U)
         )) {
      /* 0x250 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        int16_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        if (cx06_MA_B.s291_Merge < -409) {
          tmp0 = (int16_T)(-4096);
        } else if (cx06_MA_B.s291_Merge > 409) {
          tmp0 = (int16_T)(4095);
        } else {
          tmp0 = (int16_T)(cx06_MA_B.s291_Merge * (10));
        }

        tmp1 = (uint8_T)(cx06_MA_B.s292_Merge != 0);
        if (cx06_MA_B.s297_Merge > 1U) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s297_Merge != 0);
        }

        if (cx06_MA_B.s298_Merge > 1U) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(cx06_MA_B.s298_Merge != 0);
        }

        tmp4 = (uint8_T)(cx06_MA_B.s299_Merge != 0);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000001F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp2))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp3))[0] &
          0x00000001) << 3) | ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 4) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        CAN_1_Transmit(0, 0x250UL, 7, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S304>/If' incorporates:
   *  ActionPort: '<S331>/Action Port'
   *  ActionPort: '<S332>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S304>/override_enable'
   *  SubSystem: '<S304>/NewValue'
   *  SubSystem: '<S304>/OldValue'
   */
  if ((Buck_V_ovr_DataStore())) {
    /* Inport: '<S331>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S304>/new_value'
     */
    cx06_MA_B.s304_Merge = (Buck_V_new_DataStore());
  } else {
    /* Inport: '<S332>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration7'
     */
    cx06_MA_B.s304_Merge = (DCDC_Buck_V_DataStore());
  }

  /* If: '<S293>/If' incorporates:
   *  ActionPort: '<S309>/Action Port'
   *  ActionPort: '<S310>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S293>/override_enable'
   *  SubSystem: '<S293>/NewValue'
   *  SubSystem: '<S293>/OldValue'
   */
  if ((Boost_V_ovr_DataStore())) {
    /* Inport: '<S309>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/new_value'
     */
    cx06_MA_B.s293_Merge = ((uint16_T)(Boost_V_new_DataStore()));
  } else {
    /* Inport: '<S310>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration8'
     */
    cx06_MA_B.s293_Merge = ((uint16_T)(DCDC_Boost_V_DataStore()));
  }

  /* Stateflow: '<S80>/Disable_DCDC' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration14'
   */
  /* Gateway: Outputs/IPT CAN Output/Disable_DCDC */
  /* During: Outputs/IPT CAN Output/Disable_DCDC */
  if (cx06_MA_DWork.s289_is_active_c19_cx06_MA == 0) {
    /* Entry: Outputs/IPT CAN Output/Disable_DCDC */
    cx06_MA_DWork.s289_is_active_c19_cx06_MA = 1U;

    /* Transition: '<S289>:3' */
    /* Entry 'Passthrough': '<S289>:1' */
    cx06_MA_DWork.s289_is_c19_cx06_MA = cx06_MA_IN_Passthrough;
    rtb_cmd = 0U;
  } else {
    switch (cx06_MA_DWork.s289_is_c19_cx06_MA) {
     case cx06_MA_IN_Active:
      /* During 'Active': '<S289>:2' */
      if (cx06_MA_B.s50_SOC < (real_T)((uint8_T)(SOC_Off_DCDC_DataStore()))) {
        /* Transition: '<S289>:5' */
        /* Exit 'Active': '<S289>:2' */
        /* Entry 'Passthrough': '<S289>:1' */
        cx06_MA_DWork.s289_is_c19_cx06_MA = cx06_MA_IN_Passthrough;
        rtb_cmd = 0U;
      } else {
        rtb_cmd = 1U;
      }
      break;

     case cx06_MA_IN_Passthrough:
      /* During 'Passthrough': '<S289>:1' */
      if (cx06_MA_B.s50_SOC > (real_T)((uint8_T)(SOC_On_DCDC_DataStore()))) {
        /* Transition: '<S289>:4' */
        /* Exit 'Passthrough': '<S289>:1' */
        /* Entry 'Active': '<S289>:2' */
        cx06_MA_DWork.s289_is_c19_cx06_MA = cx06_MA_IN_Active;
        rtb_cmd = 1U;
      } else {
        rtb_cmd = 0U;
      }
      break;

     default:
      /* Transition: '<S289>:3' */
      /* Entry 'Passthrough': '<S289>:1' */
      cx06_MA_DWork.s289_is_c19_cx06_MA = cx06_MA_IN_Passthrough;
      rtb_cmd = 0U;
      break;
    }
  }

  /* If: '<S294>/If' incorporates:
   *  ActionPort: '<S311>/Action Port'
   *  ActionPort: '<S312>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S294>/override_enable'
   *  SubSystem: '<S294>/NewValue'
   *  SubSystem: '<S294>/OldValue'
   */
  if ((DCDC_Enable_ovr_DataStore())) {
    /* Inport: '<S311>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/new_value'
     */
    cx06_MA_B.s294_Merge = (DCDC_Enable_new_DataStore());
  } else {
    /* Inport: '<S312>/In1' incorporates:
     *  Constant: '<S80>/Constant1'
     *  Logic: '<S80>/Logical Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration9'
     */
    cx06_MA_B.s294_Merge = ((rtb_cmd != 0) && (((uint8_T)(DCDC_En_DataStore()))
      != 0));
  }

  /* If: '<S295>/If' incorporates:
   *  ActionPort: '<S313>/Action Port'
   *  ActionPort: '<S314>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S295>/override_enable'
   *  SubSystem: '<S295>/NewValue'
   *  SubSystem: '<S295>/OldValue'
   */
  if ((Boost_Mode_ovr_DataStore())) {
    /* Inport: '<S313>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/new_value'
     */
    cx06_MA_B.s295_Merge = ((uint8_T)(Boost_Mode_new_DataStore()));
  } else {
    /* Inport: '<S314>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration10'
     */
    cx06_MA_B.s295_Merge = ((uint8_T)(DCDC_Mode_DataStore()));
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S80>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x628 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        if (cx06_MA_B.s304_Merge < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (cx06_MA_B.s304_Merge > 25.5000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(cx06_MA_B.s304_Merge * (10.0000000000F));
        }

        if (cx06_MA_B.s293_Merge < 200U) {
          tmp1 = (uint8_T)(0U);
        } else if (cx06_MA_B.s293_Merge > 455U) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(cx06_MA_B.s293_Merge - (200U));
        }

        tmp2 = (uint8_T)(cx06_MA_B.s294_Merge != 0);
        if (cx06_MA_B.s295_Merge > 1U) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(cx06_MA_B.s295_Merge != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp3))[0] & 0x00000001) << 1) ;
        CAN_1_Transmit(0, 0x628UL, 3, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Gain: '<S290>/Gain1' */
  cx06_MA_B.s290_Gain1 = 0.005 * rtb_Switch_cf;

  /* If: '<S300>/If' incorporates:
   *  ActionPort: '<S323>/Action Port'
   *  ActionPort: '<S324>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S300>/override_enable'
   *  SubSystem: '<S300>/NewValue'
   *  SubSystem: '<S300>/OldValue'
   */
  if ((Max_DC_Voltage_ovr_DataStore())) {
    /* Inport: '<S323>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S300>/new_value'
     */
    cx06_MA_B.s300_Merge = ((uint16_T)(Max_DC_Voltage_new_DataStore()));
  } else {
    /* Inport: '<S324>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration3'
     */
    cx06_MA_B.s300_Merge = ((uint16_T)(Max_Voltage_DataStore()));
  }

  /* If: '<S301>/If' incorporates:
   *  ActionPort: '<S325>/Action Port'
   *  ActionPort: '<S326>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S301>/override_enable'
   *  SubSystem: '<S301>/NewValue'
   *  SubSystem: '<S301>/OldValue'
   */
  if ((Min_DC_Voltage_ovr_DataStore())) {
    /* Inport: '<S325>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/new_value'
     */
    cx06_MA_B.s301_Merge = ((uint16_T)(Min_DC_Voltage_new_DataStore()));
  } else {
    /* Inport: '<S326>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration2'
     */
    cx06_MA_B.s301_Merge = ((uint16_T)(Min_Voltage_DataStore()));
  }

  /* If: '<S302>/If' incorporates:
   *  ActionPort: '<S327>/Action Port'
   *  ActionPort: '<S328>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S302>/override_enable'
   *  SubSystem: '<S302>/NewValue'
   *  SubSystem: '<S302>/OldValue'
   */
  if ((Max_DC_Motor_I_ovr_DataStore())) {
    /* Inport: '<S327>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/new_value'
     */
    cx06_MA_B.s302_Merge = ((uint16_T)(Max_DC_Motor_I_new_DataStore()));
  } else {
    /* Inport: '<S328>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration4'
     */
    cx06_MA_B.s302_Merge = ((uint16_T)(Max_Current_DataStore()));
  }

  /* If: '<S303>/If' incorporates:
   *  ActionPort: '<S329>/Action Port'
   *  ActionPort: '<S330>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S303>/override_enable'
   *  SubSystem: '<S303>/NewValue'
   *  SubSystem: '<S303>/OldValue'
   */
  if ((Max_DC_Gen_I_ovr_DataStore())) {
    /* Inport: '<S329>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/new_value'
     */
    cx06_MA_B.s303_Merge = ((uint16_T)(Max_DC_Gen_I_new_DataStore()));
  } else {
    /* Inport: '<S330>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration5'
     */
    cx06_MA_B.s303_Merge = ((uint16_T)(Regen_Current_DataStore()));
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S80>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x318 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        uint16_T tmp3;
        if (cx06_MA_B.s300_Merge > 511U) {
          tmp0 = (uint16_T)(511U);
        } else {
          tmp0 = (uint16_T)(cx06_MA_B.s300_Merge);
        }

        if (cx06_MA_B.s301_Merge > 511U) {
          tmp1 = (uint16_T)(511U);
        } else {
          tmp1 = (uint16_T)(cx06_MA_B.s301_Merge);
        }

        if (cx06_MA_B.s302_Merge > 511U) {
          tmp2 = (uint16_T)(511U);
        } else {
          tmp2 = (uint16_T)(cx06_MA_B.s302_Merge);
        }

        if (cx06_MA_B.s303_Merge > 511U) {
          tmp3 = (uint16_T)(511U);
        } else {
          tmp3 = (uint16_T)(cx06_MA_B.s303_Merge);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001)) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
        msg_data[7] = ((((uint8_T *)(&tmp3))[1])) ;
        CAN_1_Transmit(0, 0x318UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S341>/If' incorporates:
   *  ActionPort: '<S359>/Action Port'
   *  ActionPort: '<S360>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S341>/override_enable'
   *  SubSystem: '<S341>/NewValue'
   *  SubSystem: '<S341>/OldValue'
   */
  if ((Reguest_PGN_ovr_DataStore())) {
    /* Inport: '<S359>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S341>/new_value'
     */
    rtb_Merge_fz = (Reguest_PGN_new_DataStore());
  } else {
    /* Inport: '<S360>/In1' incorporates:
     *  Constant: '<S81>/Constant'
     */
    rtb_Merge_fz = 65387.0;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S81>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x462 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint32_T tmp0;
        if (rtb_Merge_fz < 0.0000000000F) {
          tmp0 = (uint32_T)(0UL);
        } else if (rtb_Merge_fz > 16777215.0000000000F) {
          tmp0 = (uint32_T)(16777215UL);
        } else {
          tmp0 = (uint32_T)(rtb_Merge_fz);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[3])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[2])) ;
        msg_data[2] = ((((uint8_T *)(&tmp0))[1])) ;
        CAN_1_Transmit(0, 0x462UL, 3, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S333>/If' incorporates:
   *  ActionPort: '<S343>/Action Port'
   *  ActionPort: '<S344>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S333>/override_enable'
   *  SubSystem: '<S333>/NewValue'
   *  SubSystem: '<S333>/OldValue'
   */
  if ((Contactor_Enable_ovr_DataStore())) {
    /* Inport: '<S343>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S333>/new_value'
     */
    cx06_MA_B.s333_Merge = (Contactor_Enable_new_DataStore());
  } else {
    /* Inport: '<S344>/In1' incorporates:
     *  Constant: '<S81>/Constant7'
     */
    cx06_MA_B.s333_Merge = TRUE;
  }

  /* If: '<S334>/If' incorporates:
   *  ActionPort: '<S345>/Action Port'
   *  ActionPort: '<S346>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S334>/override_enable'
   *  SubSystem: '<S334>/NewValue'
   *  SubSystem: '<S334>/OldValue'
   */
  if ((Contactor_On_ovr_DataStore())) {
    /* Inport: '<S345>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S334>/new_value'
     */
    cx06_MA_B.s334_Merge = (Contactor_On_new_DataStore());
  } else {
    /* Inport: '<S346>/In1' incorporates:
     *  Constant: '<S81>/Constant7'
     */
    cx06_MA_B.s334_Merge = TRUE;
  }

  /* If: '<S335>/If' incorporates:
   *  ActionPort: '<S347>/Action Port'
   *  ActionPort: '<S348>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S335>/override_enable'
   *  SubSystem: '<S335>/NewValue'
   *  SubSystem: '<S335>/OldValue'
   */
  if ((BMS_Standby_ovr_DataStore())) {
    /* Inport: '<S347>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S335>/new_value'
     */
    cx06_MA_B.s335_Merge = (BMS_Standby_new_DataStore());
  } else {
    /* Inport: '<S348>/In1' incorporates:
     *  Constant: '<S81>/Constant6'
     */
    cx06_MA_B.s335_Merge = 0.0;
  }

  /* If: '<S336>/If' incorporates:
   *  ActionPort: '<S349>/Action Port'
   *  ActionPort: '<S350>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S336>/override_enable'
   *  SubSystem: '<S336>/NewValue'
   *  SubSystem: '<S336>/OldValue'
   */
  if ((Charger_Ready_ovr_DataStore())) {
    /* Inport: '<S349>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S336>/new_value'
     */
    cx06_MA_B.s336_Merge = (Charger_Ready_new_DataStore());
  } else {
    /* Inport: '<S350>/In1' incorporates:
     *  Constant: '<S81>/Constant5'
     */
    cx06_MA_B.s336_Merge = 0.0;
  }

  /* If: '<S337>/If' incorporates:
   *  ActionPort: '<S351>/Action Port'
   *  ActionPort: '<S352>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   *  SubSystem: '<S337>/NewValue'
   *  SubSystem: '<S337>/OldValue'
   */
  if ((Emergency_Contactor_Off_ovr_DataStore())) {
    /* Inport: '<S351>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S337>/new_value'
     */
    cx06_MA_B.s337_Merge = (Emergency_Contactor_Off_new_DataStore());
  } else {
    /* Inport: '<S352>/In1' incorporates:
     *  Constant: '<S81>/Constant4'
     */
    cx06_MA_B.s337_Merge = 0.0;
  }

  /* If: '<S338>/If' incorporates:
   *  ActionPort: '<S353>/Action Port'
   *  ActionPort: '<S354>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   *  SubSystem: '<S338>/NewValue'
   *  SubSystem: '<S338>/OldValue'
   */
  if ((Quit_Batt_Locked_ovr_DataStore())) {
    /* Inport: '<S353>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S338>/new_value'
     */
    cx06_MA_B.s338_Merge = (Quit_Batt_Locked_new_DataStore());
  } else {
    /* Inport: '<S354>/In1' incorporates:
     *  Constant: '<S81>/Constant3'
     */
    cx06_MA_B.s338_Merge = 0.0;
  }

  /* If: '<S339>/If' incorporates:
   *  ActionPort: '<S355>/Action Port'
   *  ActionPort: '<S356>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   *  SubSystem: '<S339>/NewValue'
   *  SubSystem: '<S339>/OldValue'
   */
  if ((Ambient_Temp_ovr_DataStore())) {
    /* Inport: '<S355>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S339>/new_value'
     */
    cx06_MA_B.s339_Merge = (Ambient_Temp_new_DataStore());
  } else {
    /* Inport: '<S356>/In1' incorporates:
     *  Constant: '<S81>/Constant2'
     */
    cx06_MA_B.s339_Merge = 20.0;
  }

  /* If: '<S340>/If' incorporates:
   *  ActionPort: '<S357>/Action Port'
   *  ActionPort: '<S358>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S340>/override_enable'
   *  SubSystem: '<S340>/NewValue'
   *  SubSystem: '<S340>/OldValue'
   */
  if ((Air_Pres_ovr_DataStore())) {
    /* Inport: '<S357>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S340>/new_value'
     */
    cx06_MA_B.s340_Merge = (Air_Pres_new_DataStore());
  } else {
    /* Inport: '<S358>/In1' incorporates:
     *  Constant: '<S81>/Constant1'
     */
    cx06_MA_B.s340_Merge = 0.0;
  }

  /* If: '<S342>/If' incorporates:
   *  ActionPort: '<S361>/Action Port'
   *  ActionPort: '<S362>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S342>/override_enable'
   *  SubSystem: '<S342>/NewValue'
   *  SubSystem: '<S342>/OldValue'
   */
  if ((ISO_On_ovr_DataStore())) {
    /* Inport: '<S361>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S342>/new_value'
     */
    cx06_MA_B.s342_Merge = ((uint8_T)(ISO_On_new_DataStore()));
  } else {
    /* Inport: '<S362>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration'
     */
    cx06_MA_B.s342_Merge = ((uint8_T)(ISO_Enable_DataStore()));
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S81>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x460 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        tmp0 = (uint8_T)(cx06_MA_B.s333_Merge);
        tmp1 = (uint8_T)(cx06_MA_B.s334_Merge);
        if (cx06_MA_B.s335_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (cx06_MA_B.s335_Merge > 3.0000000000F) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(cx06_MA_B.s335_Merge);
        }

        if (cx06_MA_B.s336_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (cx06_MA_B.s336_Merge > 3.0000000000F) {
          tmp3 = (uint8_T)(3U);
        } else {
          tmp3 = (uint8_T)(cx06_MA_B.s336_Merge);
        }

        if (cx06_MA_B.s337_Merge < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (cx06_MA_B.s337_Merge > 3.0000000000F) {
          tmp4 = (uint8_T)(3U);
        } else {
          tmp4 = (uint8_T)(cx06_MA_B.s337_Merge);
        }

        if (cx06_MA_B.s338_Merge < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (cx06_MA_B.s338_Merge > 3.0000000000F) {
          tmp5 = (uint8_T)(3U);
        } else {
          tmp5 = (uint8_T)(cx06_MA_B.s338_Merge);
        }

        if (cx06_MA_B.s339_Merge < -40.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (cx06_MA_B.s339_Merge > 215.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(cx06_MA_B.s339_Merge - (-40.0000000000F));
        }

        if (cx06_MA_B.s340_Merge < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (cx06_MA_B.s340_Merge > 127.5000000000F) {
          tmp7 = (uint8_T)(255U);
        } else {
          tmp7 = (uint8_T)(cx06_MA_B.s340_Merge * (2.0000000000F));
        }

        if (cx06_MA_B.s342_Merge > 3U) {
          tmp8 = (uint8_T)(3U);
        } else {
          tmp8 = (uint8_T)(cx06_MA_B.s342_Merge);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp3))[0] & 0x00000003) << 2) ;
        msg_data[2] = ((((uint8_T *)(&tmp4))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp5))[0] & 0x00000003) << 2) | ((((uint8_T *)(&tmp8))[0] &
          0x00000003) << 6) ;
        msg_data[3] = 0 ;
        msg_data[4] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp7))[0])) ;
        CAN_1_Transmit(0, 0x460UL, 6, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout' */

  /* S-Function Block: INJ1D */
  {
    if (((init_resource_INJ1D_DataStore()) < 0) && (((int16_T) RES_INJ1D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_DataTypeConversion_j) ? RES_ON :
        RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ1D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ1D_DataStore()) = ((int16_T) RES_INJ1D);
      } else {
        (init_resource_INJ1D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ1D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ1D = 0;
        else
          dout_create_INJ1D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ1D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ1D_DataStore())),
                          (rtb_DataTypeConversion_j) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout1' */

  /* S-Function Block: INJ2D */
  {
    if (((init_resource_INJ2D_DataStore()) < 0) && (((int16_T) RES_INJ2D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_LogicalOperator3_h) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ2D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ2D_DataStore()) = ((int16_T) RES_INJ2D);
      } else {
        (init_resource_INJ2D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ2D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ2D = 0;
        else
          dout_create_INJ2D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ2D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ2D_DataStore())),
                          (rtb_LogicalOperator3_h) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout2' */

  /* S-Function Block: AC_Clutch */
  {
    if (((init_resource_AC_Clutch_DataStore()) < 0) && ((AC_Clutch_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (cx06_MA_B.s94_Merge) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((AC_Clutch_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_AC_Clutch_DataStore()) = (AC_Clutch_DataStore());
      } else {
        (init_resource_AC_Clutch_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_AC_Clutch;
        if (SUCCESS(sErrorResult))
          dout_create_AC_Clutch = 0;
        else
          dout_create_AC_Clutch = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_AC_Clutch_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_AC_Clutch_DataStore
                            ())), (cx06_MA_B.s94_Merge) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout3' */

  /* S-Function Block: AC_Fan */
  {
    if (((init_resource_AC_Fan_DataStore()) < 0) && ((AC_Fan_DataStore()) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (cx06_MA_B.s95_Merge) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((AC_Fan_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_AC_Fan_DataStore()) = (AC_Fan_DataStore());
      } else {
        (init_resource_AC_Fan_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_AC_Fan;
        if (SUCCESS(sErrorResult))
          dout_create_AC_Fan = 0;
        else
          dout_create_AC_Fan = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_AC_Fan_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_AC_Fan_DataStore())),
                          (cx06_MA_B.s95_Merge) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout4' */

  /* S-Function Block: Urea_Power */
  {
    if (((init_resource_Urea_Power_DataStore()) < 0) && ((Urea_Power_DataStore())
         >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_ob) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) ((Urea_Power_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Urea_Power_DataStore()) = (Urea_Power_DataStore());
      } else {
        (init_resource_Urea_Power_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Urea_Power;
        if (SUCCESS(sErrorResult))
          dout_create_Urea_Power = 0;
        else
          dout_create_Urea_Power = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Urea_Power_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Urea_Power_DataStore())),
                          (rtb_Merge_ob) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout8' */

  /* S-Function Block: INJ8D */
  {
    if (((init_resource_INJ8D_DataStore()) < 0) && (((int16_T) RES_INJ8D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_DataTypeConversion1_o) ? RES_ON :
        RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ8D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ8D_DataStore()) = ((int16_T) RES_INJ8D);
      } else {
        (init_resource_INJ8D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ8D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ8D = 0;
        else
          dout_create_INJ8D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ8D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ8D_DataStore())),
                          (rtb_DataTypeConversion1_o) ? RES_ON : RES_OFF);
    }
  }

  /* Update for UnitDelay: '<S75>/Unit Delay' */
  cx06_MA_DWork.s75_UnitDelay_DSTATE = cx06_MA_B.s75_Product1;

  /* Update for UnitDelay: '<S103>/Unit Delay' */
  cx06_MA_DWork.s103_UnitDelay_DSTATE = cx06_MA_B.s103_Saturation;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  cx06_MA_DWork.s88_UnitDelay_DSTATE = cx06_MA_B.s102_timer;

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout7' */

  /* S-Function Block: INJ6D */
  {
    if (((init_resource_INJ6D_DataStore()) < 0) && (((int16_T) RES_INJ6D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_j4) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ6D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ6D_DataStore()) = ((int16_T) RES_INJ6D);
      } else {
        (init_resource_INJ6D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ6D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ6D = 0;
        else
          dout_create_INJ6D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ6D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ6D_DataStore())),
                          (rtb_Merge_j4) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S75>/motohawk_pwm1' */

  /* S-Function Block: EST6_PWMOutput */
  EST6_PWMOutput_PWMOutput_Set(rtb_Merge_e, 2048, 0, rtb_Compare_ng);

  /* Update for UnitDelay: '<S91>/Unit Delay' */
  cx06_MA_DWork.s91_UnitDelay_DSTATE = rtb_Saturation_bp;

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout5' */

  /* S-Function Block: INJ3D */
  {
    if (((init_resource_INJ3D_DataStore()) < 0) && (((int16_T) RES_INJ3D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_m) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ3D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ3D_DataStore()) = ((int16_T) RES_INJ3D);
      } else {
        (init_resource_INJ3D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ3D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ3D = 0;
        else
          dout_create_INJ3D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ3D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ3D_DataStore())),
                          (rtb_Merge_m) ? RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S75>/motohawk_pwm' */

  /* S-Function Block: IPT_EPO_PWMOutput */
  IPT_EPO_PWMOutput_PWMOutput_Set(10000U, 2048, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S75>/motohawk_dout6' */

  /* S-Function Block: INJ10D */
  {
    if (((init_resource_INJ10D_DataStore()) < 0) && (((int16_T) RES_INJ10D) >= 0))
    {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_Merge_h) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource) (((int16_T) RES_INJ10D)),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_INJ10D_DataStore()) = ((int16_T) RES_INJ10D);
      } else {
        (init_resource_INJ10D_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_INJ10D;
        if (SUCCESS(sErrorResult))
          dout_create_INJ10D = 0;
        else
          dout_create_INJ10D = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_INJ10D_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_INJ10D_DataStore())),
                          ((rtb_Merge_h) < 0) ? RES_ON_REVERSE : (((rtb_Merge_h)
        > 0) ? RES_ON : RES_OFF));
    }
  }

  /* Update for UnitDelay: '<S210>/Unit Delay1' */
  cx06_MA_DWork.s210_UnitDelay1_DSTATE = cx06_MA_B.s210_Switch;

  /* Update for UnitDelay: '<S168>/Unit Delay1' */
  cx06_MA_DWork.s168_UnitDelay1_DSTATE = cx06_MA_B.s168_Saturation;

  /* Update for UnitDelay: '<S168>/Unit Delay' */
  cx06_MA_DWork.s168_UnitDelay_DSTATE = rtb_LogicalOperator2_k;

  /* Update for UnitDelay: '<S170>/Unit Delay' */
  cx06_MA_DWork.s170_UnitDelay_DSTATE = rtb_Product_fb;

  /* Update for UnitDelay: '<S290>/Unit Delay' */
  cx06_MA_DWork.s290_UnitDelay_DSTATE = rtb_Switch_cf;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
