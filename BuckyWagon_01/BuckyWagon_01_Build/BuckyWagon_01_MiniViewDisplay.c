/*
 * File: BuckyWagon_01_MiniViewDisplay.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1530
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Jul 29 18:42:46 2018
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

/* Named constants for Stateflow: '<S192>/Chart' */
#define BuckyWagon_01_IN_CheckNextFault (1U)
#define BuckyWagon_01_IN_Fault         (1U)
#define BuckyWagon_01_IN_NO_ACTIVE_CHILD_g (0U)
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
  /* Start for S-Function (fcncallgen): '<S177>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S177>/Clear Screen'
   */
}

/* Output and update for function-call system: '<S11>/Clear Screen' */
void BuckyWagon_01_ClearScreen(void)
{
  /* S-Function (fcncallgen): '<S177>/Function-Call Generator' incorporates:
   *  SubSystem: '<S177>/Clear Screen'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S198>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S181>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Rect' */
void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y0,
  uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S181>/Function-Call Generator' incorporates:
   *  SubSystem: '<S181>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S202>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S209>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S212>/Function-Call Generator'
   *  Start for SubSystem: '<S195>/Subsystem'
   *  Start for SubSystem: '<S209>/Send Substring (page 0)'
   *  Start for SubSystem: '<S212>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S213>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S216>/Function-Call Generator'
   *  Start for SubSystem: '<S209>/Function-Call Subsystem'
   *  Start for SubSystem: '<S209>/Send Substring (page 1)'
   *  Start for SubSystem: '<S210>/Enabled Subsystem'
   *  Start for SubSystem: '<S213>/Subsystem'
   */

  /* Start for S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  Start for S-Function (fcncallgen): '<S214>/Function-Call Generator'
   *  Start for S-Function (fcncallgen): '<S218>/Function-Call Generator'
   *  Start for SubSystem: '<S209>/Function-Call Subsystem1'
   *  Start for SubSystem: '<S209>/Send Substring (page 2)'
   *  Start for SubSystem: '<S211>/Enabled Subsystem'
   *  Start for SubSystem: '<S214>/Subsystem'
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
  int8_T rtb_Compare_l[7];
  int32_T i;

  /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  S-Function (fcncallgen): '<S209>/Function-Call Generator'
   *  S-Function (fcncallgen): '<S212>/Function-Call Generator'
   *  SubSystem: '<S195>/Subsystem'
   *  SubSystem: '<S209>/Send Substring (page 0)'
   *  SubSystem: '<S212>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S219>/Send CAN Messages' */
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

  /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  SubSystem: '<S209>/Function-Call Subsystem'
   */
  /* RelationalOperator: '<S215>/Compare' incorporates:
   *  Constant: '<S215>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_l[i] = (rtu_string_c[i] != 0);
  }

  /* End of RelationalOperator: '<S215>/Compare' */

  /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
   *  EnablePort: '<S216>/Enable'
   *  SubSystem: '<S210>/Enabled Subsystem'
   */
  /* Logic: '<S210>/Logical Operator' incorporates:
   *  Logic: '<S211>/Logical Operator'
   */
  if ((rtb_Compare_l[0] != 0) && (rtb_Compare_l[1] != 0) && (rtb_Compare_l[2] !=
       0) && (rtb_Compare_l[3] != 0) && (rtb_Compare_l[4] != 0) &&
      (rtb_Compare_l[5] != 0) && (rtb_Compare_l[6] != 0)) {
    /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
     *  S-Function (fcncallgen): '<S213>/Function-Call Generator'
     *  S-Function (fcncallgen): '<S216>/Function-Call Generator'
     *  SubSystem: '<S209>/Send Substring (page 1)'
     *  SubSystem: '<S213>/Subsystem'
     */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S220>/Send CAN Messages' */
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

    /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
     *  SubSystem: '<S209>/Function-Call Subsystem1'
     */
    /* RelationalOperator: '<S217>/Compare' incorporates:
     *  Constant: '<S217>/Constant'
     */
    for (i = 0; i < 7; i++) {
      rtb_Compare_l[i] = (rtu_string_o[i] != 0);
    }

    /* End of RelationalOperator: '<S217>/Compare' */

    /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
     *  EnablePort: '<S218>/Enable'
     *  SubSystem: '<S211>/Enabled Subsystem'
     */
    if ((rtb_Compare_l[0] != 0) && (rtb_Compare_l[1] != 0) && (rtb_Compare_l[2]
         != 0) && (rtb_Compare_l[3] != 0) && (rtb_Compare_l[4] != 0) &&
        (rtb_Compare_l[5] != 0) && (rtb_Compare_l[6] != 0)) {
      /* S-Function (fcncallgen): '<S195>/Function-Call Generator' incorporates:
       *  S-Function (fcncallgen): '<S214>/Function-Call Generator'
       *  S-Function (fcncallgen): '<S218>/Function-Call Generator'
       *  SubSystem: '<S209>/Send Substring (page 2)'
       *  SubSystem: '<S214>/Subsystem'
       */

      /* S-Function (motohawk_sfun_send_canmsgs): '<S221>/Send CAN Messages' */
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

  /* End of Logic: '<S210>/Logical Operator' */
}

/* Start for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString_Start(void)
{
  /* Start for S-Function (fcncallgen): '<S182>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S182>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw String' */
void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T rtu_y,
  uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter, uint8_T
  rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor)
{
  /* S-Function (fcncallgen): '<S182>/Function-Call Generator' incorporates:
   *  SubSystem: '<S182>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S203>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S183>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw Vline' */
void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T rtu_y1,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S183>/Function-Call Generator' incorporates:
   *  SubSystem: '<S183>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S204>/Send CAN Messages' */
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
  /* Start for S-Function (fcncallgen): '<S180>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S180>/Subsystem'
   */
}

/* Output and update for function-call system: '<S11>/Draw HLine' */
void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T rtu_y,
  uint8_T rtu_linecolor, uint8_T rtu_fillcolor)
{
  /* S-Function (fcncallgen): '<S180>/Function-Call Generator' incorporates:
   *  SubSystem: '<S180>/Subsystem'
   */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S201>/Send CAN Messages' */
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
  /* S-Function (motohawk_sfun_data_write): '<S187>/motohawk_data_write' */
  /* Write to Data Storage as scalar: listIndex */
  {
    listIndex_DataStore() = rtu_Value;
  }
}

