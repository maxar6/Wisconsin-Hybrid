/*
 * File: BuckyWagon_01_MiniViewDisplay.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1575
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Thu Apr 18 08:31:45 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BuckyWagon_01_MiniViewDisplay_h_
#define RTW_HEADER_BuckyWagon_01_MiniViewDisplay_h_
#ifndef BuckyWagon_01_COMMON_INCLUDES_
# define BuckyWagon_01_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#endif                                 /* BuckyWagon_01_COMMON_INCLUDES_ */

#include "BuckyWagon_01_types.h"

/* Block signals for system '<S11>/Chart' */
typedef struct {
  uint8_T s164_mode;                   /* '<S11>/Chart' */
  uint8_T s164_x0;                     /* '<S11>/Chart' */
  uint8_T s164_x1;                     /* '<S11>/Chart' */
  uint8_T s164_y0;                     /* '<S11>/Chart' */
  uint8_T s164_y1;                     /* '<S11>/Chart' */
  uint8_T s164_lineColor;              /* '<S11>/Chart' */
  uint8_T s164_fillColor;              /* '<S11>/Chart' */
  uint8_T s164_stringNum;              /* '<S11>/Chart' */
  uint8_T s164_string[18];             /* '<S11>/Chart' */
  uint8_T s164_font;                   /* '<S11>/Chart' */
  uint8_T s164_hCenter;                /* '<S11>/Chart' */
  uint8_T s164_vCenter;                /* '<S11>/Chart' */
  uint8_T s164_listIndexO;             /* '<S11>/Chart' */
  uint8_T s164_screenO;                /* '<S11>/Chart' */
  uint8_T s164_dualIndexO[2];          /* '<S11>/Chart' */
  uint8_T s164_quadIndexO[4];          /* '<S11>/Chart' */
  uint8_T s164_singleIndexO;           /* '<S11>/Chart' */
} rtB_Chart_BuckyWagon_01;

/* Block states (auto storage) for system '<S11>/Chart' */
typedef struct {
  int32_T s164_sfEvent;                /* '<S11>/Chart' */
  int16_T s164_oldData[6];             /* '<S11>/Chart' */
  uint16_T s164_timer;                 /* '<S11>/Chart' */
  uint8_T s164_is_active_c2_BuckyWagon_01;/* '<S11>/Chart' */
  uint8_T s164_is_c2_BuckyWagon_01;    /* '<S11>/Chart' */
  uint8_T s164_is_List;                /* '<S11>/Chart' */
  uint8_T s164_is_Single;              /* '<S11>/Chart' */
  uint8_T s164_is_Setup;               /* '<S11>/Chart' */
  uint8_T s164_is_Dual;                /* '<S11>/Chart' */
  uint8_T s164_is_Quad;                /* '<S11>/Chart' */
  uint8_T s164_is_select_var;          /* '<S11>/Chart' */
  uint8_T s164_setupIndex;             /* '<S11>/Chart' */
  uint8_T s164_setupVIndex;            /* '<S11>/Chart' */
  uint8_T s164_selectIndex;            /* '<S11>/Chart' */
  uint8_T s164_selectVIndex;           /* '<S11>/Chart' */
} rtDW_Chart_BuckyWagon_01;

/* Zero-crossing (trigger) state for system '<S11>/Chart' */
typedef struct {
  ZCSigState Chart_Trig_ZCE[7];        /* '<S11>/Chart' */
} rtZCE_Chart_BuckyWagon_01;

/* Block signals for system '<S11>/Enabled Subsystem' */
typedef struct {
  uint8_T s172_In;                     /* '<S172>/In' */
} rtB_EnabledSubsystem_BuckyWagon_01;

/* Block signals for system '<S180>/Fault Iterator' */
typedef struct {
  uint8_T s194_motohawk_fault_name[27];/* '<S194>/motohawk_fault_name' */
  boolean_T s194_motohawk_fault_iterator_o1;/* '<S194>/motohawk_fault_iterator' */
} rtB_FaultIterator_BuckyWagon_01;

