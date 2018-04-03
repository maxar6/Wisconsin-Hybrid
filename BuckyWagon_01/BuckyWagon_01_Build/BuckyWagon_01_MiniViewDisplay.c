/*
 * File: BuckyWagon_01_MiniViewDisplay.c
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01_MiniViewDisplay.h"

/* Include model header file for global data */
#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

/* Named constants for Stateflow: '<S11>/Chart' */
#define BuckyWagon_01_BLACK            (1U)
#define BuckyWagon_01_FONT4x6          (0U)
#define BuckyWagon_01_FONT6x8          (1U)
#define BuckyWagon_01_FONT8x15         (3U)
#define BuckyWagon_01_IN_Dual          (1U)
#define BuckyWagon_01_IN_Dual_Init     (1U)
#define BuckyWagon_01_IN_List          (2U)
#define BuckyWagon_01_IN_List_Idle     (2U)
#define BuckyWagon_01_IN_List_Idle_h   (1U)
#define BuckyWagon_01_IN_List_Init     (2U)
#define BuckyWagon_01_IN_List_Wait     (3U)
#define BuckyWagon_01_IN_List_Wait2    (4U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_h (0U)
#define BuckyWagon_01_IN_PowerupDelay  (3U)
#define BuckyWagon_01_IN_Quad          (4U)
#define BuckyWagon_01_IN_Quad_Idle     (1U)
#define BuckyWagon_01_IN_Quad_Init     (2U)
#define BuckyWagon_01_IN_Quad_Names    (3U)
#define BuckyWagon_01_IN_Select_Init   (1U)
#define BuckyWagon_01_IN_Setup         (5U)
#define BuckyWagon_01_IN_Setup_Init    (1U)
#define BuckyWagon_01_IN_Single        (6U)
#define BuckyWagon_01_IN_Single_Init   (2U)
#define BuckyWagon_01_IN_dualNames     (3U)
#define BuckyWagon_01_IN_select_Idle   (2U)
#define BuckyWagon_01_IN_select_Wait   (3U)
#define BuckyWagon_01_IN_select_var    (2U)
#define BuckyWagon_01_IN_setup_Idle    (3U)
#define BuckyWagon_01_IN_setup_Wait    (4U)
#define BuckyWagon_01_IN_singleNames   (3U)
#define BuckyWagon_01_IN_wait          (5U)
#define BuckyWagon_01_IN_wait1         (7U)
#define BuckyWagon_01_IN_wait2         (8U)
#define BuckyWagon_01_IN_wait3         (9U)
#define BuckyWagon_01_IN_wait4         (10U)
#define BuckyWagon_01_SETUP_TIME       (15U)
#define BuckyWagon_01_UPDATE_TIME      (2U)
#define BuckyWagon_01_WHITE            (0U)
#define BuckyWagon_01_event_downPressed (13)
#define BuckyWagon_01_event_downReleased (14)
#define BuckyWagon_01_event_menuPressed (11)
#define BuckyWagon_01_event_menuReleased (12)
#define BuckyWagon_01_event_tick       (0)
#define BuckyWagon_01_event_upPressed  (9)
#define BuckyWagon_01_event_upReleased (10)

/* Named constants for Stateflow: '<S213>/Chart' */
#define BuckyWagon_01_IN_CheckNextFault (1U)
#define BuckyWagon_01_IN_Fault         (1U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_k (0U)
#define BuckyWagon_01_IN_NoFault       (2U)
#define BuckyWagon_01_IN_lastWait      (2U)
#define BuckyWagon_01_IN_scrollText    (3U)
#define BuckyWagon_01_IN_scrollTextFirst (4U)

/* Forward declaration for local functions */
static void BuckyWagon_01_enter_internal_Dual(const uint8_T rtu_dualIndex[2],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_enter_internal_List(uint8_T rtu_listIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *
  localDW);
static void BuckyWagon_01_enter_internal_select_var(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_chartstep_c2_BuckyWagon_01(uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);

/* Start for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S198>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S198>/Clear Screen'
   */
}

/* Output and update for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen(void)
{
  /* S-Function (fcncallgen): '<S198>/Function-Call Generator' incorporates:
   *  SubSystem: '<S198>/Clear Screen'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S219>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x426 */
    {
      extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
        length, const uint8_T data[]);
      uint8_T msg_data[8];
      CAN_1_Transmit(0, 0x426UL, 0, msg_data);
    }
  }
}

/* Start for function-call system: '<S11>/Draw Rect' */
void BuckyWagon_01_DrawRect_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S202>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S202>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Rect' */
void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y0,
  uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S202>/Function-Call Generator' incorporates:
   *  SubSystem: '<S202>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S223>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x427 */
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
      tmp0 = (uint8_T)(rtu_x0);
      tmp1 = (uint8_T)(rtu_x1);
      tmp2 = (uint8_T)(rtu_y0);
      tmp3 = (uint8_T)(rtu_y1);
      if (rtu_linecolor > 1U) {
        tmp4 = (uint8_T)(1U);
      } else {
        tmp4 = (uint8_T)(rtu_linecolor != 0);
      }

      if (rtu_fillcolor > 1U) {
        tmp5 = (uint8_T)(1U);
      } else {
        tmp5 = (uint8_T)(rtu_fillcolor != 0);
      }

      msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
      msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
      msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
      msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
      msg_data[4] = 0x01 ;
      msg_data[5] = 0xe3 ;
      msg_data[6] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) ;
      msg_data[7] = ((((uint8_T *)(&tmp5))[0] & 0x00000001)) ;
      CAN_1_Transmit(0, 0x427UL, 8, msg_data);
    }
  }
}

/* Start for function-call system: '<S11>/Send String_efficient' */
void BuckyWagon_01_SendString_efficient_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S216>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S216>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S230>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S230>/Send Substring (page 0)'
   */

  /* Start for S-Function (fcncallgen): '<S233>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S230>/Function-Call Subsystem'
   *  Start for SubSystem: '<S233>/Subsystem'
   */

  /* Start for enable SubSystem: '<S231>/Enabled Subsystem' */

  /* Start for S-Function (fcncallgen): '<S237>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S230>/Send Substring (page 1)'
   */

  /* Start for S-Function (fcncallgen): '<S234>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S230>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S234>/Subsystem'
   */

  /* Start for enable SubSystem: '<S232>/Enabled Subsystem' */

  /* Start for S-Function (fcncallgen): '<S239>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S230>/Send Substring (page 2)'
   */

  /* Start for S-Function (fcncallgen): '<S235>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S235>/Subsystem'
   */

  /* end of Start for SubSystem: '<S232>/Enabled Subsystem' */

  /* end of Start for SubSystem: '<S231>/Enabled Subsystem' */
}

/* Output and update for function-call system: '<S11>/Send String_efficient' */
void BuckyWagon_01_SendString_efficient(uint8_T rtu_string, uint8_T rtu_b0,
  uint8_T rtu_b1, uint8_T rtu_b2, uint8_T rtu_b3, uint8_T rtu_b4, uint8_T rtu_b5,
  uint8_T rtu_b6, const uint8_T rtu_string_c[7], uint8_T rtu_b7, uint8_T rtu_b8,
  uint8_T rtu_b9, uint8_T rtu_b10, uint8_T rtu_b10_i, uint8_T rtu_b11, uint8_T
  rtu_b12, const uint8_T rtu_string_o[7], uint8_T rtu_b14, uint8_T rtu_b15,
  uint8_T rtu_b16)
{
  int8_T rtb_Compare_lf[7];
  int32_T i;

  /* S-Function (fcncallgen): '<S216>/Function-Call Generator' incorporates:
   *  SubSystem: '<S216>/Subsystem'
   */

  /* S-Function (fcncallgen): '<S230>/Function-Call Generator' incorporates:
   *  SubSystem: '<S230>/Send Substring (page 0)'
   */

  /* S-Function (fcncallgen): '<S233>/Function-Call Generator' incorporates:
   *  SubSystem: '<S230>/Function-Call Subsystem'
   *  SubSystem: '<S233>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S240>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x424 */
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
      if (rtu_string > 15U) {
        tmp0 = (uint8_T)(15U);
      } else {
        tmp0 = (uint8_T)(rtu_string);
      }

      tmp1 = (uint8_T)(rtu_b0);
      tmp2 = (uint8_T)(rtu_b1);
      tmp3 = (uint8_T)(rtu_b2);
      tmp4 = (uint8_T)(rtu_b3);
      tmp5 = (uint8_T)(rtu_b4);
      tmp6 = (uint8_T)(rtu_b5);
      tmp7 = (uint8_T)(rtu_b6);
      msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) ;
      msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
      msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
      msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
      msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
      msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
      msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
      msg_data[7] = ((((uint8_T *)(&tmp7))[0])) ;
      msg_data[0] &= ~0xf0;
      msg_data[0] |= 0x00;
      CAN_1_Transmit(0, 0x424UL, 8, msg_data);
    }
  }

  /* RelationalOperator: '<S236>/Compare' incorporates:
   *  Constant: '<S236>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_lf[i] = (rtu_string_c[i] != 0);
  }

  /* Outputs for enable SubSystem: '<S231>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S237>/Enable'
   *  Logic: '<S231>/Logical Operator'
   */
  if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf[2]
       != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
      (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
    /* S-Function (fcncallgen): '<S237>/Function-Call Generator' incorporates:
     *  SubSystem: '<S230>/Send Substring (page 1)'
     */

    /* S-Function (fcncallgen): '<S234>/Function-Call Generator' incorporates:
     *  SubSystem: '<S230>/Function-Call Subsystem1'
     *  SubSystem: '<S234>/Subsystem'
     */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S241>/Send CAN Messages' */
    /* Send CAN Message(s) */
    {
      /* Transmit Messages Asynchronously (every time block executes) */

      /* 0x424 */
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
        if (rtu_string > 15U) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtu_string);
        }

        tmp1 = (uint8_T)(rtu_b7);
        tmp2 = (uint8_T)(rtu_b8);
        tmp3 = (uint8_T)(rtu_b9);
        tmp4 = (uint8_T)(rtu_b10);
        tmp5 = (uint8_T)(rtu_b10_i);
        tmp6 = (uint8_T)(rtu_b11);
        tmp7 = (uint8_T)(rtu_b12);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp7))[0])) ;
        msg_data[0] &= ~0xf0;
        msg_data[0] |= 0x10;
        CAN_1_Transmit(0, 0x424UL, 8, msg_data);
      }
    }

    /* RelationalOperator: '<S238>/Compare' incorporates:
     *  Constant: '<S238>/Constant'
     */
    for (i = 0; i < 7; i++) {
      rtb_Compare_lf[i] = (rtu_string_o[i] != 0);
    }

    /* Outputs for enable SubSystem: '<S232>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S239>/Enable'
     *  Logic: '<S232>/Logical Operator'
     */
    if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf
         [2] != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
        (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
      /* S-Function (fcncallgen): '<S239>/Function-Call Generator' incorporates:
       *  SubSystem: '<S230>/Send Substring (page 2)'
       */

      /* S-Function (fcncallgen): '<S235>/Function-Call Generator' incorporates:
       *  SubSystem: '<S235>/Subsystem'
       */

      /* S-Function (motohawk_sfun_send_canmsgs): '<S242>/Send CAN Messages' */
      /* Send CAN Message(s) */
      {
        /* Transmit Messages Asynchronously (every time block executes) */

        /* 0x424 */
        {
          extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id,
            uint8_T length, const uint8_T data[]);
          uint8_T msg_data[8];
          uint8_T tmp0;
          uint8_T tmp1;
          uint8_T tmp2;
          uint8_T tmp3;
          uint8_T tmp4;
          if (rtu_string > 15U) {
            tmp0 = (uint8_T)(15U);
          } else {
            tmp0 = (uint8_T)(rtu_string);
          }

          tmp1 = (uint8_T)(rtu_b14);
          tmp2 = (uint8_T)(rtu_b15);
          tmp3 = (uint8_T)(rtu_b16);
          tmp4 = (uint8_T)(0U);
          msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) ;
          msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
          msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
          msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
          msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
          msg_data[0] &= ~0xf0;
          msg_data[0] |= 0x20;
          CAN_1_Transmit(0, 0x424UL, 5, msg_data);
        }
      }
    }

    /* end of Outputs for SubSystem: '<S232>/Enabled Subsystem' */
  }

  /* end of Outputs for SubSystem: '<S231>/Enabled Subsystem' */
}

/* Start for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S203>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S203>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T rtu_y,
  uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter, uint8_T
  rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor)
{
  /* S-Function (fcncallgen): '<S203>/Function-Call Generator' incorporates:
   *  SubSystem: '<S203>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S224>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x425 */
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
      if (rtu_string > 15U) {
        tmp0 = (uint8_T)(15U);
      } else {
        tmp0 = (uint8_T)(rtu_string);
      }

      tmp1 = (uint8_T)(rtu_x);
      tmp2 = (uint8_T)(rtu_y);
      if (rtu_font > 3U) {
        tmp3 = (uint8_T)(3U);
      } else {
        tmp3 = (uint8_T)(rtu_font);
      }

      if (rtu_horizcenter > 1U) {
        tmp4 = (uint8_T)(1U);
      } else {
        tmp4 = (uint8_T)(rtu_horizcenter != 0);
      }

      if (rtu_vertcenter > 1U) {
        tmp5 = (uint8_T)(1U);
      } else {
        tmp5 = (uint8_T)(rtu_vertcenter != 0);
      }

      if (rtu_stringwrap > 1U) {
        tmp6 = (uint8_T)(1U);
      } else {
        tmp6 = (uint8_T)(rtu_stringwrap != 0);
      }

      if (rtu_fontlinecolor > 1U) {
        tmp7 = (uint8_T)(1U);
      } else {
        tmp7 = (uint8_T)(rtu_fontlinecolor != 0);
      }

      if (rtu_fontfillcolor > 1U) {
        tmp8 = (uint8_T)(1U);
      } else {
        tmp8 = (uint8_T)(rtu_fontfillcolor != 0);
      }

      msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) ;
      msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
      msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
      msg_data[3] = ((((uint8_T *)(&tmp3))[0] & 0x00000003)) ;
      msg_data[4] = 0x00 ;
      msg_data[5] = ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 2) | ((((uint8_T *)
        (&tmp5))[0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp6))[0] & 0x00000001)
        << 4) ;
      msg_data[6] = ((((uint8_T *)(&tmp7))[0] & 0x00000001)) ;
      msg_data[7] = ((((uint8_T *)(&tmp8))[0] & 0x00000001)) ;
      msg_data[5] &= ~0xe1;
      msg_data[5] |= 0x01;
      CAN_1_Transmit(0, 0x425UL, 8, msg_data);
    }
  }
}

