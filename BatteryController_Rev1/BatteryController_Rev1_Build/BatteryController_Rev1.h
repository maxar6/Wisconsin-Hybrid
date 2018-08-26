/*
 * File: BatteryController_Rev1.h
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 20:25:04 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BatteryController_Rev1_h_
#define RTW_HEADER_BatteryController_Rev1_h_
#ifndef BatteryController_Rev1_COMMON_INCLUDES_
# define BatteryController_Rev1_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BatteryController_Rev1_COMMON_INCLUDES_ */

#include "BatteryController_Rev1_types.h"

/* Child system includes */
#include "BatteryController_Rev1_Foreground.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((void*) 0)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T s82_Sum1;                     /* '<S82>/Sum1' */
  real_T s82_Sum;                      /* '<S82>/Sum' */
  real_T s35_ReadCANMessage3_o1;       /* '<S35>/Read CAN Message3' */
  real_T s35_ReadCANMessage3_o2;       /* '<S35>/Read CAN Message3' */
  real_T s35_ReadCANMessage3_o3;       /* '<S35>/Read CAN Message3' */
  real_T s35_ReadCANMessage3_o4;       /* '<S35>/Read CAN Message3' */
  real_T s35_Gain1;                    /* '<S35>/Gain1' */
  real_T s38_Merge;                    /* '<S38>/Merge' */
  real_T s35_Gain2;                    /* '<S35>/Gain2' */
  real_T s39_Merge;                    /* '<S39>/Merge' */
  real_T s35_ReadCANMessage2;          /* '<S35>/Read CAN Message2' */
  real_T s35_Gain;                     /* '<S35>/Gain' */
  real_T s44_Merge;                    /* '<S44>/Merge' */
  real_T s7_Sum;                       /* '<S7>/Sum' */
  real_T s7_Product;                   /* '<S7>/Product' */
  real_T s13_Merge;                    /* '<S13>/Merge' */
  real_T s9_motohawk_interpolation_1d1;/* '<S9>/motohawk_interpolation_1d1' */
  real_T s9_motohawk_interpolation_1d; /* '<S9>/motohawk_interpolation_1d' */
  real_T s30_Switch;                   /* '<S30>/Switch' */
  real_T s32_Merge;                    /* '<S32>/Merge' */
  real_T s79_motohawk_interpolation_2d;/* '<S79>/motohawk_interpolation_2d' */
  real_T s79_motohawk_interpolation_2d1;/* '<S79>/motohawk_interpolation_2d1' */
  real_T s79_motohawk_interpolation_2d2;/* '<S79>/motohawk_interpolation_2d2' */
  real_T s79_motohawk_interpolation_2d3;/* '<S79>/motohawk_interpolation_2d3' */
  real_T s23_Merge;                    /* '<S23>/Merge' */
  real_T s22_Merge;                    /* '<S22>/Merge' */
  real_T s35_ReadCANMessage1;          /* '<S35>/Read CAN Message1' */
  real_T s37_ReadCANMessage_o1;        /* '<S37>/Read CAN Message' */
  real_T s35_ReadCANMessage;           /* '<S35>/Read CAN Message' */
  real_T s31_voltageOut;               /* '<S9>/SOC States' */
  real_T s31_currState;                /* '<S9>/SOC States' */
  real_T s21_state;                    /* '<S8>/Precharge State' */
  real_T s21_delay3Out;                /* '<S8>/Precharge State' */
  real_T s21_delay5Out;                /* '<S8>/Precharge State' */
  real_T s20_PackState;                /* '<S8>/Pack State' */
  real_T s12_amps;                     /* '<S7>/Curret Calculation Instantaneos' */
  real_T s11_Offset_Out;               /* '<S7>/Amp Clamp Offsets' */
  uint32_T s80_DataTypeConversion3;    /* '<S80>/Data Type Conversion3' */
  int16_T s37_DutyCycle;               /* '<S37>/Data Type Conversion2' */
  uint16_T s36_motohawk_ain;           /* '<S36>/motohawk_ain' */
  uint16_T s36_motohawk_ain1;          /* '<S36>/motohawk_ain1' */
  uint8_T s81_Compare;                 /* '<S81>/Compare' */
  boolean_T s16_Negative;              /* '<S8>/Coil2State' */
  boolean_T s16_Positive;              /* '<S8>/Coil2State' */
  boolean_T s16_PreChargeCoil;         /* '<S8>/Coil2State' */
  boolean_T s16_PreChargeEnable;       /* '<S8>/Coil2State' */
  boolean_T s16_PreChargeFreq;         /* '<S8>/Coil2State' */
  boolean_T s16_BatteryOn;             /* '<S8>/Coil2State' */
  rtB_Delay3Chart_BatteryController_Rev1 s18_sf_Delay5Chart;/* '<S18>/Delay 5 Chart' */
  rtB_Delay3Chart_BatteryController_Rev1 s17_sf_Delay3Chart;/* '<S17>/Delay 3 Chart' */
} BlockIO_BatteryController_Rev1;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s118_UnitDelay_DSTATE;        /* '<S118>/Unit Delay' */
  real_T s117_UnitDelay_DSTATE;        /* '<S117>/Unit Delay' */
  real_T s10_UnitDelay1_DSTATE;        /* '<S10>/Unit Delay1' */
  real_T s30_UnitDelay1_DSTATE;        /* '<S30>/Unit Delay1' */
  real_T s31_tick;                     /* '<S9>/SOC States' */
  real_T s16_Freq;                     /* '<S8>/Coil2State' */
  uint32_T s117_motohawk_delta_time_DWORK1;/* '<S117>/motohawk_delta_time' */
  uint32_T s118_motohawk_delta_time_DWORK1;/* '<S118>/motohawk_delta_time' */
  uint16_T s211_UnitDelay_DSTATE;      /* '<S211>/Unit Delay' */
  uint16_T s211_UnitDelay1_DSTATE;     /* '<S211>/Unit Delay1' */
  boolean_T s19_UnitDelay4_DSTATE;     /* '<S19>/Unit Delay4' */
  boolean_T s19_UnitDelay_DSTATE;      /* '<S19>/Unit Delay' */
  boolean_T s19_UnitDelay1_DSTATE;     /* '<S19>/Unit Delay1' */
  boolean_T s19_UnitDelay2_DSTATE;     /* '<S19>/Unit Delay2' */
  boolean_T s19_UnitDelay3_DSTATE;     /* '<S19>/Unit Delay3' */
  boolean_T s212_UnitDelay_DSTATE;     /* '<S212>/Unit Delay' */
  boolean_T s222_UnitDelay_DSTATE;     /* '<S222>/Unit Delay' */
  boolean_T s210_UnitDelay5_DSTATE;    /* '<S210>/Unit Delay5' */
  boolean_T s210_UnitDelay2_DSTATE;    /* '<S210>/Unit Delay2' */
  boolean_T s210_UnitDelay_DSTATE;     /* '<S210>/Unit Delay' */
  boolean_T s210_UnitDelay1_DSTATE;    /* '<S210>/Unit Delay1' */
  boolean_T s210_UnitDelay3_DSTATE;    /* '<S210>/Unit Delay3' */
  boolean_T s210_UnitDelay4_DSTATE;    /* '<S210>/Unit Delay4' */
  uint8_T s31_is_active_c4_BatteryController_Rev1;/* '<S9>/SOC States' */
  uint8_T s31_is_c4_BatteryController_Rev1;/* '<S9>/SOC States' */
  uint8_T s21_is_active_c8_BatteryController_Rev1;/* '<S8>/Precharge State' */
  uint8_T s21_is_c8_BatteryController_Rev1;/* '<S8>/Precharge State' */
  uint8_T s16_is_active_c1_BatteryController_Rev1;/* '<S8>/Coil2State' */
  uint8_T s16_is_c1_BatteryController_Rev1;/* '<S8>/Coil2State' */
  uint8_T s11_is_active_c2_BatteryController_Rev1;/* '<S7>/Amp Clamp Offsets' */
  uint8_T s11_is_c2_BatteryController_Rev1;/* '<S7>/Amp Clamp Offsets' */
  rtDW_Delay3Chart_BatteryController_Rev1 s18_sf_Delay5Chart;/* '<S18>/Delay 5 Chart' */
  rtDW_Delay3Chart_BatteryController_Rev1 s17_sf_Delay3Chart;/* '<S17>/Delay 3 Chart' */
} D_Work_BatteryController_Rev1;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SaveNVondisconnect_Trig_ZCE;/* '<S37>/Save NV on disconnect' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S210>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S210>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S210>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S210>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S214>/Clear' */
  ZCSigState Clear_Trig_ZCE_d;         /* '<S213>/Clear' */
} PrevZCSigStates_BatteryController_Rev1;

