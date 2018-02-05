/*
 * File: DynoController_Rev1.h
 *
 * Code generated for Simulink model 'DynoController_Rev1'.
 *
 * Model version                  : 1.298
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Jan 15 12:10:05 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DynoController_Rev1_h_
#define RTW_HEADER_DynoController_Rev1_h_
#ifndef DynoController_Rev1_COMMON_INCLUDES_
# define DynoController_Rev1_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#endif                                 /* DynoController_Rev1_COMMON_INCLUDES_ */

#include "DynoController_Rev1_types.h"

/* Child system includes */
#include "DynoController_Rev1_Foreground.h"

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
  real_T s37_PackState;                /* '<S37>/Read CAN Message' */
  real_T s37_StateOfCharge;            /* '<S37>/Read CAN Message' */
  real_T s39_Merge;                    /* '<S39>/Merge' */
  real_T s38_ReadCANMessage_o2;        /* '<S38>/Read CAN Message' */
  real_T s38_ReadCANMessage_o3;        /* '<S38>/Read CAN Message' */
  real_T s38_ReadCANMessage_o4;        /* '<S38>/Read CAN Message' */
  real_T s38_ReadCANMessage_o6;        /* '<S38>/Read CAN Message' */
  real_T s38_ReadCANMessage_o7;        /* '<S38>/Read CAN Message' */
  real_T s37_BatteryVoltage;           /* '<S37>/Read CAN Message3' */
  real_T s37_BatteryCurrent;           /* '<S37>/Read CAN Message3' */
  real_T s37_MaxCellTemperature;       /* '<S37>/Read CAN Message1' */
  real_T s54_Merge;                    /* '<S54>/Merge' */
  real_T s56_Merge;                    /* '<S56>/Merge' */
  real_T s124_Sum;                     /* '<S124>/Sum' */
  int16_T s38_ReadCANMessage_o1;       /* '<S38>/Read CAN Message' */
  int16_T s55_Merge;                   /* '<S55>/Merge' */
  int16_T s121_Merge;                  /* '<S121>/Merge' */
  int16_T s77_Gain;                    /* '<S77>/Gain' */
  int16_T s120_Merge;                  /* '<S120>/Merge' */
  int16_T s77_Gain1;                   /* '<S77>/Gain1' */
  int16_T s122_Merge;                  /* '<S122>/Merge' */
  int16_T s77_Gain2;                   /* '<S77>/Gain2' */
  int16_T s123_Merge;                  /* '<S123>/Merge' */
  boolean_T s11_Merge;                 /* '<S11>/Merge' */
  boolean_T s75_LogicalOperator;       /* '<S75>/Logical Operator' */
  boolean_T s17_motohawk_din1;         /* '<S17>/motohawk_din1' */
  boolean_T s75_LogicalOperator1;      /* '<S75>/Logical Operator1' */
  boolean_T s75_RelationalOperator2;   /* '<S75>/Relational Operator2' */
  boolean_T s38_ReadCANMessage_o5;     /* '<S38>/Read CAN Message' */
  boolean_T s75_LogicalOperator2;      /* '<S75>/Logical Operator2' */
  boolean_T s10_LogicalOperator2;      /* '<S10>/Logical Operator2' */
  boolean_T s17_motohawk_din;          /* '<S17>/motohawk_din' */
  boolean_T s102_ConnectCommand;       /* '<S102>/Logical Operator2' */
  boolean_T s102_IsolationMeasurementEnable;/* '<S102>/Logical Operator' */
  boolean_T s17_motohawk_din2;         /* '<S17>/motohawk_din2' */
  boolean_T s103_Gen_Enable;           /* '<S103>/Logical Operator' */
  boolean_T s103_Gen_Load;             /* '<S103>/Logical Operator1' */
  boolean_T s17_motohawk_din3;         /* '<S17>/motohawk_din3' */
  boolean_T s17_motohawk_din4;         /* '<S17>/motohawk_din4' */
  boolean_T s17_motohawk_din5;         /* '<S17>/motohawk_din5' */
  boolean_T s16_Vehicle_Enable;        /* '<S8>/Chart' */
  boolean_T s16_Vehicle_Ready;         /* '<S8>/Chart' */
  boolean_T s16_Torque_Enable;         /* '<S8>/Chart' */
  boolean_T s16_Keyed_Relay;           /* '<S8>/Chart' */
} BlockIO_DynoController_Rev1;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint32_T s13_motohawk_delta_time_DWORK1;/* '<S13>/motohawk_delta_time' */
  uint32_T s12_motohawk_delta_time_DWORK1;/* '<S12>/motohawk_delta_time' */
  uint32_T s124_motohawk_delta_time_DWORK1;/* '<S124>/motohawk_delta_time' */
  uint16_T s134_UnitDelay_DSTATE;      /* '<S134>/Unit Delay' */
  uint16_T s134_UnitDelay1_DSTATE;     /* '<S134>/Unit Delay1' */
  boolean_T s135_UnitDelay_DSTATE;     /* '<S135>/Unit Delay' */
  boolean_T s145_UnitDelay_DSTATE;     /* '<S145>/Unit Delay' */
  boolean_T s133_UnitDelay5_DSTATE;    /* '<S133>/Unit Delay5' */
  boolean_T s133_UnitDelay2_DSTATE;    /* '<S133>/Unit Delay2' */
  boolean_T s133_UnitDelay_DSTATE;     /* '<S133>/Unit Delay' */
  boolean_T s133_UnitDelay1_DSTATE;    /* '<S133>/Unit Delay1' */
  boolean_T s133_UnitDelay3_DSTATE;    /* '<S133>/Unit Delay3' */
  boolean_T s133_UnitDelay4_DSTATE;    /* '<S133>/Unit Delay4' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s16_is_active_c1_DynoController_Rev1;/* '<S8>/Chart' */
  uint8_T s16_is_c1_DynoController_Rev1;/* '<S8>/Chart' */
} D_Work_DynoController_Rev1;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S133>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S133>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S133>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S133>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S137>/Clear' */
  ZCSigState Clear_Trig_ZCE_n;         /* '<S136>/Clear' */
} PrevZCSigStates_DynoController_Rev1;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s102_OdometerValue;     /* '<S102>/To km' */
} ConstBlockIO_DynoController_Rev1;

