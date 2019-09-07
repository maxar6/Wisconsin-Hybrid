/*
 * File: BuckyWagon_01_MiniViewDisplay.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1596
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Sep 07 17:36:03 2019
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

/* Named constants for Stateflow: '<S19>/Chart' */
#define BuckyWagon_01_BLACK            (1U)
#define BuckyWagon_01_FONT4x6          (0U)
#define BuckyWagon_01_FONT6x8          (1U)
#define BuckyWagon_01_FONT8x15         (3U)
#define BuckyWagon_01_IN_Dual          (1U)
#define BuckyWagon_01_IN_Dual_Init     (1U)
#define BuckyWagon_01_IN_List          (2U)
#define BuckyWagon_01_IN_List_Idle     (2U)
#define BuckyWagon_01_IN_List_Idle_m   (1U)
#define BuckyWagon_01_IN_List_Init     (2U)
#define BuckyWagon_01_IN_List_Wait     (3U)
#define BuckyWagon_01_IN_List_Wait2    (4U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_m (0U)
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

/* Named constants for Stateflow: '<S178>/Chart' */
#define BuckyWagon_01_IN_CheckNextFault (1U)
#define BuckyWagon_01_IN_Fault         (1U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_ma (0U)
#define BuckyWagon_01_IN_NoFault       (2U)
#define BuckyWagon_01_IN_lastWait      (2U)
#define BuckyWagon_01_IN_scrollText    (3U)
#define BuckyWagon_01_IN_scrollTextFirst (4U)

/* Forward declaration for local functions */
static void BuckyWagon_01_enter_internal_Dual(const uint8_T rtu_dualIndex[2],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_enter_internal_List(uint8_T rtu_listIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01
  *localDW);
static void BuckyWagon_01_enter_internal_select_var(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01
  *localDW);
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);
static void BuckyWagon_01_chartstep_c2_BuckyWagon_01(uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);

/* Start for function-call system: '<S19>/Clear Screen' */
void BuckyWagon_01_ClearScreen_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S163>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S163>/Clear Screen'
   */
}

/* Output and update for function-call system: '<S19>/Clear Screen' */
void BuckyWagon_01_ClearScreen(void)
{
  /* S-Function (fcncallgen): '<S163>/Function-Call Generator' incorporates:
   *  SubSystem: '<S163>/Clear Screen'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S184>/Send CAN Messages' */
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

/* Start for function-call system: '<S19>/Draw Rect' */
void BuckyWagon_01_DrawRect_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S167>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S167>/Subsystem'
   */
}

/* Output and update for function-call system: '<S19>/Draw Rect' */
void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y0,
  uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S167>/Function-Call Generator' incorporates:
   *  SubSystem: '<S167>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S188>/Send CAN Messages' */
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

/* Start for function-call system: '<S19>/Send String_efficient' */
void BuckyWagon_01_SendString_efficient_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S195>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S198>/Function-Call Generator'
   *  Start for SubSystem: '<S181>/Subsystem'
   *  Start for SubSystem: '<S195>/Send Substring (page 0)'
   *  Start for SubSystem: '<S198>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S199>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S202>/Function-Call Generator'
   *  Start for SubSystem: '<S195>/Function-Call Subsystem'
   *  Start for SubSystem: '<S195>/Send Substring (page 1)'
   *  Start for SubSystem: '<S196>/Enabled Subsystem'
   *  Start for SubSystem: '<S199>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S200>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S204>/Function-Call Generator'
   *  Start for SubSystem: '<S195>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S195>/Send Substring (page 2)'
   *  Start for SubSystem: '<S197>/Enabled Subsystem'
   *  Start for SubSystem: '<S200>/Subsystem'
   */
}

/* Output and update for function-call system: '<S19>/Send String_efficient' */
void BuckyWagon_01_SendString_efficient(uint8_T rtu_string, uint8_T rtu_b0,
  uint8_T rtu_b1, uint8_T rtu_b2, uint8_T rtu_b3, uint8_T rtu_b4, uint8_T rtu_b5,
  uint8_T rtu_b6, const uint8_T rtu_string_c[7], uint8_T rtu_b7, uint8_T rtu_b8,
  uint8_T rtu_b9, uint8_T rtu_b10, uint8_T rtu_b10_i, uint8_T rtu_b11, uint8_T
  rtu_b12, const uint8_T rtu_string_o[7], uint8_T rtu_b14, uint8_T rtu_b15,
  uint8_T rtu_b16)
{
  int8_T rtb_Compare_lf[7];
  int32_T i;

  /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  S-Function (fcncallgen): '<S195>/Function-Call Generator'
   *  S-Function (fcncallgen): '<S198>/Function-Call Generator'
   *  SubSystem: '<S181>/Subsystem'
   *  SubSystem: '<S195>/Send Substring (page 0)'
   *  SubSystem: '<S198>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S205>/Send CAN Messages' */
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

  /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  SubSystem: '<S195>/Function-Call Subsystem'
   */
  /* RelationalOperator: '<S201>/Compare' incorporates:
   *  Constant: '<S201>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_lf[i] = (rtu_string_c[i] != 0);
  }

  /* End of RelationalOperator: '<S201>/Compare' */

  /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  EnablePort: '<S202>/Enable'
   *  SubSystem: '<S196>/Enabled Subsystem'
   */
  /* Logic: '<S196>/Logical Operator' incorporates:
   *  Logic: '<S197>/Logical Operator'
   */
  if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf[2]
       != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
      (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
    /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
     *  S-Function (fcncallgen): '<S199>/Function-Call Generator'
     *  S-Function (fcncallgen): '<S202>/Function-Call Generator'
     *  SubSystem: '<S195>/Send Substring (page 1)'
     *  SubSystem: '<S199>/Subsystem'
     */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S206>/Send CAN Messages' */
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

    /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
     *  SubSystem: '<S195>/Function-Call Subsystem1'
     */
    /* RelationalOperator: '<S203>/Compare' incorporates:
     *  Constant: '<S203>/Constant'
     */
    for (i = 0; i < 7; i++) {
      rtb_Compare_lf[i] = (rtu_string_o[i] != 0);
    }

    /* End of RelationalOperator: '<S203>/Compare' */

    /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
     *  EnablePort: '<S204>/Enable'
     *  SubSystem: '<S197>/Enabled Subsystem'
     */
    if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf
         [2] != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
        (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
      /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
       *  S-Function (fcncallgen): '<S200>/Function-Call Generator'
       *  S-Function (fcncallgen): '<S204>/Function-Call Generator'
       *  SubSystem: '<S195>/Send Substring (page 2)'
       *  SubSystem: '<S200>/Subsystem'
       */

      /* S-Function (motohawk_sfun_send_canmsgs): '<S207>/Send CAN Messages' */
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

  /* End of Logic: '<S196>/Logical Operator' */
}

/* Start for function-call system: '<S19>/Draw String' */
void BuckyWagon_01_DrawString_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S168>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S168>/Subsystem'
   */
}

/* Output and update for function-call system: '<S19>/Draw String' */
void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T rtu_y,
  uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter, uint8_T
  rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor)
{
  /* S-Function (fcncallgen): '<S168>/Function-Call Generator' incorporates:
   *  SubSystem: '<S168>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S189>/Send CAN Messages' */
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

/* Start for function-call system: '<S19>/Draw Vline' */
void BuckyWagon_01_DrawVline_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S169>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S169>/Subsystem'
   */
}

/* Output and update for function-call system: '<S19>/Draw Vline' */
void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T rtu_y1,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S169>/Function-Call Generator' incorporates:
   *  SubSystem: '<S169>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S190>/Send CAN Messages' */
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

/* Start for function-call system: '<S19>/Draw HLine' */
void BuckyWagon_01_DrawHLine_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S166>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S166>/Subsystem'
   */
}

/* Output and update for function-call system: '<S19>/Draw HLine' */
void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S166>/Function-Call Generator' incorporates:
   *  SubSystem: '<S166>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S187>/Send CAN Messages' */
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

/* Output and update for function-call system: '<S19>/Function-Call Subsystem' */
void BuckyWagon_01_FunctionCallSubsystem(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S173>/motohawk_data_write' */
  /* Write to Data Storage as scalar: listIndex */
  {
    listIndex_DataStore() = rtu_Value;
  }
}