/* Real-time Model Data Structure */
struct RT_MODEL_BatteryController_Rev1 {
  const char_T *errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_BatteryController_Rev1 BatteryController_Rev1_B;

/* Block states (auto storage) */
extern D_Work_BatteryController_Rev1 BatteryController_Rev1_DWork;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BatteryController_Rev1
  BatteryController_Rev1_PrevZCSigState;

/* Model entry point functions */
extern void BatteryController_Rev1_initialize(boolean_T firstTime);
extern void BatteryController_Rev1_step(void);
extern void BatteryController_Rev1_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BatteryController_Rev1 *const BatteryController_Rev1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : BatteryController_Rev1
 * '<S1>'   : BatteryController_Rev1/Foreground
 * '<S2>'   : BatteryController_Rev1/Main Power Relay
 * '<S3>'   : BatteryController_Rev1/Foreground/Battery
 * '<S4>'   : BatteryController_Rev1/Foreground/Battery/Control
 * '<S5>'   : BatteryController_Rev1/Foreground/Battery/Inputs
 * '<S6>'   : BatteryController_Rev1/Foreground/Battery/Outputs
 * '<S7>'   : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp
 * '<S8>'   : BatteryController_Rev1/Foreground/Battery/Control/Battery States
 * '<S9>'   : BatteryController_Rev1/Foreground/Battery/Control/SOC
 * '<S10>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Amp Clamp Conditioning
 * '<S11>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Amp Clamp Offsets
 * '<S12>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Curret Calculation Instantaneos
 * '<S13>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9
 * '<S14>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/NewValue
 * '<S15>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/OldValue
 * '<S16>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Coil2State
 * '<S17>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay3
 * '<S18>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay5
 * '<S19>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delays
 * '<S20>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Pack State
 * '<S21>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Precharge State
 * '<S22>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1
 * '<S23>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9
 * '<S24>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay3/Delay 3 Chart
 * '<S25>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay5/Delay 5 Chart
 * '<S26>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/NewValue
 * '<S27>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/OldValue
 * '<S28>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/NewValue
 * '<S29>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/OldValue
 * '<S30>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/SOC Conditioning
 * '<S31>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/SOC States
 * '<S32>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9
 * '<S33>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/NewValue
 * '<S34>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/OldValue
 * '<S35>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS
 * '<S36>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp
 * '<S37>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors
 * '<S38>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3
 * '<S39>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4
 * '<S40>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5
 * '<S41>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6
 * '<S42>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7
 * '<S43>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8
 * '<S44>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9
 * '<S45>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/NewValue
 * '<S46>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/OldValue
 * '<S47>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/NewValue
 * '<S48>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/OldValue
 * '<S49>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/NewValue
 * '<S50>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/OldValue
 * '<S51>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/NewValue
 * '<S52>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/OldValue
 * '<S53>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/NewValue
 * '<S54>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/OldValue
 * '<S55>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/NewValue
 * '<S56>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/OldValue
 * '<S57>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/NewValue
 * '<S58>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/OldValue
 * '<S59>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1
 * '<S60>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9
 * '<S61>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/NewValue
 * '<S62>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/OldValue
 * '<S63>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/NewValue
 * '<S64>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/OldValue
 * '<S65>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect
 * '<S66>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10
 * '<S67>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11
 * '<S68>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8
 * '<S69>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9
 * '<S70>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect/Save NV Vars one tick before MPRD off
 * '<S71>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/NewValue
 * '<S72>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/OldValue
 * '<S73>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/NewValue
 * '<S74>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/OldValue
 * '<S75>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/NewValue
 * '<S76>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/OldValue
 * '<S77>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/NewValue
 * '<S78>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/OldValue
 * '<S79>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery
 * '<S80>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors
 * '<S81>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/Compare To Zero
 * '<S82>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours
 * '<S83>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1
 * '<S84>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10
 * '<S85>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11
 * '<S86>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12
 * '<S87>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13
 * '<S88>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14
 * '<S89>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15
 * '<S90>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16
 * '<S91>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17
 * '<S92>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18
 * '<S93>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19
 * '<S94>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2
 * '<S95>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20
 * '<S96>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21
 * '<S97>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22
 * '<S98>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23
 * '<S99>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24
 * '<S100>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25
 * '<S101>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26
 * '<S102>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27
 * '<S103>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28
 * '<S104>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29
 * '<S105>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3
 * '<S106>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30
 * '<S107>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31
 * '<S108>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32
 * '<S109>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33
 * '<S110>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34
 * '<S111>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4
 * '<S112>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5
 * '<S113>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6
 * '<S114>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7
 * '<S115>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8
 * '<S116>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9
 * '<S117>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorIn
 * '<S118>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorOut
 * '<S119>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorIn/Saturation
 * '<S120>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorOut/Saturation
 * '<S121>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/NewValue
 * '<S122>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/OldValue
 * '<S123>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/NewValue
 * '<S124>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/OldValue
 * '<S125>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/NewValue
 * '<S126>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/OldValue
 * '<S127>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/NewValue
 * '<S128>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/OldValue
 * '<S129>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/NewValue
 * '<S130>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/OldValue
 * '<S131>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/NewValue
 * '<S132>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/OldValue
 * '<S133>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/NewValue
 * '<S134>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/OldValue
 * '<S135>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/NewValue
 * '<S136>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/OldValue
 * '<S137>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/NewValue
 * '<S138>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/OldValue
 * '<S139>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/NewValue
 * '<S140>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/OldValue
 * '<S141>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/NewValue
 * '<S142>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/OldValue
 * '<S143>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/NewValue
 * '<S144>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/OldValue
 * '<S145>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/NewValue
 * '<S146>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/OldValue
 * '<S147>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/NewValue
 * '<S148>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/OldValue
 * '<S149>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/NewValue
 * '<S150>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/OldValue
 * '<S151>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/NewValue
 * '<S152>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/OldValue
 * '<S153>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/NewValue
 * '<S154>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/OldValue
 * '<S155>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/NewValue
 * '<S156>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/OldValue
 * '<S157>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/NewValue
 * '<S158>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/OldValue
 * '<S159>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/NewValue
 * '<S160>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/OldValue
 * '<S161>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/NewValue
 * '<S162>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/OldValue
 * '<S163>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/NewValue
 * '<S164>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/OldValue
 * '<S165>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/NewValue
 * '<S166>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/OldValue
 * '<S167>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/NewValue
 * '<S168>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/OldValue
 * '<S169>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/NewValue
 * '<S170>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/OldValue
 * '<S171>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/NewValue
 * '<S172>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/OldValue
 * '<S173>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/NewValue
 * '<S174>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/OldValue
 * '<S175>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/NewValue
 * '<S176>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/OldValue
 * '<S177>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/NewValue
 * '<S178>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/OldValue
 * '<S179>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/NewValue
 * '<S180>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/OldValue
 * '<S181>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/NewValue
 * '<S182>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/OldValue
 * '<S183>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/NewValue
 * '<S184>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/OldValue
 * '<S185>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/NewValue
 * '<S186>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/OldValue
 * '<S187>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/NewValue
 * '<S188>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/OldValue
 * '<S189>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1
 * '<S190>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2
 * '<S191>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3
 * '<S192>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4
 * '<S193>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5
 * '<S194>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6
 * '<S195>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7
 * '<S196>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/NewValue
 * '<S197>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/OldValue
 * '<S198>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/NewValue
 * '<S199>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/OldValue
 * '<S200>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/NewValue
 * '<S201>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/OldValue
 * '<S202>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/NewValue
 * '<S203>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/OldValue
 * '<S204>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/NewValue
 * '<S205>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/OldValue
 * '<S206>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/NewValue
 * '<S207>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/OldValue
 * '<S208>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/NewValue
 * '<S209>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/OldValue
 * '<S210>' : BatteryController_Rev1/Main Power Relay/Background
 * '<S211>' : BatteryController_Rev1/Main Power Relay/Background/Delay
 * '<S212>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Boolean
 * '<S213>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S214>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S215>' : BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S216>' : BatteryController_Rev1/Main Power Relay/Background/Processor Reboot
 * '<S217>' : BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S218>' : BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S219>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs
 * '<S220>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S221>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_store_nvmem
 * '<S222>' : BatteryController_Rev1/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S223>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S224>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S225>' : BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S226>' : BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S227>' : BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S228>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S229>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BatteryController_Rev1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
