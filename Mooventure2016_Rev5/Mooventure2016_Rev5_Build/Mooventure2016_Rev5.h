/*
 * File: Mooventure2016_Rev5.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2015
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Nov 20 13:47:00 2017
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
  real_T s205_IPT_CurrentUsed;         /* '<S205>/Read CAN Message3' */
  real_T s205_IPT_CurrentRequest;      /* '<S205>/Read CAN Message3' */
  real_T s205_IPT_MotorSpeed;          /* '<S205>/Read CAN Message3' */
  real_T s205_IPT_WheelTorqueDelivered;/* '<S205>/Read CAN Message3' */
  real_T s205_IPT_CurrentLimit;        /* '<S205>/Read CAN Message3' */
  real_T s205_IPT_Antishudder;         /* '<S205>/Read CAN Message3' */
  real_T s331_Merge;                   /* '<S331>/Merge' */
  real_T s100_Product;                 /* '<S100>/Product' */
  real_T s98_Sum2;                     /* '<S98>/Sum2' */
  real_T s102_Product;                 /* '<S102>/Product' */
  real_T s98_Product2;                 /* '<S98>/Product2' */
  real_T s103_Switch1;                 /* '<S103>/Switch1' */
  real_T s105_MinMax1;                 /* '<S105>/MinMax1' */
  real_T s127_Switch1;                 /* '<S127>/Switch1' */
  real_T s125_Sum1;                    /* '<S125>/Sum1' */
  real_T s203_Shift_Position;          /* '<S203>/Read CAN Message1' */
  real_T s203_Brake_Position;          /* '<S203>/Read CAN Message3' */
  real_T s200_JCS_PackIdentifier;      /* '<S200>/Read CAN Message' */
  real_T s200_PackState;               /* '<S200>/Read CAN Message' */
  real_T s200_PrechargeState;          /* '<S200>/Read CAN Message' */
  real_T s200_HVIL_Status;             /* '<S200>/Read CAN Message' */
  real_T s200_IsolationStatus;         /* '<S200>/Read CAN Message' */
  real_T s200_WakeSignal;              /* '<S200>/Read CAN Message' */
  real_T s200_SleepInhibited;          /* '<S200>/Read CAN Message' */
  real_T s200_MILState;                /* '<S200>/Read CAN Message' */
  real_T s200_StateOfCharge;           /* '<S200>/Read CAN Message' */
  real_T s200_PS_RollingCounter;       /* '<S200>/Read CAN Message' */
  real_T s271_Sum1;                    /* '<S271>/Sum1' */
  real_T s76_Torque_Direction;         /* '<S76>/Merge' */
  real_T s9_motor_Torque;              /* '<S9>/Merge1' */
  real_T s76_IPT_Torque_Request;       /* '<S76>/Product' */
  real_T s76_Saturation;               /* '<S76>/Saturation' */
  real_T s79_Switch;                   /* '<S79>/Switch' */
  real_T s367_Pct_whl_trq_desired;     /* '<S367>/Product' */
  real_T s367_Commanded_mot_torq;      /* '<S367>/Product1' */
  real_T s200_BatteryVoltage;          /* '<S200>/Read CAN Message3' */
  real_T s200_BatteryCurrent;          /* '<S200>/Read CAN Message3' */
  real_T s200_BusVoltage;              /* '<S200>/Read CAN Message3' */
  real_T s200_PVC_RollingCounter;      /* '<S200>/Read CAN Message3' */
  real_T s267_Merge;                   /* '<S267>/Merge' */
  real_T s204_InputVoltage;            /* '<S204>/Read CAN Message2' */
  real_T s204_OutputVoltage;           /* '<S204>/Read CAN Message2' */
  real_T s204_InputCurrentLimitMax;    /* '<S204>/Read CAN Message2' */
  real_T s204_InputCurrent;            /* '<S204>/Read CAN Message2' */
  real_T s204_OutputCurrent;           /* '<S204>/Read CAN Message2' */
  real_T s204_Eaton_HV_Charger_Temperature;/* '<S204>/Read CAN Message2' */
  real_T s204_ChargerState;            /* '<S204>/Read CAN Message2' */
  real_T s204_MessageCounter;          /* '<S204>/Read CAN Message2' */
  real_T s204_MessageChecksum;         /* '<S204>/Read CAN Message2' */
  real_T s205_IPT_InverterTemperature; /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_MotorTemperature;    /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_MaxTorqueAvailGen;   /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_MaxTorqueAvailMotor; /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_HVDCVoltage;         /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_ErrorCategory;       /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_IPTReady;            /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_IPTAwake;            /* '<S205>/Read CAN Message1' */
  real_T s205_IPT_MaxWasteAvailable;   /* '<S205>/Read CAN Message1' */
  real_T s200_MaxCellVoltage;          /* '<S200>/Read CAN Message4' */
  real_T s200_MinCellVoltage;          /* '<S200>/Read CAN Message4' */
  real_T s200_MaxCellTemperature;      /* '<S200>/Read CAN Message4' */
  real_T s200_MinCellTemperature;      /* '<S200>/Read CAN Message4' */
  real_T s200_CoolantTemperature;      /* '<S200>/Read CAN Message4' */
  real_T s200_DPI_RollingCounter;      /* '<S200>/Read CAN Message4' */
  real_T s203_DRIVER_1;                /* '<S203>/Read CAN Message6' */
  real_T s203_DRIVER_10;               /* '<S203>/Read CAN Message6' */
  real_T s203_PASSENGER_1;             /* '<S203>/Read CAN Message6' */
  real_T s203_PASSENGER_10;            /* '<S203>/Read CAN Message6' */
  real_T s371_Engine_Speed;            /* '<S371>/Abs1' */
  real_T s371_Current;                 /* '<S371>/Sum' */
  real_T s371_Vehi_Speed;              /* '<S371>/Abs2' */
  real_T s371_ODO_Count;               /* '<S371>/motohawk_data_read5' */
  real_T s200_TripAmpHoursIn;          /* '<S200>/Read CAN Message5' */
  real_T s200_TripAmpHoursOut;         /* '<S200>/Read CAN Message5' */
  real_T s200_StateOfChargeMax;        /* '<S200>/Read CAN Message5' */
  real_T s200_StateOfChargeMin;        /* '<S200>/Read CAN Message5' */
  real_T s200_TAH_RollingCounter;      /* '<S200>/Read CAN Message5' */
  real_T s373_VSC_WheelTorqueRequest;  /* '<S373>/Product' */
  real_T s9_motor_Enable;              /* '<S9>/Merge2' */
  real_T s649_Merge;                   /* '<S649>/Merge' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s169_MPGeGlobalAverage;       /* '<S169>/Product' */
  real_T s147_Saturation;              /* '<S147>/Saturation' */
  real_T s170_motohawk_data_read1;     /* '<S170>/motohawk_data_read1' */
  real_T s168_motohawk_data_read2;     /* '<S168>/motohawk_data_read2' */
  real_T s149_MPGe1MinuteAverage;      /* '<S149>/Product' */
  real_T s194_SFunction[15];           /* '<S194>/S-Function ' */
  real_T s150_BatteryUsePCT;           /* '<S150>/Saturation1' */
  real_T s150_Battery2Motor;           /* '<S150>/Product2' */
  real_T s150_Motor2Axle;              /* '<S150>/Product1' */
  real_T s206_Subfunction_Select;      /* '<S206>/Read CAN Message' */
  real_T s206_Confirm_Active_Trip;     /* '<S206>/Read CAN Message' */
  real_T s206_Confirm_Reset_Trip_B;    /* '<S206>/Read CAN Message' */
  real_T s206_Confirm_Reset_Trip_A;    /* '<S206>/Read CAN Message' */
  real_T s206_Electricity_Cost_Setting;/* '<S206>/Read CAN Message' */
  real_T s206_Fuel_Cost_Setting;       /* '<S206>/Read CAN Message' */
  real_T s152_TripACost;               /* '<S152>/Product2' */
  real_T s152_TripASavings;            /* '<S152>/Add2' */
  real_T s153_TripBCost;               /* '<S153>/Product2' */
  real_T s153_TripBSavings;            /* '<S153>/Add2' */
  real_T s200_MaximumDischargePower_10s;/* '<S200>/Read CAN Message1' */
  real_T s200_MaximumRegenPower_10s;   /* '<S200>/Read CAN Message1' */
  real_T s200_IsolationLevel;          /* '<S200>/Read CAN Message1' */
  real_T s200_ActiveDTC;               /* '<S200>/Read CAN Message1' */
  real_T s200_PPL10s_RollingCounter;   /* '<S200>/Read CAN Message1' */
  real_T s264_Merge;                   /* '<S264>/Merge' */
  real_T s203_Button_Pressed;          /* '<S203>/Read CAN Message4' */
  real_T s205_IPT_DCErrorCategory;     /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCLVOn;              /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCLVGeneralError;    /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCLVMaxPower;        /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCLVBusCurrent;      /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCLVBusVoltage;      /* '<S205>/Read CAN Message2' */
  real_T s205_IPT_DCHVBusCurrent;      /* '<S205>/Read CAN Message2' */
  real_T s205_Heading;                 /* '<S205>/Read CAN Message4' */
  real_T s205_Speed;                   /* '<S205>/Read CAN Message4' */
  real_T s205_Altitude;                /* '<S205>/Read CAN Message4' */
  real_T s205_GPSQuality;              /* '<S205>/Read CAN Message4' */
  real_T s205_DateTime;                /* '<S205>/Read CAN Message4' */
  real_T s200_LifeTimeAmpHoursOut;     /* '<S200>/Read CAN Message6' */
  real_T s200_LTAHI_RollingCounter;    /* '<S200>/Read CAN Message6' */
  real_T s200_MaximumDischargePower_Continuous;/* '<S200>/Read CAN Message2' */
  real_T s200_MaximumRegenPower_Continuous;/* '<S200>/Read CAN Message2' */
  real_T s200_PPLCont_RollingCounter;  /* '<S200>/Read CAN Message2' */
  real_T s198_LF_Wheel_Rolling_Count;  /* '<S198>/Read CAN Message' */
  real_T s198_RT_Wheel_Rolling_Count;  /* '<S198>/Read CAN Message' */
  real_T s198_Wheel_Rolling_Timestamp; /* '<S198>/Read CAN Message' */
  real_T s198_TCS_ENG_EVNT_IN_PROGRESS;/* '<S198>/Read CAN Message2' */
  real_T s198_Front_left_whl_speed;    /* '<S198>/Read CAN Message1' */
  real_T s198_Front_right_whl_speed;   /* '<S198>/Read CAN Message1' */
  real_T s198_Rear_left_whl_speed;     /* '<S198>/Read CAN Message1' */
  real_T s198_Rear_right_whl_speed;    /* '<S198>/Read CAN Message1' */
  real_T s207_STR_WHL_ANGLE_CNTR_FND;  /* '<S207>/Read CAN Message' */
  real_T s207_STR_WHL_ANGLE;           /* '<S207>/Read CAN Message' */
  real_T s207_RELATIVE_STR_WHL_ANGLE;  /* '<S207>/Read CAN Message' */
  real_T s263_Merge;                   /* '<S263>/Merge' */
  real_T s266_Merge;                   /* '<S266>/Merge' */
  real_T s145_Add;                     /* '<S145>/Add' */
  real_T s155_Switch1;                 /* '<S155>/Switch1' */
  real_T s153_Add;                     /* '<S153>/Add' */
  real_T s153_Add1;                    /* '<S153>/Add1' */
  real_T s488_CEL;                     /* '<S371>/Embedded MATLAB Function' */
  real_T s487_engTemp;                 /* '<S371>/Chart' */
  real_T s487_transTemp;               /* '<S371>/Chart' */
  real_T s487_timerOut;                /* '<S371>/Chart' */
  real_T s412_fan1;                    /* '<S369>/Fan Adapter' */
  real_T s412_fan2;                    /* '<S369>/Fan Adapter' */
  real_T s412_fan3;                    /* '<S369>/Fan Adapter' */
  real_T s376_dirOut;                  /* '<S367>/Shift Position Conditioner' */
  real_T s302_passengerTemp;           /* '<S203>/Embedded MATLAB Function2' */
  real_T s301_driverTemp;              /* '<S203>/Embedded MATLAB Function1' */
  real_T s300_posOut;                  /* '<S203>/Embedded MATLAB Function' */
  real_T s289_Out;                     /* '<S202>/Chart' */
  real_T s244_temp_reading;            /* '<S242>/Embedded MATLAB Function' */
  real_T s74_state;                    /* '<S9>/Embedded MATLAB Function' */
  real_T s21_radBlend;                 /* '<S7>/Embedded MATLAB Function' */
  real_T s20_RadiatorBlend;            /* '<S7>/BlendValving' */
  real_T s20_HeaterCoreBlend;          /* '<S7>/BlendValving' */
  uint32_T s205_AgeCount;              /* '<S205>/Read CAN Message3' */
  uint32_T s203_AgeCount;              /* '<S203>/Read CAN Message1' */
  uint32_T s203_AgeCount_j;            /* '<S203>/Read CAN Message3' */
  uint32_T s200_AgeCount;              /* '<S200>/Read CAN Message' */
  uint32_T s204_AgeCount;              /* '<S204>/Read CAN Message2' */
  uint32_T s205_AgeCount_m;            /* '<S205>/Read CAN Message1' */
  uint32_T s206_AgeCount;              /* '<S206>/Read CAN Message' */
  uint32_T s205_AgeCount_j;            /* '<S205>/Read CAN Message2' */
  uint32_T s205_AgeCount_o;            /* '<S205>/Read CAN Message4' */
  uint32_T s198_AgeCount;              /* '<S198>/Read CAN Message' */
  uint32_T s198_AgeCount_e;            /* '<S198>/Read CAN Message2' */
  uint32_T s198_AgeCount_n;            /* '<S198>/Read CAN Message1' */
  uint32_T s207_AgeCount;              /* '<S207>/Read CAN Message' */
  uint16_T s202_RawSignal;             /* '<S202>/motohawk_ain4' */
  uint16_T s203_Throttle_Position;     /* '<S203>/motohawk_ain4' */
  uint16_T s242_motohawk_ain2_o1;      /* '<S242>/motohawk_ain2' */
  uint16_T s242_motohawk_ain4_o1;      /* '<S242>/motohawk_ain4' */
  uint16_T s242_motohawk_ain1_o1;      /* '<S242>/motohawk_ain1' */
  uint16_T s243_motohawk_ain4_o1;      /* '<S243>/motohawk_ain4' */
  int8_T s368_ConnectCommand;          /* '<S368>/Data Type Conversion' */
  boolean_T s200_CellBalanceingActive; /* '<S200>/Read CAN Message' */
  boolean_T s15_Merge;                 /* '<S15>/Merge' */
  boolean_T s14_LogicalOperator2;      /* '<S14>/Logical Operator2' */
  boolean_T s368_IsolationMeasurementEnable;/* '<S368>/Logical Operator' */
  boolean_T s204_IgnitionStatus;       /* '<S204>/Read CAN Message2' */
  boolean_T s204_FaultSeverityIndicator;/* '<S204>/Read CAN Message2' */
  boolean_T s205_IPT_MotorReady;       /* '<S205>/Read CAN Message1' */
  boolean_T s7_VeryCold;               /* '<S7>/Very Cold' */
  boolean_T s7_Warmed;                 /* '<S7>/Warmed' */
  boolean_T s369_DataTypeConversion5;  /* '<S369>/Data Type Conversion5' */
  boolean_T s369_LogicalOperator8;     /* '<S369>/Logical Operator8' */
  boolean_T s7_LogicalOperator1;       /* '<S7>/Logical Operator1' */
  boolean_T s25_Merge;                 /* '<S25>/Merge' */
  boolean_T s7_LogicalOperator2;       /* '<S7>/Logical Operator2' */
  boolean_T s24_Merge;                 /* '<S24>/Merge' */
  boolean_T s369_DataTypeConversion4;  /* '<S369>/Data Type Conversion4' */
  boolean_T s369_DataTypeConversion1;  /* '<S369>/Data Type Conversion1' */
  boolean_T s369_DataTypeConversion2;  /* '<S369>/Data Type Conversion2' */
  boolean_T s369_LogicalOperator5;     /* '<S369>/Logical Operator5' */
  boolean_T s369_LogicalOperator6;     /* '<S369>/Logical Operator6' */
  boolean_T s369_LogicalOperator7;     /* '<S369>/Logical Operator7' */
  boolean_T s371_Regen_Brakes_Disabled;/* '<S371>/motohawk_fault_action2' */
  boolean_T s371_HV_Elec_Sys_Warm;     /* '<S371>/motohawk_fault_action1' */
  boolean_T s371_Repair_Wrench;        /* '<S371>/motohawk_fault_action' */
  boolean_T s371_Battery_Light;        /* '<S371>/motohawk_fault_action4' */
  boolean_T s372_ChargeSystemFault;    /* '<S372>/motohawk_fault_action' */
  boolean_T s372_ChargeComplete;       /* '<S372>/Logical Operator2' */
  boolean_T s372_ChargeEnable;         /* '<S372>/Logical Operator1' */
  boolean_T s373_VSC_IPTEnable;        /* '<S373>/motohawk_data_read3' */
  boolean_T s373_VSC_DCDCEnable;       /* '<S373>/Logical Operator1' */
  boolean_T s637_MotorEnable;          /* '<S373>/OnOff Delay' */
  boolean_T s637_IPTWake;              /* '<S373>/OnOff Delay' */
  boolean_T s637_IPTEnable;            /* '<S373>/OnOff Delay' */
  boolean_T s492_VehicleReadyOutput;   /* '<S371>/PowerSteering' */
  boolean_T s466_Coil3State;           /* '<S370>/Coil2State1' */
  boolean_T s465_Coil2State;           /* '<S370>/Coil2State' */
  boolean_T s464_Coil1State;           /* '<S370>/Coil1State' */
  boolean_T s197_Vehicle_Enable;       /* '<S12>/Chart' */
  boolean_T s197_Vehicle_Ready;        /* '<S12>/Chart' */
  boolean_T s197_Torque_Enable;        /* '<S12>/Chart' */
  boolean_T s197_Keyed_Relay;          /* '<S12>/Chart' */
  boolean_T s90_System;                /* '<S72>/SystemState' */
  boolean_T s23_PumpOn;                /* '<S7>/PumpState' */
  boolean_T s20_Heat1;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat2;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat3;                 /* '<S7>/BlendValving' */
  boolean_T s20_Heat4;                 /* '<S7>/BlendValving' */
  boolean_T s20_RadiatorPump;          /* '<S7>/BlendValving' */
  boolean_T s20_HeaterCorePump;        /* '<S7>/BlendValving' */
  rtB_Chart_Mooventure2016_Rev5_d s489_sf_BarChartReset;/* '<S489>/Bar Chart Reset' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 s369_sf_RadiatorMotionControl;/* '<S369>/Radiator Motion Control' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5
    s369_sf_HeaterCoreMotionControl;   /* '<S369>/Heater Core Motion Control' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s367_sf_DataCorrectionMotorABS;    /* '<S367>/Data Correction Motor ABS' */
  rtB_Chart_Mooventure2016_Rev5_e s262_sf_Chart;/* '<S262>/Chart' */
  rtB_Chart_Mooventure2016_Rev5_e s261_sf_Chart;/* '<S261>/Chart' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 s150_sf_DataCorrectionMotor;/* '<S150>/Data Correction Motor' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color9;/* '<S149>/Color9' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color8;/* '<S149>/Color8' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color7;/* '<S149>/Color7' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color6;/* '<S149>/Color6' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color5;/* '<S149>/Color5' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color4;/* '<S149>/Color4' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color3;/* '<S149>/Color3' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color2;/* '<S149>/Color2' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color15;/* '<S149>/Color15' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color14;/* '<S149>/Color14' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color13;/* '<S149>/Color13' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color11;/* '<S149>/Color11' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color10;/* '<S149>/Color10' */
  rtB_Color1_Mooventure2016_Rev5 s149_sf_Color1;/* '<S149>/Color1' */
  rtB_Chart_Mooventure2016_Rev5_d s149_sf_BarChartReset;/* '<S149>/Bar Chart Reset' */
  rtB_Chart_Mooventure2016_Rev5_d s149_sf_BarChart;/* '<S149>/Bar Chart' */
  rtB_Chart_Mooventure2016_Rev5_d s169_sf_Chart;/* '<S169>/Chart' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 s147_sf_DataCorrection;/* '<S147>/Data Correction' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s77_sf_GasPedalScaling;/* '<S77>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s77_sf_Chart;/* '<S77>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s77_sf_BrakePedalScaling;/* '<S77>/Brake Pedal Scaling' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s73_sf_GasPedalScaling;/* '<S73>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s73_sf_Chart;/* '<S73>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s73_sf_BrakePedalScaling;/* '<S73>/Brake Pedal Scaling' */
  rtB_GasPedalScaling_Mooventure2016_Rev5 s71_sf_GasPedalScaling;/* '<S71>/Gas Pedal Scaling' */
  rtB_Chart_Mooventure2016_Rev5 s71_sf_Chart;/* '<S71>/Chart' */
  rtB_BrakePedalScaling_Mooventure2016_Rev5 s71_sf_BrakePedalScaling;/* '<S71>/Brake Pedal Scaling' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 s59_sf_DataCorrection;/* '<S59>/Data Correction' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s54_sf_DataCorrectionMotorFault;   /* '<S54>/Data Correction Motor Fault' */
} BlockIO_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s100_UnitDelay_DSTATE;        /* '<S100>/Unit Delay' */
  real_T s101_UnitDelay_DSTATE;        /* '<S101>/Unit Delay' */
  real_T s102_UnitDelay_DSTATE;        /* '<S102>/Unit Delay' */
  real_T s103_UnitDelay_DSTATE;        /* '<S103>/Unit Delay' */
  real_T s127_UnitDelay_DSTATE;        /* '<S127>/Unit Delay' */
  real_T s125_UnitDelay_DSTATE;        /* '<S125>/Unit Delay' */
  real_T s261_UnitDelay2_DSTATE;       /* '<S261>/Unit Delay2' */
  real_T s261_UnitDelay1_DSTATE;       /* '<S261>/Unit Delay1' */
  real_T s271_UnitDelay_DSTATE;        /* '<S271>/Unit Delay' */
  real_T s133_UnitDelay_DSTATE;        /* '<S133>/Unit Delay' */
  real_T s262_UnitDelay2_DSTATE;       /* '<S262>/Unit Delay2' */
  real_T s262_UnitDelay1_DSTATE;       /* '<S262>/Unit Delay1' */
  real_T s251_UnitDelay_DSTATE;        /* '<S251>/Unit Delay' */
  real_T s250_UnitDelay_DSTATE;        /* '<S250>/Unit Delay' */
  real_T s34_UnitDelay1_DSTATE;        /* '<S34>/Unit Delay1' */
  real_T s34_UnitDelay_DSTATE;         /* '<S34>/Unit Delay' */
  real_T s38_UnitDelay_DSTATE;         /* '<S38>/Unit Delay' */
  real_T s52_UnitDelay_DSTATE;         /* '<S52>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s59_UnitDelay_DSTATE;         /* '<S59>/Unit Delay' */
  real_T s51_UnitDelay_DSTATE;         /* '<S51>/Unit Delay' */
  real_T s154_UnitDelay_DSTATE;        /* '<S154>/Unit Delay' */
  real_T s155_UnitDelay_DSTATE;        /* '<S155>/Unit Delay' */
  real_T s159_UnitDelay_DSTATE;        /* '<S159>/Unit Delay' */
  real_T s160_UnitDelay_DSTATE;        /* '<S160>/Unit Delay' */
  real_T s261_UnitDelay_DSTATE;        /* '<S261>/Unit Delay' */
  real_T s262_UnitDelay_DSTATE;        /* '<S262>/Unit Delay' */
  struct {
    void *uBuffers;
  } s194_SFunction_PWORK;              /* '<S194>/S-Function ' */

  int32_T s637_motorcount;             /* '<S373>/OnOff Delay' */
  uint32_T s295_motohawk_delta_time_DWORK1;/* '<S295>/motohawk_delta_time' */
  uint32_T s299_motohawk_delta_time_DWORK1;/* '<S299>/motohawk_delta_time' */
  uint32_T s122_motohawk_delta_time_DWORK1;/* '<S122>/motohawk_delta_time' */
  uint32_T s270_motohawk_delta_time_DWORK1;/* '<S270>/motohawk_delta_time' */
  uint32_T s269_motohawk_delta_time_DWORK1;/* '<S269>/motohawk_delta_time' */
  uint32_T s118_motohawk_delta_time_DWORK1;/* '<S118>/motohawk_delta_time' */
  uint32_T s273_motohawk_delta_time_DWORK1;/* '<S273>/motohawk_delta_time' */
  uint32_T s16_motohawk_delta_time_DWORK1;/* '<S16>/motohawk_delta_time' */
  uint32_T s246_motohawk_delta_time_DWORK1;/* '<S246>/motohawk_delta_time' */
  uint32_T s433_motohawk_delta_time_DWORK1;/* '<S433>/motohawk_delta_time' */
  uint32_T s245_motohawk_delta_time_DWORK1;/* '<S245>/motohawk_delta_time' */
  uint32_T s430_motohawk_delta_time_DWORK1;/* '<S430>/motohawk_delta_time' */
  uint32_T s431_motohawk_delta_time_DWORK1;/* '<S431>/motohawk_delta_time' */
  uint32_T s432_motohawk_delta_time_DWORK1;/* '<S432>/motohawk_delta_time' */
  uint32_T s490_motohawk_delta_time_DWORK1;/* '<S490>/motohawk_delta_time' */
  uint32_T s39_motohawk_delta_time_DWORK1;/* '<S39>/motohawk_delta_time' */
  uint32_T s40_motohawk_delta_time_DWORK1;/* '<S40>/motohawk_delta_time' */
  uint32_T s41_motohawk_delta_time_DWORK1;/* '<S41>/motohawk_delta_time' */
  uint32_T s42_motohawk_delta_time_DWORK1;/* '<S42>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s44_motohawk_delta_time_DWORK1;/* '<S44>/motohawk_delta_time' */
  uint32_T s298_motohawk_delta_time_DWORK1;/* '<S298>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s296_motohawk_delta_time_DWORK1;/* '<S296>/motohawk_delta_time' */
  uint32_T s66_motohawk_delta_time_DWORK1;/* '<S66>/motohawk_delta_time' */
  uint32_T s67_motohawk_delta_time_DWORK1;/* '<S67>/motohawk_delta_time' */
  uint32_T s68_motohawk_delta_time_DWORK1;/* '<S68>/motohawk_delta_time' */
  uint32_T s69_motohawk_delta_time_DWORK1;/* '<S69>/motohawk_delta_time' */
  uint32_T s17_motohawk_delta_time_DWORK1;/* '<S17>/motohawk_delta_time' */
  uint32_T s103_motohawk_delta_time_DWORK1;/* '<S103>/motohawk_delta_time' */
  uint32_T s127_motohawk_delta_time_DWORK1;/* '<S127>/motohawk_delta_time' */
  uint32_T s154_motohawk_delta_time_DWORK1;/* '<S154>/motohawk_delta_time' */
  uint32_T s155_motohawk_delta_time_DWORK1;/* '<S155>/motohawk_delta_time' */
  uint32_T s159_motohawk_delta_time_DWORK1;/* '<S159>/motohawk_delta_time' */
  uint32_T s160_motohawk_delta_time_DWORK1;/* '<S160>/motohawk_delta_time' */
  uint32_T s637_presentTicks;          /* '<S373>/OnOff Delay' */
  uint32_T s637_elapsedTicks;          /* '<S373>/OnOff Delay' */
  uint32_T s637_previousTicks;         /* '<S373>/OnOff Delay' */
  uint32_T s197_presentTicks;          /* '<S12>/Chart' */
  uint32_T s197_elapsedTicks;          /* '<S12>/Chart' */
  uint32_T s197_previousTicks;         /* '<S12>/Chart' */
  struct {
    int_T indPs;
    int_T bufSz;
  } s194_SFunction_IWORK;              /* '<S194>/S-Function ' */

  uint16_T s55_UnitDelay_DSTATE;       /* '<S55>/Unit Delay' */
  uint16_T s690_UnitDelay_DSTATE;      /* '<S690>/Unit Delay' */
  uint16_T s690_UnitDelay1_DSTATE;     /* '<S690>/Unit Delay1' */
  uint16_T s55_motohawk_fault_def2_DWORK1;/* '<S55>/motohawk_fault_def2' */
  uint8_T s95_DelayInput1_DSTATE;      /* '<S95>/Delay Input1' */
  boolean_T s7_UnitDelay3_DSTATE;      /* '<S7>/Unit Delay3' */
  boolean_T s7_UnitDelay_DSTATE;       /* '<S7>/Unit Delay' */
  boolean_T s7_UnitDelay1_DSTATE;      /* '<S7>/Unit Delay1' */
  boolean_T s7_UnitDelay2_DSTATE;      /* '<S7>/Unit Delay2' */
  boolean_T s61_DelayInput1_DSTATE;    /* '<S61>/Delay Input1' */
  boolean_T s62_DelayInput1_DSTATE;    /* '<S62>/Delay Input1' */
  boolean_T s63_DelayInput1_DSTATE;    /* '<S63>/Delay Input1' */
  boolean_T s64_DelayInput1_DSTATE;    /* '<S64>/Delay Input1' */
  boolean_T s60_DelayInput1_DSTATE;    /* '<S60>/Delay Input1' */
  boolean_T s91_DelayInput1_DSTATE;    /* '<S91>/Delay Input1' */
  boolean_T s92_DelayInput1_DSTATE;    /* '<S92>/Delay Input1' */
  boolean_T s106_DelayInput1_DSTATE;   /* '<S106>/Delay Input1' */
  boolean_T s691_UnitDelay_DSTATE;     /* '<S691>/Unit Delay' */
  boolean_T s701_UnitDelay_DSTATE;     /* '<S701>/Unit Delay' */
  boolean_T s689_UnitDelay5_DSTATE;    /* '<S689>/Unit Delay5' */
  boolean_T s689_UnitDelay2_DSTATE;    /* '<S689>/Unit Delay2' */
  boolean_T s689_UnitDelay_DSTATE;     /* '<S689>/Unit Delay' */
  boolean_T s689_UnitDelay1_DSTATE;    /* '<S689>/Unit Delay1' */
  boolean_T s689_UnitDelay3_DSTATE;    /* '<S689>/Unit Delay3' */
  boolean_T s689_UnitDelay4_DSTATE;    /* '<S689>/Unit Delay4' */
  uint8_T s637_is_active_c4_Mooventure2016_Rev5;/* '<S373>/OnOff Delay' */
  uint8_T s637_is_c4_Mooventure2016_Rev5;/* '<S373>/OnOff Delay' */
  uint8_T s637_temporalCounter_i1;     /* '<S373>/OnOff Delay' */
  uint8_T s492_is_active_c28_Mooventure2016_Rev5;/* '<S371>/PowerSteering' */
  uint8_T s492_is_c28_Mooventure2016_Rev5;/* '<S371>/PowerSteering' */
  uint8_T s487_is_active_c22_Mooventure2016_Rev5;/* '<S371>/Chart' */
  uint8_T s487_is_c22_Mooventure2016_Rev5;/* '<S371>/Chart' */
  uint8_T s466_is_active_c10_Mooventure2016_Rev5;/* '<S370>/Coil2State1' */
  uint8_T s466_is_c10_Mooventure2016_Rev5;/* '<S370>/Coil2State1' */
  uint8_T s465_is_active_c9_Mooventure2016_Rev5;/* '<S370>/Coil2State' */
  uint8_T s465_is_c9_Mooventure2016_Rev5;/* '<S370>/Coil2State' */
  uint8_T s464_is_active_c8_Mooventure2016_Rev5;/* '<S370>/Coil1State' */
  uint8_T s464_is_c8_Mooventure2016_Rev5;/* '<S370>/Coil1State' */
  uint8_T s289_is_active_c29_Mooventure2016_Rev5;/* '<S202>/Chart' */
  uint8_T s289_is_c29_Mooventure2016_Rev5;/* '<S202>/Chart' */
  uint8_T s197_is_active_c1_Mooventure2016_Rev5;/* '<S12>/Chart' */
  uint8_T s197_is_c1_Mooventure2016_Rev5;/* '<S12>/Chart' */
  uint8_T s197_temporalCounter_i1;     /* '<S12>/Chart' */
  uint8_T s90_is_active_c30_Mooventure2016_Rev5;/* '<S72>/SystemState' */
  uint8_T s90_is_c30_Mooventure2016_Rev5;/* '<S72>/SystemState' */
  uint8_T s23_is_active_c15_Mooventure2016_Rev5;/* '<S7>/PumpState' */
  uint8_T s23_is_c15_Mooventure2016_Rev5;/* '<S7>/PumpState' */
  uint8_T s20_is_active_c12_Mooventure2016_Rev5;/* '<S7>/BlendValving' */
  uint8_T s20_is_c12_Mooventure2016_Rev5;/* '<S7>/BlendValving' */
  boolean_T s76_Drive_MODE;            /* '<S76>/Drive' */
  boolean_T s76_Reverse_MODE;          /* '<S76>/Reverse' */
  rtDW_Chart_Mooventure2016_Rev5_o s489_sf_BarChartReset;/* '<S489>/Bar Chart Reset' */
  rtDW_Chart_Mooventure2016_Rev5_f s262_sf_Chart;/* '<S262>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5_f s261_sf_Chart;/* '<S261>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5_o s149_sf_BarChartReset;/* '<S149>/Bar Chart Reset' */
  rtDW_Chart_Mooventure2016_Rev5_o s149_sf_BarChart;/* '<S149>/Bar Chart' */
  rtDW_Chart_Mooventure2016_Rev5_o s169_sf_Chart;/* '<S169>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s77_sf_Chart;/* '<S77>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s73_sf_Chart;/* '<S73>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s71_sf_Chart;/* '<S71>/Chart' */
} D_Work_Mooventure2016_Rev5;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S38>/Triggered Subsystem' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S689>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S689>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S689>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S689>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S693>/Clear' */
  ZCSigState Clear_Trig_ZCE_i;         /* '<S692>/Clear' */
} PrevZCSigStates_Mooventure2016_Rev5;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s368_OdometerValue;     /* '<S368>/To km' */
  const boolean_T s127_DataTypeConversion;/* '<S127>/Data Type Conversion' */
  const boolean_T s490_DataTypeConversion;/* '<S490>/Data Type Conversion' */
  const boolean_T s154_DataTypeConversion;/* '<S154>/Data Type Conversion' */
  const boolean_T s155_DataTypeConversion;/* '<S155>/Data Type Conversion' */
  const boolean_T s159_DataTypeConversion;/* '<S159>/Data Type Conversion' */
  const boolean_T s160_DataTypeConversion;/* '<S160>/Data Type Conversion' */
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
 * '<S8>'   : Mooventure2016_Rev5/Foreground/Control/Faults
 * '<S9>'   : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code
 * '<S10>'  : Mooventure2016_Rev5/Foreground/Control/Infotainment
 * '<S11>'  : Mooventure2016_Rev5/Foreground/Control/Suspension Control
 * '<S12>'  : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination
 * '<S13>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Compare To Constant
 * '<S14>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence
 * '<S15>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4
 * '<S16>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)1
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
 * '<S30>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories
 * '<S31>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery
 * '<S32>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame
 * '<S33>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train
 * '<S34>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves
 * '<S35>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Charger
 * '<S36>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/DC-DC Converter
 * '<S37>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors
 * '<S38>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System
 * '<S39>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)1
 * '<S40>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)2
 * '<S41>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)1
 * '<S42>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)2
 * '<S43>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)3
 * '<S44>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Contactors/Time Since Enabled (With Input)4
 * '<S45>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System/Triggered Subsystem
 * '<S46>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/2G BMS & Comms
 * '<S47>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Precharge
 * '<S48>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Temperature
 * '<S49>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write
 * '<S50>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write/Data Iterator
 * '<S51>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/12V Battery
 * '<S52>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Brake Pedal
 * '<S53>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control
 * '<S54>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor
 * '<S55>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gas Pedal
 * '<S56>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gear Selector
 * '<S57>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Ignition Key
 * '<S58>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control
 * '<S59>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor
 * '<S60>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change
 * '<S61>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change1
 * '<S62>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change2
 * '<S63>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change3
 * '<S64>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change4
 * '<S65>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault
 * '<S66>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive
 * '<S67>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive1
 * '<S68>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive2
 * '<S69>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control/Derivitive3
 * '<S70>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor/Data Correction
 * '<S71>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode
 * '<S72>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control
 * '<S73>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode
 * '<S74>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Embedded MATLAB Function
 * '<S75>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1
 * '<S76>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT
 * '<S77>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode
 * '<S78>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Safety
 * '<S79>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control
 * '<S80>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs
 * '<S81>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Brake Pedal Scaling
 * '<S82>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart
 * '<S83>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Gas Pedal Scaling
 * '<S84>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/SOC_RampOut
 * '<S85>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Brake Disable
 * '<S86>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing
 * '<S87>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control
 * '<S88>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume
 * '<S89>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/System Start
 * '<S90>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/SystemState
 * '<S91>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase
 * '<S92>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase1
 * '<S93>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Decrease
 * '<S94>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Increase
 * '<S95>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive
 * '<S96>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)
 * '<S97>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive/Positive
 * '<S98>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S99>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S100>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S101>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive2
 * '<S102>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S103>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S104>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S105>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S106>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Detect Increase
 * '<S107>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Enabled Subsystem1
 * '<S108>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Brake Pedal Scaling
 * '<S109>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Chart
 * '<S110>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Gas Pedal Scaling
 * '<S111>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function
 * '<S112>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function
 * '<S113>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant
 * '<S114>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant1
 * '<S115>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant2
 * '<S116>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest
 * '<S117>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive
 * '<S118>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)
 * '<S119>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Neutral
 * '<S120>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse
 * '<S121>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs
 * '<S122>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)
 * '<S123>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator
 * '<S124>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/motohawk_table_1d
 * '<S125>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S126>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier
 * '<S127>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator
 * '<S128>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier/Compare To Zero
 * '<S129>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator/Saturation
 * '<S130>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4
 * '<S131>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue
 * '<S132>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue
 * '<S133>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S134>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4
 * '<S135>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue
 * '<S136>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue
 * '<S137>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue
 * '<S138>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue
 * '<S139>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Brake Pedal Scaling
 * '<S140>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Chart
 * '<S141>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Gas Pedal Scaling
 * '<S142>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Torque Limiter
 * '<S143>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue
 * '<S144>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue
 * '<S145>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Battery Calculations
 * '<S146>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations
 * '<S147>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe
 * '<S148>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages
 * '<S149>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations
 * '<S150>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Power Flow
 * '<S151>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Battery Calculations/Batt Enabled Subsystem
 * '<S152>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A
 * '<S153>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B
 * '<S154>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A/Integrator
 * '<S155>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A/Integrator1
 * '<S156>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A/Trip A Reset
 * '<S157>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A/Integrator/Saturation
 * '<S158>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip A/Integrator1/Saturation
 * '<S159>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B/Integrator
 * '<S160>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B/Integrator1
 * '<S161>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B/Trip B Reset
 * '<S162>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B/Integrator/Saturation
 * '<S163>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Cost Calculations/Trip B/Integrator1/Saturation
 * '<S164>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/Data Correction
 * '<S165>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs
 * '<S166>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/NewValue
 * '<S167>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/OldValue
 * '<S168>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Best Average
 * '<S169>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Global Average
 * '<S170>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Previous Average
 * '<S171>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Best Average/Enabled Subsystem
 * '<S172>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart
 * '<S173>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Global Average/Enabled Subsystem MPGe
 * '<S174>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Averages/Previous Average/Enabled Subsystem
 * '<S175>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Bar Chart
 * '<S176>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Bar Chart Reset
 * '<S177>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Bar Enabled Subsystem
 * '<S178>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Bar Reset
 * '<S179>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color1
 * '<S180>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color10
 * '<S181>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color11
 * '<S182>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color12
 * '<S183>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color13
 * '<S184>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color14
 * '<S185>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color15
 * '<S186>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color2
 * '<S187>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color3
 * '<S188>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color4
 * '<S189>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color5
 * '<S190>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color6
 * '<S191>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color7
 * '<S192>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color8
 * '<S193>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Color9
 * '<S194>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe Bar Calculations/Discrete Shift Register
 * '<S195>' : Mooventure2016_Rev5/Foreground/Control/Infotainment/Power Flow/Data Correction Motor
 * '<S196>' : Mooventure2016_Rev5/Foreground/Control/Suspension Control/Detect Change
 * '<S197>' : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S198>' : Mooventure2016_Rev5/Foreground/Inputs/ABS
 * '<S199>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs
 * '<S200>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs
 * '<S201>' : Mooventure2016_Rev5/Foreground/Inputs/Charger Param
 * '<S202>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control
 * '<S203>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs
 * '<S204>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger
 * '<S205>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs
 * '<S206>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs
 * '<S207>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel
 * '<S208>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1
 * '<S209>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10
 * '<S210>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11
 * '<S211>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2
 * '<S212>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3
 * '<S213>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4
 * '<S214>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5
 * '<S215>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6
 * '<S216>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7
 * '<S217>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8
 * '<S218>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9
 * '<S219>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue
 * '<S220>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue
 * '<S221>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue
 * '<S222>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue
 * '<S223>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue
 * '<S224>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue
 * '<S225>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue
 * '<S226>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue
 * '<S227>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue
 * '<S228>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue
 * '<S229>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue
 * '<S230>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue
 * '<S231>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue
 * '<S232>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue
 * '<S233>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue
 * '<S234>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue
 * '<S235>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue
 * '<S236>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue
 * '<S237>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue
 * '<S238>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue
 * '<S239>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue
 * '<S240>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue
 * '<S241>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Contactors
 * '<S242>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant
 * '<S243>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter
 * '<S244>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function
 * '<S245>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass
 * '<S246>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass
 * '<S247>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1
 * '<S248>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12
 * '<S249>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2
 * '<S250>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass/First Order Low Pass
 * '<S251>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass/First Order Low Pass
 * '<S252>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue
 * '<S253>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue
 * '<S254>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue
 * '<S255>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue
 * '<S256>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue
 * '<S257>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue
 * '<S258>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12
 * '<S259>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue
 * '<S260>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue
 * '<S261>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter
 * '<S262>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter
 * '<S263>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs
 * '<S264>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2
 * '<S265>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3
 * '<S266>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4
 * '<S267>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5
 * '<S268>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/Chart
 * '<S269>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)
 * '<S270>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/Time Since Enabled (With Input)1
 * '<S271>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S272>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/Chart
 * '<S273>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/Time Since Enabled (With Input)1
 * '<S274>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue
 * '<S275>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue
 * '<S276>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue
 * '<S277>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue
 * '<S278>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue
 * '<S279>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue
 * '<S280>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue
 * '<S281>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue
 * '<S282>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue
 * '<S283>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue
 * '<S284>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1
 * '<S285>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2
 * '<S286>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3
 * '<S287>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4
 * '<S288>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5
 * '<S289>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Chart
 * '<S290>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant
 * '<S291>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant1
 * '<S292>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant2
 * '<S293>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant3
 * '<S294>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant4
 * '<S295>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S296>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S297>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S298>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S299>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S300>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function
 * '<S301>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1
 * '<S302>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2
 * '<S303>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1
 * '<S304>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2
 * '<S305>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3
 * '<S306>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4
 * '<S307>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5
 * '<S308>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6
 * '<S309>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7
 * '<S310>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8
 * '<S311>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9
 * '<S312>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue
 * '<S313>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue
 * '<S314>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue
 * '<S315>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue
 * '<S316>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue
 * '<S317>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue
 * '<S318>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue
 * '<S319>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue
 * '<S320>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue
 * '<S321>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue
 * '<S322>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue
 * '<S323>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue
 * '<S324>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue
 * '<S325>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue
 * '<S326>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue
 * '<S327>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue
 * '<S328>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue
 * '<S329>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue
 * '<S330>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/Subsystem
 * '<S331>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7
 * '<S332>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue
 * '<S333>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue
 * '<S334>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1
 * '<S335>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2
 * '<S336>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3
 * '<S337>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4
 * '<S338>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5
 * '<S339>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6
 * '<S340>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7
 * '<S341>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/NewValue
 * '<S342>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/OldValue
 * '<S343>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/NewValue
 * '<S344>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/OldValue
 * '<S345>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/NewValue
 * '<S346>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/OldValue
 * '<S347>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/NewValue
 * '<S348>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/OldValue
 * '<S349>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/NewValue
 * '<S350>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/OldValue
 * '<S351>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/NewValue
 * '<S352>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/OldValue
 * '<S353>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/NewValue
 * '<S354>' : Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/OldValue
 * '<S355>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1
 * '<S356>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2
 * '<S357>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3
 * '<S358>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7
 * '<S359>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue
 * '<S360>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue
 * '<S361>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue
 * '<S362>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue
 * '<S363>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue
 * '<S364>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue
 * '<S365>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue
 * '<S366>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue
 * '<S367>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs
 * '<S368>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs
 * '<S369>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs
 * '<S370>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox
 * '<S371>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs
 * '<S372>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger
 * '<S373>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs
 * '<S374>' : Mooventure2016_Rev5/Foreground/Outputs/Infotainment Outputs
 * '<S375>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Data Correction Motor ABS
 * '<S376>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Shift Position Conditioner
 * '<S377>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs
 * '<S378>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1
 * '<S379>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2
 * '<S380>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3
 * '<S381>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4
 * '<S382>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5
 * '<S383>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6
 * '<S384>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7
 * '<S385>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue
 * '<S386>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue
 * '<S387>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue
 * '<S388>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue
 * '<S389>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue
 * '<S390>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue
 * '<S391>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue
 * '<S392>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue
 * '<S393>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue
 * '<S394>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue
 * '<S395>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue
 * '<S396>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue
 * '<S397>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue
 * '<S398>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue
 * '<S399>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue
 * '<S400>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue
 * '<S401>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs
 * '<S402>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1
 * '<S403>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue
 * '<S404>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue
 * '<S405>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue
 * '<S406>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue
 * '<S407>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Compare To Constant
 * '<S408>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1
 * '<S409>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2
 * '<S410>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3
 * '<S411>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4
 * '<S412>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Fan Adapter
 * '<S413>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Heater Core Motion Control
 * '<S414>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Radiator Motion Control
 * '<S415>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1
 * '<S416>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10
 * '<S417>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11
 * '<S418>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12
 * '<S419>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13
 * '<S420>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14
 * '<S421>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15
 * '<S422>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2
 * '<S423>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3
 * '<S424>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4
 * '<S425>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5
 * '<S426>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6
 * '<S427>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7
 * '<S428>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8
 * '<S429>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9
 * '<S430>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1/Time Since Enabled (With Input)4
 * '<S431>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2/Time Since Enabled (With Input)4
 * '<S432>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3/Time Since Enabled (With Input)4
 * '<S433>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4/Time Since Enabled (With Input)4
 * '<S434>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue
 * '<S435>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue
 * '<S436>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue
 * '<S437>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue
 * '<S438>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue
 * '<S439>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue
 * '<S440>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue
 * '<S441>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue
 * '<S442>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue
 * '<S443>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue
 * '<S444>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue
 * '<S445>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue
 * '<S446>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue
 * '<S447>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue
 * '<S448>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue
 * '<S449>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue
 * '<S450>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue
 * '<S451>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue
 * '<S452>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue
 * '<S453>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue
 * '<S454>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue
 * '<S455>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue
 * '<S456>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue
 * '<S457>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue
 * '<S458>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue
 * '<S459>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue
 * '<S460>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue
 * '<S461>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue
 * '<S462>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue
 * '<S463>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue
 * '<S464>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil1State
 * '<S465>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State
 * '<S466>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State1
 * '<S467>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Compare To Constant
 * '<S468>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Heat Check
 * '<S469>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10
 * '<S470>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11
 * '<S471>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6
 * '<S472>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7
 * '<S473>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8
 * '<S474>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9
 * '<S475>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue
 * '<S476>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue
 * '<S477>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue
 * '<S478>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue
 * '<S479>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue
 * '<S480>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue
 * '<S481>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue
 * '<S482>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue
 * '<S483>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue
 * '<S484>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue
 * '<S485>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue
 * '<S486>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue
 * '<S487>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Chart
 * '<S488>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function
 * '<S489>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Enabled Subsystem
 * '<S490>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator
 * '<S491>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO_CALC
 * '<S492>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/PowerSteering
 * '<S493>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing
 * '<S494>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1
 * '<S495>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10
 * '<S496>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11
 * '<S497>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12
 * '<S498>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13
 * '<S499>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14
 * '<S500>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15
 * '<S501>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2
 * '<S502>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3
 * '<S503>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4
 * '<S504>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5
 * '<S505>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6
 * '<S506>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7
 * '<S507>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8
 * '<S508>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9
 * '<S509>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Enabled Subsystem/Bar Chart Reset
 * '<S510>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator/Saturation
 * '<S511>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20
 * '<S512>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21
 * '<S513>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22
 * '<S514>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23
 * '<S515>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24
 * '<S516>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25
 * '<S517>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26
 * '<S518>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27
 * '<S519>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28
 * '<S520>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29
 * '<S521>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30
 * '<S522>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31
 * '<S523>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32
 * '<S524>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33
 * '<S525>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34
 * '<S526>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35
 * '<S527>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36
 * '<S528>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37
 * '<S529>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38
 * '<S530>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39
 * '<S531>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40
 * '<S532>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41
 * '<S533>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42
 * '<S534>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43
 * '<S535>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44
 * '<S536>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45
 * '<S537>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue
 * '<S538>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue
 * '<S539>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue
 * '<S540>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue
 * '<S541>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue
 * '<S542>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue
 * '<S543>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue
 * '<S544>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue
 * '<S545>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue
 * '<S546>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue
 * '<S547>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue
 * '<S548>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue
 * '<S549>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue
 * '<S550>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue
 * '<S551>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue
 * '<S552>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue
 * '<S553>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue
 * '<S554>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue
 * '<S555>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue
 * '<S556>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue
 * '<S557>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue
 * '<S558>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue
 * '<S559>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue
 * '<S560>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue
 * '<S561>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue
 * '<S562>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue
 * '<S563>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue
 * '<S564>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue
 * '<S565>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue
 * '<S566>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue
 * '<S567>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue
 * '<S568>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue
 * '<S569>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue
 * '<S570>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue
 * '<S571>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue
 * '<S572>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue
 * '<S573>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue
 * '<S574>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue
 * '<S575>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue
 * '<S576>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue
 * '<S577>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue
 * '<S578>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue
 * '<S579>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue
 * '<S580>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue
 * '<S581>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue
 * '<S582>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue
 * '<S583>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue
 * '<S584>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue
 * '<S585>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue
 * '<S586>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue
 * '<S587>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue
 * '<S588>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue
 * '<S589>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue
 * '<S590>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue
 * '<S591>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue
 * '<S592>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue
 * '<S593>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue
 * '<S594>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue
 * '<S595>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue
 * '<S596>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue
 * '<S597>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue
 * '<S598>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue
 * '<S599>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue
 * '<S600>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue
 * '<S601>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue
 * '<S602>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue
 * '<S603>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue
 * '<S604>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue
 * '<S605>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue
 * '<S606>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue
 * '<S607>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue
 * '<S608>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue
 * '<S609>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue
 * '<S610>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue
 * '<S611>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue
 * '<S612>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue
 * '<S613>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue
 * '<S614>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue
 * '<S615>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue
 * '<S616>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue
 * '<S617>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue
 * '<S618>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue
 * '<S619>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=1_Standby
 * '<S620>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=2_Charging
 * '<S621>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1
 * '<S622>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2
 * '<S623>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3
 * '<S624>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4
 * '<S625>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5
 * '<S626>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue
 * '<S627>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue
 * '<S628>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue
 * '<S629>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue
 * '<S630>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue
 * '<S631>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue
 * '<S632>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue
 * '<S633>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue
 * '<S634>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue
 * '<S635>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue
 * '<S636>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Compare To Constant
 * '<S637>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/OnOff Delay
 * '<S638>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs
 * '<S639>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1
 * '<S640>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10
 * '<S641>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11
 * '<S642>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12
 * '<S643>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13
 * '<S644>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14
 * '<S645>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15
 * '<S646>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16
 * '<S647>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17
 * '<S648>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2
 * '<S649>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3
 * '<S650>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4
 * '<S651>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5
 * '<S652>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6
 * '<S653>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7
 * '<S654>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8
 * '<S655>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue
 * '<S656>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue
 * '<S657>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue
 * '<S658>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue
 * '<S659>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue
 * '<S660>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue
 * '<S661>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue
 * '<S662>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue
 * '<S663>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue
 * '<S664>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue
 * '<S665>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue
 * '<S666>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue
 * '<S667>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue
 * '<S668>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue
 * '<S669>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue
 * '<S670>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue
 * '<S671>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue
 * '<S672>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue
 * '<S673>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue
 * '<S674>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue
 * '<S675>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue
 * '<S676>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue
 * '<S677>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue
 * '<S678>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue
 * '<S679>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue
 * '<S680>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue
 * '<S681>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue
 * '<S682>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue
 * '<S683>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue
 * '<S684>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue
 * '<S685>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue
 * '<S686>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue
 * '<S687>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue
 * '<S688>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue
 * '<S689>' : Mooventure2016_Rev5/Main Power Relay1/Background
 * '<S690>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay
 * '<S691>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Boolean
 * '<S692>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call
 * '<S693>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1
 * '<S694>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off
 * '<S695>' : Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot
 * '<S696>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off
 * '<S697>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128
 * '<S698>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs
 * '<S699>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem
 * '<S700>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem
 * '<S701>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S702>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear
 * '<S703>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear
 * '<S704>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S705>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S706>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S707>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue
 * '<S708>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
