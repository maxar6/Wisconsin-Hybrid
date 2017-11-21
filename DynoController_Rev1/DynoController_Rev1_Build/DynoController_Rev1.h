/*
 * File: DynoController_Rev1.h
 *
 * Real-Time Workshop code generated for Simulink model DynoController_Rev1.
 *
 * Model version                        : 1.279
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 19:40:13 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 19:40:14 2017
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
#include "rt_SATURATE.h"
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
  real_T s36_PackState;                /* '<S36>/Read CAN Message' */
  real_T s36_StateOfCharge;            /* '<S36>/Read CAN Message' */
  real_T s37_ReadCANMessage_o2;        /* '<S37>/Read CAN Message' */
  real_T s37_ReadCANMessage_o3;        /* '<S37>/Read CAN Message' */
  real_T s37_ReadCANMessage_o4;        /* '<S37>/Read CAN Message' */
  real_T s37_ReadCANMessage_o6;        /* '<S37>/Read CAN Message' */
  real_T s37_ReadCANMessage_o7;        /* '<S37>/Read CAN Message' */
  real_T s36_BatteryVoltage;           /* '<S36>/Read CAN Message3' */
  real_T s36_BatteryCurrent;           /* '<S36>/Read CAN Message3' */
  real_T s36_MaxCellTemperature;       /* '<S36>/Read CAN Message1' */
  int16_T s37_ReadCANMessage_o1;       /* '<S37>/Read CAN Message' */
  int16_T s54_Merge;                   /* '<S54>/Merge' */
  int16_T s119_Merge;                  /* '<S119>/Merge' */
  int16_T s76_Gain;                    /* '<S76>/Gain' */
  int16_T s118_Merge;                  /* '<S118>/Merge' */
  int16_T s76_Gain1;                   /* '<S76>/Gain1' */
  int16_T s120_Merge;                  /* '<S120>/Merge' */
  int16_T s76_Gain2;                   /* '<S76>/Gain2' */
  int16_T s121_Merge;                  /* '<S121>/Merge' */
  boolean_T s10_Merge;                 /* '<S10>/Merge' */
  boolean_T s74_LogicalOperator;       /* '<S74>/Logical Operator' */
  boolean_T s16_motohawk_din1;         /* '<S16>/motohawk_din1' */
  boolean_T s74_LogicalOperator1;      /* '<S74>/Logical Operator1' */
  boolean_T s74_RelationalOperator2;   /* '<S74>/Relational Operator2' */
  boolean_T s37_ReadCANMessage_o5;     /* '<S37>/Read CAN Message' */
  boolean_T s74_LogicalOperator2;      /* '<S74>/Logical Operator2' */
  boolean_T s16_motohawk_din;          /* '<S16>/motohawk_din' */
  boolean_T s101_ConnectCommand;       /* '<S101>/Logical Operator2' */
  boolean_T s101_IsolationMeasurementEnable;/* '<S101>/Logical Operator' */
  boolean_T s16_motohawk_din2;         /* '<S16>/motohawk_din2' */
  boolean_T s102_Gen_Enable;           /* '<S102>/Logical Operator' */
  boolean_T s102_Gen_Load;             /* '<S102>/Logical Operator1' */
  boolean_T s9_LogicalOperator2;       /* '<S9>/Logical Operator2' */
  boolean_T s16_motohawk_din3;         /* '<S16>/motohawk_din3' */
  boolean_T s16_motohawk_din4;         /* '<S16>/motohawk_din4' */
  boolean_T s16_motohawk_din5;         /* '<S16>/motohawk_din5' */
  boolean_T s15_Vehicle_Enable;        /* '<S7>/Chart' */
  boolean_T s15_Vehicle_Ready;         /* '<S7>/Chart' */
  boolean_T s15_Torque_Enable;         /* '<S7>/Chart' */
  boolean_T s15_Keyed_Relay;           /* '<S7>/Chart' */
} BlockIO_DynoController_Rev1;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint32_T s12_motohawk_delta_time_DWORK1;/* '<S12>/motohawk_delta_time' */
  uint32_T s11_motohawk_delta_time_DWORK1;/* '<S11>/motohawk_delta_time' */
  uint16_T s131_UnitDelay_DSTATE;      /* '<S131>/Unit Delay' */
  uint16_T s131_UnitDelay1_DSTATE;     /* '<S131>/Unit Delay1' */
  boolean_T s132_UnitDelay_DSTATE;     /* '<S132>/Unit Delay' */
  boolean_T s142_UnitDelay_DSTATE;     /* '<S142>/Unit Delay' */
  boolean_T s130_UnitDelay5_DSTATE;    /* '<S130>/Unit Delay5' */
  boolean_T s130_UnitDelay2_DSTATE;    /* '<S130>/Unit Delay2' */
  boolean_T s130_UnitDelay_DSTATE;     /* '<S130>/Unit Delay' */
  boolean_T s130_UnitDelay1_DSTATE;    /* '<S130>/Unit Delay1' */
  boolean_T s130_UnitDelay3_DSTATE;    /* '<S130>/Unit Delay3' */
  boolean_T s130_UnitDelay4_DSTATE;    /* '<S130>/Unit Delay4' */
  uint8_T s15_is_active_c1_DynoController_Rev1;/* '<S7>/Chart' */
  uint8_T s15_is_c1_DynoController_Rev1;/* '<S7>/Chart' */
} D_Work_DynoController_Rev1;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S130>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S130>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S130>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S130>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S134>/Clear' */
  ZCSigState Clear_Trig_ZCE_n;         /* '<S133>/Clear' */
} PrevZCSigStates_DynoController_Rev1;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s101_OdometerValue;     /* '<S101>/To km' */
} ConstBlockIO_DynoController_Rev1;

