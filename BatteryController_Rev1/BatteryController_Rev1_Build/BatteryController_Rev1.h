/*
 * File: BatteryController_Rev1.h
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.590
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 09:42:57 2018
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
  real_T s90_Sum1;                     /* '<S90>/Sum1' */
  real_T s90_Sum;                      /* '<S90>/Sum' */
  real_T s43_ReadCANMessage3_o1;       /* '<S43>/Read CAN Message3' */
  real_T s43_ReadCANMessage3_o2;       /* '<S43>/Read CAN Message3' */
  real_T s43_ReadCANMessage3_o3;       /* '<S43>/Read CAN Message3' */
  real_T s43_ReadCANMessage3_o4;       /* '<S43>/Read CAN Message3' */
  real_T s43_Gain1;                    /* '<S43>/Gain1' */
  real_T s46_Merge;                    /* '<S46>/Merge' */
  real_T s43_Gain2;                    /* '<S43>/Gain2' */
  real_T s47_Merge;                    /* '<S47>/Merge' */
  real_T s43_ReadCANMessage2;          /* '<S43>/Read CAN Message2' */
  real_T s43_Gain;                     /* '<S43>/Gain' */
  real_T s52_Merge;                    /* '<S52>/Merge' */
  real_T s15_Sum;                      /* '<S15>/Sum' */
  real_T s15_Product;                  /* '<S15>/Product' */
  real_T s21_Merge;                    /* '<S21>/Merge' */
  real_T s17_motohawk_interpolation_2d;/* '<S17>/motohawk_interpolation_2d' */
  real_T s17_motohawk_interpolation_1d;/* '<S17>/motohawk_interpolation_1d' */
  real_T s38_Switch;                   /* '<S38>/Switch' */
  real_T s40_Merge;                    /* '<S40>/Merge' */
  real_T s87_motohawk_interpolation_2d;/* '<S87>/motohawk_interpolation_2d' */
  real_T s87_motohawk_interpolation_2d1;/* '<S87>/motohawk_interpolation_2d1' */
  real_T s87_motohawk_interpolation_2d2;/* '<S87>/motohawk_interpolation_2d2' */
  real_T s87_motohawk_interpolation_2d3;/* '<S87>/motohawk_interpolation_2d3' */
  real_T s31_Merge;                    /* '<S31>/Merge' */
  real_T s30_Merge;                    /* '<S30>/Merge' */
  real_T s43_ReadCANMessage1;          /* '<S43>/Read CAN Message1' */
  real_T s45_ReadCANMessage_o1;        /* '<S45>/Read CAN Message' */
  real_T s43_ReadCANMessage;           /* '<S43>/Read CAN Message' */
  real_T s39_voltageOut;               /* '<S17>/SOC States' */
  real_T s39_currState;                /* '<S17>/SOC States' */
  real_T s29_state;                    /* '<S16>/Precharge State' */
  real_T s29_delay3Out;                /* '<S16>/Precharge State' */
  real_T s29_delay5Out;                /* '<S16>/Precharge State' */
  real_T s28_PackState;                /* '<S16>/Pack State' */
  real_T s20_amps;                     /* '<S15>/Curret Calculation Instantaneos' */
  real_T s19_Offset_Out;               /* '<S15>/Amp Clamp Offsets' */
  uint32_T s88_DataTypeConversion3;    /* '<S88>/Data Type Conversion3' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s45_DutyCycle;               /* '<S45>/Data Type Conversion2' */
  uint16_T s44_motohawk_ain;           /* '<S44>/motohawk_ain' */
  uint16_T s44_motohawk_ain1;          /* '<S44>/motohawk_ain1' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  uint8_T s89_Compare;                 /* '<S89>/Compare' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s24_Negative;              /* '<S16>/Coil2State' */
  boolean_T s24_Positive;              /* '<S16>/Coil2State' */
  boolean_T s24_PreChargeCoil;         /* '<S16>/Coil2State' */
  boolean_T s24_PreChargeEnable;       /* '<S16>/Coil2State' */
  boolean_T s24_PreChargeFreq;         /* '<S16>/Coil2State' */
  boolean_T s24_BatteryOn;             /* '<S16>/Coil2State' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_Delay3Chart_BatteryController_Rev1 s26_sf_Delay5Chart;/* '<S26>/Delay 5 Chart' */
  rtB_Delay3Chart_BatteryController_Rev1 s25_sf_Delay3Chart;/* '<S25>/Delay 3 Chart' */
} BlockIO_BatteryController_Rev1;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s126_UnitDelay_DSTATE;        /* '<S126>/Unit Delay' */
  real_T s125_UnitDelay_DSTATE;        /* '<S125>/Unit Delay' */
  real_T s18_UnitDelay1_DSTATE;        /* '<S18>/Unit Delay1' */
  real_T s38_UnitDelay1_DSTATE;        /* '<S38>/Unit Delay1' */
  real_T s39_tick;                     /* '<S17>/SOC States' */
  real_T s24_Freq;                     /* '<S16>/Coil2State' */
  uint32_T s125_motohawk_delta_time_DWORK1;/* '<S125>/motohawk_delta_time' */
  uint32_T s126_motohawk_delta_time_DWORK1;/* '<S126>/motohawk_delta_time' */
  uint16_T s219_UnitDelay_DSTATE;      /* '<S219>/Unit Delay' */
  uint16_T s219_UnitDelay1_DSTATE;     /* '<S219>/Unit Delay1' */
  boolean_T s27_UnitDelay4_DSTATE;     /* '<S27>/Unit Delay4' */
  boolean_T s27_UnitDelay_DSTATE;      /* '<S27>/Unit Delay' */
  boolean_T s27_UnitDelay1_DSTATE;     /* '<S27>/Unit Delay1' */
  boolean_T s27_UnitDelay2_DSTATE;     /* '<S27>/Unit Delay2' */
  boolean_T s27_UnitDelay3_DSTATE;     /* '<S27>/Unit Delay3' */
  boolean_T s220_UnitDelay_DSTATE;     /* '<S220>/Unit Delay' */
  boolean_T s230_UnitDelay_DSTATE;     /* '<S230>/Unit Delay' */
  boolean_T s218_UnitDelay5_DSTATE;    /* '<S218>/Unit Delay5' */
  boolean_T s218_UnitDelay2_DSTATE;    /* '<S218>/Unit Delay2' */
  boolean_T s218_UnitDelay_DSTATE;     /* '<S218>/Unit Delay' */
  boolean_T s218_UnitDelay1_DSTATE;    /* '<S218>/Unit Delay1' */
  boolean_T s218_UnitDelay3_DSTATE;    /* '<S218>/Unit Delay3' */
  boolean_T s218_UnitDelay4_DSTATE;    /* '<S218>/Unit Delay4' */
  uint8_T s1_motohawk_trigger1_DWORK1; /* '<S1>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger1_DWORK1; /* '<S5>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger2_DWORK1; /* '<S5>/motohawk_trigger2' */
  uint8_T s5_motohawk_trigger3_DWORK1; /* '<S5>/motohawk_trigger3' */
  uint8_T s5_motohawk_trigger4_DWORK1; /* '<S5>/motohawk_trigger4' */
  uint8_T s5_motohawk_trigger5_DWORK1; /* '<S5>/motohawk_trigger5' */
  uint8_T s5_motohawk_trigger6_DWORK1; /* '<S5>/motohawk_trigger6' */
  uint8_T s5_motohawk_trigger7_DWORK1; /* '<S5>/motohawk_trigger7' */
  uint8_T s4_motohawk_trigger1_DWORK1; /* '<S4>/motohawk_trigger1' */
  uint8_T s39_is_active_c4_BatteryController_Rev1;/* '<S17>/SOC States' */
  uint8_T s39_is_c4_BatteryController_Rev1;/* '<S17>/SOC States' */
  uint8_T s29_is_active_c8_BatteryController_Rev1;/* '<S16>/Precharge State' */
  uint8_T s29_is_c8_BatteryController_Rev1;/* '<S16>/Precharge State' */
  uint8_T s24_is_active_c1_BatteryController_Rev1;/* '<S16>/Coil2State' */
  uint8_T s24_is_c1_BatteryController_Rev1;/* '<S16>/Coil2State' */
  uint8_T s19_is_active_c2_BatteryController_Rev1;/* '<S15>/Amp Clamp Offsets' */
  uint8_T s19_is_c2_BatteryController_Rev1;/* '<S15>/Amp Clamp Offsets' */
  rtDW_Delay3Chart_BatteryController_Rev1 s26_sf_Delay5Chart;/* '<S26>/Delay 5 Chart' */
  rtDW_Delay3Chart_BatteryController_Rev1 s25_sf_Delay3Chart;/* '<S25>/Delay 3 Chart' */
} D_Work_BatteryController_Rev1;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SaveNVondisconnect_Trig_ZCE;/* '<S45>/Save NV on disconnect' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S218>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S218>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S218>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S218>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S222>/Clear' */
  ZCSigState Clear_Trig_ZCE_d;         /* '<S221>/Clear' */
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
 * '<S1>'   : BatteryController_Rev1/CCP CAN Protocol
 * '<S2>'   : BatteryController_Rev1/Foreground
 * '<S3>'   : BatteryController_Rev1/Main Power Relay
 * '<S4>'   : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S5>'   : BatteryController_Rev1/CCP CAN Protocol/CCP Triggers
 * '<S6>'   : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S7>'   : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S8>'   : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S9>'   : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S10>'  : BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S11>'  : BatteryController_Rev1/Foreground/Battery
 * '<S12>'  : BatteryController_Rev1/Foreground/Battery/Control
 * '<S13>'  : BatteryController_Rev1/Foreground/Battery/Inputs
 * '<S14>'  : BatteryController_Rev1/Foreground/Battery/Outputs
 * '<S15>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp
 * '<S16>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States
 * '<S17>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC
 * '<S18>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Amp Clamp Conditioning
 * '<S19>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Amp Clamp Offsets
 * '<S20>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/Curret Calculation Instantaneos
 * '<S21>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9
 * '<S22>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/NewValue
 * '<S23>'  : BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/OldValue
 * '<S24>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Coil2State
 * '<S25>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay3
 * '<S26>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay5
 * '<S27>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delays
 * '<S28>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Pack State
 * '<S29>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Precharge State
 * '<S30>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1
 * '<S31>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9
 * '<S32>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay3/Delay 3 Chart
 * '<S33>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/Delay5/Delay 5 Chart
 * '<S34>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/NewValue
 * '<S35>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/OldValue
 * '<S36>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/NewValue
 * '<S37>'  : BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/OldValue
 * '<S38>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/SOC Conditioning
 * '<S39>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/SOC States
 * '<S40>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9
 * '<S41>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/NewValue
 * '<S42>'  : BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/OldValue
 * '<S43>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS
 * '<S44>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp
 * '<S45>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors
 * '<S46>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3
 * '<S47>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4
 * '<S48>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5
 * '<S49>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6
 * '<S50>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7
 * '<S51>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8
 * '<S52>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9
 * '<S53>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/NewValue
 * '<S54>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/OldValue
 * '<S55>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/NewValue
 * '<S56>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/OldValue
 * '<S57>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/NewValue
 * '<S58>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/OldValue
 * '<S59>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/NewValue
 * '<S60>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/OldValue
 * '<S61>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/NewValue
 * '<S62>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/OldValue
 * '<S63>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/NewValue
 * '<S64>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/OldValue
 * '<S65>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/NewValue
 * '<S66>'  : BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/OldValue
 * '<S67>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1
 * '<S68>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9
 * '<S69>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/NewValue
 * '<S70>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/OldValue
 * '<S71>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/NewValue
 * '<S72>'  : BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/OldValue
 * '<S73>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect
 * '<S74>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10
 * '<S75>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11
 * '<S76>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8
 * '<S77>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9
 * '<S78>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect/Save NV Vars one tick before MPRD off
 * '<S79>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/NewValue
 * '<S80>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/OldValue
 * '<S81>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/NewValue
 * '<S82>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/OldValue
 * '<S83>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/NewValue
 * '<S84>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/OldValue
 * '<S85>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/NewValue
 * '<S86>'  : BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/OldValue
 * '<S87>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery
 * '<S88>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors
 * '<S89>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/Compare To Zero
 * '<S90>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours
 * '<S91>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1
 * '<S92>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10
 * '<S93>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11
 * '<S94>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12
 * '<S95>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13
 * '<S96>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14
 * '<S97>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15
 * '<S98>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16
 * '<S99>'  : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17
 * '<S100>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18
 * '<S101>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19
 * '<S102>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2
 * '<S103>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20
 * '<S104>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21
 * '<S105>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22
 * '<S106>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23
 * '<S107>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24
 * '<S108>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25
 * '<S109>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26
 * '<S110>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27
 * '<S111>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28
 * '<S112>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29
 * '<S113>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3
 * '<S114>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30
 * '<S115>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31
 * '<S116>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32
 * '<S117>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33
 * '<S118>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34
 * '<S119>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4
 * '<S120>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5
 * '<S121>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6
 * '<S122>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7
 * '<S123>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8
 * '<S124>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9
 * '<S125>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorIn
 * '<S126>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorOut
 * '<S127>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorIn/Saturation
 * '<S128>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/TripAmpHours/IntegratorOut/Saturation
 * '<S129>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/NewValue
 * '<S130>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/OldValue
 * '<S131>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/NewValue
 * '<S132>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/OldValue
 * '<S133>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/NewValue
 * '<S134>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/OldValue
 * '<S135>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/NewValue
 * '<S136>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/OldValue
 * '<S137>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/NewValue
 * '<S138>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/OldValue
 * '<S139>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/NewValue
 * '<S140>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/OldValue
 * '<S141>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/NewValue
 * '<S142>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/OldValue
 * '<S143>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/NewValue
 * '<S144>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/OldValue
 * '<S145>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/NewValue
 * '<S146>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/OldValue
 * '<S147>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/NewValue
 * '<S148>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/OldValue
 * '<S149>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/NewValue
 * '<S150>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/OldValue
 * '<S151>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/NewValue
 * '<S152>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/OldValue
 * '<S153>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/NewValue
 * '<S154>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/OldValue
 * '<S155>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/NewValue
 * '<S156>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/OldValue
 * '<S157>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/NewValue
 * '<S158>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/OldValue
 * '<S159>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/NewValue
 * '<S160>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/OldValue
 * '<S161>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/NewValue
 * '<S162>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/OldValue
 * '<S163>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/NewValue
 * '<S164>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/OldValue
 * '<S165>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/NewValue
 * '<S166>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/OldValue
 * '<S167>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/NewValue
 * '<S168>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/OldValue
 * '<S169>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/NewValue
 * '<S170>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/OldValue
 * '<S171>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/NewValue
 * '<S172>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/OldValue
 * '<S173>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/NewValue
 * '<S174>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/OldValue
 * '<S175>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/NewValue
 * '<S176>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/OldValue
 * '<S177>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/NewValue
 * '<S178>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/OldValue
 * '<S179>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/NewValue
 * '<S180>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/OldValue
 * '<S181>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/NewValue
 * '<S182>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/OldValue
 * '<S183>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/NewValue
 * '<S184>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/OldValue
 * '<S185>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/NewValue
 * '<S186>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/OldValue
 * '<S187>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/NewValue
 * '<S188>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/OldValue
 * '<S189>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/NewValue
 * '<S190>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/OldValue
 * '<S191>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/NewValue
 * '<S192>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/OldValue
 * '<S193>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/NewValue
 * '<S194>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/OldValue
 * '<S195>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/NewValue
 * '<S196>' : BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/OldValue
 * '<S197>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1
 * '<S198>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2
 * '<S199>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3
 * '<S200>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4
 * '<S201>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5
 * '<S202>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6
 * '<S203>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7
 * '<S204>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/NewValue
 * '<S205>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/OldValue
 * '<S206>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/NewValue
 * '<S207>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/OldValue
 * '<S208>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/NewValue
 * '<S209>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/OldValue
 * '<S210>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/NewValue
 * '<S211>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/OldValue
 * '<S212>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/NewValue
 * '<S213>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/OldValue
 * '<S214>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/NewValue
 * '<S215>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/OldValue
 * '<S216>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/NewValue
 * '<S217>' : BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/OldValue
 * '<S218>' : BatteryController_Rev1/Main Power Relay/Background
 * '<S219>' : BatteryController_Rev1/Main Power Relay/Background/Delay
 * '<S220>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Boolean
 * '<S221>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S222>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S223>' : BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S224>' : BatteryController_Rev1/Main Power Relay/Background/Processor Reboot
 * '<S225>' : BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S226>' : BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S227>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs
 * '<S228>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S229>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_store_nvmem
 * '<S230>' : BatteryController_Rev1/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S231>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S232>' : BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S233>' : BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S234>' : BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S235>' : BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S236>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S237>' : BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BatteryController_Rev1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
