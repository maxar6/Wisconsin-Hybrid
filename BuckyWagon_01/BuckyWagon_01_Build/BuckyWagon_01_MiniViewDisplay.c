/*
 * File: BuckyWagon_01_MiniViewDisplay.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1520
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 23 14:25:32 2018
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

/* Named constants for Stateflow: '<S216>/Chart' */
#define BuckyWagon_01_IN_CheckNextFault (1U)
#define BuckyWagon_01_IN_Fault         (1U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_d (0U)
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
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW);
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01_o
  *localDW);
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
  /* Start for S-Function (fcncallgen): '<S201>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S201>/Clear Screen'
   */
}

/* Output and update for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen(void)
{
  /* S-Function (fcncallgen): '<S201>/Function-Call Generator' incorporates:
   *  SubSystem: '<S201>/Clear Screen'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S222>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S205>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S205>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Rect' */
void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y0,
  uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S205>/Function-Call Generator' incorporates:
   *  SubSystem: '<S205>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S226>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S233>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S236>/Function-Call Generator'
   *  Start for SubSystem: '<S219>/Subsystem'
   *  Start for SubSystem: '<S233>/Send Substring (page 0)'
   *  Start for SubSystem: '<S236>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S237>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S240>/Function-Call Generator'
   *  Start for SubSystem: '<S233>/Function-Call Subsystem'
   *  Start for SubSystem: '<S233>/Send Substring (page 1)'
   *  Start for SubSystem: '<S234>/Enabled Subsystem'
   *  Start for SubSystem: '<S237>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S238>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S242>/Function-Call Generator'
   *  Start for SubSystem: '<S233>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S233>/Send Substring (page 2)'
   *  Start for SubSystem: '<S235>/Enabled Subsystem'
   *  Start for SubSystem: '<S238>/Subsystem'
   */
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

  /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  S-Function (fcncallgen): '<S233>/Function-Call Generator'
   *  S-Function (fcncallgen): '<S236>/Function-Call Generator'
   *  SubSystem: '<S219>/Subsystem'
   *  SubSystem: '<S233>/Send Substring (page 0)'
   *  SubSystem: '<S236>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S243>/Send CAN Messages' */
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

  /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  SubSystem: '<S233>/Function-Call Subsystem'
   */
  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Constant: '<S239>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_lf[i] = (rtu_string_c[i] != 0);
  }

  /* End of RelationalOperator: '<S239>/Compare' */

  /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
   *  EnablePort: '<S240>/Enable'
   *  SubSystem: '<S234>/Enabled Subsystem'
   */
  /* Logic: '<S234>/Logical Operator' incorporates:
   *  Logic: '<S235>/Logical Operator'
   */
  if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf[2]
       != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
      (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
    /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
     *  S-Function (fcncallgen): '<S237>/Function-Call Generator'
     *  S-Function (fcncallgen): '<S240>/Function-Call Generator'
     *  SubSystem: '<S233>/Send Substring (page 1)'
     *  SubSystem: '<S237>/Subsystem'
     */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S244>/Send CAN Messages' */
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

    /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
     *  SubSystem: '<S233>/Function-Call Subsystem1'
     */
    /* RelationalOperator: '<S241>/Compare' incorporates:
     *  Constant: '<S241>/Constant'
     */
    for (i = 0; i < 7; i++) {
      rtb_Compare_lf[i] = (rtu_string_o[i] != 0);
    }

    /* End of RelationalOperator: '<S241>/Compare' */

    /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
     *  EnablePort: '<S242>/Enable'
     *  SubSystem: '<S235>/Enabled Subsystem'
     */
    if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf
         [2] != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
        (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
      /* S-Function (fcncallgen): '<S219>/Function-Call Generator' incorporates:
       *  S-Function (fcncallgen): '<S238>/Function-Call Generator'
       *  S-Function (fcncallgen): '<S242>/Function-Call Generator'
       *  SubSystem: '<S233>/Send Substring (page 2)'
       *  SubSystem: '<S238>/Subsystem'
       */

      /* S-Function (motohawk_sfun_send_canmsgs): '<S245>/Send CAN Messages' */
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
  }

  /* End of Logic: '<S234>/Logical Operator' */
}

/* Start for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S206>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S206>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T rtu_y,
  uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter, uint8_T
  rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor)
{
  /* S-Function (fcncallgen): '<S206>/Function-Call Generator' incorporates:
   *  SubSystem: '<S206>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S227>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S207>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S207>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Vline' */
void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T rtu_y1,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S207>/Function-Call Generator' incorporates:
   *  SubSystem: '<S207>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S228>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S204>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S204>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw HLine' */
void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S204>/Function-Call Generator' incorporates:
   *  SubSystem: '<S204>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S225>/Send CAN Messages' */
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
  /* S-Function (motohawk_sfun_data_write): '<S211>/motohawk_data_write' */
  /* Write to Data Storage as scalar: listIndex */
  {
    listIndex_DataStore() = rtu_Value;
  }
}