/* Start for function-call system: '<S11>/Draw Vline' */
void BuckyWagon_01_DrawVline_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S204>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S204>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Vline' */
void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T rtu_y1,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S204>/Function-Call Generator' incorporates:
   *  SubSystem: '<S204>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S225>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x429 */
    {
      extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
        length, const uint8_T data[]);
      uint8_T msg_data[8];
      uint8_T tmp0;
      uint8_T tmp1;
      uint8_T tmp2;
      uint8_T tmp3;
      uint8_T tmp4;
      tmp0 = (uint8_T)(rtu_x);
      tmp1 = (uint8_T)(rtu_y0);
      tmp2 = (uint8_T)(rtu_y1);
      if (rtu_linecolor > 1U) {
        tmp3 = (uint8_T)(1U);
      } else {
        tmp3 = (uint8_T)(rtu_linecolor != 0);
      }

      if (rtu_fillcolor > 1U) {
        tmp4 = (uint8_T)(1U);
      } else {
        tmp4 = (uint8_T)(rtu_fillcolor != 0);
      }

      msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
      msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
      msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
      msg_data[3] = 0x01 ;
      msg_data[4] = 0xa3 ;
      msg_data[5] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
      msg_data[6] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) ;
      CAN_1_Transmit(0, 0x429UL, 7, msg_data);
    }
  }
}

/* Start for function-call system: '<S11>/Draw HLine' */
void BuckyWagon_01_DrawHLine_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S201>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S201>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw HLine' */
void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S201>/Function-Call Generator' incorporates:
   *  SubSystem: '<S201>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S222>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    /* Transmit Messages Asynchronously (every time block executes) */

    /* 0x428 */
    {
      extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
        length, const uint8_T data[]);
      uint8_T msg_data[8];
      uint8_T tmp0;
      uint8_T tmp1;
      uint8_T tmp2;
      uint8_T tmp3;
      uint8_T tmp4;
      tmp0 = (uint8_T)(rtu_x0);
      tmp1 = (uint8_T)(rtu_x1);
      tmp2 = (uint8_T)(rtu_y);
      if (rtu_linecolor > 1U) {
        tmp3 = (uint8_T)(1U);
      } else {
        tmp3 = (uint8_T)(rtu_linecolor != 0);
      }

      if (rtu_fillcolor > 1U) {
        tmp4 = (uint8_T)(1U);
      } else {
        tmp4 = (uint8_T)(rtu_fillcolor != 0);
      }

      msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
      msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
      msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
      msg_data[3] = 0x01 ;
      msg_data[4] = 0xd3 ;
      msg_data[5] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
      msg_data[6] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) ;
      CAN_1_Transmit(0, 0x428UL, 7, msg_data);
    }
  }
}

/* Output and update for function-call system: '<S11>/Function-Call Subsystem' */
void BuckyWagon_01_FunctionCallSubsystem(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S208>/motohawk_data_write' */
  /* Write to Data Storage as scalar: listIndex */
  {
    listIndex_DataStore() = rtu_Value;
  }
}

