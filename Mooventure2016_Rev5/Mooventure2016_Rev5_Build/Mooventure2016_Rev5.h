/*
 * File: Mooventure2016_Rev5.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2067
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Apr 07 15:01:22 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Mooventure2016_Rev5_h_
#define RTW_HEADER_Mooventure2016_Rev5_h_
#ifndef Mooventure2016_Rev5_COMMON_INCLUDES_
# define Mooventure2016_Rev5_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "Application.h"
#endif                                 /* Mooventure2016_Rev5_COMMON_INCLUDES_ */

#include "Mooventure2016_Rev5_types.h"

/* Child system includes */
#include "Mooventure2016_Rev5_Foreground.h"

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
  real_T s177_IPT_CurrentUsed;         /* '<S177>/Read CAN Message3' */
  real_T s177_IPT_CurrentRequest;      /* '<S177>/Read CAN Message3' */
  real_T s177_IPT_MotorSpeed;          /* '<S177>/Read CAN Message3' */
  real_T s177_IPT_WheelTorqueDelivered;/* '<S177>/Read CAN Message3' */
  real_T s177_IPT_CurrentLimit;        /* '<S177>/Read CAN Message3' */
  real_T s177_IPT_Antishudder;         /* '<S177>/Read CAN Message3' */
  real_T s327_Merge;                   /* '<S327>/Merge' */
  real_T s122_Product;                 /* '<S122>/Product' */
  real_T s120_Sum2;                    /* '<S120>/Sum2' */
  real_T s124_Product;                 /* '<S124>/Product' */
  real_T s120_Product2;                /* '<S120>/Product2' */
  real_T s125_Switch1;                 /* '<S125>/Switch1' */
  real_T s127_MinMax1;                 /* '<S127>/MinMax1' */
  real_T s149_Switch1;                 /* '<S149>/Switch1' */
  real_T s147_Sum1;                    /* '<S147>/Sum1' */
  real_T s174_Shift_Position;          /* '<S174>/Read CAN Message1' */
  real_T s174_Brake_Position;          /* '<S174>/Read CAN Message3' */
  real_T s170_JCS_PackIdentifier;      /* '<S170>/Read CAN Message' */
  real_T s170_PackState;               /* '<S170>/Read CAN Message' */
  real_T s170_PrechargeState;          /* '<S170>/Read CAN Message' */
  real_T s170_HVIL_Status;             /* '<S170>/Read CAN Message' */
  real_T s170_IsolationStatus;         /* '<S170>/Read CAN Message' */
  real_T s170_WakeSignal;              /* '<S170>/Read CAN Message' */
  real_T s170_SleepInhibited;          /* '<S170>/Read CAN Message' */
  real_T s170_MILState;                /* '<S170>/Read CAN Message' */
  real_T s170_StateOfCharge;           /* '<S170>/Read CAN Message' */
  real_T s170_PS_RollingCounter;       /* '<S170>/Read CAN Message' */
  real_T s98_Torque_Direction;         /* '<S98>/Merge' */
  real_T s10_motor_Torque;             /* '<S10>/Merge1' */
  real_T s98_IPT_Torque_Request;       /* '<S98>/Product' */
  real_T s98_Saturation;               /* '<S98>/Saturation' */
  real_T s101_Switch;                  /* '<S101>/Switch' */
  real_T s342_Pct_whl_trq_desired;     /* '<S342>/Product' */
  real_T s342_Commanded_mot_torq;      /* '<S342>/Product1' */
  real_T s170_BatteryVoltage;          /* '<S170>/Read CAN Message3' */
  real_T s170_BatteryCurrent;          /* '<S170>/Read CAN Message3' */
  real_T s170_BusVoltage;              /* '<S170>/Read CAN Message3' */
  real_T s170_PVC_RollingCounter;      /* '<S170>/Read CAN Message3' */
  real_T s171_HEV_CC_Defrost_Mode;     /* '<S171>/Read CAN Message3' */
  real_T s171_AC_Engaged_CMD;          /* '<S171>/Read CAN Message3' */
  real_T s175_InputVoltage;            /* '<S175>/Read CAN Message2' */
  real_T s175_OutputVoltage;           /* '<S175>/Read CAN Message2' */
  real_T s175_InputCurrentLimitMax;    /* '<S175>/Read CAN Message2' */
  real_T s175_InputCurrent;            /* '<S175>/Read CAN Message2' */
  real_T s175_OutputCurrent;           /* '<S175>/Read CAN Message2' */
  real_T s175_Eaton_HV_Charger_Temperature;/* '<S175>/Read CAN Message2' */
  real_T s175_ChargerState;            /* '<S175>/Read CAN Message2' */
  real_T s175_MessageCounter;          /* '<S175>/Read CAN Message2' */
  real_T s175_MessageChecksum;         /* '<S175>/Read CAN Message2' */
  real_T s177_IPT_InverterTemperature; /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_MotorTemperature;    /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_MaxTorqueAvailGen;   /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_MaxTorqueAvailMotor; /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_HVDCVoltage;         /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_ErrorCategory;       /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_IPTReady;            /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_IPTAwake;            /* '<S177>/Read CAN Message1' */
  real_T s177_IPT_MaxWasteAvailable;   /* '<S177>/Read CAN Message1' */
  real_T s170_MaxCellVoltage;          /* '<S170>/Read CAN Message4' */
  real_T s170_MinCellVoltage;          /* '<S170>/Read CAN Message4' */
  real_T s170_MaxCellTemperature;      /* '<S170>/Read CAN Message4' */
  real_T s170_MinCellTemperature;      /* '<S170>/Read CAN Message4' */
  real_T s170_CoolantTemperature;      /* '<S170>/Read CAN Message4' */
  real_T s170_DPI_RollingCounter;      /* '<S170>/Read CAN Message4' */
  real_T s174_DRIVER_1;                /* '<S174>/Read CAN Message6' */
  real_T s174_DRIVER_10;               /* '<S174>/Read CAN Message6' */
  real_T s174_PASSENGER_1;             /* '<S174>/Read CAN Message6' */
  real_T s174_PASSENGER_10;            /* '<S174>/Read CAN Message6' */
  real_T s176_ReadCANMessage_o1;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o2;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o3;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o4;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o5;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o6;       /* '<S176>/Read CAN Message' */
  real_T s176_ReadCANMessage_o7;       /* '<S176>/Read CAN Message' */
  real_T s347_Engine_Speed;            /* '<S347>/Abs1' */
  real_T s347_Current;                 /* '<S347>/Sum' */
  real_T s347_Vehi_Speed;              /* '<S347>/Abs2' */
  real_T s347_ODO_Count;               /* '<S347>/motohawk_data_read5' */
  real_T s170_TripAmpHoursIn;          /* '<S170>/Read CAN Message5' */
  real_T s170_TripAmpHoursOut;         /* '<S170>/Read CAN Message5' */
  real_T s170_StateOfChargeMax;        /* '<S170>/Read CAN Message5' */
  real_T s170_StateOfChargeMin;        /* '<S170>/Read CAN Message5' */
  real_T s170_TAH_RollingCounter;      /* '<S170>/Read CAN Message5' */
  real_T s34_Merge;                    /* '<S34>/Merge' */
  real_T s237_Merge;                   /* '<S237>/Merge' */
  real_T s349_Vehicle_Speed;           /* '<S349>/Product' */
  real_T s37_Merge;                    /* '<S37>/Merge' */
  real_T s36_Merge;                    /* '<S36>/Merge' */
  real_T s350_VSC_WheelTorqueRequest;  /* '<S350>/Product' */
  real_T s10_motor_Enable;             /* '<S10>/Merge2' */
  real_T s640_Merge;                   /* '<S640>/Merge' */
  real_T s641_Merge;                   /* '<S641>/Merge' */
  real_T s170_MaximumDischargePower_10s;/* '<S170>/Read CAN Message1' */
  real_T s170_MaximumRegenPower_10s;   /* '<S170>/Read CAN Message1' */
  real_T s170_IsolationLevel;          /* '<S170>/Read CAN Message1' */
  real_T s170_ActiveDTC;               /* '<S170>/Read CAN Message1' */
  real_T s170_PPL10s_RollingCounter;   /* '<S170>/Read CAN Message1' */
  real_T s235_Merge;                   /* '<S235>/Merge' */
  real_T s174_Button_Pressed;          /* '<S174>/Read CAN Message4' */
  real_T s177_IPT_DCErrorCategory;     /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCLVOn;              /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCLVGeneralError;    /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCLVMaxPower;        /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCLVBusCurrent;      /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCLVBusVoltage;      /* '<S177>/Read CAN Message2' */
  real_T s177_IPT_DCHVBusCurrent;      /* '<S177>/Read CAN Message2' */
  real_T s177_Heading;                 /* '<S177>/Read CAN Message4' */
  real_T s177_Speed;                   /* '<S177>/Read CAN Message4' */
  real_T s177_Altitude;                /* '<S177>/Read CAN Message4' */
  real_T s177_GPSQuality;              /* '<S177>/Read CAN Message4' */
  real_T s177_DateTime;                /* '<S177>/Read CAN Message4' */
  real_T s170_LifeTimeAmpHoursOut;     /* '<S170>/Read CAN Message6' */
  real_T s170_LTAHI_RollingCounter;    /* '<S170>/Read CAN Message6' */
  real_T s170_MaximumDischargePower_Continuous;/* '<S170>/Read CAN Message2' */
  real_T s170_MaximumRegenPower_Continuous;/* '<S170>/Read CAN Message2' */
  real_T s170_PPLCont_RollingCounter;  /* '<S170>/Read CAN Message2' */
  real_T s168_LF_Wheel_Rolling_Count;  /* '<S168>/Read CAN Message' */
  real_T s168_RT_Wheel_Rolling_Count;  /* '<S168>/Read CAN Message' */
  real_T s168_Wheel_Rolling_Timestamp; /* '<S168>/Read CAN Message' */
  real_T s168_TCS_ENG_EVNT_IN_PROGRESS;/* '<S168>/Read CAN Message2' */
  real_T s168_Front_left_whl_speed;    /* '<S168>/Read CAN Message1' */
  real_T s168_Front_right_whl_speed;   /* '<S168>/Read CAN Message1' */
  real_T s168_Rear_left_whl_speed;     /* '<S168>/Read CAN Message1' */
  real_T s168_Rear_right_whl_speed;    /* '<S168>/Read CAN Message1' */
  real_T s178_STR_WHL_ANGLE_CNTR_FND;  /* '<S178>/Read CAN Message' */
  real_T s178_STR_WHL_ANGLE;           /* '<S178>/Read CAN Message' */
  real_T s178_RELATIVE_STR_WHL_ANGLE;  /* '<S178>/Read CAN Message' */
  real_T s234_Merge;                   /* '<S234>/Merge' */
  real_T s464_CEL;                     /* '<S347>/Embedded MATLAB Function' */
  real_T s463_engTemp;                 /* '<S347>/Chart' */
  real_T s463_transTemp;               /* '<S347>/Chart' */
  real_T s463_timerOut;                /* '<S347>/Chart' */
  real_T s388_fan1;                    /* '<S345>/Fan Adapter' */
  real_T s388_fan2;                    /* '<S345>/Fan Adapter' */
  real_T s388_fan3;                    /* '<S345>/Fan Adapter' */
  real_T s352_dirOut;                  /* '<S342>/Shift Position Conditioner' */
  real_T s277_passengerTemp;           /* '<S174>/Embedded MATLAB Function2' */
  real_T s276_driverTemp;              /* '<S174>/Embedded MATLAB Function1' */
  real_T s275_posOut;                  /* '<S174>/Embedded MATLAB Function' */
  real_T s264_Out;                     /* '<S173>/Chart' */
  real_T s215_temp_reading;            /* '<S213>/Embedded MATLAB Function' */
  real_T s96_state;                    /* '<S10>/Embedded MATLAB Function' */
  real_T s30_Genset_Enable;            /* '<S8>/Chart' */
  real_T s30_Genset_Load;              /* '<S8>/Chart' */
  real_T s30_Genset_RPM;               /* '<S8>/Chart' */
  real_T s30_Genset_Throttle;          /* '<S8>/Chart' */
  real_T s21_radBlend;                 /* '<S7>/Embedded MATLAB Function' */
  real_T s20_RadiatorBlend;            /* '<S7>/BlendValving' */
  real_T s20_HeaterCoreBlend;          /* '<S7>/BlendValving' */
  uint32_T s177_AgeCount;              /* '<S177>/Read CAN Message3' */
  uint32_T s174_AgeCount;              /* '<S174>/Read CAN Message1' */
  uint32_T s174_AgeCount_j;            /* '<S174>/Read CAN Message3' */
  uint32_T s170_AgeCount;              /* '<S170>/Read CAN Message' */
  uint32_T s175_AgeCount;              /* '<S175>/Read CAN Message2' */
  uint32_T s177_AgeCount_m;            /* '<S177>/Read CAN Message1' */
  uint32_T s177_AgeCount_j;            /* '<S177>/Read CAN Message2' */
  uint32_T s177_AgeCount_o;            /* '<S177>/Read CAN Message4' */
  uint32_T s168_AgeCount;              /* '<S168>/Read CAN Message' */
  uint32_T s168_AgeCount_e;            /* '<S168>/Read CAN Message2' */
  uint32_T s168_AgeCount_n;            /* '<S168>/Read CAN Message1' */
  uint32_T s178_AgeCount;              /* '<S178>/Read CAN Message' */
  uint16_T s173_RawSignal;             /* '<S173>/motohawk_ain4' */
  uint16_T s174_Throttle_Position;     /* '<S174>/motohawk_ain4' */
  uint16_T s213_motohawk_ain2_o1;      /* '<S213>/motohawk_ain2' */
  uint16_T s213_motohawk_ain4_o1;      /* '<S213>/motohawk_ain4' */
  uint16_T s213_motohawk_ain1_o1;      /* '<S213>/motohawk_ain1' */
  uint16_T s214_motohawk_ain4_o1;      /* '<S214>/motohawk_ain4' */
  int8_T s343_ConnectCommand;          /* '<S343>/Data Type Conversion' */
  boolean_T s170_CellBalanceingActive; /* '<S170>/Read CAN Message' */
  boolean_T s14_Merge;                 /* '<S14>/Merge' */
  boolean_T s13_LogicalOperator2;      /* '<S13>/Logical Operator2' */
  boolean_T s343_IsolationMeasurementEnable;/* '<S343>/Logical Operator' */
  boolean_T s175_IgnitionStatus;       /* '<S175>/Read CAN Message2' */
  boolean_T s175_FaultSeverityIndicator;/* '<S175>/Read CAN Message2' */
  boolean_T s177_IPT_MotorReady;       /* '<S177>/Read CAN Message1' */
  boolean_T s7_VeryCold;               /* '<S7>/Very Cold' */
  boolean_T s7_Warmed;                 /* '<S7>/Warmed' */
  boolean_T s345_DataTypeConversion5;  /* '<S345>/Data Type Conversion5' */
  boolean_T s345_LogicalOperator8;     /* '<S345>/Logical Operator8' */
  boolean_T s7_LogicalOperator1;       /* '<S7>/Logical Operator1' */
  boolean_T s25_Merge;                 /* '<S25>/Merge' */
  boolean_T s7_LogicalOperator2;       /* '<S7>/Logical Operator2' */
  boolean_T s24_Merge;                 /* '<S24>/Merge' */
  boolean_T s345_DataTypeConversion4;  /* '<S345>/Data Type Conversion4' */
  boolean_T s345_DataTypeConversion1;  /* '<S345>/Data Type Conversion1' */
  boolean_T s345_DataTypeConversion2;  /* '<S345>/Data Type Conversion2' */
  boolean_T s345_LogicalOperator5;     /* '<S345>/Logical Operator5' */
  boolean_T s345_LogicalOperator6;     /* '<S345>/Logical Operator6' */
  boolean_T s345_LogicalOperator7;     /* '<S345>/Logical Operator7' */
  boolean_T s347_Regen_Brakes_Disabled;/* '<S347>/motohawk_fault_action2' */
  boolean_T s347_HV_Elec_Sys_Warm;     /* '<S347>/motohawk_fault_action1' */
  boolean_T s347_Repair_Wrench;        /* '<S347>/motohawk_fault_action' */
  boolean_T s347_Battery_Light;        /* '<S347>/motohawk_fault_action4' */
  boolean_T s348_ChargeSystemFault;    /* '<S348>/motohawk_fault_action' */
  boolean_T s348_ChargeComplete;       /* '<S348>/Logical Operator2' */
  boolean_T s348_ChargeEnable;         /* '<S348>/Logical Operator1' */
  boolean_T s349_Gen_Enable;           /* '<S349>/Logical Operator' */
  boolean_T s350_VSC_IPTEnable;        /* '<S350>/motohawk_data_read3' */
  boolean_T s350_VSC_DCDCEnable;       /* '<S350>/Logical Operator1' */
  boolean_T s628_MotorEnable;          /* '<S350>/OnOff Delay' */
  boolean_T s628_IPTWake;              /* '<S350>/OnOff Delay' */
  boolean_T s628_IPTEnable;            /* '<S350>/OnOff Delay' */
  boolean_T s468_VehicleReadyOutput;   /* '<S347>/PowerSteering' */
  boolean_T s485_write;                /* '<S465>/Bar Chart Reset' */
  boolean_T s442_Coil3State;           /* '<S346>/Coil2State1' */
  boolean_T s441_Coil2State;           /* '<S346>/Coil2State' */
  boolean_T s440_Coil1State;           /* '<S346>/Coil1State' */
  boolean_T s167_Vehicle_Enable;       /* '<S11>/Chart' */
  boolean_T s167_Vehicle_Ready;        /* '<S11>/Chart' */
  boolean_T s167_Torque_Enable;        /* '<S11>/Chart' */
  boolean_T s167_Keyed_Relay;          /* '<S11>/Chart' */
  boolean_T s112_System;               /* '<S94>/SystemState' */
  boolean_T s23_PumpOn;                /* '<S7>/PumpState' */
  boolean_T s20_Heat1;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat2;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat3;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat4;                 /* '<S7>/BlendValving' */
  boolean_T s20_RadiatorPump;          /* '<S7>/BlendValving' */
  boolean_T s20_HeaterCorePump;        /* '<S7>/BlendValving' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 s345_sf_RadiatorMotionControl;/* '<S345>/Radiator Motion Control' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5
    s345_sf_HeaterCoreMotionControl;   /* '<S345>/Heater Core Motion Control' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s342_sf_DataCorrectionMotorABS;    /* '<S342>/Data Correction Motor ABS' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s99_sf_GasPedalScaling;/* '<S99>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s99_sf_Chart;/* '<S99>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s99_sf_BrakePedalScaling;/* '<S99>/Brake Pedal Scaling' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s95_sf_GasPedalScaling;/* '<S95>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s95_sf_Chart;/* '<S95>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s95_sf_BrakePedalScaling;/* '<S95>/Brake Pedal Scaling' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s93_sf_GasPedalScaling;/* '<S93>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s93_sf_Chart;/* '<S93>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s93_sf_BrakePedalScaling;/* '<S93>/Brake Pedal Scaling' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 s81_sf_DataCorrection;/* '<S81>/Data Correction' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s76_sf_DataCorrectionMotorFault;   /* '<S76>/Data Correction Motor Fault' */
} BlockIO_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s122_UnitDelay_DSTATE;        /* '<S122>/Unit Delay' */
  real_T s123_UnitDelay_DSTATE;        /* '<S123>/Unit Delay' */
  real_T s124_UnitDelay_DSTATE;        /* '<S124>/Unit Delay' */
  real_T s125_UnitDelay_DSTATE;        /* '<S125>/Unit Delay' */
  real_T s149_UnitDelay_DSTATE;        /* '<S149>/Unit Delay' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s240_UnitDelay_DSTATE;        /* '<S240>/Unit Delay' */
  real_T s155_UnitDelay_DSTATE;        /* '<S155>/Unit Delay' */
  real_T s242_UnitDelay_DSTATE;        /* '<S242>/Unit Delay' */
  real_T s222_UnitDelay_DSTATE;        /* '<S222>/Unit Delay' */
  real_T s221_UnitDelay_DSTATE;        /* '<S221>/Unit Delay' */
  real_T s56_UnitDelay1_DSTATE;        /* '<S56>/Unit Delay1' */
  real_T s56_UnitDelay_DSTATE;         /* '<S56>/Unit Delay' */
  real_T s60_UnitDelay_DSTATE;         /* '<S60>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s88_UnitDelay_DSTATE;         /* '<S88>/Unit Delay' */
  real_T s89_UnitDelay_DSTATE;         /* '<S89>/Unit Delay' */
  real_T s90_UnitDelay_DSTATE;         /* '<S90>/Unit Delay' */
  real_T s91_UnitDelay_DSTATE;         /* '<S91>/Unit Delay' */
  real_T s81_UnitDelay_DSTATE;         /* '<S81>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s485_count;                   /* '<S465>/Bar Chart Reset' */
  real_T s167_count;                   /* '<S11>/Chart' */
  int32_T s628_motorcount;             /* '<S350>/OnOff Delay' */
  uint32_T s270_motohawk_delta_time_DWORK1;/* '<S270>/motohawk_delta_time' */
  uint32_T s274_motohawk_delta_time_DWORK1;/* '<S274>/motohawk_delta_time' */
  uint32_T s144_motohawk_delta_time_DWORK1;/* '<S144>/motohawk_delta_time' */
  uint32_T s140_motohawk_delta_time_DWORK1;/* '<S140>/motohawk_delta_time' */
  uint32_T s16_motohawk_delta_time_DWORK1;/* '<S16>/motohawk_delta_time' */
  uint32_T s15_motohawk_delta_time_DWORK1;/* '<S15>/motohawk_delta_time' */
  uint32_T s217_motohawk_delta_time_DWORK1;/* '<S217>/motohawk_delta_time' */
  uint32_T s409_motohawk_delta_time_DWORK1;/* '<S409>/motohawk_delta_time' */
  uint32_T s216_motohawk_delta_time_DWORK1;/* '<S216>/motohawk_delta_time' */
  uint32_T s406_motohawk_delta_time_DWORK1;/* '<S406>/motohawk_delta_time' */
  uint32_T s407_motohawk_delta_time_DWORK1;/* '<S407>/motohawk_delta_time' */
  uint32_T s408_motohawk_delta_time_DWORK1;/* '<S408>/motohawk_delta_time' */
  uint32_T s466_motohawk_delta_time_DWORK1;/* '<S466>/motohawk_delta_time' */
  uint32_T s39_motohawk_delta_time_DWORK1;/* '<S39>/motohawk_delta_time' */
  uint32_T s40_motohawk_delta_time_DWORK1;/* '<S40>/motohawk_delta_time' */
  uint32_T s41_motohawk_delta_time_DWORK1;/* '<S41>/motohawk_delta_time' */
  uint32_T s42_motohawk_delta_time_DWORK1;/* '<S42>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s38_motohawk_delta_time_DWORK1;/* '<S38>/motohawk_delta_time' */
  uint32_T s61_motohawk_delta_time_DWORK1;/* '<S61>/motohawk_delta_time' */
  uint32_T s62_motohawk_delta_time_DWORK1;/* '<S62>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s64_motohawk_delta_time_DWORK1;/* '<S64>/motohawk_delta_time' */
  uint32_T s65_motohawk_delta_time_DWORK1;/* '<S65>/motohawk_delta_time' */
  uint32_T s66_motohawk_delta_time_DWORK1;/* '<S66>/motohawk_delta_time' */
  uint32_T s273_motohawk_delta_time_DWORK1;/* '<S273>/motohawk_delta_time' */
  uint32_T s272_motohawk_delta_time_DWORK1;/* '<S272>/motohawk_delta_time' */
  uint32_T s271_motohawk_delta_time_DWORK1;/* '<S271>/motohawk_delta_time' */
  uint32_T s88_motohawk_delta_time_DWORK1;/* '<S88>/motohawk_delta_time' */
  uint32_T s89_motohawk_delta_time_DWORK1;/* '<S89>/motohawk_delta_time' */
  uint32_T s90_motohawk_delta_time_DWORK1;/* '<S90>/motohawk_delta_time' */
  uint32_T s91_motohawk_delta_time_DWORK1;/* '<S91>/motohawk_delta_time' */
  uint32_T s17_motohawk_delta_time_DWORK1;/* '<S17>/motohawk_delta_time' */
  uint32_T s125_motohawk_delta_time_DWORK1;/* '<S125>/motohawk_delta_time' */
  uint32_T s149_motohawk_delta_time_DWORK1;/* '<S149>/motohawk_delta_time' */
  uint32_T s628_presentTicks;          /* '<S350>/OnOff Delay' */
  uint32_T s628_elapsedTicks;          /* '<S350>/OnOff Delay' */
  uint32_T s628_previousTicks;         /* '<S350>/OnOff Delay' */
  uint16_T s77_UnitDelay_DSTATE;       /* '<S77>/Unit Delay' */
  uint16_T s681_UnitDelay_DSTATE;      /* '<S681>/Unit Delay' */
  uint16_T s681_UnitDelay1_DSTATE;     /* '<S681>/Unit Delay1' */
  uint16_T s77_motohawk_fault_def2_DWORK1;/* '<S77>/motohawk_fault_def2' */
  uint8_T s117_DelayInput1_DSTATE;     /* '<S117>/Delay Input1' */
  boolean_T s83_DelayInput1_DSTATE;    /* '<S83>/Delay Input1' */
  boolean_T s84_DelayInput1_DSTATE;    /* '<S84>/Delay Input1' */
  boolean_T s85_DelayInput1_DSTATE;    /* '<S85>/Delay Input1' */
  boolean_T s86_DelayInput1_DSTATE;    /* '<S86>/Delay Input1' */
  boolean_T s82_DelayInput1_DSTATE;    /* '<S82>/Delay Input1' */
  boolean_T s113_DelayInput1_DSTATE;   /* '<S113>/Delay Input1' */
  boolean_T s114_DelayInput1_DSTATE;   /* '<S114>/Delay Input1' */
  boolean_T s128_DelayInput1_DSTATE;   /* '<S128>/Delay Input1' */
  boolean_T s682_UnitDelay_DSTATE;     /* '<S682>/Unit Delay' */
  boolean_T s692_UnitDelay_DSTATE;     /* '<S692>/Unit Delay' */
  boolean_T s680_UnitDelay5_DSTATE;    /* '<S680>/Unit Delay5' */
  boolean_T s680_UnitDelay2_DSTATE;    /* '<S680>/Unit Delay2' */
  boolean_T s680_UnitDelay_DSTATE;     /* '<S680>/Unit Delay' */
  boolean_T s680_UnitDelay1_DSTATE;    /* '<S680>/Unit Delay1' */
  boolean_T s680_UnitDelay3_DSTATE;    /* '<S680>/Unit Delay3' */
  boolean_T s680_UnitDelay4_DSTATE;    /* '<S680>/Unit Delay4' */
  uint8_T s628_is_active_c4_Mooventure2016_Rev5;/* '<S350>/OnOff Delay' */
  uint8_T s628_is_c4_Mooventure2016_Rev5;/* '<S350>/OnOff Delay' */
  uint8_T s628_temporalCounter_i1;     /* '<S350>/OnOff Delay' */
  uint8_T s468_is_active_c28_Mooventure2016_Rev5;/* '<S347>/PowerSteering' */
  uint8_T s468_is_c28_Mooventure2016_Rev5;/* '<S347>/PowerSteering' */
  uint8_T s485_is_active_c55_Mooventure2016_Rev5;/* '<S465>/Bar Chart Reset' */
  uint8_T s485_is_c55_Mooventure2016_Rev5;/* '<S465>/Bar Chart Reset' */
  uint8_T s463_is_active_c22_Mooventure2016_Rev5;/* '<S347>/Chart' */
  uint8_T s463_is_c22_Mooventure2016_Rev5;/* '<S347>/Chart' */
  uint8_T s442_is_active_c10_Mooventure2016_Rev5;/* '<S346>/Coil2State1' */
  uint8_T s442_is_c10_Mooventure2016_Rev5;/* '<S346>/Coil2State1' */
  uint8_T s441_is_active_c9_Mooventure2016_Rev5;/* '<S346>/Coil2State' */
  uint8_T s441_is_c9_Mooventure2016_Rev5;/* '<S346>/Coil2State' */
  uint8_T s440_is_active_c8_Mooventure2016_Rev5;/* '<S346>/Coil1State' */
  uint8_T s440_is_c8_Mooventure2016_Rev5;/* '<S346>/Coil1State' */
  uint8_T s264_is_active_c29_Mooventure2016_Rev5;/* '<S173>/Chart' */
  uint8_T s264_is_c29_Mooventure2016_Rev5;/* '<S173>/Chart' */
  uint8_T s167_is_active_c1_Mooventure2016_Rev5;/* '<S11>/Chart' */
  uint8_T s167_is_c1_Mooventure2016_Rev5;/* '<S11>/Chart' */
  uint8_T s112_is_active_c30_Mooventure2016_Rev5;/* '<S94>/SystemState' */
  uint8_T s112_is_c30_Mooventure2016_Rev5;/* '<S94>/SystemState' */
  uint8_T s30_is_active_c33_Mooventure2016_Rev5;/* '<S8>/Chart' */
  uint8_T s30_is_c33_Mooventure2016_Rev5;/* '<S8>/Chart' */
  uint8_T s30_is_Running;              /* '<S8>/Chart' */
  uint8_T s23_is_active_c15_Mooventure2016_Rev5;/* '<S7>/PumpState' */
  uint8_T s23_is_c15_Mooventure2016_Rev5;/* '<S7>/PumpState' */
  uint8_T s20_is_active_c12_Mooventure2016_Rev5;/* '<S7>/BlendValving' */
  uint8_T s20_is_c12_Mooventure2016_Rev5;/* '<S7>/BlendValving' */
  boolean_T s98_Drive_MODE;            /* '<S98>/Drive' */
  boolean_T s98_Reverse_MODE;          /* '<S98>/Reverse' */
  rtDW_Chart_Mooventure2016_Rev5 s99_sf_Chart;/* '<S99>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s95_sf_Chart;/* '<S95>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s93_sf_Chart;/* '<S93>/Chart' */
} D_Work_Mooventure2016_Rev5;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S60>/Triggered Subsystem' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S680>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S680>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S680>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S680>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S684>/Clear' */
  ZCSigState Clear_Trig_ZCE_i;         /* '<S683>/Clear' */
} PrevZCSigStates_Mooventure2016_Rev5;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s343_OdometerValue;     /* '<S343>/To km' */
  const boolean_T s149_DataTypeConversion;/* '<S149>/Data Type Conversion' */
  const boolean_T s466_DataTypeConversion;/* '<S466>/Data Type Conversion' */
} ConstBlockIO_Mooventure2016_Rev5;

