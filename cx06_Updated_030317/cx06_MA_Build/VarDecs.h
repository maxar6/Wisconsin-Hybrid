#ifndef VARDECS_H
#define VARDECS_H

/* Name: VarDecEnum_0 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_0_0 = 0,                  /* EnumTxt:"False" */
  VarDecEnum_0_1 = 1,                  /* EnumTxt:"True" */
} VarDecEnum_0;

/* Name: VarDecEnum_1 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_1_0 = 0,                  /* EnumTxt:"Valid" */
  VarDecEnum_1_1 = 1,                  /* EnumTxt:"Invalid" */
} VarDecEnum_1;

/* Name: VarDecEnum_2 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_2_0 = 0,                  /* EnumTxt:"Invalid" */
  VarDecEnum_2_1 = 1,                  /* EnumTxt:"Valid" */
} VarDecEnum_2;

/* Name: VarDecEnum_3 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_3_0 = 0,                  /* EnumTxt:"No Action" */
  VarDecEnum_3_1 = 1,                  /* EnumTxt:"Engage" */
  VarDecEnum_3_2 = 2,                  /* EnumTxt:"Minimum Stroke" */
  VarDecEnum_3_3 = 3,                  /* EnumTxt:"Security Shutdown" */
} VarDecEnum_3;

/* Name: VarDecEnum_4 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_4_0 = 0,                  /* EnumTxt:"All OK" */
  VarDecEnum_4_17 = 17,                /* EnumTxt:"16b ADC failed to init" */
  VarDecEnum_4_18 = 18,                /* EnumTxt:"+Vsw shorted" */
  VarDecEnum_4_19 = 19,                /* EnumTxt:"Sensor Turned Off" */
  VarDecEnum_4_20 = 20,                /* EnumTxt:"HTR Open" */
  VarDecEnum_4_21 = 21,                /* EnumTxt:"HTR Shorted" */
  VarDecEnum_4_33 = 33,                /* EnumTxt:"1wire bus Shorted" */
  VarDecEnum_4_34 = 34,                /* EnumTxt:"No 1wire bus" */
  VarDecEnum_4_35 = 35,                /* EnumTxt:"CRC16 Error" */
  VarDecEnum_4_36 = 36,                /* EnumTxt:"Invalid 1wire par" */
  VarDecEnum_4_49 = 49,                /* EnumTxt:"+Vsw < 9 for 7s" */
  VarDecEnum_4_50 = 50,                /* EnumTxt:"+Vsw > 30V" */
  VarDecEnum_4_65 = 65,                /* EnumTxt:"VS > 1.5/1.6V" */
  VarDecEnum_4_81 = 81,                /* EnumTxt:"RVS > 280/300" */
  VarDecEnum_4_82 = 82,                /* EnumTxt:"VHerr > 0.5V" */
  VarDecEnum_4_97 = 97,                /* EnumTxt:"VP1+ > 6V" */
  VarDecEnum_4_98 = 98,                /* EnumTxt:"VP2+ < 2V" */
  VarDecEnum_4_99 = 99,                /* EnumTxt:"VP2 out range" */
  VarDecEnum_4_100 = 100,              /* EnumTxt:".25V>VS+>.75V" */
  VarDecEnum_4_101 = 101,              /* EnumTxt:"UserData Corrupt" */
  VarDecEnum_4_161 = 161,              /* EnumTxt:"Invld SW State" */
  VarDecEnum_4_177 = 177,              /* EnumTxt:"CAN overrun" */
  VarDecEnum_4_178 = 178,              /* EnumTxt:"CAN passive" */
  VarDecEnum_4_179 = 179,              /* EnumTxt:"CAN heartbeat" */
  VarDecEnum_4_180 = 180,              /* EnumTxt:"CAN recover bus off" */
  VarDecEnum_4_181 = 181,              /* EnumTxt:"CAN TxID col" */
  VarDecEnum_4_182 = 182,              /* EnumTxt:"Serial Overrun" */
} VarDecEnum_4;

/* Name: VarDecEnum_5 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_5_0 = 0,                  /* EnumTxt:"Safety" */
  VarDecEnum_5_1 = 1,                  /* EnumTxt:"Diesel" */
  VarDecEnum_5_2 = 2,                  /* EnumTxt:"Regen" */
  VarDecEnum_5_3 = 3,                  /* EnumTxt:"HEV" */
  VarDecEnum_5_4 = 4,                  /* EnumTxt:"ZEV" */
} VarDecEnum_5;

/* Name: VarDecEnum_6 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_6_0 = 0,                  /* EnumTxt:"Disabled" */
  VarDecEnum_6_1 = 1,                  /* EnumTxt:"Enabled" */
} VarDecEnum_6;