/* Output and update for function-call system: '<S11>/Function-Call Subsystem1' */
void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S209>/motohawk_data_write' */
  /* Write to Data Storage as scalar: screen */
  {
    screen_DataStore() = rtu_Value;
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Dual(const uint8_T rtu_dualIndex[2],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S197>:181' */
  localB->s197_stringNum = 0U;
  while (localB->s197_stringNum < 2) {
    /* Transition: '<S197>:182' */
    localDW->s197_oldData[(int32_T)localB->s197_stringNum] = (int16_T)(rtu_data
      [(int32_T)rtu_dualIndex[(int32_T)localB->s197_stringNum]] + 1);
    localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
  }

  /* Transition: '<S197>:183' */
  /* Entry 'Dual_Init': '<S197>:19' */
  localDW->s197_is_Dual = BuckyWagon_01_IN_Dual_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw string */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);

  /* draw lines */
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 64U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 31U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* During 'Dual': '<S197>:20' */
  if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S197>:84' */
    /* Exit 'Dual_Init': '<S197>:19' */
    localDW->s197_is_Dual = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

    /* Exit 'List_Idle': '<S197>:1' */
    /* Exit 'dualNames': '<S197>:18' */
    /* Exit 'Dual': '<S197>:20' */
    /* Entry 'wait2': '<S197>:29' */
    localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait2;
  } else {
    switch (localDW->s197_is_Dual) {
     case BuckyWagon_01_IN_Dual_Init:
      /* During 'Dual_Init': '<S197>:19' */
      /* Transition: '<S197>:184' */
      /* Exit 'Dual_Init': '<S197>:19' */
      /* Entry 'dualNames': '<S197>:18' */
      localDW->s197_is_Dual = BuckyWagon_01_IN_dualNames;
      localB->s197_hCenter = 1U;
      localB->s197_font = BuckyWagon_01_FONT6x8;
      localB->s197_x0 = 30U;
      localB->s197_stringNum = 0U;
      memcpy(&localB->s197_string[0], &rtu_names[10 * rtu_dualIndex[0]], 10);

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      localB->s197_y0 = 20U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      memcpy(&localB->s197_string[0], &rtu_names[10 * rtu_dualIndex[1]], 10);

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      localB->s197_y0 = 34U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      break;

     case BuckyWagon_01_IN_List_Idle:
      /* During 'List_Idle': '<S197>:1' */
      if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) &&
          (localDW->s197_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S197>:186' */
        localB->s197_stringNum = 0U;
        localB->s197_font = BuckyWagon_01_FONT6x8;
        localB->s197_fillColor = BuckyWagon_01_WHITE;
        localB->s197_hCenter = 0U;
        if (localDW->s197_oldData[0] != rtu_data[(int32_T)rtu_dualIndex[0]]) {
          /* Transition: '<S197>:187' */
          sprintf(charPtr(&localB->s197_string[0]), "%d", rtu_data[(int32_T)
                  rtu_dualIndex[0]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 0U;
          localB->s197_x1 = 60U;
          localB->s197_y0 = 10U;
          localB->s197_y1 = 18U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;
          localB->s197_x0 = 30U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[0] = rtu_data[(int32_T)rtu_dualIndex[0]];
        } else {
          /* Transition: '<S197>:188' */
        }

        if (localDW->s197_oldData[1] != rtu_data[(int32_T)rtu_dualIndex[1]]) {
          /* Transition: '<S197>:190' */
          sprintf(charPtr(&localB->s197_string[0]), "%d", rtu_data[(int32_T)
                  rtu_dualIndex[1]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 0U;
          localB->s197_x1 = 60U;
          localB->s197_y0 = 44U;
          localB->s197_y1 = 53U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;
          localB->s197_x0 = 30U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[1] = rtu_data[(int32_T)rtu_dualIndex[1]];
        } else {
          /* Transition: '<S197>:73' */
        }

        /* Transition: '<S197>:67' */
        localB->s197_y0 = 55U;
        localB->s197_y1 = 63U;
        localB->s197_x0 = 0U;
        localB->s197_x1 = 63U;
        memcpy(&localB->s197_string[0], &rtu_statusTxt[0], 9);
        localB->s197_string[9] = 0U;

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S197>:130' */
          localB->s197_fillColor = BuckyWagon_01_BLACK;
          localB->s197_lineColor = BuckyWagon_01_BLACK;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S197>:74' */
          localB->s197_lineColor = BuckyWagon_01_WHITE;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S197>:76' */
        localB->s197_y0 = 56U;
        localB->s197_font = BuckyWagon_01_FONT4x6;
        localB->s197_x0 = 17U;

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);

        /* Transition: '<S197>:72' */
        localDW->s197_timer = 0U;

        /* Exit 'List_Idle': '<S197>:1' */
        /* Entry 'List_Idle': '<S197>:1' */
        localDW->s197_is_Dual = BuckyWagon_01_IN_List_Idle;
      } else {
        if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) {
          /* Transition: '<S197>:189' */
          /* Exit 'List_Idle': '<S197>:1' */
          localDW->s197_timer = (uint16_T)(localDW->s197_timer + 1);

          /* Entry 'List_Idle': '<S197>:1' */
          localDW->s197_is_Dual = BuckyWagon_01_IN_List_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_dualNames:
      /* During 'dualNames': '<S197>:18' */
      /* Transition: '<S197>:185' */
      localDW->s197_timer = BuckyWagon_01_UPDATE_TIME;

      /* Exit 'dualNames': '<S197>:18' */
      /* Entry 'List_Idle': '<S197>:1' */
      localDW->s197_is_Dual = BuckyWagon_01_IN_List_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_List(uint8_T rtu_listIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S197>:114' */
  localB->s197_stringNum = 0U;
  while (localB->s197_stringNum < 6) {
    /* Transition: '<S197>:112' */
    localDW->s197_oldData[(int32_T)localB->s197_stringNum] = (int16_T)
      (rtu_data[localB->s197_stringNum + rtu_listIndex] + 1);
    localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
  }

  /* Transition: '<S197>:109' */
  /* Entry 'List_Init': '<S197>:8' */
  localDW->s197_is_List = BuckyWagon_01_IN_List_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw lines and name */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 63U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_listIndexO = rtu_listIndex;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  boolean_T sf_guard;

  /* During 'List': '<S197>:3' */
  if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S197>:55' */
    /* Exit 'List_Idle': '<S197>:5' */
    localDW->s197_is_List = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

    /* Exit 'List_Init': '<S197>:8' */
    /* Exit 'List_Wait': '<S197>:2' */
    /* Exit 'List_Wait2': '<S197>:4' */
    /* Exit 'List': '<S197>:3' */
    /* Entry 'wait4': '<S197>:27' */
    localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait4;
  } else {
    sf_guard = FALSE;
    switch (localDW->s197_is_List) {
     case BuckyWagon_01_IN_List_Idle_h:
      /* During 'List_Idle': '<S197>:5' */
      if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) &&
          (localDW->s197_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S197>:102' */
        localB->s197_stringNum = 0U;
        localB->s197_fillColor = BuckyWagon_01_WHITE;
        localB->s197_hCenter = 0U;
        while (localB->s197_stringNum < 6) {
          /* Transition: '<S197>:103' */
          if (rtu_data[localB->s197_stringNum + rtu_listIndex] ==
              localDW->s197_oldData[(int32_T)localB->s197_stringNum]) {
            /* Transition: '<S197>:105' */
            localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
          } else {
            /* Transition: '<S197>:101' */
            sprintf(charPtr(&localB->s197_string[0]), "%-4d", rtu_data
                    [localB->s197_stringNum + rtu_listIndex]);
            localB->s197_string[4] = 0U;

            /* Event: '<S197>:303' */
            BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
              localB->s197_string[0], localB->s197_string[1],
              localB->s197_string[2], localB->s197_string[3],
              localB->s197_string[4], localB->s197_string[5],
              localB->s197_string[6], localB->s197_string, localB->s197_string[7],
              localB->s197_string[8], localB->s197_string[9],
              localB->s197_string[10], localB->s197_string[11],
              localB->s197_string[12], localB->s197_string[13],
              &localB->s197_string[7], localB->s197_string[14],
              localB->s197_string[15], localB->s197_string[16]);
            localB->s197_x0 = 42U;
            localB->s197_x1 = 57U;
            localB->s197_y0 = (uint8_T)(localB->s197_stringNum * 7 + 12);
            localB->s197_y1 = (uint8_T)(localB->s197_y0 + 6);
            localB->s197_lineColor = 0U;

            /* Event: '<S197>:301' */
            BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
              localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
              localB->s197_fillColor);
            localB->s197_lineColor = 1U;

            /* Event: '<S197>:304' */
            BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
              localB->s197_y0, localB->s197_font, localB->s197_hCenter,
              localB->s197_vCenter, rtu_21, localB->s197_lineColor,
              localB->s197_fillColor);
            localDW->s197_oldData[(int32_T)localB->s197_stringNum] =
              rtu_data[localB->s197_stringNum + rtu_listIndex];
            localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
          }
        }

        /* Transition: '<S197>:79' */
        localB->s197_y0 = 55U;
        localB->s197_y1 = 63U;
        localB->s197_x0 = 0U;
        localB->s197_x1 = 63U;
        memcpy(&localB->s197_string[0], &rtu_statusTxt[0], 9);
        localB->s197_string[9] = 0U;

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S197>:78' */
          localB->s197_fillColor = BuckyWagon_01_BLACK;
          localB->s197_lineColor = BuckyWagon_01_BLACK;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S197>:80' */
          localB->s197_lineColor = BuckyWagon_01_WHITE;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S197>:100' */
        localB->s197_y0 = 56U;
        localB->s197_font = BuckyWagon_01_FONT4x6;
        localB->s197_x0 = 17U;

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);

        /* Transition: '<S197>:92' */
        localDW->s197_timer = 0U;

        /* Exit 'List_Idle': '<S197>:5' */
        /* Entry 'List_Idle': '<S197>:5' */
        localDW->s197_is_List = BuckyWagon_01_IN_List_Idle_h;
        localB->s197_stringNum = 0U;
      } else if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) {
        /* Transition: '<S197>:91' */
        /* Exit 'List_Idle': '<S197>:5' */
        localDW->s197_timer = (uint16_T)(localDW->s197_timer + 1);

        /* Entry 'List_Idle': '<S197>:5' */
        localDW->s197_is_List = BuckyWagon_01_IN_List_Idle_h;
        localB->s197_stringNum = 0U;
      } else if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S197>:94' */
        if (rtu_listIndex == 0) {
          /* Transition: '<S197>:93' */
          /* Exit 'List_Idle': '<S197>:5' */
          /* Entry 'List_Idle': '<S197>:5' */
          localDW->s197_is_List = BuckyWagon_01_IN_List_Idle_h;
          localB->s197_stringNum = 0U;
        } else {
          /* Transition: '<S197>:95' */
          localB->s197_listIndexO = (uint8_T)(rtu_listIndex - 1);

          /* Event: '<S197>:313' */
          BuckyWagon_01_FunctionCallSubsystem(localB->s197_listIndexO);
          sf_guard = TRUE;
        }
      } else {
        if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S197>:97' */
          if (rtu_numFields - 6 == rtu_listIndex) {
            /* Transition: '<S197>:99' */
            /* Exit 'List_Idle': '<S197>:5' */
            /* Entry 'List_Idle': '<S197>:5' */
            localDW->s197_is_List = BuckyWagon_01_IN_List_Idle_h;
            localB->s197_stringNum = 0U;
          } else {
            /* Transition: '<S197>:98' */
            localB->s197_listIndexO = (uint8_T)(rtu_listIndex + 1);

            /* Event: '<S197>:313' */
            BuckyWagon_01_FunctionCallSubsystem(localB->s197_listIndexO);
            sf_guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_List_Init:
      /* During 'List_Init': '<S197>:8' */
      /* Transition: '<S197>:96' */
      /* Transition: '<S197>:104' */
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:106' */
        memcpy(&localB->s197_string[0], &rtu_names[10 * (localB->s197_listIndexO
                + localB->s197_stringNum)], 10);

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      }

      /* Transition: '<S197>:108' */
      /* Exit 'List_Init': '<S197>:8' */
      /* Entry 'List_Wait': '<S197>:2' */
      localDW->s197_is_List = BuckyWagon_01_IN_List_Wait;
      break;

     case BuckyWagon_01_IN_List_Wait:
      /* During 'List_Wait': '<S197>:2' */
      /* Transition: '<S197>:111' */
      localB->s197_x0 = 9U;
      localB->s197_y0 = 12U;
      localB->s197_x1 = 41U;
      localB->s197_y1 = 53U;
      localB->s197_lineColor = 0U;
      localB->s197_fillColor = 0U;

      /* Event: '<S197>:301' */
      BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1, localB->s197_y0,
        localB->s197_y1, localB->s197_lineColor, localB->s197_fillColor);
      localB->s197_lineColor = 1U;
      localB->s197_hCenter = 0U;
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:113' */
        localB->s197_y0 = (uint8_T)(localB->s197_stringNum * 7 + 12);

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      }

      /* Transition: '<S197>:110' */
      /* Exit 'List_Wait': '<S197>:2' */
      /* Entry 'List_Wait2': '<S197>:4' */
      localDW->s197_is_List = BuckyWagon_01_IN_List_Wait2;
      break;

     case BuckyWagon_01_IN_List_Wait2:
      /* During 'List_Wait2': '<S197>:4' */
      /* Transition: '<S197>:107' */
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:103' */
        if (rtu_data[localB->s197_stringNum + rtu_listIndex] ==
            localDW->s197_oldData[(int32_T)localB->s197_stringNum]) {
          /* Transition: '<S197>:105' */
          localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
        } else {
          /* Transition: '<S197>:101' */
          sprintf(charPtr(&localB->s197_string[0]), "%-4d", rtu_data
                  [localB->s197_stringNum + rtu_listIndex]);
          localB->s197_string[4] = 0U;

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 42U;
          localB->s197_x1 = 57U;
          localB->s197_y0 = (uint8_T)(localB->s197_stringNum * 7 + 12);
          localB->s197_y1 = (uint8_T)(localB->s197_y0 + 6);
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[(int32_T)localB->s197_stringNum] =
            rtu_data[localB->s197_stringNum + rtu_listIndex];
          localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
        }
      }

      /* Transition: '<S197>:79' */
      localB->s197_y0 = 55U;
      localB->s197_y1 = 63U;
      localB->s197_x0 = 0U;
      localB->s197_x1 = 63U;
      memcpy(&localB->s197_string[0], &rtu_statusTxt[0], 9);
      localB->s197_string[9] = 0U;

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      if (rtu_statusTxtMode == 1) {
        /* Transition: '<S197>:78' */
        localB->s197_fillColor = BuckyWagon_01_BLACK;
        localB->s197_lineColor = BuckyWagon_01_BLACK;

        /* Event: '<S197>:301' */
        BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1, localB->s197_y0,
          localB->s197_y1, localB->s197_lineColor, localB->s197_fillColor);
        localB->s197_lineColor = BuckyWagon_01_WHITE;
      } else {
        /* Transition: '<S197>:80' */
        localB->s197_lineColor = BuckyWagon_01_WHITE;

        /* Event: '<S197>:301' */
        BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1, localB->s197_y0,
          localB->s197_y1, localB->s197_lineColor, localB->s197_fillColor);
        localB->s197_lineColor = BuckyWagon_01_BLACK;
      }

      /* Transition: '<S197>:100' */
      localB->s197_y0 = 56U;
      localB->s197_font = BuckyWagon_01_FONT4x6;
      localB->s197_x0 = 17U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);

      /* Transition: '<S197>:92' */
      localDW->s197_timer = 0U;

      /* Exit 'List_Wait2': '<S197>:4' */
      /* Entry 'List_Idle': '<S197>:5' */
      localDW->s197_is_List = BuckyWagon_01_IN_List_Idle_h;
      localB->s197_stringNum = 0U;
      break;

     default:
      BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }

    if (sf_guard) {
      /* Transition: '<S197>:104' */
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:106' */
        memcpy(&localB->s197_string[0], &rtu_names[10 * (localB->s197_listIndexO
                + localB->s197_stringNum)], 10);

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      }

      /* Transition: '<S197>:108' */
      /* Exit 'List_Idle': '<S197>:5' */
      /* Entry 'List_Wait': '<S197>:2' */
      localDW->s197_is_List = BuckyWagon_01_IN_List_Wait;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S197>:166' */
  localB->s197_stringNum = 0U;
  while (localB->s197_stringNum < 4) {
    /* Transition: '<S197>:168' */
    localDW->s197_oldData[(int32_T)localB->s197_stringNum] = (int16_T)(rtu_data
      [(int32_T)rtu_quadIndex[(int32_T)localB->s197_stringNum]] + 1);
    localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
  }

  /* Transition: '<S197>:169' */
  /* Entry 'Quad_Init': '<S197>:22' */
  localDW->s197_is_Quad = BuckyWagon_01_IN_Quad_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw string */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);

  /* draw lines */
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 64U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 31U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 8U;
  localB->s197_y1 = 54U;
  localB->s197_x0 = 30U;

  /* Event: '<S197>:305' */
  BuckyWagon_01_DrawVline(localB->s197_x0, localB->s197_y0, localB->s197_y1,
    localB->s197_lineColor, localB->s197_fillColor);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S197>:71' */
  /* Entry 'Single_Init': '<S197>:7' */
  localDW->s197_is_Single = BuckyWagon_01_IN_Single_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw string */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);

  /* draw lines */
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 64U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localDW->s197_oldData[0] = (int16_T)(rtu_data[(int32_T)rtu_singleIndex] + 1);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *
  localDW)
{
  /* During 'Quad': '<S197>:24' */
  if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S197>:85' */
    /* Exit 'Quad_Idle': '<S197>:21' */
    localDW->s197_is_Quad = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

    /* Exit 'Quad_Init': '<S197>:22' */
    /* Exit 'Quad_Names': '<S197>:23' */
    /* Exit 'Quad': '<S197>:24' */
    /* Entry 'wait1': '<S197>:17' */
    localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait1;
  } else {
    switch (localDW->s197_is_Quad) {
     case BuckyWagon_01_IN_Quad_Idle:
      /* During 'Quad_Idle': '<S197>:21' */
      if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) &&
          (localDW->s197_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S197>:170' */
        localB->s197_stringNum = 0U;
        localB->s197_font = BuckyWagon_01_FONT6x8;
        localB->s197_fillColor = BuckyWagon_01_WHITE;
        localB->s197_hCenter = 0U;
        if (localDW->s197_oldData[0] != rtu_data[(int32_T)rtu_quadIndex[0]]) {
          /* Transition: '<S197>:171' */
          sprintf(charPtr(&localB->s197_string[0]), "%4d", rtu_data[(int32_T)
                  rtu_quadIndex[0]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 5U;
          localB->s197_x1 = 29U;
          localB->s197_y0 = 23U;
          localB->s197_y1 = 30U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[0] = rtu_data[(int32_T)rtu_quadIndex[0]];
        } else {
          /* Transition: '<S197>:172' */
        }

        if (localDW->s197_oldData[1] != rtu_data[(int32_T)rtu_quadIndex[1]]) {
          /* Transition: '<S197>:174' */
          sprintf(charPtr(&localB->s197_string[0]), "%-4d", rtu_data[(int32_T)
                  rtu_quadIndex[1]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 32U;
          localB->s197_x1 = 55U;
          localB->s197_y0 = 23U;
          localB->s197_y1 = 30U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[1] = rtu_data[(int32_T)rtu_quadIndex[1]];
        } else {
          /* Transition: '<S197>:175' */
        }

        if (localDW->s197_oldData[2] != rtu_data[(int32_T)rtu_quadIndex[2]]) {
          /* Transition: '<S197>:176' */
          sprintf(charPtr(&localB->s197_string[0]), "%4d", rtu_data[(int32_T)
                  rtu_quadIndex[2]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 5U;
          localB->s197_x1 = 29U;
          localB->s197_y0 = 33U;
          localB->s197_y1 = 40U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[2] = rtu_data[(int32_T)rtu_quadIndex[2]];
        } else {
          /* Transition: '<S197>:177' */
        }

        if (localDW->s197_oldData[3] != rtu_data[(int32_T)rtu_quadIndex[3]]) {
          /* Transition: '<S197>:179' */
          sprintf(charPtr(&localB->s197_string[0]), "%-4d", rtu_data[(int32_T)
                  rtu_quadIndex[3]]);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_x0 = 32U;
          localB->s197_x1 = 55U;
          localB->s197_y0 = 33U;
          localB->s197_y1 = 40U;
          localB->s197_lineColor = 0U;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = 1U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localDW->s197_oldData[3] = rtu_data[(int32_T)rtu_quadIndex[3]];
        } else {
          /* Transition: '<S197>:180' */
        }

        /* Transition: '<S197>:133' */
        localB->s197_y0 = 55U;
        localB->s197_y1 = 63U;
        localB->s197_x0 = 0U;
        localB->s197_x1 = 63U;
        memcpy(&localB->s197_string[0], &rtu_statusTxt[0], 9);
        localB->s197_string[9] = 0U;

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S197>:134' */
          localB->s197_fillColor = BuckyWagon_01_BLACK;
          localB->s197_lineColor = BuckyWagon_01_BLACK;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S197>:132' */
          localB->s197_lineColor = BuckyWagon_01_WHITE;

          /* Event: '<S197>:301' */
          BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
            localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S197>:131' */
        localB->s197_y0 = 56U;
        localB->s197_font = BuckyWagon_01_FONT4x6;
        localB->s197_x0 = 17U;

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);

        /* Transition: '<S197>:178' */
        localDW->s197_timer = 0U;

        /* Exit 'Quad_Idle': '<S197>:21' */
        /* Entry 'Quad_Idle': '<S197>:21' */
        localDW->s197_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      } else {
        if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) {
          /* Transition: '<S197>:173' */
          /* Exit 'Quad_Idle': '<S197>:21' */
          localDW->s197_timer = (uint16_T)(localDW->s197_timer + 1);

          /* Entry 'Quad_Idle': '<S197>:21' */
          localDW->s197_is_Quad = BuckyWagon_01_IN_Quad_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_Quad_Init:
      /* During 'Quad_Init': '<S197>:22' */
      /* Transition: '<S197>:165' */
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 4) {
        /* Transition: '<S197>:163' */
        memcpy(&localB->s197_string[0], &rtu_namesline1[7 * rtu_quadIndex
               [(int32_T)localB->s197_stringNum]], 7);

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        memcpy(&localB->s197_string[0], &rtu_namesline2[7 * rtu_quadIndex
               [(int32_T)localB->s197_stringNum]], 7);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 4);

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum - 3);
      }

      /* Transition: '<S197>:164' */
      /* Exit 'Quad_Init': '<S197>:22' */
      /* Entry 'Quad_Names': '<S197>:23' */
      localDW->s197_is_Quad = BuckyWagon_01_IN_Quad_Names;
      localB->s197_hCenter = 0U;
      localB->s197_x0 = 10U;
      localB->s197_y0 = 10U;
      localB->s197_stringNum = 0U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_x0 = 5U;
      localB->s197_y0 = 16U;
      localB->s197_stringNum = 4U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_y0 = 41U;
      localB->s197_stringNum = 2U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_x0 = 10U;
      localB->s197_y0 = 47U;
      localB->s197_stringNum = 6U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_x0 = 32U;
      localB->s197_y0 = 10U;
      localB->s197_stringNum = 1U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_y0 = 16U;
      localB->s197_stringNum = 5U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_y0 = 41U;
      localB->s197_stringNum = 3U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      localB->s197_y0 = 47U;
      localB->s197_stringNum = 7U;

      /* Event: '<S197>:304' */
      BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
        localB->s197_y0, localB->s197_font, localB->s197_hCenter,
        localB->s197_vCenter, rtu_21, localB->s197_lineColor,
        localB->s197_fillColor);
      break;

     case BuckyWagon_01_IN_Quad_Names:
      /* During 'Quad_Names': '<S197>:23' */
      /* Transition: '<S197>:167' */
      localDW->s197_timer = BuckyWagon_01_UPDATE_TIME;
      localB->s197_font = BuckyWagon_01_FONT6x8;

      /* Exit 'Quad_Names': '<S197>:23' */
      /* Entry 'Quad_Idle': '<S197>:21' */
      localDW->s197_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_select_var(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S197>:146' */
  /* Entry 'Select_Init': '<S197>:33' */
  localDW->s197_is_select_var = BuckyWagon_01_IN_Select_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw lines and name */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 63U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);
  localDW->s197_selectIndex = 0U;
  localDW->s197_selectVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Entry 'Setup_Init': '<S197>:16' */
  localDW->s197_is_Setup = BuckyWagon_01_IN_Setup_Init;

  /* Event: '<S197>:300' */
  BuckyWagon_01_ClearScreen();

  /* draw lines and name */
  localB->s197_stringNum = 15U;
  sprintf(charPtr(&localB->s197_string[0]), "UWMAD");
  localB->s197_string[5] = 0U;

  /* Event: '<S197>:303' */
  BuckyWagon_01_SendString_efficient(localB->s197_stringNum, localB->
    s197_string[0], localB->s197_string[1], localB->s197_string[2],
    localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
    localB->s197_string[6], localB->s197_string, localB->s197_string[7],
    localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
    localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
    &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
    localB->s197_string[16]);
  localB->s197_y0 = 8U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 63U;
  localB->s197_lineColor = BuckyWagon_01_BLACK;
  localB->s197_fillColor = BuckyWagon_01_WHITE;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_y0 = 54U;

  /* Event: '<S197>:306' */
  BuckyWagon_01_DrawHLine(localB->s197_x0, localB->s197_x1, localB->s197_y0,
    localB->s197_lineColor, localB->s197_fillColor);
  localB->s197_hCenter = 1U;
  localB->s197_vCenter = 0U;
  localB->s197_font = BuckyWagon_01_FONT4x6;
  localB->s197_x0 = 32U;
  localB->s197_y0 = 2U;

  /* Event: '<S197>:304' */
  BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
    localB->s197_y0, localB->s197_font, localB->s197_hCenter,
    localB->s197_vCenter, rtu_21, localB->s197_lineColor, localB->s197_fillColor);
  localDW->s197_setupVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  boolean_T sf_guard;
  boolean_T sf_guard_0;

  /* During 'Setup': '<S197>:13' */
  sf_guard = FALSE;
  sf_guard_0 = FALSE;
  switch (localDW->s197_is_Setup) {
   case BuckyWagon_01_IN_Setup_Init:
    /* During 'Setup_Init': '<S197>:16' */
    /* Transition: '<S197>:59' */
    if (localDW->s197_setupIndex >= localDW->s197_setupVIndex + 6) {
      /* Transition: '<S197>:53' */
      localDW->s197_setupVIndex = (uint8_T)(localDW->s197_setupIndex - 5);
      localB->s197_stringNum = 0U;
    } else if (localDW->s197_setupIndex < localDW->s197_setupVIndex) {
      /* Transition: '<S197>:52' */
      localDW->s197_setupVIndex = localDW->s197_setupIndex;
      localB->s197_stringNum = 0U;
    } else {
      /* Transition: '<S197>:54' */
      localB->s197_stringNum = 0U;
    }

    while (localB->s197_stringNum < 6) {
      /* Transition: '<S197>:46' */
      memcpy(&localB->s197_string[0], &rtu_setupNames[13 *
             (localDW->s197_setupVIndex + localB->s197_stringNum)], 13);

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
    }

    /* Transition: '<S197>:50' */
    /* Exit 'Setup_Init': '<S197>:16' */
    /* Entry 'setup_Wait': '<S197>:14' */
    localDW->s197_is_Setup = BuckyWagon_01_IN_setup_Wait;
    break;

   case BuckyWagon_01_IN_select_var:
    /* During 'select_var': '<S197>:30' */
    switch (localDW->s197_is_select_var) {
     case BuckyWagon_01_IN_Select_Init:
      /* During 'Select_Init': '<S197>:33' */
      /* Transition: '<S197>:150' */
      if (localDW->s197_selectIndex >= localDW->s197_selectVIndex + 6) {
        /* Transition: '<S197>:144' */
        localDW->s197_selectVIndex = (uint8_T)(localDW->s197_selectIndex - 5);
        localB->s197_stringNum = 0U;
      } else if (localDW->s197_selectIndex < localDW->s197_selectVIndex) {
        /* Transition: '<S197>:143' */
        localDW->s197_selectVIndex = localDW->s197_selectIndex;
        localB->s197_stringNum = 0U;
      } else {
        /* Transition: '<S197>:145' */
        localB->s197_stringNum = 0U;
      }

      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:137' */
        memcpy(&localB->s197_string[0], &rtu_names[10 *
               (localDW->s197_selectVIndex + localB->s197_stringNum)], 10);

        /* Event: '<S197>:303' */
        BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
          localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
          localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
          localB->s197_string[6], localB->s197_string, localB->s197_string[7],
          localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
          localB->s197_string[11], localB->s197_string[12], localB->s197_string
          [13], &localB->s197_string[7], localB->s197_string[14],
          localB->s197_string[15], localB->s197_string[16]);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      }

      /* Transition: '<S197>:141' */
      /* Exit 'Select_Init': '<S197>:33' */
      /* Entry 'select_Wait': '<S197>:31' */
      localDW->s197_is_select_var = BuckyWagon_01_IN_select_Wait;
      break;

     case BuckyWagon_01_IN_select_Idle:
      /* During 'select_Idle': '<S197>:32' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S197>:154' */
        /* Graphical Function 'storeSelect': '<S197>:25' */
        /* Transition: '<S197>:160' */
        if (localDW->s197_setupIndex == 1) {
          /* Transition: '<S197>:159' */
          localB->s197_singleIndexO = localDW->s197_selectIndex;

          /* Event: '<S197>:316' */

          /* S-Function (motohawk_sfun_data_write): '<S210>/motohawk_data_write' */
          /* Write to Data Storage as scalar: singleIndex */
          {
            singleIndex_DataStore() = localB->s197_singleIndexO;
          }
        } else if ((localDW->s197_setupIndex == 2) || (localDW->s197_setupIndex ==
                    3)) {
          /* Transition: '<S197>:161' */
          localB->s197_dualIndexO[0] = rtu_dualIndex[0];
          localB->s197_dualIndexO[1] = rtu_dualIndex[1];
          localB->s197_dualIndexO[localDW->s197_setupIndex - 2] =
            localDW->s197_selectIndex;

          /* Event: '<S197>:315' */

          /* S-Function (motohawk_sfun_data_write): '<S211>/motohawk_data_write' */
          /* Write to Data Storage as vector: dualIndex */
          {
            dualIndex_DataStore()[0] = localB->s197_dualIndexO[0];
            dualIndex_DataStore()[1] = localB->s197_dualIndexO[1];
          }
        } else {
          if (localDW->s197_setupIndex >= 4) {
            /* Transition: '<S197>:162' */
            localB->s197_quadIndexO[0] = rtu_quadIndex[0];
            localB->s197_quadIndexO[1] = rtu_quadIndex[1];
            localB->s197_quadIndexO[2] = rtu_quadIndex[2];
            localB->s197_quadIndexO[3] = rtu_quadIndex[3];
            localB->s197_quadIndexO[localDW->s197_setupIndex - 4] =
              localDW->s197_selectIndex;

            /* Event: '<S197>:317' */

            /* S-Function (motohawk_sfun_data_write): '<S212>/motohawk_data_write' */
            /* Write to Data Storage as vector: quadIndex */
            {
              quadIndex_DataStore()[0] = localB->s197_quadIndexO[0];
              quadIndex_DataStore()[1] = localB->s197_quadIndexO[1];
              quadIndex_DataStore()[2] = localB->s197_quadIndexO[2];
              quadIndex_DataStore()[3] = localB->s197_quadIndexO[3];
            }
          }
        }

        /* Exit 'select_Idle': '<S197>:32' */
        localDW->s197_is_select_var = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

        /* Exit 'select_var': '<S197>:30' */
        localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
      } else if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S197>:152' */
        if (localDW->s197_selectIndex == 0) {
          /* Transition: '<S197>:153' */
          /* Exit 'select_Idle': '<S197>:32' */
          /* Entry 'select_Idle': '<S197>:32' */
          localDW->s197_is_select_var = BuckyWagon_01_IN_select_Idle;
        } else {
          /* Transition: '<S197>:151' */
          localDW->s197_selectIndex = (uint8_T)(localDW->s197_selectIndex - 1);
          sf_guard = TRUE;
        }
      } else {
        if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S197>:149' */
          if (rtu_numFields - 1 == localDW->s197_selectIndex) {
            /* Transition: '<S197>:147' */
            /* Exit 'select_Idle': '<S197>:32' */
            /* Entry 'select_Idle': '<S197>:32' */
            localDW->s197_is_select_var = BuckyWagon_01_IN_select_Idle;
          } else {
            /* Transition: '<S197>:148' */
            localDW->s197_selectIndex = (uint8_T)(localDW->s197_selectIndex + 1);
            sf_guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_select_Wait:
      /* During 'select_Wait': '<S197>:31' */
      /* Transition: '<S197>:139' */
      localB->s197_x0 = 0U;
      localB->s197_y0 = 12U;
      localB->s197_x1 = 64U;
      localB->s197_y1 = 53U;
      localB->s197_lineColor = 0U;
      localB->s197_fillColor = 0U;

      /* Event: '<S197>:301' */
      BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1, localB->s197_y0,
        localB->s197_y1, localB->s197_lineColor, localB->s197_fillColor);
      localB->s197_lineColor = 1U;
      localB->s197_hCenter = 1U;
      localB->s197_stringNum = 0U;
      while (localB->s197_stringNum < 6) {
        /* Transition: '<S197>:136' */
        localB->s197_y0 = (uint8_T)(localB->s197_stringNum * 7 + 12);
        if (localDW->s197_selectVIndex + localB->s197_stringNum ==
            localDW->s197_selectIndex) {
          /* Transition: '<S197>:138' */
          localB->s197_fillColor = BuckyWagon_01_BLACK;
          localB->s197_lineColor = BuckyWagon_01_WHITE;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
        } else {
          /* Transition: '<S197>:140' */
          localB->s197_fillColor = BuckyWagon_01_WHITE;
          localB->s197_lineColor = BuckyWagon_01_BLACK;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
        }
      }

      /* Transition: '<S197>:142' */
      /* Exit 'select_Wait': '<S197>:31' */
      /* Entry 'select_Idle': '<S197>:32' */
      localDW->s197_is_select_var = BuckyWagon_01_IN_select_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      break;
    }
    break;

   case BuckyWagon_01_IN_setup_Idle:
    /* During 'setup_Idle': '<S197>:15' */
    if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S197>:66' */
      if (localDW->s197_setupIndex == 0) {
        /* Transition: '<S197>:65' */
        if (rtu_screen == 1) {
          /* Transition: '<S197>:36' */
          /* Exit 'setup_Idle': '<S197>:15' */
          localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

          /* Exit 'Setup': '<S197>:13' */
          /* Entry 'Single': '<S197>:12' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S197>:42' */
          /* Exit 'setup_Idle': '<S197>:15' */
          localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

          /* Exit 'Setup': '<S197>:13' */
          /* Entry 'Dual': '<S197>:20' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S197>:38' */
          /* Exit 'setup_Idle': '<S197>:15' */
          localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

          /* Exit 'Setup': '<S197>:13' */
          /* Entry 'Quad': '<S197>:24' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S197>:41' */
          /* Exit 'setup_Idle': '<S197>:15' */
          localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

          /* Exit 'Setup': '<S197>:13' */
          /* Entry 'List': '<S197>:3' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        /* Transition: '<S197>:69' */
        /* Graphical Function 'loadSelect': '<S197>:26' */
        /* Transition: '<S197>:156' */
        if (localDW->s197_setupIndex == 1) {
          /* Transition: '<S197>:155' */
          localDW->s197_selectIndex = rtu_singleIndex;
        } else if ((localDW->s197_setupIndex == 2) || (localDW->s197_setupIndex ==
                    3)) {
          /* Transition: '<S197>:157' */
          localDW->s197_selectIndex = rtu_dualIndex[localDW->s197_setupIndex - 2];
        } else {
          if (localDW->s197_setupIndex >= 4) {
            /* Transition: '<S197>:158' */
            localDW->s197_selectIndex = rtu_quadIndex[localDW->s197_setupIndex -
              4];
          }
        }

        /* Exit 'setup_Idle': '<S197>:15' */
        /* Entry 'select_var': '<S197>:30' */
        localDW->s197_is_Setup = BuckyWagon_01_IN_select_var;
        BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      }
    } else if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_upPressed) {
      /* Transition: '<S197>:61' */
      if (localDW->s197_setupIndex == 0) {
        /* Transition: '<S197>:62' */
        /* Exit 'setup_Idle': '<S197>:15' */
        /* Entry 'setup_Idle': '<S197>:15' */
        localDW->s197_is_Setup = BuckyWagon_01_IN_setup_Idle;
        localB->s197_stringNum = 0U;
      } else {
        /* Transition: '<S197>:60' */
        localDW->s197_setupIndex = (uint8_T)(localDW->s197_setupIndex - 1);
        sf_guard_0 = TRUE;
      }
    } else {
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_downPressed) {
        /* Transition: '<S197>:58' */
        if (localDW->s197_setupIndex == 7) {
          /* Transition: '<S197>:56' */
          /* Exit 'setup_Idle': '<S197>:15' */
          /* Entry 'setup_Idle': '<S197>:15' */
          localDW->s197_is_Setup = BuckyWagon_01_IN_setup_Idle;
          localB->s197_stringNum = 0U;
        } else {
          /* Transition: '<S197>:57' */
          localDW->s197_setupIndex = (uint8_T)(localDW->s197_setupIndex + 1);
          sf_guard_0 = TRUE;
        }
      }
    }
    break;

   case BuckyWagon_01_IN_setup_Wait:
    /* During 'setup_Wait': '<S197>:14' */
    /* Transition: '<S197>:48' */
    localB->s197_x0 = 0U;
    localB->s197_y0 = 12U;
    localB->s197_x1 = 64U;
    localB->s197_y1 = 53U;
    localB->s197_lineColor = 0U;
    localB->s197_fillColor = 0U;

    /* Event: '<S197>:301' */
    BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1, localB->s197_y0,
      localB->s197_y1, localB->s197_lineColor, localB->s197_fillColor);
    localB->s197_lineColor = 1U;
    localB->s197_hCenter = 1U;
    localB->s197_stringNum = 0U;
    while (localB->s197_stringNum < 6) {
      /* Transition: '<S197>:45' */
      localB->s197_y0 = (uint8_T)(localB->s197_stringNum * 7 + 12);
      if (localDW->s197_setupVIndex + localB->s197_stringNum ==
          localDW->s197_setupIndex) {
        /* Transition: '<S197>:47' */
        localB->s197_fillColor = BuckyWagon_01_BLACK;
        localB->s197_lineColor = BuckyWagon_01_WHITE;

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      } else {
        /* Transition: '<S197>:49' */
        localB->s197_fillColor = BuckyWagon_01_WHITE;
        localB->s197_lineColor = BuckyWagon_01_BLACK;

        /* Event: '<S197>:304' */
        BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
          localB->s197_y0, localB->s197_font, localB->s197_hCenter,
          localB->s197_vCenter, rtu_21, localB->s197_lineColor,
          localB->s197_fillColor);
        localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
      }
    }

    /* Transition: '<S197>:51' */
    /* Exit 'setup_Wait': '<S197>:14' */
    /* Entry 'setup_Idle': '<S197>:15' */
    localDW->s197_is_Setup = BuckyWagon_01_IN_setup_Idle;
    localB->s197_stringNum = 0U;
    break;

   case BuckyWagon_01_IN_wait:
    /* During 'wait': '<S197>:11' */
    if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S197>:81' */
      /* Exit 'wait': '<S197>:11' */
      localDW->s197_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
      BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
    }
    break;

   default:
    /* Transition: '<S197>:82' */
    /* Entry 'wait': '<S197>:11' */
    localDW->s197_is_Setup = BuckyWagon_01_IN_wait;

    /* Event: '<S197>:300' */
    BuckyWagon_01_ClearScreen();
    localDW->s197_setupIndex = 0U;
    break;
  }

  if (sf_guard_0) {
    if (localDW->s197_setupIndex >= localDW->s197_setupVIndex + 6) {
      /* Transition: '<S197>:53' */
      localDW->s197_setupVIndex = (uint8_T)(localDW->s197_setupIndex - 5);
      localB->s197_stringNum = 0U;
    } else if (localDW->s197_setupIndex < localDW->s197_setupVIndex) {
      /* Transition: '<S197>:52' */
      localDW->s197_setupVIndex = localDW->s197_setupIndex;
      localB->s197_stringNum = 0U;
    } else {
      /* Transition: '<S197>:54' */
      localB->s197_stringNum = 0U;
    }

    while (localB->s197_stringNum < 6) {
      /* Transition: '<S197>:46' */
      memcpy(&localB->s197_string[0], &rtu_setupNames[13 *
             (localDW->s197_setupVIndex + localB->s197_stringNum)], 13);

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
    }

    /* Transition: '<S197>:50' */
    /* Exit 'setup_Idle': '<S197>:15' */
    /* Entry 'setup_Wait': '<S197>:14' */
    localDW->s197_is_Setup = BuckyWagon_01_IN_setup_Wait;
  }

  if (sf_guard) {
    if (localDW->s197_selectIndex >= localDW->s197_selectVIndex + 6) {
      /* Transition: '<S197>:144' */
      localDW->s197_selectVIndex = (uint8_T)(localDW->s197_selectIndex - 5);
      localB->s197_stringNum = 0U;
    } else if (localDW->s197_selectIndex < localDW->s197_selectVIndex) {
      /* Transition: '<S197>:143' */
      localDW->s197_selectVIndex = localDW->s197_selectIndex;
      localB->s197_stringNum = 0U;
    } else {
      /* Transition: '<S197>:145' */
      localB->s197_stringNum = 0U;
    }

    while (localB->s197_stringNum < 6) {
      /* Transition: '<S197>:137' */
      memcpy(&localB->s197_string[0], &rtu_names[10 *
             (localDW->s197_selectVIndex + localB->s197_stringNum)], 10);

      /* Event: '<S197>:303' */
      BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
        localB->s197_string[0], localB->s197_string[1], localB->s197_string[2],
        localB->s197_string[3], localB->s197_string[4], localB->s197_string[5],
        localB->s197_string[6], localB->s197_string, localB->s197_string[7],
        localB->s197_string[8], localB->s197_string[9], localB->s197_string[10],
        localB->s197_string[11], localB->s197_string[12], localB->s197_string[13],
        &localB->s197_string[7], localB->s197_string[14], localB->s197_string[15],
        localB->s197_string[16]);
      localB->s197_stringNum = (uint8_T)(localB->s197_stringNum + 1);
    }

    /* Transition: '<S197>:141' */
    /* Exit 'select_Idle': '<S197>:32' */
    /* Entry 'select_Wait': '<S197>:31' */
    localDW->s197_is_select_var = BuckyWagon_01_IN_select_Wait;
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_chartstep_c2_BuckyWagon_01(uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  int32_T sf_temp;

  /* During: Foreground/MiniViewDisplay/Chart */
  if (localDW->s197_is_active_c2_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/Chart */
    localDW->s197_is_active_c2_BuckyWagon_01 = 1U;

    /* Transition: '<S197>:43' */
    /* Entry 'PowerupDelay': '<S197>:9' */
    localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;
    localDW->s197_timer = 0U;
  } else {
    switch (localDW->s197_is_c2_BuckyWagon_01) {
     case BuckyWagon_01_IN_Dual:
      BuckyWagon_01_Dual(rtu_dualIndex, rtu_names, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_List:
      BuckyWagon_01_List(rtu_listIndex, rtu_names, rtu_numFields, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_PowerupDelay:
      /* During 'PowerupDelay': '<S197>:9' */
      if (localDW->s197_timer >= rtu_startupDelay) {
        /* Transition: '<S197>:40' */
        if (rtu_screen == 1) {
          /* Transition: '<S197>:36' */
          /* Exit 'PowerupDelay': '<S197>:9' */
          /* Entry 'Single': '<S197>:12' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S197>:42' */
          /* Exit 'PowerupDelay': '<S197>:9' */
          /* Entry 'Dual': '<S197>:20' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S197>:38' */
          /* Exit 'PowerupDelay': '<S197>:9' */
          /* Entry 'Quad': '<S197>:24' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S197>:41' */
          /* Exit 'PowerupDelay': '<S197>:9' */
          /* Entry 'List': '<S197>:3' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        localDW->s197_timer = (uint16_T)(localDW->s197_timer + 1);
      }
      break;

     case BuckyWagon_01_IN_Quad:
      BuckyWagon_01_Quad(rtu_quadIndex, rtu_namesline1, rtu_namesline2,
                         rtu_statusTxt, rtu_statusTxtMode, rtu_data, rtu_21,
                         localB, localDW);
      break;

     case BuckyWagon_01_IN_Setup:
      BuckyWagon_01_Setup(rtu_listIndex, rtu_singleIndex, rtu_dualIndex,
                          rtu_quadIndex, rtu_screen, rtu_setupNames, rtu_names,
                          rtu_numFields, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_Single:
      /* During 'Single': '<S197>:12' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuPressed) {
        /* Transition: '<S197>:83' */
        /* Exit 'List_Idle': '<S197>:10' */
        localDW->s197_is_Single = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;

        /* Exit 'Single_Init': '<S197>:7' */
        /* Exit 'singleNames': '<S197>:6' */
        /* Exit 'Single': '<S197>:12' */
        /* Entry 'wait3': '<S197>:28' */
        localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait3;
      } else {
        switch (localDW->s197_is_Single) {
         case BuckyWagon_01_IN_List_Idle_h:
          /* During 'List_Idle': '<S197>:10' */
          if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) &&
              (localDW->s197_timer >= BuckyWagon_01_UPDATE_TIME)) {
            /* Transition: '<S197>:123' */
            localB->s197_stringNum = 0U;
            localB->s197_font = BuckyWagon_01_FONT8x15;
            localB->s197_fillColor = BuckyWagon_01_WHITE;
            localB->s197_hCenter = 0U;
            if (localDW->s197_oldData[0] != rtu_data[(int32_T)rtu_singleIndex])
            {
              /* Transition: '<S197>:126' */
              sprintf(charPtr(&localB->s197_string[0]), "%4d", rtu_data[(int32_T)
                      rtu_singleIndex]);

              /* Event: '<S197>:303' */
              BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
                localB->s197_string[0], localB->s197_string[1],
                localB->s197_string[2], localB->s197_string[3],
                localB->s197_string[4], localB->s197_string[5],
                localB->s197_string[6], localB->s197_string, localB->
                s197_string[7], localB->s197_string[8], localB->s197_string[9],
                localB->s197_string[10], localB->s197_string[11],
                localB->s197_string[12], localB->s197_string[13],
                &localB->s197_string[7], localB->s197_string[14],
                localB->s197_string[15], localB->s197_string[16]);
              localB->s197_x0 = 0U;
              localB->s197_x1 = 64U;
              localB->s197_y0 = 25U;
              localB->s197_y1 = 39U;
              localB->s197_fillColor = BuckyWagon_01_WHITE;
              localB->s197_lineColor = 0U;

              /* Event: '<S197>:301' */
              BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                localB->s197_fillColor);
              localB->s197_lineColor = BuckyWagon_01_BLACK;
              localB->s197_x0 = 15U;

              /* Event: '<S197>:304' */
              BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
                localB->s197_y0, localB->s197_font, localB->s197_hCenter,
                localB->s197_vCenter, rtu_21, localB->s197_lineColor,
                localB->s197_fillColor);
              localDW->s197_oldData[0] = rtu_data[(int32_T)rtu_singleIndex];
              localB->s197_x0 = 6U;
              localB->s197_x1 = 58U;
              localB->s197_y0 = 41U;
              localB->s197_y1 = 48U;
              localB->s197_lineColor = BuckyWagon_01_BLACK;

              /* Event: '<S197>:301' */
              BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                localB->s197_fillColor);
              if (rtu_data[(int32_T)rtu_singleIndex] > rt_MAX((int32_T)
                   rtu_barMin[(int32_T)rtu_singleIndex], rtu_barMax[(int32_T)
                   rtu_singleIndex])) {
                /* Transition: '<S197>:127' */
                sf_temp = (rt_MAX((int32_T)rtu_barMin[(int32_T)rtu_singleIndex],
                                  rtu_barMax[(int32_T)rtu_singleIndex]) -
                           rtu_barMin[(int32_T)rtu_singleIndex]) * 52 /
                  (rtu_barMax[(int32_T)rtu_singleIndex] - rtu_barMin[(int32_T)
                   rtu_singleIndex]) + 6;
              } else if (rtu_data[(int32_T)rtu_singleIndex] < rt_MIN((int32_T)
                          rtu_barMin[(int32_T)rtu_singleIndex], rtu_barMax
                          [(int32_T)rtu_singleIndex])) {
                /* Transition: '<S197>:125' */
                sf_temp = (rt_MIN((int32_T)rtu_barMin[(int32_T)rtu_singleIndex],
                                  rtu_barMax[(int32_T)rtu_singleIndex]) -
                           rtu_barMin[(int32_T)rtu_singleIndex]) * 52 /
                  (rtu_barMax[(int32_T)rtu_singleIndex] - rtu_barMin[(int32_T)
                   rtu_singleIndex]) + 6;
              } else {
                /* Transition: '<S197>:121' */
                sf_temp = (rtu_data[(int32_T)rtu_singleIndex] - rtu_barMin
                           [(int32_T)rtu_singleIndex]) * 52 / (rtu_barMax
                  [(int32_T)rtu_singleIndex] - rtu_barMin[(int32_T)
                  rtu_singleIndex]) + 6;
              }

              if ((rtu_barGraphMode[(int32_T)rtu_singleIndex] == 2) && (sf_temp >=
                   32)) {
                /* Transition: '<S197>:128' */
                localB->s197_x1 = (uint8_T)sf_temp;
                localB->s197_fillColor = BuckyWagon_01_BLACK;
                localB->s197_x0 = 32U;

                /* Event: '<S197>:301' */
                BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                  localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                  localB->s197_fillColor);
              } else if ((rtu_barGraphMode[(int32_T)rtu_singleIndex] == 2) &&
                         (sf_temp < 32)) {
                /* Transition: '<S197>:122' */
                localB->s197_x0 = (uint8_T)sf_temp;
                localB->s197_x1 = 32U;
                localB->s197_fillColor = BuckyWagon_01_BLACK;

                /* Event: '<S197>:301' */
                BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                  localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                  localB->s197_fillColor);
              } else if (rtu_barGraphMode[(int32_T)rtu_singleIndex] == 1) {
                /* Transition: '<S197>:120' */
                localB->s197_x0 = (uint8_T)sf_temp;
                localB->s197_fillColor = BuckyWagon_01_BLACK;

                /* Event: '<S197>:301' */
                BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                  localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                  localB->s197_fillColor);
              } else if (rtu_barGraphMode[(int32_T)rtu_singleIndex] == 3) {
                /* Transition: '<S197>:68' */
                localB->s197_x0 = (uint8_T)sf_temp;

                /* Event: '<S197>:305' */
                BuckyWagon_01_DrawVline(localB->s197_x0, localB->s197_y0,
                  localB->s197_y1, localB->s197_lineColor,
                  localB->s197_fillColor);
              } else {
                /* Transition: '<S197>:124' */
                localB->s197_x1 = (uint8_T)sf_temp;
                localB->s197_fillColor = BuckyWagon_01_BLACK;

                /* Event: '<S197>:301' */
                BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                  localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                  localB->s197_fillColor);
              }

              /* Transition: '<S197>:119' */
              /* Transition: '<S197>:115' */
            } else {
              /* Transition: '<S197>:118' */
            }

            /* Transition: '<S197>:77' */
            localB->s197_y0 = 55U;
            localB->s197_y1 = 63U;
            localB->s197_x0 = 0U;
            localB->s197_x1 = 63U;
            memcpy(&localB->s197_string[0], &rtu_statusTxt[0], 9);
            localB->s197_string[9] = 0U;

            /* Event: '<S197>:303' */
            BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
              localB->s197_string[0], localB->s197_string[1],
              localB->s197_string[2], localB->s197_string[3],
              localB->s197_string[4], localB->s197_string[5],
              localB->s197_string[6], localB->s197_string, localB->s197_string[7],
              localB->s197_string[8], localB->s197_string[9],
              localB->s197_string[10], localB->s197_string[11],
              localB->s197_string[12], localB->s197_string[13],
              &localB->s197_string[7], localB->s197_string[14],
              localB->s197_string[15], localB->s197_string[16]);
            if (rtu_statusTxtMode == 1) {
              /* Transition: '<S197>:75' */
              localB->s197_fillColor = BuckyWagon_01_BLACK;
              localB->s197_lineColor = BuckyWagon_01_BLACK;

              /* Event: '<S197>:301' */
              BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                localB->s197_fillColor);
              localB->s197_lineColor = BuckyWagon_01_WHITE;
            } else {
              /* Transition: '<S197>:135' */
              localB->s197_lineColor = BuckyWagon_01_WHITE;
              localB->s197_fillColor = BuckyWagon_01_WHITE;

              /* Event: '<S197>:301' */
              BuckyWagon_01_DrawRect(localB->s197_x0, localB->s197_x1,
                localB->s197_y0, localB->s197_y1, localB->s197_lineColor,
                localB->s197_fillColor);
              localB->s197_lineColor = BuckyWagon_01_BLACK;
            }

            /* Transition: '<S197>:44' */
            localB->s197_y0 = 56U;
            localB->s197_font = BuckyWagon_01_FONT4x6;
            localB->s197_x0 = 17U;

            /* Event: '<S197>:304' */
            BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
              localB->s197_y0, localB->s197_font, localB->s197_hCenter,
              localB->s197_vCenter, rtu_21, localB->s197_lineColor,
              localB->s197_fillColor);

            /* Transition: '<S197>:116' */
            localDW->s197_timer = 0U;

            /* Exit 'List_Idle': '<S197>:10' */
            /* Entry 'List_Idle': '<S197>:10' */
            localDW->s197_is_Single = BuckyWagon_01_IN_List_Idle_h;
          } else {
            if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_tick) {
              /* Transition: '<S197>:117' */
              /* Exit 'List_Idle': '<S197>:10' */
              localDW->s197_timer = (uint16_T)(localDW->s197_timer + 1);

              /* Entry 'List_Idle': '<S197>:10' */
              localDW->s197_is_Single = BuckyWagon_01_IN_List_Idle_h;
            }
          }
          break;

         case BuckyWagon_01_IN_Single_Init:
          /* During 'Single_Init': '<S197>:7' */
          /* Transition: '<S197>:70' */
          /* Exit 'Single_Init': '<S197>:7' */
          /* Entry 'singleNames': '<S197>:6' */
          localDW->s197_is_Single = BuckyWagon_01_IN_singleNames;
          localB->s197_hCenter = 1U;
          localB->s197_font = BuckyWagon_01_FONT6x8;
          localB->s197_x0 = 30U;
          localB->s197_stringNum = 0U;
          memcpy(&localB->s197_string[0], &rtu_names[10 * rtu_singleIndex], 10);

          /* Event: '<S197>:303' */
          BuckyWagon_01_SendString_efficient(localB->s197_stringNum,
            localB->s197_string[0], localB->s197_string[1], localB->s197_string
            [2], localB->s197_string[3], localB->s197_string[4],
            localB->s197_string[5], localB->s197_string[6], localB->s197_string,
            localB->s197_string[7], localB->s197_string[8], localB->s197_string
            [9], localB->s197_string[10], localB->s197_string[11],
            localB->s197_string[12], localB->s197_string[13],
            &localB->s197_string[7], localB->s197_string[14],
            localB->s197_string[15], localB->s197_string[16]);
          localB->s197_y0 = 14U;

          /* Event: '<S197>:304' */
          BuckyWagon_01_DrawString(localB->s197_stringNum, localB->s197_x0,
            localB->s197_y0, localB->s197_font, localB->s197_hCenter,
            localB->s197_vCenter, rtu_21, localB->s197_lineColor,
            localB->s197_fillColor);
          break;

         case BuckyWagon_01_IN_singleNames:
          /* During 'singleNames': '<S197>:6' */
          /* Transition: '<S197>:129' */
          localDW->s197_timer = BuckyWagon_01_UPDATE_TIME;

          /* Exit 'singleNames': '<S197>:6' */
          /* Entry 'List_Idle': '<S197>:10' */
          localDW->s197_is_Single = BuckyWagon_01_IN_List_Idle_h;
          break;

         default:
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_wait1:
      /* During 'wait1': '<S197>:17' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S197>:90' */
        localB->s197_screenO = 2U;

        /* Event: '<S197>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s197_screenO);

        /* Exit 'wait1': '<S197>:17' */
        /* Entry 'Dual': '<S197>:20' */
        localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
        BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S197>:86' */
          /* Exit 'wait1': '<S197>:17' */
          /* Entry 'Setup': '<S197>:13' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S197>:82' */
          /* Entry 'wait': '<S197>:11' */
          localDW->s197_is_Setup = BuckyWagon_01_IN_wait;

          /* Event: '<S197>:300' */
          BuckyWagon_01_ClearScreen();
          localDW->s197_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait2:
      /* During 'wait2': '<S197>:29' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S197>:89' */
        localB->s197_screenO = 1U;

        /* Event: '<S197>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s197_screenO);

        /* Exit 'wait2': '<S197>:29' */
        /* Entry 'Single': '<S197>:12' */
        localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
        BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S197>:37' */
          /* Exit 'wait2': '<S197>:29' */
          /* Entry 'Setup': '<S197>:13' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S197>:82' */
          /* Entry 'wait': '<S197>:11' */
          localDW->s197_is_Setup = BuckyWagon_01_IN_wait;

          /* Event: '<S197>:300' */
          BuckyWagon_01_ClearScreen();
          localDW->s197_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait3:
      /* During 'wait3': '<S197>:28' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S197>:88' */
        localB->s197_screenO = 0U;

        /* Event: '<S197>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s197_screenO);

        /* Exit 'wait3': '<S197>:28' */
        /* Entry 'List': '<S197>:3' */
        localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
        BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S197>:35' */
          /* Exit 'wait3': '<S197>:28' */
          /* Entry 'Setup': '<S197>:13' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S197>:82' */
          /* Entry 'wait': '<S197>:11' */
          localDW->s197_is_Setup = BuckyWagon_01_IN_wait;

          /* Event: '<S197>:300' */
          BuckyWagon_01_ClearScreen();
          localDW->s197_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait4:
      /* During 'wait4': '<S197>:27' */
      if (_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S197>:87' */
        localB->s197_screenO = 4U;

        /* Event: '<S197>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s197_screenO);

        /* Exit 'wait4': '<S197>:27' */
        /* Entry 'Quad': '<S197>:24' */
        localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
        BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S197>:39' */
          /* Exit 'wait4': '<S197>:27' */
          /* Entry 'Setup': '<S197>:13' */
          localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S197>:82' */
          /* Entry 'wait': '<S197>:11' */
          localDW->s197_is_Setup = BuckyWagon_01_IN_wait;

          /* Event: '<S197>:300' */
          BuckyWagon_01_ClearScreen();
          localDW->s197_setupIndex = 0U;
        }
      }
      break;

     default:
      /* Transition: '<S197>:43' */
      /* Entry 'PowerupDelay': '<S197>:9' */
      localDW->s197_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;
      localDW->s197_timer = 0U;
      break;
    }
  }
}