/* Real-time Model Data Structure */
struct RT_MODEL_Mooventure2016_Rev5 {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* Block signals (auto storage) */
extern BlockIO_Mooventure2016_Rev5 Mooventure2016_Rev5_B;

/* Block states (auto storage) */
extern D_Work_Mooventure2016_Rev5 Mooventure2016_Rev5_DWork;
extern const ConstBlockIO_Mooventure2016_Rev5 Mooventure2016_Rev5_ConstB;/* constant block i/o */

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_Mooventure2016_Rev5 Mooventure2016_Rev5_PrevZCSigState;

/* Model entry point functions */
extern void Mooventure2016_Rev5_initialize(boolean_T firstTime);
extern void Mooventure2016_Rev5_step(void);
extern void Mooventure2016_Rev5_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_Mooventure2016_Rev5 *const Mooventure2016_Rev5_M;

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
 * '<Root>' : Mooventure2016_Rev5
 * '<S1>'   : Mooventure2016_Rev5/Foreground
 * '<S2>'   : Mooventure2016_Rev5/Main Power Relay1
 * '<S3>'   : Mooventure2016_Rev5/Foreground/Control
 * '<S4>'   : Mooventure2016_Rev5/Foreground/Inputs
 * '<S5>'   : Mooventure2016_Rev5/Foreground/Outputs
 * '<S6>'   : Mooventure2016_Rev5/Foreground/Control/Battery
 * '<S7>'   : Mooventure2016_Rev5/Foreground/Control/Coolant Control
 * '<S8>'   : Mooventure2016_Rev5/Foreground/Control/Engine Control
 * '<S9>'   : Mooventure2016_Rev5/Foreground/Control/Faults
 * '<S10>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code
 * '<S11>'  : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination
 * '<S12>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Compare To Constant
 * '<S13>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence
 * '<S14>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4
 * '<S15>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)1
 * '<S16>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)2
 * '<S17>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)3
 * '<S18>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue
 * '<S19>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue
 * '<S20>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/BlendValving
 * '<S21>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/Embedded MATLAB Function
 * '<S22>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/Embedded MATLAB Function1
 * '<S23>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/PumpState
 * '<S24>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1
 * '<S25>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11
 * '<S26>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue
 * '<S27>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue
 * '<S28>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue
 * '<S29>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue
 * '<S30>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Chart
 * '<S31>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Engine States
 * '<S32>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States
 * '<S33>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States
 * '<S34>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1
 * '<S35>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2
 * '<S36>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3
 * '<S37>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4
 * '<S38>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Engine States/Time Since Enabled (With Input)1
 * '<S39>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)1
 * '<S40>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)2
 * '<S41>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)3
 * '<S42>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States/Time Since Enabled (With Input)1
 * '<S43>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States/Time Since Enabled (With Input)2
 * '<S44>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/NewValue
 * '<S45>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/OldValue
 * '<S46>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/NewValue
 * '<S47>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/OldValue
 * '<S48>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/NewValue
 * '<S49>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/OldValue
 * '<S50>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/NewValue
 * '<S51>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/OldValue
 * '<S52>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories
 * '<S53>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery
 * '<S54>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame
 * '<S55>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train
 * '<S56>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves
 * '<S57>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Charger
 * '<S58>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/DC-DC Converter
 * '<S59>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors
 * '<S60>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System
 * '<S61>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)1
 * '<S62>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)2
 * '<S63>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)1
 * '<S64>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)2
 * '<S65>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)3
 * '<S66>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)4
 * '<S67>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System/Triggered Subsystem
 * '<S68>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/2G BMS & Comms
 * '<S69>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Precharge
 * '<S70>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Temperature
 * '<S71>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write
 * '<S72>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write/Data Iterator
 * '<S73>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/12V Battery
 * '<S74>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Brake Pedal
 * '<S75>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control
 * '<S76>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor
 * '<S77>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gas Pedal
 * '<S78>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gear Selector
 * '<S79>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Ignition Key
 * '<S80>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control
 * '<S81>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor
 * '<S82>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change
 * '<S83>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change1
 * '<S84>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change2
 * '<S85>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change3
 * '<S86>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change4
 * '<S87>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault
 * '<S88>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive
 * '<S89>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive1
 * '<S90>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive2
 * '<S91>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive3
 * '<S92>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor/Data Correction
 * '<S93>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode
 * '<S94>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control
 * '<S95>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode
 * '<S96>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Embedded MATLAB Function
 * '<S97>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1
 * '<S98>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT
 * '<S99>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode
 * '<S100>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Safety
 * '<S101>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control
 * '<S102>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs
 * '<S103>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Brake Pedal Scaling
 * '<S104>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart
 * '<S105>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Gas Pedal Scaling
 * '<S106>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/SOC_RampOut
 * '<S107>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Brake Disable
 * '<S108>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing
 * '<S109>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control
 * '<S110>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume
 * '<S111>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/System Start
 * '<S112>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/SystemState
 * '<S113>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase
 * '<S114>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase1
 * '<S115>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Decrease
 * '<S116>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Increase
 * '<S117>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive
 * '<S118>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)
 * '<S119>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive/Positive
 * '<S120>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S121>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S122>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S123>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive2
 * '<S124>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S125>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S126>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S127>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S128>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Detect Increase
 * '<S129>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Enabled Subsystem1
 * '<S130>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Brake Pedal Scaling
 * '<S131>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Chart
 * '<S132>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Gas Pedal Scaling
 * '<S133>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function
 * '<S134>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function
 * '<S135>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant
 * '<S136>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant1
 * '<S137>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant2
 * '<S138>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest
 * '<S139>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive
 * '<S140>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)
 * '<S141>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Neutral
 * '<S142>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse
 * '<S143>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs
 * '<S144>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)
 * '<S145>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator
 * '<S146>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/motohawk_table_1d
 * '<S147>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S148>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier
 * '<S149>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator
 * '<S150>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier/Compare To Zero
 * '<S151>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator/Saturation
 * '<S152>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4
 * '<S153>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue
 * '<S154>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue
 * '<S155>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S156>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4
 * '<S157>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue
 * '<S158>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue
 * '<S159>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue
 * '<S160>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue
 * '<S161>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Brake Pedal Scaling
 * '<S162>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Chart
 * '<S163>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Gas Pedal Scaling
 * '<S164>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Torque Limiter
 * '<S165>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue
 * '<S166>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue
 * '<S167>' : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S168>' : Mooventure2016_Rev5/Foreground/Inputs/ABS
 * '<S169>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs
 * '<S170>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs
 * '<S171>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In
 * '<S172>' : Mooventure2016_Rev5/Foreground/Inputs/Charger Param
 * '<S173>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control
 * '<S174>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs
 * '<S175>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger
 * '<S176>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs
 * '<S177>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs
 * '<S178>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel
 * '<S179>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1
 * '<S180>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10
 * '<S181>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11
 * '<S182>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2
 * '<S183>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3
 * '<S184>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4
 * '<S185>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5
 * '<S186>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6
 * '<S187>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7
 * '<S188>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8
 * '<S189>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9
 * '<S190>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue
 * '<S191>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue
 * '<S192>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue
 * '<S193>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue
 * '<S194>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue
 * '<S195>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue
 * '<S196>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue
 * '<S197>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue
 * '<S198>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue
 * '<S199>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue
 * '<S200>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue
 * '<S201>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue
 * '<S202>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue
 * '<S203>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue
 * '<S204>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue
 * '<S205>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue
 * '<S206>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue
 * '<S207>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue
 * '<S208>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue
 * '<S209>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue
 * '<S210>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue
 * '<S211>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue
 * '<S212>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Contactors
 * '<S213>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant
 * '<S214>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter
 * '<S215>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function
 * '<S216>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass
 * '<S217>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass
 * '<S218>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1
 * '<S219>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12
 * '<S220>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2
 * '<S221>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass/First Order Low Pass
 * '<S222>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass/First Order Low Pass
 * '<S223>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue
 * '<S224>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue
 * '<S225>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue
 * '<S226>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue
 * '<S227>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue
 * '<S228>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue
 * '<S229>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12
 * '<S230>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue
 * '<S231>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue
 * '<S232>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter
 * '<S233>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter
 * '<S234>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs
 * '<S235>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2
 * '<S236>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3
 * '<S237>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4
 * '<S238>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5
 * '<S239>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)
 * '<S240>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S241>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)
 * '<S242>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S243>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue
 * '<S244>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue
 * '<S245>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue
 * '<S246>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue
 * '<S247>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue
 * '<S248>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue
 * '<S249>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue
 * '<S250>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue
 * '<S251>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue
 * '<S252>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue
 * '<S253>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1
 * '<S254>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2
 * '<S255>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue
 * '<S256>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue
 * '<S257>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue
 * '<S258>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue
 * '<S259>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1
 * '<S260>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2
 * '<S261>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3
 * '<S262>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4
 * '<S263>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5
 * '<S264>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Chart
 * '<S265>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant
 * '<S266>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant1
 * '<S267>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant2
 * '<S268>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant3
 * '<S269>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant4
 * '<S270>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S271>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S272>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S273>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S274>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S275>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function
 * '<S276>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1
 * '<S277>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2
 * '<S278>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1
 * '<S279>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2
 * '<S280>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3
 * '<S281>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4
 * '<S282>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5
 * '<S283>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6
 * '<S284>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7
 * '<S285>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8
 * '<S286>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9
 * '<S287>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue
 * '<S288>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue
 * '<S289>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue
 * '<S290>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue
 * '<S291>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue
 * '<S292>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue
 * '<S293>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue
 * '<S294>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue
 * '<S295>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue
 * '<S296>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue
 * '<S297>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue
 * '<S298>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue
 * '<S299>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue
 * '<S300>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue
 * '<S301>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue
 * '<S302>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue
 * '<S303>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue
 * '<S304>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue
 * '<S305>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1
 * '<S306>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2
 * '<S307>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3
 * '<S308>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4
 * '<S309>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5
 * '<S310>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6
 * '<S311>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7
 * '<S312>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue
 * '<S313>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue
 * '<S314>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue
 * '<S315>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue
 * '<S316>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue
 * '<S317>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue
 * '<S318>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue
 * '<S319>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue
 * '<S320>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue
 * '<S321>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue
 * '<S322>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue
 * '<S323>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue
 * '<S324>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue
 * '<S325>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue
 * '<S326>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/Subsystem
 * '<S327>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7
 * '<S328>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue
 * '<S329>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue
 * '<S330>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1
 * '<S331>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2
 * '<S332>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3
 * '<S333>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7
 * '<S334>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue
 * '<S335>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue
 * '<S336>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue
 * '<S337>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue
 * '<S338>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue
 * '<S339>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue
 * '<S340>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue
 * '<S341>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue
 * '<S342>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs
 * '<S343>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs
 * '<S344>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out
 * '<S345>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs
 * '<S346>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox
 * '<S347>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs
 * '<S348>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger
 * '<S349>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs
 * '<S350>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs
 * '<S351>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Data Correction Motor ABS
 * '<S352>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Shift Position Conditioner
 * '<S353>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs
 * '<S354>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1
 * '<S355>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2
 * '<S356>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3
 * '<S357>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4
 * '<S358>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5
 * '<S359>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6
 * '<S360>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7
 * '<S361>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue
 * '<S362>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue
 * '<S363>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue
 * '<S364>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue
 * '<S365>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue
 * '<S366>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue
 * '<S367>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue
 * '<S368>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue
 * '<S369>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue
 * '<S370>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue
 * '<S371>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue
 * '<S372>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue
 * '<S373>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue
 * '<S374>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue
 * '<S375>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue
 * '<S376>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue
 * '<S377>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs
 * '<S378>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1
 * '<S379>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue
 * '<S380>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue
 * '<S381>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue
 * '<S382>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue
 * '<S383>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Compare To Constant
 * '<S384>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1
 * '<S385>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2
 * '<S386>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3
 * '<S387>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4
 * '<S388>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Fan Adapter
 * '<S389>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Heater Core Motion Control
 * '<S390>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Radiator Motion Control
 * '<S391>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1
 * '<S392>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10
 * '<S393>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11
 * '<S394>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12
 * '<S395>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13
 * '<S396>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14
 * '<S397>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15
 * '<S398>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2
 * '<S399>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3
 * '<S400>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4
 * '<S401>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5
 * '<S402>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6
 * '<S403>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7
 * '<S404>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8
 * '<S405>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9
 * '<S406>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1/Time Since Enabled (With Input)4
 * '<S407>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2/Time Since Enabled (With Input)4
 * '<S408>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3/Time Since Enabled (With Input)4
 * '<S409>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4/Time Since Enabled (With Input)4
 * '<S410>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue
 * '<S411>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue
 * '<S412>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue
 * '<S413>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue
 * '<S414>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue
 * '<S415>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue
 * '<S416>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue
 * '<S417>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue
 * '<S418>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue
 * '<S419>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue
 * '<S420>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue
 * '<S421>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue
 * '<S422>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue
 * '<S423>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue
 * '<S424>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue
 * '<S425>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue
 * '<S426>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue
 * '<S427>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue
 * '<S428>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue
 * '<S429>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue
 * '<S430>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue
 * '<S431>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue
 * '<S432>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue
 * '<S433>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue
 * '<S434>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue
 * '<S435>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue
 * '<S436>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue
 * '<S437>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue
 * '<S438>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue
 * '<S439>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue
 * '<S440>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil1State
 * '<S441>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State
 * '<S442>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State1
 * '<S443>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Compare To Constant
 * '<S444>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Heat Check
 * '<S445>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10
 * '<S446>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11
 * '<S447>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6
 * '<S448>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7
 * '<S449>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8
 * '<S450>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9
 * '<S451>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue
 * '<S452>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue
 * '<S453>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue
 * '<S454>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue
 * '<S455>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue
 * '<S456>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue
 * '<S457>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue
 * '<S458>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue
 * '<S459>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue
 * '<S460>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue
 * '<S461>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue
 * '<S462>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue
 * '<S463>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Chart
 * '<S464>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function
 * '<S465>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Enabled Subsystem
 * '<S466>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator
 * '<S467>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO_CALC
 * '<S468>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/PowerSteering
 * '<S469>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing
 * '<S470>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1
 * '<S471>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10
 * '<S472>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11
 * '<S473>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12
 * '<S474>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13
 * '<S475>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14
 * '<S476>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15
 * '<S477>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2
 * '<S478>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3
 * '<S479>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4
 * '<S480>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5
 * '<S481>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6
 * '<S482>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7
 * '<S483>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8
 * '<S484>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9
 * '<S485>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Enabled Subsystem/Bar Chart Reset
 * '<S486>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator/Saturation
 * '<S487>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20
 * '<S488>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21
 * '<S489>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22
 * '<S490>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23
 * '<S491>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24
 * '<S492>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25
 * '<S493>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26
 * '<S494>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27
 * '<S495>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28
 * '<S496>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29
 * '<S497>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30
 * '<S498>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31
 * '<S499>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32
 * '<S500>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33
 * '<S501>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34
 * '<S502>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35
 * '<S503>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36
 * '<S504>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37
 * '<S505>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38
 * '<S506>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39
 * '<S507>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40
 * '<S508>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41
 * '<S509>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42
 * '<S510>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43
 * '<S511>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44
 * '<S512>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45
 * '<S513>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue
 * '<S514>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue
 * '<S515>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue
 * '<S516>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue
 * '<S517>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue
 * '<S518>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue
 * '<S519>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue
 * '<S520>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue
 * '<S521>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue
 * '<S522>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue
 * '<S523>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue
 * '<S524>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue
 * '<S525>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue
 * '<S526>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue
 * '<S527>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue
 * '<S528>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue
 * '<S529>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue
 * '<S530>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue
 * '<S531>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue
 * '<S532>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue
 * '<S533>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue
 * '<S534>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue
 * '<S535>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue
 * '<S536>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue
 * '<S537>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue
 * '<S538>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue
 * '<S539>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue
 * '<S540>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue
 * '<S541>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue
 * '<S542>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue
 * '<S543>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue
 * '<S544>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue
 * '<S545>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue
 * '<S546>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue
 * '<S547>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue
 * '<S548>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue
 * '<S549>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue
 * '<S550>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue
 * '<S551>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue
 * '<S552>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue
 * '<S553>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue
 * '<S554>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue
 * '<S555>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue
 * '<S556>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue
 * '<S557>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue
 * '<S558>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue
 * '<S559>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue
 * '<S560>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue
 * '<S561>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue
 * '<S562>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue
 * '<S563>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue
 * '<S564>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue
 * '<S565>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue
 * '<S566>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue
 * '<S567>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue
 * '<S568>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue
 * '<S569>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue
 * '<S570>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue
 * '<S571>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue
 * '<S572>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue
 * '<S573>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue
 * '<S574>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue
 * '<S575>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue
 * '<S576>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue
 * '<S577>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue
 * '<S578>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue
 * '<S579>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue
 * '<S580>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue
 * '<S581>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue
 * '<S582>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue
 * '<S583>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue
 * '<S584>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue
 * '<S585>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue
 * '<S586>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue
 * '<S587>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue
 * '<S588>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue
 * '<S589>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue
 * '<S590>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue
 * '<S591>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue
 * '<S592>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue
 * '<S593>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue
 * '<S594>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue
 * '<S595>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=1_Standby
 * '<S596>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=2_Charging
 * '<S597>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1
 * '<S598>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2
 * '<S599>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3
 * '<S600>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4
 * '<S601>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5
 * '<S602>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue
 * '<S603>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue
 * '<S604>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue
 * '<S605>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue
 * '<S606>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue
 * '<S607>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue
 * '<S608>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue
 * '<S609>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue
 * '<S610>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue
 * '<S611>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue
 * '<S612>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1
 * '<S613>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2
 * '<S614>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3
 * '<S615>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4
 * '<S616>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5
 * '<S617>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue
 * '<S618>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue
 * '<S619>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue
 * '<S620>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue
 * '<S621>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue
 * '<S622>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue
 * '<S623>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue
 * '<S624>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue
 * '<S625>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue
 * '<S626>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue
 * '<S627>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Compare To Constant
 * '<S628>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/OnOff Delay
 * '<S629>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs
 * '<S630>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1
 * '<S631>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10
 * '<S632>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11
 * '<S633>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12
 * '<S634>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13
 * '<S635>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14
 * '<S636>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15
 * '<S637>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16
 * '<S638>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17
 * '<S639>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2
 * '<S640>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3
 * '<S641>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4
 * '<S642>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5
 * '<S643>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6
 * '<S644>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7
 * '<S645>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8
 * '<S646>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue
 * '<S647>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue
 * '<S648>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue
 * '<S649>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue
 * '<S650>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue
 * '<S651>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue
 * '<S652>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue
 * '<S653>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue
 * '<S654>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue
 * '<S655>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue
 * '<S656>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue
 * '<S657>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue
 * '<S658>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue
 * '<S659>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue
 * '<S660>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue
 * '<S661>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue
 * '<S662>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue
 * '<S663>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue
 * '<S664>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue
 * '<S665>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue
 * '<S666>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue
 * '<S667>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue
 * '<S668>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue
 * '<S669>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue
 * '<S670>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue
 * '<S671>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue
 * '<S672>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue
 * '<S673>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue
 * '<S674>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue
 * '<S675>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue
 * '<S676>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue
 * '<S677>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue
 * '<S678>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue
 * '<S679>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue
 * '<S680>' : Mooventure2016_Rev5/Main Power Relay1/Background
 * '<S681>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay
 * '<S682>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Boolean
 * '<S683>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call
 * '<S684>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1
 * '<S685>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off
 * '<S686>' : Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot
 * '<S687>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off
 * '<S688>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128
 * '<S689>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs
 * '<S690>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem
 * '<S691>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem
 * '<S692>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S693>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear
 * '<S694>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear
 * '<S695>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S696>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S697>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S698>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue
 * '<S699>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