/* Output and update for function-call system: '<S19>/Function-Call Subsystem1' */
void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S174>/motohawk_data_write' */
  /* Write to Data Storage as scalar: screen */
  {
    screen_DataStore() = rtu_Value;
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_internal_Dual(const uint8_T rtu_dualIndex[2],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S162>:181' */
  localB->s162_stringNum = 0U;
  while (localB->s162_stringNum < 2) {
    /* Transition: '<S162>:182' */
    localDW->s162_oldData[localB->s162_stringNum] = (int16_T)
      (rtu_data[rtu_dualIndex[localB->s162_stringNum]] + 1);
    localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
  }

  /* Transition: '<S162>:183' */
  localDW->s162_is_Dual = BuckyWagon_01_IN_Dual_Init;

  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'Dual_Init': '<S162>:19' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw string */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */

  /* draw lines */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* During 'Dual': '<S162>:20' */
  if (localDW->s162_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S162>:84' */
    localDW->s162_is_Dual = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
    localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait2;
  } else {
    switch (localDW->s162_is_Dual) {
     case BuckyWagon_01_IN_Dual_Init:
      /* During 'Dual_Init': '<S162>:19' */
      /* Transition: '<S162>:184' */
      localDW->s162_is_Dual = BuckyWagon_01_IN_dualNames;

      /* Entry 'dualNames': '<S162>:18' */
      localB->s162_hCenter = 1U;
      localB->s162_font = BuckyWagon_01_FONT6x8;
      localB->s162_x0 = 30U;
      localB->s162_stringNum = 0U;
      memcpy(&localB->s162_string[0], &rtu_names[10 * rtu_dualIndex[0]], 10);

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      localB->s162_y0 = 20U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      memcpy(&localB->s162_string[0], &rtu_names[10 * rtu_dualIndex[1]], 10);

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      localB->s162_y0 = 34U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      break;

     case BuckyWagon_01_IN_List_Idle:
      /* During 'List_Idle': '<S162>:1' */
      if ((localDW->s162_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s162_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S162>:186' */
        localB->s162_stringNum = 0U;
        localB->s162_font = BuckyWagon_01_FONT6x8;
        localB->s162_fillColor = BuckyWagon_01_WHITE;
        localB->s162_hCenter = 0U;
        if (localDW->s162_oldData[0] != rtu_data[rtu_dualIndex[0]]) {
          /* Transition: '<S162>:187' */
          sprintf(charPtr(&localB->s162_string[0]), "%d",
                  rtu_data[rtu_dualIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 0U;
          localB->s162_x1 = 60U;
          localB->s162_y0 = 10U;
          localB->s162_y1 = 18U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;
          localB->s162_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[0] = rtu_data[rtu_dualIndex[0]];
        } else {
          /* Transition: '<S162>:188' */
        }

        if (localDW->s162_oldData[1] != rtu_data[rtu_dualIndex[1]]) {
          /* Transition: '<S162>:190' */
          sprintf(charPtr(&localB->s162_string[0]), "%d",
                  rtu_data[rtu_dualIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 0U;
          localB->s162_x1 = 60U;
          localB->s162_y0 = 44U;
          localB->s162_y1 = 53U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;
          localB->s162_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[1] = rtu_data[rtu_dualIndex[1]];
        } else {
          /* Transition: '<S162>:73' */
        }

        /* Transition: '<S162>:67' */
        localB->s162_y0 = 55U;
        localB->s162_y1 = 63U;
        localB->s162_x0 = 0U;
        localB->s162_x1 = 63U;
        memcpy(&localB->s162_string[0], &rtu_statusTxt[0], 9);
        localB->s162_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S162>:130' */
          localB->s162_fillColor = BuckyWagon_01_BLACK;
          localB->s162_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S162>:74' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S162>:76' */
        localB->s162_y0 = 56U;
        localB->s162_font = BuckyWagon_01_FONT4x6;
        localB->s162_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */

        /* Transition: '<S162>:72' */
        localDW->s162_timer = 0U;
        localDW->s162_is_Dual = BuckyWagon_01_IN_List_Idle;
      } else {
        if (localDW->s162_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S162>:189' */
          localDW->s162_timer = (uint16_T)(localDW->s162_timer + 1);
          localDW->s162_is_Dual = BuckyWagon_01_IN_List_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_dualNames:
      /* During 'dualNames': '<S162>:18' */
      /* Transition: '<S162>:185' */
      localDW->s162_timer = BuckyWagon_01_UPDATE_TIME;
      localDW->s162_is_Dual = BuckyWagon_01_IN_List_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_internal_List(uint8_T rtu_listIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S162>:114' */
  localB->s162_stringNum = 0U;
  while (localB->s162_stringNum < 6) {
    /* Transition: '<S162>:112' */
    localDW->s162_oldData[localB->s162_stringNum] = (int16_T)(rtu_data
      [localB->s162_stringNum + rtu_listIndex] + 1);
    localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
  }

  /* Transition: '<S162>:109' */
  localDW->s162_is_List = BuckyWagon_01_IN_List_Init;

  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'List_Init': '<S162>:8' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw lines and name */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 63U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */
  localB->s162_listIndexO = rtu_listIndex;
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  boolean_T guard;

  /* During 'List': '<S162>:3' */
  if (localDW->s162_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S162>:55' */
    localDW->s162_is_List = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
    localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait4;
  } else {
    guard = FALSE;
    switch (localDW->s162_is_List) {
     case BuckyWagon_01_IN_List_Idle_m:
      /* During 'List_Idle': '<S162>:5' */
      if ((localDW->s162_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s162_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S162>:102' */
        localB->s162_stringNum = 0U;
        localB->s162_fillColor = BuckyWagon_01_WHITE;
        localB->s162_hCenter = 0U;
        while (localB->s162_stringNum < 6) {
          /* Transition: '<S162>:103' */
          if (rtu_data[localB->s162_stringNum + rtu_listIndex] ==
              localDW->s162_oldData[localB->s162_stringNum]) {
            /* Transition: '<S162>:105' */
            localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
          } else {
            /* Transition: '<S162>:101' */
            sprintf(charPtr(&localB->s162_string[0]), "%-4d", rtu_data
                    [localB->s162_stringNum + rtu_listIndex]);
            localB->s162_string[4] = 0U;

            /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

            /* Event: '<S162>:303' */
            BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
              localB->s162_string[0], localB->s162_string[1],
              localB->s162_string[2], localB->s162_string[3],
              localB->s162_string[4], localB->s162_string[5],
              localB->s162_string[6], localB->s162_string, localB->s162_string[7],
              localB->s162_string[8], localB->s162_string[9],
              localB->s162_string[10], localB->s162_string[11],
              localB->s162_string[12], localB->s162_string[13],
              &localB->s162_string[7], localB->s162_string[14],
              localB->s162_string[15], localB->s162_string[16]);

            /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
            localB->s162_x0 = 42U;
            localB->s162_x1 = 57U;
            localB->s162_y0 = (uint8_T)(localB->s162_stringNum * 7 + 12);
            localB->s162_y1 = (uint8_T)(localB->s162_y0 + 6);
            localB->s162_lineColor = 0U;

            /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

            /* Event: '<S162>:301' */
            BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
              localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
              localB->s162_fillColor);

            /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
            localB->s162_lineColor = 1U;

            /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

            /* Event: '<S162>:304' */
            BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
              localB->s162_y0, localB->s162_font, localB->s162_hCenter,
              localB->s162_vCenter, rtu_21, localB->s162_lineColor,
              localB->s162_fillColor);

            /* End of Outputs for SubSystem: '<S19>/Draw String' */
            localDW->s162_oldData[localB->s162_stringNum] = rtu_data
              [localB->s162_stringNum + rtu_listIndex];
            localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
          }
        }

        /* Transition: '<S162>:79' */
        localB->s162_y0 = 55U;
        localB->s162_y1 = 63U;
        localB->s162_x0 = 0U;
        localB->s162_x1 = 63U;
        memcpy(&localB->s162_string[0], &rtu_statusTxt[0], 9);
        localB->s162_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S162>:78' */
          localB->s162_fillColor = BuckyWagon_01_BLACK;
          localB->s162_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S162>:80' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S162>:100' */
        localB->s162_y0 = 56U;
        localB->s162_font = BuckyWagon_01_FONT4x6;
        localB->s162_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */

        /* Transition: '<S162>:92' */
        localDW->s162_timer = 0U;
        localDW->s162_is_List = BuckyWagon_01_IN_List_Idle_m;

        /* Entry 'List_Idle': '<S162>:5' */
        localB->s162_stringNum = 0U;
      } else if (localDW->s162_sfEvent == BuckyWagon_01_event_tick) {
        /* Transition: '<S162>:91' */
        localDW->s162_timer = (uint16_T)(localDW->s162_timer + 1);
        localDW->s162_is_List = BuckyWagon_01_IN_List_Idle_m;

        /* Entry 'List_Idle': '<S162>:5' */
        localB->s162_stringNum = 0U;
      } else if (localDW->s162_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S162>:94' */
        if (rtu_listIndex == 0) {
          /* Transition: '<S162>:93' */
          localDW->s162_is_List = BuckyWagon_01_IN_List_Idle_m;

          /* Entry 'List_Idle': '<S162>:5' */
          localB->s162_stringNum = 0U;
        } else {
          /* Transition: '<S162>:95' */
          localB->s162_listIndexO = (uint8_T)(rtu_listIndex - 1);

          /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem' */

          /* Event: '<S162>:313' */
          BuckyWagon_01_FunctionCallSubsystem(localB->s162_listIndexO);

          /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem' */
          guard = TRUE;
        }
      } else {
        if (localDW->s162_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S162>:97' */
          if (rtu_numFields - 6 == rtu_listIndex) {
            /* Transition: '<S162>:99' */
            localDW->s162_is_List = BuckyWagon_01_IN_List_Idle_m;

            /* Entry 'List_Idle': '<S162>:5' */
            localB->s162_stringNum = 0U;
          } else {
            /* Transition: '<S162>:98' */
            localB->s162_listIndexO = (uint8_T)(rtu_listIndex + 1);

            /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem' */

            /* Event: '<S162>:313' */
            BuckyWagon_01_FunctionCallSubsystem(localB->s162_listIndexO);

            /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem' */
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_List_Init:
      /* During 'List_Init': '<S162>:8' */
      /* Transition: '<S162>:96' */
      /* Transition: '<S162>:104' */
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:106' */
        memcpy(&localB->s162_string[0], &rtu_names[10 * (localB->s162_listIndexO
                + localB->s162_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      }

      /* Transition: '<S162>:108' */
      localDW->s162_is_List = BuckyWagon_01_IN_List_Wait;
      break;

     case BuckyWagon_01_IN_List_Wait:
      /* During 'List_Wait': '<S162>:2' */
      /* Transition: '<S162>:111' */
      localB->s162_x0 = 9U;
      localB->s162_y0 = 12U;
      localB->s162_x1 = 41U;
      localB->s162_y1 = 53U;
      localB->s162_lineColor = 0U;
      localB->s162_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

      /* Event: '<S162>:301' */
      BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1, localB->s162_y0,
        localB->s162_y1, localB->s162_lineColor, localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
      localB->s162_lineColor = 1U;
      localB->s162_hCenter = 0U;
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:113' */
        localB->s162_y0 = (uint8_T)(localB->s162_stringNum * 7 + 12);

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      }

      /* Transition: '<S162>:110' */
      localDW->s162_is_List = BuckyWagon_01_IN_List_Wait2;
      break;

     case BuckyWagon_01_IN_List_Wait2:
      /* During 'List_Wait2': '<S162>:4' */
      /* Transition: '<S162>:107' */
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:103' */
        if (rtu_data[localB->s162_stringNum + rtu_listIndex] ==
            localDW->s162_oldData[localB->s162_stringNum]) {
          /* Transition: '<S162>:105' */
          localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
        } else {
          /* Transition: '<S162>:101' */
          sprintf(charPtr(&localB->s162_string[0]), "%-4d", rtu_data
                  [localB->s162_stringNum + rtu_listIndex]);
          localB->s162_string[4] = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 42U;
          localB->s162_x1 = 57U;
          localB->s162_y0 = (uint8_T)(localB->s162_stringNum * 7 + 12);
          localB->s162_y1 = (uint8_T)(localB->s162_y0 + 6);
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[localB->s162_stringNum] = rtu_data
            [localB->s162_stringNum + rtu_listIndex];
          localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
        }
      }

      /* Transition: '<S162>:79' */
      localB->s162_y0 = 55U;
      localB->s162_y1 = 63U;
      localB->s162_x0 = 0U;
      localB->s162_x1 = 63U;
      memcpy(&localB->s162_string[0], &rtu_statusTxt[0], 9);
      localB->s162_string[9] = 0U;

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      if (rtu_statusTxtMode == 1) {
        /* Transition: '<S162>:78' */
        localB->s162_fillColor = BuckyWagon_01_BLACK;
        localB->s162_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

        /* Event: '<S162>:301' */
        BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1, localB->s162_y0,
          localB->s162_y1, localB->s162_lineColor, localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
        localB->s162_lineColor = BuckyWagon_01_WHITE;
      } else {
        /* Transition: '<S162>:80' */
        localB->s162_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

        /* Event: '<S162>:301' */
        BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1, localB->s162_y0,
          localB->s162_y1, localB->s162_lineColor, localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
        localB->s162_lineColor = BuckyWagon_01_BLACK;
      }

      /* Transition: '<S162>:100' */
      localB->s162_y0 = 56U;
      localB->s162_font = BuckyWagon_01_FONT4x6;
      localB->s162_x0 = 17U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */

      /* Transition: '<S162>:92' */
      localDW->s162_timer = 0U;
      localDW->s162_is_List = BuckyWagon_01_IN_List_Idle_m;

      /* Entry 'List_Idle': '<S162>:5' */
      localB->s162_stringNum = 0U;
      break;

     default:
      BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }

    if (guard) {
      /* Transition: '<S162>:104' */
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:106' */
        memcpy(&localB->s162_string[0], &rtu_names[10 * (localB->s162_listIndexO
                + localB->s162_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      }

      /* Transition: '<S162>:108' */
      localDW->s162_is_List = BuckyWagon_01_IN_List_Wait;
    }
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S162>:166' */
  localB->s162_stringNum = 0U;
  while (localB->s162_stringNum < 4) {
    /* Transition: '<S162>:168' */
    localDW->s162_oldData[localB->s162_stringNum] = (int16_T)
      (rtu_data[rtu_quadIndex[localB->s162_stringNum]] + 1);
    localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
  }

  /* Transition: '<S162>:169' */
  localDW->s162_is_Quad = BuckyWagon_01_IN_Quad_Init;

  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'Quad_Init': '<S162>:22' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw string */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */

  /* draw lines */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 8U;
  localB->s162_y1 = 54U;
  localB->s162_x0 = 30U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw Vline' */

  /* Event: '<S162>:305' */
  BuckyWagon_01_DrawVline(localB->s162_x0, localB->s162_y0, localB->s162_y1,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw Vline' */
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S162>:71' */
  localDW->s162_is_Single = BuckyWagon_01_IN_Single_Init;

  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'Single_Init': '<S162>:7' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw string */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */

  /* draw lines */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localDW->s162_oldData[0] = (int16_T)(rtu_data[rtu_singleIndex] + 1);
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* During 'Quad': '<S162>:24' */
  if (localDW->s162_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S162>:85' */
    localDW->s162_is_Quad = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
    localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait1;
  } else {
    switch (localDW->s162_is_Quad) {
     case BuckyWagon_01_IN_Quad_Idle:
      /* During 'Quad_Idle': '<S162>:21' */
      if ((localDW->s162_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s162_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S162>:170' */
        localB->s162_stringNum = 0U;
        localB->s162_font = BuckyWagon_01_FONT6x8;
        localB->s162_fillColor = BuckyWagon_01_WHITE;
        localB->s162_hCenter = 0U;
        if (localDW->s162_oldData[0] != rtu_data[rtu_quadIndex[0]]) {
          /* Transition: '<S162>:171' */
          sprintf(charPtr(&localB->s162_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 5U;
          localB->s162_x1 = 29U;
          localB->s162_y0 = 23U;
          localB->s162_y1 = 30U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[0] = rtu_data[rtu_quadIndex[0]];
        } else {
          /* Transition: '<S162>:172' */
        }

        if (localDW->s162_oldData[1] != rtu_data[rtu_quadIndex[1]]) {
          /* Transition: '<S162>:174' */
          sprintf(charPtr(&localB->s162_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 32U;
          localB->s162_x1 = 55U;
          localB->s162_y0 = 23U;
          localB->s162_y1 = 30U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[1] = rtu_data[rtu_quadIndex[1]];
        } else {
          /* Transition: '<S162>:175' */
        }

        if (localDW->s162_oldData[2] != rtu_data[rtu_quadIndex[2]]) {
          /* Transition: '<S162>:176' */
          sprintf(charPtr(&localB->s162_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[2]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 5U;
          localB->s162_x1 = 29U;
          localB->s162_y0 = 33U;
          localB->s162_y1 = 40U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[2] = rtu_data[rtu_quadIndex[2]];
        } else {
          /* Transition: '<S162>:177' */
        }

        if (localDW->s162_oldData[3] != rtu_data[rtu_quadIndex[3]]) {
          /* Transition: '<S162>:179' */
          sprintf(charPtr(&localB->s162_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[3]]);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_x0 = 32U;
          localB->s162_x1 = 55U;
          localB->s162_y0 = 33U;
          localB->s162_y1 = 40U;
          localB->s162_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localDW->s162_oldData[3] = rtu_data[rtu_quadIndex[3]];
        } else {
          /* Transition: '<S162>:180' */
        }

        /* Transition: '<S162>:133' */
        localB->s162_y0 = 55U;
        localB->s162_y1 = 63U;
        localB->s162_x0 = 0U;
        localB->s162_x1 = 63U;
        memcpy(&localB->s162_string[0], &rtu_statusTxt[0], 9);
        localB->s162_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S162>:134' */
          localB->s162_fillColor = BuckyWagon_01_BLACK;
          localB->s162_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S162>:132' */
          localB->s162_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

          /* Event: '<S162>:301' */
          BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
            localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
          localB->s162_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S162>:131' */
        localB->s162_y0 = 56U;
        localB->s162_font = BuckyWagon_01_FONT4x6;
        localB->s162_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */

        /* Transition: '<S162>:178' */
        localDW->s162_timer = 0U;
        localDW->s162_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      } else {
        if (localDW->s162_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S162>:173' */
          localDW->s162_timer = (uint16_T)(localDW->s162_timer + 1);
          localDW->s162_is_Quad = BuckyWagon_01_IN_Quad_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_Quad_Init:
      /* During 'Quad_Init': '<S162>:22' */
      /* Transition: '<S162>:165' */
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 4) {
        /* Transition: '<S162>:163' */
        memcpy(&localB->s162_string[0], &rtu_namesline1[7 * rtu_quadIndex
               [localB->s162_stringNum]], 7);

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        memcpy(&localB->s162_string[0], &rtu_namesline2[7 * rtu_quadIndex
               [localB->s162_stringNum]], 7);
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 4);

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum - 3);
      }

      /* Transition: '<S162>:164' */
      localDW->s162_is_Quad = BuckyWagon_01_IN_Quad_Names;

      /* Entry 'Quad_Names': '<S162>:23' */
      localB->s162_hCenter = 0U;
      localB->s162_x0 = 10U;
      localB->s162_y0 = 10U;
      localB->s162_stringNum = 0U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_x0 = 5U;
      localB->s162_y0 = 16U;
      localB->s162_stringNum = 4U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_y0 = 41U;
      localB->s162_stringNum = 2U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_x0 = 10U;
      localB->s162_y0 = 47U;
      localB->s162_stringNum = 6U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_x0 = 32U;
      localB->s162_y0 = 10U;
      localB->s162_stringNum = 1U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_y0 = 16U;
      localB->s162_stringNum = 5U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_y0 = 41U;
      localB->s162_stringNum = 3U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      localB->s162_y0 = 47U;
      localB->s162_stringNum = 7U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

      /* Event: '<S162>:304' */
      BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
        localB->s162_y0, localB->s162_font, localB->s162_hCenter,
        localB->s162_vCenter, rtu_21, localB->s162_lineColor,
        localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw String' */
      break;

     case BuckyWagon_01_IN_Quad_Names:
      /* During 'Quad_Names': '<S162>:23' */
      /* Transition: '<S162>:167' */
      localDW->s162_timer = BuckyWagon_01_UPDATE_TIME;
      localB->s162_font = BuckyWagon_01_FONT6x8;
      localDW->s162_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_internal_select_var(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S162>:146' */
  localDW->s162_is_select_var = BuckyWagon_01_IN_Select_Init;

  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'Select_Init': '<S162>:33' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw lines and name */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 63U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */
  localDW->s162_selectIndex = 0U;
  localDW->s162_selectVIndex = 0U;
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Graphical Function 'storeSelect': '<S162>:25' */
  /* Transition: '<S162>:160' */
  if (localDW->s162_setupIndex == 1) {
    /* Transition: '<S162>:159' */
    localB->s162_singleIndexO = localDW->s162_selectIndex;

    /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem2' */

    /* Event: '<S162>:316' */

    /* S-Function (motohawk_sfun_data_write): '<S175>/motohawk_data_write' */
    /* Write to Data Storage as scalar: singleIndex */
    {
      singleIndex_DataStore() = localB->s162_singleIndexO;
    }

    /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem2' */
  } else if ((localDW->s162_setupIndex == 2) || (localDW->s162_setupIndex == 3))
  {
    /* Transition: '<S162>:161' */
    localB->s162_dualIndexO[0] = rtu_dualIndex[0];
    localB->s162_dualIndexO[1] = rtu_dualIndex[1];
    localB->s162_dualIndexO[localDW->s162_setupIndex - 2] =
      localDW->s162_selectIndex;

    /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem3' */

    /* Event: '<S162>:315' */

    /* S-Function (motohawk_sfun_data_write): '<S176>/motohawk_data_write' */
    /* Write to Data Storage as vector: dualIndex */
    {
      dualIndex_DataStore()[0] = localB->s162_dualIndexO[0];
      dualIndex_DataStore()[1] = localB->s162_dualIndexO[1];
    }

    /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem3' */
  } else {
    if (localDW->s162_setupIndex >= 4) {
      /* Transition: '<S162>:162' */
      localB->s162_quadIndexO[0] = rtu_quadIndex[0];
      localB->s162_quadIndexO[1] = rtu_quadIndex[1];
      localB->s162_quadIndexO[2] = rtu_quadIndex[2];
      localB->s162_quadIndexO[3] = rtu_quadIndex[3];
      localB->s162_quadIndexO[localDW->s162_setupIndex - 4] =
        localDW->s162_selectIndex;

      /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem4' */

      /* Event: '<S162>:317' */

      /* S-Function (motohawk_sfun_data_write): '<S177>/motohawk_data_write' */
      /* Write to Data Storage as vector: quadIndex */
      {
        quadIndex_DataStore()[0] = localB->s162_quadIndexO[0];
        quadIndex_DataStore()[1] = localB->s162_quadIndexO[1];
        quadIndex_DataStore()[2] = localB->s162_quadIndexO[2];
        quadIndex_DataStore()[3] = localB->s162_quadIndexO[3];
      }

      /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem4' */
    }
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

  /* Entry 'Setup_Init': '<S162>:16' */
  /* Event: '<S162>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S19>/Clear Screen' */

  /* draw lines and name */
  localB->s162_stringNum = 15U;
  sprintf(charPtr(&localB->s162_string[0]), "UWMAD");
  localB->s162_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

  /* Event: '<S162>:303' */
  BuckyWagon_01_SendString_efficient(localB->s162_stringNum, localB->
    s162_string[0], localB->s162_string[1], localB->s162_string[2],
    localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
    localB->s162_string[6], localB->s162_string, localB->s162_string[7],
    localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
    localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
    &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
    localB->s162_string[16]);

  /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
  localB->s162_y0 = 8U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 63U;
  localB->s162_lineColor = BuckyWagon_01_BLACK;
  localB->s162_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw HLine' */

  /* Event: '<S162>:306' */
  BuckyWagon_01_DrawHLine(localB->s162_x0, localB->s162_x1, localB->s162_y0,
    localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw HLine' */
  localB->s162_hCenter = 1U;
  localB->s162_vCenter = 0U;
  localB->s162_font = BuckyWagon_01_FONT4x6;
  localB->s162_x0 = 32U;
  localB->s162_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

  /* Event: '<S162>:304' */
  BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
    localB->s162_y0, localB->s162_font, localB->s162_hCenter,
    localB->s162_vCenter, rtu_21, localB->s162_lineColor, localB->s162_fillColor);

  /* End of Outputs for SubSystem: '<S19>/Draw String' */
  localDW->s162_setupVIndex = 0U;
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* Graphical Function 'loadSelect': '<S162>:26' */
  /* Transition: '<S162>:156' */
  if (localDW->s162_setupIndex == 1) {
    /* Transition: '<S162>:155' */
    localDW->s162_selectIndex = rtu_singleIndex;
  } else if ((localDW->s162_setupIndex == 2) || (localDW->s162_setupIndex == 3))
  {
    /* Transition: '<S162>:157' */
    localDW->s162_selectIndex = rtu_dualIndex[localDW->s162_setupIndex - 2];
  } else {
    if (localDW->s162_setupIndex >= 4) {
      /* Transition: '<S162>:158' */
      localDW->s162_selectIndex = rtu_quadIndex[localDW->s162_setupIndex - 4];
    }
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  boolean_T guard;
  boolean_T guard_0;

  /* During 'Setup': '<S162>:13' */
  guard = FALSE;
  guard_0 = FALSE;
  switch (localDW->s162_is_Setup) {
   case BuckyWagon_01_IN_Setup_Init:
    /* During 'Setup_Init': '<S162>:16' */
    /* Transition: '<S162>:59' */
    if (localDW->s162_setupIndex >= localDW->s162_setupVIndex + 6) {
      /* Transition: '<S162>:53' */
      localDW->s162_setupVIndex = (uint8_T)(localDW->s162_setupIndex - 5);
      localB->s162_stringNum = 0U;
    } else if (localDW->s162_setupIndex < localDW->s162_setupVIndex) {
      /* Transition: '<S162>:52' */
      localDW->s162_setupVIndex = localDW->s162_setupIndex;
      localB->s162_stringNum = 0U;
    } else {
      /* Transition: '<S162>:54' */
      localB->s162_stringNum = 0U;
    }

    while (localB->s162_stringNum < 6) {
      /* Transition: '<S162>:46' */
      memcpy(&localB->s162_string[0], &rtu_setupNames[13 *
             (localDW->s162_setupVIndex + localB->s162_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
    }

    /* Transition: '<S162>:50' */
    localDW->s162_is_Setup = BuckyWagon_01_IN_setup_Wait;
    break;

   case BuckyWagon_01_IN_select_var:
    /* During 'select_var': '<S162>:30' */
    switch (localDW->s162_is_select_var) {
     case BuckyWagon_01_IN_Select_Init:
      /* During 'Select_Init': '<S162>:33' */
      /* Transition: '<S162>:150' */
      if (localDW->s162_selectIndex >= localDW->s162_selectVIndex + 6) {
        /* Transition: '<S162>:144' */
        localDW->s162_selectVIndex = (uint8_T)(localDW->s162_selectIndex - 5);
        localB->s162_stringNum = 0U;
      } else if (localDW->s162_selectIndex < localDW->s162_selectVIndex) {
        /* Transition: '<S162>:143' */
        localDW->s162_selectVIndex = localDW->s162_selectIndex;
        localB->s162_stringNum = 0U;
      } else {
        /* Transition: '<S162>:145' */
        localB->s162_stringNum = 0U;
      }

      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:137' */
        memcpy(&localB->s162_string[0], &rtu_names[10 *
               (localDW->s162_selectVIndex + localB->s162_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

        /* Event: '<S162>:303' */
        BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
          localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
          localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
          localB->s162_string[6], localB->s162_string, localB->s162_string[7],
          localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
          localB->s162_string[11], localB->s162_string[12], localB->s162_string
          [13], &localB->s162_string[7], localB->s162_string[14],
          localB->s162_string[15], localB->s162_string[16]);

        /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      }

      /* Transition: '<S162>:141' */
      localDW->s162_is_select_var = BuckyWagon_01_IN_select_Wait;
      break;

     case BuckyWagon_01_IN_select_Idle:
      /* During 'select_Idle': '<S162>:32' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S162>:154' */
        BuckyWagon_01_storeSelect(rtu_dualIndex, rtu_quadIndex, localB, localDW);
        localDW->s162_is_select_var = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
        localDW->s162_is_Setup = BuckyWagon_01_IN_Setup_Init;
        BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
      } else if (localDW->s162_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S162>:152' */
        if (localDW->s162_selectIndex == 0) {
          /* Transition: '<S162>:153' */
          localDW->s162_is_select_var = BuckyWagon_01_IN_select_Idle;
        } else {
          /* Transition: '<S162>:151' */
          localDW->s162_selectIndex = (uint8_T)(localDW->s162_selectIndex - 1);
          guard = TRUE;
        }
      } else {
        if (localDW->s162_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S162>:149' */
          if (rtu_numFields - 1 == localDW->s162_selectIndex) {
            /* Transition: '<S162>:147' */
            localDW->s162_is_select_var = BuckyWagon_01_IN_select_Idle;
          } else {
            /* Transition: '<S162>:148' */
            localDW->s162_selectIndex = (uint8_T)(localDW->s162_selectIndex + 1);
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_select_Wait:
      /* During 'select_Wait': '<S162>:31' */
      /* Transition: '<S162>:139' */
      localB->s162_x0 = 0U;
      localB->s162_y0 = 12U;
      localB->s162_x1 = 64U;
      localB->s162_y1 = 53U;
      localB->s162_lineColor = 0U;
      localB->s162_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

      /* Event: '<S162>:301' */
      BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1, localB->s162_y0,
        localB->s162_y1, localB->s162_lineColor, localB->s162_fillColor);

      /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
      localB->s162_lineColor = 1U;
      localB->s162_hCenter = 1U;
      localB->s162_stringNum = 0U;
      while (localB->s162_stringNum < 6) {
        /* Transition: '<S162>:136' */
        localB->s162_y0 = (uint8_T)(localB->s162_stringNum * 7 + 12);
        if (localDW->s162_selectVIndex + localB->s162_stringNum ==
            localDW->s162_selectIndex) {
          /* Transition: '<S162>:138' */
          localB->s162_fillColor = BuckyWagon_01_BLACK;
          localB->s162_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
        } else {
          /* Transition: '<S162>:140' */
          localB->s162_fillColor = BuckyWagon_01_WHITE;
          localB->s162_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
        }
      }

      /* Transition: '<S162>:142' */
      localDW->s162_is_select_var = BuckyWagon_01_IN_select_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      break;
    }
    break;

   case BuckyWagon_01_IN_setup_Idle:
    /* During 'setup_Idle': '<S162>:15' */
    if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S162>:66' */
      if (localDW->s162_setupIndex == 0) {
        /* Transition: '<S162>:65' */
        if (rtu_screen == 1) {
          /* Transition: '<S162>:36' */
          localDW->s162_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S162>:42' */
          localDW->s162_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S162>:38' */
          localDW->s162_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S162>:41' */
          localDW->s162_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        /* Transition: '<S162>:69' */
        BuckyWagon_01_loadSelect(rtu_singleIndex, rtu_dualIndex, rtu_quadIndex,
          localDW);
        localDW->s162_is_Setup = BuckyWagon_01_IN_select_var;
        BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      }
    } else if (localDW->s162_sfEvent == BuckyWagon_01_event_upPressed) {
      /* Transition: '<S162>:61' */
      if (localDW->s162_setupIndex == 0) {
        /* Transition: '<S162>:62' */
        localDW->s162_is_Setup = BuckyWagon_01_IN_setup_Idle;

        /* Entry 'setup_Idle': '<S162>:15' */
        localB->s162_stringNum = 0U;
      } else {
        /* Transition: '<S162>:60' */
        localDW->s162_setupIndex = (uint8_T)(localDW->s162_setupIndex - 1);
        guard_0 = TRUE;
      }
    } else {
      if (localDW->s162_sfEvent == BuckyWagon_01_event_downPressed) {
        /* Transition: '<S162>:58' */
        if (localDW->s162_setupIndex == 7) {
          /* Transition: '<S162>:56' */
          localDW->s162_is_Setup = BuckyWagon_01_IN_setup_Idle;

          /* Entry 'setup_Idle': '<S162>:15' */
          localB->s162_stringNum = 0U;
        } else {
          /* Transition: '<S162>:57' */
          localDW->s162_setupIndex = (uint8_T)(localDW->s162_setupIndex + 1);
          guard_0 = TRUE;
        }
      }
    }
    break;

   case BuckyWagon_01_IN_setup_Wait:
    /* During 'setup_Wait': '<S162>:14' */
    /* Transition: '<S162>:48' */
    localB->s162_x0 = 0U;
    localB->s162_y0 = 12U;
    localB->s162_x1 = 64U;
    localB->s162_y1 = 53U;
    localB->s162_lineColor = 0U;
    localB->s162_fillColor = 0U;

    /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

    /* Event: '<S162>:301' */
    BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1, localB->s162_y0,
      localB->s162_y1, localB->s162_lineColor, localB->s162_fillColor);

    /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
    localB->s162_lineColor = 1U;
    localB->s162_hCenter = 1U;
    localB->s162_stringNum = 0U;
    while (localB->s162_stringNum < 6) {
      /* Transition: '<S162>:45' */
      localB->s162_y0 = (uint8_T)(localB->s162_stringNum * 7 + 12);
      if (localDW->s162_setupVIndex + localB->s162_stringNum ==
          localDW->s162_setupIndex) {
        /* Transition: '<S162>:47' */
        localB->s162_fillColor = BuckyWagon_01_BLACK;
        localB->s162_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      } else {
        /* Transition: '<S162>:49' */
        localB->s162_fillColor = BuckyWagon_01_WHITE;
        localB->s162_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

        /* Event: '<S162>:304' */
        BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
          localB->s162_y0, localB->s162_font, localB->s162_hCenter,
          localB->s162_vCenter, rtu_21, localB->s162_lineColor,
          localB->s162_fillColor);

        /* End of Outputs for SubSystem: '<S19>/Draw String' */
        localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
      }
    }

    /* Transition: '<S162>:51' */
    localDW->s162_is_Setup = BuckyWagon_01_IN_setup_Idle;

    /* Entry 'setup_Idle': '<S162>:15' */
    localB->s162_stringNum = 0U;
    break;

   case BuckyWagon_01_IN_wait:
    /* During 'wait': '<S162>:11' */
    if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S162>:81' */
      localDW->s162_is_Setup = BuckyWagon_01_IN_Setup_Init;
      BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
    }
    break;

   default:
    /* Transition: '<S162>:82' */
    localDW->s162_is_Setup = BuckyWagon_01_IN_wait;

    /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

    /* Entry 'wait': '<S162>:11' */
    /* Event: '<S162>:300' */
    BuckyWagon_01_ClearScreen();

    /* End of Outputs for SubSystem: '<S19>/Clear Screen' */
    localDW->s162_setupIndex = 0U;
    break;
  }

  if (guard_0) {
    if (localDW->s162_setupIndex >= localDW->s162_setupVIndex + 6) {
      /* Transition: '<S162>:53' */
      localDW->s162_setupVIndex = (uint8_T)(localDW->s162_setupIndex - 5);
      localB->s162_stringNum = 0U;
    } else if (localDW->s162_setupIndex < localDW->s162_setupVIndex) {
      /* Transition: '<S162>:52' */
      localDW->s162_setupVIndex = localDW->s162_setupIndex;
      localB->s162_stringNum = 0U;
    } else {
      /* Transition: '<S162>:54' */
      localB->s162_stringNum = 0U;
    }

    while (localB->s162_stringNum < 6) {
      /* Transition: '<S162>:46' */
      memcpy(&localB->s162_string[0], &rtu_setupNames[13 *
             (localDW->s162_setupVIndex + localB->s162_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
    }

    /* Transition: '<S162>:50' */
    localDW->s162_is_Setup = BuckyWagon_01_IN_setup_Wait;
  }

  if (guard) {
    if (localDW->s162_selectIndex >= localDW->s162_selectVIndex + 6) {
      /* Transition: '<S162>:144' */
      localDW->s162_selectVIndex = (uint8_T)(localDW->s162_selectIndex - 5);
      localB->s162_stringNum = 0U;
    } else if (localDW->s162_selectIndex < localDW->s162_selectVIndex) {
      /* Transition: '<S162>:143' */
      localDW->s162_selectVIndex = localDW->s162_selectIndex;
      localB->s162_stringNum = 0U;
    } else {
      /* Transition: '<S162>:145' */
      localB->s162_stringNum = 0U;
    }

    while (localB->s162_stringNum < 6) {
      /* Transition: '<S162>:137' */
      memcpy(&localB->s162_string[0], &rtu_names[10 *
             (localDW->s162_selectVIndex + localB->s162_stringNum)], 10);

      /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

      /* Event: '<S162>:303' */
      BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
        localB->s162_string[0], localB->s162_string[1], localB->s162_string[2],
        localB->s162_string[3], localB->s162_string[4], localB->s162_string[5],
        localB->s162_string[6], localB->s162_string, localB->s162_string[7],
        localB->s162_string[8], localB->s162_string[9], localB->s162_string[10],
        localB->s162_string[11], localB->s162_string[12], localB->s162_string[13],
        &localB->s162_string[7], localB->s162_string[14], localB->s162_string[15],
        localB->s162_string[16]);

      /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
      localB->s162_stringNum = (uint8_T)(localB->s162_stringNum + 1);
    }

    /* Transition: '<S162>:141' */
    localDW->s162_is_select_var = BuckyWagon_01_IN_select_Wait;
  }
}

/* Function for Stateflow: '<S19>/Chart' */
static void BuckyWagon_01_chartstep_c2_BuckyWagon_01(uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  int32_T temp;

  /* During: Foreground/MiniViewDisplay/Chart */
  if (localDW->s162_is_active_c2_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/Chart */
    localDW->s162_is_active_c2_BuckyWagon_01 = 1U;

    /* Transition: '<S162>:43' */
    localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

    /* Entry 'PowerupDelay': '<S162>:9' */
    localDW->s162_timer = 0U;
  } else {
    switch (localDW->s162_is_c2_BuckyWagon_01) {
     case BuckyWagon_01_IN_Dual:
      BuckyWagon_01_Dual(rtu_dualIndex, rtu_names, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_List:
      BuckyWagon_01_List(rtu_listIndex, rtu_names, rtu_numFields, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_PowerupDelay:
      /* During 'PowerupDelay': '<S162>:9' */
      if (localDW->s162_timer >= rtu_startupDelay) {
        /* Transition: '<S162>:40' */
        if (rtu_screen == 1) {
          /* Transition: '<S162>:36' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S162>:42' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S162>:38' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S162>:41' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        localDW->s162_timer = (uint16_T)(localDW->s162_timer + 1);
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
      /* During 'Single': '<S162>:12' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuPressed) {
        /* Transition: '<S162>:83' */
        localDW->s162_is_Single = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
        localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait3;
      } else {
        switch (localDW->s162_is_Single) {
         case BuckyWagon_01_IN_List_Idle_m:
          /* During 'List_Idle': '<S162>:10' */
          if ((localDW->s162_sfEvent == BuckyWagon_01_event_tick) &&
              (localDW->s162_timer >= BuckyWagon_01_UPDATE_TIME)) {
            /* Transition: '<S162>:123' */
            localB->s162_stringNum = 0U;
            localB->s162_font = BuckyWagon_01_FONT8x15;
            localB->s162_fillColor = BuckyWagon_01_WHITE;
            localB->s162_hCenter = 0U;
            if (localDW->s162_oldData[0] != rtu_data[rtu_singleIndex]) {
              /* Transition: '<S162>:126' */
              sprintf(charPtr(&localB->s162_string[0]), "%4d",
                      rtu_data[rtu_singleIndex]);

              /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

              /* Event: '<S162>:303' */
              BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
                localB->s162_string[0], localB->s162_string[1],
                localB->s162_string[2], localB->s162_string[3],
                localB->s162_string[4], localB->s162_string[5],
                localB->s162_string[6], localB->s162_string, localB->
                s162_string[7], localB->s162_string[8], localB->s162_string[9],
                localB->s162_string[10], localB->s162_string[11],
                localB->s162_string[12], localB->s162_string[13],
                &localB->s162_string[7], localB->s162_string[14],
                localB->s162_string[15], localB->s162_string[16]);

              /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
              localB->s162_x0 = 0U;
              localB->s162_x1 = 64U;
              localB->s162_y0 = 25U;
              localB->s162_y1 = 39U;
              localB->s162_fillColor = BuckyWagon_01_WHITE;
              localB->s162_lineColor = 0U;

              /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

              /* Event: '<S162>:301' */
              BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                localB->s162_fillColor);

              /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              localB->s162_lineColor = BuckyWagon_01_BLACK;
              localB->s162_x0 = 15U;

              /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

              /* Event: '<S162>:304' */
              BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
                localB->s162_y0, localB->s162_font, localB->s162_hCenter,
                localB->s162_vCenter, rtu_21, localB->s162_lineColor,
                localB->s162_fillColor);

              /* End of Outputs for SubSystem: '<S19>/Draw String' */
              localDW->s162_oldData[0] = rtu_data[rtu_singleIndex];
              localB->s162_x0 = 6U;
              localB->s162_x1 = 58U;
              localB->s162_y0 = 41U;
              localB->s162_y1 = 48U;
              localB->s162_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

              /* Event: '<S162>:301' */
              BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                localB->s162_fillColor);

              /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              temp = rtu_barMin[rtu_singleIndex];
              if (rtu_data[rtu_singleIndex] > (temp >=
                   rtu_barMax[rtu_singleIndex] ? temp :
                   rtu_barMax[rtu_singleIndex])) {
                /* Transition: '<S162>:127' */
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
                  /* Transition: '<S162>:125' */
                  temp = rtu_barMin[rtu_singleIndex];
                  temp = ((temp <= rtu_barMax[rtu_singleIndex] ? temp :
                           rtu_barMax[rtu_singleIndex]) -
                          rtu_barMin[rtu_singleIndex]) * 52 /
                    (rtu_barMax[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    + 6;
                } else {
                  /* Transition: '<S162>:121' */
                  temp = (rtu_data[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    * 52 / (rtu_barMax[rtu_singleIndex] -
                            rtu_barMin[rtu_singleIndex]) + 6;
                }
              }

              if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp >= 32)) {
                /* Transition: '<S162>:128' */
                localB->s162_x1 = (uint8_T)temp;
                localB->s162_fillColor = BuckyWagon_01_BLACK;
                localB->s162_x0 = 32U;

                /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

                /* Event: '<S162>:301' */
                BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                  localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                  localB->s162_fillColor);

                /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              } else if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp < 32))
              {
                /* Transition: '<S162>:122' */
                localB->s162_x0 = (uint8_T)temp;
                localB->s162_x1 = 32U;
                localB->s162_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

                /* Event: '<S162>:301' */
                BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                  localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                  localB->s162_fillColor);

                /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 1) {
                /* Transition: '<S162>:120' */
                localB->s162_x0 = (uint8_T)temp;
                localB->s162_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

                /* Event: '<S162>:301' */
                BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                  localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                  localB->s162_fillColor);

                /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 3) {
                /* Transition: '<S162>:68' */
                localB->s162_x0 = (uint8_T)temp;

                /* Outputs for Function Call SubSystem: '<S19>/Draw Vline' */

                /* Event: '<S162>:305' */
                BuckyWagon_01_DrawVline(localB->s162_x0, localB->s162_y0,
                  localB->s162_y1, localB->s162_lineColor,
                  localB->s162_fillColor);

                /* End of Outputs for SubSystem: '<S19>/Draw Vline' */
              } else {
                /* Transition: '<S162>:124' */
                localB->s162_x1 = (uint8_T)temp;
                localB->s162_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

                /* Event: '<S162>:301' */
                BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                  localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                  localB->s162_fillColor);

                /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              }

              /* Transition: '<S162>:119' */
              /* Transition: '<S162>:115' */
            } else {
              /* Transition: '<S162>:118' */
            }

            /* Transition: '<S162>:77' */
            localB->s162_y0 = 55U;
            localB->s162_y1 = 63U;
            localB->s162_x0 = 0U;
            localB->s162_x1 = 63U;
            memcpy(&localB->s162_string[0], &rtu_statusTxt[0], 9);
            localB->s162_string[9] = 0U;

            /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

            /* Event: '<S162>:303' */
            BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
              localB->s162_string[0], localB->s162_string[1],
              localB->s162_string[2], localB->s162_string[3],
              localB->s162_string[4], localB->s162_string[5],
              localB->s162_string[6], localB->s162_string, localB->s162_string[7],
              localB->s162_string[8], localB->s162_string[9],
              localB->s162_string[10], localB->s162_string[11],
              localB->s162_string[12], localB->s162_string[13],
              &localB->s162_string[7], localB->s162_string[14],
              localB->s162_string[15], localB->s162_string[16]);

            /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
            if (rtu_statusTxtMode == 1) {
              /* Transition: '<S162>:75' */
              localB->s162_fillColor = BuckyWagon_01_BLACK;
              localB->s162_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

              /* Event: '<S162>:301' */
              BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                localB->s162_fillColor);

              /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              localB->s162_lineColor = BuckyWagon_01_WHITE;
            } else {
              /* Transition: '<S162>:135' */
              localB->s162_lineColor = BuckyWagon_01_WHITE;
              localB->s162_fillColor = BuckyWagon_01_WHITE;

              /* Outputs for Function Call SubSystem: '<S19>/Draw Rect' */

              /* Event: '<S162>:301' */
              BuckyWagon_01_DrawRect(localB->s162_x0, localB->s162_x1,
                localB->s162_y0, localB->s162_y1, localB->s162_lineColor,
                localB->s162_fillColor);

              /* End of Outputs for SubSystem: '<S19>/Draw Rect' */
              localB->s162_lineColor = BuckyWagon_01_BLACK;
            }

            /* Transition: '<S162>:44' */
            localB->s162_y0 = 56U;
            localB->s162_font = BuckyWagon_01_FONT4x6;
            localB->s162_x0 = 17U;

            /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

            /* Event: '<S162>:304' */
            BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
              localB->s162_y0, localB->s162_font, localB->s162_hCenter,
              localB->s162_vCenter, rtu_21, localB->s162_lineColor,
              localB->s162_fillColor);

            /* End of Outputs for SubSystem: '<S19>/Draw String' */

            /* Transition: '<S162>:116' */
            localDW->s162_timer = 0U;
            localDW->s162_is_Single = BuckyWagon_01_IN_List_Idle_m;
          } else {
            if (localDW->s162_sfEvent == BuckyWagon_01_event_tick) {
              /* Transition: '<S162>:117' */
              localDW->s162_timer = (uint16_T)(localDW->s162_timer + 1);
              localDW->s162_is_Single = BuckyWagon_01_IN_List_Idle_m;
            }
          }
          break;

         case BuckyWagon_01_IN_Single_Init:
          /* During 'Single_Init': '<S162>:7' */
          /* Transition: '<S162>:70' */
          localDW->s162_is_Single = BuckyWagon_01_IN_singleNames;

          /* Entry 'singleNames': '<S162>:6' */
          localB->s162_hCenter = 1U;
          localB->s162_font = BuckyWagon_01_FONT6x8;
          localB->s162_x0 = 30U;
          localB->s162_stringNum = 0U;
          memcpy(&localB->s162_string[0], &rtu_names[10 * rtu_singleIndex], 10);

          /* Outputs for Function Call SubSystem: '<S19>/Send String_efficient' */

          /* Event: '<S162>:303' */
          BuckyWagon_01_SendString_efficient(localB->s162_stringNum,
            localB->s162_string[0], localB->s162_string[1], localB->s162_string
            [2], localB->s162_string[3], localB->s162_string[4],
            localB->s162_string[5], localB->s162_string[6], localB->s162_string,
            localB->s162_string[7], localB->s162_string[8], localB->s162_string
            [9], localB->s162_string[10], localB->s162_string[11],
            localB->s162_string[12], localB->s162_string[13],
            &localB->s162_string[7], localB->s162_string[14],
            localB->s162_string[15], localB->s162_string[16]);

          /* End of Outputs for SubSystem: '<S19>/Send String_efficient' */
          localB->s162_y0 = 14U;

          /* Outputs for Function Call SubSystem: '<S19>/Draw String' */

          /* Event: '<S162>:304' */
          BuckyWagon_01_DrawString(localB->s162_stringNum, localB->s162_x0,
            localB->s162_y0, localB->s162_font, localB->s162_hCenter,
            localB->s162_vCenter, rtu_21, localB->s162_lineColor,
            localB->s162_fillColor);

          /* End of Outputs for SubSystem: '<S19>/Draw String' */
          break;

         case BuckyWagon_01_IN_singleNames:
          /* During 'singleNames': '<S162>:6' */
          /* Transition: '<S162>:129' */
          localDW->s162_timer = BuckyWagon_01_UPDATE_TIME;
          localDW->s162_is_Single = BuckyWagon_01_IN_List_Idle_m;
          break;

         default:
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_wait1:
      /* During 'wait1': '<S162>:17' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S162>:90' */
        localB->s162_screenO = 2U;

        /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem1' */

        /* Event: '<S162>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s162_screenO);

        /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem1' */
        localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
        BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S162>:86' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S162>:82' */
          localDW->s162_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

          /* Entry 'wait': '<S162>:11' */
          /* Event: '<S162>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S19>/Clear Screen' */
          localDW->s162_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait2:
      /* During 'wait2': '<S162>:29' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S162>:89' */
        localB->s162_screenO = 1U;

        /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem1' */

        /* Event: '<S162>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s162_screenO);

        /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem1' */
        localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
        BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S162>:37' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S162>:82' */
          localDW->s162_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

          /* Entry 'wait': '<S162>:11' */
          /* Event: '<S162>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S19>/Clear Screen' */
          localDW->s162_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait3:
      /* During 'wait3': '<S162>:28' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S162>:88' */
        localB->s162_screenO = 0U;

        /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem1' */

        /* Event: '<S162>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s162_screenO);

        /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem1' */
        localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
        BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S162>:35' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S162>:82' */
          localDW->s162_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

          /* Entry 'wait': '<S162>:11' */
          /* Event: '<S162>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S19>/Clear Screen' */
          localDW->s162_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait4:
      /* During 'wait4': '<S162>:27' */
      if (localDW->s162_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S162>:87' */
        localB->s162_screenO = 4U;

        /* Outputs for Function Call SubSystem: '<S19>/Function-Call Subsystem1' */

        /* Event: '<S162>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s162_screenO);

        /* End of Outputs for SubSystem: '<S19>/Function-Call Subsystem1' */
        localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
        BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S162>:39' */
          localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S162>:82' */
          localDW->s162_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S19>/Clear Screen' */

          /* Entry 'wait': '<S162>:11' */
          /* Event: '<S162>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S19>/Clear Screen' */
          localDW->s162_setupIndex = 0U;
        }
      }
      break;

     default:
      /* Transition: '<S162>:43' */
      localDW->s162_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

      /* Entry 'PowerupDelay': '<S162>:9' */
      localDW->s162_timer = 0U;
      break;
    }
  }
}

/* Initial conditions for trigger system: '<S19>/Chart' */
void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  int32_T i;
  localDW->s162_is_Dual = 0U;
  localDW->s162_is_List = 0U;
  localDW->s162_is_Quad = 0U;
  localDW->s162_is_Setup = 0U;
  localDW->s162_is_select_var = 0U;
  localDW->s162_is_Single = 0U;
  localDW->s162_is_active_c2_BuckyWagon_01 = 0U;
  localDW->s162_is_c2_BuckyWagon_01 = 0U;
  localDW->s162_timer = 0U;
  for (i = 0; i < 6; i++) {
    localDW->s162_oldData[i] = 0;
  }

  localDW->s162_setupIndex = 0U;
  localDW->s162_setupVIndex = 0U;
  localDW->s162_selectIndex = 0U;
  localDW->s162_selectVIndex = 0U;
  localB->s162_mode = 0U;
  localB->s162_x0 = 0U;
  localB->s162_x1 = 0U;
  localB->s162_y0 = 0U;
  localB->s162_y1 = 0U;
  localB->s162_lineColor = 0U;
  localB->s162_fillColor = 0U;
  localB->s162_stringNum = 0U;
  for (i = 0; i < 18; i++) {
    localB->s162_string[i] = 0U;
  }

  localB->s162_font = 0U;
  localB->s162_hCenter = 0U;
  localB->s162_vCenter = 0U;
  localB->s162_listIndexO = 0U;
  localB->s162_screenO = 0U;
  localB->s162_dualIndexO[0] = 0U;
  localB->s162_dualIndexO[1] = 0U;
  localB->s162_quadIndexO[0] = 0U;
  localB->s162_quadIndexO[1] = 0U;
  localB->s162_quadIndexO[2] = 0U;
  localB->s162_quadIndexO[3] = 0U;
  localB->s162_singleIndexO = 0U;
}

/* Start for trigger system: '<S19>/Chart' */
void BuckyWagon_01_Chart_Start(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Start for Function Call SubSystem: '<S19>/Clear Screen' */
  BuckyWagon_01_ClearScreen_Start();

  /* End of Start for SubSystem: '<S19>/Clear Screen' */

  /* Start for Function Call SubSystem: '<S19>/Draw Rect' */
  BuckyWagon_01_DrawRect_Start();

  /* End of Start for SubSystem: '<S19>/Draw Rect' */

  /* Start for Function Call SubSystem: '<S19>/Send String_efficient' */
  BuckyWagon_01_SendString_efficient_Start();

  /* End of Start for SubSystem: '<S19>/Send String_efficient' */

  /* Start for Function Call SubSystem: '<S19>/Draw String' */
  BuckyWagon_01_DrawString_Start();

  /* End of Start for SubSystem: '<S19>/Draw String' */

  /* Start for Function Call SubSystem: '<S19>/Draw Vline' */
  BuckyWagon_01_DrawVline_Start();

  /* End of Start for SubSystem: '<S19>/Draw Vline' */

  /* Start for Function Call SubSystem: '<S19>/Draw HLine' */
  BuckyWagon_01_DrawHLine_Start();

  /* End of Start for SubSystem: '<S19>/Draw HLine' */
}

/* Output and update for trigger system: '<S19>/Chart' */
void BuckyWagon_01_Chart(const boolean_T rtu_0[7], uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW,
  rtZCE_Chart_BuckyWagon_01 *localZCE)
{
  boolean_T zcEvent[7];
  int8_T rtb_inputevents[7];
  int32_T i;
  boolean_T tmp;
  boolean_T zcEvent_0;

  /* Stateflow: '<S19>/Chart' incorporates:
   *  TriggerPort: '<S162>/ input events '
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
      /* Event: '<S162>:298' */
      localDW->s162_sfEvent = BuckyWagon_01_event_tick;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[1U] == 1) {
      /* Event: '<S162>:307' */
      localDW->s162_sfEvent = BuckyWagon_01_event_upPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[2U] == -1) {
      /* Event: '<S162>:308' */
      localDW->s162_sfEvent = BuckyWagon_01_event_upReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[3U] == 1) {
      /* Event: '<S162>:309' */
      localDW->s162_sfEvent = BuckyWagon_01_event_menuPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[4U] == -1) {
      /* Event: '<S162>:310' */
      localDW->s162_sfEvent = BuckyWagon_01_event_menuReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[5U] == 1) {
      /* Event: '<S162>:311' */
      localDW->s162_sfEvent = BuckyWagon_01_event_downPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[6U] == -1) {
      /* Event: '<S162>:312' */
      localDW->s162_sfEvent = BuckyWagon_01_event_downReleased;
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
 *    '<S19>/Enabled Subsystem'
 *    '<S19>/Enabled Subsystem1'
 *    '<S19>/Enabled Subsystem2'
 */
void BuckyWagon_01_EnabledSubsystem(boolean_T rtu_0, uint8_T rtu_1,
  rtB_EnabledSubsystem_BuckyWagon_01 *localB)
{
  /* Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S170>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S170>/In' */
    localB->s170_In = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S19>/Enabled Subsystem' */
}

/* Initial conditions for function-call system: '<S178>/Fault Iterator' */
void BuckyWagon_01_FaultIterator_Init(rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
  localDW->s192_UnitDelay_DSTATE = 0;
}

/* Output and update for function-call system: '<S178>/Fault Iterator' */
void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* local block i/o variables */
  fault_T rtb_UnitDelay_fi;
  fault_T rtb_motohawk_fault_iterator_o2;

  /* UnitDelay: '<S192>/Unit Delay' */
  rtb_UnitDelay_fi = localDW->s192_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_fault_iterator): '<S192>/motohawk_fault_iterator' */
  /* Get Next Active Fault */
  {
    extern boolean_T IsFaultValid(uint32_T fault);
    extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
    rtb_motohawk_fault_iterator_o2 = GetNextActiveFault((uint32_T)
      (rtb_UnitDelay_fi), 1);
    localB->s192_motohawk_fault_iterator_o1 = IsFaultValid
      (rtb_motohawk_fault_iterator_o2);
  }

  /* S-Function (motohawk_sfun_fault_name): '<S192>/motohawk_fault_name' */
  {
    extern const char *GetFaultName(uint32_T fault);
    const char *name;
    char *out;
    int i;
    name = GetFaultName(rtb_motohawk_fault_iterator_o2);
    out = (char *) localB->s192_motohawk_fault_name;
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

  /* Update for UnitDelay: '<S192>/Unit Delay' */
  localDW->s192_UnitDelay_DSTATE = rtb_motohawk_fault_iterator_o2;
}

/* Initial conditions for function-call system: '<S3>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Init(void)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S178>/Chart' */
  BuckyWagon_01_DWork.s191_is_Fault = 0U;
  BuckyWagon_01_DWork.s191_is_active_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s191_mode = 0U;
  for (i = 0; i < 10; i++) {
    BuckyWagon_01_B.s191_text[i] = 0U;
  }

  BuckyWagon_01_B.s191_minTimer = 0U;
  BuckyWagon_01_B.s191_scrollIndex = 0U;
  BuckyWagon_01_B.s191_scrollTimer = 0U;

  /* InitializeConditions for Stateflow: '<S178>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S178>/Fault Iterator'
   */
  BuckyWagon_01_FaultIterator_Init(&BuckyWagon_01_DWork.s178_FaultIterator);

  /* InitializeConditions for Stateflow: '<S19>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s19_sf_Chart,
    &BuckyWagon_01_DWork.s19_sf_Chart);
}

/* Start for function-call system: '<S3>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Start(void)
{
  /* Start for Stateflow: '<S178>/Chart' incorporates:
   *  Start for SubSystem: '<S178>/Fault Iterator'
   */

  /* Start for Stateflow: '<S19>/Chart' */
  BuckyWagon_01_Chart_Start(&BuckyWagon_01_B.s19_sf_Chart,
    &BuckyWagon_01_DWork.s19_sf_Chart);
}

/* Output and update for function-call system: '<S3>/MiniViewDisplay' */
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

  /* Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem2' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s209_upasserted,
    BuckyWagon_01_B.s209_upcount, &BuckyWagon_01_B.s19_EnabledSubsystem2);

  /* End of Outputs for SubSystem: '<S19>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem1' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s194_menuasserted,
    BuckyWagon_01_B.s194_menucount, &BuckyWagon_01_B.s19_EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S19>/Enabled Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s185_downasserted,
    BuckyWagon_01_B.s185_downcount, &BuckyWagon_01_B.s19_EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S19>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read1' */
  BuckyWagon_01_B.s19_motohawk_data_read1 = listIndex_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read3' */
  BuckyWagon_01_B.s19_motohawk_data_read3 = singleIndex_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read2' */
  BuckyWagon_01_B.s19_motohawk_data_read2[0] = dualIndex_DataStore()[0];
  BuckyWagon_01_B.s19_motohawk_data_read2[1] = dualIndex_DataStore()[1];

  /* S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read' */
  BuckyWagon_01_B.s19_motohawk_data_read[0] = quadIndex_DataStore()[0];
  BuckyWagon_01_B.s19_motohawk_data_read[1] = quadIndex_DataStore()[1];
  BuckyWagon_01_B.s19_motohawk_data_read[2] = quadIndex_DataStore()[2];
  BuckyWagon_01_B.s19_motohawk_data_read[3] = quadIndex_DataStore()[3];

  /* S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read4' */
  BuckyWagon_01_B.s19_motohawk_data_read4 = screen_DataStore();

  /* UnitDelay: '<S178>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    rtb_UnitDelay_j[i] = BuckyWagon_01_DWork.s178_UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S178>/Unit Delay' */

  /* MATLAB Function Block: '<S178>/getStringLength' */

  /* MATLAB Function 'Foreground/MiniViewDisplay/GetFaultName/getStringLength': '<S193>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /* '<S193>:1:5' */
  rtb_faultNameLength = 1.0;
  while ((rtb_UnitDelay_j[(int32_T)rtb_faultNameLength - 1] != 0) ||
         (rtb_faultNameLength > 27.0)) {
    /* '<S193>:1:6' */
    /* '<S193>:1:7' */
    /* '<S193>:1:8' */
    rtb_faultNameLength++;
  }

  /* End of MATLAB Function Block: '<S178>/getStringLength' */

  /* Stateflow: '<S178>/Chart' */

  /* Gateway: Foreground/MiniViewDisplay/GetFaultName/Chart */
  /* During: Foreground/MiniViewDisplay/GetFaultName/Chart */
  if (BuckyWagon_01_DWork.s191_is_active_c3_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/GetFaultName/Chart */
    BuckyWagon_01_DWork.s191_is_active_c3_BuckyWagon_01 = 1U;

    /* Transition: '<S191>:7' */
    BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

    /* Entry 'NoFault': '<S191>:1' */
    for (i = 0; i < 10; i++) {
      /* S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2' */
      BuckyWagon_01_B.s191_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
    }
  } else {
    switch (BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01) {
     case BuckyWagon_01_IN_Fault:
      /* UnitDelay: '<S178>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration7'
       */
      /* During 'Fault': '<S191>:2' */
      if (!(BuckyWagon_01_DWork.s178_UnitDelay1_DSTATE &&
            (DisplayFaults_DataStore()))) {
        /* Transition: '<S191>:13' */
        BuckyWagon_01_DWork.s191_is_Fault = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_ma;
        BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

        /* Entry 'NoFault': '<S191>:1' */
        for (i = 0; i < 10; i++) {
          BuckyWagon_01_B.s191_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
        }
      } else {
        BuckyWagon_01_B.s191_minTimer = (uint16_T)(BuckyWagon_01_B.s191_minTimer
          + 1);
        switch (BuckyWagon_01_DWork.s191_is_Fault) {
         case BuckyWagon_01_IN_CheckNextFault:
          /* During 'CheckNextFault': '<S191>:6' */
          /* Transition: '<S191>:17' */
          /* Transition: '<S191>:18' */
          /* Transition: '<S191>:14' */
          BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S191>:5' */
          BuckyWagon_01_B.s191_scrollTimer = 0U;
          BuckyWagon_01_B.s191_scrollIndex = 0U;
          BuckyWagon_01_B.s191_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s191_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s191_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;

         case BuckyWagon_01_IN_lastWait:
          /* During 'lastWait': '<S191>:4' */
          if ((BuckyWagon_01_B.s191_scrollTimer > ((uint16_T)
                (lastScrollTime_DataStore()))) && (BuckyWagon_01_B.s191_minTimer
               > ((uint16_T)(minTime_DataStore())))) {
            /* Stateflow: '<S178>/Chart' incorporates:
             *  SubSystem: '<S178>/Fault Iterator'
             */
            /* Transition: '<S191>:12' */
            /* Event: '<S191>:38' */
            BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s178_FaultIterator,
              &BuckyWagon_01_DWork.s178_FaultIterator);
            BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_CheckNextFault;
          } else {
            /* Stateflow: '<S178>/Chart' */
            BuckyWagon_01_B.s191_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s191_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollText:
          /* Stateflow: '<S178>/Chart' */
          /* During 'scrollText': '<S191>:3' */
          if (BuckyWagon_01_B.s191_scrollTimer >= ((uint16_T)
               (scrollTime_DataStore()))) {
            /* Transition: '<S191>:9' */
            if ((int32_T)rtb_faultNameLength - 2 >= ((uint8_T)
                 (dispLength_DataStore())) + BuckyWagon_01_B.s191_scrollIndex) {
              /* Transition: '<S191>:10' */
              BuckyWagon_01_B.s191_scrollIndex = (uint8_T)
                (BuckyWagon_01_B.s191_scrollIndex + 1);
              BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_scrollText;

              /* Entry 'scrollText': '<S191>:3' */
              BuckyWagon_01_B.s191_scrollTimer = 0U;
              memcpy(&BuckyWagon_01_B.s191_text[0],
                     &rtb_UnitDelay_j[BuckyWagon_01_B.s191_scrollIndex],
                     ((uint8_T)(dispLength_DataStore())));
              BuckyWagon_01_B.s191_text[((uint8_T)(dispLength_DataStore()))] =
                0U;
            } else {
              /* Transition: '<S191>:11' */
              BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_lastWait;
            }
          } else {
            BuckyWagon_01_B.s191_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s191_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollTextFirst:
          /* Stateflow: '<S178>/Chart' */
          /* During 'scrollTextFirst': '<S191>:5' */
          if (BuckyWagon_01_B.s191_scrollTimer >= ((uint16_T)
               (firstScrollTime_DataStore()))) {
            /* Transition: '<S191>:16' */
            BuckyWagon_01_B.s191_scrollIndex = (uint8_T)
              (BuckyWagon_01_B.s191_scrollIndex + 1);
            BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_scrollText;

            /* Entry 'scrollText': '<S191>:3' */
            BuckyWagon_01_B.s191_scrollTimer = 0U;
            memcpy(&BuckyWagon_01_B.s191_text[0],
                   &rtb_UnitDelay_j[BuckyWagon_01_B.s191_scrollIndex], ((uint8_T)
                    (dispLength_DataStore())));
            BuckyWagon_01_B.s191_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          } else {
            BuckyWagon_01_B.s191_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s191_scrollTimer + 1);
          }
          break;

         default:
          /* Transition: '<S191>:15' */
          BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S191>:5' */
          BuckyWagon_01_B.s191_scrollTimer = 0U;
          BuckyWagon_01_B.s191_scrollIndex = 0U;
          BuckyWagon_01_B.s191_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s191_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s191_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;
        }
      }

      /* End of UnitDelay: '<S178>/Unit Delay1' */
      break;

     case BuckyWagon_01_IN_NoFault:
      /* Stateflow: '<S178>/Chart' */
      /* UnitDelay: '<S178>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration3'
       */
      /* During 'NoFault': '<S191>:1' */
      if (BuckyWagon_01_DWork.s178_UnitDelay1_DSTATE && (DisplayFaults_DataStore
           ())) {
        /* Transition: '<S191>:8' */
        BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_Fault;

        /* Entry 'Fault': '<S191>:2' */
        BuckyWagon_01_B.s191_mode = !(InvertMode_DataStore());

        /* Transition: '<S191>:15' */
        BuckyWagon_01_DWork.s191_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

        /* Entry 'scrollTextFirst': '<S191>:5' */
        BuckyWagon_01_B.s191_scrollTimer = 0U;
        BuckyWagon_01_B.s191_scrollIndex = 0U;
        BuckyWagon_01_B.s191_minTimer = 0U;
        memcpy(&BuckyWagon_01_B.s191_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                (dispLength_DataStore())));
        BuckyWagon_01_B.s191_text[((uint8_T)(dispLength_DataStore()))] = 0U;
      } else {
        BuckyWagon_01_B.s191_mode = (InvertMode_DataStore());

        /* Stateflow: '<S178>/Chart' incorporates:
         *  SubSystem: '<S178>/Fault Iterator'
         */
        /* Event: '<S191>:38' */
        BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s178_FaultIterator,
          &BuckyWagon_01_DWork.s178_FaultIterator);
      }

      /* End of UnitDelay: '<S178>/Unit Delay1' */
      break;

     default:
      /* Transition: '<S191>:7' */
      BuckyWagon_01_DWork.s191_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

      /* Entry 'NoFault': '<S191>:1' */
      for (i = 0; i < 10; i++) {
        /* S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2' */
        BuckyWagon_01_B.s191_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
      }
      break;
    }
  }

  /* Gain: '<S180>/Gain5' incorporates:
   *  Product: '<S180>/Product'
   */
  rtb_faultNameLength = BuckyWagon_01_B.s210_bcm_ibat *
    BuckyWagon_01_B.s210_bcm_vbat * 0.001;

  /* Gain: '<S180>/Gain6' incorporates:
   *  Product: '<S180>/Product1'
   */
  rtb_Gain6 = BuckyWagon_01_B.s221_Accurate_Speed *
    BuckyWagon_01_B.s221_Accurate_Torque * 0.00010471975511965977;

  /* Saturate: '<S180>/Saturation' incorporates:
   *  Gain: '<S180>/Gain3'
   */
  u = 100.0 * BuckyWagon_01_B.s230_Merge;

  /* DataTypeConversion: '<S180>/Data Type Conversion7' incorporates:
   *  Saturate: '<S180>/Saturation'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion7' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion7'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[0] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion4' incorporates:
   *  Saturate: '<S180>/Saturation1'
   */
  u = BuckyWagon_01_B.s210_bcm_vbat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s210_bcm_vbat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s210_bcm_vbat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion4' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion4'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[1] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion2' incorporates:
   *  Saturate: '<S180>/Saturation2'
   */
  u = BuckyWagon_01_B.s210_bcm_ibat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s210_bcm_ibat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s210_bcm_ibat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion2' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion2'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[2] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[3] =
    BuckyWagon_01_ConstB.s180_DataTypeConversion3;

  /* DataTypeConversion: '<S180>/Data Type Conversion5' incorporates:
   *  Saturate: '<S180>/Saturation4'
   */
  u = BuckyWagon_01_B.s221_Accurate_Speed >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s221_Accurate_Speed <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s221_Accurate_Speed;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion5' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion5'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[4] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S180>/Saturation5' incorporates:
   *  Gain: '<S180>/Gain'
   */
  u = 100.0 * BuckyWagon_01_B.s125_Merge;

  /* DataTypeConversion: '<S180>/Data Type Conversion1' incorporates:
   *  Saturate: '<S180>/Saturation5'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion1' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion1'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[5] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion' incorporates:
   *  Saturate: '<S180>/Saturation6'
   */
  u = BuckyWagon_01_B.s221_Accurate_Torque >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s221_Accurate_Torque <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s221_Accurate_Torque;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[6] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion6' incorporates:
   *  Saturate: '<S180>/Saturation7'
   */
  u = rtb_faultNameLength >= 32767.0 ? 32767.0 : rtb_faultNameLength <= -32767.0
    ? -32767.0 : rtb_faultNameLength;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion6' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion6'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[7] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion10' incorporates:
   *  Saturate: '<S180>/Saturation8'
   */
  u = rtb_Gain6 >= 32767.0 ? 32767.0 : rtb_Gain6 <= -32767.0 ? -32767.0 :
    rtb_Gain6;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion10' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion10'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[8] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S180>/Saturation9' incorporates:
   *  Gain: '<S180>/Gain7'
   *  Product: '<S180>/Divide'
   */
  u = rtb_faultNameLength / rtb_Gain6 * 100.0;

  /* DataTypeConversion: '<S180>/Data Type Conversion8' incorporates:
   *  Saturate: '<S180>/Saturation9'
   */
  u = u >= 100.0 ? 100.0 : u <= 0.0 ? 0.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion8' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion8'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[9] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion11' incorporates:
   *  Saturate: '<S180>/Saturation10'
   */
  u = BuckyWagon_01_B.s221_Inverter_Temperature >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s221_Inverter_Temperature <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s221_Inverter_Temperature;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion11' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion11'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[10] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S180>/Saturation11' incorporates:
   *  Gain: '<S180>/Gain2'
   */
  u = 100.0 * BuckyWagon_01_B.s119_Switch;

  /* DataTypeConversion: '<S180>/Data Type Conversion12' incorporates:
   *  Saturate: '<S180>/Saturation11'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion12' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion12'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[11] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S180>/Saturation12' incorporates:
   *  Gain: '<S180>/Gain1'
   */
  u = 1000.0 * BuckyWagon_01_B.s345_Merge;

  /* DataTypeConversion: '<S180>/Data Type Conversion17' incorporates:
   *  Saturate: '<S180>/Saturation12'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion17' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion17'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[12] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S180>/Saturation13' incorporates:
   *  Gain: '<S180>/Gain4'
   */
  u = 100.0 * BuckyWagon_01_B.s337_Merge;

  /* DataTypeConversion: '<S180>/Data Type Conversion18' incorporates:
   *  Saturate: '<S180>/Saturation13'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion18' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion18'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[13] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S180>/Data Type Conversion14' */
  if (rtIsNaN(BuckyWagon_01_B.s353_Merge) || rtIsInf(BuckyWagon_01_B.s353_Merge))
  {
    u = 0.0;
  } else {
    u = fmod(floor(BuckyWagon_01_B.s353_Merge), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion14' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion13'
   *  DataTypeConversion: '<S180>/Data Type Conversion14'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[14] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[15] =
    BuckyWagon_01_B.s242_Merge;

  /* DataTypeConversion: '<S180>/Data Type Conversion15' incorporates:
   *  Saturate: '<S180>/Saturation14'
   */
  u = BuckyWagon_01_B.s17_InReverse >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s17_InReverse <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s17_InReverse;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S180>/Data Type Conversion15' */

  /* SignalConversion: '<S19>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S180>/Data Type Conversion15'
   *  DataTypeConversion: '<S180>/Data Type Conversion16'
   */
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[16] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20[17] =
    BuckyWagon_01_B.s223_Merge;

  /* UnitDelay: '<S19>/Unit Delay' */
  rtb_UnitDelay_h = BuckyWagon_01_DWork.s19_UnitDelay_DSTATE;

  /* SignalConversion: '<S19>/HiddenBuf_InsertedFor_Chart_at_inport_20' incorporates:
   *  UnitDelay: '<S19>/Unit Delay'
   */
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[0] =
    BuckyWagon_01_DWork.s19_UnitDelay_DSTATE;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[1] =
    BuckyWagon_01_B.s209_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[2] =
    BuckyWagon_01_B.s209_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[3] =
    BuckyWagon_01_B.s194_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[4] =
    BuckyWagon_01_B.s194_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[5] =
    BuckyWagon_01_B.s185_downasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[6] =
    BuckyWagon_01_B.s185_downasserted;

  /* Stateflow: '<S19>/Chart' */
  BuckyWagon_01_Chart(rtb_HiddenBuf_InsertedFor_Chart_at_inport_20,
                      BuckyWagon_01_B.s19_EnabledSubsystem1.s170_In,
                      (startupDelay_DataStore()),
                      BuckyWagon_01_B.s19_motohawk_data_read1,
                      BuckyWagon_01_B.s19_motohawk_data_read3,
                      BuckyWagon_01_B.s19_motohawk_data_read2,
                      BuckyWagon_01_B.s19_motohawk_data_read,
                      BuckyWagon_01_B.s19_motohawk_data_read4,
                      BuckyWagon_01_ConstP.Constant8_Value,
                      BuckyWagon_01_ConstP.Constant4_Value_o, ((uint8_T)18U),
                      BuckyWagon_01_ConstP.Constant2_Value_f,
                      BuckyWagon_01_ConstP.Constant3_Value,
                      BuckyWagon_01_ConstP.Constant5_Value,
                      BuckyWagon_01_ConstP.Constant6_Value,
                      BuckyWagon_01_ConstP.Constant7_Value,
                      BuckyWagon_01_B.s191_text, BuckyWagon_01_B.s191_mode,
                      BuckyWagon_01_B.s19_TmpSignalConversionAtChartInport20,
                      ((uint8_T)0U), &BuckyWagon_01_B.s19_sf_Chart,
                      &BuckyWagon_01_DWork.s19_sf_Chart,
                      &BuckyWagon_01_PrevZCSigState.s19_sf_Chart);

  /* Update for UnitDelay: '<S178>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    BuckyWagon_01_DWork.s178_UnitDelay_DSTATE[i] =
      BuckyWagon_01_B.s178_FaultIterator.s192_motohawk_fault_name[i];
  }

  /* End of UnitDelay: '<S178>/Unit Delay' */

  /* Update for UnitDelay: '<S178>/Unit Delay1' */
  BuckyWagon_01_DWork.s178_UnitDelay1_DSTATE =
    BuckyWagon_01_B.s178_FaultIterator.s192_motohawk_fault_iterator_o1;

  /* Update for UnitDelay: '<S19>/Unit Delay' incorporates:
   *  Logic: '<S19>/Logical Operator'
   */
  BuckyWagon_01_DWork.s19_UnitDelay_DSTATE = !rtb_UnitDelay_h;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