/* Initial conditions for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_f_Init(rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S11>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S11>/Clear Screen'
   *  InitializeConditions for SubSystem: '<S11>/Draw Bitmap'
   *  InitializeConditions for SubSystem: '<S11>/Draw HLine'
   *  InitializeConditions for SubSystem: '<S11>/Draw Rect'
   *  InitializeConditions for SubSystem: '<S11>/Draw String'
   *  InitializeConditions for SubSystem: '<S11>/Draw Vline'
   *  InitializeConditions for SubSystem: '<S11>/Function-Call Subsystem'
   *  InitializeConditions for SubSystem: '<S11>/Function-Call Subsystem1'
   *  InitializeConditions for SubSystem: '<S11>/Function-Call Subsystem2'
   *  InitializeConditions for SubSystem: '<S11>/Function-Call Subsystem3'
   *  InitializeConditions for SubSystem: '<S11>/Function-Call Subsystem4'
   *  InitializeConditions for SubSystem: '<S11>/Send String_efficient'
   *  InitializeConditions for SubSystem: '<S11>/Set GUI Mode'
   */
  localDW->s197_is_Dual = 0U;
  localDW->s197_is_List = 0U;
  localDW->s197_is_Quad = 0U;
  localDW->s197_is_Setup = 0U;
  localDW->s197_is_select_var = 0U;
  localDW->s197_is_Single = 0U;
  localDW->s197_is_active_c2_BuckyWagon_01 = 0U;
  localDW->s197_is_c2_BuckyWagon_01 = 0U;
  localDW->s197_timer = 0U;
  for (i = 0; i < 6; i++) {
    localDW->s197_oldData[i] = 0;
  }

  localDW->s197_setupIndex = 0U;
  localDW->s197_setupVIndex = 0U;
  localDW->s197_selectIndex = 0U;
  localDW->s197_selectVIndex = 0U;
  localB->s197_mode = 0U;
  localB->s197_x0 = 0U;
  localB->s197_x1 = 0U;
  localB->s197_y0 = 0U;
  localB->s197_y1 = 0U;
  localB->s197_lineColor = 0U;
  localB->s197_fillColor = 0U;
  localB->s197_stringNum = 0U;
  for (i = 0; i < 18; i++) {
    localB->s197_string[i] = 0U;
  }

  localB->s197_font = 0U;
  localB->s197_hCenter = 0U;
  localB->s197_vCenter = 0U;
  localB->s197_listIndexO = 0U;
  localB->s197_screenO = 0U;
  localB->s197_dualIndexO[0] = 0U;
  localB->s197_dualIndexO[1] = 0U;
  localB->s197_quadIndexO[0] = 0U;
  localB->s197_quadIndexO[1] = 0U;
  localB->s197_quadIndexO[2] = 0U;
  localB->s197_quadIndexO[3] = 0U;
  localB->s197_singleIndexO = 0U;
}