/* Real-time Model Data Structure */
struct RT_MODEL_DynoController_Rev1 {
  const char_T *errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_DynoController_Rev1 DynoController_Rev1_B;

/* Block states (auto storage) */
extern D_Work_DynoController_Rev1 DynoController_Rev1_DWork;
extern const ConstBlockIO_DynoController_Rev1 DynoController_Rev1_ConstB;/* constant block i/o */

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_DynoController_Rev1 DynoController_Rev1_PrevZCSigState;

/* Model entry point functions */
extern void DynoController_Rev1_initialize(boolean_T firstTime);
extern void DynoController_Rev1_step(void);
extern void DynoController_Rev1_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_DynoController_Rev1 *const DynoController_Rev1_M;

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
 * '<Root>' : DynoController_Rev1
 * '<S1>'   : DynoController_Rev1/Foreground
 * '<S2>'   : DynoController_Rev1/Main Power Relay
 * '<S3>'   : DynoController_Rev1/startup
 * '<S4>'   : DynoController_Rev1/Foreground/Control
 * '<S5>'   : DynoController_Rev1/Foreground/Inputs
 * '<S6>'   : DynoController_Rev1/Foreground/Outputs
 * '<S7>'   : DynoController_Rev1/Foreground/Control/Battery
 * '<S8>'   : DynoController_Rev1/Foreground/Control/Vehicle Run//Stop Determination
 * '<S9>'   : DynoController_Rev1/Foreground/Control/Battery/Compare To Constant
 * '<S10>'  : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence
 * '<S11>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4
 * '<S12>'  : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)1
 * '<S13>'  : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)3
 * '<S14>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/NewValue
 * '<S15>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/OldValue
 * '<S16>'  : DynoController_Rev1/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S17>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs
 * '<S18>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs
 * '<S19>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1
 * '<S20>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2
 * '<S21>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3
 * '<S22>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4
 * '<S23>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5
 * '<S24>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6
 * '<S25>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/NewValue
 * '<S26>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/OldValue
 * '<S27>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/NewValue
 * '<S28>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/OldValue
 * '<S29>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/NewValue
 * '<S30>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/OldValue
 * '<S31>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/NewValue
 * '<S32>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/OldValue
 * '<S33>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/NewValue
 * '<S34>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/OldValue
 * '<S35>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/NewValue
 * '<S36>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/OldValue
 * '<S37>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY
 * '<S38>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO
 * '<S39>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1
 * '<S40>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2
 * '<S41>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3
 * '<S42>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4
 * '<S43>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5
 * '<S44>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/NewValue
 * '<S45>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/OldValue
 * '<S46>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/NewValue
 * '<S47>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/OldValue
 * '<S48>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/NewValue
 * '<S49>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/OldValue
 * '<S50>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/NewValue
 * '<S51>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/OldValue
 * '<S52>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/NewValue
 * '<S53>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/OldValue
 * '<S54>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1
 * '<S55>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2
 * '<S56>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3
 * '<S57>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4
 * '<S58>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5
 * '<S59>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6
 * '<S60>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7
 * '<S61>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/NewValue
 * '<S62>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/OldValue
 * '<S63>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/NewValue
 * '<S64>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/OldValue
 * '<S65>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/NewValue
 * '<S66>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/OldValue
 * '<S67>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/NewValue
 * '<S68>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/OldValue
 * '<S69>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/NewValue
 * '<S70>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/OldValue
 * '<S71>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/NewValue
 * '<S72>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/OldValue
 * '<S73>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/NewValue
 * '<S74>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/OldValue
 * '<S75>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs
 * '<S76>'  : DynoController_Rev1/Foreground/Outputs/CAN Outputs
 * '<S77>'  : DynoController_Rev1/Foreground/Outputs/Guages
 * '<S78>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1
 * '<S79>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2
 * '<S80>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3
 * '<S81>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4
 * '<S82>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5
 * '<S83>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6
 * '<S84>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7
 * '<S85>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8
 * '<S86>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/NewValue
 * '<S87>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/OldValue
 * '<S88>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/NewValue
 * '<S89>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/OldValue
 * '<S90>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/NewValue
 * '<S91>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/OldValue
 * '<S92>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/NewValue
 * '<S93>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/OldValue
 * '<S94>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/NewValue
 * '<S95>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/OldValue
 * '<S96>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/NewValue
 * '<S97>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/OldValue
 * '<S98>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/NewValue
 * '<S99>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/OldValue
 * '<S100>' : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/NewValue
 * '<S101>' : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/OldValue
 * '<S102>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT
 * '<S103>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT
 * '<S104>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs
 * '<S105>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1
 * '<S106>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/NewValue
 * '<S107>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/OldValue
 * '<S108>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/NewValue
 * '<S109>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/OldValue
 * '<S110>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1
 * '<S111>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2
 * '<S112>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3
 * '<S113>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/NewValue
 * '<S114>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/OldValue
 * '<S115>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/NewValue
 * '<S116>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/OldValue
 * '<S117>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/NewValue
 * '<S118>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/OldValue
 * '<S119>' : DynoController_Rev1/Foreground/Outputs/Guages/Time Since Key On
 * '<S120>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1
 * '<S121>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2
 * '<S122>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3
 * '<S123>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4
 * '<S124>' : DynoController_Rev1/Foreground/Outputs/Guages/Time Since Key On/Time Since Enabled (With Input)2
 * '<S125>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue
 * '<S126>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue
 * '<S127>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue
 * '<S128>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue
 * '<S129>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue
 * '<S130>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue
 * '<S131>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue
 * '<S132>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue
 * '<S133>' : DynoController_Rev1/Main Power Relay/Background
 * '<S134>' : DynoController_Rev1/Main Power Relay/Background/Delay
 * '<S135>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Boolean
 * '<S136>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S137>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S138>' : DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S139>' : DynoController_Rev1/Main Power Relay/Background/Processor Reboot
 * '<S140>' : DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S141>' : DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S142>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs
 * '<S143>' : DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S144>' : DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem
 * '<S145>' : DynoController_Rev1/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S146>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S147>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S148>' : DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S149>' : DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S150>' : DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S151>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S152>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_DynoController_Rev1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