/* Block states (auto storage) for system '<S180>/Fault Iterator' */
typedef struct {
  fault_T s194_UnitDelay_DSTATE;       /* '<S194>/Unit Delay' */
} rtDW_FaultIterator_BuckyWagon_01;

extern void BuckyWagon_01_ClearScreen_Start(void);
extern void BuckyWagon_01_ClearScreen(void);
extern void BuckyWagon_01_DrawRect_Start(void);
extern void BuckyWagon_01_DrawRect(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T
  rtu_y0, uint8_T rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor);
extern void BuckyWagon_01_SendString_efficient_Start(void);
extern void BuckyWagon_01_SendString_efficient(uint8_T rtu_string, uint8_T
  rtu_b0, uint8_T rtu_b1, uint8_T rtu_b2, uint8_T rtu_b3, uint8_T rtu_b4,
  uint8_T rtu_b5, uint8_T rtu_b6, const uint8_T rtu_string_c[7], uint8_T rtu_b7,
  uint8_T rtu_b8, uint8_T rtu_b9, uint8_T rtu_b10, uint8_T rtu_b10_i, uint8_T
  rtu_b11, uint8_T rtu_b12, const uint8_T rtu_string_o[7], uint8_T rtu_b14,
  uint8_T rtu_b15, uint8_T rtu_b16);
extern void BuckyWagon_01_DrawString_Start(void);
extern void BuckyWagon_01_DrawString(uint8_T rtu_string, uint8_T rtu_x, uint8_T
  rtu_y, uint8_T rtu_font, uint8_T rtu_horizcenter, uint8_T rtu_vertcenter,
  uint8_T rtu_stringwrap, uint8_T rtu_fontlinecolor, uint8_T rtu_fontfillcolor);
extern void BuckyWagon_01_DrawVline_Start(void);
extern void BuckyWagon_01_DrawVline(uint8_T rtu_x, uint8_T rtu_y0, uint8_T
  rtu_y1, uint8_T rtu_linecolor, uint8_T rtu_fillcolor);
extern void BuckyWagon_01_DrawHLine_Start(void);
extern void BuckyWagon_01_DrawHLine(uint8_T rtu_x0, uint8_T rtu_x1, uint8_T
  rtu_y, uint8_T rtu_linecolor, uint8_T rtu_fillcolor);
extern void BuckyWagon_01_FunctionCallSubsystem(uint8_T rtu_Value);
extern void BuckyWagon_01_FunctionCallSubsystem1(uint8_T rtu_Value);
extern void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Chart_Start(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Chart(const boolean_T rtu_0[7], uint8_T rtu_menuTime,
  uint16_T rtu_startupDelay, uint8_T rtu_listIndex, uint8_T rtu_singleIndex,
  const uint8_T rtu_dualIndex[2], const uint8_T rtu_quadIndex[4], uint8_T
  rtu_screen, const uint8_T rtu_setupNames[104], const uint8_T rtu_names[180],
  uint8_T rtu_numFields, const uint8_T rtu_namesline1[126], const uint8_T
  rtu_namesline2[126], const uint8_T rtu_barGraphMode[18], const int32_T
  rtu_barMax[18], const int16_T rtu_barMin[18], const uint8_T rtu_statusTxt[10],
  uint8_T rtu_statusTxtMode, const int16_T rtu_data[18], uint8_T rtu_21,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW,
  rtZCE_Chart_BuckyWagon_01 *localZCE);
extern void BuckyWagon_01_EnabledSubsystem(boolean_T rtu_0, uint8_T rtu_1,
  rtB_EnabledSubsystem_BuckyWagon_01 *localB);
extern void BuckyWagon_01_FaultIterator_Init(rtDW_FaultIterator_BuckyWagon_01
  *localDW);
extern void BuckyWagon_01_FaultIterator(rtB_FaultIterator_BuckyWagon_01 *localB,
  rtDW_FaultIterator_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_MiniViewDisplay_Init(void);
extern void BuckyWagon_01_MiniViewDisplay_Start(void);
extern void BuckyWagon_01_MiniViewDisplay(void);

#endif                                 /* RTW_HEADER_BuckyWagon_01_MiniViewDisplay_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
