/*
 * File: BuckyWagon_01_MiniViewDisplay.h
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

/* Block signals for system '<S19>/Chart' */
typedef struct {
  uint8_T s162_mode;                   /* '<S19>/Chart' */
  uint8_T s162_x0;                     /* '<S19>/Chart' */
  uint8_T s162_x1;                     /* '<S19>/Chart' */
  uint8_T s162_y0;                     /* '<S19>/Chart' */
  uint8_T s162_y1;                     /* '<S19>/Chart' */
  uint8_T s162_lineColor;              /* '<S19>/Chart' */
  uint8_T s162_fillColor;              /* '<S19>/Chart' */
  uint8_T s162_stringNum;              /* '<S19>/Chart' */
  uint8_T s162_string[18];             /* '<S19>/Chart' */
  uint8_T s162_font;                   /* '<S19>/Chart' */
  uint8_T s162_hCenter;                /* '<S19>/Chart' */
  uint8_T s162_vCenter;                /* '<S19>/Chart' */
  uint8_T s162_listIndexO;             /* '<S19>/Chart' */
  uint8_T s162_screenO;                /* '<S19>/Chart' */
  uint8_T s162_dualIndexO[2];          /* '<S19>/Chart' */
  uint8_T s162_quadIndexO[4];          /* '<S19>/Chart' */
  uint8_T s162_singleIndexO;           /* '<S19>/Chart' */
} rtB_Chart_BuckyWagon_01;

/* Block states (auto storage) for system '<S19>/Chart' */
typedef struct {
  int32_T s162_sfEvent;                /* '<S19>/Chart' */
  int16_T s162_oldData[6];             /* '<S19>/Chart' */
  uint16_T s162_timer;                 /* '<S19>/Chart' */
  uint8_T s162_is_active_c2_BuckyWagon_01;/* '<S19>/Chart' */
  uint8_T s162_is_c2_BuckyWagon_01;    /* '<S19>/Chart' */
  uint8_T s162_is_List;                /* '<S19>/Chart' */
  uint8_T s162_is_Single;              /* '<S19>/Chart' */
  uint8_T s162_is_Setup;               /* '<S19>/Chart' */
  uint8_T s162_is_Dual;                /* '<S19>/Chart' */
  uint8_T s162_is_Quad;                /* '<S19>/Chart' */
  uint8_T s162_is_select_var;          /* '<S19>/Chart' */
  uint8_T s162_setupIndex;             /* '<S19>/Chart' */
  uint8_T s162_setupVIndex;            /* '<S19>/Chart' */
  uint8_T s162_selectIndex;            /* '<S19>/Chart' */
  uint8_T s162_selectVIndex;           /* '<S19>/Chart' */
} rtDW_Chart_BuckyWagon_01;

/* Zero-crossing (trigger) state for system '<S19>/Chart' */
typedef struct {
  ZCSigState Chart_Trig_ZCE[7];        /* '<S19>/Chart' */
} rtZCE_Chart_BuckyWagon_01;

/* Block signals for system '<S19>/Enabled Subsystem' */
typedef struct {
  uint8_T s170_In;                     /* '<S170>/In' */
} rtB_EnabledSubsystem_BuckyWagon_01;

/* Block signals for system '<S178>/Fault Iterator' */
typedef struct {
  uint8_T s192_motohawk_fault_name[27];/* '<S192>/motohawk_fault_name' */
  boolean_T s192_motohawk_fault_iterator_o1;/* '<S192>/motohawk_fault_iterator' */
} rtB_FaultIterator_BuckyWagon_01;

/* Block states (auto storage) for system '<S178>/Fault Iterator' */
typedef struct {
  fault_T s192_UnitDelay_DSTATE;       /* '<S192>/Unit Delay' */
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
