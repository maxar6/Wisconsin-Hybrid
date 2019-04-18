/*
 * File: BuckyWagon_01_MiniViewDisplay.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1570
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Apr 17 19:04:03 2019
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

/* Named constants for Stateflow: '<S180>/Chart' */
#define BuckyWagon_01_IN_CheckNextFault (1U)
#define BuckyWagon_01_IN_Fault         (1U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_m (0U)
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

/* Start for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S165>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S165>/Clear Screen'
   */
}

/* Output and update for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen(void)
{
  /* S-Function (fcncallgen): '<S165>/Function-Call Generator' incorporates:
   *  SubSystem: '<S165>/Clear Screen'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S186>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S169>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S169>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Rect' */
void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y0,
  uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S169>/Function-Call Generator' incorporates:
   *  SubSystem: '<S169>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S190>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S197>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S200>/Function-Call Generator'
   *  Start for SubSystem: '<S183>/Subsystem'
   *  Start for SubSystem: '<S197>/Send Substring (page 0)'
   *  Start for SubSystem: '<S200>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S201>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S204>/Function-Call Generator'
   *  Start for SubSystem: '<S197>/Function-Call Subsystem'
   *  Start for SubSystem: '<S197>/Send Substring (page 1)'
   *  Start for SubSystem: '<S198>/Enabled Subsystem'
   *  Start for SubSystem: '<S201>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S202>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S206>/Function-Call Generator'
   *  Start for SubSystem: '<S197>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S197>/Send Substring (page 2)'
   *  Start for SubSystem: '<S199>/Enabled Subsystem'
   *  Start for SubSystem: '<S202>/Subsystem'
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

  /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  S-Function (fcncallgen): '<S197>/Function-Call Generator'
   *  S-Function (fcncallgen): '<S200>/Function-Call Generator'
   *  SubSystem: '<S183>/Subsystem'
   *  SubSystem: '<S197>/Send Substring (page 0)'
   *  SubSystem: '<S200>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S207>/Send CAN Messages' */
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

  /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  SubSystem: '<S197>/Function-Call Subsystem'
   */
  /* RelationalOperator: '<S203>/Compare' incorporates:
   *  Constant: '<S203>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_lf[i] = (rtu_string_c[i] != 0);
  }

  /* End of RelationalOperator: '<S203>/Compare' */

  /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  EnablePort: '<S204>/Enable'
   *  SubSystem: '<S198>/Enabled Subsystem'
   */
  /* Logic: '<S198>/Logical Operator' incorporates:
   *  Logic: '<S199>/Logical Operator'
   */
  if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf[2]
       != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
      (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
    /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
     *  S-Function (fcncallgen): '<S201>/Function-Call Generator'
     *  S-Function (fcncallgen): '<S204>/Function-Call Generator'
     *  SubSystem: '<S197>/Send Substring (page 1)'
     *  SubSystem: '<S201>/Subsystem'
     */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S208>/Send CAN Messages' */
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

    /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
     *  SubSystem: '<S197>/Function-Call Subsystem1'
     */
    /* RelationalOperator: '<S205>/Compare' incorporates:
     *  Constant: '<S205>/Constant'
     */
    for (i = 0; i < 7; i++) {
      rtb_Compare_lf[i] = (rtu_string_o[i] != 0);
    }

    /* End of RelationalOperator: '<S205>/Compare' */

    /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
     *  EnablePort: '<S206>/Enable'
     *  SubSystem: '<S199>/Enabled Subsystem'
     */
    if ((rtb_Compare_lf[0] != 0) && (rtb_Compare_lf[1] != 0) && (rtb_Compare_lf
         [2] != 0) && (rtb_Compare_lf[3] != 0) && (rtb_Compare_lf[4] != 0) &&
        (rtb_Compare_lf[5] != 0) && (rtb_Compare_lf[6] != 0)) {
      /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
       *  S-Function (fcncallgen): '<S202>/Function-Call Generator'
       *  S-Function (fcncallgen): '<S206>/Function-Call Generator'
       *  SubSystem: '<S197>/Send Substring (page 2)'
       *  SubSystem: '<S202>/Subsystem'
       */

      /* S-Function (motohawk_sfun_send_canmsgs): '<S209>/Send CAN Messages' */
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

  /* End of Logic: '<S198>/Logical Operator' */
}

/* Start for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S170>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S170>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T rtu_y,
  uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter, uint8_T
  rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor)
{
  /* S-Function (fcncallgen): '<S170>/Function-Call Generator' incorporates:
   *  SubSystem: '<S170>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S191>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S171>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S171>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Vline' */
void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T rtu_y1,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S171>/Function-Call Generator' incorporates:
   *  SubSystem: '<S171>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S192>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S168>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S168>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw HLine' */
void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S168>/Function-Call Generator' incorporates:
   *  SubSystem: '<S168>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S189>/Send CAN Messages' */
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
  /* S-Function (motohawk_sfun_data_write): '<S175>/motohawk_data_write' */
  /* Write to Data Storage as scalar: listIndex */
  {
    listIndex_DataStore() = rtu_Value;
  }
}