/* Output and update for function-call system: '<S11>/Function-Call Subsystem1' */
void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S212>/motohawk_data_write' */
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
  /* Transition: '<S200>:181' */
  localB->s200_stringNum = 0U;
  while (localB->s200_stringNum < 2) {
    /* Transition: '<S200>:182' */
    localDW->s200_oldData[localB->s200_stringNum] = (int16_T)
      (rtu_data[rtu_dualIndex[localB->s200_stringNum]] + 1);
    localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
  }

  /* Transition: '<S200>:183' */
  localDW->s200_is_Dual = BuckyWagon_01_IN_Dual_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Dual_Init': '<S200>:19' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* During 'Dual': '<S200>:20' */
  if (localDW->s200_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S200>:84' */
    localDW->s200_is_Dual = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait2;
  } else {
    switch (localDW->s200_is_Dual) {
     case BuckyWagon_01_IN_Dual_Init:
      /* During 'Dual_Init': '<S200>:19' */
      /* Transition: '<S200>:184' */
      localDW->s200_is_Dual = BuckyWagon_01_IN_dualNames;

      /* Entry 'dualNames': '<S200>:18' */
      localB->s200_hCenter = 1U;
      localB->s200_font = BuckyWagon_01_FONT6x8;
      localB->s200_x0 = 30U;
      localB->s200_stringNum = 0U;
      memcpy(&localB->s200_string[0], &rtu_names[10 * rtu_dualIndex[0]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s200_y0 = 20U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      memcpy(&localB->s200_string[0], &rtu_names[10 * rtu_dualIndex[1]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s200_y0 = 34U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_List_Idle:
      /* During 'List_Idle': '<S200>:1' */
      if ((localDW->s200_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s200_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S200>:186' */
        localB->s200_stringNum = 0U;
        localB->s200_font = BuckyWagon_01_FONT6x8;
        localB->s200_fillColor = BuckyWagon_01_WHITE;
        localB->s200_hCenter = 0U;
        if (localDW->s200_oldData[0] != rtu_data[rtu_dualIndex[0]]) {
          /* Transition: '<S200>:187' */
          sprintf(charPtr(&localB->s200_string[0]), "%d",
                  rtu_data[rtu_dualIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 0U;
          localB->s200_x1 = 60U;
          localB->s200_y0 = 10U;
          localB->s200_y1 = 18U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;
          localB->s200_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[0] = rtu_data[rtu_dualIndex[0]];
        } else {
          /* Transition: '<S200>:188' */
        }

        if (localDW->s200_oldData[1] != rtu_data[rtu_dualIndex[1]]) {
          /* Transition: '<S200>:190' */
          sprintf(charPtr(&localB->s200_string[0]), "%d",
                  rtu_data[rtu_dualIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 0U;
          localB->s200_x1 = 60U;
          localB->s200_y0 = 44U;
          localB->s200_y1 = 53U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;
          localB->s200_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[1] = rtu_data[rtu_dualIndex[1]];
        } else {
          /* Transition: '<S200>:73' */
        }

        /* Transition: '<S200>:67' */
        localB->s200_y0 = 55U;
        localB->s200_y1 = 63U;
        localB->s200_x0 = 0U;
        localB->s200_x1 = 63U;
        memcpy(&localB->s200_string[0], &rtu_statusTxt[0], 9);
        localB->s200_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S200>:130' */
          localB->s200_fillColor = BuckyWagon_01_BLACK;
          localB->s200_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S200>:74' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S200>:76' */
        localB->s200_y0 = 56U;
        localB->s200_font = BuckyWagon_01_FONT4x6;
        localB->s200_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S200>:72' */
        localDW->s200_timer = 0U;
        localDW->s200_is_Dual = BuckyWagon_01_IN_List_Idle;
      } else {
        if (localDW->s200_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S200>:189' */
          localDW->s200_timer = (uint16_T)(localDW->s200_timer + 1);
          localDW->s200_is_Dual = BuckyWagon_01_IN_List_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_dualNames:
      /* During 'dualNames': '<S200>:18' */
      /* Transition: '<S200>:185' */
      localDW->s200_timer = BuckyWagon_01_UPDATE_TIME;
      localDW->s200_is_Dual = BuckyWagon_01_IN_List_Idle;
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
  /* Transition: '<S200>:114' */
  localB->s200_stringNum = 0U;
  while (localB->s200_stringNum < 6) {
    /* Transition: '<S200>:112' */
    localDW->s200_oldData[localB->s200_stringNum] = (int16_T)(rtu_data
      [localB->s200_stringNum + rtu_listIndex] + 1);
    localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
  }

  /* Transition: '<S200>:109' */
  localDW->s200_is_List = BuckyWagon_01_IN_List_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'List_Init': '<S200>:8' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 63U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localB->s200_listIndexO = rtu_listIndex;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  boolean_T guard;

  /* During 'List': '<S200>:3' */
  if (localDW->s200_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S200>:55' */
    localDW->s200_is_List = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait4;
  } else {
    guard = FALSE;
    switch (localDW->s200_is_List) {
     case BuckyWagon_01_IN_List_Idle_h:
      /* During 'List_Idle': '<S200>:5' */
      if ((localDW->s200_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s200_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S200>:102' */
        localB->s200_stringNum = 0U;
        localB->s200_fillColor = BuckyWagon_01_WHITE;
        localB->s200_hCenter = 0U;
        while (localB->s200_stringNum < 6) {
          /* Transition: '<S200>:103' */
          if (rtu_data[localB->s200_stringNum + rtu_listIndex] ==
              localDW->s200_oldData[localB->s200_stringNum]) {
            /* Transition: '<S200>:105' */
            localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
          } else {
            /* Transition: '<S200>:101' */
            sprintf(charPtr(&localB->s200_string[0]), "%-4d", rtu_data
                    [localB->s200_stringNum + rtu_listIndex]);
            localB->s200_string[4] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S200>:303' */
            BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
              localB->s200_string[0], localB->s200_string[1],
              localB->s200_string[2], localB->s200_string[3],
              localB->s200_string[4], localB->s200_string[5],
              localB->s200_string[6], localB->s200_string, localB->s200_string[7],
              localB->s200_string[8], localB->s200_string[9],
              localB->s200_string[10], localB->s200_string[11],
              localB->s200_string[12], localB->s200_string[13],
              &localB->s200_string[7], localB->s200_string[14],
              localB->s200_string[15], localB->s200_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            localB->s200_x0 = 42U;
            localB->s200_x1 = 57U;
            localB->s200_y0 = (uint8_T)(localB->s200_stringNum * 7 + 12);
            localB->s200_y1 = (uint8_T)(localB->s200_y0 + 6);
            localB->s200_lineColor = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

            /* Event: '<S200>:301' */
            BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
              localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
              localB->s200_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
            localB->s200_lineColor = 1U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S200>:304' */
            BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
              localB->s200_y0, localB->s200_font, localB->s200_hCenter,
              localB->s200_vCenter, rtu_21, localB->s200_lineColor,
              localB->s200_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */
            localDW->s200_oldData[localB->s200_stringNum] = rtu_data
              [localB->s200_stringNum + rtu_listIndex];
            localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
          }
        }

        /* Transition: '<S200>:79' */
        localB->s200_y0 = 55U;
        localB->s200_y1 = 63U;
        localB->s200_x0 = 0U;
        localB->s200_x1 = 63U;
        memcpy(&localB->s200_string[0], &rtu_statusTxt[0], 9);
        localB->s200_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S200>:78' */
          localB->s200_fillColor = BuckyWagon_01_BLACK;
          localB->s200_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S200>:80' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S200>:100' */
        localB->s200_y0 = 56U;
        localB->s200_font = BuckyWagon_01_FONT4x6;
        localB->s200_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S200>:92' */
        localDW->s200_timer = 0U;
        localDW->s200_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S200>:5' */
        localB->s200_stringNum = 0U;
      } else if (localDW->s200_sfEvent == BuckyWagon_01_event_tick) {
        /* Transition: '<S200>:91' */
        localDW->s200_timer = (uint16_T)(localDW->s200_timer + 1);
        localDW->s200_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S200>:5' */
        localB->s200_stringNum = 0U;
      } else if (localDW->s200_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S200>:94' */
        if (rtu_listIndex == 0) {
          /* Transition: '<S200>:93' */
          localDW->s200_is_List = BuckyWagon_01_IN_List_Idle_h;

          /* Entry 'List_Idle': '<S200>:5' */
          localB->s200_stringNum = 0U;
        } else {
          /* Transition: '<S200>:95' */
          localB->s200_listIndexO = (uint8_T)(rtu_listIndex - 1);

          /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

          /* Event: '<S200>:313' */
          BuckyWagon_01_FunctionCallSubsystem(localB->s200_listIndexO);

          /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
          guard = TRUE;
        }
      } else {
        if (localDW->s200_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S200>:97' */
          if (rtu_numFields - 6 == rtu_listIndex) {
            /* Transition: '<S200>:99' */
            localDW->s200_is_List = BuckyWagon_01_IN_List_Idle_h;

            /* Entry 'List_Idle': '<S200>:5' */
            localB->s200_stringNum = 0U;
          } else {
            /* Transition: '<S200>:98' */
            localB->s200_listIndexO = (uint8_T)(rtu_listIndex + 1);

            /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

            /* Event: '<S200>:313' */
            BuckyWagon_01_FunctionCallSubsystem(localB->s200_listIndexO);

            /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_List_Init:
      /* During 'List_Init': '<S200>:8' */
      /* Transition: '<S200>:96' */
      /* Transition: '<S200>:104' */
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:106' */
        memcpy(&localB->s200_string[0], &rtu_names[10 * (localB->s200_listIndexO
                + localB->s200_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      }

      /* Transition: '<S200>:108' */
      localDW->s200_is_List = BuckyWagon_01_IN_List_Wait;
      break;

     case BuckyWagon_01_IN_List_Wait:
      /* During 'List_Wait': '<S200>:2' */
      /* Transition: '<S200>:111' */
      localB->s200_x0 = 9U;
      localB->s200_y0 = 12U;
      localB->s200_x1 = 41U;
      localB->s200_y1 = 53U;
      localB->s200_lineColor = 0U;
      localB->s200_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S200>:301' */
      BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1, localB->s200_y0,
        localB->s200_y1, localB->s200_lineColor, localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s200_lineColor = 1U;
      localB->s200_hCenter = 0U;
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:113' */
        localB->s200_y0 = (uint8_T)(localB->s200_stringNum * 7 + 12);

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      }

      /* Transition: '<S200>:110' */
      localDW->s200_is_List = BuckyWagon_01_IN_List_Wait2;
      break;

     case BuckyWagon_01_IN_List_Wait2:
      /* During 'List_Wait2': '<S200>:4' */
      /* Transition: '<S200>:107' */
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:103' */
        if (rtu_data[localB->s200_stringNum + rtu_listIndex] ==
            localDW->s200_oldData[localB->s200_stringNum]) {
          /* Transition: '<S200>:105' */
          localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
        } else {
          /* Transition: '<S200>:101' */
          sprintf(charPtr(&localB->s200_string[0]), "%-4d", rtu_data
                  [localB->s200_stringNum + rtu_listIndex]);
          localB->s200_string[4] = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 42U;
          localB->s200_x1 = 57U;
          localB->s200_y0 = (uint8_T)(localB->s200_stringNum * 7 + 12);
          localB->s200_y1 = (uint8_T)(localB->s200_y0 + 6);
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[localB->s200_stringNum] = rtu_data
            [localB->s200_stringNum + rtu_listIndex];
          localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
        }
      }

      /* Transition: '<S200>:79' */
      localB->s200_y0 = 55U;
      localB->s200_y1 = 63U;
      localB->s200_x0 = 0U;
      localB->s200_x1 = 63U;
      memcpy(&localB->s200_string[0], &rtu_statusTxt[0], 9);
      localB->s200_string[9] = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      if (rtu_statusTxtMode == 1) {
        /* Transition: '<S200>:78' */
        localB->s200_fillColor = BuckyWagon_01_BLACK;
        localB->s200_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S200>:301' */
        BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1, localB->s200_y0,
          localB->s200_y1, localB->s200_lineColor, localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s200_lineColor = BuckyWagon_01_WHITE;
      } else {
        /* Transition: '<S200>:80' */
        localB->s200_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S200>:301' */
        BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1, localB->s200_y0,
          localB->s200_y1, localB->s200_lineColor, localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s200_lineColor = BuckyWagon_01_BLACK;
      }

      /* Transition: '<S200>:100' */
      localB->s200_y0 = 56U;
      localB->s200_font = BuckyWagon_01_FONT4x6;
      localB->s200_x0 = 17U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */

      /* Transition: '<S200>:92' */
      localDW->s200_timer = 0U;
      localDW->s200_is_List = BuckyWagon_01_IN_List_Idle_h;

      /* Entry 'List_Idle': '<S200>:5' */
      localB->s200_stringNum = 0U;
      break;

     default:
      BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }

    if (guard) {
      /* Transition: '<S200>:104' */
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:106' */
        memcpy(&localB->s200_string[0], &rtu_names[10 * (localB->s200_listIndexO
                + localB->s200_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      }

      /* Transition: '<S200>:108' */
      localDW->s200_is_List = BuckyWagon_01_IN_List_Wait;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S200>:166' */
  localB->s200_stringNum = 0U;
  while (localB->s200_stringNum < 4) {
    /* Transition: '<S200>:168' */
    localDW->s200_oldData[localB->s200_stringNum] = (int16_T)
      (rtu_data[rtu_quadIndex[localB->s200_stringNum]] + 1);
    localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
  }

  /* Transition: '<S200>:169' */
  localDW->s200_is_Quad = BuckyWagon_01_IN_Quad_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Quad_Init': '<S200>:22' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 8U;
  localB->s200_y1 = 54U;
  localB->s200_x0 = 30U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

  /* Event: '<S200>:305' */
  BuckyWagon_01_DrawVline(localB->s200_x0, localB->s200_y0, localB->s200_y1,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Transition: '<S200>:71' */
  localDW->s200_is_Single = BuckyWagon_01_IN_Single_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Single_Init': '<S200>:7' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localDW->s200_oldData[0] = (int16_T)(rtu_data[rtu_singleIndex] + 1);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *
  localDW)
{
  /* During 'Quad': '<S200>:24' */
  if (localDW->s200_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S200>:85' */
    localDW->s200_is_Quad = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait1;
  } else {
    switch (localDW->s200_is_Quad) {
     case BuckyWagon_01_IN_Quad_Idle:
      /* During 'Quad_Idle': '<S200>:21' */
      if ((localDW->s200_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s200_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S200>:170' */
        localB->s200_stringNum = 0U;
        localB->s200_font = BuckyWagon_01_FONT6x8;
        localB->s200_fillColor = BuckyWagon_01_WHITE;
        localB->s200_hCenter = 0U;
        if (localDW->s200_oldData[0] != rtu_data[rtu_quadIndex[0]]) {
          /* Transition: '<S200>:171' */
          sprintf(charPtr(&localB->s200_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 5U;
          localB->s200_x1 = 29U;
          localB->s200_y0 = 23U;
          localB->s200_y1 = 30U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[0] = rtu_data[rtu_quadIndex[0]];
        } else {
          /* Transition: '<S200>:172' */
        }

        if (localDW->s200_oldData[1] != rtu_data[rtu_quadIndex[1]]) {
          /* Transition: '<S200>:174' */
          sprintf(charPtr(&localB->s200_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 32U;
          localB->s200_x1 = 55U;
          localB->s200_y0 = 23U;
          localB->s200_y1 = 30U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[1] = rtu_data[rtu_quadIndex[1]];
        } else {
          /* Transition: '<S200>:175' */
        }

        if (localDW->s200_oldData[2] != rtu_data[rtu_quadIndex[2]]) {
          /* Transition: '<S200>:176' */
          sprintf(charPtr(&localB->s200_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[2]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 5U;
          localB->s200_x1 = 29U;
          localB->s200_y0 = 33U;
          localB->s200_y1 = 40U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[2] = rtu_data[rtu_quadIndex[2]];
        } else {
          /* Transition: '<S200>:177' */
        }

        if (localDW->s200_oldData[3] != rtu_data[rtu_quadIndex[3]]) {
          /* Transition: '<S200>:179' */
          sprintf(charPtr(&localB->s200_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[3]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_x0 = 32U;
          localB->s200_x1 = 55U;
          localB->s200_y0 = 33U;
          localB->s200_y1 = 40U;
          localB->s200_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s200_oldData[3] = rtu_data[rtu_quadIndex[3]];
        } else {
          /* Transition: '<S200>:180' */
        }

        /* Transition: '<S200>:133' */
        localB->s200_y0 = 55U;
        localB->s200_y1 = 63U;
        localB->s200_x0 = 0U;
        localB->s200_x1 = 63U;
        memcpy(&localB->s200_string[0], &rtu_statusTxt[0], 9);
        localB->s200_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S200>:134' */
          localB->s200_fillColor = BuckyWagon_01_BLACK;
          localB->s200_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S200>:132' */
          localB->s200_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S200>:301' */
          BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
            localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s200_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S200>:131' */
        localB->s200_y0 = 56U;
        localB->s200_font = BuckyWagon_01_FONT4x6;
        localB->s200_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S200>:178' */
        localDW->s200_timer = 0U;
        localDW->s200_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      } else {
        if (localDW->s200_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S200>:173' */
          localDW->s200_timer = (uint16_T)(localDW->s200_timer + 1);
          localDW->s200_is_Quad = BuckyWagon_01_IN_Quad_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_Quad_Init:
      /* During 'Quad_Init': '<S200>:22' */
      /* Transition: '<S200>:165' */
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 4) {
        /* Transition: '<S200>:163' */
        memcpy(&localB->s200_string[0], &rtu_namesline1[7 * rtu_quadIndex
               [localB->s200_stringNum]], 7);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        memcpy(&localB->s200_string[0], &rtu_namesline2[7 * rtu_quadIndex
               [localB->s200_stringNum]], 7);
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 4);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum - 3);
      }

      /* Transition: '<S200>:164' */
      localDW->s200_is_Quad = BuckyWagon_01_IN_Quad_Names;

      /* Entry 'Quad_Names': '<S200>:23' */
      localB->s200_hCenter = 0U;
      localB->s200_x0 = 10U;
      localB->s200_y0 = 10U;
      localB->s200_stringNum = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_x0 = 5U;
      localB->s200_y0 = 16U;
      localB->s200_stringNum = 4U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_y0 = 41U;
      localB->s200_stringNum = 2U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_x0 = 10U;
      localB->s200_y0 = 47U;
      localB->s200_stringNum = 6U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_x0 = 32U;
      localB->s200_y0 = 10U;
      localB->s200_stringNum = 1U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_y0 = 16U;
      localB->s200_stringNum = 5U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_y0 = 41U;
      localB->s200_stringNum = 3U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s200_y0 = 47U;
      localB->s200_stringNum = 7U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S200>:304' */
      BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
        localB->s200_y0, localB->s200_font, localB->s200_hCenter,
        localB->s200_vCenter, rtu_21, localB->s200_lineColor,
        localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_Quad_Names:
      /* During 'Quad_Names': '<S200>:23' */
      /* Transition: '<S200>:167' */
      localDW->s200_timer = BuckyWagon_01_UPDATE_TIME;
      localB->s200_font = BuckyWagon_01_FONT6x8;
      localDW->s200_is_Quad = BuckyWagon_01_IN_Quad_Idle;
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
  /* Transition: '<S200>:146' */
  localDW->s200_is_select_var = BuckyWagon_01_IN_Select_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Select_Init': '<S200>:33' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 63U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s200_selectIndex = 0U;
  localDW->s200_selectVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Graphical Function 'storeSelect': '<S200>:25' */
  /* Transition: '<S200>:160' */
  if (localDW->s200_setupIndex == 1) {
    /* Transition: '<S200>:159' */
    localB->s200_singleIndexO = localDW->s200_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem2' */

    /* Event: '<S200>:316' */

    /* S-Function (motohawk_sfun_data_write): '<S213>/motohawk_data_write' */
    /* Write to Data Storage as scalar: singleIndex */
    {
      singleIndex_DataStore() = localB->s200_singleIndexO;
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem2' */
  } else if ((localDW->s200_setupIndex == 2) || (localDW->s200_setupIndex == 3))
  {
    /* Transition: '<S200>:161' */
    localB->s200_dualIndexO[0] = rtu_dualIndex[0];
    localB->s200_dualIndexO[1] = rtu_dualIndex[1];
    localB->s200_dualIndexO[localDW->s200_setupIndex - 2] =
      localDW->s200_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem3' */

    /* Event: '<S200>:315' */

    /* S-Function (motohawk_sfun_data_write): '<S214>/motohawk_data_write' */
    /* Write to Data Storage as vector: dualIndex */
    {
      dualIndex_DataStore()[0] = localB->s200_dualIndexO[0];
      dualIndex_DataStore()[1] = localB->s200_dualIndexO[1];
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem3' */
  } else {
    if (localDW->s200_setupIndex >= 4) {
      /* Transition: '<S200>:162' */
      localB->s200_quadIndexO[0] = rtu_quadIndex[0];
      localB->s200_quadIndexO[1] = rtu_quadIndex[1];
      localB->s200_quadIndexO[2] = rtu_quadIndex[2];
      localB->s200_quadIndexO[3] = rtu_quadIndex[3];
      localB->s200_quadIndexO[localDW->s200_setupIndex - 4] =
        localDW->s200_selectIndex;

      /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem4' */

      /* Event: '<S200>:317' */

      /* S-Function (motohawk_sfun_data_write): '<S215>/motohawk_data_write' */
      /* Write to Data Storage as vector: quadIndex */
      {
        quadIndex_DataStore()[0] = localB->s200_quadIndexO[0];
        quadIndex_DataStore()[1] = localB->s200_quadIndexO[1];
        quadIndex_DataStore()[2] = localB->s200_quadIndexO[2];
        quadIndex_DataStore()[3] = localB->s200_quadIndexO[3];
      }

      /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem4' */
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Setup_Init': '<S200>:16' */
  /* Event: '<S200>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s200_stringNum = 15U;
  sprintf(charPtr(&localB->s200_string[0]), "UWMAD");
  localB->s200_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S200>:303' */
  BuckyWagon_01_SendString_efficient(localB->s200_stringNum, localB->
    s200_string[0], localB->s200_string[1], localB->s200_string[2],
    localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
    localB->s200_string[6], localB->s200_string, localB->s200_string[7],
    localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
    localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
    &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
    localB->s200_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s200_y0 = 8U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 63U;
  localB->s200_lineColor = BuckyWagon_01_BLACK;
  localB->s200_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S200>:306' */
  BuckyWagon_01_DrawHLine(localB->s200_x0, localB->s200_x1, localB->s200_y0,
    localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s200_hCenter = 1U;
  localB->s200_vCenter = 0U;
  localB->s200_font = BuckyWagon_01_FONT4x6;
  localB->s200_x0 = 32U;
  localB->s200_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S200>:304' */
  BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
    localB->s200_y0, localB->s200_font, localB->s200_hCenter,
    localB->s200_vCenter, rtu_21, localB->s200_lineColor, localB->s200_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s200_setupVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01_o
  *localDW)
{
  /* Graphical Function 'loadSelect': '<S200>:26' */
  /* Transition: '<S200>:156' */
  if (localDW->s200_setupIndex == 1) {
    /* Transition: '<S200>:155' */
    localDW->s200_selectIndex = rtu_singleIndex;
  } else if ((localDW->s200_setupIndex == 2) || (localDW->s200_setupIndex == 3))
  {
    /* Transition: '<S200>:157' */
    localDW->s200_selectIndex = rtu_dualIndex[localDW->s200_setupIndex - 2];
  } else {
    if (localDW->s200_setupIndex >= 4) {
      /* Transition: '<S200>:158' */
      localDW->s200_selectIndex = rtu_quadIndex[localDW->s200_setupIndex - 4];
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01_n *localB, rtDW_Chart_BuckyWagon_01_o *localDW)
{
  boolean_T guard;
  boolean_T guard_0;

  /* During 'Setup': '<S200>:13' */
  guard = FALSE;
  guard_0 = FALSE;
  switch (localDW->s200_is_Setup) {
   case BuckyWagon_01_IN_Setup_Init:
    /* During 'Setup_Init': '<S200>:16' */
    /* Transition: '<S200>:59' */
    if (localDW->s200_setupIndex >= localDW->s200_setupVIndex + 6) {
      /* Transition: '<S200>:53' */
      localDW->s200_setupVIndex = (uint8_T)(localDW->s200_setupIndex - 5);
      localB->s200_stringNum = 0U;
    } else if (localDW->s200_setupIndex < localDW->s200_setupVIndex) {
      /* Transition: '<S200>:52' */
      localDW->s200_setupVIndex = localDW->s200_setupIndex;
      localB->s200_stringNum = 0U;
    } else {
      /* Transition: '<S200>:54' */
      localB->s200_stringNum = 0U;
    }

    while (localB->s200_stringNum < 6) {
      /* Transition: '<S200>:46' */
      memcpy(&localB->s200_string[0], &rtu_setupNames[13 *
             (localDW->s200_setupVIndex + localB->s200_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
    }

    /* Transition: '<S200>:50' */
    localDW->s200_is_Setup = BuckyWagon_01_IN_setup_Wait;
    break;

   case BuckyWagon_01_IN_select_var:
    /* During 'select_var': '<S200>:30' */
    switch (localDW->s200_is_select_var) {
     case BuckyWagon_01_IN_Select_Init:
      /* During 'Select_Init': '<S200>:33' */
      /* Transition: '<S200>:150' */
      if (localDW->s200_selectIndex >= localDW->s200_selectVIndex + 6) {
        /* Transition: '<S200>:144' */
        localDW->s200_selectVIndex = (uint8_T)(localDW->s200_selectIndex - 5);
        localB->s200_stringNum = 0U;
      } else if (localDW->s200_selectIndex < localDW->s200_selectVIndex) {
        /* Transition: '<S200>:143' */
        localDW->s200_selectVIndex = localDW->s200_selectIndex;
        localB->s200_stringNum = 0U;
      } else {
        /* Transition: '<S200>:145' */
        localB->s200_stringNum = 0U;
      }

      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:137' */
        memcpy(&localB->s200_string[0], &rtu_names[10 *
               (localDW->s200_selectVIndex + localB->s200_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S200>:303' */
        BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
          localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
          localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
          localB->s200_string[6], localB->s200_string, localB->s200_string[7],
          localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
          localB->s200_string[11], localB->s200_string[12], localB->s200_string
          [13], &localB->s200_string[7], localB->s200_string[14],
          localB->s200_string[15], localB->s200_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      }

      /* Transition: '<S200>:141' */
      localDW->s200_is_select_var = BuckyWagon_01_IN_select_Wait;
      break;

     case BuckyWagon_01_IN_select_Idle:
      /* During 'select_Idle': '<S200>:32' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S200>:154' */
        BuckyWagon_01_storeSelect(rtu_dualIndex, rtu_quadIndex, localB, localDW);
        localDW->s200_is_select_var = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s200_is_Setup = BuckyWagon_01_IN_Setup_Init;
        BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
      } else if (localDW->s200_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S200>:152' */
        if (localDW->s200_selectIndex == 0) {
          /* Transition: '<S200>:153' */
          localDW->s200_is_select_var = BuckyWagon_01_IN_select_Idle;
        } else {
          /* Transition: '<S200>:151' */
          localDW->s200_selectIndex = (uint8_T)(localDW->s200_selectIndex - 1);
          guard = TRUE;
        }
      } else {
        if (localDW->s200_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S200>:149' */
          if (rtu_numFields - 1 == localDW->s200_selectIndex) {
            /* Transition: '<S200>:147' */
            localDW->s200_is_select_var = BuckyWagon_01_IN_select_Idle;
          } else {
            /* Transition: '<S200>:148' */
            localDW->s200_selectIndex = (uint8_T)(localDW->s200_selectIndex + 1);
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_select_Wait:
      /* During 'select_Wait': '<S200>:31' */
      /* Transition: '<S200>:139' */
      localB->s200_x0 = 0U;
      localB->s200_y0 = 12U;
      localB->s200_x1 = 64U;
      localB->s200_y1 = 53U;
      localB->s200_lineColor = 0U;
      localB->s200_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S200>:301' */
      BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1, localB->s200_y0,
        localB->s200_y1, localB->s200_lineColor, localB->s200_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s200_lineColor = 1U;
      localB->s200_hCenter = 1U;
      localB->s200_stringNum = 0U;
      while (localB->s200_stringNum < 6) {
        /* Transition: '<S200>:136' */
        localB->s200_y0 = (uint8_T)(localB->s200_stringNum * 7 + 12);
        if (localDW->s200_selectVIndex + localB->s200_stringNum ==
            localDW->s200_selectIndex) {
          /* Transition: '<S200>:138' */
          localB->s200_fillColor = BuckyWagon_01_BLACK;
          localB->s200_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
        } else {
          /* Transition: '<S200>:140' */
          localB->s200_fillColor = BuckyWagon_01_WHITE;
          localB->s200_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
        }
      }

      /* Transition: '<S200>:142' */
      localDW->s200_is_select_var = BuckyWagon_01_IN_select_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      break;
    }
    break;

   case BuckyWagon_01_IN_setup_Idle:
    /* During 'setup_Idle': '<S200>:15' */
    if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S200>:66' */
      if (localDW->s200_setupIndex == 0) {
        /* Transition: '<S200>:65' */
        if (rtu_screen == 1) {
          /* Transition: '<S200>:36' */
          localDW->s200_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S200>:42' */
          localDW->s200_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S200>:38' */
          localDW->s200_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S200>:41' */
          localDW->s200_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        /* Transition: '<S200>:69' */
        BuckyWagon_01_loadSelect(rtu_singleIndex, rtu_dualIndex, rtu_quadIndex,
          localDW);
        localDW->s200_is_Setup = BuckyWagon_01_IN_select_var;
        BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      }
    } else if (localDW->s200_sfEvent == BuckyWagon_01_event_upPressed) {
      /* Transition: '<S200>:61' */
      if (localDW->s200_setupIndex == 0) {
        /* Transition: '<S200>:62' */
        localDW->s200_is_Setup = BuckyWagon_01_IN_setup_Idle;

        /* Entry 'setup_Idle': '<S200>:15' */
        localB->s200_stringNum = 0U;
      } else {
        /* Transition: '<S200>:60' */
        localDW->s200_setupIndex = (uint8_T)(localDW->s200_setupIndex - 1);
        guard_0 = TRUE;
      }
    } else {
      if (localDW->s200_sfEvent == BuckyWagon_01_event_downPressed) {
        /* Transition: '<S200>:58' */
        if (localDW->s200_setupIndex == 7) {
          /* Transition: '<S200>:56' */
          localDW->s200_is_Setup = BuckyWagon_01_IN_setup_Idle;

          /* Entry 'setup_Idle': '<S200>:15' */
          localB->s200_stringNum = 0U;
        } else {
          /* Transition: '<S200>:57' */
          localDW->s200_setupIndex = (uint8_T)(localDW->s200_setupIndex + 1);
          guard_0 = TRUE;
        }
      }
    }
    break;

   case BuckyWagon_01_IN_setup_Wait:
    /* During 'setup_Wait': '<S200>:14' */
    /* Transition: '<S200>:48' */
    localB->s200_x0 = 0U;
    localB->s200_y0 = 12U;
    localB->s200_x1 = 64U;
    localB->s200_y1 = 53U;
    localB->s200_lineColor = 0U;
    localB->s200_fillColor = 0U;

    /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

    /* Event: '<S200>:301' */
    BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1, localB->s200_y0,
      localB->s200_y1, localB->s200_lineColor, localB->s200_fillColor);

    /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
    localB->s200_lineColor = 1U;
    localB->s200_hCenter = 1U;
    localB->s200_stringNum = 0U;
    while (localB->s200_stringNum < 6) {
      /* Transition: '<S200>:45' */
      localB->s200_y0 = (uint8_T)(localB->s200_stringNum * 7 + 12);
      if (localDW->s200_setupVIndex + localB->s200_stringNum ==
          localDW->s200_setupIndex) {
        /* Transition: '<S200>:47' */
        localB->s200_fillColor = BuckyWagon_01_BLACK;
        localB->s200_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      } else {
        /* Transition: '<S200>:49' */
        localB->s200_fillColor = BuckyWagon_01_WHITE;
        localB->s200_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S200>:304' */
        BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
          localB->s200_y0, localB->s200_font, localB->s200_hCenter,
          localB->s200_vCenter, rtu_21, localB->s200_lineColor,
          localB->s200_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
      }
    }

    /* Transition: '<S200>:51' */
    localDW->s200_is_Setup = BuckyWagon_01_IN_setup_Idle;

    /* Entry 'setup_Idle': '<S200>:15' */
    localB->s200_stringNum = 0U;
    break;

   case BuckyWagon_01_IN_wait:
    /* During 'wait': '<S200>:11' */
    if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S200>:81' */
      localDW->s200_is_Setup = BuckyWagon_01_IN_Setup_Init;
      BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
    }
    break;

   default:
    /* Transition: '<S200>:82' */
    localDW->s200_is_Setup = BuckyWagon_01_IN_wait;

    /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

    /* Entry 'wait': '<S200>:11' */
    /* Event: '<S200>:300' */
    BuckyWagon_01_ClearScreen();

    /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
    localDW->s200_setupIndex = 0U;
    break;
  }

  if (guard_0) {
    if (localDW->s200_setupIndex >= localDW->s200_setupVIndex + 6) {
      /* Transition: '<S200>:53' */
      localDW->s200_setupVIndex = (uint8_T)(localDW->s200_setupIndex - 5);
      localB->s200_stringNum = 0U;
    } else if (localDW->s200_setupIndex < localDW->s200_setupVIndex) {
      /* Transition: '<S200>:52' */
      localDW->s200_setupVIndex = localDW->s200_setupIndex;
      localB->s200_stringNum = 0U;
    } else {
      /* Transition: '<S200>:54' */
      localB->s200_stringNum = 0U;
    }

    while (localB->s200_stringNum < 6) {
      /* Transition: '<S200>:46' */
      memcpy(&localB->s200_string[0], &rtu_setupNames[13 *
             (localDW->s200_setupVIndex + localB->s200_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
    }

    /* Transition: '<S200>:50' */
    localDW->s200_is_Setup = BuckyWagon_01_IN_setup_Wait;
  }

  if (guard) {
    if (localDW->s200_selectIndex >= localDW->s200_selectVIndex + 6) {
      /* Transition: '<S200>:144' */
      localDW->s200_selectVIndex = (uint8_T)(localDW->s200_selectIndex - 5);
      localB->s200_stringNum = 0U;
    } else if (localDW->s200_selectIndex < localDW->s200_selectVIndex) {
      /* Transition: '<S200>:143' */
      localDW->s200_selectVIndex = localDW->s200_selectIndex;
      localB->s200_stringNum = 0U;
    } else {
      /* Transition: '<S200>:145' */
      localB->s200_stringNum = 0U;
    }

    while (localB->s200_stringNum < 6) {
      /* Transition: '<S200>:137' */
      memcpy(&localB->s200_string[0], &rtu_names[10 *
             (localDW->s200_selectVIndex + localB->s200_stringNum)], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S200>:303' */
      BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
        localB->s200_string[0], localB->s200_string[1], localB->s200_string[2],
        localB->s200_string[3], localB->s200_string[4], localB->s200_string[5],
        localB->s200_string[6], localB->s200_string, localB->s200_string[7],
        localB->s200_string[8], localB->s200_string[9], localB->s200_string[10],
        localB->s200_string[11], localB->s200_string[12], localB->s200_string[13],
        &localB->s200_string[7], localB->s200_string[14], localB->s200_string[15],
        localB->s200_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s200_stringNum = (uint8_T)(localB->s200_stringNum + 1);
    }

    /* Transition: '<S200>:141' */
    localDW->s200_is_select_var = BuckyWagon_01_IN_select_Wait;
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
  int32_T temp;

  /* During: Foreground/MiniViewDisplay/Chart */
  if (localDW->s200_is_active_c2_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/Chart */
    localDW->s200_is_active_c2_BuckyWagon_01 = 1U;

    /* Transition: '<S200>:43' */
    localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

    /* Entry 'PowerupDelay': '<S200>:9' */
    localDW->s200_timer = 0U;
  } else {
    switch (localDW->s200_is_c2_BuckyWagon_01) {
     case BuckyWagon_01_IN_Dual:
      BuckyWagon_01_Dual(rtu_dualIndex, rtu_names, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_List:
      BuckyWagon_01_List(rtu_listIndex, rtu_names, rtu_numFields, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_PowerupDelay:
      /* During 'PowerupDelay': '<S200>:9' */
      if (localDW->s200_timer >= rtu_startupDelay) {
        /* Transition: '<S200>:40' */
        if (rtu_screen == 1) {
          /* Transition: '<S200>:36' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S200>:42' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S200>:38' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S200>:41' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        localDW->s200_timer = (uint16_T)(localDW->s200_timer + 1);
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
      /* During 'Single': '<S200>:12' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuPressed) {
        /* Transition: '<S200>:83' */
        localDW->s200_is_Single = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait3;
      } else {
        switch (localDW->s200_is_Single) {
         case BuckyWagon_01_IN_List_Idle_h:
          /* During 'List_Idle': '<S200>:10' */
          if ((localDW->s200_sfEvent == BuckyWagon_01_event_tick) &&
              (localDW->s200_timer >= BuckyWagon_01_UPDATE_TIME)) {
            /* Transition: '<S200>:123' */
            localB->s200_stringNum = 0U;
            localB->s200_font = BuckyWagon_01_FONT8x15;
            localB->s200_fillColor = BuckyWagon_01_WHITE;
            localB->s200_hCenter = 0U;
            if (localDW->s200_oldData[0] != rtu_data[rtu_singleIndex]) {
              /* Transition: '<S200>:126' */
              sprintf(charPtr(&localB->s200_string[0]), "%4d",
                      rtu_data[rtu_singleIndex]);

              /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

              /* Event: '<S200>:303' */
              BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
                localB->s200_string[0], localB->s200_string[1],
                localB->s200_string[2], localB->s200_string[3],
                localB->s200_string[4], localB->s200_string[5],
                localB->s200_string[6], localB->s200_string, localB->
                s200_string[7], localB->s200_string[8], localB->s200_string[9],
                localB->s200_string[10], localB->s200_string[11],
                localB->s200_string[12], localB->s200_string[13],
                &localB->s200_string[7], localB->s200_string[14],
                localB->s200_string[15], localB->s200_string[16]);

              /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
              localB->s200_x0 = 0U;
              localB->s200_x1 = 64U;
              localB->s200_y0 = 25U;
              localB->s200_y1 = 39U;
              localB->s200_fillColor = BuckyWagon_01_WHITE;
              localB->s200_lineColor = 0U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S200>:301' */
              BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                localB->s200_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s200_lineColor = BuckyWagon_01_BLACK;
              localB->s200_x0 = 15U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

              /* Event: '<S200>:304' */
              BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
                localB->s200_y0, localB->s200_font, localB->s200_hCenter,
                localB->s200_vCenter, rtu_21, localB->s200_lineColor,
                localB->s200_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw String' */
              localDW->s200_oldData[0] = rtu_data[rtu_singleIndex];
              localB->s200_x0 = 6U;
              localB->s200_x1 = 58U;
              localB->s200_y0 = 41U;
              localB->s200_y1 = 48U;
              localB->s200_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S200>:301' */
              BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                localB->s200_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              temp = rtu_barMin[rtu_singleIndex];
              if (rtu_data[rtu_singleIndex] > (temp >=
                   rtu_barMax[rtu_singleIndex] ? temp :
                   rtu_barMax[rtu_singleIndex])) {
                /* Transition: '<S200>:127' */
                temp = rtu_barMin[rtu_singleIndex];
                temp = ((temp >= rtu_barMax[rtu_singleIndex] ? temp :
                         rtu_barMax[rtu_singleIndex]) -
                        rtu_barMin[rtu_singleIndex]) * 52 /
                  (rtu_barMax[rtu_singleIndex] - rtu_barMin[rtu_singleIndex]) +
                  6;
              } else {
                temp = rtu_barMin[rtu_singleIndex];
                if (rtu_data[rtu_singleIndex] < (temp <=
                     rtu_barMax[rtu_singleIndex] ? temp :
                     rtu_barMax[rtu_singleIndex])) {
                  /* Transition: '<S200>:125' */
                  temp = rtu_barMin[rtu_singleIndex];
                  temp = ((temp <= rtu_barMax[rtu_singleIndex] ? temp :
                           rtu_barMax[rtu_singleIndex]) -
                          rtu_barMin[rtu_singleIndex]) * 52 /
                    (rtu_barMax[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    + 6;
                } else {
                  /* Transition: '<S200>:121' */
                  temp = (rtu_data[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    * 52 / (rtu_barMax[rtu_singleIndex] -
                            rtu_barMin[rtu_singleIndex]) + 6;
                }
              }

              if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp >= 32)) {
                /* Transition: '<S200>:128' */
                localB->s200_x1 = (uint8_T)temp;
                localB->s200_fillColor = BuckyWagon_01_BLACK;
                localB->s200_x0 = 32U;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S200>:301' */
                BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                  localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                  localB->s200_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp < 32))
              {
                /* Transition: '<S200>:122' */
                localB->s200_x0 = (uint8_T)temp;
                localB->s200_x1 = 32U;
                localB->s200_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S200>:301' */
                BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                  localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                  localB->s200_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 1) {
                /* Transition: '<S200>:120' */
                localB->s200_x0 = (uint8_T)temp;
                localB->s200_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S200>:301' */
                BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                  localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                  localB->s200_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 3) {
                /* Transition: '<S200>:68' */
                localB->s200_x0 = (uint8_T)temp;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

                /* Event: '<S200>:305' */
                BuckyWagon_01_DrawVline(localB->s200_x0, localB->s200_y0,
                  localB->s200_y1, localB->s200_lineColor,
                  localB->s200_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
              } else {
                /* Transition: '<S200>:124' */
                localB->s200_x1 = (uint8_T)temp;
                localB->s200_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S200>:301' */
                BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                  localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                  localB->s200_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              }

              /* Transition: '<S200>:119' */
              /* Transition: '<S200>:115' */
            } else {
              /* Transition: '<S200>:118' */
            }

            /* Transition: '<S200>:77' */
            localB->s200_y0 = 55U;
            localB->s200_y1 = 63U;
            localB->s200_x0 = 0U;
            localB->s200_x1 = 63U;
            memcpy(&localB->s200_string[0], &rtu_statusTxt[0], 9);
            localB->s200_string[9] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S200>:303' */
            BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
              localB->s200_string[0], localB->s200_string[1],
              localB->s200_string[2], localB->s200_string[3],
              localB->s200_string[4], localB->s200_string[5],
              localB->s200_string[6], localB->s200_string, localB->s200_string[7],
              localB->s200_string[8], localB->s200_string[9],
              localB->s200_string[10], localB->s200_string[11],
              localB->s200_string[12], localB->s200_string[13],
              &localB->s200_string[7], localB->s200_string[14],
              localB->s200_string[15], localB->s200_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            if (rtu_statusTxtMode == 1) {
              /* Transition: '<S200>:75' */
              localB->s200_fillColor = BuckyWagon_01_BLACK;
              localB->s200_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S200>:301' */
              BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                localB->s200_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s200_lineColor = BuckyWagon_01_WHITE;
            } else {
              /* Transition: '<S200>:135' */
              localB->s200_lineColor = BuckyWagon_01_WHITE;
              localB->s200_fillColor = BuckyWagon_01_WHITE;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S200>:301' */
              BuckyWagon_01_DrawRect(localB->s200_x0, localB->s200_x1,
                localB->s200_y0, localB->s200_y1, localB->s200_lineColor,
                localB->s200_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s200_lineColor = BuckyWagon_01_BLACK;
            }

            /* Transition: '<S200>:44' */
            localB->s200_y0 = 56U;
            localB->s200_font = BuckyWagon_01_FONT4x6;
            localB->s200_x0 = 17U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S200>:304' */
            BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
              localB->s200_y0, localB->s200_font, localB->s200_hCenter,
              localB->s200_vCenter, rtu_21, localB->s200_lineColor,
              localB->s200_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */

            /* Transition: '<S200>:116' */
            localDW->s200_timer = 0U;
            localDW->s200_is_Single = BuckyWagon_01_IN_List_Idle_h;
          } else {
            if (localDW->s200_sfEvent == BuckyWagon_01_event_tick) {
              /* Transition: '<S200>:117' */
              localDW->s200_timer = (uint16_T)(localDW->s200_timer + 1);
              localDW->s200_is_Single = BuckyWagon_01_IN_List_Idle_h;
            }
          }
          break;

         case BuckyWagon_01_IN_Single_Init:
          /* During 'Single_Init': '<S200>:7' */
          /* Transition: '<S200>:70' */
          localDW->s200_is_Single = BuckyWagon_01_IN_singleNames;

          /* Entry 'singleNames': '<S200>:6' */
          localB->s200_hCenter = 1U;
          localB->s200_font = BuckyWagon_01_FONT6x8;
          localB->s200_x0 = 30U;
          localB->s200_stringNum = 0U;
          memcpy(&localB->s200_string[0], &rtu_names[10 * rtu_singleIndex], 10);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S200>:303' */
          BuckyWagon_01_SendString_efficient(localB->s200_stringNum,
            localB->s200_string[0], localB->s200_string[1], localB->s200_string
            [2], localB->s200_string[3], localB->s200_string[4],
            localB->s200_string[5], localB->s200_string[6], localB->s200_string,
            localB->s200_string[7], localB->s200_string[8], localB->s200_string
            [9], localB->s200_string[10], localB->s200_string[11],
            localB->s200_string[12], localB->s200_string[13],
            &localB->s200_string[7], localB->s200_string[14],
            localB->s200_string[15], localB->s200_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s200_y0 = 14U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S200>:304' */
          BuckyWagon_01_DrawString(localB->s200_stringNum, localB->s200_x0,
            localB->s200_y0, localB->s200_font, localB->s200_hCenter,
            localB->s200_vCenter, rtu_21, localB->s200_lineColor,
            localB->s200_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          break;

         case BuckyWagon_01_IN_singleNames:
          /* During 'singleNames': '<S200>:6' */
          /* Transition: '<S200>:129' */
          localDW->s200_timer = BuckyWagon_01_UPDATE_TIME;
          localDW->s200_is_Single = BuckyWagon_01_IN_List_Idle_h;
          break;

         default:
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_wait1:
      /* During 'wait1': '<S200>:17' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S200>:90' */
        localB->s200_screenO = 2U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S200>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s200_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
        BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S200>:86' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S200>:82' */
          localDW->s200_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S200>:11' */
          /* Event: '<S200>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s200_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait2:
      /* During 'wait2': '<S200>:29' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S200>:89' */
        localB->s200_screenO = 1U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S200>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s200_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
        BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S200>:37' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S200>:82' */
          localDW->s200_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S200>:11' */
          /* Event: '<S200>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s200_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait3:
      /* During 'wait3': '<S200>:28' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S200>:88' */
        localB->s200_screenO = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S200>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s200_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
        BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S200>:35' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S200>:82' */
          localDW->s200_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S200>:11' */
          /* Event: '<S200>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s200_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait4:
      /* During 'wait4': '<S200>:27' */
      if (localDW->s200_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S200>:87' */
        localB->s200_screenO = 4U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S200>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s200_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
        BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S200>:39' */
          localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S200>:82' */
          localDW->s200_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S200>:11' */
          /* Event: '<S200>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s200_setupIndex = 0U;
        }
      }
      break;

     default:
      /* Transition: '<S200>:43' */
      localDW->s200_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

      /* Entry 'PowerupDelay': '<S200>:9' */
      localDW->s200_timer = 0U;
      break;
    }
  }
}

/* Initial conditions for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_f_Init(rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  int32_T i;
  localDW->s200_is_Dual = 0U;
  localDW->s200_is_List = 0U;
  localDW->s200_is_Quad = 0U;
  localDW->s200_is_Setup = 0U;
  localDW->s200_is_select_var = 0U;
  localDW->s200_is_Single = 0U;
  localDW->s200_is_active_c2_BuckyWagon_01 = 0U;
  localDW->s200_is_c2_BuckyWagon_01 = 0U;
  localDW->s200_timer = 0U;
  for (i = 0; i < 6; i++) {
    localDW->s200_oldData[i] = 0;
  }

  localDW->s200_setupIndex = 0U;
  localDW->s200_setupVIndex = 0U;
  localDW->s200_selectIndex = 0U;
  localDW->s200_selectVIndex = 0U;
  localB->s200_mode = 0U;
  localB->s200_x0 = 0U;
  localB->s200_x1 = 0U;
  localB->s200_y0 = 0U;
  localB->s200_y1 = 0U;
  localB->s200_lineColor = 0U;
  localB->s200_fillColor = 0U;
  localB->s200_stringNum = 0U;
  for (i = 0; i < 18; i++) {
    localB->s200_string[i] = 0U;
  }

  localB->s200_font = 0U;
  localB->s200_hCenter = 0U;
  localB->s200_vCenter = 0U;
  localB->s200_listIndexO = 0U;
  localB->s200_screenO = 0U;
  localB->s200_dualIndexO[0] = 0U;
  localB->s200_dualIndexO[1] = 0U;
  localB->s200_quadIndexO[0] = 0U;
  localB->s200_quadIndexO[1] = 0U;
  localB->s200_quadIndexO[2] = 0U;
  localB->s200_quadIndexO[3] = 0U;
  localB->s200_singleIndexO = 0U;
}

/* Start for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_h_Start(rtB_Chart_BuckyWagon_01_n *localB,
  rtDW_Chart_BuckyWagon_01_o *localDW)
{
  /* Start for Function Call SubSystem: '<S11>/Clear Screen' */
  BuckyWagon_01_ClearScreen_Start();

  /* End of Start for SubSystem: '<S11>/Clear Screen' */

  /* Start for Function Call SubSystem: '<S11>/Draw Rect' */
  BuckyWagon_01_DrawRect_Start();

  /* End of Start for SubSystem: '<S11>/Draw Rect' */

  /* Start for Function Call SubSystem: '<S11>/Send String_efficient' */
  BuckyWagon_01_SendString_efficient_Start();

  /* End of Start for SubSystem: '<S11>/Send String_efficient' */

  /* Start for Function Call SubSystem: '<S11>/Draw String' */
  BuckyWagon_01_DrawString_Start();

  /* End of Start for SubSystem: '<S11>/Draw String' */

  /* Start for Function Call SubSystem: '<S11>/Draw Vline' */
  BuckyWagon_01_DrawVline_Start();

  /* End of Start for SubSystem: '<S11>/Draw Vline' */

  /* Start for Function Call SubSystem: '<S11>/Draw HLine' */
  BuckyWagon_01_DrawHLine_Start();

  /* End of Start for SubSystem: '<S11>/Draw HLine' */
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

  /* Stateflow: '<S11>/Chart' incorporates:
   *  TriggerPort: '<S200>/ input events '
   */
  tmp = FALSE;
  for (i = 0; i < 7; i++) {
    zcEvent_0 = ((((localZCE->Chart_Trig_ZCE[i]) == POS_ZCSIG) != rtu_0[i]) &&
                 ((localZCE->Chart_Trig_ZCE[i]) != UNINITIALIZED_ZCSIG));
    tmp = (tmp || zcEvent_0);
    zcEvent[i] = zcEvent_0;
  }

  if (tmp) {
    for (i = 0; i < 7; i++) {
      rtb_inputevents[i] = (int8_T)(int32_T)(zcEvent[i] ? rtu_0[i] ?
        RISING_ZCEVENT : FALLING_ZCEVENT : NO_ZCEVENT);
    }

    /* Gateway: Foreground/MiniViewDisplay/Chart */
    if (rtb_inputevents[0U] != 0) {
      /* Event: '<S200>:298' */
      localDW->s200_sfEvent = BuckyWagon_01_event_tick;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[1U] == 1) {
      /* Event: '<S200>:307' */
      localDW->s200_sfEvent = BuckyWagon_01_event_upPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[2U] == -1) {
      /* Event: '<S200>:308' */
      localDW->s200_sfEvent = BuckyWagon_01_event_upReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[3U] == 1) {
      /* Event: '<S200>:309' */
      localDW->s200_sfEvent = BuckyWagon_01_event_menuPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[4U] == -1) {
      /* Event: '<S200>:310' */
      localDW->s200_sfEvent = BuckyWagon_01_event_menuReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[5U] == 1) {
      /* Event: '<S200>:311' */
      localDW->s200_sfEvent = BuckyWagon_01_event_downPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[6U] == -1) {
      /* Event: '<S200>:312' */
      localDW->s200_sfEvent = BuckyWagon_01_event_downReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }
  }

  for (i = 0; i < 7; i++) {
    (localZCE->Chart_Trig_ZCE[i]) = (uint8_T)(rtu_0[i] ? (int32_T)POS_ZCSIG :
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
  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S208>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S208>/In' */
    localB->s208_In = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
}

/* Initial conditions for function-call system: '<S216>/Fault Iterator' */
void BuckyWagon_01_FaultIterator_Init(rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S230>/Unit Delay' */
  localDW->s230_UnitDelay_DSTATE = 0;
}

/* Output and update for function-call system: '<S216>/Fault Iterator' */
void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* local block i/o variables */
  fault_T rtb_UnitDelay_fi;
  fault_T rtb_motohawk_fault_iterator_o2;

  /* UnitDelay: '<S230>/Unit Delay' */
  rtb_UnitDelay_fi = localDW->s230_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_fault_iterator): '<S230>/motohawk_fault_iterator' */
  /* Get Next Active Fault */
  {
    extern boolean_T IsFaultValid(uint32_T fault);
    extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
    rtb_motohawk_fault_iterator_o2 = GetNextActiveFault((uint32_T)
      (rtb_UnitDelay_fi), 1);
    localB->s230_motohawk_fault_iterator_o1 = IsFaultValid
      (rtb_motohawk_fault_iterator_o2);
  }

  /* S-Function (motohawk_sfun_fault_name): '<S230>/motohawk_fault_name' */
  {
    extern const char *GetFaultName(uint32_T fault);
    const char *name;
    char *out;
    int i;
    name = GetFaultName(rtb_motohawk_fault_iterator_o2);
    out = (char *) localB->s230_motohawk_fault_name;
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

  /* Update for UnitDelay: '<S230>/Unit Delay' */
  localDW->s230_UnitDelay_DSTATE = rtb_motohawk_fault_iterator_o2;
}

/* Initial conditions for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Init(void)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S216>/Chart' */
  BuckyWagon_01_DWork.s229_is_Fault = 0U;
  BuckyWagon_01_DWork.s229_is_active_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s229_mode = 0U;
  for (i = 0; i < 10; i++) {
    BuckyWagon_01_B.s229_text[i] = 0U;
  }

  BuckyWagon_01_B.s229_minTimer = 0U;
  BuckyWagon_01_B.s229_scrollIndex = 0U;
  BuckyWagon_01_B.s229_scrollTimer = 0U;

  /* InitializeConditions for Stateflow: '<S216>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S216>/Fault Iterator'
   */
  BuckyWagon_01_FaultIterator_Init(&BuckyWagon_01_DWork.s216_FaultIterator);

  /* InitializeConditions for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_f_Init(&BuckyWagon_01_B.s11_sf_Chart,
    &BuckyWagon_01_DWork.s11_sf_Chart);
}

/* Start for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Start(void)
{
  /* Start for Stateflow: '<S216>/Chart' incorporates:
   *  Start for SubSystem: '<S216>/Fault Iterator'
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
  uint8_T rtb_UnitDelay_j[27];
  real_T rtb_Gain6;
  boolean_T rtb_UnitDelay_h;
  real_T rtb_faultNameLength;
  int32_T i;
  real_T u;

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem2' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s247_upasserted,
    BuckyWagon_01_B.s247_upcount, &BuckyWagon_01_B.s11_EnabledSubsystem2);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem1' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s232_menuasserted,
    BuckyWagon_01_B.s232_menucount, &BuckyWagon_01_B.s11_EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s223_downasserted,
    BuckyWagon_01_B.s223_downcount, &BuckyWagon_01_B.s11_EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */

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

  /* UnitDelay: '<S216>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    rtb_UnitDelay_j[i] = BuckyWagon_01_DWork.s216_UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S216>/Unit Delay' */

  /* MATLAB Function Block: '<S216>/getStringLength' */

  /* MATLAB Function 'Foreground/MiniViewDisplay/GetFaultName/getStringLength': '<S231>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /* '<S231>:1:5' */
  rtb_faultNameLength = 1.0;
  while ((rtb_UnitDelay_j[(int32_T)rtb_faultNameLength - 1] != 0) ||
         (rtb_faultNameLength > 27.0)) {
    /* '<S231>:1:6' */
    /* '<S231>:1:7' */
    /* '<S231>:1:8' */
    rtb_faultNameLength++;
  }

  /* End of MATLAB Function Block: '<S216>/getStringLength' */

  /* Stateflow: '<S216>/Chart' */

  /* Gateway: Foreground/MiniViewDisplay/GetFaultName/Chart */
  /* During: Foreground/MiniViewDisplay/GetFaultName/Chart */
  if (BuckyWagon_01_DWork.s229_is_active_c3_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/GetFaultName/Chart */
    BuckyWagon_01_DWork.s229_is_active_c3_BuckyWagon_01 = 1U;

    /* Transition: '<S229>:7' */
    BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

    /* Entry 'NoFault': '<S229>:1' */
    for (i = 0; i < 10; i++) {
      /* S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration2' */
      BuckyWagon_01_B.s229_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
    }
  } else {
    switch (BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01) {
     case BuckyWagon_01_IN_Fault:
      /* UnitDelay: '<S216>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration7'
       */
      /* During 'Fault': '<S229>:2' */
      if (!(BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE &&
            (DisplayFaults_DataStore()))) {
        /* Transition: '<S229>:13' */
        BuckyWagon_01_DWork.s229_is_Fault = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_d;
        BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

        /* Entry 'NoFault': '<S229>:1' */
        for (i = 0; i < 10; i++) {
          BuckyWagon_01_B.s229_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
        }
      } else {
        BuckyWagon_01_B.s229_minTimer = (uint16_T)(BuckyWagon_01_B.s229_minTimer
          + 1);
        switch (BuckyWagon_01_DWork.s229_is_Fault) {
         case BuckyWagon_01_IN_CheckNextFault:
          /* During 'CheckNextFault': '<S229>:6' */
          /* Transition: '<S229>:17' */
          /* Transition: '<S229>:18' */
          /* Transition: '<S229>:14' */
          BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S229>:5' */
          BuckyWagon_01_B.s229_scrollTimer = 0U;
          BuckyWagon_01_B.s229_scrollIndex = 0U;
          BuckyWagon_01_B.s229_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s229_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s229_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;

         case BuckyWagon_01_IN_lastWait:
          /* During 'lastWait': '<S229>:4' */
          if ((BuckyWagon_01_B.s229_scrollTimer > ((uint16_T)
                (lastScrollTime_DataStore()))) && (BuckyWagon_01_B.s229_minTimer
               > ((uint16_T)(minTime_DataStore())))) {
            /* Stateflow: '<S216>/Chart' incorporates:
             *  SubSystem: '<S216>/Fault Iterator'
             */
            /* Transition: '<S229>:12' */
            /* Event: '<S229>:38' */
            BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s216_FaultIterator,
              &BuckyWagon_01_DWork.s216_FaultIterator);
            BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_CheckNextFault;
          } else {
            /* Stateflow: '<S216>/Chart' */
            BuckyWagon_01_B.s229_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s229_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollText:
          /* Stateflow: '<S216>/Chart' */
          /* During 'scrollText': '<S229>:3' */
          if (BuckyWagon_01_B.s229_scrollTimer >= ((uint16_T)
               (scrollTime_DataStore()))) {
            /* Transition: '<S229>:9' */
            if ((int32_T)rtb_faultNameLength - 2 >= ((uint8_T)
                 (dispLength_DataStore())) + BuckyWagon_01_B.s229_scrollIndex) {
              /* Transition: '<S229>:10' */
              BuckyWagon_01_B.s229_scrollIndex = (uint8_T)
                (BuckyWagon_01_B.s229_scrollIndex + 1);
              BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_scrollText;

              /* Entry 'scrollText': '<S229>:3' */
              BuckyWagon_01_B.s229_scrollTimer = 0U;
              memcpy(&BuckyWagon_01_B.s229_text[0],
                     &rtb_UnitDelay_j[BuckyWagon_01_B.s229_scrollIndex],
                     ((uint8_T)(dispLength_DataStore())));
              BuckyWagon_01_B.s229_text[((uint8_T)(dispLength_DataStore()))] =
                0U;
            } else {
              /* Transition: '<S229>:11' */
              BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_lastWait;
            }
          } else {
            BuckyWagon_01_B.s229_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s229_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollTextFirst:
          /* Stateflow: '<S216>/Chart' */
          /* During 'scrollTextFirst': '<S229>:5' */
          if (BuckyWagon_01_B.s229_scrollTimer >= ((uint16_T)
               (firstScrollTime_DataStore()))) {
            /* Transition: '<S229>:16' */
            BuckyWagon_01_B.s229_scrollIndex = (uint8_T)
              (BuckyWagon_01_B.s229_scrollIndex + 1);
            BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_scrollText;

            /* Entry 'scrollText': '<S229>:3' */
            BuckyWagon_01_B.s229_scrollTimer = 0U;
            memcpy(&BuckyWagon_01_B.s229_text[0],
                   &rtb_UnitDelay_j[BuckyWagon_01_B.s229_scrollIndex], ((uint8_T)
                    (dispLength_DataStore())));
            BuckyWagon_01_B.s229_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          } else {
            BuckyWagon_01_B.s229_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s229_scrollTimer + 1);
          }
          break;

         default:
          /* Transition: '<S229>:15' */
          BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S229>:5' */
          BuckyWagon_01_B.s229_scrollTimer = 0U;
          BuckyWagon_01_B.s229_scrollIndex = 0U;
          BuckyWagon_01_B.s229_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s229_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s229_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;
        }
      }

      /* End of UnitDelay: '<S216>/Unit Delay1' */
      break;

     case BuckyWagon_01_IN_NoFault:
      /* Stateflow: '<S216>/Chart' */
      /* UnitDelay: '<S216>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration3'
       */
      /* During 'NoFault': '<S229>:1' */
      if (BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE && (DisplayFaults_DataStore
           ())) {
        /* Transition: '<S229>:8' */
        BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_Fault;

        /* Entry 'Fault': '<S229>:2' */
        BuckyWagon_01_B.s229_mode = !(InvertMode_DataStore());

        /* Transition: '<S229>:15' */
        BuckyWagon_01_DWork.s229_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

        /* Entry 'scrollTextFirst': '<S229>:5' */
        BuckyWagon_01_B.s229_scrollTimer = 0U;
        BuckyWagon_01_B.s229_scrollIndex = 0U;
        BuckyWagon_01_B.s229_minTimer = 0U;
        memcpy(&BuckyWagon_01_B.s229_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                (dispLength_DataStore())));
        BuckyWagon_01_B.s229_text[((uint8_T)(dispLength_DataStore()))] = 0U;
      } else {
        BuckyWagon_01_B.s229_mode = (InvertMode_DataStore());

        /* Stateflow: '<S216>/Chart' incorporates:
         *  SubSystem: '<S216>/Fault Iterator'
         */
        /* Event: '<S229>:38' */
        BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s216_FaultIterator,
          &BuckyWagon_01_DWork.s216_FaultIterator);
      }

      /* End of UnitDelay: '<S216>/Unit Delay1' */
      break;

     default:
      /* Transition: '<S229>:7' */
      BuckyWagon_01_DWork.s229_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

      /* Entry 'NoFault': '<S229>:1' */
      for (i = 0; i < 10; i++) {
        /* S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration2' */
        BuckyWagon_01_B.s229_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
      }
      break;
    }
  }

  /* Gain: '<S218>/Gain5' incorporates:
   *  Product: '<S218>/Product'
   */
  rtb_faultNameLength = BuckyWagon_01_B.s248_bcm_ibat *
    BuckyWagon_01_B.s248_bcm_vbat * 0.001;

  /* Gain: '<S218>/Gain6' incorporates:
   *  Product: '<S218>/Product1'
   */
  rtb_Gain6 = BuckyWagon_01_B.s365_Merge * BuckyWagon_01_B.s366_Merge *
    0.00010471975511965977;

  /* Saturate: '<S218>/Saturation' incorporates:
   *  Gain: '<S218>/Gain3'
   */
  u = 100.0 * BuckyWagon_01_B.s268_Merge;

  /* DataTypeConversion: '<S218>/Data Type Conversion7' incorporates:
   *  Saturate: '<S218>/Saturation'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion7' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion7'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[0] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion4' incorporates:
   *  Saturate: '<S218>/Saturation1'
   */
  u = BuckyWagon_01_B.s248_bcm_vbat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s248_bcm_vbat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s248_bcm_vbat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion4' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion4'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[1] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion2' incorporates:
   *  Saturate: '<S218>/Saturation2'
   */
  u = BuckyWagon_01_B.s248_bcm_ibat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s248_bcm_ibat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s248_bcm_ibat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion2' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion2'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[2] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[3] =
    BuckyWagon_01_ConstB.s218_DataTypeConversion3;

  /* DataTypeConversion: '<S218>/Data Type Conversion5' incorporates:
   *  Saturate: '<S218>/Saturation4'
   */
  u = BuckyWagon_01_B.s365_Merge >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s365_Merge <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s365_Merge;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion5' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion5'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[4] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S218>/Saturation5' incorporates:
   *  Gain: '<S218>/Gain'
   */
  u = 100.0 * BuckyWagon_01_B.s138_Merge;

  /* DataTypeConversion: '<S218>/Data Type Conversion1' incorporates:
   *  Saturate: '<S218>/Saturation5'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion1' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion1'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[5] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
   *  Saturate: '<S218>/Saturation6'
   */
  u = BuckyWagon_01_B.s366_Merge >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s366_Merge <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s366_Merge;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[6] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion6' incorporates:
   *  Saturate: '<S218>/Saturation7'
   */
  u = rtb_faultNameLength >= 32767.0 ? 32767.0 : rtb_faultNameLength <= -32767.0
    ? -32767.0 : rtb_faultNameLength;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion6' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion6'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[7] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion10' incorporates:
   *  Saturate: '<S218>/Saturation8'
   */
  u = rtb_Gain6 >= 32767.0 ? 32767.0 : rtb_Gain6 <= -32767.0 ? -32767.0 :
    rtb_Gain6;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion10' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion10'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[8] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S218>/Saturation9' incorporates:
   *  Gain: '<S218>/Gain7'
   *  Product: '<S218>/Divide'
   */
  u = rtb_faultNameLength / rtb_Gain6 * 100.0;

  /* DataTypeConversion: '<S218>/Data Type Conversion8' incorporates:
   *  Saturate: '<S218>/Saturation9'
   */
  u = u >= 100.0 ? 100.0 : u <= 0.0 ? 0.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion8' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion8'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[9] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion11' incorporates:
   *  Saturate: '<S218>/Saturation10'
   */
  u = BuckyWagon_01_B.s254_Inverter_Temperature >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s254_Inverter_Temperature <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s254_Inverter_Temperature;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion11' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion11'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[10] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S218>/Saturation11' incorporates:
   *  Gain: '<S218>/Gain2'
   */
  u = 100.0 * BuckyWagon_01_B.s9_CoolantPumpSpeed;

  /* DataTypeConversion: '<S218>/Data Type Conversion12' incorporates:
   *  Saturate: '<S218>/Saturation11'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion12' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion12'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[11] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S218>/Saturation12' incorporates:
   *  Gain: '<S218>/Gain1'
   */
  u = 1000.0 * BuckyWagon_01_B.s383_Merge;

  /* DataTypeConversion: '<S218>/Data Type Conversion17' incorporates:
   *  Saturate: '<S218>/Saturation12'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion17' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion17'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[12] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S218>/Saturation13' incorporates:
   *  Gain: '<S218>/Gain4'
   */
  u = 100.0 * BuckyWagon_01_B.s375_Merge;

  /* DataTypeConversion: '<S218>/Data Type Conversion18' incorporates:
   *  Saturate: '<S218>/Saturation13'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion18' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion18'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[13] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S218>/Data Type Conversion14' */
  if (rtIsNaN(BuckyWagon_01_B.s391_Merge) || rtIsInf(BuckyWagon_01_B.s391_Merge))
  {
    u = 0.0;
  } else {
    u = fmod(floor(BuckyWagon_01_B.s391_Merge), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion14' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion13'
   *  DataTypeConversion: '<S218>/Data Type Conversion14'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[14] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[15] =
    BuckyWagon_01_B.s280_Merge;

  /* DataTypeConversion: '<S218>/Data Type Conversion15' incorporates:
   *  Saturate: '<S218>/Saturation14'
   */
  u = BuckyWagon_01_B.s9_InReverse >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s9_InReverse <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s9_InReverse;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S218>/Data Type Conversion15' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion15'
   *  DataTypeConversion: '<S218>/Data Type Conversion16'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[16] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[17] =
    BuckyWagon_01_B.s261_Merge;

  /* UnitDelay: '<S11>/Unit Delay' */
  rtb_UnitDelay_h = BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;

  /* SignalConversion: '<S11>/HiddenBuf_InsertedFor_Chart_at_inport_20' incorporates:
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[0] =
    BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[1] =
    BuckyWagon_01_B.s247_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[2] =
    BuckyWagon_01_B.s247_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[3] =
    BuckyWagon_01_B.s232_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[4] =
    BuckyWagon_01_B.s232_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[5] =
    BuckyWagon_01_B.s223_downasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[6] =
    BuckyWagon_01_B.s223_downasserted;

  /* Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_o(rtb_HiddenBuf_InsertedFor_Chart_at_inport_20,
                        BuckyWagon_01_B.s11_EnabledSubsystem1.s208_In,
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
                        BuckyWagon_01_B.s229_text, BuckyWagon_01_B.s229_mode,
                        BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20,
                        ((uint8_T)0U), &BuckyWagon_01_B.s11_sf_Chart,
                        &BuckyWagon_01_DWork.s11_sf_Chart,
                        &BuckyWagon_01_PrevZCSigState.s11_sf_Chart);

  /* Update for UnitDelay: '<S216>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    BuckyWagon_01_DWork.s216_UnitDelay_DSTATE[i] =
      BuckyWagon_01_B.s216_FaultIterator.s230_motohawk_fault_name[i];
  }

  /* End of UnitDelay: '<S216>/Unit Delay' */

  /* Update for UnitDelay: '<S216>/Unit Delay1' */
  BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE =
    BuckyWagon_01_B.s216_FaultIterator.s230_motohawk_fault_iterator_o1;

  /* Update for UnitDelay: '<S11>/Unit Delay' incorporates:
   *  Logic: '<S11>/Logical Operator'
   */
  BuckyWagon_01_DWork.s11_UnitDelay_DSTATE = !rtb_UnitDelay_h;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
