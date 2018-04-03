/*
 * File: cx06_MA.h
 *
 * Real-Time Workshop code generated for Simulink model cx06_MA.
 *
 * Model version                        : 1.1504
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Wed Mar 08 22:41:38 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Wed Mar 08 22:41:40 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_cx06_MA_h_
#define RTW_HEADER_cx06_MA_h_
#ifndef cx06_MA_COMMON_INCLUDES_
# define cx06_MA_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_MAXd_snf.h"
#include "rt_MAXf_snf.h"
#include "rt_MINd_snf.h"
#include "rt_MINf_snf.h"
#include "rt_SATURATE.h"
#include "rt_SIGNd_snf.h"
#endif                                 /* cx06_MA_COMMON_INCLUDES_ */

#include "cx06_MA_types.h"

/* Child system includes */
#include "cx06_MA_MainState.h"
#include "cx06_MA_Outputs.h"
#include "cx06_MA_Strategy.h"

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
  real_T s2_DiscreteTimeIntegrator;    /* '<S2>/Discrete-Time Integrator' */
  real_T s2_Sum;                       /* '<S2>/Sum' */
  real_T s2_Product1;                  /* '<S2>/Product1' */
  real_T s2_Sum3;                      /* '<S2>/Sum3' */
  real_T s75_Product1;                 /* '<S75>/Product1' */
  real_T s103_Saturation;              /* '<S103>/Saturation' */
  real_T s91_Gain1;                    /* '<S91>/Gain1' */
  real_T s125_Merge;                   /* '<S125>/Merge' */
  real_T s126_Merge;                   /* '<S126>/Merge' */
  real_T s127_Merge;                   /* '<S127>/Merge' */
  real_T s128_Merge;                   /* '<S128>/Merge' */
  real_T s143_Merge;                   /* '<S143>/Merge' */
  real_T s145_Merge;                   /* '<S145>/Merge' */
  real_T s147_Merge;                   /* '<S147>/Merge' */
  real_T s149_Merge;                   /* '<S149>/Merge' */
  real_T s184_Merge;                   /* '<S184>/Merge' */
  real_T s195_Merge;                   /* '<S195>/Merge' */
  real_T s204_Merge;                   /* '<S204>/Merge' */
  real_T s205_Merge;                   /* '<S205>/Merge' */
  real_T s206_Merge;                   /* '<S206>/Merge' */
  real_T s208_Merge;                   /* '<S208>/Merge' */
  real_T s175_Merge;                   /* '<S175>/Merge' */
  real_T s176_Merge;                   /* '<S176>/Merge' */
  real_T s177_Merge;                   /* '<S177>/Merge' */
  real_T s210_Switch;                  /* '<S210>/Switch' */
  real_T s168_Sum1;                    /* '<S168>/Sum1' */
  real_T s168_Saturation;              /* '<S168>/Saturation' */
  real_T s188_Merge;                   /* '<S188>/Merge' */
  real_T s192_Merge;                   /* '<S192>/Merge' */
  real_T s193_Merge;                   /* '<S193>/Merge' */
  real_T s194_Merge;                   /* '<S194>/Merge' */
  real_T s198_Merge;                   /* '<S198>/Merge' */
  real_T s80_Torque_Request;           /* '<S80>/Product' */
  real_T s304_Merge;                   /* '<S304>/Merge' */
  real_T s290_Gain1;                   /* '<S290>/Gain1' */
  real_T s335_Merge;                   /* '<S335>/Merge' */
  real_T s336_Merge;                   /* '<S336>/Merge' */
  real_T s337_Merge;                   /* '<S337>/Merge' */
  real_T s338_Merge;                   /* '<S338>/Merge' */
  real_T s339_Merge;                   /* '<S339>/Merge' */
  real_T s340_Merge;                   /* '<S340>/Merge' */
  real_T s376_Product;                 /* '<S376>/Product' */
  real_T s376_Saturation;              /* '<S376>/Saturation' */
  real_T s388_Product;                 /* '<S388>/Product' */
  real_T s380_Gain;                    /* '<S380>/Gain' */
  real_T s380_Sum;                     /* '<S380>/Sum' */
  real_T s380_Switch2;                 /* '<S380>/Switch2' */
  real_T s380_MinMax;                  /* '<S380>/MinMax' */
  real_T s380_Saturation;              /* '<S380>/Saturation' */
  real_T root_motor_Torque;            /* '<S365>/Merge' */
  real_T s365_Sum1;                    /* '<S365>/Sum1' */
  real_T s384_rear_max_torque_aval;    /* '<S384>/Saturation1' */
  real_T s365_motor_torque;            /* '<S365>/Saturation' */
  real_T root_motor_Enable;            /* '<S365>/Merge' */
  real_T root_engine_Torque;           /* '<S365>/Merge' */
  real_T s384_Saturation2;             /* '<S384>/Saturation2' */
  real_T s365_engine_Torque;           /* '<S365>/Saturation1' */
  real_T root_KillDelay_Cnt;           /* '<S377>/Switch' */
  real_T root_Kill_Cnt;                /* '<S377>/Switch' */
  real_T root_StartDelay_Cnt;          /* '<S377>/Switch' */
  real_T root_StartRetryDelay_Cnt;     /* '<S377>/Switch' */
  real_T root_StartRetry_Cnt;          /* '<S377>/Switch' */
  real_T root_Start_Cnt;               /* '<S377>/Switch' */
  real_T s366_Gain;                    /* '<S366>/Gain' */
  real_T s366_Sum;                     /* '<S366>/Sum' */
  real_T s366_Product1;                /* '<S366>/Product1' */
  real_T s416_Switch2;                 /* '<S416>/Switch2' */
  real_T s366_Inj_Freq;                /* '<S366>/Product3' */
  real_T s416_Gain1;                   /* '<S416>/Gain1' */
  real_T s420_mult;                    /* '<S417>/Chart' */
  real_T s413_level;                   /* '<S388>/Sustain Brake original' */
  real_T s378_Sum7;                    /* '<S378>/Sum7' */
  real_T s403_Product1;                /* '<S403>/Product1' */
  real_T s381_motor_Torque;            /* '<S381>/Saturation' */
  real_T s408_Product;                 /* '<S408>/Product' */
  real_T s402_KillDelay_Cnt;           /* '<S400>/EngineSS_StateMachine' */
  real_T s402_Kill_Cnt;                /* '<S400>/EngineSS_StateMachine' */
  real_T s402_StartDelay_Cnt;          /* '<S400>/EngineSS_StateMachine' */
  real_T s402_StartRetryDelay_Cnt;     /* '<S400>/EngineSS_StateMachine' */
  real_T s402_StartRetry_Cnt;          /* '<S400>/EngineSS_StateMachine' */
  real_T s402_Start_Cnt;               /* '<S400>/EngineSS_StateMachine' */
  real_T s402_kill;                    /* '<S400>/EngineSS_StateMachine' */
  real_T s402_start;                   /* '<S400>/EngineSS_StateMachine' */
  real_T s401_KillDelay_Cnt;           /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_Kill_Cnt;                /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_StartDelay_Cnt;          /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_StartRetryDelay_Cnt;     /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_StartRetry_Cnt;          /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_Start_Cnt;               /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_kill;                    /* '<S399>/EngineSS_StateMachine1' */
  real_T s401_start;                   /* '<S399>/EngineSS_StateMachine1' */
  real_T s393_Sum;                     /* '<S393>/Sum' */
  real_T s394_Sum;                     /* '<S394>/Sum' */
  real_T s395_Sum;                     /* '<S395>/Sum' */
  real_T s396_Sum;                     /* '<S396>/Sum' */
  real_T s17_AC_Pres;                  /* '<S17>/motohawk_interpolation_1d' */
  real_T s25_Accel;                    /* '<S25>/Switch' */
  real_T s21_WeightedMovingAverage;    /* '<S21>/Weighted Moving Average' */
  real_T s21_MAF;                      /* '<S21>/motohawk_interpolation_1d1' */
  real_T s11_CAN_EWARN2;               /* '<S11>/Read CAN Message1' */
  real_T s11_Output2_V;                /* '<S11>/Read CAN Message1' */
  real_T s11_CAN_EWARN1;               /* '<S11>/Read CAN Message' */
  real_T s11_Output1_V;                /* '<S11>/Read CAN Message' */
  real_T s12_Eng_Spd_V;                /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Effect_Pos_V;        /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Grad_V;              /* '<S12>/Read CAN Message2' */
  real_T s12_Throt_Pos_V;              /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Actual_Pos_V;        /* '<S12>/Read CAN Message2' */
  real_T s12_Eng_Spd;                  /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Effect_Pos;          /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Grad;                /* '<S12>/Read CAN Message2' */
  real_T s12_Throt_Pos;                /* '<S12>/Read CAN Message2' */
  real_T s12_Acel_Actual_Pos;          /* '<S12>/Read CAN Message2' */
  real_T s12_Eng_Torq_Actual_V;        /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Torq_Driver_Reqest_V; /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Max_Drag_Torq_V;      /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Torq_Max_V;           /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Torq_Actual;          /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Torq_Request;         /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Max_Drag_Torq;        /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Torq_Max;             /* '<S12>/Read CAN Message1' */
  real_T s12_Eng_Idle_Spd_V;           /* '<S12>/Read CAN Message3' */
  real_T s12_Eng_Idle_Spd;             /* '<S12>/Read CAN Message3' */
  real_T s12_Base_Target_Eng_Idle_Spd; /* '<S12>/Read CAN Message3' */
  real_T s12_Eng_Airflow_Backup_Mode;  /* '<S12>/Read CAN Message3' */
  real_T s12_Eng_Throt_Control_Operat; /* '<S12>/Read CAN Message3' */
  real_T s12_Eng_Crankshaft_Backup_Mode;/* '<S12>/Read CAN Message3' */
  real_T s12_Eng_Allowed_Clutch_Adapt; /* '<S12>/Read CAN Message3' */
  real_T s12_Brake_Ped_Switch_Active_V;/* '<S12>/Read CAN Message4' */
  real_T s12_Part_Filter_Clean_Alg_Active;/* '<S12>/Read CAN Message4' */
  real_T s12_Fuel_Inj_Roll_Cnt_Reset_Occured;/* '<S12>/Read CAN Message4' */
  real_T s12_Fuel_Lvl_Sensor_Unprocessed_Value_V;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Limp_Home_Mode;       /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Torq_Reduction_Failed;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Fail_Code_Retrieval_Required;/* '<S12>/Read CAN Message4' */
  real_T s12_Generator_Failed;         /* '<S12>/Read CAN Message4' */
  real_T s12_Brake_Ped_Switch;         /* '<S12>/Read CAN Message4' */
  real_T s12_Cruise_Control_Clutch_Switch;/* '<S12>/Read CAN Message4' */
  real_T s12_Cruise_Control_Active;    /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Running_Stat;         /* '<S12>/Read CAN Message4' */
  real_T s12_Warm_Up_Shift_Pattern_Req;/* '<S12>/Read CAN Message4' */
  real_T s12_Rough_Road;               /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Warm_Up_Cycle_Achieved;/* '<S12>/Read CAN Message4' */
  real_T s12_Service_Eng_Non_Emission; /* '<S12>/Read CAN Message4' */
  real_T s12_Cruise_Control_Throt_Cmd_Stat;/* '<S12>/Read CAN Message4' */
  real_T s12_PwrTrn_Brk_Ped_Sec_In_V;  /* '<S12>/Read CAN Message4' */
  real_T s12_PwrTrn_Brk_Ped_Sec_In;    /* '<S12>/Read CAN Message4' */
  real_T s12_PrwTrn_Brk_Ped_In;        /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Oil_Lvl_Low;          /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Oil_Pres_Low;         /* '<S12>/Read CAN Message4' */
  real_T s12_Accel_Kick_Down;          /* '<S12>/Read CAN Message4' */
  real_T s12_PrwTrn_Crank;             /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Trans_Emission_DTC_Stored;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Torq_Tract_Control_Req_Failed;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Torq_Trans_Req_Failed;/* '<S12>/Read CAN Message4' */
  real_T s12_Fuel_Inj_Roll_Cnt;        /* '<S12>/Read CAN Message4' */
  real_T s12_Fuel_Lvl_Sensor_Unprocessed;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Emissions_Malfunction;/* '<S12>/Read CAN Message4' */
  real_T s12_Cruise_Control_Enabled;   /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Coast_Limit_Slip;     /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Coast_Fuel_Cut_Off_Active;/* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Torq_Cruise_Control_Req_Failed;/* '<S12>/Read CAN Message4' */
  real_T s12_PwrTrn_Brk_Ped_In_V;      /* '<S12>/Read CAN Message4' */
  real_T s12_Eng_Boost_Pres_V;         /* '<S12>/Read CAN Message5' */
  real_T s12_Baro_Pres_Abs_V;          /* '<S12>/Read CAN Message5' */
  real_T s12_PwrTrn_Hi_Elect_Load_Req; /* '<S12>/Read CAN Message5' */
  real_T s12_Aply_Brk_Pedal_Ind;       /* '<S12>/Read CAN Message5' */
  real_T s12_Check_Fuel_Cap;           /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Recommend_Shft;       /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_H20_In_Fuel;          /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Boost_Pres;           /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Oil_Remaining_Life;   /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Prod_Option_Ident;    /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Fan_Spd;              /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Gear_Shift_Inh_Req;   /* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Jerk_Shift_Pattern_Req;/* '<S12>/Read CAN Message5' */
  real_T s12_Eng_Ntral_Control_Inh_Req;/* '<S12>/Read CAN Message5' */
  real_T s12_Reduce_Prf_Shft_Ptrn_Req; /* '<S12>/Read CAN Message5' */
  real_T s12_Throt_Progression;        /* '<S12>/Read CAN Message5' */
  real_T s12_PwrTrn_Part_FilterWarning;/* '<S12>/Read CAN Message5' */
  real_T s12_Baro_Pres_Abs;            /* '<S12>/Read CAN Message5' */
  real_T s12_AC_Ref_Hi_Side_Pres_V;    /* '<S12>/Read CAN Message6' */
  real_T s12_AC_Comp_Clutch_Engaged;   /* '<S12>/Read CAN Message6' */
  real_T s12_AC_Comp_Stroke_Req;       /* '<S12>/Read CAN Message6' */
  real_T s12_AC_Off_Ind;               /* '<S12>/Read CAN Message6' */
  real_T s12_AC_Ref_Hi_Side_Pres;      /* '<S12>/Read CAN Message6' */
  real_T s12_Veh_Spd_V;                /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Lft_V;      /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Lft_Reset;  /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Rht_V;      /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Rht_Reset;  /* '<S12>/Read CAN Message7' */
  real_T s12_Veh_Spd;                  /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Lft;        /* '<S12>/Read CAN Message7' */
  real_T s12_Dist_Roll_Cnt_Rht;        /* '<S12>/Read CAN Message7' */
  real_T s12_Eng_Coolant_Temp_V;       /* '<S12>/Read CAN Message8' */
  real_T s12_Eng_Intake_Air_Temp_V;    /* '<S12>/Read CAN Message8' */
  real_T s12_Eng_Coolant_Temp;         /* '<S12>/Read CAN Message8' */
  real_T s12_Eng_Intake_Air_Temp;      /* '<S12>/Read CAN Message8' */
  real_T s13_AC_Clutch_Req;            /* '<S13>/Read CAN Message1' */
  real_T s13_System_Power_Mode;        /* '<S13>/Read CAN Message1' */
  real_T s13_RunCrank_Status;          /* '<S13>/Read CAN Message1' */
  real_T s13_Acc_Status;               /* '<S13>/Read CAN Message1' */
  real_T s13_Park_Brake;               /* '<S13>/Read CAN Message1' */
  real_T s13_FL_Wheel_Vel;             /* '<S13>/Read CAN Message' */
  real_T s13_FL_Wheel_Valid;           /* '<S13>/Read CAN Message' */
  real_T s13_FR_Wheel_Vel;             /* '<S13>/Read CAN Message' */
  real_T s13_FR_Wheel_Valid;           /* '<S13>/Read CAN Message' */
  real_T s13_RL_Wheel_Vel;             /* '<S13>/Read CAN Message' */
  real_T s13_RL_Wheel_Valid;           /* '<S13>/Read CAN Message' */
  real_T s13_RR_Wheel_Vel;             /* '<S13>/Read CAN Message' */
  real_T s13_RR_Wheel_Valid;           /* '<S13>/Read CAN Message' */
  real_T s41_Switch;                   /* '<S41>/Switch' */
  real_T s42_Switch;                   /* '<S42>/Switch' */
  real_T s43_Switch;                   /* '<S43>/Switch' */
  real_T s44_Switch;                   /* '<S44>/Switch' */
  real_T s14_TorqueDelivered;          /* '<S14>/Read CAN Message' */
  real_T s14_DCCurrent;                /* '<S14>/Read CAN Message' */
  real_T s14_DCVoltage;                /* '<S14>/Read CAN Message' */
  real_T s14_MotorSpeed;               /* '<S14>/Read CAN Message' */
  real_T s14_DeratedOperation;         /* '<S14>/Read CAN Message1' */
  real_T s14_EDriveSystemError;        /* '<S14>/Read CAN Message1' */
  real_T s14_EmergencyShutdown;        /* '<S14>/Read CAN Message1' */
  real_T s14_OverCurrentIGBTError;     /* '<S14>/Read CAN Message1' */
  real_T s14_LubeAnalError;            /* '<S14>/Read CAN Message1' */
  real_T s14_EncoderError;             /* '<S14>/Read CAN Message1' */
  real_T s14_OverVoltageError;         /* '<S14>/Read CAN Message1' */
  real_T s14_UnderVoltageError;        /* '<S14>/Read CAN Message1' */
  real_T s14_OverCurrentACError;       /* '<S14>/Read CAN Message1' */
  real_T s14_MotorOverTemp;            /* '<S14>/Read CAN Message1' */
  real_T s14_InverterOverTemp;         /* '<S14>/Read CAN Message1' */
  real_T s14_OverSpeedError;           /* '<S14>/Read CAN Message1' */
  real_T s14_CANError;                 /* '<S14>/Read CAN Message1' */
  real_T s14_UnreasonableLimits;       /* '<S14>/Read CAN Message1' */
  real_T s14_EPOLineError;             /* '<S14>/Read CAN Message1' */
  real_T s14_SensorOutOfRange;         /* '<S14>/Read CAN Message1' */
  real_T s14_VoltageLimitationactive;  /* '<S14>/Read CAN Message1' */
  real_T s14_CurrentLimitiationactive; /* '<S14>/Read CAN Message1' */
  real_T s14_PullOutTorqueProtectionactive;/* '<S14>/Read CAN Message1' */
  real_T s14_PeakLevelOverflow;        /* '<S14>/Read CAN Message1' */
  real_T s14_Paritybitphasecurrent;    /* '<S14>/Read CAN Message1' */
  real_T s14_PhaseCurrentPeakValue;    /* '<S14>/Read CAN Message1' */
  real_T s14_MaxTorqueavailable;       /* '<S14>/Read CAN Message1' */
  real_T s14_MCUReadytoGo;             /* '<S14>/Read CAN Message1' */
  real_T s14_MCUHardwareSoftwareError; /* '<S14>/Read CAN Message1' */
  real_T s14_MCUSpeedErrorTrackMissing;/* '<S14>/Read CAN Message1' */
  real_T s14_MCUSpeedErrorSpeedJump;   /* '<S14>/Read CAN Message1' */
  real_T s14_ErrorinErrorStore;        /* '<S14>/Read CAN Message1' */
  real_T s14_SupplyLineLowError;       /* '<S14>/Read CAN Message1' */
  real_T s14_MCUOn;                    /* '<S14>/Read CAN Message1' */
  real_T s14_Sw_Ver;                   /* '<S14>/Read CAN Message2' */
  real_T s14_IPT_Ser_Num;              /* '<S14>/Read CAN Message2' */
  real_T s14_Gear_Ratio;               /* '<S14>/Read CAN Message2' */
  real_T s14_Oil_Pressure;             /* '<S14>/Read CAN Message2' */
  real_T s14_Motor_Temp;               /* '<S14>/Read CAN Message2' */
  real_T s14_MCU_Temp;                 /* '<S14>/Read CAN Message2' */
  real_T s14_LV_Current;               /* '<S14>/Read CAN Message3' */
  real_T s14_LV_Voltage;               /* '<S14>/Read CAN Message3' */
  real_T s14_HV_DCDC_Current;          /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_GenError;            /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_HV_Over_I;           /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_HV_Over_V;           /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_LV_Over_I_Buck;      /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_LV_Under_V;          /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_LV_Over_V;           /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_LV_Over_I_Boost;     /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Temp_Reduction;      /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Buck;                /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Boost;               /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Reduce_Buck;         /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Reduce_Boost;        /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_CAN_Err;             /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Meas_Err;            /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_OverTemp;            /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_90I2t;               /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Break;               /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_3x_En;               /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_0C;                  /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_HV_Under_V;          /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_HW_Err;              /* '<S14>/Read CAN Message3' */
  real_T s14_DCDC_Err_in_Store;        /* '<S14>/Read CAN Message3' */
  real_T s49_Divide;                   /* '<S49>/Divide' */
  real_T s15_Voltage;                  /* '<S15>/Read CAN Message' */
  real_T s15_Current;                  /* '<S15>/Read CAN Message' */
  real_T s15_Batt_Temp;                /* '<S15>/Read CAN Message1' */
  real_T s16_Temp_1;                   /* '<S16>/Read CAN Message' */
  real_T s16_Temp_2;                   /* '<S16>/Read CAN Message' */
  real_T s16_Temp_3;                   /* '<S16>/Read CAN Message' */
  real_T s16_Temp_4;                   /* '<S16>/Read CAN Message' */
  real_T s16_Temp_5;                   /* '<S16>/Read CAN Message1' */
  real_T s16_Temp_6;                   /* '<S16>/Read CAN Message1' */
  real_T s16_Temp_7;                   /* '<S16>/Read CAN Message1' */
  real_T s16_Temp_8;                   /* '<S16>/Read CAN Message1' */
  real_T s16_NOxPre_O2;                /* '<S16>/Read CAN Message3' */
  real_T s16_NOxMid_NOx;               /* '<S16>/Read CAN Message5' */
  real_T s16_NOxMid_O2;                /* '<S16>/Read CAN Message5' */
  real_T s16_NOxPost_NOx;              /* '<S16>/Read CAN Message7' */
  real_T s16_NOxPost_O2;               /* '<S16>/Read CAN Message7' */
  real_T s16_NOxPre_CANOpen_Er_Code;   /* '<S16>/Read CAN Message2' */
  real_T s16_NOxPre_CANOpen_Er_Reg;    /* '<S16>/Read CAN Message2' */
  real_T s16_ReadCANMessage2_o3;       /* '<S16>/Read CAN Message2' */
  real_T s16_NOxMid_CANOpen_Er_Code;   /* '<S16>/Read CAN Message4' */
  real_T s16_NOxMid_CANOpen_Er_Reg;    /* '<S16>/Read CAN Message4' */
  real_T s16_ReadCANMessage4_o3;       /* '<S16>/Read CAN Message4' */
  real_T s16_NOxPost_CANOpen_Er_Code;  /* '<S16>/Read CAN Message6' */
  real_T s16_NOxPost_CANOpen_Er_Reg;   /* '<S16>/Read CAN Message6' */
  real_T s16_ReadCANMessage6_o3;       /* '<S16>/Read CAN Message6' */
  real_T s50_SOC;                      /* '<S15>/SOC' */
  real_T s24_cruiseBut;                /* '<S18>/read_Cruise_Buttons' */
  real32_T s4_Gain;                    /* '<S4>/Gain' */
  real32_T s25_Saturation;             /* '<S25>/Saturation' */
  real32_T s25_Saturation1;            /* '<S25>/Saturation1' */
  real32_T s26_Brake;                  /* '<S26>/Saturation2' */
  real32_T s26_BrakeBackup;            /* '<S26>/Saturation5' */
  real32_T s27_Clutch;                 /* '<S27>/Saturation3' */
  real32_T s27_ClutchBackup;           /* '<S27>/Saturation4' */
  real32_T s20_Fuel_Level;             /* '<S20>/Saturation3' */
  uint32_T s21_motohawk_frequency_in;  /* '<S21>/motohawk_frequency_in' */
  uint32_T s11_AgeCount;               /* '<S11>/Read CAN Message1' */
  uint32_T s11_AgeCount_l;             /* '<S11>/Read CAN Message' */
  uint32_T s13_AgeCount;               /* '<S13>/Read CAN Message1' */
  uint32_T s13_AgeCount_e;             /* '<S13>/Read CAN Message' */
  uint32_T s14_AgeCount;               /* '<S14>/Read CAN Message' */
  uint32_T s14_AgeCount_c;             /* '<S14>/Read CAN Message1' */
  uint32_T s14_AgeCount_n;             /* '<S14>/Read CAN Message2' */
  uint32_T s14_AgeCount_b;             /* '<S14>/Read CAN Message3' */
  uint32_T s16_AgeCount;               /* '<S16>/Read CAN Message' */
  uint32_T s16_AgeCount_a;             /* '<S16>/Read CAN Message1' */
  uint32_T s16_ReadCANMessage3_o1;     /* '<S16>/Read CAN Message3' */
  uint32_T s16_ReadCANMessage5_o1;     /* '<S16>/Read CAN Message5' */
  uint32_T s16_ReadCANMessage7_o1;     /* '<S16>/Read CAN Message7' */
  int16_T s7_Merge;                    /* '<S7>/Merge' */
  int16_T s291_Merge;                  /* '<S291>/Merge' */
  uint16_T s2_motohawk_ain1;           /* '<S2>/motohawk_ain1' */
  uint16_T s4_motohawk_ain5_o1;        /* '<S4>/motohawk_ain5' */
  uint16_T s4_motohawk_ain5_o2;        /* '<S4>/motohawk_ain5' */
  uint16_T s4_motohawk_ain1_o1;        /* '<S4>/motohawk_ain1' */
  uint16_T s293_Merge;                 /* '<S293>/Merge' */
  uint16_T s300_Merge;                 /* '<S300>/Merge' */
  uint16_T s301_Merge;                 /* '<S301>/Merge' */
  uint16_T s302_Merge;                 /* '<S302>/Merge' */
  uint16_T s303_Merge;                 /* '<S303>/Merge' */
  uint16_T s420_LeanCnt;               /* '<S417>/Chart' */
  uint16_T s420_RichCnt;               /* '<S417>/Chart' */
  uint16_T s17_motohawk_ain1_o2;       /* '<S17>/motohawk_ain1' */
  uint16_T s18_motohawk_ain2_o1;       /* '<S18>/motohawk_ain2' */
  uint16_T s18_motohawk_ain2_o2;       /* '<S18>/motohawk_ain2' */
  uint16_T s25_motohawk_ain4_o1;       /* '<S25>/motohawk_ain4' */
  uint16_T s25_motohawk_ain4_o2;       /* '<S25>/motohawk_ain4' */
  uint16_T s25_motohawk_ain1_o1;       /* '<S25>/motohawk_ain1' */
  uint16_T s25_motohawk_ain1_o2;       /* '<S25>/motohawk_ain1' */
  uint16_T s26_motohawk_ain2_o1;       /* '<S26>/motohawk_ain2' */
  uint16_T s26_motohawk_ain2_o2;       /* '<S26>/motohawk_ain2' */
  uint16_T s26_motohawk_ain6_o1;       /* '<S26>/motohawk_ain6' */
  uint16_T s26_motohawk_ain6_o2;       /* '<S26>/motohawk_ain6' */
  uint16_T s27_motohawk_ain3_o1;       /* '<S27>/motohawk_ain3' */
  uint16_T s27_motohawk_ain3_o2;       /* '<S27>/motohawk_ain3' */
  uint16_T s27_motohawk_ain5_o1;       /* '<S27>/motohawk_ain5' */
  uint16_T s27_motohawk_ain5_o2;       /* '<S27>/motohawk_ain5' */
  uint16_T s20_motohawk_ain3_o1;       /* '<S20>/motohawk_ain3' */
  uint16_T s20_motohawk_ain3_o2;       /* '<S20>/motohawk_ain3' */
  uint16_T s22_motohawk_din_o2;        /* '<S22>/motohawk_din' */
  uint16_T s22_motohawk_din1_o2;       /* '<S22>/motohawk_din1' */
  uint16_T s16_NOxPre_NOx;             /* '<S16>/Read CAN Message3' */
  index_T s378_motohawk_prelookup_reference;/* '<S378>/motohawk_prelookup_reference' */
  index_T s381_motohawk_prelookup_reference;/* '<S381>/motohawk_prelookup_reference' */
  int8_T s369_Add1;                    /* '<S369>/Add1' */
  int8_T s368_Product;                 /* '<S368>/Product' */
  int8_T s12_Eng_Spd_V_l;              /* '<S12>/Data Type Conversion1' */
  int8_T s12_Acel_Grad_V_h;            /* '<S12>/Data Type Conversion3' */
  int8_T s12_Eng_Torq_Driver_Reqest_V_h;/* '<S12>/Data Type Conversion7' */
  int8_T s12_Eng_Max_Drag_Torq_V_i;    /* '<S12>/Data Type Conversion8' */
  int8_T s12_Eng_Torq_Max_V_g;         /* '<S12>/Data Type Conversion9' */
  int8_T s12_Eng_Idle_Spd_V_c;         /* '<S12>/Data Type Conversion10' */
  int8_T s12_Brake_Ped_Switch_Active_V_n;/* '<S12>/Data Type Conversion12' */
  int8_T s12_Throt_Pos_V_d;            /* '<S12>/Data Type Conversion4' */
  int8_T s12_PwrTrn_Brk_Ped_Sec_In_V_l;/* '<S12>/Data Type Conversion14' */
  int8_T s12_Acel_Effect_Pos_V_g;      /* '<S12>/Data Type Conversion2' */
  int8_T s12_PwrTrn_Brk_Ped_In_V_h;    /* '<S12>/Data Type Conversion15' */
  int8_T s12_Eng_Boost_Pres_V_p;       /* '<S12>/Data Type Conversion16' */
  int8_T s12_Eng_Torq_Actual_V_b;      /* '<S12>/Data Type Conversion6' */
  int8_T s12_Baro_Pres_Abs_V_j;        /* '<S12>/Data Type Conversion17' */
  int8_T s12_Acel_Actual_Pos_V_e;      /* '<S12>/Data Type Conversion5' */
  int8_T s12_AC_Ref_Hi_Side_Pres_V_p;  /* '<S12>/Data Type Conversion18' */
  int8_T s12_Veh_Spd_V_l;              /* '<S12>/Data Type Conversion19' */
  int8_T s12_Dist_Roll_Cnt_Lft_V_n;    /* '<S12>/Data Type Conversion20' */
  int8_T s12_Dist_Roll_Cnt_Rht_V_n;    /* '<S12>/Data Type Conversion21' */
  int8_T s12_Eng_Coolant_Temp_V_e;     /* '<S12>/Data Type Conversion22' */
  int8_T s12_Eng_Intake_Air_Temp_V_c;  /* '<S12>/Data Type Conversion23' */
  int8_T s12_Fuel_Lvl_Sensor_Unprocessed_Value_V_l;/* '<S12>/Data Type Conversion13' */
  uint8_T s57_MS_State;                /* '<S4>/Chart' */
  uint8_T s124_BitwiseOperator6;       /* '<S124>/Bitwise Operator6' */
  uint8_T s142_Merge;                  /* '<S142>/Merge' */
  uint8_T s144_Merge;                  /* '<S144>/Merge' */
  uint8_T s146_Merge;                  /* '<S146>/Merge' */
  uint8_T s148_Merge;                  /* '<S148>/Merge' */
  uint8_T s290_RelationalOperator;     /* '<S290>/Relational Operator' */
  uint8_T s297_Merge;                  /* '<S297>/Merge' */
  uint8_T s298_Merge;                  /* '<S298>/Merge' */
  uint8_T s295_Merge;                  /* '<S295>/Merge' */
  uint8_T s342_Merge;                  /* '<S342>/Merge' */
  uint8_T s102_LSD_Eng;                /* '<S88>/Chart' */
  uint8_T s102_LSD_Nav;                /* '<S88>/Chart' */
  uint8_T s102_timer;                  /* '<S88>/Chart' */
  uint8_T s102_state;                  /* '<S88>/Chart' */
  uint8_T s365_hybrid_state;           /* '<S365>/Data Type Conversion' */
  uint8_T s375_Merge;                  /* '<S375>/Merge' */
  uint8_T s365_motor_Enable;           /* '<S365>/Data Type Conversion3' */
  uint8_T s365_engine_kill;            /* '<S365>/Data Type Conversion1' */
  uint8_T s365_engine_start;           /* '<S365>/Data Type Conversion2' */
  uint8_T s375_Merge1;                 /* '<S375>/Merge1' */
  uint8_T root_ESS_State;              /* '<S377>/Switch' */
  uint8_T s384_front_slip;             /* '<S384>/motohawk_data_read3' */
  uint8_T s384_rear_slip;              /* '<S384>/motohawk_data_read4' */
  uint8_T s420_Ammonia;                /* '<S417>/Chart' */
  uint8_T s420_State;                  /* '<S417>/Chart' */
  uint8_T s413_SB;                     /* '<S388>/Sustain Brake original' */
  uint8_T s402_ESS_State;              /* '<S400>/EngineSS_StateMachine' */
  uint8_T s401_ESS_State;              /* '<S399>/EngineSS_StateMachine1' */
  uint8_T s398_running;                /* '<S377>/Engine_Running' */
  uint8_T s390_active;                 /* '<S374>/Chart' */
  uint8_T s12_AC_Comp_Stroke_Req_e;    /* '<S12>/Data Type Conversion' */
  uint8_T s16_NOxPre_ECM_Er_Code;      /* '<S16>/Data Type Conversion1' */
  uint8_T s16_NoxMid_ECM_Er_Code;      /* '<S16>/Data Type Conversion' */
  uint8_T s16_NoxPost_ECM_Er_Code;     /* '<S16>/Data Type Conversion2' */
  boolean_T s4_LogicalOperator;        /* '<S4>/Logical Operator' */
  boolean_T s57_MPRD;                  /* '<S4>/Chart' */
  boolean_T s57_Shutdown;              /* '<S4>/Chart' */
  boolean_T s57_PowerUp;               /* '<S4>/Chart' */
  boolean_T s57_PowerDown;             /* '<S4>/Chart' */
  boolean_T s89_Compare;               /* '<S89>/Compare' */
  boolean_T s92_Merge;                 /* '<S92>/Merge' */
  boolean_T s93_Merge;                 /* '<S93>/Merge' */
  boolean_T s94_Merge;                 /* '<S94>/Merge' */
  boolean_T s95_Merge;                 /* '<S95>/Merge' */
  boolean_T s292_Merge;                /* '<S292>/Merge' */
  boolean_T s299_Merge;                /* '<S299>/Merge' */
  boolean_T s294_Merge;                /* '<S294>/Merge' */
  boolean_T s333_Merge;                /* '<S333>/Merge' */
  boolean_T s334_Merge;                /* '<S334>/Merge' */
  boolean_T s363_RelationalOperator;   /* '<S363>/Relational Operator' */
  boolean_T s363_AC_On;                /* '<S363>/Logical Operator' */
  boolean_T s370_LogicalOperator1;     /* '<S370>/Logical Operator1' */
  boolean_T s373_LogicalOperator;      /* '<S373>/Logical Operator' */
  boolean_T s375_Front_Slip;           /* '<S375>/Logical Operator2' */
  boolean_T s375_LogicalOperator3;     /* '<S375>/Logical Operator3' */
  boolean_T s377_Glow_plug_inhibit;    /* '<S377>/Logical Operator4' */
  boolean_T s384_TC_Active;            /* '<S384>/Logical Operator1' */
  boolean_T s366_Pump_On;              /* '<S366>/Logical Operator2' */
  boolean_T s416_LogicalOperator2;     /* '<S416>/Logical Operator2' */
  boolean_T s367_activate;             /* '<S363>/A//C StateMachine' */
  boolean_T s22_Neutral;               /* '<S22>/Logical Operator' */
  boolean_T s22_Reverse;               /* '<S22>/Logical Operator1' */
  boolean_T s12_Glow_Plug;             /* '<S12>/Read CAN Message4' */
  boolean_T s12_Eng_Oil_Change_Now;    /* '<S12>/Read CAN Message4' */
  boolean_T s12_Eng_Oil_Change_Soon;   /* '<S12>/Read CAN Message4' */
  boolean_T s14_MCUReady;              /* '<S14>/Read CAN Message1' */
  rtB_Act_Gear_Translate_cx06_MA s79_sf_Gear_Pos_Translate;/* '<S79>/Gear_Pos_Translate' */
  rtB_Act_Gear_Translate_cx06_MA s79_sf_Act_Gear_Translate;/* '<S79>/Act_Gear_Translate' */
} BlockIO_cx06_MA;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s2_DiscreteTimeIntegrator_DSTATE;/* '<S2>/Discrete-Time Integrator' */
  real_T s2_DiscreteTimeIntegrator1_DSTATE;/* '<S2>/Discrete-Time Integrator1' */
  real_T s75_UnitDelay_DSTATE;         /* '<S75>/Unit Delay' */
  real_T s103_UnitDelay_DSTATE;        /* '<S103>/Unit Delay' */
  real_T s91_UnitDelay_DSTATE;         /* '<S91>/Unit Delay' */
  real_T s210_UnitDelay1_DSTATE;       /* '<S210>/Unit Delay1' */
  real_T s168_UnitDelay1_DSTATE;       /* '<S168>/Unit Delay1' */
  real_T s170_UnitDelay_DSTATE;        /* '<S170>/Unit Delay' */
  real_T s290_UnitDelay_DSTATE;        /* '<S290>/Unit Delay' */
  real_T s380_UnitDelay1_DSTATE;       /* '<S380>/Unit Delay1' */
  real_T s380_UnitDelay2_DSTATE;       /* '<S380>/Unit Delay2' */
  real_T s384_UnitDelay2_DSTATE;       /* '<S384>/Unit Delay2' */
  real_T s384_UnitDelay1_DSTATE;       /* '<S384>/Unit Delay1' */
  real_T s416_UnitDelay_DSTATE;        /* '<S416>/Unit Delay' */
  real_T s392_UnitDelay2_DSTATE;       /* '<S392>/Unit Delay2' */
  real_T s392_UnitDelay6_DSTATE;       /* '<S392>/Unit Delay6' */
  real_T s393_UnitDelay1_DSTATE;       /* '<S393>/Unit Delay1' */
  real_T s392_UnitDelay1_DSTATE;       /* '<S392>/Unit Delay1' */
  real_T s392_UnitDelay7_DSTATE;       /* '<S392>/Unit Delay7' */
  real_T s394_UnitDelay1_DSTATE;       /* '<S394>/Unit Delay1' */
  real_T s392_UnitDelay5_DSTATE;       /* '<S392>/Unit Delay5' */
  real_T s392_UnitDelay8_DSTATE;       /* '<S392>/Unit Delay8' */
  real_T s395_UnitDelay1_DSTATE;       /* '<S395>/Unit Delay1' */
  real_T s392_UnitDelay4_DSTATE;       /* '<S392>/Unit Delay4' */
  real_T s392_UnitDelay9_DSTATE;       /* '<S392>/Unit Delay9' */
  real_T s396_UnitDelay1_DSTATE;       /* '<S396>/Unit Delay1' */
  real_T s41_UnitDelay_DSTATE;         /* '<S41>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s43_UnitDelay_DSTATE;         /* '<S43>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s15_UnitDelay_DSTATE;         /* '<S15>/Unit Delay' */
  uint32_T s21_WeightedMovingAverage_TapDelayU[24];/* '<S21>/Weighted Moving Average' */
  uint32_T root_FiatAccelControl_ELAPS_T;/* '<Root>/Fiat Accel Control' */
  uint32_T root_FiatAccelControl_PREV_T;/* '<Root>/Fiat Accel Control' */
  uint32_T s57_PowerUpEventCounter;    /* '<S4>/Chart' */
  uint32_T s57_PowerDownEventCounter;  /* '<S4>/Chart' */
  uint8_T s88_UnitDelay_DSTATE;        /* '<S88>/Unit Delay' */
  uint8_T s6_UnitDelay_DSTATE;         /* '<S6>/Unit Delay' */
  boolean_T s4_UnitDelay1_DSTATE;      /* '<S4>/Unit Delay1' */
  boolean_T s4_UnitDelay2_DSTATE;      /* '<S4>/Unit Delay2' */
  boolean_T s168_UnitDelay_DSTATE;     /* '<S168>/Unit Delay' */
  uint8_T s57_is_active_c2_cx06_MA;    /* '<S4>/Chart' */
  uint8_T s57_is_c2_cx06_MA;           /* '<S4>/Chart' */
  uint8_T s289_is_active_c19_cx06_MA;  /* '<S80>/Disable_DCDC' */
  uint8_T s289_is_c19_cx06_MA;         /* '<S80>/Disable_DCDC' */
  uint8_T s102_is_active_c16_cx06_MA;  /* '<S88>/Chart' */
  uint8_T s102_is_c16_cx06_MA;         /* '<S88>/Chart' */
  uint8_T s420_is_active_c13_cx06_MA;  /* '<S417>/Chart' */
  uint8_T s420_is_c13_cx06_MA;         /* '<S417>/Chart' */
  uint8_T s413_is_active_c5_cx06_MA;   /* '<S388>/Sustain Brake original' */
  uint8_T s413_is_c5_cx06_MA;          /* '<S388>/Sustain Brake original' */
  uint8_T s402_is_active_c18_cx06_MA;  /* '<S400>/EngineSS_StateMachine' */
  uint8_T s402_is_c18_cx06_MA;         /* '<S400>/EngineSS_StateMachine' */
  uint8_T s401_is_active_c20_cx06_MA;  /* '<S399>/EngineSS_StateMachine1' */
  uint8_T s401_is_c20_cx06_MA;         /* '<S399>/EngineSS_StateMachine1' */
  uint8_T s398_is_active_c17_cx06_MA;  /* '<S377>/Engine_Running' */
  uint8_T s398_is_c17_cx06_MA;         /* '<S377>/Engine_Running' */
  uint8_T s390_is_active_c11_cx06_MA;  /* '<S374>/Chart' */
  uint8_T s390_is_c11_cx06_MA;         /* '<S374>/Chart' */
  uint8_T s389_is_active_c21_cx06_MA;  /* '<S373>/Engine_Running' */
  uint8_T s389_is_c21_cx06_MA;         /* '<S373>/Engine_Running' */
  uint8_T s367_is_active_c15_cx06_MA;  /* '<S363>/A//C StateMachine' */
  uint8_T s367_is_c15_cx06_MA;         /* '<S363>/A//C StateMachine' */
} D_Work_cx06_MA;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S4>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S4>/Save NV Vars one tick before MPRD off' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S4>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S59>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S58>/Clear' */
  ZCSigState CallStartupEvent_Trig_ZCE;/* '<S4>/Call Startup Event' */
} PrevZCSigStates_cx06_MA;