/* Output and update for function-call system: '<S11>/Function-Call Subsystem1' */
void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S176>/motohawk_data_write' */
  /* Write to Data Storage as scalar: screen */
  {
    screen_DataStore() = rtu_Value;
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Dual(const uint8_T rtu_dualIndex[2],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S164>:181' */
  localB->s164_stringNum = 0U;
  while (localB->s164_stringNum < 2) {
    /* Transition: '<S164>:182' */
    localDW->s164_oldData[localB->s164_stringNum] = (int16_T)
      (rtu_data[rtu_dualIndex[localB->s164_stringNum]] + 1);
    localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
  }

  /* Transition: '<S164>:183' */
  localDW->s164_is_Dual = BuckyWagon_01_IN_Dual_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Dual_Init': '<S164>:19' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* During 'Dual': '<S164>:20' */
  if (localDW->s164_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S164>:84' */
    localDW->s164_is_Dual = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait2;
  } else {
    switch (localDW->s164_is_Dual) {
     case BuckyWagon_01_IN_Dual_Init:
      /* During 'Dual_Init': '<S164>:19' */
      /* Transition: '<S164>:184' */
      localDW->s164_is_Dual = BuckyWagon_01_IN_dualNames;

      /* Entry 'dualNames': '<S164>:18' */
      localB->s164_hCenter = 1U;
      localB->s164_font = BuckyWagon_01_FONT6x8;
      localB->s164_x0 = 30U;
      localB->s164_stringNum = 0U;
      memcpy(&localB->s164_string[0], &rtu_names[10 * rtu_dualIndex[0]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s164_y0 = 20U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      memcpy(&localB->s164_string[0], &rtu_names[10 * rtu_dualIndex[1]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s164_y0 = 34U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_List_Idle:
      /* During 'List_Idle': '<S164>:1' */
      if ((localDW->s164_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s164_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S164>:186' */
        localB->s164_stringNum = 0U;
        localB->s164_font = BuckyWagon_01_FONT6x8;
        localB->s164_fillColor = BuckyWagon_01_WHITE;
        localB->s164_hCenter = 0U;
        if (localDW->s164_oldData[0] != rtu_data[rtu_dualIndex[0]]) {
          /* Transition: '<S164>:187' */
          sprintf(charPtr(&localB->s164_string[0]), "%d",
                  rtu_data[rtu_dualIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 0U;
          localB->s164_x1 = 60U;
          localB->s164_y0 = 10U;
          localB->s164_y1 = 18U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;
          localB->s164_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[0] = rtu_data[rtu_dualIndex[0]];
        } else {
          /* Transition: '<S164>:188' */
        }

        if (localDW->s164_oldData[1] != rtu_data[rtu_dualIndex[1]]) {
          /* Transition: '<S164>:190' */
          sprintf(charPtr(&localB->s164_string[0]), "%d",
                  rtu_data[rtu_dualIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 0U;
          localB->s164_x1 = 60U;
          localB->s164_y0 = 44U;
          localB->s164_y1 = 53U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;
          localB->s164_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[1] = rtu_data[rtu_dualIndex[1]];
        } else {
          /* Transition: '<S164>:73' */
        }

        /* Transition: '<S164>:67' */
        localB->s164_y0 = 55U;
        localB->s164_y1 = 63U;
        localB->s164_x0 = 0U;
        localB->s164_x1 = 63U;
        memcpy(&localB->s164_string[0], &rtu_statusTxt[0], 9);
        localB->s164_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S164>:130' */
          localB->s164_fillColor = BuckyWagon_01_BLACK;
          localB->s164_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S164>:74' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S164>:76' */
        localB->s164_y0 = 56U;
        localB->s164_font = BuckyWagon_01_FONT4x6;
        localB->s164_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S164>:72' */
        localDW->s164_timer = 0U;
        localDW->s164_is_Dual = BuckyWagon_01_IN_List_Idle;
      } else {
        if (localDW->s164_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S164>:189' */
          localDW->s164_timer = (uint16_T)(localDW->s164_timer + 1);
          localDW->s164_is_Dual = BuckyWagon_01_IN_List_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_dualNames:
      /* During 'dualNames': '<S164>:18' */
      /* Transition: '<S164>:185' */
      localDW->s164_timer = BuckyWagon_01_UPDATE_TIME;
      localDW->s164_is_Dual = BuckyWagon_01_IN_List_Idle;
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
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S164>:114' */
  localB->s164_stringNum = 0U;
  while (localB->s164_stringNum < 6) {
    /* Transition: '<S164>:112' */
    localDW->s164_oldData[localB->s164_stringNum] = (int16_T)(rtu_data
      [localB->s164_stringNum + rtu_listIndex] + 1);
    localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
  }

  /* Transition: '<S164>:109' */
  localDW->s164_is_List = BuckyWagon_01_IN_List_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'List_Init': '<S164>:8' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 63U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localB->s164_listIndexO = rtu_listIndex;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  boolean_T guard;

  /* During 'List': '<S164>:3' */
  if (localDW->s164_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S164>:55' */
    localDW->s164_is_List = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait4;
  } else {
    guard = FALSE;
    switch (localDW->s164_is_List) {
     case BuckyWagon_01_IN_List_Idle_h:
      /* During 'List_Idle': '<S164>:5' */
      if ((localDW->s164_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s164_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S164>:102' */
        localB->s164_stringNum = 0U;
        localB->s164_fillColor = BuckyWagon_01_WHITE;
        localB->s164_hCenter = 0U;
        while (localB->s164_stringNum < 6) {
          /* Transition: '<S164>:103' */
          if (rtu_data[localB->s164_stringNum + rtu_listIndex] ==
              localDW->s164_oldData[localB->s164_stringNum]) {
            /* Transition: '<S164>:105' */
            localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
          } else {
            /* Transition: '<S164>:101' */
            sprintf(charPtr(&localB->s164_string[0]), "%-4d", rtu_data
                    [localB->s164_stringNum + rtu_listIndex]);
            localB->s164_string[4] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S164>:303' */
            BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
              localB->s164_string[0], localB->s164_string[1],
              localB->s164_string[2], localB->s164_string[3],
              localB->s164_string[4], localB->s164_string[5],
              localB->s164_string[6], localB->s164_string, localB->s164_string[7],
              localB->s164_string[8], localB->s164_string[9],
              localB->s164_string[10], localB->s164_string[11],
              localB->s164_string[12], localB->s164_string[13],
              &localB->s164_string[7], localB->s164_string[14],
              localB->s164_string[15], localB->s164_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            localB->s164_x0 = 42U;
            localB->s164_x1 = 57U;
            localB->s164_y0 = (uint8_T)(localB->s164_stringNum * 7 + 12);
            localB->s164_y1 = (uint8_T)(localB->s164_y0 + 6);
            localB->s164_lineColor = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

            /* Event: '<S164>:301' */
            BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
              localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
              localB->s164_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
            localB->s164_lineColor = 1U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S164>:304' */
            BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
              localB->s164_y0, localB->s164_font, localB->s164_hCenter,
              localB->s164_vCenter, rtu_21, localB->s164_lineColor,
              localB->s164_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */
            localDW->s164_oldData[localB->s164_stringNum] = rtu_data
              [localB->s164_stringNum + rtu_listIndex];
            localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
          }
        }

        /* Transition: '<S164>:79' */
        localB->s164_y0 = 55U;
        localB->s164_y1 = 63U;
        localB->s164_x0 = 0U;
        localB->s164_x1 = 63U;
        memcpy(&localB->s164_string[0], &rtu_statusTxt[0], 9);
        localB->s164_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S164>:78' */
          localB->s164_fillColor = BuckyWagon_01_BLACK;
          localB->s164_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S164>:80' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S164>:100' */
        localB->s164_y0 = 56U;
        localB->s164_font = BuckyWagon_01_FONT4x6;
        localB->s164_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S164>:92' */
        localDW->s164_timer = 0U;
        localDW->s164_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S164>:5' */
        localB->s164_stringNum = 0U;
      } else if (localDW->s164_sfEvent == BuckyWagon_01_event_tick) {
        /* Transition: '<S164>:91' */
        localDW->s164_timer = (uint16_T)(localDW->s164_timer + 1);
        localDW->s164_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S164>:5' */
        localB->s164_stringNum = 0U;
      } else if (localDW->s164_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S164>:94' */
        if (rtu_listIndex == 0) {
          /* Transition: '<S164>:93' */
          localDW->s164_is_List = BuckyWagon_01_IN_List_Idle_h;

          /* Entry 'List_Idle': '<S164>:5' */
          localB->s164_stringNum = 0U;
        } else {
          /* Transition: '<S164>:95' */
          localB->s164_listIndexO = (uint8_T)(rtu_listIndex - 1);

          /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

          /* Event: '<S164>:313' */
          BuckyWagon_01_FunctionCallSubsystem(localB->s164_listIndexO);

          /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
          guard = TRUE;
        }
      } else {
        if (localDW->s164_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S164>:97' */
          if (rtu_numFields - 6 == rtu_listIndex) {
            /* Transition: '<S164>:99' */
            localDW->s164_is_List = BuckyWagon_01_IN_List_Idle_h;

            /* Entry 'List_Idle': '<S164>:5' */
            localB->s164_stringNum = 0U;
          } else {
            /* Transition: '<S164>:98' */
            localB->s164_listIndexO = (uint8_T)(rtu_listIndex + 1);

            /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

            /* Event: '<S164>:313' */
            BuckyWagon_01_FunctionCallSubsystem(localB->s164_listIndexO);

            /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_List_Init:
      /* During 'List_Init': '<S164>:8' */
      /* Transition: '<S164>:96' */
      /* Transition: '<S164>:104' */
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:106' */
        memcpy(&localB->s164_string[0], &rtu_names[10 * (localB->s164_listIndexO
                + localB->s164_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      }

      /* Transition: '<S164>:108' */
      localDW->s164_is_List = BuckyWagon_01_IN_List_Wait;
      break;

     case BuckyWagon_01_IN_List_Wait:
      /* During 'List_Wait': '<S164>:2' */
      /* Transition: '<S164>:111' */
      localB->s164_x0 = 9U;
      localB->s164_y0 = 12U;
      localB->s164_x1 = 41U;
      localB->s164_y1 = 53U;
      localB->s164_lineColor = 0U;
      localB->s164_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S164>:301' */
      BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1, localB->s164_y0,
        localB->s164_y1, localB->s164_lineColor, localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s164_lineColor = 1U;
      localB->s164_hCenter = 0U;
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:113' */
        localB->s164_y0 = (uint8_T)(localB->s164_stringNum * 7 + 12);

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      }

      /* Transition: '<S164>:110' */
      localDW->s164_is_List = BuckyWagon_01_IN_List_Wait2;
      break;

     case BuckyWagon_01_IN_List_Wait2:
      /* During 'List_Wait2': '<S164>:4' */
      /* Transition: '<S164>:107' */
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:103' */
        if (rtu_data[localB->s164_stringNum + rtu_listIndex] ==
            localDW->s164_oldData[localB->s164_stringNum]) {
          /* Transition: '<S164>:105' */
          localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
        } else {
          /* Transition: '<S164>:101' */
          sprintf(charPtr(&localB->s164_string[0]), "%-4d", rtu_data
                  [localB->s164_stringNum + rtu_listIndex]);
          localB->s164_string[4] = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 42U;
          localB->s164_x1 = 57U;
          localB->s164_y0 = (uint8_T)(localB->s164_stringNum * 7 + 12);
          localB->s164_y1 = (uint8_T)(localB->s164_y0 + 6);
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[localB->s164_stringNum] = rtu_data
            [localB->s164_stringNum + rtu_listIndex];
          localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
        }
      }

      /* Transition: '<S164>:79' */
      localB->s164_y0 = 55U;
      localB->s164_y1 = 63U;
      localB->s164_x0 = 0U;
      localB->s164_x1 = 63U;
      memcpy(&localB->s164_string[0], &rtu_statusTxt[0], 9);
      localB->s164_string[9] = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      if (rtu_statusTxtMode == 1) {
        /* Transition: '<S164>:78' */
        localB->s164_fillColor = BuckyWagon_01_BLACK;
        localB->s164_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S164>:301' */
        BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1, localB->s164_y0,
          localB->s164_y1, localB->s164_lineColor, localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s164_lineColor = BuckyWagon_01_WHITE;
      } else {
        /* Transition: '<S164>:80' */
        localB->s164_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S164>:301' */
        BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1, localB->s164_y0,
          localB->s164_y1, localB->s164_lineColor, localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s164_lineColor = BuckyWagon_01_BLACK;
      }

      /* Transition: '<S164>:100' */
      localB->s164_y0 = 56U;
      localB->s164_font = BuckyWagon_01_FONT4x6;
      localB->s164_x0 = 17U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */

      /* Transition: '<S164>:92' */
      localDW->s164_timer = 0U;
      localDW->s164_is_List = BuckyWagon_01_IN_List_Idle_h;

      /* Entry 'List_Idle': '<S164>:5' */
      localB->s164_stringNum = 0U;
      break;

     default:
      BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }

    if (guard) {
      /* Transition: '<S164>:104' */
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:106' */
        memcpy(&localB->s164_string[0], &rtu_names[10 * (localB->s164_listIndexO
                + localB->s164_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      }

      /* Transition: '<S164>:108' */
      localDW->s164_is_List = BuckyWagon_01_IN_List_Wait;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S164>:166' */
  localB->s164_stringNum = 0U;
  while (localB->s164_stringNum < 4) {
    /* Transition: '<S164>:168' */
    localDW->s164_oldData[localB->s164_stringNum] = (int16_T)
      (rtu_data[rtu_quadIndex[localB->s164_stringNum]] + 1);
    localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
  }

  /* Transition: '<S164>:169' */
  localDW->s164_is_Quad = BuckyWagon_01_IN_Quad_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Quad_Init': '<S164>:22' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 8U;
  localB->s164_y1 = 54U;
  localB->s164_x0 = 30U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

  /* Event: '<S164>:305' */
  BuckyWagon_01_DrawVline(localB->s164_x0, localB->s164_y0, localB->s164_y1,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S164>:71' */
  localDW->s164_is_Single = BuckyWagon_01_IN_Single_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Single_Init': '<S164>:7' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localDW->s164_oldData[0] = (int16_T)(rtu_data[rtu_singleIndex] + 1);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* During 'Quad': '<S164>:24' */
  if (localDW->s164_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S164>:85' */
    localDW->s164_is_Quad = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait1;
  } else {
    switch (localDW->s164_is_Quad) {
     case BuckyWagon_01_IN_Quad_Idle:
      /* During 'Quad_Idle': '<S164>:21' */
      if ((localDW->s164_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s164_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S164>:170' */
        localB->s164_stringNum = 0U;
        localB->s164_font = BuckyWagon_01_FONT6x8;
        localB->s164_fillColor = BuckyWagon_01_WHITE;
        localB->s164_hCenter = 0U;
        if (localDW->s164_oldData[0] != rtu_data[rtu_quadIndex[0]]) {
          /* Transition: '<S164>:171' */
          sprintf(charPtr(&localB->s164_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 5U;
          localB->s164_x1 = 29U;
          localB->s164_y0 = 23U;
          localB->s164_y1 = 30U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[0] = rtu_data[rtu_quadIndex[0]];
        } else {
          /* Transition: '<S164>:172' */
        }

        if (localDW->s164_oldData[1] != rtu_data[rtu_quadIndex[1]]) {
          /* Transition: '<S164>:174' */
          sprintf(charPtr(&localB->s164_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 32U;
          localB->s164_x1 = 55U;
          localB->s164_y0 = 23U;
          localB->s164_y1 = 30U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[1] = rtu_data[rtu_quadIndex[1]];
        } else {
          /* Transition: '<S164>:175' */
        }

        if (localDW->s164_oldData[2] != rtu_data[rtu_quadIndex[2]]) {
          /* Transition: '<S164>:176' */
          sprintf(charPtr(&localB->s164_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[2]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 5U;
          localB->s164_x1 = 29U;
          localB->s164_y0 = 33U;
          localB->s164_y1 = 40U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[2] = rtu_data[rtu_quadIndex[2]];
        } else {
          /* Transition: '<S164>:177' */
        }

        if (localDW->s164_oldData[3] != rtu_data[rtu_quadIndex[3]]) {
          /* Transition: '<S164>:179' */
          sprintf(charPtr(&localB->s164_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[3]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_x0 = 32U;
          localB->s164_x1 = 55U;
          localB->s164_y0 = 33U;
          localB->s164_y1 = 40U;
          localB->s164_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s164_oldData[3] = rtu_data[rtu_quadIndex[3]];
        } else {
          /* Transition: '<S164>:180' */
        }

        /* Transition: '<S164>:133' */
        localB->s164_y0 = 55U;
        localB->s164_y1 = 63U;
        localB->s164_x0 = 0U;
        localB->s164_x1 = 63U;
        memcpy(&localB->s164_string[0], &rtu_statusTxt[0], 9);
        localB->s164_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S164>:134' */
          localB->s164_fillColor = BuckyWagon_01_BLACK;
          localB->s164_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S164>:132' */
          localB->s164_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S164>:301' */
          BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
            localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s164_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S164>:131' */
        localB->s164_y0 = 56U;
        localB->s164_font = BuckyWagon_01_FONT4x6;
        localB->s164_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S164>:178' */
        localDW->s164_timer = 0U;
        localDW->s164_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      } else {
        if (localDW->s164_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S164>:173' */
          localDW->s164_timer = (uint16_T)(localDW->s164_timer + 1);
          localDW->s164_is_Quad = BuckyWagon_01_IN_Quad_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_Quad_Init:
      /* During 'Quad_Init': '<S164>:22' */
      /* Transition: '<S164>:165' */
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 4) {
        /* Transition: '<S164>:163' */
        memcpy(&localB->s164_string[0], &rtu_namesline1[7 * rtu_quadIndex
               [localB->s164_stringNum]], 7);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        memcpy(&localB->s164_string[0], &rtu_namesline2[7 * rtu_quadIndex
               [localB->s164_stringNum]], 7);
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 4);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum - 3);
      }

      /* Transition: '<S164>:164' */
      localDW->s164_is_Quad = BuckyWagon_01_IN_Quad_Names;

      /* Entry 'Quad_Names': '<S164>:23' */
      localB->s164_hCenter = 0U;
      localB->s164_x0 = 10U;
      localB->s164_y0 = 10U;
      localB->s164_stringNum = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_x0 = 5U;
      localB->s164_y0 = 16U;
      localB->s164_stringNum = 4U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_y0 = 41U;
      localB->s164_stringNum = 2U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_x0 = 10U;
      localB->s164_y0 = 47U;
      localB->s164_stringNum = 6U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_x0 = 32U;
      localB->s164_y0 = 10U;
      localB->s164_stringNum = 1U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_y0 = 16U;
      localB->s164_stringNum = 5U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_y0 = 41U;
      localB->s164_stringNum = 3U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s164_y0 = 47U;
      localB->s164_stringNum = 7U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S164>:304' */
      BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
        localB->s164_y0, localB->s164_font, localB->s164_hCenter,
        localB->s164_vCenter, rtu_21, localB->s164_lineColor,
        localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_Quad_Names:
      /* During 'Quad_Names': '<S164>:23' */
      /* Transition: '<S164>:167' */
      localDW->s164_timer = BuckyWagon_01_UPDATE_TIME;
      localB->s164_font = BuckyWagon_01_FONT6x8;
      localDW->s164_is_Quad = BuckyWagon_01_IN_Quad_Idle;
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
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S164>:146' */
  localDW->s164_is_select_var = BuckyWagon_01_IN_Select_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Select_Init': '<S164>:33' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 63U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s164_selectIndex = 0U;
  localDW->s164_selectVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Graphical Function 'storeSelect': '<S164>:25' */
  /* Transition: '<S164>:160' */
  if (localDW->s164_setupIndex == 1) {
    /* Transition: '<S164>:159' */
    localB->s164_singleIndexO = localDW->s164_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem2' */

    /* Event: '<S164>:316' */

    /* S-Function (motohawk_sfun_data_write): '<S177>/motohawk_data_write' */
    /* Write to Data Storage as scalar: singleIndex */
    {
      singleIndex_DataStore() = localB->s164_singleIndexO;
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem2' */
  } else if ((localDW->s164_setupIndex == 2) || (localDW->s164_setupIndex == 3))
  {
    /* Transition: '<S164>:161' */
    localB->s164_dualIndexO[0] = rtu_dualIndex[0];
    localB->s164_dualIndexO[1] = rtu_dualIndex[1];
    localB->s164_dualIndexO[localDW->s164_setupIndex - 2] =
      localDW->s164_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem3' */

    /* Event: '<S164>:315' */

    /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write' */
    /* Write to Data Storage as vector: dualIndex */
    {
      dualIndex_DataStore()[0] = localB->s164_dualIndexO[0];
      dualIndex_DataStore()[1] = localB->s164_dualIndexO[1];
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem3' */
  } else {
    if (localDW->s164_setupIndex >= 4) {
      /* Transition: '<S164>:162' */
      localB->s164_quadIndexO[0] = rtu_quadIndex[0];
      localB->s164_quadIndexO[1] = rtu_quadIndex[1];
      localB->s164_quadIndexO[2] = rtu_quadIndex[2];
      localB->s164_quadIndexO[3] = rtu_quadIndex[3];
      localB->s164_quadIndexO[localDW->s164_setupIndex - 4] =
        localDW->s164_selectIndex;

      /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem4' */

      /* Event: '<S164>:317' */

      /* S-Function (motohawk_sfun_data_write): '<S179>/motohawk_data_write' */
      /* Write to Data Storage as vector: quadIndex */
      {
        quadIndex_DataStore()[0] = localB->s164_quadIndexO[0];
        quadIndex_DataStore()[1] = localB->s164_quadIndexO[1];
        quadIndex_DataStore()[2] = localB->s164_quadIndexO[2];
        quadIndex_DataStore()[3] = localB->s164_quadIndexO[3];
      }

      /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem4' */
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_atomic_Setup_Init(uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Setup_Init': '<S164>:16' */
  /* Event: '<S164>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s164_stringNum = 15U;
  sprintf(charPtr(&localB->s164_string[0]), "UWMAD");
  localB->s164_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S164>:303' */
  BuckyWagon_01_SendString_efficient(localB->s164_stringNum, localB->
    s164_string[0], localB->s164_string[1], localB->s164_string[2],
    localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
    localB->s164_string[6], localB->s164_string, localB->s164_string[7],
    localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
    localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
    &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
    localB->s164_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s164_y0 = 8U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 63U;
  localB->s164_lineColor = BuckyWagon_01_BLACK;
  localB->s164_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S164>:306' */
  BuckyWagon_01_DrawHLine(localB->s164_x0, localB->s164_x1, localB->s164_y0,
    localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s164_hCenter = 1U;
  localB->s164_vCenter = 0U;
  localB->s164_font = BuckyWagon_01_FONT4x6;
  localB->s164_x0 = 32U;
  localB->s164_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S164>:304' */
  BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
    localB->s164_y0, localB->s164_font, localB->s164_hCenter,
    localB->s164_vCenter, rtu_21, localB->s164_lineColor, localB->s164_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s164_setupVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* Graphical Function 'loadSelect': '<S164>:26' */
  /* Transition: '<S164>:156' */
  if (localDW->s164_setupIndex == 1) {
    /* Transition: '<S164>:155' */
    localDW->s164_selectIndex = rtu_singleIndex;
  } else if ((localDW->s164_setupIndex == 2) || (localDW->s164_setupIndex == 3))
  {
    /* Transition: '<S164>:157' */
    localDW->s164_selectIndex = rtu_dualIndex[localDW->s164_setupIndex - 2];
  } else {
    if (localDW->s164_setupIndex >= 4) {
      /* Transition: '<S164>:158' */
      localDW->s164_selectIndex = rtu_quadIndex[localDW->s164_setupIndex - 4];
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Setup(uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  boolean_T guard;
  boolean_T guard_0;

  /* During 'Setup': '<S164>:13' */
  guard = FALSE;
  guard_0 = FALSE;
  switch (localDW->s164_is_Setup) {
   case BuckyWagon_01_IN_Setup_Init:
    /* During 'Setup_Init': '<S164>:16' */
    /* Transition: '<S164>:59' */
    if (localDW->s164_setupIndex >= localDW->s164_setupVIndex + 6) {
      /* Transition: '<S164>:53' */
      localDW->s164_setupVIndex = (uint8_T)(localDW->s164_setupIndex - 5);
      localB->s164_stringNum = 0U;
    } else if (localDW->s164_setupIndex < localDW->s164_setupVIndex) {
      /* Transition: '<S164>:52' */
      localDW->s164_setupVIndex = localDW->s164_setupIndex;
      localB->s164_stringNum = 0U;
    } else {
      /* Transition: '<S164>:54' */
      localB->s164_stringNum = 0U;
    }

    while (localB->s164_stringNum < 6) {
      /* Transition: '<S164>:46' */
      memcpy(&localB->s164_string[0], &rtu_setupNames[13 *
             (localDW->s164_setupVIndex + localB->s164_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
    }

    /* Transition: '<S164>:50' */
    localDW->s164_is_Setup = BuckyWagon_01_IN_setup_Wait;
    break;

   case BuckyWagon_01_IN_select_var:
    /* During 'select_var': '<S164>:30' */
    switch (localDW->s164_is_select_var) {
     case BuckyWagon_01_IN_Select_Init:
      /* During 'Select_Init': '<S164>:33' */
      /* Transition: '<S164>:150' */
      if (localDW->s164_selectIndex >= localDW->s164_selectVIndex + 6) {
        /* Transition: '<S164>:144' */
        localDW->s164_selectVIndex = (uint8_T)(localDW->s164_selectIndex - 5);
        localB->s164_stringNum = 0U;
      } else if (localDW->s164_selectIndex < localDW->s164_selectVIndex) {
        /* Transition: '<S164>:143' */
        localDW->s164_selectVIndex = localDW->s164_selectIndex;
        localB->s164_stringNum = 0U;
      } else {
        /* Transition: '<S164>:145' */
        localB->s164_stringNum = 0U;
      }

      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:137' */
        memcpy(&localB->s164_string[0], &rtu_names[10 *
               (localDW->s164_selectVIndex + localB->s164_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S164>:303' */
        BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
          localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
          localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
          localB->s164_string[6], localB->s164_string, localB->s164_string[7],
          localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
          localB->s164_string[11], localB->s164_string[12], localB->s164_string
          [13], &localB->s164_string[7], localB->s164_string[14],
          localB->s164_string[15], localB->s164_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      }

      /* Transition: '<S164>:141' */
      localDW->s164_is_select_var = BuckyWagon_01_IN_select_Wait;
      break;

     case BuckyWagon_01_IN_select_Idle:
      /* During 'select_Idle': '<S164>:32' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S164>:154' */
        BuckyWagon_01_storeSelect(rtu_dualIndex, rtu_quadIndex, localB, localDW);
        localDW->s164_is_select_var = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s164_is_Setup = BuckyWagon_01_IN_Setup_Init;
        BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
      } else if (localDW->s164_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S164>:152' */
        if (localDW->s164_selectIndex == 0) {
          /* Transition: '<S164>:153' */
          localDW->s164_is_select_var = BuckyWagon_01_IN_select_Idle;
        } else {
          /* Transition: '<S164>:151' */
          localDW->s164_selectIndex = (uint8_T)(localDW->s164_selectIndex - 1);
          guard = TRUE;
        }
      } else {
        if (localDW->s164_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S164>:149' */
          if (rtu_numFields - 1 == localDW->s164_selectIndex) {
            /* Transition: '<S164>:147' */
            localDW->s164_is_select_var = BuckyWagon_01_IN_select_Idle;
          } else {
            /* Transition: '<S164>:148' */
            localDW->s164_selectIndex = (uint8_T)(localDW->s164_selectIndex + 1);
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_select_Wait:
      /* During 'select_Wait': '<S164>:31' */
      /* Transition: '<S164>:139' */
      localB->s164_x0 = 0U;
      localB->s164_y0 = 12U;
      localB->s164_x1 = 64U;
      localB->s164_y1 = 53U;
      localB->s164_lineColor = 0U;
      localB->s164_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S164>:301' */
      BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1, localB->s164_y0,
        localB->s164_y1, localB->s164_lineColor, localB->s164_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s164_lineColor = 1U;
      localB->s164_hCenter = 1U;
      localB->s164_stringNum = 0U;
      while (localB->s164_stringNum < 6) {
        /* Transition: '<S164>:136' */
        localB->s164_y0 = (uint8_T)(localB->s164_stringNum * 7 + 12);
        if (localDW->s164_selectVIndex + localB->s164_stringNum ==
            localDW->s164_selectIndex) {
          /* Transition: '<S164>:138' */
          localB->s164_fillColor = BuckyWagon_01_BLACK;
          localB->s164_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
        } else {
          /* Transition: '<S164>:140' */
          localB->s164_fillColor = BuckyWagon_01_WHITE;
          localB->s164_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
        }
      }

      /* Transition: '<S164>:142' */
      localDW->s164_is_select_var = BuckyWagon_01_IN_select_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      break;
    }
    break;

   case BuckyWagon_01_IN_setup_Idle:
    /* During 'setup_Idle': '<S164>:15' */
    if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S164>:66' */
      if (localDW->s164_setupIndex == 0) {
        /* Transition: '<S164>:65' */
        if (rtu_screen == 1) {
          /* Transition: '<S164>:36' */
          localDW->s164_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S164>:42' */
          localDW->s164_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S164>:38' */
          localDW->s164_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S164>:41' */
          localDW->s164_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        /* Transition: '<S164>:69' */
        BuckyWagon_01_loadSelect(rtu_singleIndex, rtu_dualIndex, rtu_quadIndex,
          localDW);
        localDW->s164_is_Setup = BuckyWagon_01_IN_select_var;
        BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      }
    } else if (localDW->s164_sfEvent == BuckyWagon_01_event_upPressed) {
      /* Transition: '<S164>:61' */
      if (localDW->s164_setupIndex == 0) {
        /* Transition: '<S164>:62' */
        localDW->s164_is_Setup = BuckyWagon_01_IN_setup_Idle;

        /* Entry 'setup_Idle': '<S164>:15' */
        localB->s164_stringNum = 0U;
      } else {
        /* Transition: '<S164>:60' */
        localDW->s164_setupIndex = (uint8_T)(localDW->s164_setupIndex - 1);
        guard_0 = TRUE;
      }
    } else {
      if (localDW->s164_sfEvent == BuckyWagon_01_event_downPressed) {
        /* Transition: '<S164>:58' */
        if (localDW->s164_setupIndex == 7) {
          /* Transition: '<S164>:56' */
          localDW->s164_is_Setup = BuckyWagon_01_IN_setup_Idle;

          /* Entry 'setup_Idle': '<S164>:15' */
          localB->s164_stringNum = 0U;
        } else {
          /* Transition: '<S164>:57' */
          localDW->s164_setupIndex = (uint8_T)(localDW->s164_setupIndex + 1);
          guard_0 = TRUE;
        }
      }
    }
    break;

   case BuckyWagon_01_IN_setup_Wait:
    /* During 'setup_Wait': '<S164>:14' */
    /* Transition: '<S164>:48' */
    localB->s164_x0 = 0U;
    localB->s164_y0 = 12U;
    localB->s164_x1 = 64U;
    localB->s164_y1 = 53U;
    localB->s164_lineColor = 0U;
    localB->s164_fillColor = 0U;

    /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

    /* Event: '<S164>:301' */
    BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1, localB->s164_y0,
      localB->s164_y1, localB->s164_lineColor, localB->s164_fillColor);

    /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
    localB->s164_lineColor = 1U;
    localB->s164_hCenter = 1U;
    localB->s164_stringNum = 0U;
    while (localB->s164_stringNum < 6) {
      /* Transition: '<S164>:45' */
      localB->s164_y0 = (uint8_T)(localB->s164_stringNum * 7 + 12);
      if (localDW->s164_setupVIndex + localB->s164_stringNum ==
          localDW->s164_setupIndex) {
        /* Transition: '<S164>:47' */
        localB->s164_fillColor = BuckyWagon_01_BLACK;
        localB->s164_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      } else {
        /* Transition: '<S164>:49' */
        localB->s164_fillColor = BuckyWagon_01_WHITE;
        localB->s164_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S164>:304' */
        BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
          localB->s164_y0, localB->s164_font, localB->s164_hCenter,
          localB->s164_vCenter, rtu_21, localB->s164_lineColor,
          localB->s164_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
      }
    }

    /* Transition: '<S164>:51' */
    localDW->s164_is_Setup = BuckyWagon_01_IN_setup_Idle;

    /* Entry 'setup_Idle': '<S164>:15' */
    localB->s164_stringNum = 0U;
    break;

   case BuckyWagon_01_IN_wait:
    /* During 'wait': '<S164>:11' */
    if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S164>:81' */
      localDW->s164_is_Setup = BuckyWagon_01_IN_Setup_Init;
      BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
    }
    break;

   default:
    /* Transition: '<S164>:82' */
    localDW->s164_is_Setup = BuckyWagon_01_IN_wait;

    /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

    /* Entry 'wait': '<S164>:11' */
    /* Event: '<S164>:300' */
    BuckyWagon_01_ClearScreen();

    /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
    localDW->s164_setupIndex = 0U;
    break;
  }

  if (guard_0) {
    if (localDW->s164_setupIndex >= localDW->s164_setupVIndex + 6) {
      /* Transition: '<S164>:53' */
      localDW->s164_setupVIndex = (uint8_T)(localDW->s164_setupIndex - 5);
      localB->s164_stringNum = 0U;
    } else if (localDW->s164_setupIndex < localDW->s164_setupVIndex) {
      /* Transition: '<S164>:52' */
      localDW->s164_setupVIndex = localDW->s164_setupIndex;
      localB->s164_stringNum = 0U;
    } else {
      /* Transition: '<S164>:54' */
      localB->s164_stringNum = 0U;
    }

    while (localB->s164_stringNum < 6) {
      /* Transition: '<S164>:46' */
      memcpy(&localB->s164_string[0], &rtu_setupNames[13 *
             (localDW->s164_setupVIndex + localB->s164_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
    }

    /* Transition: '<S164>:50' */
    localDW->s164_is_Setup = BuckyWagon_01_IN_setup_Wait;
  }

  if (guard) {
    if (localDW->s164_selectIndex >= localDW->s164_selectVIndex + 6) {
      /* Transition: '<S164>:144' */
      localDW->s164_selectVIndex = (uint8_T)(localDW->s164_selectIndex - 5);
      localB->s164_stringNum = 0U;
    } else if (localDW->s164_selectIndex < localDW->s164_selectVIndex) {
      /* Transition: '<S164>:143' */
      localDW->s164_selectVIndex = localDW->s164_selectIndex;
      localB->s164_stringNum = 0U;
    } else {
      /* Transition: '<S164>:145' */
      localB->s164_stringNum = 0U;
    }

    while (localB->s164_stringNum < 6) {
      /* Transition: '<S164>:137' */
      memcpy(&localB->s164_string[0], &rtu_names[10 *
             (localDW->s164_selectVIndex + localB->s164_stringNum)], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S164>:303' */
      BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
        localB->s164_string[0], localB->s164_string[1], localB->s164_string[2],
        localB->s164_string[3], localB->s164_string[4], localB->s164_string[5],
        localB->s164_string[6], localB->s164_string, localB->s164_string[7],
        localB->s164_string[8], localB->s164_string[9], localB->s164_string[10],
        localB->s164_string[11], localB->s164_string[12], localB->s164_string[13],
        &localB->s164_string[7], localB->s164_string[14], localB->s164_string[15],
        localB->s164_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s164_stringNum = (uint8_T)(localB->s164_stringNum + 1);
    }

    /* Transition: '<S164>:141' */
    localDW->s164_is_select_var = BuckyWagon_01_IN_select_Wait;
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
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  int32_T temp;

  /* During: Foreground/MiniViewDisplay/Chart */
  if (localDW->s164_is_active_c2_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/Chart */
    localDW->s164_is_active_c2_BuckyWagon_01 = 1U;

    /* Transition: '<S164>:43' */
    localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

    /* Entry 'PowerupDelay': '<S164>:9' */
    localDW->s164_timer = 0U;
  } else {
    switch (localDW->s164_is_c2_BuckyWagon_01) {
     case BuckyWagon_01_IN_Dual:
      BuckyWagon_01_Dual(rtu_dualIndex, rtu_names, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_List:
      BuckyWagon_01_List(rtu_listIndex, rtu_names, rtu_numFields, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_PowerupDelay:
      /* During 'PowerupDelay': '<S164>:9' */
      if (localDW->s164_timer >= rtu_startupDelay) {
        /* Transition: '<S164>:40' */
        if (rtu_screen == 1) {
          /* Transition: '<S164>:36' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S164>:42' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S164>:38' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S164>:41' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        localDW->s164_timer = (uint16_T)(localDW->s164_timer + 1);
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
      /* During 'Single': '<S164>:12' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuPressed) {
        /* Transition: '<S164>:83' */
        localDW->s164_is_Single = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait3;
      } else {
        switch (localDW->s164_is_Single) {
         case BuckyWagon_01_IN_List_Idle_h:
          /* During 'List_Idle': '<S164>:10' */
          if ((localDW->s164_sfEvent == BuckyWagon_01_event_tick) &&
              (localDW->s164_timer >= BuckyWagon_01_UPDATE_TIME)) {
            /* Transition: '<S164>:123' */
            localB->s164_stringNum = 0U;
            localB->s164_font = BuckyWagon_01_FONT8x15;
            localB->s164_fillColor = BuckyWagon_01_WHITE;
            localB->s164_hCenter = 0U;
            if (localDW->s164_oldData[0] != rtu_data[rtu_singleIndex]) {
              /* Transition: '<S164>:126' */
              sprintf(charPtr(&localB->s164_string[0]), "%4d",
                      rtu_data[rtu_singleIndex]);

              /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

              /* Event: '<S164>:303' */
              BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
                localB->s164_string[0], localB->s164_string[1],
                localB->s164_string[2], localB->s164_string[3],
                localB->s164_string[4], localB->s164_string[5],
                localB->s164_string[6], localB->s164_string, localB->
                s164_string[7], localB->s164_string[8], localB->s164_string[9],
                localB->s164_string[10], localB->s164_string[11],
                localB->s164_string[12], localB->s164_string[13],
                &localB->s164_string[7], localB->s164_string[14],
                localB->s164_string[15], localB->s164_string[16]);

              /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
              localB->s164_x0 = 0U;
              localB->s164_x1 = 64U;
              localB->s164_y0 = 25U;
              localB->s164_y1 = 39U;
              localB->s164_fillColor = BuckyWagon_01_WHITE;
              localB->s164_lineColor = 0U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S164>:301' */
              BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                localB->s164_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s164_lineColor = BuckyWagon_01_BLACK;
              localB->s164_x0 = 15U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

              /* Event: '<S164>:304' */
              BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
                localB->s164_y0, localB->s164_font, localB->s164_hCenter,
                localB->s164_vCenter, rtu_21, localB->s164_lineColor,
                localB->s164_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw String' */
              localDW->s164_oldData[0] = rtu_data[rtu_singleIndex];
              localB->s164_x0 = 6U;
              localB->s164_x1 = 58U;
              localB->s164_y0 = 41U;
              localB->s164_y1 = 48U;
              localB->s164_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S164>:301' */
              BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                localB->s164_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              temp = rtu_barMin[rtu_singleIndex];
              if (rtu_data[rtu_singleIndex] > (temp >=
                   rtu_barMax[rtu_singleIndex] ? temp :
                   rtu_barMax[rtu_singleIndex])) {
                /* Transition: '<S164>:127' */
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
                  /* Transition: '<S164>:125' */
                  temp = rtu_barMin[rtu_singleIndex];
                  temp = ((temp <= rtu_barMax[rtu_singleIndex] ? temp :
                           rtu_barMax[rtu_singleIndex]) -
                          rtu_barMin[rtu_singleIndex]) * 52 /
                    (rtu_barMax[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    + 6;
                } else {
                  /* Transition: '<S164>:121' */
                  temp = (rtu_data[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    * 52 / (rtu_barMax[rtu_singleIndex] -
                            rtu_barMin[rtu_singleIndex]) + 6;
                }
              }

              if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp >= 32)) {
                /* Transition: '<S164>:128' */
                localB->s164_x1 = (uint8_T)temp;
                localB->s164_fillColor = BuckyWagon_01_BLACK;
                localB->s164_x0 = 32U;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S164>:301' */
                BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                  localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                  localB->s164_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp < 32))
              {
                /* Transition: '<S164>:122' */
                localB->s164_x0 = (uint8_T)temp;
                localB->s164_x1 = 32U;
                localB->s164_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S164>:301' */
                BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                  localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                  localB->s164_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 1) {
                /* Transition: '<S164>:120' */
                localB->s164_x0 = (uint8_T)temp;
                localB->s164_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S164>:301' */
                BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                  localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                  localB->s164_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 3) {
                /* Transition: '<S164>:68' */
                localB->s164_x0 = (uint8_T)temp;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

                /* Event: '<S164>:305' */
                BuckyWagon_01_DrawVline(localB->s164_x0, localB->s164_y0,
                  localB->s164_y1, localB->s164_lineColor,
                  localB->s164_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
              } else {
                /* Transition: '<S164>:124' */
                localB->s164_x1 = (uint8_T)temp;
                localB->s164_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S164>:301' */
                BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                  localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                  localB->s164_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              }

              /* Transition: '<S164>:119' */
              /* Transition: '<S164>:115' */
            } else {
              /* Transition: '<S164>:118' */
            }

            /* Transition: '<S164>:77' */
            localB->s164_y0 = 55U;
            localB->s164_y1 = 63U;
            localB->s164_x0 = 0U;
            localB->s164_x1 = 63U;
            memcpy(&localB->s164_string[0], &rtu_statusTxt[0], 9);
            localB->s164_string[9] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S164>:303' */
            BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
              localB->s164_string[0], localB->s164_string[1],
              localB->s164_string[2], localB->s164_string[3],
              localB->s164_string[4], localB->s164_string[5],
              localB->s164_string[6], localB->s164_string, localB->s164_string[7],
              localB->s164_string[8], localB->s164_string[9],
              localB->s164_string[10], localB->s164_string[11],
              localB->s164_string[12], localB->s164_string[13],
              &localB->s164_string[7], localB->s164_string[14],
              localB->s164_string[15], localB->s164_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            if (rtu_statusTxtMode == 1) {
              /* Transition: '<S164>:75' */
              localB->s164_fillColor = BuckyWagon_01_BLACK;
              localB->s164_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S164>:301' */
              BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                localB->s164_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s164_lineColor = BuckyWagon_01_WHITE;
            } else {
              /* Transition: '<S164>:135' */
              localB->s164_lineColor = BuckyWagon_01_WHITE;
              localB->s164_fillColor = BuckyWagon_01_WHITE;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S164>:301' */
              BuckyWagon_01_DrawRect(localB->s164_x0, localB->s164_x1,
                localB->s164_y0, localB->s164_y1, localB->s164_lineColor,
                localB->s164_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s164_lineColor = BuckyWagon_01_BLACK;
            }

            /* Transition: '<S164>:44' */
            localB->s164_y0 = 56U;
            localB->s164_font = BuckyWagon_01_FONT4x6;
            localB->s164_x0 = 17U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S164>:304' */
            BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
              localB->s164_y0, localB->s164_font, localB->s164_hCenter,
              localB->s164_vCenter, rtu_21, localB->s164_lineColor,
              localB->s164_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */

            /* Transition: '<S164>:116' */
            localDW->s164_timer = 0U;
            localDW->s164_is_Single = BuckyWagon_01_IN_List_Idle_h;
          } else {
            if (localDW->s164_sfEvent == BuckyWagon_01_event_tick) {
              /* Transition: '<S164>:117' */
              localDW->s164_timer = (uint16_T)(localDW->s164_timer + 1);
              localDW->s164_is_Single = BuckyWagon_01_IN_List_Idle_h;
            }
          }
          break;

         case BuckyWagon_01_IN_Single_Init:
          /* During 'Single_Init': '<S164>:7' */
          /* Transition: '<S164>:70' */
          localDW->s164_is_Single = BuckyWagon_01_IN_singleNames;

          /* Entry 'singleNames': '<S164>:6' */
          localB->s164_hCenter = 1U;
          localB->s164_font = BuckyWagon_01_FONT6x8;
          localB->s164_x0 = 30U;
          localB->s164_stringNum = 0U;
          memcpy(&localB->s164_string[0], &rtu_names[10 * rtu_singleIndex], 10);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S164>:303' */
          BuckyWagon_01_SendString_efficient(localB->s164_stringNum,
            localB->s164_string[0], localB->s164_string[1], localB->s164_string
            [2], localB->s164_string[3], localB->s164_string[4],
            localB->s164_string[5], localB->s164_string[6], localB->s164_string,
            localB->s164_string[7], localB->s164_string[8], localB->s164_string
            [9], localB->s164_string[10], localB->s164_string[11],
            localB->s164_string[12], localB->s164_string[13],
            &localB->s164_string[7], localB->s164_string[14],
            localB->s164_string[15], localB->s164_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s164_y0 = 14U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S164>:304' */
          BuckyWagon_01_DrawString(localB->s164_stringNum, localB->s164_x0,
            localB->s164_y0, localB->s164_font, localB->s164_hCenter,
            localB->s164_vCenter, rtu_21, localB->s164_lineColor,
            localB->s164_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          break;

         case BuckyWagon_01_IN_singleNames:
          /* During 'singleNames': '<S164>:6' */
          /* Transition: '<S164>:129' */
          localDW->s164_timer = BuckyWagon_01_UPDATE_TIME;
          localDW->s164_is_Single = BuckyWagon_01_IN_List_Idle_h;
          break;

         default:
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_wait1:
      /* During 'wait1': '<S164>:17' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S164>:90' */
        localB->s164_screenO = 2U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S164>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s164_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
        BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S164>:86' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S164>:82' */
          localDW->s164_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S164>:11' */
          /* Event: '<S164>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s164_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait2:
      /* During 'wait2': '<S164>:29' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S164>:89' */
        localB->s164_screenO = 1U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S164>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s164_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
        BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S164>:37' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S164>:82' */
          localDW->s164_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S164>:11' */
          /* Event: '<S164>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s164_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait3:
      /* During 'wait3': '<S164>:28' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S164>:88' */
        localB->s164_screenO = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S164>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s164_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
        BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S164>:35' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S164>:82' */
          localDW->s164_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S164>:11' */
          /* Event: '<S164>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s164_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait4:
      /* During 'wait4': '<S164>:27' */
      if (localDW->s164_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S164>:87' */
        localB->s164_screenO = 4U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S164>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s164_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
        BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S164>:39' */
          localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S164>:82' */
          localDW->s164_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S164>:11' */
          /* Event: '<S164>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s164_setupIndex = 0U;
        }
      }
      break;

     default:
      /* Transition: '<S164>:43' */
      localDW->s164_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

      /* Entry 'PowerupDelay': '<S164>:9' */
      localDW->s164_timer = 0U;
      break;
    }
  }
}

/* Initial conditions for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  int32_T i;
  localDW->s164_is_Dual = 0U;
  localDW->s164_is_List = 0U;
  localDW->s164_is_Quad = 0U;
  localDW->s164_is_Setup = 0U;
  localDW->s164_is_select_var = 0U;
  localDW->s164_is_Single = 0U;
  localDW->s164_is_active_c2_BuckyWagon_01 = 0U;
  localDW->s164_is_c2_BuckyWagon_01 = 0U;
  localDW->s164_timer = 0U;
  for (i = 0; i < 6; i++) {
    localDW->s164_oldData[i] = 0;
  }

  localDW->s164_setupIndex = 0U;
  localDW->s164_setupVIndex = 0U;
  localDW->s164_selectIndex = 0U;
  localDW->s164_selectVIndex = 0U;
  localB->s164_mode = 0U;
  localB->s164_x0 = 0U;
  localB->s164_x1 = 0U;
  localB->s164_y0 = 0U;
  localB->s164_y1 = 0U;
  localB->s164_lineColor = 0U;
  localB->s164_fillColor = 0U;
  localB->s164_stringNum = 0U;
  for (i = 0; i < 18; i++) {
    localB->s164_string[i] = 0U;
  }

  localB->s164_font = 0U;
  localB->s164_hCenter = 0U;
  localB->s164_vCenter = 0U;
  localB->s164_listIndexO = 0U;
  localB->s164_screenO = 0U;
  localB->s164_dualIndexO[0] = 0U;
  localB->s164_dualIndexO[1] = 0U;
  localB->s164_quadIndexO[0] = 0U;
  localB->s164_quadIndexO[1] = 0U;
  localB->s164_quadIndexO[2] = 0U;
  localB->s164_quadIndexO[3] = 0U;
  localB->s164_singleIndexO = 0U;
}

/* Start for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_Start(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
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

  /* Stateflow: '<S11>/Chart' incorporates:
   *  TriggerPort: '<S164>/ input events '
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
      /* Event: '<S164>:298' */
      localDW->s164_sfEvent = BuckyWagon_01_event_tick;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[1U] == 1) {
      /* Event: '<S164>:307' */
      localDW->s164_sfEvent = BuckyWagon_01_event_upPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[2U] == -1) {
      /* Event: '<S164>:308' */
      localDW->s164_sfEvent = BuckyWagon_01_event_upReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[3U] == 1) {
      /* Event: '<S164>:309' */
      localDW->s164_sfEvent = BuckyWagon_01_event_menuPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[4U] == -1) {
      /* Event: '<S164>:310' */
      localDW->s164_sfEvent = BuckyWagon_01_event_menuReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[5U] == 1) {
      /* Event: '<S164>:311' */
      localDW->s164_sfEvent = BuckyWagon_01_event_downPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[6U] == -1) {
      /* Event: '<S164>:312' */
      localDW->s164_sfEvent = BuckyWagon_01_event_downReleased;
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
   *  EnablePort: '<S172>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S172>/In' */
    localB->s172_In = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
}

/* Initial conditions for function-call system: '<S180>/Fault Iterator' */
void BuckyWagon_01_FaultIterator_Init(rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S194>/Unit Delay' */
  localDW->s194_UnitDelay_DSTATE = 0;
}

/* Output and update for function-call system: '<S180>/Fault Iterator' */
void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* local block i/o variables */
  fault_T rtb_UnitDelay_fi;
  fault_T rtb_motohawk_fault_iterator_o2;

  /* UnitDelay: '<S194>/Unit Delay' */
  rtb_UnitDelay_fi = localDW->s194_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_fault_iterator): '<S194>/motohawk_fault_iterator' */
  /* Get Next Active Fault */
  {
    extern boolean_T IsFaultValid(uint32_T fault);
    extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
    rtb_motohawk_fault_iterator_o2 = GetNextActiveFault((uint32_T)
      (rtb_UnitDelay_fi), 1);
    localB->s194_motohawk_fault_iterator_o1 = IsFaultValid
      (rtb_motohawk_fault_iterator_o2);
  }

  /* S-Function (motohawk_sfun_fault_name): '<S194>/motohawk_fault_name' */
  {
    extern const char *GetFaultName(uint32_T fault);
    const char *name;
    char *out;
    int i;
    name = GetFaultName(rtb_motohawk_fault_iterator_o2);
    out = (char *) localB->s194_motohawk_fault_name;
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

  /* Update for UnitDelay: '<S194>/Unit Delay' */
  localDW->s194_UnitDelay_DSTATE = rtb_motohawk_fault_iterator_o2;
}

/* Initial conditions for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Init(void)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S180>/Chart' */
  BuckyWagon_01_DWork.s193_is_Fault = 0U;
  BuckyWagon_01_DWork.s193_is_active_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s193_mode = 0U;
  for (i = 0; i < 10; i++) {
    BuckyWagon_01_B.s193_text[i] = 0U;
  }

  BuckyWagon_01_B.s193_minTimer = 0U;
  BuckyWagon_01_B.s193_scrollIndex = 0U;
  BuckyWagon_01_B.s193_scrollTimer = 0U;

  /* InitializeConditions for Stateflow: '<S180>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S180>/Fault Iterator'
   */
  BuckyWagon_01_FaultIterator_Init(&BuckyWagon_01_DWork.s180_FaultIterator);

  /* InitializeConditions for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s11_sf_Chart,
    &BuckyWagon_01_DWork.s11_sf_Chart);
}

/* Start for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Start(void)
{
  /* Start for Stateflow: '<S180>/Chart' incorporates:
   *  Start for SubSystem: '<S180>/Fault Iterator'
   */

  /* Start for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_Start(&BuckyWagon_01_B.s11_sf_Chart,
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
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s211_upasserted,
    BuckyWagon_01_B.s211_upcount, &BuckyWagon_01_B.s11_EnabledSubsystem2);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem1' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s196_menuasserted,
    BuckyWagon_01_B.s196_menucount, &BuckyWagon_01_B.s11_EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s187_downasserted,
    BuckyWagon_01_B.s187_downcount, &BuckyWagon_01_B.s11_EnabledSubsystem);

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

  /* UnitDelay: '<S180>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    rtb_UnitDelay_j[i] = BuckyWagon_01_DWork.s180_UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S180>/Unit Delay' */

  /* MATLAB Function Block: '<S180>/getStringLength' */

  /* MATLAB Function 'Foreground/MiniViewDisplay/GetFaultName/getStringLength': '<S195>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /* '<S195>:1:5' */
  rtb_faultNameLength = 1.0;
  while ((rtb_UnitDelay_j[(int32_T)rtb_faultNameLength - 1] != 0) ||
         (rtb_faultNameLength > 27.0)) {
    /* '<S195>:1:6' */
    /* '<S195>:1:7' */
    /* '<S195>:1:8' */
    rtb_faultNameLength++;
  }

  /* End of MATLAB Function Block: '<S180>/getStringLength' */

  /* Stateflow: '<S180>/Chart' */

  /* Gateway: Foreground/MiniViewDisplay/GetFaultName/Chart */
  /* During: Foreground/MiniViewDisplay/GetFaultName/Chart */
  if (BuckyWagon_01_DWork.s193_is_active_c3_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/GetFaultName/Chart */
    BuckyWagon_01_DWork.s193_is_active_c3_BuckyWagon_01 = 1U;

    /* Transition: '<S193>:7' */
    BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

    /* Entry 'NoFault': '<S193>:1' */
    for (i = 0; i < 10; i++) {
      /* S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration2' */
      BuckyWagon_01_B.s193_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
    }
  } else {
    switch (BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01) {
     case BuckyWagon_01_IN_Fault:
      /* UnitDelay: '<S180>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration7'
       */
      /* During 'Fault': '<S193>:2' */
      if (!(BuckyWagon_01_DWork.s180_UnitDelay1_DSTATE &&
            (DisplayFaults_DataStore()))) {
        /* Transition: '<S193>:13' */
        BuckyWagon_01_DWork.s193_is_Fault = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_m;
        BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

        /* Entry 'NoFault': '<S193>:1' */
        for (i = 0; i < 10; i++) {
          BuckyWagon_01_B.s193_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
        }
      } else {
        BuckyWagon_01_B.s193_minTimer = (uint16_T)(BuckyWagon_01_B.s193_minTimer
          + 1);
        switch (BuckyWagon_01_DWork.s193_is_Fault) {
         case BuckyWagon_01_IN_CheckNextFault:
          /* During 'CheckNextFault': '<S193>:6' */
          /* Transition: '<S193>:17' */
          /* Transition: '<S193>:18' */
          /* Transition: '<S193>:14' */
          BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S193>:5' */
          BuckyWagon_01_B.s193_scrollTimer = 0U;
          BuckyWagon_01_B.s193_scrollIndex = 0U;
          BuckyWagon_01_B.s193_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s193_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s193_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;

         case BuckyWagon_01_IN_lastWait:
          /* During 'lastWait': '<S193>:4' */
          if ((BuckyWagon_01_B.s193_scrollTimer > ((uint16_T)
                (lastScrollTime_DataStore()))) && (BuckyWagon_01_B.s193_minTimer
               > ((uint16_T)(minTime_DataStore())))) {
            /* Stateflow: '<S180>/Chart' incorporates:
             *  SubSystem: '<S180>/Fault Iterator'
             */
            /* Transition: '<S193>:12' */
            /* Event: '<S193>:38' */
            BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s180_FaultIterator,
              &BuckyWagon_01_DWork.s180_FaultIterator);
            BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_CheckNextFault;
          } else {
            /* Stateflow: '<S180>/Chart' */
            BuckyWagon_01_B.s193_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s193_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollText:
          /* Stateflow: '<S180>/Chart' */
          /* During 'scrollText': '<S193>:3' */
          if (BuckyWagon_01_B.s193_scrollTimer >= ((uint16_T)
               (scrollTime_DataStore()))) {
            /* Transition: '<S193>:9' */
            if ((int32_T)rtb_faultNameLength - 2 >= ((uint8_T)
                 (dispLength_DataStore())) + BuckyWagon_01_B.s193_scrollIndex) {
              /* Transition: '<S193>:10' */
              BuckyWagon_01_B.s193_scrollIndex = (uint8_T)
                (BuckyWagon_01_B.s193_scrollIndex + 1);
              BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_scrollText;

              /* Entry 'scrollText': '<S193>:3' */
              BuckyWagon_01_B.s193_scrollTimer = 0U;
              memcpy(&BuckyWagon_01_B.s193_text[0],
                     &rtb_UnitDelay_j[BuckyWagon_01_B.s193_scrollIndex],
                     ((uint8_T)(dispLength_DataStore())));
              BuckyWagon_01_B.s193_text[((uint8_T)(dispLength_DataStore()))] =
                0U;
            } else {
              /* Transition: '<S193>:11' */
              BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_lastWait;
            }
          } else {
            BuckyWagon_01_B.s193_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s193_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollTextFirst:
          /* Stateflow: '<S180>/Chart' */
          /* During 'scrollTextFirst': '<S193>:5' */
          if (BuckyWagon_01_B.s193_scrollTimer >= ((uint16_T)
               (firstScrollTime_DataStore()))) {
            /* Transition: '<S193>:16' */
            BuckyWagon_01_B.s193_scrollIndex = (uint8_T)
              (BuckyWagon_01_B.s193_scrollIndex + 1);
            BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_scrollText;

            /* Entry 'scrollText': '<S193>:3' */
            BuckyWagon_01_B.s193_scrollTimer = 0U;
            memcpy(&BuckyWagon_01_B.s193_text[0],
                   &rtb_UnitDelay_j[BuckyWagon_01_B.s193_scrollIndex], ((uint8_T)
                    (dispLength_DataStore())));
            BuckyWagon_01_B.s193_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          } else {
            BuckyWagon_01_B.s193_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s193_scrollTimer + 1);
          }
          break;

         default:
          /* Transition: '<S193>:15' */
          BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S193>:5' */
          BuckyWagon_01_B.s193_scrollTimer = 0U;
          BuckyWagon_01_B.s193_scrollIndex = 0U;
          BuckyWagon_01_B.s193_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s193_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s193_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;
        }
      }

      /* End of UnitDelay: '<S180>/Unit Delay1' */
      break;

     case BuckyWagon_01_IN_NoFault:
      /* Stateflow: '<S180>/Chart' */
      /* UnitDelay: '<S180>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration3'
       */
      /* During 'NoFault': '<S193>:1' */
      if (BuckyWagon_01_DWork.s180_UnitDelay1_DSTATE && (DisplayFaults_DataStore
           ())) {
        /* Transition: '<S193>:8' */
        BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_Fault;

        /* Entry 'Fault': '<S193>:2' */
        BuckyWagon_01_B.s193_mode = !(InvertMode_DataStore());

        /* Transition: '<S193>:15' */
        BuckyWagon_01_DWork.s193_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

        /* Entry 'scrollTextFirst': '<S193>:5' */
        BuckyWagon_01_B.s193_scrollTimer = 0U;
        BuckyWagon_01_B.s193_scrollIndex = 0U;
        BuckyWagon_01_B.s193_minTimer = 0U;
        memcpy(&BuckyWagon_01_B.s193_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                (dispLength_DataStore())));
        BuckyWagon_01_B.s193_text[((uint8_T)(dispLength_DataStore()))] = 0U;
      } else {
        BuckyWagon_01_B.s193_mode = (InvertMode_DataStore());

        /* Stateflow: '<S180>/Chart' incorporates:
         *  SubSystem: '<S180>/Fault Iterator'
         */
        /* Event: '<S193>:38' */
        BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s180_FaultIterator,
          &BuckyWagon_01_DWork.s180_FaultIterator);
      }

      /* End of UnitDelay: '<S180>/Unit Delay1' */
      break;

     default:
      /* Transition: '<S193>:7' */
      BuckyWagon_01_DWork.s193_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

      /* Entry 'NoFault': '<S193>:1' */
      for (i = 0; i < 10; i++) {
        /* S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration2' */
        BuckyWagon_01_B.s193_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
      }
      break;
    }
  }

  /* Gain: '<S182>/Gain5' incorporates:
   *  Product: '<S182>/Product'
   */
  rtb_faultNameLength = BuckyWagon_01_B.s212_bcm_ibat *
    BuckyWagon_01_B.s212_bcm_vbat * 0.001;

  /* Gain: '<S182>/Gain6' incorporates:
   *  Product: '<S182>/Product1'
   */
  rtb_Gain6 = BuckyWagon_01_B.s223_Accurate_Speed *
    BuckyWagon_01_B.s223_Accurate_Torque * 0.00010471975511965977;

  /* Saturate: '<S182>/Saturation' incorporates:
   *  Gain: '<S182>/Gain3'
   */
  u = 100.0 * BuckyWagon_01_B.s232_Merge;

  /* DataTypeConversion: '<S182>/Data Type Conversion7' incorporates:
   *  Saturate: '<S182>/Saturation'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion7' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion7'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[0] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion4' incorporates:
   *  Saturate: '<S182>/Saturation1'
   */
  u = BuckyWagon_01_B.s212_bcm_vbat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s212_bcm_vbat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s212_bcm_vbat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion4' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion4'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[1] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion2' incorporates:
   *  Saturate: '<S182>/Saturation2'
   */
  u = BuckyWagon_01_B.s212_bcm_ibat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s212_bcm_ibat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s212_bcm_ibat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion2' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion2'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[2] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[3] =
    BuckyWagon_01_ConstB.s182_DataTypeConversion3;

  /* DataTypeConversion: '<S182>/Data Type Conversion5' incorporates:
   *  Saturate: '<S182>/Saturation4'
   */
  u = BuckyWagon_01_B.s223_Accurate_Speed >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s223_Accurate_Speed <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s223_Accurate_Speed;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion5' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion5'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[4] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S182>/Saturation5' incorporates:
   *  Gain: '<S182>/Gain'
   */
  u = 100.0 * BuckyWagon_01_B.s116_Merge;

  /* DataTypeConversion: '<S182>/Data Type Conversion1' incorporates:
   *  Saturate: '<S182>/Saturation5'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion1' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion1'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[5] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion' incorporates:
   *  Saturate: '<S182>/Saturation6'
   */
  u = BuckyWagon_01_B.s223_Accurate_Torque >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s223_Accurate_Torque <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s223_Accurate_Torque;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[6] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion6' incorporates:
   *  Saturate: '<S182>/Saturation7'
   */
  u = rtb_faultNameLength >= 32767.0 ? 32767.0 : rtb_faultNameLength <= -32767.0
    ? -32767.0 : rtb_faultNameLength;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion6' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion6'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[7] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion10' incorporates:
   *  Saturate: '<S182>/Saturation8'
   */
  u = rtb_Gain6 >= 32767.0 ? 32767.0 : rtb_Gain6 <= -32767.0 ? -32767.0 :
    rtb_Gain6;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion10' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion10'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[8] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S182>/Saturation9' incorporates:
   *  Gain: '<S182>/Gain7'
   *  Product: '<S182>/Divide'
   */
  u = rtb_faultNameLength / rtb_Gain6 * 100.0;

  /* DataTypeConversion: '<S182>/Data Type Conversion8' incorporates:
   *  Saturate: '<S182>/Saturation9'
   */
  u = u >= 100.0 ? 100.0 : u <= 0.0 ? 0.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion8' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion8'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[9] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion11' incorporates:
   *  Saturate: '<S182>/Saturation10'
   */
  u = BuckyWagon_01_B.s223_Inverter_Temperature >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s223_Inverter_Temperature <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s223_Inverter_Temperature;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion11' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion11'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[10] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S182>/Saturation11' incorporates:
   *  Gain: '<S182>/Gain2'
   */
  u = 100.0 * BuckyWagon_01_B.s110_Switch;

  /* DataTypeConversion: '<S182>/Data Type Conversion12' incorporates:
   *  Saturate: '<S182>/Saturation11'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion12' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion12'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[11] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S182>/Saturation12' incorporates:
   *  Gain: '<S182>/Gain1'
   */
  u = 1000.0 * BuckyWagon_01_B.s347_Merge;

  /* DataTypeConversion: '<S182>/Data Type Conversion17' incorporates:
   *  Saturate: '<S182>/Saturation12'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion17' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion17'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[12] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S182>/Saturation13' incorporates:
   *  Gain: '<S182>/Gain4'
   */
  u = 100.0 * BuckyWagon_01_B.s339_Merge;

  /* DataTypeConversion: '<S182>/Data Type Conversion18' incorporates:
   *  Saturate: '<S182>/Saturation13'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion18' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion18'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[13] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S182>/Data Type Conversion14' */
  if (rtIsNaN(BuckyWagon_01_B.s355_Merge) || rtIsInf(BuckyWagon_01_B.s355_Merge))
  {
    u = 0.0;
  } else {
    u = fmod(floor(BuckyWagon_01_B.s355_Merge), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion14' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion13'
   *  DataTypeConversion: '<S182>/Data Type Conversion14'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[14] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[15] =
    BuckyWagon_01_B.s244_Merge;

  /* DataTypeConversion: '<S182>/Data Type Conversion15' incorporates:
   *  Saturate: '<S182>/Saturation14'
   */
  u = BuckyWagon_01_B.s9_InReverse >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s9_InReverse <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s9_InReverse;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S182>/Data Type Conversion15' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion15'
   *  DataTypeConversion: '<S182>/Data Type Conversion16'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[16] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[17] =
    BuckyWagon_01_B.s225_Merge;

  /* UnitDelay: '<S11>/Unit Delay' */
  rtb_UnitDelay_h = BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;

  /* SignalConversion: '<S11>/HiddenBuf_InsertedFor_Chart_at_inport_20' incorporates:
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[0] =
    BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[1] =
    BuckyWagon_01_B.s211_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[2] =
    BuckyWagon_01_B.s211_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[3] =
    BuckyWagon_01_B.s196_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[4] =
    BuckyWagon_01_B.s196_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[5] =
    BuckyWagon_01_B.s187_downasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[6] =
    BuckyWagon_01_B.s187_downasserted;

  /* Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart(rtb_HiddenBuf_InsertedFor_Chart_at_inport_20,
                      BuckyWagon_01_B.s11_EnabledSubsystem1.s172_In,
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
                      BuckyWagon_01_B.s193_text, BuckyWagon_01_B.s193_mode,
                      BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20,
                      ((uint8_T)0U), &BuckyWagon_01_B.s11_sf_Chart,
                      &BuckyWagon_01_DWork.s11_sf_Chart,
                      &BuckyWagon_01_PrevZCSigState.s11_sf_Chart);

  /* Update for UnitDelay: '<S180>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    BuckyWagon_01_DWork.s180_UnitDelay_DSTATE[i] =
      BuckyWagon_01_B.s180_FaultIterator.s194_motohawk_fault_name[i];
  }

  /* End of UnitDelay: '<S180>/Unit Delay' */

  /* Update for UnitDelay: '<S180>/Unit Delay1' */
  BuckyWagon_01_DWork.s180_UnitDelay1_DSTATE =
    BuckyWagon_01_B.s180_FaultIterator.s194_motohawk_fault_iterator_o1;

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