/* Start for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_h_Start(rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Start for Stateflow: '<S11>/Chart' incorporates:
   *  Start for SubSystem: '<S11>/Clear Screen'
   *  Start for SubSystem: '<S11>/Draw Bitmap'
   *  Start for SubSystem: '<S11>/Draw HLine'
   *  Start for SubSystem: '<S11>/Draw Rect'
   *  Start for SubSystem: '<S11>/Draw String'
   *  Start for SubSystem: '<S11>/Draw Vline'
   *  Start for SubSystem: '<S11>/Function-Call Subsystem'
   *  Start for SubSystem: '<S11>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S11>/Function-Call Subsystem2'
   *  Start for SubSystem: '<S11>/Function-Call Subsystem3'
   *  Start for SubSystem: '<S11>/Function-Call Subsystem4'
   *  Start for SubSystem: '<S11>/Send String_efficient'
   *  Start for SubSystem: '<S11>/Set GUI Mode'
   */

  /* Start for S-Function (fcncallgen): '<S217>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S217>/Subsystem'
   */
  BuckyWagon_01_ClearScreen_Start();
  BuckyWagon_01_DrawRect_Start();

  /* Start for S-Function (fcncallgen): '<S200>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S200>/Subsystem'
   */
  BuckyWagon_01_SendString_efficient_Start();
  BuckyWagon_01_DrawString_Start();
  BuckyWagon_01_DrawVline_Start();
  BuckyWagon_01_DrawHLine_Start();
}