/* Name: VarDecEnum_7 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_7_0 = 0,                  /* EnumTxt:"FALSE" */
  VarDecEnum_7_1 = 1,                  /* EnumTxt:"true" */
} VarDecEnum_7;

/* Name: VarDecEnum_8 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_8_0 = 0,                  /* EnumTxt:"ClutchControl" */
  VarDecEnum_8_1 = 1,                  /* EnumTxt:"NeutralControl" */
} VarDecEnum_8;

/* Name: VarDecEnum_9 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_9_0 = 0,                  /* EnumTxt:"Automatic" */
  VarDecEnum_9_1 = 1,                  /* EnumTxt:"Manual" */
} VarDecEnum_9;

/* Name: VarDecEnum_10 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_10_0 = 0,                 /* EnumTxt:"Idle" */
  VarDecEnum_10_1 = 1,                 /* EnumTxt:"StartDelay" */
  VarDecEnum_10_2 = 2,                 /* EnumTxt:"Start" */
  VarDecEnum_10_3 = 3,                 /* EnumTxt:"StartRetry" */
  VarDecEnum_10_4 = 4,                 /* EnumTxt:"KillDelay" */
  VarDecEnum_10_5 = 5,                 /* EnumTxt:"Kill" */
  VarDecEnum_10_6 = 6,                 /* EnumTxt:"FalseStart" */
} VarDecEnum_10;

/* Name: VarDecEnum_11 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_11_0 = 0,                 /* EnumTxt:"OFF" */
  VarDecEnum_11_1 = 1,                 /* EnumTxt:"ON" */
} VarDecEnum_11;

/* Name: VarDecEnum_12 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_12_0 = 0,                 /* EnumTxt:"Unknown" */
  VarDecEnum_12_1 = 1,                 /* EnumTxt:"Neutral" */
  VarDecEnum_12_2 = 2,                 /* EnumTxt:"Lean" */
  VarDecEnum_12_3 = 3,                 /* EnumTxt:"Lean2Rich" */
  VarDecEnum_12_4 = 4,                 /* EnumTxt:"Rich2Lean" */
  VarDecEnum_12_5 = 5,                 /* EnumTxt:"Rich" */
  VarDecEnum_12_6 = 6,                 /* EnumTxt:"Error" */
} VarDecEnum_12;

/* Name: VarDecEnum_13 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_13_0 = 0,                 /* EnumTxt:"Pass-Through" */
  VarDecEnum_13_1 = 1,                 /* EnumTxt:"Override" */
} VarDecEnum_13;

/* Name: VarDecEnum_14 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_14_0 = 0,                 /* EnumTxt:"Idle" */
  VarDecEnum_14_1 = 1,                 /* EnumTxt:"About_to_Crank" */
  VarDecEnum_14_2 = 2,                 /* EnumTxt:"Crank" */
  VarDecEnum_14_3 = 3,                 /* EnumTxt:"About_to_Idle" */
} VarDecEnum_14;

/* Name: VarDecEnum_15 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_15_0 = 0,                 /* EnumTxt:"By_State" */
  VarDecEnum_15_1 = 1,                 /* EnumTxt:"By_Torque_Dmd" */
} VarDecEnum_15;

/* Name: VarDecEnum_16 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_16_0 = 0,                 /* EnumTxt:"Buck" */
  VarDecEnum_16_1 = 1,                 /* EnumTxt:"Boost" */
} VarDecEnum_16;

/* Name: VarDecEnum_17 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_17_0 = 0,                 /* EnumTxt:"Off" */
  VarDecEnum_17_1 = 1,                 /* EnumTxt:"On" */
} VarDecEnum_17;

/* Name: VarDecEnum_18 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_18_0 = 0,                 /* EnumTxt:"Run" */
  VarDecEnum_18_1 = 1,                 /* EnumTxt:"Restore To Defaults" */
} VarDecEnum_18;

/* Name: VarDecEnum_19 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_19_0 = 0,                 /* EnumTxt:"Run" */
  VarDecEnum_19_1 = 1,                 /* EnumTxt:"Store To EEPROM" */
} VarDecEnum_19;

/* Name: VarDecEnum_20 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_20_0 = 0,                 /* EnumTxt:"PowerUp" */
  VarDecEnum_20_1 = 1,                 /* EnumTxt:"Run" */
  VarDecEnum_20_2 = 2,                 /* EnumTxt:"EStop" */
  VarDecEnum_20_3 = 3,                 /* EnumTxt:"PowerDown" */
  VarDecEnum_20_4 = 4,                 /* EnumTxt:"Shutdown" */
} VarDecEnum_20;