/* Real-time Model Data Structure */
struct RT_MODEL_DynoController_Rev1 {
  const char_T *errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_DynoController_Rev1 DynoController_Rev1_B;

/* Block states (auto storage) */
extern D_Work_DynoController_Rev1 DynoController_Rev1_DWork;
extern ConstBlockIO_DynoController_Rev1 DynoController_Rev1_ConstB;/* constant block i/o */

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_DynoController_Rev1 DynoController_Rev1_PrevZCSigState;

/* Model entry point functions */
extern void DynoController_Rev1_initialize(boolean_T firstTime);
extern void DynoController_Rev1_step(void);
extern void DynoController_Rev1_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_DynoController_Rev1 *DynoController_Rev1_M;

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
 * '<S3>'   : DynoController_Rev1/Foreground/Control
 * '<S4>'   : DynoController_Rev1/Foreground/Inputs
 * '<S5>'   : DynoController_Rev1/Foreground/Outputs
 * '<S6>'   : DynoController_Rev1/Foreground/Control/Battery
 * '<S7>'   : DynoController_Rev1/Foreground/Control/Vehicle Run//Stop Determination
 * '<S8>'   : DynoController_Rev1/Foreground/Control/Battery/Compare To Constant
 * '<S9>'   : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence
 * '<S10>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4
 * '<S11>'  : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)1
 * '<S12>'  : DynoController_Rev1/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)3
 * '<S13>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/NewValue
 * '<S14>'  : DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/OldValue
 * '<S15>'  : DynoController_Rev1/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S16>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs
 * '<S17>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs
 * '<S18>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1
 * '<S19>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2
 * '<S20>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3
 * '<S21>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4
 * '<S22>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5
 * '<S23>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6
 * '<S24>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/NewValue
 * '<S25>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/OldValue
 * '<S26>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/NewValue
 * '<S27>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/OldValue
 * '<S28>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/NewValue
 * '<S29>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/OldValue
 * '<S30>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/NewValue
 * '<S31>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/OldValue
 * '<S32>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/NewValue
 * '<S33>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/OldValue
 * '<S34>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/NewValue
 * '<S35>'  : DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/OldValue
 * '<S36>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY
 * '<S37>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO
 * '<S38>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1
 * '<S39>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2
 * '<S40>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3
 * '<S41>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4
 * '<S42>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5
 * '<S43>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/NewValue
 * '<S44>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/OldValue
 * '<S45>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/NewValue
 * '<S46>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/OldValue
 * '<S47>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/NewValue
 * '<S48>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/OldValue
 * '<S49>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/NewValue
 * '<S50>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/OldValue
 * '<S51>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/NewValue
 * '<S52>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/OldValue
 * '<S53>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1
 * '<S54>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2
 * '<S55>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3
 * '<S56>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4
 * '<S57>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5
 * '<S58>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6
 * '<S59>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7
 * '<S60>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/NewValue
 * '<S61>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/OldValue
 * '<S62>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/NewValue
 * '<S63>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/OldValue
 * '<S64>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/NewValue
 * '<S65>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/OldValue
 * '<S66>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/NewValue
 * '<S67>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/OldValue
 * '<S68>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/NewValue
 * '<S69>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/OldValue
 * '<S70>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/NewValue
 * '<S71>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/OldValue
 * '<S72>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/NewValue
 * '<S73>'  : DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/OldValue
 * '<S74>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs
 * '<S75>'  : DynoController_Rev1/Foreground/Outputs/CAN Outputs
 * '<S76>'  : DynoController_Rev1/Foreground/Outputs/Guages
 * '<S77>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1
 * '<S78>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2
 * '<S79>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3
 * '<S80>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4
 * '<S81>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5
 * '<S82>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6
 * '<S83>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7
 * '<S84>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8
 * '<S85>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/NewValue
 * '<S86>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/OldValue
 * '<S87>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/NewValue
 * '<S88>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/OldValue
 * '<S89>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/NewValue
 * '<S90>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/OldValue
 * '<S91>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/NewValue
 * '<S92>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/OldValue
 * '<S93>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/NewValue
 * '<S94>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/OldValue
 * '<S95>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/NewValue
 * '<S96>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/OldValue
 * '<S97>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/NewValue
 * '<S98>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/OldValue
 * '<S99>'  : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/NewValue
 * '<S100>' : DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/OldValue
 * '<S101>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT
 * '<S102>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT
 * '<S103>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs
 * '<S104>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1
 * '<S105>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/NewValue
 * '<S106>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/OldValue
 * '<S107>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/NewValue
 * '<S108>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/OldValue
 * '<S109>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1
 * '<S110>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2
 * '<S111>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3
 * '<S112>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/NewValue
 * '<S113>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/OldValue
 * '<S114>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/NewValue
 * '<S115>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/OldValue
 * '<S116>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/NewValue
 * '<S117>' : DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/OldValue
 * '<S118>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1
 * '<S119>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2
 * '<S120>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3
 * '<S121>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4
 * '<S122>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue
 * '<S123>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue
 * '<S124>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue
 * '<S125>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue
 * '<S126>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue
 * '<S127>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue
 * '<S128>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue
 * '<S129>' : DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue
 * '<S130>' : DynoController_Rev1/Main Power Relay/Background
 * '<S131>' : DynoController_Rev1/Main Power Relay/Background/Delay
 * '<S132>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Boolean
 * '<S133>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S134>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S135>' : DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S136>' : DynoController_Rev1/Main Power Relay/Background/Processor Reboot
 * '<S137>' : DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S138>' : DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S139>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs
 * '<S140>' : DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S141>' : DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem
 * '<S142>' : DynoController_Rev1/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S143>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S144>' : DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S145>' : DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S146>' : DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S147>' : DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S148>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S149>' : DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_DynoController_Rev1_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