/* Output and update for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_o(const boolean_T rtu_0[7], uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW,
  rtZCE_Chart_BuckyWagon_01_o *localZCE)
{
  boolean_T zcEvent[7];
  int8_T rtb_inputevents[7];
  int32_T i;
  boolean_T tmp;
  boolean_T zcEvent_0;
  tmp = FALSE;
  for (i = 0; i < 7; i++) {
    zcEvent_0 = ((((localZCE->Chart_Trig_ZCE[i]) == POS_ZCSIG) != (int32_T)
                  rtu_0[i]) && ((localZCE->Chart_Trig_ZCE[i]) !=
      UNINITIALIZED_ZCSIG));
    tmp = (tmp || zcEvent_0);
    zcEvent[i] = zcEvent_0;
  }

  if (tmp) {
    for (i = 0; i < 7; i++) {
      rtb_inputevents[i] = (int8_T)(int32_T)(zcEvent[i] ? rtu_0[i] ?
        RISING_ZCEVENT : FALLING_ZCEVENT : NO_ZCEVENT);
    }

    /* Stateflow: '<S11>/Chart' incorporates:
     *  SubSystem: '<S11>/Clear Screen'
     *  SubSystem: '<S11>/Draw HLine'
     *  SubSystem: '<S11>/Draw Rect'
     *  SubSystem: '<S11>/Draw String'
     *  SubSystem: '<S11>/Draw Vline'
     *  SubSystem: '<S11>/Function-Call Subsystem'
     *  SubSystem: '<S11>/Function-Call Subsystem1'
     *  SubSystem: '<S11>/Function-Call Subsystem2'
     *  SubSystem: '<S11>/Function-Call Subsystem3'
     *  SubSystem: '<S11>/Function-Call Subsystem4'
     *  SubSystem: '<S11>/Send String_efficient'
     */
    /* Gateway: Foreground/MiniViewDisplay/Chart */
    if (rtb_inputevents[0U] != 0) {
      /* Event: '<S197>:298' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_tick;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[1U] == 1) {
      /* Event: '<S197>:307' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_upPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[2U] == -1) {
      /* Event: '<S197>:308' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_upReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[3U] == 1) {
      /* Event: '<S197>:309' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_menuPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[4U] == -1) {
      /* Event: '<S197>:310' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_menuReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[5U] == 1) {
      /* Event: '<S197>:311' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_downPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }

    if (rtb_inputevents[6U] == -1) {
      /* Event: '<S197>:312' */
      i = _sfEvent_BuckyWagon_01_;
      _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_downReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      _sfEvent_BuckyWagon_01_ = i;
    }
  }

  for (i = 0; i < 7; i++) {
    localZCE->Chart_Trig_ZCE[i] = (uint8_T)(rtu_0[i] ? (int32_T)POS_ZCSIG :
      (int32_T)ZERO_ZCSIG);
  }
}