/* Name: VarDecEnum_21 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_21__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_21_0 = 0,                 /* EnumTxt:"FUELP" */
  VarDecEnum_21_2 = 2,                 /* EnumTxt:"HSOL1" */
  VarDecEnum_21_3 = 3,                 /* EnumTxt:"HSOL2" */
  VarDecEnum_21_4 = 4,                 /* EnumTxt:"HSOL3" */
  VarDecEnum_21_5 = 5,                 /* EnumTxt:"HSOL4" */
  VarDecEnum_21_6 = 6,                 /* EnumTxt:"START" */
  VarDecEnum_21_11 = 11,               /* EnumTxt:"OILP" */
  VarDecEnum_21_12 = 12,               /* EnumTxt:"FINJ1" */
  VarDecEnum_21_13 = 13,               /* EnumTxt:"FINJ2" */
  VarDecEnum_21_14 = 14,               /* EnumTxt:"FINJ3" */
  VarDecEnum_21_15 = 15,               /* EnumTxt:"FINJ4" */
  VarDecEnum_21_16 = 16,               /* EnumTxt:"FINJ5" */
  VarDecEnum_21_17 = 17,               /* EnumTxt:"FINJ6" */
  VarDecEnum_21_18 = 18,               /* EnumTxt:"AINJ1" */
  VarDecEnum_21_19 = 19,               /* EnumTxt:"AINJ2" */
  VarDecEnum_21_20 = 20,               /* EnumTxt:"AINJ3" */
  VarDecEnum_21_21 = 21,               /* EnumTxt:"AINJ4" */
  VarDecEnum_21_22 = 22,               /* EnumTxt:"AINJ5" */
  VarDecEnum_21_23 = 23,               /* EnumTxt:"AINJ6" */
  VarDecEnum_21_24 = 24,               /* EnumTxt:"TACH" */
  VarDecEnum_21_36 = 36,               /* EnumTxt:"EST 1" */
  VarDecEnum_21_37 = 37,               /* EnumTxt:"EST 2" */
  VarDecEnum_21_38 = 38,               /* EnumTxt:"EST 3" */
  VarDecEnum_21_39 = 39,               /* EnumTxt:"EST 4" */
  VarDecEnum_21_40 = 40,               /* EnumTxt:"EST 5" */
  VarDecEnum_21_41 = 41,               /* EnumTxt:"EST 6" */
  VarDecEnum_21_42 = 42,               /* EnumTxt:"EST 7" */
  VarDecEnum_21_43 = 43,               /* EnumTxt:"EST 8" */
  VarDecEnum_21_52 = 52,               /* EnumTxt:"MPRD" */
} VarDecEnum_21;

/* Name: VarDecEnum_22 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_22_0 = 0,                 /* EnumTxt:"Clutch" */
  VarDecEnum_22_1 = 1,                 /* EnumTxt:"UreaLeanRich" */
  VarDecEnum_22_2 = 2,                 /* EnumTxt:"Urea_Inject" */
  VarDecEnum_22_3 = 3,                 /* EnumTxt:"inhibitAC" */
  VarDecEnum_22_4 = 4,                 /* EnumTxt:"inhibitAssistTakeoff" */
  VarDecEnum_22_5 = 5,                 /* EnumTxt:"inhibitDiesel" */
  VarDecEnum_22_6 = 6,                 /* EnumTxt:"inhibitEV" */
  VarDecEnum_22_7 = 7,                 /* EnumTxt:"inhibitEngineSS" */
  VarDecEnum_22_8 = 8,                 /* EnumTxt:"inhibitRegen" */
} VarDecEnum_22;

/* Name: VarDecEnum_23 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_23_0 = 0,                 /* EnumTxt:"-" */
} VarDecEnum_23;