/* Output and update for function-call system: '<S11>/Function-Call Subsystem1' */
void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value)
{
  /* S-Function (motohawk_sfun_data_write): '<S188>/motohawk_data_write' */
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
  /* Transition: '<S176>:181' */
  localB->s176_stringNum = 0U;
  while (localB->s176_stringNum < 2) {
    /* Transition: '<S176>:182' */
    localDW->s176_oldData[localB->s176_stringNum] = (int16_T)
      (rtu_data[rtu_dualIndex[localB->s176_stringNum]] + 1);
    localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
  }

  /* Transition: '<S176>:183' */
  localDW->s176_is_Dual = BuckyWagon_01_IN_Dual_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Dual_Init': '<S176>:19' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Dual(const uint8_T rtu_dualIndex[2], const uint8_T
  rtu_names[180], const uint8_T rtu_statusTxt[10], uint8_T rtu_statusTxtMode,
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* During 'Dual': '<S176>:20' */
  if (localDW->s176_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S176>:84' */
    localDW->s176_is_Dual = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait2;
  } else {
    switch (localDW->s176_is_Dual) {
     case BuckyWagon_01_IN_Dual_Init:
      /* During 'Dual_Init': '<S176>:19' */
      /* Transition: '<S176>:184' */
      localDW->s176_is_Dual = BuckyWagon_01_IN_dualNames;

      /* Entry 'dualNames': '<S176>:18' */
      localB->s176_hCenter = 1U;
      localB->s176_font = BuckyWagon_01_FONT6x8;
      localB->s176_x0 = 30U;
      localB->s176_stringNum = 0U;
      memcpy(&localB->s176_string[0], &rtu_names[10 * rtu_dualIndex[0]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s176_y0 = 20U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      memcpy(&localB->s176_string[0], &rtu_names[10 * rtu_dualIndex[1]], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s176_y0 = 34U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_List_Idle:
      /* During 'List_Idle': '<S176>:1' */
      if ((localDW->s176_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s176_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S176>:186' */
        localB->s176_stringNum = 0U;
        localB->s176_font = BuckyWagon_01_FONT6x8;
        localB->s176_fillColor = BuckyWagon_01_WHITE;
        localB->s176_hCenter = 0U;
        if (localDW->s176_oldData[0] != rtu_data[rtu_dualIndex[0]]) {
          /* Transition: '<S176>:187' */
          sprintf(charPtr(&localB->s176_string[0]), "%d",
                  rtu_data[rtu_dualIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 0U;
          localB->s176_x1 = 60U;
          localB->s176_y0 = 10U;
          localB->s176_y1 = 18U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;
          localB->s176_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[0] = rtu_data[rtu_dualIndex[0]];
        } else {
          /* Transition: '<S176>:188' */
        }

        if (localDW->s176_oldData[1] != rtu_data[rtu_dualIndex[1]]) {
          /* Transition: '<S176>:190' */
          sprintf(charPtr(&localB->s176_string[0]), "%d",
                  rtu_data[rtu_dualIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 0U;
          localB->s176_x1 = 60U;
          localB->s176_y0 = 44U;
          localB->s176_y1 = 53U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;
          localB->s176_x0 = 30U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[1] = rtu_data[rtu_dualIndex[1]];
        } else {
          /* Transition: '<S176>:73' */
        }

        /* Transition: '<S176>:67' */
        localB->s176_y0 = 55U;
        localB->s176_y1 = 63U;
        localB->s176_x0 = 0U;
        localB->s176_x1 = 63U;
        memcpy(&localB->s176_string[0], &rtu_statusTxt[0], 9);
        localB->s176_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S176>:130' */
          localB->s176_fillColor = BuckyWagon_01_BLACK;
          localB->s176_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S176>:74' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S176>:76' */
        localB->s176_y0 = 56U;
        localB->s176_font = BuckyWagon_01_FONT4x6;
        localB->s176_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S176>:72' */
        localDW->s176_timer = 0U;
        localDW->s176_is_Dual = BuckyWagon_01_IN_List_Idle;
      } else {
        if (localDW->s176_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S176>:189' */
          localDW->s176_timer = (uint16_T)(localDW->s176_timer + 1);
          localDW->s176_is_Dual = BuckyWagon_01_IN_List_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_dualNames:
      /* During 'dualNames': '<S176>:18' */
      /* Transition: '<S176>:185' */
      localDW->s176_timer = BuckyWagon_01_UPDATE_TIME;
      localDW->s176_is_Dual = BuckyWagon_01_IN_List_Idle;
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
  /* Transition: '<S176>:114' */
  localB->s176_stringNum = 0U;
  while (localB->s176_stringNum < 6) {
    /* Transition: '<S176>:112' */
    localDW->s176_oldData[localB->s176_stringNum] = (int16_T)(rtu_data
      [localB->s176_stringNum + rtu_listIndex] + 1);
    localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
  }

  /* Transition: '<S176>:109' */
  localDW->s176_is_List = BuckyWagon_01_IN_List_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'List_Init': '<S176>:8' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 63U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localB->s176_listIndexO = rtu_listIndex;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_List(uint8_T rtu_listIndex, const uint8_T rtu_names
  [180], uint8_T rtu_numFields, const uint8_T rtu_statusTxt[10], uint8_T
  rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  boolean_T guard;

  /* During 'List': '<S176>:3' */
  if (localDW->s176_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S176>:55' */
    localDW->s176_is_List = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait4;
  } else {
    guard = FALSE;
    switch (localDW->s176_is_List) {
     case BuckyWagon_01_IN_List_Idle_h:
      /* During 'List_Idle': '<S176>:5' */
      if ((localDW->s176_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s176_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S176>:102' */
        localB->s176_stringNum = 0U;
        localB->s176_fillColor = BuckyWagon_01_WHITE;
        localB->s176_hCenter = 0U;
        while (localB->s176_stringNum < 6) {
          /* Transition: '<S176>:103' */
          if (rtu_data[localB->s176_stringNum + rtu_listIndex] ==
              localDW->s176_oldData[localB->s176_stringNum]) {
            /* Transition: '<S176>:105' */
            localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
          } else {
            /* Transition: '<S176>:101' */
            sprintf(charPtr(&localB->s176_string[0]), "%-4d", rtu_data
                    [localB->s176_stringNum + rtu_listIndex]);
            localB->s176_string[4] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S176>:303' */
            BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
              localB->s176_string[0], localB->s176_string[1],
              localB->s176_string[2], localB->s176_string[3],
              localB->s176_string[4], localB->s176_string[5],
              localB->s176_string[6], localB->s176_string, localB->s176_string[7],
              localB->s176_string[8], localB->s176_string[9],
              localB->s176_string[10], localB->s176_string[11],
              localB->s176_string[12], localB->s176_string[13],
              &localB->s176_string[7], localB->s176_string[14],
              localB->s176_string[15], localB->s176_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            localB->s176_x0 = 42U;
            localB->s176_x1 = 57U;
            localB->s176_y0 = (uint8_T)(localB->s176_stringNum * 7 + 12);
            localB->s176_y1 = (uint8_T)(localB->s176_y0 + 6);
            localB->s176_lineColor = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

            /* Event: '<S176>:301' */
            BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
              localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
              localB->s176_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
            localB->s176_lineColor = 1U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S176>:304' */
            BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
              localB->s176_y0, localB->s176_font, localB->s176_hCenter,
              localB->s176_vCenter, rtu_21, localB->s176_lineColor,
              localB->s176_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */
            localDW->s176_oldData[localB->s176_stringNum] = rtu_data
              [localB->s176_stringNum + rtu_listIndex];
            localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
          }
        }

        /* Transition: '<S176>:79' */
        localB->s176_y0 = 55U;
        localB->s176_y1 = 63U;
        localB->s176_x0 = 0U;
        localB->s176_x1 = 63U;
        memcpy(&localB->s176_string[0], &rtu_statusTxt[0], 9);
        localB->s176_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S176>:78' */
          localB->s176_fillColor = BuckyWagon_01_BLACK;
          localB->s176_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S176>:80' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S176>:100' */
        localB->s176_y0 = 56U;
        localB->s176_font = BuckyWagon_01_FONT4x6;
        localB->s176_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S176>:92' */
        localDW->s176_timer = 0U;
        localDW->s176_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S176>:5' */
        localB->s176_stringNum = 0U;
      } else if (localDW->s176_sfEvent == BuckyWagon_01_event_tick) {
        /* Transition: '<S176>:91' */
        localDW->s176_timer = (uint16_T)(localDW->s176_timer + 1);
        localDW->s176_is_List = BuckyWagon_01_IN_List_Idle_h;

        /* Entry 'List_Idle': '<S176>:5' */
        localB->s176_stringNum = 0U;
      } else if (localDW->s176_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S176>:94' */
        if (rtu_listIndex == 0) {
          /* Transition: '<S176>:93' */
          localDW->s176_is_List = BuckyWagon_01_IN_List_Idle_h;

          /* Entry 'List_Idle': '<S176>:5' */
          localB->s176_stringNum = 0U;
        } else {
          /* Transition: '<S176>:95' */
          localB->s176_listIndexO = (uint8_T)(rtu_listIndex - 1);

          /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

          /* Event: '<S176>:313' */
          BuckyWagon_01_FunctionCallSubsystem(localB->s176_listIndexO);

          /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
          guard = TRUE;
        }
      } else {
        if (localDW->s176_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S176>:97' */
          if (rtu_numFields - 6 == rtu_listIndex) {
            /* Transition: '<S176>:99' */
            localDW->s176_is_List = BuckyWagon_01_IN_List_Idle_h;

            /* Entry 'List_Idle': '<S176>:5' */
            localB->s176_stringNum = 0U;
          } else {
            /* Transition: '<S176>:98' */
            localB->s176_listIndexO = (uint8_T)(rtu_listIndex + 1);

            /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem' */

            /* Event: '<S176>:313' */
            BuckyWagon_01_FunctionCallSubsystem(localB->s176_listIndexO);

            /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem' */
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_List_Init:
      /* During 'List_Init': '<S176>:8' */
      /* Transition: '<S176>:96' */
      /* Transition: '<S176>:104' */
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:106' */
        memcpy(&localB->s176_string[0], &rtu_names[10 * (localB->s176_listIndexO
                + localB->s176_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      }

      /* Transition: '<S176>:108' */
      localDW->s176_is_List = BuckyWagon_01_IN_List_Wait;
      break;

     case BuckyWagon_01_IN_List_Wait:
      /* During 'List_Wait': '<S176>:2' */
      /* Transition: '<S176>:111' */
      localB->s176_x0 = 9U;
      localB->s176_y0 = 12U;
      localB->s176_x1 = 41U;
      localB->s176_y1 = 53U;
      localB->s176_lineColor = 0U;
      localB->s176_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S176>:301' */
      BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1, localB->s176_y0,
        localB->s176_y1, localB->s176_lineColor, localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s176_lineColor = 1U;
      localB->s176_hCenter = 0U;
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:113' */
        localB->s176_y0 = (uint8_T)(localB->s176_stringNum * 7 + 12);

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      }

      /* Transition: '<S176>:110' */
      localDW->s176_is_List = BuckyWagon_01_IN_List_Wait2;
      break;

     case BuckyWagon_01_IN_List_Wait2:
      /* During 'List_Wait2': '<S176>:4' */
      /* Transition: '<S176>:107' */
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:103' */
        if (rtu_data[localB->s176_stringNum + rtu_listIndex] ==
            localDW->s176_oldData[localB->s176_stringNum]) {
          /* Transition: '<S176>:105' */
          localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
        } else {
          /* Transition: '<S176>:101' */
          sprintf(charPtr(&localB->s176_string[0]), "%-4d", rtu_data
                  [localB->s176_stringNum + rtu_listIndex]);
          localB->s176_string[4] = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 42U;
          localB->s176_x1 = 57U;
          localB->s176_y0 = (uint8_T)(localB->s176_stringNum * 7 + 12);
          localB->s176_y1 = (uint8_T)(localB->s176_y0 + 6);
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[localB->s176_stringNum] = rtu_data
            [localB->s176_stringNum + rtu_listIndex];
          localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
        }
      }

      /* Transition: '<S176>:79' */
      localB->s176_y0 = 55U;
      localB->s176_y1 = 63U;
      localB->s176_x0 = 0U;
      localB->s176_x1 = 63U;
      memcpy(&localB->s176_string[0], &rtu_statusTxt[0], 9);
      localB->s176_string[9] = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      if (rtu_statusTxtMode == 1) {
        /* Transition: '<S176>:78' */
        localB->s176_fillColor = BuckyWagon_01_BLACK;
        localB->s176_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S176>:301' */
        BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1, localB->s176_y0,
          localB->s176_y1, localB->s176_lineColor, localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s176_lineColor = BuckyWagon_01_WHITE;
      } else {
        /* Transition: '<S176>:80' */
        localB->s176_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

        /* Event: '<S176>:301' */
        BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1, localB->s176_y0,
          localB->s176_y1, localB->s176_lineColor, localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
        localB->s176_lineColor = BuckyWagon_01_BLACK;
      }

      /* Transition: '<S176>:100' */
      localB->s176_y0 = 56U;
      localB->s176_font = BuckyWagon_01_FONT4x6;
      localB->s176_x0 = 17U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */

      /* Transition: '<S176>:92' */
      localDW->s176_timer = 0U;
      localDW->s176_is_List = BuckyWagon_01_IN_List_Idle_h;

      /* Entry 'List_Idle': '<S176>:5' */
      localB->s176_stringNum = 0U;
      break;

     default:
      BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21, localB,
        localDW);
      break;
    }

    if (guard) {
      /* Transition: '<S176>:104' */
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:106' */
        memcpy(&localB->s176_string[0], &rtu_names[10 * (localB->s176_listIndexO
                + localB->s176_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      }

      /* Transition: '<S176>:108' */
      localDW->s176_is_List = BuckyWagon_01_IN_List_Wait;
    }
  }
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Quad(const uint8_T rtu_quadIndex[4],
  const int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S176>:166' */
  localB->s176_stringNum = 0U;
  while (localB->s176_stringNum < 4) {
    /* Transition: '<S176>:168' */
    localDW->s176_oldData[localB->s176_stringNum] = (int16_T)
      (rtu_data[rtu_quadIndex[localB->s176_stringNum]] + 1);
    localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
  }

  /* Transition: '<S176>:169' */
  localDW->s176_is_Quad = BuckyWagon_01_IN_Quad_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Quad_Init': '<S176>:22' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 31U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 8U;
  localB->s176_y1 = 54U;
  localB->s176_x0 = 30U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

  /* Event: '<S176>:305' */
  BuckyWagon_01_DrawVline(localB->s176_x0, localB->s176_y0, localB->s176_y1,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_enter_internal_Single(uint8_T rtu_singleIndex, const
  int16_T rtu_data[18], uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Transition: '<S176>:71' */
  localDW->s176_is_Single = BuckyWagon_01_IN_Single_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Single_Init': '<S176>:7' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw string */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */

  /* draw lines */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 64U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localDW->s176_oldData[0] = (int16_T)(rtu_data[rtu_singleIndex] + 1);
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_Quad(const uint8_T rtu_quadIndex[4], const uint8_T
  rtu_namesline1[126], const uint8_T rtu_namesline2[126], const uint8_T
  rtu_statusTxt[10], uint8_T rtu_statusTxtMode, const int16_T rtu_data[18],
  uint8_T rtu_21, rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* During 'Quad': '<S176>:24' */
  if (localDW->s176_sfEvent == BuckyWagon_01_event_menuPressed) {
    /* Transition: '<S176>:85' */
    localDW->s176_is_Quad = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
    localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait1;
  } else {
    switch (localDW->s176_is_Quad) {
     case BuckyWagon_01_IN_Quad_Idle:
      /* During 'Quad_Idle': '<S176>:21' */
      if ((localDW->s176_sfEvent == BuckyWagon_01_event_tick) &&
          (localDW->s176_timer >= BuckyWagon_01_UPDATE_TIME)) {
        /* Transition: '<S176>:170' */
        localB->s176_stringNum = 0U;
        localB->s176_font = BuckyWagon_01_FONT6x8;
        localB->s176_fillColor = BuckyWagon_01_WHITE;
        localB->s176_hCenter = 0U;
        if (localDW->s176_oldData[0] != rtu_data[rtu_quadIndex[0]]) {
          /* Transition: '<S176>:171' */
          sprintf(charPtr(&localB->s176_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[0]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 5U;
          localB->s176_x1 = 29U;
          localB->s176_y0 = 23U;
          localB->s176_y1 = 30U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[0] = rtu_data[rtu_quadIndex[0]];
        } else {
          /* Transition: '<S176>:172' */
        }

        if (localDW->s176_oldData[1] != rtu_data[rtu_quadIndex[1]]) {
          /* Transition: '<S176>:174' */
          sprintf(charPtr(&localB->s176_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[1]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 32U;
          localB->s176_x1 = 55U;
          localB->s176_y0 = 23U;
          localB->s176_y1 = 30U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[1] = rtu_data[rtu_quadIndex[1]];
        } else {
          /* Transition: '<S176>:175' */
        }

        if (localDW->s176_oldData[2] != rtu_data[rtu_quadIndex[2]]) {
          /* Transition: '<S176>:176' */
          sprintf(charPtr(&localB->s176_string[0]), "%4d",
                  rtu_data[rtu_quadIndex[2]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 5U;
          localB->s176_x1 = 29U;
          localB->s176_y0 = 33U;
          localB->s176_y1 = 40U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[2] = rtu_data[rtu_quadIndex[2]];
        } else {
          /* Transition: '<S176>:177' */
        }

        if (localDW->s176_oldData[3] != rtu_data[rtu_quadIndex[3]]) {
          /* Transition: '<S176>:179' */
          sprintf(charPtr(&localB->s176_string[0]), "%-4d",
                  rtu_data[rtu_quadIndex[3]]);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_x0 = 32U;
          localB->s176_x1 = 55U;
          localB->s176_y0 = 33U;
          localB->s176_y1 = 40U;
          localB->s176_lineColor = 0U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = 1U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localDW->s176_oldData[3] = rtu_data[rtu_quadIndex[3]];
        } else {
          /* Transition: '<S176>:180' */
        }

        /* Transition: '<S176>:133' */
        localB->s176_y0 = 55U;
        localB->s176_y1 = 63U;
        localB->s176_x0 = 0U;
        localB->s176_x1 = 63U;
        memcpy(&localB->s176_string[0], &rtu_statusTxt[0], 9);
        localB->s176_string[9] = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        if (rtu_statusTxtMode == 1) {
          /* Transition: '<S176>:134' */
          localB->s176_fillColor = BuckyWagon_01_BLACK;
          localB->s176_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;
        } else {
          /* Transition: '<S176>:132' */
          localB->s176_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

          /* Event: '<S176>:301' */
          BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
            localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
          localB->s176_lineColor = BuckyWagon_01_BLACK;
        }

        /* Transition: '<S176>:131' */
        localB->s176_y0 = 56U;
        localB->s176_font = BuckyWagon_01_FONT4x6;
        localB->s176_x0 = 17U;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */

        /* Transition: '<S176>:178' */
        localDW->s176_timer = 0U;
        localDW->s176_is_Quad = BuckyWagon_01_IN_Quad_Idle;
      } else {
        if (localDW->s176_sfEvent == BuckyWagon_01_event_tick) {
          /* Transition: '<S176>:173' */
          localDW->s176_timer = (uint16_T)(localDW->s176_timer + 1);
          localDW->s176_is_Quad = BuckyWagon_01_IN_Quad_Idle;
        }
      }
      break;

     case BuckyWagon_01_IN_Quad_Init:
      /* During 'Quad_Init': '<S176>:22' */
      /* Transition: '<S176>:165' */
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 4) {
        /* Transition: '<S176>:163' */
        memcpy(&localB->s176_string[0], &rtu_namesline1[7 * rtu_quadIndex
               [localB->s176_stringNum]], 7);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        memcpy(&localB->s176_string[0], &rtu_namesline2[7 * rtu_quadIndex
               [localB->s176_stringNum]], 7);
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 4);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum - 3);
      }

      /* Transition: '<S176>:164' */
      localDW->s176_is_Quad = BuckyWagon_01_IN_Quad_Names;

      /* Entry 'Quad_Names': '<S176>:23' */
      localB->s176_hCenter = 0U;
      localB->s176_x0 = 10U;
      localB->s176_y0 = 10U;
      localB->s176_stringNum = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_x0 = 5U;
      localB->s176_y0 = 16U;
      localB->s176_stringNum = 4U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_y0 = 41U;
      localB->s176_stringNum = 2U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_x0 = 10U;
      localB->s176_y0 = 47U;
      localB->s176_stringNum = 6U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_x0 = 32U;
      localB->s176_y0 = 10U;
      localB->s176_stringNum = 1U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_y0 = 16U;
      localB->s176_stringNum = 5U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_y0 = 41U;
      localB->s176_stringNum = 3U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      localB->s176_y0 = 47U;
      localB->s176_stringNum = 7U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

      /* Event: '<S176>:304' */
      BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
        localB->s176_y0, localB->s176_font, localB->s176_hCenter,
        localB->s176_vCenter, rtu_21, localB->s176_lineColor,
        localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw String' */
      break;

     case BuckyWagon_01_IN_Quad_Names:
      /* During 'Quad_Names': '<S176>:23' */
      /* Transition: '<S176>:167' */
      localDW->s176_timer = BuckyWagon_01_UPDATE_TIME;
      localB->s176_font = BuckyWagon_01_FONT6x8;
      localDW->s176_is_Quad = BuckyWagon_01_IN_Quad_Idle;
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
  /* Transition: '<S176>:146' */
  localDW->s176_is_select_var = BuckyWagon_01_IN_Select_Init;

  /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

  /* Entry 'Select_Init': '<S176>:33' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 63U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s176_selectIndex = 0U;
  localDW->s176_selectVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_storeSelect(const uint8_T rtu_dualIndex[2], const
  uint8_T rtu_quadIndex[4], rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Graphical Function 'storeSelect': '<S176>:25' */
  /* Transition: '<S176>:160' */
  if (localDW->s176_setupIndex == 1) {
    /* Transition: '<S176>:159' */
    localB->s176_singleIndexO = localDW->s176_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem2' */

    /* Event: '<S176>:316' */

    /* S-Function (motohawk_sfun_data_write): '<S189>/motohawk_data_write' */
    /* Write to Data Storage as scalar: singleIndex */
    {
      singleIndex_DataStore() = localB->s176_singleIndexO;
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem2' */
  } else if ((localDW->s176_setupIndex == 2) || (localDW->s176_setupIndex == 3))
  {
    /* Transition: '<S176>:161' */
    localB->s176_dualIndexO[0] = rtu_dualIndex[0];
    localB->s176_dualIndexO[1] = rtu_dualIndex[1];
    localB->s176_dualIndexO[localDW->s176_setupIndex - 2] =
      localDW->s176_selectIndex;

    /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem3' */

    /* Event: '<S176>:315' */

    /* S-Function (motohawk_sfun_data_write): '<S190>/motohawk_data_write' */
    /* Write to Data Storage as vector: dualIndex */
    {
      dualIndex_DataStore()[0] = localB->s176_dualIndexO[0];
      dualIndex_DataStore()[1] = localB->s176_dualIndexO[1];
    }

    /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem3' */
  } else {
    if (localDW->s176_setupIndex >= 4) {
      /* Transition: '<S176>:162' */
      localB->s176_quadIndexO[0] = rtu_quadIndex[0];
      localB->s176_quadIndexO[1] = rtu_quadIndex[1];
      localB->s176_quadIndexO[2] = rtu_quadIndex[2];
      localB->s176_quadIndexO[3] = rtu_quadIndex[3];
      localB->s176_quadIndexO[localDW->s176_setupIndex - 4] =
        localDW->s176_selectIndex;

      /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem4' */

      /* Event: '<S176>:317' */

      /* S-Function (motohawk_sfun_data_write): '<S191>/motohawk_data_write' */
      /* Write to Data Storage as vector: quadIndex */
      {
        quadIndex_DataStore()[0] = localB->s176_quadIndexO[0];
        quadIndex_DataStore()[1] = localB->s176_quadIndexO[1];
        quadIndex_DataStore()[2] = localB->s176_quadIndexO[2];
        quadIndex_DataStore()[3] = localB->s176_quadIndexO[3];
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

  /* Entry 'Setup_Init': '<S176>:16' */
  /* Event: '<S176>:300' */
  BuckyWagon_01_ClearScreen();

  /* End of Outputs for SubSystem: '<S11>/Clear Screen' */

  /* draw lines and name */
  localB->s176_stringNum = 15U;
  sprintf(charPtr(&localB->s176_string[0]), "UWMAD");
  localB->s176_string[5] = 0U;

  /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

  /* Event: '<S176>:303' */
  BuckyWagon_01_SendString_efficient(localB->s176_stringNum, localB->
    s176_string[0], localB->s176_string[1], localB->s176_string[2],
    localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
    localB->s176_string[6], localB->s176_string, localB->s176_string[7],
    localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
    localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
    &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
    localB->s176_string[16]);

  /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
  localB->s176_y0 = 8U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 63U;
  localB->s176_lineColor = BuckyWagon_01_BLACK;
  localB->s176_fillColor = BuckyWagon_01_WHITE;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_y0 = 54U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw HLine' */

  /* Event: '<S176>:306' */
  BuckyWagon_01_DrawHLine(localB->s176_x0, localB->s176_x1, localB->s176_y0,
    localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw HLine' */
  localB->s176_hCenter = 1U;
  localB->s176_vCenter = 0U;
  localB->s176_font = BuckyWagon_01_FONT4x6;
  localB->s176_x0 = 32U;
  localB->s176_y0 = 2U;

  /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

  /* Event: '<S176>:304' */
  BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
    localB->s176_y0, localB->s176_font, localB->s176_hCenter,
    localB->s176_vCenter, rtu_21, localB->s176_lineColor, localB->s176_fillColor);

  /* End of Outputs for SubSystem: '<S11>/Draw String' */
  localDW->s176_setupVIndex = 0U;
}

/* Function for Stateflow: '<S11>/Chart' */
static void BuckyWagon_01_loadSelect(uint8_T rtu_singleIndex, const uint8_T
  rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], rtDW_Chart_BuckyWagon_01
  *localDW)
{
  /* Graphical Function 'loadSelect': '<S176>:26' */
  /* Transition: '<S176>:156' */
  if (localDW->s176_setupIndex == 1) {
    /* Transition: '<S176>:155' */
    localDW->s176_selectIndex = rtu_singleIndex;
  } else if ((localDW->s176_setupIndex == 2) || (localDW->s176_setupIndex == 3))
  {
    /* Transition: '<S176>:157' */
    localDW->s176_selectIndex = rtu_dualIndex[localDW->s176_setupIndex - 2];
  } else {
    if (localDW->s176_setupIndex >= 4) {
      /* Transition: '<S176>:158' */
      localDW->s176_selectIndex = rtu_quadIndex[localDW->s176_setupIndex - 4];
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

  /* During 'Setup': '<S176>:13' */
  guard = FALSE;
  guard_0 = FALSE;
  switch (localDW->s176_is_Setup) {
   case BuckyWagon_01_IN_Setup_Init:
    /* During 'Setup_Init': '<S176>:16' */
    /* Transition: '<S176>:59' */
    if (localDW->s176_setupIndex >= localDW->s176_setupVIndex + 6) {
      /* Transition: '<S176>:53' */
      localDW->s176_setupVIndex = (uint8_T)(localDW->s176_setupIndex - 5);
      localB->s176_stringNum = 0U;
    } else if (localDW->s176_setupIndex < localDW->s176_setupVIndex) {
      /* Transition: '<S176>:52' */
      localDW->s176_setupVIndex = localDW->s176_setupIndex;
      localB->s176_stringNum = 0U;
    } else {
      /* Transition: '<S176>:54' */
      localB->s176_stringNum = 0U;
    }

    while (localB->s176_stringNum < 6) {
      /* Transition: '<S176>:46' */
      memcpy(&localB->s176_string[0], &rtu_setupNames[13 *
             (localDW->s176_setupVIndex + localB->s176_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
    }

    /* Transition: '<S176>:50' */
    localDW->s176_is_Setup = BuckyWagon_01_IN_setup_Wait;
    break;

   case BuckyWagon_01_IN_select_var:
    /* During 'select_var': '<S176>:30' */
    switch (localDW->s176_is_select_var) {
     case BuckyWagon_01_IN_Select_Init:
      /* During 'Select_Init': '<S176>:33' */
      /* Transition: '<S176>:150' */
      if (localDW->s176_selectIndex >= localDW->s176_selectVIndex + 6) {
        /* Transition: '<S176>:144' */
        localDW->s176_selectVIndex = (uint8_T)(localDW->s176_selectIndex - 5);
        localB->s176_stringNum = 0U;
      } else if (localDW->s176_selectIndex < localDW->s176_selectVIndex) {
        /* Transition: '<S176>:143' */
        localDW->s176_selectVIndex = localDW->s176_selectIndex;
        localB->s176_stringNum = 0U;
      } else {
        /* Transition: '<S176>:145' */
        localB->s176_stringNum = 0U;
      }

      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:137' */
        memcpy(&localB->s176_string[0], &rtu_names[10 *
               (localDW->s176_selectVIndex + localB->s176_stringNum)], 10);

        /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

        /* Event: '<S176>:303' */
        BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
          localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
          localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
          localB->s176_string[6], localB->s176_string, localB->s176_string[7],
          localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
          localB->s176_string[11], localB->s176_string[12], localB->s176_string
          [13], &localB->s176_string[7], localB->s176_string[14],
          localB->s176_string[15], localB->s176_string[16]);

        /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      }

      /* Transition: '<S176>:141' */
      localDW->s176_is_select_var = BuckyWagon_01_IN_select_Wait;
      break;

     case BuckyWagon_01_IN_select_Idle:
      /* During 'select_Idle': '<S176>:32' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S176>:154' */
        BuckyWagon_01_storeSelect(rtu_dualIndex, rtu_quadIndex, localB, localDW);
        localDW->s176_is_select_var = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s176_is_Setup = BuckyWagon_01_IN_Setup_Init;
        BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
      } else if (localDW->s176_sfEvent == BuckyWagon_01_event_upPressed) {
        /* Transition: '<S176>:152' */
        if (localDW->s176_selectIndex == 0) {
          /* Transition: '<S176>:153' */
          localDW->s176_is_select_var = BuckyWagon_01_IN_select_Idle;
        } else {
          /* Transition: '<S176>:151' */
          localDW->s176_selectIndex = (uint8_T)(localDW->s176_selectIndex - 1);
          guard = TRUE;
        }
      } else {
        if (localDW->s176_sfEvent == BuckyWagon_01_event_downPressed) {
          /* Transition: '<S176>:149' */
          if (rtu_numFields - 1 == localDW->s176_selectIndex) {
            /* Transition: '<S176>:147' */
            localDW->s176_is_select_var = BuckyWagon_01_IN_select_Idle;
          } else {
            /* Transition: '<S176>:148' */
            localDW->s176_selectIndex = (uint8_T)(localDW->s176_selectIndex + 1);
            guard = TRUE;
          }
        }
      }
      break;

     case BuckyWagon_01_IN_select_Wait:
      /* During 'select_Wait': '<S176>:31' */
      /* Transition: '<S176>:139' */
      localB->s176_x0 = 0U;
      localB->s176_y0 = 12U;
      localB->s176_x1 = 64U;
      localB->s176_y1 = 53U;
      localB->s176_lineColor = 0U;
      localB->s176_fillColor = 0U;

      /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

      /* Event: '<S176>:301' */
      BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1, localB->s176_y0,
        localB->s176_y1, localB->s176_lineColor, localB->s176_fillColor);

      /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
      localB->s176_lineColor = 1U;
      localB->s176_hCenter = 1U;
      localB->s176_stringNum = 0U;
      while (localB->s176_stringNum < 6) {
        /* Transition: '<S176>:136' */
        localB->s176_y0 = (uint8_T)(localB->s176_stringNum * 7 + 12);
        if (localDW->s176_selectVIndex + localB->s176_stringNum ==
            localDW->s176_selectIndex) {
          /* Transition: '<S176>:138' */
          localB->s176_fillColor = BuckyWagon_01_BLACK;
          localB->s176_lineColor = BuckyWagon_01_WHITE;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
        } else {
          /* Transition: '<S176>:140' */
          localB->s176_fillColor = BuckyWagon_01_WHITE;
          localB->s176_lineColor = BuckyWagon_01_BLACK;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
        }
      }

      /* Transition: '<S176>:142' */
      localDW->s176_is_select_var = BuckyWagon_01_IN_select_Idle;
      break;

     default:
      BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      break;
    }
    break;

   case BuckyWagon_01_IN_setup_Idle:
    /* During 'setup_Idle': '<S176>:15' */
    if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S176>:66' */
      if (localDW->s176_setupIndex == 0) {
        /* Transition: '<S176>:65' */
        if (rtu_screen == 1) {
          /* Transition: '<S176>:36' */
          localDW->s176_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S176>:42' */
          localDW->s176_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S176>:38' */
          localDW->s176_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S176>:41' */
          localDW->s176_is_Setup = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        /* Transition: '<S176>:69' */
        BuckyWagon_01_loadSelect(rtu_singleIndex, rtu_dualIndex, rtu_quadIndex,
          localDW);
        localDW->s176_is_Setup = BuckyWagon_01_IN_select_var;
        BuckyWagon_01_enter_internal_select_var(rtu_21, localB, localDW);
      }
    } else if (localDW->s176_sfEvent == BuckyWagon_01_event_upPressed) {
      /* Transition: '<S176>:61' */
      if (localDW->s176_setupIndex == 0) {
        /* Transition: '<S176>:62' */
        localDW->s176_is_Setup = BuckyWagon_01_IN_setup_Idle;

        /* Entry 'setup_Idle': '<S176>:15' */
        localB->s176_stringNum = 0U;
      } else {
        /* Transition: '<S176>:60' */
        localDW->s176_setupIndex = (uint8_T)(localDW->s176_setupIndex - 1);
        guard_0 = TRUE;
      }
    } else {
      if (localDW->s176_sfEvent == BuckyWagon_01_event_downPressed) {
        /* Transition: '<S176>:58' */
        if (localDW->s176_setupIndex == 7) {
          /* Transition: '<S176>:56' */
          localDW->s176_is_Setup = BuckyWagon_01_IN_setup_Idle;

          /* Entry 'setup_Idle': '<S176>:15' */
          localB->s176_stringNum = 0U;
        } else {
          /* Transition: '<S176>:57' */
          localDW->s176_setupIndex = (uint8_T)(localDW->s176_setupIndex + 1);
          guard_0 = TRUE;
        }
      }
    }
    break;

   case BuckyWagon_01_IN_setup_Wait:
    /* During 'setup_Wait': '<S176>:14' */
    /* Transition: '<S176>:48' */
    localB->s176_x0 = 0U;
    localB->s176_y0 = 12U;
    localB->s176_x1 = 64U;
    localB->s176_y1 = 53U;
    localB->s176_lineColor = 0U;
    localB->s176_fillColor = 0U;

    /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

    /* Event: '<S176>:301' */
    BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1, localB->s176_y0,
      localB->s176_y1, localB->s176_lineColor, localB->s176_fillColor);

    /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
    localB->s176_lineColor = 1U;
    localB->s176_hCenter = 1U;
    localB->s176_stringNum = 0U;
    while (localB->s176_stringNum < 6) {
      /* Transition: '<S176>:45' */
      localB->s176_y0 = (uint8_T)(localB->s176_stringNum * 7 + 12);
      if (localDW->s176_setupVIndex + localB->s176_stringNum ==
          localDW->s176_setupIndex) {
        /* Transition: '<S176>:47' */
        localB->s176_fillColor = BuckyWagon_01_BLACK;
        localB->s176_lineColor = BuckyWagon_01_WHITE;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      } else {
        /* Transition: '<S176>:49' */
        localB->s176_fillColor = BuckyWagon_01_WHITE;
        localB->s176_lineColor = BuckyWagon_01_BLACK;

        /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

        /* Event: '<S176>:304' */
        BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
          localB->s176_y0, localB->s176_font, localB->s176_hCenter,
          localB->s176_vCenter, rtu_21, localB->s176_lineColor,
          localB->s176_fillColor);

        /* End of Outputs for SubSystem: '<S11>/Draw String' */
        localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
      }
    }

    /* Transition: '<S176>:51' */
    localDW->s176_is_Setup = BuckyWagon_01_IN_setup_Idle;

    /* Entry 'setup_Idle': '<S176>:15' */
    localB->s176_stringNum = 0U;
    break;

   case BuckyWagon_01_IN_wait:
    /* During 'wait': '<S176>:11' */
    if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
      /* Transition: '<S176>:81' */
      localDW->s176_is_Setup = BuckyWagon_01_IN_Setup_Init;
      BuckyWagon_01_enter_atomic_Setup_Init(rtu_21, localB, localDW);
    }
    break;

   default:
    /* Transition: '<S176>:82' */
    localDW->s176_is_Setup = BuckyWagon_01_IN_wait;

    /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

    /* Entry 'wait': '<S176>:11' */
    /* Event: '<S176>:300' */
    BuckyWagon_01_ClearScreen();

    /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
    localDW->s176_setupIndex = 0U;
    break;
  }

  if (guard_0) {
    if (localDW->s176_setupIndex >= localDW->s176_setupVIndex + 6) {
      /* Transition: '<S176>:53' */
      localDW->s176_setupVIndex = (uint8_T)(localDW->s176_setupIndex - 5);
      localB->s176_stringNum = 0U;
    } else if (localDW->s176_setupIndex < localDW->s176_setupVIndex) {
      /* Transition: '<S176>:52' */
      localDW->s176_setupVIndex = localDW->s176_setupIndex;
      localB->s176_stringNum = 0U;
    } else {
      /* Transition: '<S176>:54' */
      localB->s176_stringNum = 0U;
    }

    while (localB->s176_stringNum < 6) {
      /* Transition: '<S176>:46' */
      memcpy(&localB->s176_string[0], &rtu_setupNames[13 *
             (localDW->s176_setupVIndex + localB->s176_stringNum)], 13);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
    }

    /* Transition: '<S176>:50' */
    localDW->s176_is_Setup = BuckyWagon_01_IN_setup_Wait;
  }

  if (guard) {
    if (localDW->s176_selectIndex >= localDW->s176_selectVIndex + 6) {
      /* Transition: '<S176>:144' */
      localDW->s176_selectVIndex = (uint8_T)(localDW->s176_selectIndex - 5);
      localB->s176_stringNum = 0U;
    } else if (localDW->s176_selectIndex < localDW->s176_selectVIndex) {
      /* Transition: '<S176>:143' */
      localDW->s176_selectVIndex = localDW->s176_selectIndex;
      localB->s176_stringNum = 0U;
    } else {
      /* Transition: '<S176>:145' */
      localB->s176_stringNum = 0U;
    }

    while (localB->s176_stringNum < 6) {
      /* Transition: '<S176>:137' */
      memcpy(&localB->s176_string[0], &rtu_names[10 *
             (localDW->s176_selectVIndex + localB->s176_stringNum)], 10);

      /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

      /* Event: '<S176>:303' */
      BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
        localB->s176_string[0], localB->s176_string[1], localB->s176_string[2],
        localB->s176_string[3], localB->s176_string[4], localB->s176_string[5],
        localB->s176_string[6], localB->s176_string, localB->s176_string[7],
        localB->s176_string[8], localB->s176_string[9], localB->s176_string[10],
        localB->s176_string[11], localB->s176_string[12], localB->s176_string[13],
        &localB->s176_string[7], localB->s176_string[14], localB->s176_string[15],
        localB->s176_string[16]);

      /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
      localB->s176_stringNum = (uint8_T)(localB->s176_stringNum + 1);
    }

    /* Transition: '<S176>:141' */
    localDW->s176_is_select_var = BuckyWagon_01_IN_select_Wait;
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
  if (localDW->s176_is_active_c2_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/Chart */
    localDW->s176_is_active_c2_BuckyWagon_01 = 1U;

    /* Transition: '<S176>:43' */
    localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

    /* Entry 'PowerupDelay': '<S176>:9' */
    localDW->s176_timer = 0U;
  } else {
    switch (localDW->s176_is_c2_BuckyWagon_01) {
     case BuckyWagon_01_IN_Dual:
      BuckyWagon_01_Dual(rtu_dualIndex, rtu_names, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_List:
      BuckyWagon_01_List(rtu_listIndex, rtu_names, rtu_numFields, rtu_statusTxt,
                         rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
      break;

     case BuckyWagon_01_IN_PowerupDelay:
      /* During 'PowerupDelay': '<S176>:9' */
      if (localDW->s176_timer >= rtu_startupDelay) {
        /* Transition: '<S176>:40' */
        if (rtu_screen == 1) {
          /* Transition: '<S176>:36' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 2) {
          /* Transition: '<S176>:42' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
          BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
            localB, localDW);
        } else if (rtu_screen == 3) {
          /* Transition: '<S176>:38' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
          BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
            localB, localDW);
        } else {
          /* Transition: '<S176>:41' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
          BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
            localB, localDW);
        }
      } else {
        localDW->s176_timer = (uint16_T)(localDW->s176_timer + 1);
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
      /* During 'Single': '<S176>:12' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuPressed) {
        /* Transition: '<S176>:83' */
        localDW->s176_is_Single = (uint8_T)BuckyWagon_01_IN_NO_ACTIVE_CHILD_h;
        localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_wait3;
      } else {
        switch (localDW->s176_is_Single) {
         case BuckyWagon_01_IN_List_Idle_h:
          /* During 'List_Idle': '<S176>:10' */
          if ((localDW->s176_sfEvent == BuckyWagon_01_event_tick) &&
              (localDW->s176_timer >= BuckyWagon_01_UPDATE_TIME)) {
            /* Transition: '<S176>:123' */
            localB->s176_stringNum = 0U;
            localB->s176_font = BuckyWagon_01_FONT8x15;
            localB->s176_fillColor = BuckyWagon_01_WHITE;
            localB->s176_hCenter = 0U;
            if (localDW->s176_oldData[0] != rtu_data[rtu_singleIndex]) {
              /* Transition: '<S176>:126' */
              sprintf(charPtr(&localB->s176_string[0]), "%4d",
                      rtu_data[rtu_singleIndex]);

              /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

              /* Event: '<S176>:303' */
              BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
                localB->s176_string[0], localB->s176_string[1],
                localB->s176_string[2], localB->s176_string[3],
                localB->s176_string[4], localB->s176_string[5],
                localB->s176_string[6], localB->s176_string, localB->
                s176_string[7], localB->s176_string[8], localB->s176_string[9],
                localB->s176_string[10], localB->s176_string[11],
                localB->s176_string[12], localB->s176_string[13],
                &localB->s176_string[7], localB->s176_string[14],
                localB->s176_string[15], localB->s176_string[16]);

              /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
              localB->s176_x0 = 0U;
              localB->s176_x1 = 64U;
              localB->s176_y0 = 25U;
              localB->s176_y1 = 39U;
              localB->s176_fillColor = BuckyWagon_01_WHITE;
              localB->s176_lineColor = 0U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S176>:301' */
              BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                localB->s176_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s176_lineColor = BuckyWagon_01_BLACK;
              localB->s176_x0 = 15U;

              /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

              /* Event: '<S176>:304' */
              BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
                localB->s176_y0, localB->s176_font, localB->s176_hCenter,
                localB->s176_vCenter, rtu_21, localB->s176_lineColor,
                localB->s176_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw String' */
              localDW->s176_oldData[0] = rtu_data[rtu_singleIndex];
              localB->s176_x0 = 6U;
              localB->s176_x1 = 58U;
              localB->s176_y0 = 41U;
              localB->s176_y1 = 48U;
              localB->s176_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S176>:301' */
              BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                localB->s176_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              temp = rtu_barMin[rtu_singleIndex];
              if (rtu_data[rtu_singleIndex] > (temp >=
                   rtu_barMax[rtu_singleIndex] ? temp :
                   rtu_barMax[rtu_singleIndex])) {
                /* Transition: '<S176>:127' */
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
                  /* Transition: '<S176>:125' */
                  temp = rtu_barMin[rtu_singleIndex];
                  temp = ((temp <= rtu_barMax[rtu_singleIndex] ? temp :
                           rtu_barMax[rtu_singleIndex]) -
                          rtu_barMin[rtu_singleIndex]) * 52 /
                    (rtu_barMax[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    + 6;
                } else {
                  /* Transition: '<S176>:121' */
                  temp = (rtu_data[rtu_singleIndex] - rtu_barMin[rtu_singleIndex])
                    * 52 / (rtu_barMax[rtu_singleIndex] -
                            rtu_barMin[rtu_singleIndex]) + 6;
                }
              }

              if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp >= 32)) {
                /* Transition: '<S176>:128' */
                localB->s176_x1 = (uint8_T)temp;
                localB->s176_fillColor = BuckyWagon_01_BLACK;
                localB->s176_x0 = 32U;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S176>:301' */
                BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                  localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                  localB->s176_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if ((rtu_barGraphMode[rtu_singleIndex] == 2) && (temp < 32))
              {
                /* Transition: '<S176>:122' */
                localB->s176_x0 = (uint8_T)temp;
                localB->s176_x1 = 32U;
                localB->s176_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S176>:301' */
                BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                  localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                  localB->s176_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 1) {
                /* Transition: '<S176>:120' */
                localB->s176_x0 = (uint8_T)temp;
                localB->s176_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S176>:301' */
                BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                  localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                  localB->s176_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              } else if (rtu_barGraphMode[rtu_singleIndex] == 3) {
                /* Transition: '<S176>:68' */
                localB->s176_x0 = (uint8_T)temp;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Vline' */

                /* Event: '<S176>:305' */
                BuckyWagon_01_DrawVline(localB->s176_x0, localB->s176_y0,
                  localB->s176_y1, localB->s176_lineColor,
                  localB->s176_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Vline' */
              } else {
                /* Transition: '<S176>:124' */
                localB->s176_x1 = (uint8_T)temp;
                localB->s176_fillColor = BuckyWagon_01_BLACK;

                /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

                /* Event: '<S176>:301' */
                BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                  localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                  localB->s176_fillColor);

                /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              }

              /* Transition: '<S176>:119' */
              /* Transition: '<S176>:115' */
            } else {
              /* Transition: '<S176>:118' */
            }

            /* Transition: '<S176>:77' */
            localB->s176_y0 = 55U;
            localB->s176_y1 = 63U;
            localB->s176_x0 = 0U;
            localB->s176_x1 = 63U;
            memcpy(&localB->s176_string[0], &rtu_statusTxt[0], 9);
            localB->s176_string[9] = 0U;

            /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

            /* Event: '<S176>:303' */
            BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
              localB->s176_string[0], localB->s176_string[1],
              localB->s176_string[2], localB->s176_string[3],
              localB->s176_string[4], localB->s176_string[5],
              localB->s176_string[6], localB->s176_string, localB->s176_string[7],
              localB->s176_string[8], localB->s176_string[9],
              localB->s176_string[10], localB->s176_string[11],
              localB->s176_string[12], localB->s176_string[13],
              &localB->s176_string[7], localB->s176_string[14],
              localB->s176_string[15], localB->s176_string[16]);

            /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
            if (rtu_statusTxtMode == 1) {
              /* Transition: '<S176>:75' */
              localB->s176_fillColor = BuckyWagon_01_BLACK;
              localB->s176_lineColor = BuckyWagon_01_BLACK;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S176>:301' */
              BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                localB->s176_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s176_lineColor = BuckyWagon_01_WHITE;
            } else {
              /* Transition: '<S176>:135' */
              localB->s176_lineColor = BuckyWagon_01_WHITE;
              localB->s176_fillColor = BuckyWagon_01_WHITE;

              /* Outputs for Function Call SubSystem: '<S11>/Draw Rect' */

              /* Event: '<S176>:301' */
              BuckyWagon_01_DrawRect(localB->s176_x0, localB->s176_x1,
                localB->s176_y0, localB->s176_y1, localB->s176_lineColor,
                localB->s176_fillColor);

              /* End of Outputs for SubSystem: '<S11>/Draw Rect' */
              localB->s176_lineColor = BuckyWagon_01_BLACK;
            }

            /* Transition: '<S176>:44' */
            localB->s176_y0 = 56U;
            localB->s176_font = BuckyWagon_01_FONT4x6;
            localB->s176_x0 = 17U;

            /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

            /* Event: '<S176>:304' */
            BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
              localB->s176_y0, localB->s176_font, localB->s176_hCenter,
              localB->s176_vCenter, rtu_21, localB->s176_lineColor,
              localB->s176_fillColor);

            /* End of Outputs for SubSystem: '<S11>/Draw String' */

            /* Transition: '<S176>:116' */
            localDW->s176_timer = 0U;
            localDW->s176_is_Single = BuckyWagon_01_IN_List_Idle_h;
          } else {
            if (localDW->s176_sfEvent == BuckyWagon_01_event_tick) {
              /* Transition: '<S176>:117' */
              localDW->s176_timer = (uint16_T)(localDW->s176_timer + 1);
              localDW->s176_is_Single = BuckyWagon_01_IN_List_Idle_h;
            }
          }
          break;

         case BuckyWagon_01_IN_Single_Init:
          /* During 'Single_Init': '<S176>:7' */
          /* Transition: '<S176>:70' */
          localDW->s176_is_Single = BuckyWagon_01_IN_singleNames;

          /* Entry 'singleNames': '<S176>:6' */
          localB->s176_hCenter = 1U;
          localB->s176_font = BuckyWagon_01_FONT6x8;
          localB->s176_x0 = 30U;
          localB->s176_stringNum = 0U;
          memcpy(&localB->s176_string[0], &rtu_names[10 * rtu_singleIndex], 10);

          /* Outputs for Function Call SubSystem: '<S11>/Send String_efficient' */

          /* Event: '<S176>:303' */
          BuckyWagon_01_SendString_efficient(localB->s176_stringNum,
            localB->s176_string[0], localB->s176_string[1], localB->s176_string
            [2], localB->s176_string[3], localB->s176_string[4],
            localB->s176_string[5], localB->s176_string[6], localB->s176_string,
            localB->s176_string[7], localB->s176_string[8], localB->s176_string
            [9], localB->s176_string[10], localB->s176_string[11],
            localB->s176_string[12], localB->s176_string[13],
            &localB->s176_string[7], localB->s176_string[14],
            localB->s176_string[15], localB->s176_string[16]);

          /* End of Outputs for SubSystem: '<S11>/Send String_efficient' */
          localB->s176_y0 = 14U;

          /* Outputs for Function Call SubSystem: '<S11>/Draw String' */

          /* Event: '<S176>:304' */
          BuckyWagon_01_DrawString(localB->s176_stringNum, localB->s176_x0,
            localB->s176_y0, localB->s176_font, localB->s176_hCenter,
            localB->s176_vCenter, rtu_21, localB->s176_lineColor,
            localB->s176_fillColor);

          /* End of Outputs for SubSystem: '<S11>/Draw String' */
          break;

         case BuckyWagon_01_IN_singleNames:
          /* During 'singleNames': '<S176>:6' */
          /* Transition: '<S176>:129' */
          localDW->s176_timer = BuckyWagon_01_UPDATE_TIME;
          localDW->s176_is_Single = BuckyWagon_01_IN_List_Idle_h;
          break;

         default:
          BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
            localB, localDW);
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_wait1:
      /* During 'wait1': '<S176>:17' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S176>:90' */
        localB->s176_screenO = 2U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S176>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s176_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Dual;
        BuckyWagon_01_enter_internal_Dual(rtu_dualIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S176>:86' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S176>:82' */
          localDW->s176_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S176>:11' */
          /* Event: '<S176>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s176_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait2:
      /* During 'wait2': '<S176>:29' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S176>:89' */
        localB->s176_screenO = 1U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S176>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s176_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Single;
        BuckyWagon_01_enter_internal_Single(rtu_singleIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S176>:37' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S176>:82' */
          localDW->s176_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S176>:11' */
          /* Event: '<S176>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s176_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait3:
      /* During 'wait3': '<S176>:28' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S176>:88' */
        localB->s176_screenO = 0U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S176>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s176_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_List;
        BuckyWagon_01_enter_internal_List(rtu_listIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S176>:35' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S176>:82' */
          localDW->s176_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S176>:11' */
          /* Event: '<S176>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s176_setupIndex = 0U;
        }
      }
      break;

     case BuckyWagon_01_IN_wait4:
      /* During 'wait4': '<S176>:27' */
      if (localDW->s176_sfEvent == BuckyWagon_01_event_menuReleased) {
        /* Transition: '<S176>:87' */
        localB->s176_screenO = 4U;

        /* Outputs for Function Call SubSystem: '<S11>/Function-Call Subsystem1' */

        /* Event: '<S176>:314' */
        BuckyWagon_01_FunctionCallSubsystem1(localB->s176_screenO);

        /* End of Outputs for SubSystem: '<S11>/Function-Call Subsystem1' */
        localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Quad;
        BuckyWagon_01_enter_internal_Quad(rtu_quadIndex, rtu_data, rtu_21,
          localB, localDW);
      } else {
        if (rtu_menuTime >= BuckyWagon_01_SETUP_TIME) {
          /* Transition: '<S176>:39' */
          localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_Setup;

          /* Transition: '<S176>:82' */
          localDW->s176_is_Setup = BuckyWagon_01_IN_wait;

          /* Outputs for Function Call SubSystem: '<S11>/Clear Screen' */

          /* Entry 'wait': '<S176>:11' */
          /* Event: '<S176>:300' */
          BuckyWagon_01_ClearScreen();

          /* End of Outputs for SubSystem: '<S11>/Clear Screen' */
          localDW->s176_setupIndex = 0U;
        }
      }
      break;

     default:
      /* Transition: '<S176>:43' */
      localDW->s176_is_c2_BuckyWagon_01 = BuckyWagon_01_IN_PowerupDelay;

      /* Entry 'PowerupDelay': '<S176>:9' */
      localDW->s176_timer = 0U;
      break;
    }
  }
}

/* Initial conditions for trigger system: '<S11>/Chart' */
void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  int32_T i;
  localDW->s176_is_Dual = 0U;
  localDW->s176_is_List = 0U;
  localDW->s176_is_Quad = 0U;
  localDW->s176_is_Setup = 0U;
  localDW->s176_is_select_var = 0U;
  localDW->s176_is_Single = 0U;
  localDW->s176_is_active_c2_BuckyWagon_01 = 0U;
  localDW->s176_is_c2_BuckyWagon_01 = 0U;
  localDW->s176_timer = 0U;
  for (i = 0; i < 6; i++) {
    localDW->s176_oldData[i] = 0;
  }

  localDW->s176_setupIndex = 0U;
  localDW->s176_setupVIndex = 0U;
  localDW->s176_selectIndex = 0U;
  localDW->s176_selectVIndex = 0U;
  localB->s176_mode = 0U;
  localB->s176_x0 = 0U;
  localB->s176_x1 = 0U;
  localB->s176_y0 = 0U;
  localB->s176_y1 = 0U;
  localB->s176_lineColor = 0U;
  localB->s176_fillColor = 0U;
  localB->s176_stringNum = 0U;
  for (i = 0; i < 18; i++) {
    localB->s176_string[i] = 0U;
  }

  localB->s176_font = 0U;
  localB->s176_hCenter = 0U;
  localB->s176_vCenter = 0U;
  localB->s176_listIndexO = 0U;
  localB->s176_screenO = 0U;
  localB->s176_dualIndexO[0] = 0U;
  localB->s176_dualIndexO[1] = 0U;
  localB->s176_quadIndexO[0] = 0U;
  localB->s176_quadIndexO[1] = 0U;
  localB->s176_quadIndexO[2] = 0U;
  localB->s176_quadIndexO[3] = 0U;
  localB->s176_singleIndexO = 0U;
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
   *  TriggerPort: '<S176>/ input events '
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
      /* Event: '<S176>:298' */
      localDW->s176_sfEvent = BuckyWagon_01_event_tick;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[1U] == 1) {
      /* Event: '<S176>:307' */
      localDW->s176_sfEvent = BuckyWagon_01_event_upPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[2U] == -1) {
      /* Event: '<S176>:308' */
      localDW->s176_sfEvent = BuckyWagon_01_event_upReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[3U] == 1) {
      /* Event: '<S176>:309' */
      localDW->s176_sfEvent = BuckyWagon_01_event_menuPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[4U] == -1) {
      /* Event: '<S176>:310' */
      localDW->s176_sfEvent = BuckyWagon_01_event_menuReleased;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[5U] == 1) {
      /* Event: '<S176>:311' */
      localDW->s176_sfEvent = BuckyWagon_01_event_downPressed;
      BuckyWagon_01_chartstep_c2_BuckyWagon_01(rtu_menuTime, rtu_startupDelay,
        rtu_listIndex, rtu_singleIndex, rtu_dualIndex, rtu_quadIndex, rtu_screen,
        rtu_setupNames, rtu_names, rtu_numFields, rtu_namesline1, rtu_namesline2,
        rtu_barGraphMode, rtu_barMax, rtu_barMin, rtu_statusTxt,
        rtu_statusTxtMode, rtu_data, rtu_21, localB, localDW);
    }

    if (rtb_inputevents[6U] == -1) {
      /* Event: '<S176>:312' */
      localDW->s176_sfEvent = BuckyWagon_01_event_downReleased;
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
   *  EnablePort: '<S184>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S184>/In' */
    localB->s184_In = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
}

/* Initial conditions for function-call system: '<S192>/Fault Iterator' */
void BuckyWagon_01_FaultIterator_Init(rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S206>/Unit Delay' */
  localDW->s206_UnitDelay_DSTATE = 0;
}

/* Output and update for function-call system: '<S192>/Fault Iterator' */
void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW)
{
  /* local block i/o variables */
  fault_T rtb_UnitDelay_fi;
  fault_T rtb_motohawk_fault_iterator_o2;

  /* UnitDelay: '<S206>/Unit Delay' */
  rtb_UnitDelay_fi = localDW->s206_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_fault_iterator): '<S206>/motohawk_fault_iterator' */
  /* Get Next Active Fault */
  {
    extern boolean_T IsFaultValid(uint32_T fault);
    extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
    rtb_motohawk_fault_iterator_o2 = GetNextActiveFault((uint32_T)
      (rtb_UnitDelay_fi), 1);
    localB->s206_motohawk_fault_iterator_o1 = IsFaultValid
      (rtb_motohawk_fault_iterator_o2);
  }

  /* S-Function (motohawk_sfun_fault_name): '<S206>/motohawk_fault_name' */
  {
    extern const char *GetFaultName(uint32_T fault);
    const char *name;
    char *out;
    int i;
    name = GetFaultName(rtb_motohawk_fault_iterator_o2);
    out = (char *) localB->s206_motohawk_fault_name;
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

  /* Update for UnitDelay: '<S206>/Unit Delay' */
  localDW->s206_UnitDelay_DSTATE = rtb_motohawk_fault_iterator_o2;
}

/* Initial conditions for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Init(void)
{
  int32_T i;

  /* InitializeConditions for Stateflow: '<S192>/Chart' */
  BuckyWagon_01_DWork.s205_is_Fault = 0U;
  BuckyWagon_01_DWork.s205_is_active_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s205_mode = 0U;
  for (i = 0; i < 10; i++) {
    BuckyWagon_01_B.s205_text[i] = 0U;
  }

  BuckyWagon_01_B.s205_minTimer = 0U;
  BuckyWagon_01_B.s205_scrollIndex = 0U;
  BuckyWagon_01_B.s205_scrollTimer = 0U;

  /* InitializeConditions for Stateflow: '<S192>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S192>/Fault Iterator'
   */
  BuckyWagon_01_FaultIterator_Init(&BuckyWagon_01_DWork.s192_FaultIterator);

  /* InitializeConditions for Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s11_sf_Chart,
    &BuckyWagon_01_DWork.s11_sf_Chart);
}

/* Start for function-call system: '<S2>/MiniViewDisplay' */
void BuckyWagon_01_MiniViewDisplay_Start(void)
{
  /* Start for Stateflow: '<S192>/Chart' incorporates:
   *  Start for SubSystem: '<S192>/Fault Iterator'
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
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s223_upasserted,
    BuckyWagon_01_B.s223_upcount, &BuckyWagon_01_B.s11_EnabledSubsystem2);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem1' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s208_menuasserted,
    BuckyWagon_01_B.s208_menucount, &BuckyWagon_01_B.s11_EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  BuckyWagon_01_EnabledSubsystem(BuckyWagon_01_B.s199_downasserted,
    BuckyWagon_01_B.s199_downcount, &BuckyWagon_01_B.s11_EnabledSubsystem);

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

  /* UnitDelay: '<S192>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    rtb_UnitDelay_j[i] = BuckyWagon_01_DWork.s192_UnitDelay_DSTATE[i];
  }

  /* End of UnitDelay: '<S192>/Unit Delay' */

  /* MATLAB Function Block: '<S192>/getStringLength' */

  /* MATLAB Function 'Foreground/MiniViewDisplay/GetFaultName/getStringLength': '<S207>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /* '<S207>:1:5' */
  rtb_faultNameLength = 1.0;
  while ((rtb_UnitDelay_j[(int32_T)rtb_faultNameLength - 1] != 0) ||
         (rtb_faultNameLength > 27.0)) {
    /* '<S207>:1:6' */
    /* '<S207>:1:7' */
    /* '<S207>:1:8' */
    rtb_faultNameLength++;
  }

  /* End of MATLAB Function Block: '<S192>/getStringLength' */

  /* Stateflow: '<S192>/Chart' */

  /* Gateway: Foreground/MiniViewDisplay/GetFaultName/Chart */
  /* During: Foreground/MiniViewDisplay/GetFaultName/Chart */
  if (BuckyWagon_01_DWork.s205_is_active_c3_BuckyWagon_01 == 0) {
    /* Entry: Foreground/MiniViewDisplay/GetFaultName/Chart */
    BuckyWagon_01_DWork.s205_is_active_c3_BuckyWagon_01 = 1U;

    /* Transition: '<S205>:7' */
    BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

    /* Entry 'NoFault': '<S205>:1' */
    for (i = 0; i < 10; i++) {
      /* S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2' */
      BuckyWagon_01_B.s205_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
    }
  } else {
    switch (BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01) {
     case BuckyWagon_01_IN_Fault:
      /* UnitDelay: '<S192>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration5'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
       */
      /* During 'Fault': '<S205>:2' */
      if (!(BuckyWagon_01_DWork.s192_UnitDelay1_DSTATE &&
            (DisplayFaults_DataStore()))) {
        /* Transition: '<S205>:13' */
        BuckyWagon_01_DWork.s205_is_Fault = (uint8_T)
          BuckyWagon_01_IN_NO_ACTIVE_CHILD_g;
        BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

        /* Entry 'NoFault': '<S205>:1' */
        for (i = 0; i < 10; i++) {
          BuckyWagon_01_B.s205_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
        }
      } else {
        BuckyWagon_01_B.s205_minTimer = (uint16_T)(BuckyWagon_01_B.s205_minTimer
          + 1);
        switch (BuckyWagon_01_DWork.s205_is_Fault) {
         case BuckyWagon_01_IN_CheckNextFault:
          /* During 'CheckNextFault': '<S205>:6' */
          /* Transition: '<S205>:17' */
          /* Transition: '<S205>:18' */
          /* Transition: '<S205>:14' */
          BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S205>:5' */
          BuckyWagon_01_B.s205_scrollTimer = 0U;
          BuckyWagon_01_B.s205_scrollIndex = 0U;
          BuckyWagon_01_B.s205_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s205_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s205_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;

         case BuckyWagon_01_IN_lastWait:
          /* During 'lastWait': '<S205>:4' */
          if ((BuckyWagon_01_B.s205_scrollTimer > ((uint16_T)
                (lastScrollTime_DataStore()))) && (BuckyWagon_01_B.s205_minTimer
               > ((uint16_T)(minTime_DataStore())))) {
            /* Stateflow: '<S192>/Chart' incorporates:
             *  SubSystem: '<S192>/Fault Iterator'
             */
            /* Transition: '<S205>:12' */
            /* Event: '<S205>:38' */
            BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s192_FaultIterator,
              &BuckyWagon_01_DWork.s192_FaultIterator);
            BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_CheckNextFault;
          } else {
            /* Stateflow: '<S192>/Chart' */
            BuckyWagon_01_B.s205_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s205_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollText:
          /* Stateflow: '<S192>/Chart' */
          /* During 'scrollText': '<S205>:3' */
          if (BuckyWagon_01_B.s205_scrollTimer >= ((uint16_T)
               (scrollTime_DataStore()))) {
            /* Transition: '<S205>:9' */
            if ((int32_T)rtb_faultNameLength - 2 >= ((uint8_T)
                 (dispLength_DataStore())) + BuckyWagon_01_B.s205_scrollIndex) {
              /* Transition: '<S205>:10' */
              BuckyWagon_01_B.s205_scrollIndex = (uint8_T)
                (BuckyWagon_01_B.s205_scrollIndex + 1);
              BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_scrollText;

              /* Entry 'scrollText': '<S205>:3' */
              BuckyWagon_01_B.s205_scrollTimer = 0U;
              memcpy(&BuckyWagon_01_B.s205_text[0],
                     &rtb_UnitDelay_j[BuckyWagon_01_B.s205_scrollIndex],
                     ((uint8_T)(dispLength_DataStore())));
              BuckyWagon_01_B.s205_text[((uint8_T)(dispLength_DataStore()))] =
                0U;
            } else {
              /* Transition: '<S205>:11' */
              BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_lastWait;
            }
          } else {
            BuckyWagon_01_B.s205_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s205_scrollTimer + 1);
          }
          break;

         case BuckyWagon_01_IN_scrollTextFirst:
          /* Stateflow: '<S192>/Chart' */
          /* During 'scrollTextFirst': '<S205>:5' */
          if (BuckyWagon_01_B.s205_scrollTimer >= ((uint16_T)
               (firstScrollTime_DataStore()))) {
            /* Transition: '<S205>:16' */
            BuckyWagon_01_B.s205_scrollIndex = (uint8_T)
              (BuckyWagon_01_B.s205_scrollIndex + 1);
            BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_scrollText;

            /* Entry 'scrollText': '<S205>:3' */
            BuckyWagon_01_B.s205_scrollTimer = 0U;
            memcpy(&BuckyWagon_01_B.s205_text[0],
                   &rtb_UnitDelay_j[BuckyWagon_01_B.s205_scrollIndex], ((uint8_T)
                    (dispLength_DataStore())));
            BuckyWagon_01_B.s205_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          } else {
            BuckyWagon_01_B.s205_scrollTimer = (uint16_T)
              (BuckyWagon_01_B.s205_scrollTimer + 1);
          }
          break;

         default:
          /* Transition: '<S205>:15' */
          BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

          /* Entry 'scrollTextFirst': '<S205>:5' */
          BuckyWagon_01_B.s205_scrollTimer = 0U;
          BuckyWagon_01_B.s205_scrollIndex = 0U;
          BuckyWagon_01_B.s205_minTimer = 0U;
          memcpy(&BuckyWagon_01_B.s205_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                  (dispLength_DataStore())));
          BuckyWagon_01_B.s205_text[((uint8_T)(dispLength_DataStore()))] = 0U;
          break;
        }
      }

      /* End of UnitDelay: '<S192>/Unit Delay1' */
      break;

     case BuckyWagon_01_IN_NoFault:
      /* Stateflow: '<S192>/Chart' */
      /* UnitDelay: '<S192>/Unit Delay1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration3'
       */
      /* During 'NoFault': '<S205>:1' */
      if (BuckyWagon_01_DWork.s192_UnitDelay1_DSTATE && (DisplayFaults_DataStore
           ())) {
        /* Transition: '<S205>:8' */
        BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_Fault;

        /* Entry 'Fault': '<S205>:2' */
        BuckyWagon_01_B.s205_mode = !(InvertMode_DataStore());

        /* Transition: '<S205>:15' */
        BuckyWagon_01_DWork.s205_is_Fault = BuckyWagon_01_IN_scrollTextFirst;

        /* Entry 'scrollTextFirst': '<S205>:5' */
        BuckyWagon_01_B.s205_scrollTimer = 0U;
        BuckyWagon_01_B.s205_scrollIndex = 0U;
        BuckyWagon_01_B.s205_minTimer = 0U;
        memcpy(&BuckyWagon_01_B.s205_text[0], &rtb_UnitDelay_j[0], ((uint8_T)
                (dispLength_DataStore())));
        BuckyWagon_01_B.s205_text[((uint8_T)(dispLength_DataStore()))] = 0U;
      } else {
        BuckyWagon_01_B.s205_mode = (InvertMode_DataStore());

        /* Stateflow: '<S192>/Chart' incorporates:
         *  SubSystem: '<S192>/Fault Iterator'
         */
        /* Event: '<S205>:38' */
        BuckyWagon_01_FaultIterator(&BuckyWagon_01_B.s192_FaultIterator,
          &BuckyWagon_01_DWork.s192_FaultIterator);
      }

      /* End of UnitDelay: '<S192>/Unit Delay1' */
      break;

     default:
      /* Transition: '<S205>:7' */
      BuckyWagon_01_DWork.s205_is_c3_BuckyWagon_01 = BuckyWagon_01_IN_NoFault;

      /* Entry 'NoFault': '<S205>:1' */
      for (i = 0; i < 10; i++) {
        /* S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2' */
        BuckyWagon_01_B.s205_text[i] = ((uint8_T)(noErrText_DataStore())[i]);
      }
      break;
    }
  }

  /* Gain: '<S194>/Gain5' incorporates:
   *  Product: '<S194>/Product'
   */
  rtb_faultNameLength = BuckyWagon_01_B.s224_bcm_ibat *
    BuckyWagon_01_B.s224_bcm_vbat * 0.001;

  /* Gain: '<S194>/Gain6' incorporates:
   *  Product: '<S194>/Product1'
   */
  rtb_Gain6 = BuckyWagon_01_B.s330_Merge * BuckyWagon_01_B.s331_Merge *
    0.00010471975511965977;

  /* Saturate: '<S194>/Saturation' incorporates:
   *  Gain: '<S194>/Gain3'
   */
  u = 100.0 * BuckyWagon_01_B.s243_Merge;

  /* DataTypeConversion: '<S194>/Data Type Conversion7' incorporates:
   *  Saturate: '<S194>/Saturation'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion7' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion7'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[0] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion4' incorporates:
   *  Saturate: '<S194>/Saturation1'
   */
  u = BuckyWagon_01_B.s224_bcm_vbat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s224_bcm_vbat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s224_bcm_vbat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion4' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion4'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[1] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion2' incorporates:
   *  Saturate: '<S194>/Saturation2'
   */
  u = BuckyWagon_01_B.s224_bcm_ibat >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s224_bcm_ibat <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s224_bcm_ibat;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion2' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion2'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[2] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[3] =
    BuckyWagon_01_ConstB.s194_DataTypeConversion3;

  /* DataTypeConversion: '<S194>/Data Type Conversion5' incorporates:
   *  Saturate: '<S194>/Saturation4'
   */
  u = BuckyWagon_01_B.s330_Merge >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s330_Merge <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s330_Merge;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion5' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion5'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[4] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S194>/Saturation5' incorporates:
   *  Gain: '<S194>/Gain'
   */
  u = 100.0 * BuckyWagon_01_B.s123_Merge;

  /* DataTypeConversion: '<S194>/Data Type Conversion1' incorporates:
   *  Saturate: '<S194>/Saturation5'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion1' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion1'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[5] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion' incorporates:
   *  Saturate: '<S194>/Saturation6'
   */
  u = BuckyWagon_01_B.s331_Merge >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s331_Merge <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s331_Merge;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[6] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion6' incorporates:
   *  Saturate: '<S194>/Saturation7'
   */
  u = rtb_faultNameLength >= 32767.0 ? 32767.0 : rtb_faultNameLength <= -32767.0
    ? -32767.0 : rtb_faultNameLength;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion6' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion6'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[7] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion10' incorporates:
   *  Saturate: '<S194>/Saturation8'
   */
  u = rtb_Gain6 >= 32767.0 ? 32767.0 : rtb_Gain6 <= -32767.0 ? -32767.0 :
    rtb_Gain6;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion10' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion10'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[8] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S194>/Saturation9' incorporates:
   *  Gain: '<S194>/Gain7'
   *  Product: '<S194>/Divide'
   */
  u = rtb_faultNameLength / rtb_Gain6 * 100.0;

  /* DataTypeConversion: '<S194>/Data Type Conversion8' incorporates:
   *  Saturate: '<S194>/Saturation9'
   */
  u = u >= 100.0 ? 100.0 : u <= 0.0 ? 0.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion8' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion8'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[9] = (int16_T)(u < 0.0 ?
    (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion11' incorporates:
   *  Saturate: '<S194>/Saturation10'
   */
  u = BuckyWagon_01_B.s229_Inverter_Temperature >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s229_Inverter_Temperature <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s229_Inverter_Temperature;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion11' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion11'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[10] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S194>/Saturation11' incorporates:
   *  Gain: '<S194>/Gain2'
   */
  u = 100.0 * BuckyWagon_01_B.s9_CoolantPumpSpeed;

  /* DataTypeConversion: '<S194>/Data Type Conversion12' incorporates:
   *  Saturate: '<S194>/Saturation11'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion12' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion12'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[11] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S194>/Saturation12' incorporates:
   *  Gain: '<S194>/Gain1'
   */
  u = 1000.0 * BuckyWagon_01_B.s348_Merge;

  /* DataTypeConversion: '<S194>/Data Type Conversion17' incorporates:
   *  Saturate: '<S194>/Saturation12'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion17' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion17'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[12] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* Saturate: '<S194>/Saturation13' incorporates:
   *  Gain: '<S194>/Gain4'
   */
  u = 100.0 * BuckyWagon_01_B.s340_Merge;

  /* DataTypeConversion: '<S194>/Data Type Conversion18' incorporates:
   *  Saturate: '<S194>/Saturation13'
   */
  u = u >= 32767.0 ? 32767.0 : u <= -32767.0 ? -32767.0 : u;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion18' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion18'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[13] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);

  /* DataTypeConversion: '<S194>/Data Type Conversion14' */
  if (rtIsNaN(BuckyWagon_01_B.s356_Merge) || rtIsInf(BuckyWagon_01_B.s356_Merge))
  {
    u = 0.0;
  } else {
    u = fmod(floor(BuckyWagon_01_B.s356_Merge), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion14' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion13'
   *  DataTypeConversion: '<S194>/Data Type Conversion14'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[14] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[15] =
    BuckyWagon_01_B.s255_Merge;

  /* DataTypeConversion: '<S194>/Data Type Conversion15' incorporates:
   *  Saturate: '<S194>/Saturation14'
   */
  u = BuckyWagon_01_B.s9_InReverse >= 32767.0 ? 32767.0 :
    BuckyWagon_01_B.s9_InReverse <= -32767.0 ? -32767.0 :
    BuckyWagon_01_B.s9_InReverse;
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = fmod(floor(u), 65536.0);
  }

  /* End of DataTypeConversion: '<S194>/Data Type Conversion15' */

  /* SignalConversion: '<S11>/TmpSignal ConversionAtChartInport20' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion15'
   *  DataTypeConversion: '<S194>/Data Type Conversion16'
   */
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[16] = (int16_T)(u < 0.0
    ? (int16_T)-(int16_T)(uint16_T)-u : (int16_T)(uint16_T)u);
  BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20[17] =
    BuckyWagon_01_B.s236_Merge;

  /* UnitDelay: '<S11>/Unit Delay' */
  rtb_UnitDelay_h = BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;

  /* SignalConversion: '<S11>/HiddenBuf_InsertedFor_Chart_at_inport_20' incorporates:
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[0] =
    BuckyWagon_01_DWork.s11_UnitDelay_DSTATE;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[1] =
    BuckyWagon_01_B.s223_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[2] =
    BuckyWagon_01_B.s223_upasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[3] =
    BuckyWagon_01_B.s208_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[4] =
    BuckyWagon_01_B.s208_menuasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[5] =
    BuckyWagon_01_B.s199_downasserted;
  rtb_HiddenBuf_InsertedFor_Chart_at_inport_20[6] =
    BuckyWagon_01_B.s199_downasserted;

  /* Stateflow: '<S11>/Chart' */
  BuckyWagon_01_Chart(rtb_HiddenBuf_InsertedFor_Chart_at_inport_20,
                      BuckyWagon_01_B.s11_EnabledSubsystem1.s184_In,
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
                      BuckyWagon_01_B.s205_text, BuckyWagon_01_B.s205_mode,
                      BuckyWagon_01_B.s11_TmpSignalConversionAtChartInport20,
                      ((uint8_T)0U), &BuckyWagon_01_B.s11_sf_Chart,
                      &BuckyWagon_01_DWork.s11_sf_Chart,
                      &BuckyWagon_01_PrevZCSigState.s11_sf_Chart);

  /* Update for UnitDelay: '<S192>/Unit Delay' */
  for (i = 0; i < 27; i++) {
    BuckyWagon_01_DWork.s192_UnitDelay_DSTATE[i] =
      BuckyWagon_01_B.s192_FaultIterator.s206_motohawk_fault_name[i];
  }

  /* End of UnitDelay: '<S192>/Unit Delay' */

  /* Update for UnitDelay: '<S192>/Unit Delay1' */
  BuckyWagon_01_DWork.s192_UnitDelay1_DSTATE =
    BuckyWagon_01_B.s192_FaultIterator.s206_motohawk_fault_iterator_o1;

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