/*
 * Output and update for enable system:
 *    '<S11>/Enabled Subsystem'
 *    '<S11>/Enabled Subsystem1'
 *    '<S11>/Enabled Subsystem2'
 */
void BuckyWagon_01_EnabledSubsystem(boolean_T rtu_0, uint8_T rtu_1,
  rtB_EnabledSubsystem_BuckyWagon_01 *localB)
{
  if (rtu_0) {
    /* Inport: '<S205>/In' */
    localB->s205_In = rtu_1;
  }
}

/* Output and update for function-call system: '<S213>/Fault Iterator' */
void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* local block i/o variables */
  fault_T rtb_UnitDelay_fi;
  fault_T rtb_motohawk_fault_iterator_o2;

  /* UnitDelay: '<S227>/Unit Delay' */
  rtb_UnitDelay_fi = localDW->s227_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_fault_iterator): '<S227>/motohawk_fault_iterator' */
  /* Get Next Active Fault */
  {
    extern boolean_T IsFaultValid(uint32_T fault);
    extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
    rtb_motohawk_fault_iterator_o2 = GetNextActiveFault((uint32_T)
      (rtb_UnitDelay_fi), 1);
    localB->s227_motohawk_fault_iterator_o1 = IsFaultValid
      (rtb_motohawk_fault_iterator_o2);
  }

  /* S-Function (motohawk_sfun_fault_name): '<S227>/motohawk_fault_name' */
  {
    extern const char *GetFaultName(uint32_T fault);
    const char *name;
    char *out;
    int i;
    name = GetFaultName(rtb_motohawk_fault_iterator_o2);
    out = (char *) localB->s227_motohawk_fault_name;
    i = 0;
    if (name) {
      while ((i < 26) && name[i]) {
        out[i] = name[i];
        i++;
      }
    }

    while (i < 27) {
      out[i] = 0;
      i++;
    }
  }

  /* Update for UnitDelay: '<S227>/Unit Delay' */
  localDW->s227_UnitDelay_DSTATE = rtb_motohawk_fault_iterator_o2;
}