/* Name: VarDecEnum_24 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_24__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_24_53 = 53,               /* EnumTxt:"ECUP" */
  VarDecEnum_24_54 = 54,               /* EnumTxt:"DRVP" */
  VarDecEnum_24_55 = 55,               /* EnumTxt:"XDRP" */
  VarDecEnum_24_56 = 56,               /* EnumTxt:"AN1M" */
  VarDecEnum_24_57 = 57,               /* EnumTxt:"AN2M" */
  VarDecEnum_24_58 = 58,               /* EnumTxt:"AN3M" */
  VarDecEnum_24_59 = 59,               /* EnumTxt:"AN4M" */
  VarDecEnum_24_60 = 60,               /* EnumTxt:"AN5M" */
  VarDecEnum_24_61 = 61,               /* EnumTxt:"AN6M" */
  VarDecEnum_24_62 = 62,               /* EnumTxt:"AN7M" */
  VarDecEnum_24_63 = 63,               /* EnumTxt:"AN8M" */
  VarDecEnum_24_64 = 64,               /* EnumTxt:"AN9M" */
  VarDecEnum_24_65 = 65,               /* EnumTxt:"AN10M" */
  VarDecEnum_24_66 = 66,               /* EnumTxt:"AN11M" */
  VarDecEnum_24_67 = 67,               /* EnumTxt:"AN12M" */
  VarDecEnum_24_68 = 68,               /* EnumTxt:"AN13M" */
  VarDecEnum_24_69 = 69,               /* EnumTxt:"AN14M" */
  VarDecEnum_24_70 = 70,               /* EnumTxt:"AN15M" */
  VarDecEnum_24_71 = 71,               /* EnumTxt:"AN16M" */
  VarDecEnum_24_72 = 72,               /* EnumTxt:"AN17M" */
  VarDecEnum_24_73 = 73,               /* EnumTxt:"AN18M" */
  VarDecEnum_24_74 = 74,               /* EnumTxt:"AN19M" */
  VarDecEnum_24_90 = 90,               /* EnumTxt:"O2A" */
  VarDecEnum_24_91 = 91,               /* EnumTxt:"O2B" */
  VarDecEnum_24_92 = 92,               /* EnumTxt:"XDRP_B" */
} VarDecEnum_24;

/* Name: VarDecEnum_25 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_25_0 = 0,                 /* EnumTxt:"5V" */
  VarDecEnum_25_1 = 1,                 /* EnumTxt:"2.7V" */
} VarDecEnum_25;

/* Name: VarDecEnum_26 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_26__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_26_93 = 93,               /* EnumTxt:"DG1M" */
  VarDecEnum_26_94 = 94,               /* EnumTxt:"DG2M" */
  VarDecEnum_26_96 = 96,               /* EnumTxt:"DG4M" */
  VarDecEnum_26_100 = 100,             /* EnumTxt:"CNK" */
} VarDecEnum_26;

/* Name: VarDecEnum_27 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_27_0 = 0,                 /* EnumTxt:"Rising Edge" */
  VarDecEnum_27_1 = 1,                 /* EnumTxt:"Falling Edge" */
} VarDecEnum_27;

/* Name: VarDecEnum_28 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_28_0 = 0,                 /* EnumTxt:"No Alias Protect" */
  VarDecEnum_28_1 = 1,                 /* EnumTxt:"Use Alias Protect" */
} VarDecEnum_28;

/* Name: VarDecEnum_29 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_29_0 = 0,                 /* EnumTxt:"Digital Input" */
  VarDecEnum_29_1 = 1,                 /* EnumTxt:"VR Input" */
} VarDecEnum_29;

/* Name: VarDecEnum_30 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_30__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_30_56 = 56,               /* EnumTxt:"AN1M" */
  VarDecEnum_30_57 = 57,               /* EnumTxt:"AN2M" */
  VarDecEnum_30_58 = 58,               /* EnumTxt:"AN3M" */
  VarDecEnum_30_59 = 59,               /* EnumTxt:"AN4M" */
  VarDecEnum_30_60 = 60,               /* EnumTxt:"AN5M" */
  VarDecEnum_30_61 = 61,               /* EnumTxt:"AN6M" */
  VarDecEnum_30_62 = 62,               /* EnumTxt:"AN7M" */
  VarDecEnum_30_63 = 63,               /* EnumTxt:"AN8M" */
  VarDecEnum_30_64 = 64,               /* EnumTxt:"AN9M" */
  VarDecEnum_30_65 = 65,               /* EnumTxt:"AN10M" */
  VarDecEnum_30_66 = 66,               /* EnumTxt:"AN11M" */
  VarDecEnum_30_67 = 67,               /* EnumTxt:"AN12M" */
  VarDecEnum_30_68 = 68,               /* EnumTxt:"AN13M" */
  VarDecEnum_30_69 = 69,               /* EnumTxt:"AN14M" */
  VarDecEnum_30_70 = 70,               /* EnumTxt:"AN15M" */
  VarDecEnum_30_71 = 71,               /* EnumTxt:"AN16M" */
  VarDecEnum_30_72 = 72,               /* EnumTxt:"AN17M" */
  VarDecEnum_30_73 = 73,               /* EnumTxt:"AN18M" */
  VarDecEnum_30_74 = 74,               /* EnumTxt:"AN19M" */
  VarDecEnum_30_90 = 90,               /* EnumTxt:"O2A" */
  VarDecEnum_30_91 = 91,               /* EnumTxt:"O2B" */
  VarDecEnum_30_93 = 93,               /* EnumTxt:"DG1M" */
  VarDecEnum_30_94 = 94,               /* EnumTxt:"DG2M" */
  VarDecEnum_30_96 = 96,               /* EnumTxt:"DG4M" */
  VarDecEnum_30_97 = 97,               /* EnumTxt:"ESTOP" */
} VarDecEnum_30;