/* Invariant block signals (auto storage) */
typedef struct {
  const uint8_T s168_LogicalOperator;  /* '<S168>/Logical Operator' */
  const boolean_T s75_DataTypeConversion2;/* '<S75>/Data Type Conversion2' */
} ConstBlockIO_cx06_MA;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: mgainval
   * Referenced by: '<S21>/Weighted Moving Average'
   */
  uint32_T WeightedMovingAverage_Gain[25];
} ConstParam_cx06_MA;

/* Real-time Model Data Structure */
struct RT_MODEL_cx06_MA {
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
extern BlockIO_cx06_MA cx06_MA_B;

/* Block states (auto storage) */
extern D_Work_cx06_MA cx06_MA_DWork;
extern ConstBlockIO_cx06_MA cx06_MA_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_cx06_MA cx06_MA_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_cx06_MA cx06_MA_PrevZCSigState;

/* Model entry point functions */
extern void cx06_MA_initialize(boolean_T firstTime);
extern void cx06_MA_step(void);
extern void cx06_MA_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_cx06_MA *cx06_MA_M;

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
 * '<Root>' : cx06_MA
 * '<S1>'   : cx06_MA/Build Time Date Stamp
 * '<S2>'   : cx06_MA/Fiat Accel Control
 * '<S3>'   : cx06_MA/Inputs
 * '<S4>'   : cx06_MA/MainState
 * '<S5>'   : cx06_MA/Outputs
 * '<S6>'   : cx06_MA/Strategy
 * '<S7>'   : cx06_MA/Fiat Accel Control/motohawk_override_abs
 * '<S8>'   : cx06_MA/Fiat Accel Control/motohawk_override_abs/NewValue
 * '<S9>'   : cx06_MA/Fiat Accel Control/motohawk_override_abs/OldValue
 * '<S10>'  : cx06_MA/Inputs/Analog Inputs
 * '<S11>'  : cx06_MA/Inputs/Drive-by-Wire CAN Input
 * '<S12>'  : cx06_MA/Inputs/Fiat CAN Input
 * '<S13>'  : cx06_MA/Inputs/GMLAN Inputs
 * '<S14>'  : cx06_MA/Inputs/IPT CAN Input
 * '<S15>'  : cx06_MA/Inputs/JCI CAN Input
 * '<S16>'  : cx06_MA/Inputs/Urea Inputs
 * '<S17>'  : cx06_MA/Inputs/Analog Inputs/AC_Pres
 * '<S18>'  : cx06_MA/Inputs/Analog Inputs/Cruise Buttons
 * '<S19>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs
 * '<S20>'  : cx06_MA/Inputs/Analog Inputs/Fuel Level
 * '<S21>'  : cx06_MA/Inputs/Analog Inputs/MAF
 * '<S22>'  : cx06_MA/Inputs/Analog Inputs/Trans Inputs
 * '<S23>'  : cx06_MA/Inputs/Analog Inputs/AC_Pres/Compare To Zero
 * '<S24>'  : cx06_MA/Inputs/Analog Inputs/Cruise Buttons/read_Cruise_Buttons
 * '<S25>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Accel
 * '<S26>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Brake
 * '<S27>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Clutch
 * '<S28>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Accel/Range_Detect
 * '<S29>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Accel/Range_Detect1
 * '<S30>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Brake/Range_Detect2
 * '<S31>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Brake/Range_Detect5
 * '<S32>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Brake/Redundant_Check
 * '<S33>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Clutch/Range_Detect3
 * '<S34>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Clutch/Range_Detect4
 * '<S35>'  : cx06_MA/Inputs/Analog Inputs/Driver Inputs/Clutch/Redundant_Check
 * '<S36>'  : cx06_MA/Inputs/Analog Inputs/Fuel Level/Range_Detect
 * '<S37>'  : cx06_MA/Inputs/Drive-by-Wire CAN Input/Compare To Constant1
 * '<S38>'  : cx06_MA/Inputs/Drive-by-Wire CAN Input/Compare To Constant2
 * '<S39>'  : cx06_MA/Inputs/GMLAN Inputs/Compare To Constant1
 * '<S40>'  : cx06_MA/Inputs/GMLAN Inputs/Compare To Constant2
 * '<S41>'  : cx06_MA/Inputs/GMLAN Inputs/Valid_Chk
 * '<S42>'  : cx06_MA/Inputs/GMLAN Inputs/Valid_Chk1
 * '<S43>'  : cx06_MA/Inputs/GMLAN Inputs/Valid_Chk2
 * '<S44>'  : cx06_MA/Inputs/GMLAN Inputs/Valid_Chk3
 * '<S45>'  : cx06_MA/Inputs/IPT CAN Input/Compare To Constant
 * '<S46>'  : cx06_MA/Inputs/IPT CAN Input/Compare To Constant1
 * '<S47>'  : cx06_MA/Inputs/IPT CAN Input/Compare To Constant2
 * '<S48>'  : cx06_MA/Inputs/IPT CAN Input/Compare To Constant3
 * '<S49>'  : cx06_MA/Inputs/IPT CAN Input/speed_calc
 * '<S50>'  : cx06_MA/Inputs/JCI CAN Input/SOC
 * '<S51>'  : cx06_MA/Inputs/Urea Inputs/Compare To Constant
 * '<S52>'  : cx06_MA/Inputs/Urea Inputs/Compare To Constant1
 * '<S53>'  : cx06_MA/Inputs/Urea Inputs/Compare To Constant2
 * '<S54>'  : cx06_MA/Inputs/Urea Inputs/Compare To Constant3
 * '<S55>'  : cx06_MA/Inputs/Urea Inputs/Compare To Constant4
 * '<S56>'  : cx06_MA/MainState/Call Startup Event
 * '<S57>'  : cx06_MA/MainState/Chart
 * '<S58>'  : cx06_MA/MainState/Display Variable Event Function-Call
 * '<S59>'  : cx06_MA/MainState/Display Variable Event Function-Call1
 * '<S60>'  : cx06_MA/MainState/Post Shutdown two ticks before MPRD off
 * '<S61>'  : cx06_MA/MainState/Save NV Vars one tick before MPRD off
 * '<S62>'  : cx06_MA/MainState/Shutdown power on ECU565-128
 * '<S63>'  : cx06_MA/MainState/motohawk_override_abs
 * '<S64>'  : cx06_MA/MainState/motohawk_restore_nvmem
 * '<S65>'  : cx06_MA/MainState/motohawk_store_nvmem
 * '<S66>'  : cx06_MA/MainState/Call Startup Event/Post Shutdown two ticks before MPRD off
 * '<S67>'  : cx06_MA/MainState/Display Variable Event Function-Call/Clear
 * '<S68>'  : cx06_MA/MainState/Display Variable Event Function-Call1/Clear
 * '<S69>'  : cx06_MA/MainState/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S70>'  : cx06_MA/MainState/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S71>'  : cx06_MA/MainState/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S72>'  : cx06_MA/MainState/motohawk_override_abs/NewValue
 * '<S73>'  : cx06_MA/MainState/motohawk_override_abs/OldValue
 * '<S74>'  : cx06_MA/Outputs/ARDAQ Outputs
 * '<S75>'  : cx06_MA/Outputs/Analog Outputs
 * '<S76>'  : cx06_MA/Outputs/Debug Outputs
 * '<S77>'  : cx06_MA/Outputs/Drive-by-Wire CAN Output
 * '<S78>'  : cx06_MA/Outputs/Fiat CAN Output
 * '<S79>'  : cx06_MA/Outputs/GMLAN Outputs
 * '<S80>'  : cx06_MA/Outputs/IPT CAN Output
 * '<S81>'  : cx06_MA/Outputs/JCI CAN Output
 * '<S82>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs
 * '<S83>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs1
 * '<S84>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs/NewValue
 * '<S85>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs/OldValue
 * '<S86>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs1/NewValue
 * '<S87>'  : cx06_MA/Outputs/ARDAQ Outputs/motohawk_override_abs1/OldValue
 * '<S88>'  : cx06_MA/Outputs/Analog Outputs/Backup_Relay_Control
 * '<S89>'  : cx06_MA/Outputs/Analog Outputs/Compare To Constant
 * '<S90>'  : cx06_MA/Outputs/Analog Outputs/Compare To Zero
 * '<S91>'  : cx06_MA/Outputs/Analog Outputs/Nav Sys Timer
 * '<S92>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs
 * '<S93>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs1
 * '<S94>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs2
 * '<S95>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs3
 * '<S96>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs4
 * '<S97>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs5
 * '<S98>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs6
 * '<S99>'  : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs7
 * '<S100>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs8
 * '<S101>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs9
 * '<S102>' : cx06_MA/Outputs/Analog Outputs/Backup_Relay_Control/Chart
 * '<S103>' : cx06_MA/Outputs/Analog Outputs/Backup_Relay_Control/Subsystem
 * '<S104>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs/NewValue
 * '<S105>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs/OldValue
 * '<S106>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs1/NewValue
 * '<S107>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs1/OldValue
 * '<S108>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs2/NewValue
 * '<S109>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs2/OldValue
 * '<S110>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs3/NewValue
 * '<S111>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs3/OldValue
 * '<S112>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs4/NewValue
 * '<S113>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs4/OldValue
 * '<S114>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs5/NewValue
 * '<S115>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs5/OldValue
 * '<S116>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs6/NewValue
 * '<S117>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs6/OldValue
 * '<S118>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs7/NewValue
 * '<S119>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs7/OldValue
 * '<S120>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs8/NewValue
 * '<S121>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs8/OldValue
 * '<S122>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs9/NewValue
 * '<S123>' : cx06_MA/Outputs/Analog Outputs/motohawk_override_abs9/OldValue
 * '<S124>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem
 * '<S125>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs
 * '<S126>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs1
 * '<S127>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs2
 * '<S128>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs3
 * '<S129>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem/Extract Bits
 * '<S130>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem/Extract Bits1
 * '<S131>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem/Extract Bits2
 * '<S132>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem/Extract Bits3
 * '<S133>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/Subsystem/Shift Arithmetic
 * '<S134>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs/NewValue
 * '<S135>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs/OldValue
 * '<S136>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs1/NewValue
 * '<S137>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs1/OldValue
 * '<S138>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs2/NewValue
 * '<S139>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs2/OldValue
 * '<S140>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs3/NewValue
 * '<S141>' : cx06_MA/Outputs/Drive-by-Wire CAN Output/motohawk_override_abs3/OldValue
 * '<S142>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs
 * '<S143>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs1
 * '<S144>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs2
 * '<S145>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs3
 * '<S146>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs4
 * '<S147>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs5
 * '<S148>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs6
 * '<S149>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs7
 * '<S150>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs/NewValue
 * '<S151>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs/OldValue
 * '<S152>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs1/NewValue
 * '<S153>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs1/OldValue
 * '<S154>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs2/NewValue
 * '<S155>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs2/OldValue
 * '<S156>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs3/NewValue
 * '<S157>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs3/OldValue
 * '<S158>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs4/NewValue
 * '<S159>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs4/OldValue
 * '<S160>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs5/NewValue
 * '<S161>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs5/OldValue
 * '<S162>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs6/NewValue
 * '<S163>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs6/OldValue
 * '<S164>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs7/NewValue
 * '<S165>' : cx06_MA/Outputs/Fiat CAN Output/motohawk_override_abs7/OldValue
 * '<S166>' : cx06_MA/Outputs/GMLAN Outputs/Act_Gear_Translate
 * '<S167>' : cx06_MA/Outputs/GMLAN Outputs/Cmd_Gear_Translate
 * '<S168>' : cx06_MA/Outputs/GMLAN Outputs/Fuel//SOC_Gage_Conditioning
 * '<S169>' : cx06_MA/Outputs/GMLAN Outputs/Gear_Pos_Translate
 * '<S170>' : cx06_MA/Outputs/GMLAN Outputs/Speed_Integrator
 * '<S171>' : cx06_MA/Outputs/GMLAN Outputs/Subsystem
 * '<S172>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs
 * '<S173>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs1
 * '<S174>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs10
 * '<S175>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs11
 * '<S176>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs12
 * '<S177>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs13
 * '<S178>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs14
 * '<S179>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs15
 * '<S180>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs16
 * '<S181>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs17
 * '<S182>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs18
 * '<S183>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs19
 * '<S184>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs2
 * '<S185>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs20
 * '<S186>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs21
 * '<S187>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs22
 * '<S188>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs23
 * '<S189>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs24
 * '<S190>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs25
 * '<S191>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs26
 * '<S192>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs27
 * '<S193>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs28
 * '<S194>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs29
 * '<S195>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs3
 * '<S196>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs30
 * '<S197>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs31
 * '<S198>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs32
 * '<S199>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs33
 * '<S200>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs34
 * '<S201>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs35
 * '<S202>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs36
 * '<S203>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs37
 * '<S204>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs4
 * '<S205>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs5
 * '<S206>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs6
 * '<S207>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs7
 * '<S208>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs8
 * '<S209>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs9
 * '<S210>' : cx06_MA/Outputs/GMLAN Outputs/Fuel//SOC_Gage_Conditioning/Fuel_Signal_Conditioning
 * '<S211>' : cx06_MA/Outputs/GMLAN Outputs/Speed_Integrator/Compare To Constant
 * '<S212>' : cx06_MA/Outputs/GMLAN Outputs/Speed_Integrator/Compare To Constant1
 * '<S213>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs/NewValue
 * '<S214>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs/OldValue
 * '<S215>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs1/NewValue
 * '<S216>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs1/OldValue
 * '<S217>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs10/NewValue
 * '<S218>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs10/OldValue
 * '<S219>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs11/NewValue
 * '<S220>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs11/OldValue
 * '<S221>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs12/NewValue
 * '<S222>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs12/OldValue
 * '<S223>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs13/NewValue
 * '<S224>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs13/OldValue
 * '<S225>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs14/NewValue
 * '<S226>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs14/OldValue
 * '<S227>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs15/NewValue
 * '<S228>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs15/OldValue
 * '<S229>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs16/NewValue
 * '<S230>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs16/OldValue
 * '<S231>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs17/NewValue
 * '<S232>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs17/OldValue
 * '<S233>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs18/NewValue
 * '<S234>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs18/OldValue
 * '<S235>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs19/NewValue
 * '<S236>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs19/OldValue
 * '<S237>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs2/NewValue
 * '<S238>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs2/OldValue
 * '<S239>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs20/NewValue
 * '<S240>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs20/OldValue
 * '<S241>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs21/NewValue
 * '<S242>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs21/OldValue
 * '<S243>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs22/NewValue
 * '<S244>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs22/OldValue
 * '<S245>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs23/NewValue
 * '<S246>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs23/OldValue
 * '<S247>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs24/NewValue
 * '<S248>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs24/OldValue
 * '<S249>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs25/NewValue
 * '<S250>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs25/OldValue
 * '<S251>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs26/NewValue
 * '<S252>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs26/OldValue
 * '<S253>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs27/NewValue
 * '<S254>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs27/OldValue
 * '<S255>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs28/NewValue
 * '<S256>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs28/OldValue
 * '<S257>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs29/NewValue
 * '<S258>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs29/OldValue
 * '<S259>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs3/NewValue
 * '<S260>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs3/OldValue
 * '<S261>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs30/NewValue
 * '<S262>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs30/OldValue
 * '<S263>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs31/NewValue
 * '<S264>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs31/OldValue
 * '<S265>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs32/NewValue
 * '<S266>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs32/OldValue
 * '<S267>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs33/NewValue
 * '<S268>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs33/OldValue
 * '<S269>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs34/NewValue
 * '<S270>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs34/OldValue
 * '<S271>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs35/NewValue
 * '<S272>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs35/OldValue
 * '<S273>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs36/NewValue
 * '<S274>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs36/OldValue
 * '<S275>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs37/NewValue
 * '<S276>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs37/OldValue
 * '<S277>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs4/NewValue
 * '<S278>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs4/OldValue
 * '<S279>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs5/NewValue
 * '<S280>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs5/OldValue
 * '<S281>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs6/NewValue
 * '<S282>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs6/OldValue
 * '<S283>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs7/NewValue
 * '<S284>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs7/OldValue
 * '<S285>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs8/NewValue
 * '<S286>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs8/OldValue
 * '<S287>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs9/NewValue
 * '<S288>' : cx06_MA/Outputs/GMLAN Outputs/motohawk_override_abs9/OldValue
 * '<S289>' : cx06_MA/Outputs/IPT CAN Output/Disable_DCDC
 * '<S290>' : cx06_MA/Outputs/IPT CAN Output/MCU_Management
 * '<S291>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs
 * '<S292>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs1
 * '<S293>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs10
 * '<S294>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs11
 * '<S295>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs12
 * '<S296>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs13
 * '<S297>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs2
 * '<S298>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs3
 * '<S299>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs4
 * '<S300>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs5
 * '<S301>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs6
 * '<S302>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs7
 * '<S303>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs8
 * '<S304>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs9
 * '<S305>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs/NewValue
 * '<S306>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs/OldValue
 * '<S307>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs1/NewValue
 * '<S308>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs1/OldValue
 * '<S309>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs10/NewValue
 * '<S310>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs10/OldValue
 * '<S311>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs11/NewValue
 * '<S312>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs11/OldValue
 * '<S313>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs12/NewValue
 * '<S314>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs12/OldValue
 * '<S315>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs13/NewValue
 * '<S316>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs13/OldValue
 * '<S317>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs2/NewValue
 * '<S318>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs2/OldValue
 * '<S319>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs3/NewValue
 * '<S320>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs3/OldValue
 * '<S321>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs4/NewValue
 * '<S322>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs4/OldValue
 * '<S323>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs5/NewValue
 * '<S324>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs5/OldValue
 * '<S325>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs6/NewValue
 * '<S326>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs6/OldValue
 * '<S327>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs7/NewValue
 * '<S328>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs7/OldValue
 * '<S329>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs8/NewValue
 * '<S330>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs8/OldValue
 * '<S331>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs9/NewValue
 * '<S332>' : cx06_MA/Outputs/IPT CAN Output/motohawk_override_abs9/OldValue
 * '<S333>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs
 * '<S334>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs1
 * '<S335>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs2
 * '<S336>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs3
 * '<S337>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs4
 * '<S338>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs5
 * '<S339>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs6
 * '<S340>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs7
 * '<S341>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs8
 * '<S342>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs9
 * '<S343>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs/NewValue
 * '<S344>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs/OldValue
 * '<S345>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs1/NewValue
 * '<S346>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs1/OldValue
 * '<S347>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs2/NewValue
 * '<S348>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs2/OldValue
 * '<S349>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs3/NewValue
 * '<S350>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs3/OldValue
 * '<S351>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs4/NewValue
 * '<S352>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs4/OldValue
 * '<S353>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs5/NewValue
 * '<S354>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs5/OldValue
 * '<S355>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs6/NewValue
 * '<S356>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs6/OldValue
 * '<S357>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs7/NewValue
 * '<S358>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs7/OldValue
 * '<S359>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs8/NewValue
 * '<S360>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs8/OldValue
 * '<S361>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs9/NewValue
 * '<S362>' : cx06_MA/Outputs/JCI CAN Output/motohawk_override_abs9/OldValue
 * '<S363>' : cx06_MA/Strategy/A//C Control Code
 * '<S364>' : cx06_MA/Strategy/Fiat//GMLAN Control Code
 * '<S365>' : cx06_MA/Strategy/Hybrid Control Code
 * '<S366>' : cx06_MA/Strategy/Urea Control Code
 * '<S367>' : cx06_MA/Strategy/A//C Control Code/A//C StateMachine
 * '<S368>' : cx06_MA/Strategy/Fiat//GMLAN Control Code/Gear Calc
 * '<S369>' : cx06_MA/Strategy/Fiat//GMLAN Control Code/Gear_Estimation
 * '<S370>' : cx06_MA/Strategy/Fiat//GMLAN Control Code/Neutral Check
 * '<S371>' : cx06_MA/Strategy/Fiat//GMLAN Control Code/Gear_Estimation/Compare To Zero1
 * '<S372>' : cx06_MA/Strategy/Fiat//GMLAN Control Code/Neutral Check/Compare To Zero
 * '<S373>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Accel Through Shifts
 * '<S374>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Assisted Take-off
 * '<S375>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control
 * '<S376>' : cx06_MA/Strategy/Hybrid Control Code/EBrake Disable
 * '<S377>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop
 * '<S378>' : cx06_MA/Strategy/Hybrid Control Code/HEV
 * '<S379>' : cx06_MA/Strategy/Hybrid Control Code/Hybrid state limits
 * '<S380>' : cx06_MA/Strategy/Hybrid Control Code/Ramp_In_Pt
 * '<S381>' : cx06_MA/Strategy/Hybrid Control Code/Regen
 * '<S382>' : cx06_MA/Strategy/Hybrid Control Code/Rev_Limiter
 * '<S383>' : cx06_MA/Strategy/Hybrid Control Code/Safety
 * '<S384>' : cx06_MA/Strategy/Hybrid Control Code/Traction Control
 * '<S385>' : cx06_MA/Strategy/Hybrid Control Code/ZEV
 * '<S386>' : cx06_MA/Strategy/Hybrid Control Code/diesel
 * '<S387>' : cx06_MA/Strategy/Hybrid Control Code/hybrid State calc
 * '<S388>' : cx06_MA/Strategy/Hybrid Control Code/sustain Brake
 * '<S389>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Accel Through Shifts/Engine_Running
 * '<S390>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Assisted Take-off/Chart
 * '<S391>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/RRef_Wheel Diff
 * '<S392>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/Wheel_Acceleration
 * '<S393>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/Wheel_Acceleration/motorTorqueFilter
 * '<S394>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/Wheel_Acceleration/motorTorqueFilter1
 * '<S395>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/Wheel_Acceleration/motorTorqueFilter2
 * '<S396>' : cx06_MA/Strategy/Hybrid Control Code/Activation of Traction Control/Wheel_Acceleration/motorTorqueFilter3
 * '<S397>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/Compare To Constant1
 * '<S398>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/Engine_Running
 * '<S399>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/New_Alg
 * '<S400>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/Old_Alg
 * '<S401>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/New_Alg/EngineSS_StateMachine1
 * '<S402>' : cx06_MA/Strategy/Hybrid Control Code/Engine Start-Stop/Old_Alg/EngineSS_StateMachine
 * '<S403>' : cx06_MA/Strategy/Hybrid Control Code/HEV/AssistedTakeOff
 * '<S404>' : cx06_MA/Strategy/Hybrid Control Code/HEV/SOC_RampOut
 * '<S405>' : cx06_MA/Strategy/Hybrid Control Code/HEV/AssistedTakeOff/Embedded MATLAB Function
 * '<S406>' : cx06_MA/Strategy/Hybrid Control Code/Hybrid state limits/Embedded MATLAB Function
 * '<S407>' : cx06_MA/Strategy/Hybrid Control Code/Regen/SOC_RampOut
 * '<S408>' : cx06_MA/Strategy/Hybrid Control Code/Regen/speed_RampOut
 * '<S409>' : cx06_MA/Strategy/Hybrid Control Code/Traction Control/Manual Torque Override
 * '<S410>' : cx06_MA/Strategy/Hybrid Control Code/ZEV/SOC_RampOut
 * '<S411>' : cx06_MA/Strategy/Hybrid Control Code/sustain Brake/C4
 * '<S412>' : cx06_MA/Strategy/Hybrid Control Code/sustain Brake/Compare To Zero
 * '<S413>' : cx06_MA/Strategy/Hybrid Control Code/sustain Brake/Sustain Brake original
 * '<S414>' : cx06_MA/Strategy/Hybrid Control Code/sustain Brake/speed_RampOut
 * '<S415>' : cx06_MA/Strategy/Urea Control Code/Compare To Zero
 * '<S416>' : cx06_MA/Strategy/Urea Control Code/Dosing_Alg
 * '<S417>' : cx06_MA/Strategy/Urea Control Code/LeanRich
 * '<S418>' : cx06_MA/Strategy/Urea Control Code/Dosing_Alg/Compare To Constant
 * '<S419>' : cx06_MA/Strategy/Urea Control Code/Dosing_Alg/Compare To Constant1
 * '<S420>' : cx06_MA/Strategy/Urea Control Code/LeanRich/Chart
 * '<S421>' : cx06_MA/Strategy/Urea Control Code/LeanRich/Compare To Zero
 */
#endif                                 /* RTW_HEADER_cx06_MA_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