/* Initial conditions for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Init(void)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S213>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S213>/Fault Iterator'
   */
  BuckyWagon_01_DWork.s226_is_Fault = 0U;
  BuckyWagon_01_DWork.s226_is_active_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s226_mode = 0U;
  for (i = 0; i < 10; i++) {
    BuckyWagon_01_B.s226_text[i] = 0U;
  }

  BuckyWagon_01_B.s226_minTimer = 0U;
  BuckyWagon_01_B.s226_scrollIndex = 0U;
  BuckyWagon_01_B.s226_scrollTimer = 0U;

  /* InitializeConditions for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_f_Init(&BuckyWagon_01_B.s11_sf_Chart,
    &BuckyWagon_01_DWork.s11_sf_Chart);
}

/* Start for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Start(void)
{
  /* Start for Stateflow: '<S213>/Chart' incorporates:
   *  Start for SubSystem: '<S213>/Fault Iterator'
   */

  /* Start for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_h_Start(&BuckyWagon_01_B.s11_sf_Chart,
    &BuckyWagon_01_DWork.s11_sf_Chart);
}

/* Output and update for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay(void)
{
  /* local block i/o variables */
  boolean_T rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[7];
  boolean_T eml_guard;
  uint8_T rtb_UnitDelay_j[27];
  real_T rtb_Gain6;
  real_T rtb_Saturation14;
  real_T rtb_faultNameLength;
  int32_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;

  /* Outputs for enable SubSystem: '<S11>/Enabled Subsystem2' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s244_upasserted,
    BuckyWagon_01_B.s244_upcount, &BuckyWagon_01_B.s11_EnabledSubsystem2);

  /* end of Outputs for SubSystem: '<S11>/Enabled Subsystem2' */

  /* Outputs for enable SubSystem: '<S11>/Enabled Subsystem1' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s229_menuasserted,
    BuckyWagon_01_B.s229_menucount, &BuckyWagon_01_B.s11_EnabledSubsystem1);

  /* end of Outputs for SubSystem: '<S11>/Enabled Subsystem1' */

  /* Outputs for enable SubSystem: '<S11>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S205>/Enable'
   */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s220_downasserted,
    BuckyWagon_01_B.s220_downcount, &BuckyWagon_01_B.s11_EnabledSubsystem);

  /* end of Outputs for SubSystem: '<S11>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read1' */
  BuckyWagon_01_B.s11_motohawk_data_read1 = listIndex_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read3' */
  BuckyWagon_01_B.s11_motohawk_data_read3 = singleIndex_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read2' */
  BuckyWagon_01_B.s11_motohawk_data_read2[0] = dualIndex_DataStore()[0];
  BuckyWagon_01_B.s11_motohawk_data_read2[1] = dualIndex_DataStore()[1];

  /* S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read' */
  BuckyWagon_01_B.s11_motohawk_data_read[0] = quadIndex_DataStore()[0];
  BuckyWagon_01_B.s11_motohawk_data_read[1] = quadIndex_DataStore()[1];
  BuckyWagon_01_B.s11_motohawk_data_read[2] = quadIndex_DataStore()[2];
  BuckyWagon_01_B.s11_motohawk_data_read[3] = quadIndex_DataStore()[3];

  /* S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read4' */
  BuckyWagon_01_B.s11_motohawk_data_read4 = screen_DataStore();

  /* UnitDelay: '<S213>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    rtb_UnitDelay_j[i] = BuckyWagon_01_DWork.s213_UnitDelay_DSTATE[i];
  }

  /* Embedded MATLAB: '<S213>/getStringLength' */
  /* Embedded MATLAB Function 'Foreground/MiniViewDisplay/GetFaultName/getStringLength': '<S228>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /* '<S228>:1:5' */
  rtb_faultNameLength = 1.0;
  do {
    i = 0;
    eml_guard = FALSE;
    if (rtb_UnitDelay_j[(int32_T)rtb_faultNameLength - 1] != 0) {
      /* '<S228>:1:6' */
      eml_guard = TRUE;
    } else if (rtb_faultNameLength > 27.0) {
      /* '<S228>:1:7' */
      eml_guard = TRUE;
    } else {
      i = 1;
    }

    if (eml_guard) {
      /* '<S228>:1:8' */
      rtb_faultNameLength++;
    }
  } while ((uint32_T)i == 0U);

  /* Stateflow: '<S213>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration7'
   *  SubSystem: '<S213>/Fault Iterator'
   *  UnitDelay: '<S213>/Unit Delay1'
   */
  /* Gateway: Foreground/MiniViewDisplay/GetFaultName/Chart */
  /* During: Foreground/MiniViewDisplay/GetFaultName/Chart */
  if (BuckyWagon_01_DWork.s226_is_active_c3_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/GetFaultName/Chart */
    BuckyWagon_01_DWork.s226_is_active_c3_BuckyWagon_01 = 1U;

    /* Transition: '<S226>:7' */
    /* Entry 'NoFault': '<S226>:1' */
    BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;
    for (i = 0; i < 10; i++) {
      BuckyWagon_01_B.s226_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
    }
  } else {
    switch (BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01) {
     case BuckyWagon_01_IN_Fault:
      /* During 'Fault': '<S226>:2' */
      if (!(BuckyWagon_01_DWork.s213_UnitDelay1_DSTATE &&
            (DisplayFaults_DataStore()))) {
        /* Transition: '<S226>:13' */
        /* Exit 'CheckNextFault': '<S226>:6' */
        BuckyWagon_01_DWork.s226_is_Fault = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_k;

        /* Exit 'lastWait': '<S226>:4' */
        /* Exit 'scrollText': '<S226>:3' */
        /* Exit 'scrollTextFirst': '<S226>:5' */
        /* Exit 'Fault': '<S226>:2' */
        /* Entry 'NoFault': '<S226>:1' */
        BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;
        for (i = 0; i < 10; i++) {
          BuckyWagon_01_B.s226_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
        }
      } else {
        BuckyWagon_01_B.s226_minTimer = (uint16_T)(BuckyWagon_01_B.s226_minTimer
          + 1);
        switch (BuckyWagon_01_DWork.s226_is_Fault) {
         case BuckyWagon_01_IN_CheckNextFault:
          /* During 'CheckNextFault': '<S226>:6' */
          /* Transition: '<S226>:17' */
          /* Transition: '<S226>:18' */
          /* Transition: '<S226>:14' */
          /* Exit 'CheckNextFault': '<S226>:6' */
          /* Entry 'scrollTextFirst': '<S226>:5' */
          BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_scrollTextFirst;
          BuckyWagon_01_B.s226_scrollTimer = 0U;
          BuckyWagon_01_B.s226_scrollIndex = 0U;
          BuckyWagon_01_B.s226_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s226_text[0], &rtb_UnitDelay_j[(int32_T)0],
                 ((uint8_T)(dispLength_DataStore())));
          BuckyWagon_01_B.s226_text[(int32_T)((uint8_T)(dispLength_DataStore()))]
            = 0U;
          break;

         case BuckyWagon_01_IN_lastWait:
          /* During 'lastWait': '<S226>:4' */
          if ((BuckyWagon_01_B.s226_scrollTimer > ((uint16_T)
                (lastScrollTime_DataStore()))) && (BuckyWagon_01_B.s226_minTimer
               > ((uint16_T)(minTime_DataStore())))) {
            /* Transition: '<S226>:12' */
            /* Event: '<S226>:38' */
            BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s213_FaultIterator,
              &BuckyWagon_01_DWork.s213_FaultIterator);

            /* Exit 'lastWait': '<S226>:4' */
            /* Entry 'CheckNextFault': '<S226>:6' */
            BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_CheckNextFault;
          } else {
            BuckyWagon_01_B.s226_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s226_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollText:
          /* During 'scrollText': '<S226>:3' */
          if (BuckyWagon_01_B.s226_scrollTimer >= ((uint16_T)
               (scrollTime_DataStore()))) {
            /* Transition: '<S226>:9' */
            if (rtb_faultNameLength - 2.0 >= (real_T)(((uint8_T)
                  (dispLength_DataStore())) + BuckyWagon_01_B.s226_scrollIndex))
            {
              /* Transition: '<S226>:10' */
              BuckyWagon_01_B.s226_scrollIndex = (uint8_T)
                (BuckyWagon_01_B.s226_scrollIndex + 1);

              /* Exit 'scrollText': '<S226>:3' */
              /* Entry 'scrollText': '<S226>:3' */
              BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_scrollText;
              BuckyWagon_01_B.s226_scrollTimer = 0U;
              memcpy(&BuckyWagon_01_B.s226_text[0], &rtb_UnitDelay_j[(int32_T)
                     BuckyWagon_01_B.s226_scrollIndex], ((uint8_T)
                      (dispLength_DataStore())));
              BuckyWagon_01_B.s226_text[(int32_T)((uint8_T)(dispLength_DataStore
                ()))] = 0U;
            } else {
              /* Transition: '<S226>:11' */
              /* Exit 'scrollText': '<S226>:3' */
              /* Entry 'lastWait': '<S226>:4' */
              BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_lastWait;
            }
          } else {
            BuckyWagon_01_B.s226_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s226_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollTextFirst:
          /* During 'scrollTextFirst': '<S226>:5' */
          if (BuckyWagon_01_B.s226_scrollTimer >= ((uint16_T)
               (firstScrollTime_DataStore()))) {
            /* Transition: '<S226>:16' */
            BuckyWagon_01_B.s226_scrollIndex = (uint8_T)
              (BuckyWagon_01_B.s226_scrollIndex + 1);

            /* Exit 'scrollTextFirst': '<S226>:5' */
            /* Entry 'scrollText': '<S226>:3' */
            BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_scrollText;
            BuckyWagon_01_B.s226_scrollTimer = 0U;
            memcpy(&BuckyWagon_01_B.s226_text[0], &rtb_UnitDelay_j[(int32_T)
                   BuckyWagon_01_B.s226_scrollIndex], ((uint8_T)
                    (dispLength_DataStore())));
            BuckyWagon_01_B.s226_text[(int32_T)((uint8_T)(dispLength_DataStore()))]
              = 0U;
          } else {
            BuckyWagon_01_B.s226_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s226_scrollTimer + 1);
          }
          break;

         default:
          /* Transition: '<S226>:15' */
          /* Entry 'scrollTextFirst': '<S226>:5' */
          BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_scrollTextFirst;
          BuckyWagon_01_B.s226_scrollTimer = 0U;
          BuckyWagon_01_B.s226_scrollIndex = 0U;
          BuckyWagon_01_B.s226_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s226_text[0], &rtb_UnitDelay_j[(int32_T)0],
                 ((uint8_T)(dispLength_DataStore())));
          BuckyWagon_01_B.s226_text[(int32_T)((uint8_T)(dispLength_DataStore()))]
            = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NoFault:
      /* During 'NoFault': '<S226>:1' */
      if (BuckyWagon_01_DWork.s213_UnitDelay1_DSTATE && (DisplayFaults_DataStore
           ())) {
        /* Transition: '<S226>:8' */
        /* Exit 'NoFault': '<S226>:1' */
        /* Entry 'Fault': '<S226>:2' */
        BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_Fault;
        BuckyWagon_01_B.s226_mode = !(InvertMode_DataStore());

        /* Transition: '<S226>:15' */
        /* Entry 'scrollTextFirst': '<S226>:5' */
        BuckyWagon_01_DWork.s226_is_Fault = BuckyWagon_01_IN_scrollTextFirst;
        BuckyWagon_01_B.s226_scrollTimer = 0U;
        BuckyWagon_01_B.s226_scrollIndex = 0U;
        BuckyWagon_01_B.s226_minTimer = 0U;
        memcpy(&BuckyWagon_01_B.s226_text[0], &rtb_UnitDelay_j[(int32_T)0],
               ((uint8_T)(dispLength_DataStore())));
        BuckyWagon_01_B.s226_text[(int32_T)((uint8_T)(dispLength_DataStore()))] =
          0U;
      } else {
        BuckyWagon_01_B.s226_mode = (InvertMode_DataStore());

        /* Event: '<S226>:38' */
        BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s213_FaultIterator,
          &BuckyWagon_01_DWork.s213_FaultIterator);
      }
      break;

     default:
      /* Transition: '<S226>:7' */
      /* Entry 'NoFault': '<S226>:1' */
      BuckyWagon_01_DWork.s226_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;
      for (i = 0; i < 10; i++) {
        BuckyWagon_01_B.s226_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
      }
      break;
    }
  }

  /* Gain: '<S215>/Gain3' */
  rtb_faultNameLength = 100.0 * BuckyWagon_01_B.s265_Merge;

  /* Saturate: '<S215>/Saturation' */
  rtb_faultNameLength = rt_SATURATE(rtb_faultNameLength, -32767.0, 32767.0);

  /* DataTypeConversion: '<S215>/Data Type Conversion7' */
  if (rtIsNaN(rtb_faultNameLength) || rtIsInf(rtb_faultNameLength)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(rtb_faultNameLength), 65536.0);
  }

  /* Gain: '<S215>/Gain' */
  rtb_faultNameLength = 100.0 * BuckyWagon_01_B.s135_Merge;

  /* Saturate: '<S215>/Saturation5' */
  rtb_faultNameLength = rt_SATURATE(rtb_faultNameLength, -32767.0, 32767.0);

  /* DataTypeConversion: '<S215>/Data Type Conversion1' */
  if (rtIsNaN(rtb_faultNameLength) || rtIsInf(rtb_faultNameLength)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(floor(rtb_faultNameLength), 65536.0);
  }

  /* Gain: '<S215>/Gain5' incorporates:
   *  Product: '<S215>/Product'
   */
  rtb_faultNameLength = BuckyWagon_01_B.s245_bcm_ibat *
    BuckyWagon_01_B.s245_bcm_vbat * 0.001;

  /* Gain: '<S215>/Gain6' incorporates:
   *  Product: '<S215>/Product1'
   */
  rtb_Gain6 = BuckyWagon_01_B.s362_Merge * BuckyWagon_01_B.s363_Merge *
    1.0471975511965977E-004;

  /* Gain: '<S215>/Gain7' incorporates:
   *  Product: '<S215>/Divide'
   */
  rtb_Saturation14 = rtb_faultNameLength / rtb_Gain6 * 100.0;

  /* Saturate: '<S215>/Saturation9' */
  rtb_Saturation14 = rt_SATURATE(rtb_Saturation14, 0.0, 100.0);

  /* DataTypeConversion: '<S215>/Data Type Conversion8' */
  if (rtIsNaN(rtb_Saturation14) || rtIsInf(rtb_Saturation14)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(floor(rtb_Saturation14), 65536.0);
  }

  /* Gain: '<S215>/Gain2' */
  rtb_Saturation14 = 100.0 * BuckyWagon_01_B.s9_CoolantPumpSpeed;

  /* Saturate: '<S215>/Saturation11' */
  rtb_Saturation14 = rt_SATURATE(rtb_Saturation14, -32767.0, 32767.0);

  /* DataTypeConversion: '<S215>/Data Type Conversion12' */
  if (rtIsNaN(rtb_Saturation14) || rtIsInf(rtb_Saturation14)) {
    tmp_2 = 0.0;
  } else {
    tmp_2 = fmod(floor(rtb_Saturation14), 65536.0);
  }

  /* Gain: '<S215>/Gain1' */
  rtb_Saturation14 = 1000.0 * BuckyWagon_01_B.s380_Merge;

  /* Saturate: '<S215>/Saturation12' */
  rtb_Saturation14 = rt_SATURATE(rtb_Saturation14, -32767.0, 32767.0);

  /* DataTypeConversion: '<S215>/Data Type Conversion17' */
  if (rtIsNaN(rtb_Saturation14) || rtIsInf(rtb_Saturation14)) {
    tmp_3 = 0.0;
  } else {
    tmp_3 = fmod(floor(rtb_Saturation14), 65536.0);
  }

  /* Gain: '<S215>/Gain4' */
  rtb_Saturation14 = 100.0 * BuckyWagon_01_B.s372_Merge;

  /* Saturate: '<S215>/Saturation13' */
  rtb_Saturation14 = rt_SATURATE(rtb_Saturation14, -32767.0, 32767.0);

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S215>/Data Type Conversion'
   *  DataTypeConversion: '<S215>/Data Type Conversion10'
   *  DataTypeConversion: '<S215>/Data Type Conversion11'
   *  DataTypeConversion: '<S215>/Data Type Conversion13'
   *  DataTypeConversion: '<S215>/Data Type Conversion14'
   *  DataTypeConversion: '<S215>/Data Type Conversion15'
   *  DataTypeConversion: '<S215>/Data Type Conversion16'
   *  DataTypeConversion: '<S215>/Data Type Conversion18'
   *  DataTypeConversion: '<S215>/Data Type Conversion2'
   *  DataTypeConversion: '<S215>/Data Type Conversion4'
   *  DataTypeConversion: '<S215>/Data Type Conversion5'
   *  DataTypeConversion: '<S215>/Data Type Conversion6'
   *  Saturate: '<S215>/Saturation1'
   *  Saturate: '<S215>/Saturation10'
   *  Saturate: '<S215>/Saturation14'
   *  Saturate: '<S215>/Saturation2'
   *  Saturate: '<S215>/Saturation4'
   *  Saturate: '<S215>/Saturation6'
   *  Saturate: '<S215>/Saturation7'
   *  Saturate: '<S215>/Saturation8'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[0] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  tmp = rt_SATURATE(BuckyWagon_01_B.s245_bcm_vbat, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[1] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  tmp = rt_SATURATE(BuckyWagon_01_B.s245_bcm_ibat, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[2] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[3] =
    BuckyWagon_01_ConstB.s215_DataTypeConversion3;
  tmp = rt_SATURATE(BuckyWagon_01_B.s362_Merge, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[4] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[5] = (int16_T)(tmp_0 <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp_0))) : (int32_T)(int16_T)
    (uint16_T)tmp_0);
  tmp = rt_SATURATE(BuckyWagon_01_B.s363_Merge, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[6] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  tmp = rt_SATURATE(rtb_faultNameLength, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[7] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  tmp = rt_SATURATE(rtb_Gain6, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[8] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[9] = (int16_T)(tmp_1 <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp_1))) : (int32_T)(int16_T)
    (uint16_T)tmp_1);
  tmp = rt_SATURATE(BuckyWagon_01_B.s251_Inverter_Temperature, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[10] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[11] = (int16_T)(tmp_2 <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp_2))) : (int32_T)(int16_T)
    (uint16_T)tmp_2);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[12] = (int16_T)(tmp_3 <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp_3))) : (int32_T)(int16_T)
    (uint16_T)tmp_3);
  if (rtIsNaN(rtb_Saturation14) || rtIsInf(rtb_Saturation14)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(rtb_Saturation14), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[13] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  if (rtIsNaN(BuckyWagon_01_B.s388_Merge) || rtIsInf(BuckyWagon_01_B.s388_Merge))
  {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(BuckyWagon_01_B.s388_Merge), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[14] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[15] =
    BuckyWagon_01_B.s277_Merge;
  tmp = rt_SATURATE(BuckyWagon_01_B.s9_InReverse, -32767.0, 32767.0);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[16] = (int16_T)(tmp <
    0.0 ? (int32_T)(int16_T)(-((int16_T)(uint16_T)(-tmp))) : (int32_T)(int16_T)
    (uint16_T)tmp);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[17] =
    BuckyWagon_01_B.s258_Merge;

  /* UnitDelay: '<S11>/Unit Delay' */
  eml_guard = BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;

  /* SignalConversion: '<S11>/HiddenBuf_InsertedFor_Chart_at_inport_20' */
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[0] =
    BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[1] =
    BuckyWagon_01_B.s244_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[2] =
    BuckyWagon_01_B.s244_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[3] =
    BuckyWagon_01_B.s229_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[4] =
    BuckyWagon_01_B.s229_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[5] =
    BuckyWagon_01_B.s220_downasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[6] =
    BuckyWagon_01_B.s220_downasserted;

  /* Stateflow: '<S11>/Chart' incorporates:
   *  TriggerPort: '<S197>/ input events '
   */
  BuckyWagon_01_Chart_o(rtb_HiddenBuf_InsertedFor_Chart_at_inport_20,
                        BuckyWagon_01_B.s11_EnabledSubsystem1.s205_In,
                        (startupDelay_DataStore()),
                        BuckyWagon_01_B.s11_motohawk_data_read1,
                        BuckyWagon_01_B.s11_motohawk_data_read3,
                        BuckyWagon_01_B.s11_motohawk_data_read2,
                        BuckyWagon_01_B.s11_motohawk_data_read,
                        BuckyWagon_01_B.s11_motohawk_data_read4,
                        BuckyWagon_01_ConstP.Constant8_Value,
                        BuckyWagon_01_ConstP.Constant4_Value_o, ((uint8_T)18U),
                        BuckyWagon_01_ConstP.Constant2_Value_f,
                        BuckyWagon_01_ConstP.Constant3_Value,
                        BuckyWagon_01_ConstP.Constant5_Value,
                        BuckyWagon_01_ConstP.Constant6_Value,
                        BuckyWagon_01_ConstP.Constant7_Value,
                        BuckyWagon_01_B.s226_text, BuckyWagon_01_B.s226_mode,
                        BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20,
                        ((uint8_T)0U), &BuckyWagon_01_B.s11_sf_Chart,
                        &BuckyWagon_01_DWork.s11_sf_Chart,
                        &BuckyWagon_01_PrevZCSigState.s11_sf_Chart);

  /* Update for UnitDelay: '<S213>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    BuckyWagon_01_DWork.s213_UnitDelay_DSTATE[i] =
      BuckyWagon_01_B.s213_FaultIterator.s227_motohawk_fault_name[i];
  }

  /* Update for UnitDelay: '<S213>/Unit Delay1' */
  BuckyWagon_01_DWork.s213_UnitDelay1_DSTATE =
    BuckyWagon_01_B.s213_FaultIterator.s227_motohawk_fault_iterator_o1;

  /* Update for UnitDelay: '<S11>/Unit Delay' incorporates:
   *  Logic: '<S11>/Logical Operator'
   */
  BuckyWagon_01_DWork.s11_UnitDelay_DSTATE = !eml_guard;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