/* Name: VarDecEnum_31 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_31__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_31_0 = 0,                 /* EnumTxt:"FUELP" */
  VarDecEnum_31_1 = 1,                 /* EnumTxt:"ETC" */
  VarDecEnum_31_2 = 2,                 /* EnumTxt:"HSOL1" */
  VarDecEnum_31_3 = 3,                 /* EnumTxt:"HSOL2" */
  VarDecEnum_31_4 = 4,                 /* EnumTxt:"HSOL3" */
  VarDecEnum_31_5 = 5,                 /* EnumTxt:"HSOL4" */
  VarDecEnum_31_6 = 6,                 /* EnumTxt:"START" */
  VarDecEnum_31_11 = 11,               /* EnumTxt:"OILP" */
  VarDecEnum_31_12 = 12,               /* EnumTxt:"FINJ1" */
  VarDecEnum_31_13 = 13,               /* EnumTxt:"FINJ2" */
  VarDecEnum_31_14 = 14,               /* EnumTxt:"FINJ3" */
  VarDecEnum_31_15 = 15,               /* EnumTxt:"FINJ4" */
  VarDecEnum_31_16 = 16,               /* EnumTxt:"FINJ5" */
  VarDecEnum_31_17 = 17,               /* EnumTxt:"FINJ6" */
  VarDecEnum_31_18 = 18,               /* EnumTxt:"AINJ1" */
  VarDecEnum_31_19 = 19,               /* EnumTxt:"AINJ2" */
  VarDecEnum_31_20 = 20,               /* EnumTxt:"AINJ3" */
  VarDecEnum_31_21 = 21,               /* EnumTxt:"AINJ4" */
  VarDecEnum_31_22 = 22,               /* EnumTxt:"AINJ5" */
  VarDecEnum_31_23 = 23,               /* EnumTxt:"AINJ6" */
  VarDecEnum_31_24 = 24,               /* EnumTxt:"TACH" */
  VarDecEnum_31_36 = 36,               /* EnumTxt:"EST 1" */
  VarDecEnum_31_37 = 37,               /* EnumTxt:"EST 2" */
  VarDecEnum_31_38 = 38,               /* EnumTxt:"EST 3" */
  VarDecEnum_31_39 = 39,               /* EnumTxt:"EST 4" */
  VarDecEnum_31_40 = 40,               /* EnumTxt:"EST 5" */
  VarDecEnum_31_41 = 41,               /* EnumTxt:"EST 6" */
  VarDecEnum_31_42 = 42,               /* EnumTxt:"EST 7" */
  VarDecEnum_31_43 = 43,               /* EnumTxt:"EST 8" */
} VarDecEnum_31;

/* Name: VarDecEnum_32 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_32__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_32_2 = 2,                 /* EnumTxt:"HSOL1" */
  VarDecEnum_32_3 = 3,                 /* EnumTxt:"HSOL2" */
  VarDecEnum_32_4 = 4,                 /* EnumTxt:"HSOL3" */
  VarDecEnum_32_5 = 5,                 /* EnumTxt:"HSOL4" */
  VarDecEnum_32_6 = 6,                 /* EnumTxt:"START" */
  VarDecEnum_32_11 = 11,               /* EnumTxt:"OILP" */
  VarDecEnum_32_35 = 35,               /* EnumTxt:"ESC" */
  VarDecEnum_32_36 = 36,               /* EnumTxt:"EST 1" */
  VarDecEnum_32_37 = 37,               /* EnumTxt:"EST 2" */
  VarDecEnum_32_38 = 38,               /* EnumTxt:"EST 3" */
  VarDecEnum_32_39 = 39,               /* EnumTxt:"EST 4" */
  VarDecEnum_32_40 = 40,               /* EnumTxt:"EST 5" */
  VarDecEnum_32_41 = 41,               /* EnumTxt:"EST 6" */
  VarDecEnum_32_42 = 42,               /* EnumTxt:"EST 7" */
  VarDecEnum_32_43 = 43,               /* EnumTxt:"EST 8" */
} VarDecEnum_32;

#endif
