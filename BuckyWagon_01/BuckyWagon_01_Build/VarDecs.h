#ifndef VARDECS_H
#define VARDECS_H

/* Name: VarDecEnum_0 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_0_0 = 0,                  /* EnumTxt:"Run" */
  VarDecEnum_0_1 = 1,                  /* EnumTxt:"Reboot" */
} VarDecEnum_0;

/* Name: VarDecEnum_1 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_1_0 = 0,                  /* EnumTxt:"Pass-Through" */
  VarDecEnum_1_1 = 1,                  /* EnumTxt:"Override" */
} VarDecEnum_1;

/* Name: VarDecEnum_2 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_2_0 = 0,                  /* EnumTxt:"Off" */
  VarDecEnum_2_1 = 1,                  /* EnumTxt:"On" */
} VarDecEnum_2;

/* Name: VarDecEnum_3 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_3_0 = 0,                  /* EnumTxt:"Run" */
  VarDecEnum_3_1 = 1,                  /* EnumTxt:"Restore To Defaults" */
} VarDecEnum_3;

/* Name: VarDecEnum_4 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_4_0 = 0,                  /* EnumTxt:"Run" */
  VarDecEnum_4_1 = 1,                  /* EnumTxt:"Store To EEPROM" */
} VarDecEnum_4;

/* Name: VarDecEnum_5 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_5_0 = 0,                  /* EnumTxt:"Disabled" */
  VarDecEnum_5_1 = 1,                  /* EnumTxt:"Enabled" */
} VarDecEnum_5;

/* Name: VarDecEnum_6 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_6_0 = 0,                  /* EnumTxt:"Disable on low ECUP" */
  VarDecEnum_6_1 = 1,                  /* EnumTxt:"Keep alive" */
} VarDecEnum_6;

/* Name: VarDecEnum_7 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_7_0 = 0,                  /* EnumTxt:"Flash" */
  VarDecEnum_7_1 = 1,                  /* EnumTxt:"Solid" */
} VarDecEnum_7;

/* Name: VarDecEnum_8 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_8_0 = 0,                  /* EnumTxt:"Normal" */
  VarDecEnum_8_1 = 1,                  /* EnumTxt:"Inverted" */
} VarDecEnum_8;

/* Name: VarDecEnum_9 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_9_0 = 0,                  /* EnumTxt:"Off" */
  VarDecEnum_9_1 = 1,                  /* EnumTxt:"Low_Speed_Maneuvering" */
  VarDecEnum_9_2 = 2,                  /* EnumTxt:"Normal_Driving" */
  VarDecEnum_9_3 = 3,                  /* EnumTxt:"Normal_DrivingWithBrake" */
  VarDecEnum_9_4 = 4,                  /* EnumTxt:"KeyUpActive" */
  VarDecEnum_9_5 = 5,                  /* EnumTxt:"ZeroSpeedBraking" */
} VarDecEnum_9;

/* Name: VarDecEnum_10 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_10_0 = 0,                 /* EnumTxt:"No Ventilation" */
  VarDecEnum_10_1 = 1,                 /* EnumTxt:"Ventilation" */
} VarDecEnum_10;

/* Name: VarDecEnum_11 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_11_0 = 0,                 /* EnumTxt:"Bat_limit_high" */
  VarDecEnum_11_1 = 1,                 /* EnumTxt:"Bat_limit_low" */
  VarDecEnum_11_2 = 2,                 /* EnumTxt:"Battery_Warning" */
  VarDecEnum_11_3 = 3,                 /* EnumTxt:"DisableDrive" */
  VarDecEnum_11_4 = 4,                 /* EnumTxt:"EmergencyPowerOff" */
  VarDecEnum_11_5 = 5,                 /* EnumTxt:"OpenContactors" */
} VarDecEnum_11;

/* Name: VarDecEnum_12 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_12_0 = 0,                 /* EnumTxt:"-" */
} VarDecEnum_12;

/* Name: VarDecEnum_13 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_13__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_13_12 = 12,               /* EnumTxt:"FINJ1" */
  VarDecEnum_13_13 = 13,               /* EnumTxt:"FINJ2" */
  VarDecEnum_13_14 = 14,               /* EnumTxt:"FINJ3" */
  VarDecEnum_13_15 = 15,               /* EnumTxt:"FINJ4" */
  VarDecEnum_13_16 = 16,               /* EnumTxt:"FINJ5" */
  VarDecEnum_13_17 = 17,               /* EnumTxt:"FINJ6" */
  VarDecEnum_13_18 = 18,               /* EnumTxt:"FINJ7" */
  VarDecEnum_13_19 = 19,               /* EnumTxt:"FINJ8" */
  VarDecEnum_13_20 = 20,               /* EnumTxt:"FINJ9" */
  VarDecEnum_13_21 = 21,               /* EnumTxt:"FINJ10" */
  VarDecEnum_13_22 = 22,               /* EnumTxt:"FINJ11" */
  VarDecEnum_13_23 = 23,               /* EnumTxt:"FINJ12" */
  VarDecEnum_13_24 = 24,               /* EnumTxt:"TACH" */
  VarDecEnum_13_25 = 25,               /* EnumTxt:"LSD1" */
  VarDecEnum_13_26 = 26,               /* EnumTxt:"LSD2" */
  VarDecEnum_13_27 = 27,               /* EnumTxt:"LSD3" */
  VarDecEnum_13_28 = 28,               /* EnumTxt:"LSD4" */
  VarDecEnum_13_29 = 29,               /* EnumTxt:"LSD5" */
  VarDecEnum_13_30 = 30,               /* EnumTxt:"LSD6" */
  VarDecEnum_13_31 = 31,               /* EnumTxt:"LSD7" */
  VarDecEnum_13_32 = 32,               /* EnumTxt:"LSD8" */
  VarDecEnum_13_33 = 33,               /* EnumTxt:"LSD9" */
  VarDecEnum_13_34 = 34,               /* EnumTxt:"LSD10" */
  VarDecEnum_13_36 = 36,               /* EnumTxt:"EST 1" */
  VarDecEnum_13_37 = 37,               /* EnumTxt:"EST 2" */
  VarDecEnum_13_38 = 38,               /* EnumTxt:"EST 3" */
  VarDecEnum_13_39 = 39,               /* EnumTxt:"EST 4" */
  VarDecEnum_13_40 = 40,               /* EnumTxt:"EST 5" */
  VarDecEnum_13_41 = 41,               /* EnumTxt:"EST 6" */
  VarDecEnum_13_42 = 42,               /* EnumTxt:"EST 7" */
  VarDecEnum_13_43 = 43,               /* EnumTxt:"EST 8" */
  VarDecEnum_13_44 = 44,               /* EnumTxt:"EST 9" */
  VarDecEnum_13_45 = 45,               /* EnumTxt:"EST 10" */
  VarDecEnum_13_46 = 46,               /* EnumTxt:"EST 11" */
  VarDecEnum_13_47 = 47,               /* EnumTxt:"EST 12" */
  VarDecEnum_13_48 = 48,               /* EnumTxt:"EST 13" */
  VarDecEnum_13_49 = 49,               /* EnumTxt:"EST 14" */
  VarDecEnum_13_50 = 50,               /* EnumTxt:"EST 15" */
  VarDecEnum_13_51 = 51,               /* EnumTxt:"EST 16" */
  VarDecEnum_13_52 = 52,               /* EnumTxt:"MPRD" */
} VarDecEnum_13;

/* Name: VarDecEnum_14 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_14__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_14_1 = 1,                 /* EnumTxt:"H1" */
  VarDecEnum_14_10 = 10,               /* EnumTxt:"H2" */
  VarDecEnum_14_12 = 12,               /* EnumTxt:"FINJ1" */
  VarDecEnum_14_13 = 13,               /* EnumTxt:"FINJ2" */
  VarDecEnum_14_14 = 14,               /* EnumTxt:"FINJ3" */
  VarDecEnum_14_15 = 15,               /* EnumTxt:"FINJ4" */
  VarDecEnum_14_16 = 16,               /* EnumTxt:"FINJ5" */
  VarDecEnum_14_17 = 17,               /* EnumTxt:"FINJ6" */
  VarDecEnum_14_18 = 18,               /* EnumTxt:"FINJ7" */
  VarDecEnum_14_19 = 19,               /* EnumTxt:"FINJ8" */
  VarDecEnum_14_20 = 20,               /* EnumTxt:"FINJ9" */
  VarDecEnum_14_21 = 21,               /* EnumTxt:"FINJ10" */
  VarDecEnum_14_22 = 22,               /* EnumTxt:"FINJ11" */
  VarDecEnum_14_23 = 23,               /* EnumTxt:"FINJ12" */
  VarDecEnum_14_24 = 24,               /* EnumTxt:"TACH" */
  VarDecEnum_14_25 = 25,               /* EnumTxt:"LSD1" */
  VarDecEnum_14_26 = 26,               /* EnumTxt:"LSD2" */
  VarDecEnum_14_27 = 27,               /* EnumTxt:"LSD3" */
  VarDecEnum_14_28 = 28,               /* EnumTxt:"LSD4" */
  VarDecEnum_14_29 = 29,               /* EnumTxt:"LSD5" */
  VarDecEnum_14_30 = 30,               /* EnumTxt:"LSD6" */
  VarDecEnum_14_31 = 31,               /* EnumTxt:"LSD7" */
  VarDecEnum_14_32 = 32,               /* EnumTxt:"LSD8" */
  VarDecEnum_14_33 = 33,               /* EnumTxt:"LSD9" */
  VarDecEnum_14_34 = 34,               /* EnumTxt:"LSD10" */
  VarDecEnum_14_36 = 36,               /* EnumTxt:"EST 1" */
  VarDecEnum_14_37 = 37,               /* EnumTxt:"EST 2" */
  VarDecEnum_14_38 = 38,               /* EnumTxt:"EST 3" */
  VarDecEnum_14_39 = 39,               /* EnumTxt:"EST 4" */
  VarDecEnum_14_40 = 40,               /* EnumTxt:"EST 5" */
  VarDecEnum_14_41 = 41,               /* EnumTxt:"EST 6" */
  VarDecEnum_14_42 = 42,               /* EnumTxt:"EST 7" */
  VarDecEnum_14_43 = 43,               /* EnumTxt:"EST 8" */
  VarDecEnum_14_44 = 44,               /* EnumTxt:"EST 9" */
  VarDecEnum_14_45 = 45,               /* EnumTxt:"EST 10" */
  VarDecEnum_14_46 = 46,               /* EnumTxt:"EST 11" */
  VarDecEnum_14_47 = 47,               /* EnumTxt:"EST 12" */
  VarDecEnum_14_48 = 48,               /* EnumTxt:"EST 13" */
  VarDecEnum_14_49 = 49,               /* EnumTxt:"EST 14" */
  VarDecEnum_14_50 = 50,               /* EnumTxt:"EST 15" */
  VarDecEnum_14_51 = 51,               /* EnumTxt:"EST 16" */
  VarDecEnum_14_107 = 107,             /* EnumTxt:"H3" */
} VarDecEnum_14;

/* Name: VarDecEnum_15 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_15__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_15_56 = 56,               /* EnumTxt:"AN1M" */
  VarDecEnum_15_57 = 57,               /* EnumTxt:"AN2M" */
  VarDecEnum_15_58 = 58,               /* EnumTxt:"AN3M" */
  VarDecEnum_15_59 = 59,               /* EnumTxt:"AN4M" */
  VarDecEnum_15_60 = 60,               /* EnumTxt:"AN5M" */
  VarDecEnum_15_61 = 61,               /* EnumTxt:"AN6M" */
  VarDecEnum_15_62 = 62,               /* EnumTxt:"AN7M" */
  VarDecEnum_15_63 = 63,               /* EnumTxt:"AN8M" */
  VarDecEnum_15_64 = 64,               /* EnumTxt:"AN9M" */
  VarDecEnum_15_65 = 65,               /* EnumTxt:"AN10M" */
  VarDecEnum_15_66 = 66,               /* EnumTxt:"AN11M" */
  VarDecEnum_15_67 = 67,               /* EnumTxt:"AN12M" */
  VarDecEnum_15_68 = 68,               /* EnumTxt:"AN13M" */
  VarDecEnum_15_69 = 69,               /* EnumTxt:"AN14M" */
  VarDecEnum_15_70 = 70,               /* EnumTxt:"AN15M" */
  VarDecEnum_15_71 = 71,               /* EnumTxt:"AN16M" */
  VarDecEnum_15_72 = 72,               /* EnumTxt:"AN17M" */
  VarDecEnum_15_73 = 73,               /* EnumTxt:"AN18M" */
  VarDecEnum_15_74 = 74,               /* EnumTxt:"AN19M" */
  VarDecEnum_15_75 = 75,               /* EnumTxt:"AN20M" */
  VarDecEnum_15_76 = 76,               /* EnumTxt:"AN21M" */
  VarDecEnum_15_77 = 77,               /* EnumTxt:"AN22M" */
  VarDecEnum_15_78 = 78,               /* EnumTxt:"AN23M" */
  VarDecEnum_15_79 = 79,               /* EnumTxt:"AN24M" */
  VarDecEnum_15_80 = 80,               /* EnumTxt:"AN25M" */
  VarDecEnum_15_81 = 81,               /* EnumTxt:"AN26M" */
  VarDecEnum_15_82 = 82,               /* EnumTxt:"AN27M" */
  VarDecEnum_15_83 = 83,               /* EnumTxt:"AN28M" */
  VarDecEnum_15_84 = 84,               /* EnumTxt:"AN29M" */
  VarDecEnum_15_85 = 85,               /* EnumTxt:"AN30M" */
  VarDecEnum_15_86 = 86,               /* EnumTxt:"AN31M" */
  VarDecEnum_15_87 = 87,               /* EnumTxt:"AN32M" */
  VarDecEnum_15_88 = 88,               /* EnumTxt:"AN33M" */
  VarDecEnum_15_89 = 89,               /* EnumTxt:"AN34M" */
  VarDecEnum_15_90 = 90,               /* EnumTxt:"O2A" */
  VarDecEnum_15_91 = 91,               /* EnumTxt:"O2B" */
  VarDecEnum_15_93 = 93,               /* EnumTxt:"DG1M" */
  VarDecEnum_15_94 = 94,               /* EnumTxt:"DG2M" */
  VarDecEnum_15_95 = 95,               /* EnumTxt:"DG3M" */
  VarDecEnum_15_96 = 96,               /* EnumTxt:"DG4M" */
  VarDecEnum_15_102 = 102,             /* EnumTxt:"DG5M" */
  VarDecEnum_15_103 = 103,             /* EnumTxt:"DG6M" */
  VarDecEnum_15_104 = 104,             /* EnumTxt:"DG7M" */
  VarDecEnum_15_105 = 105,             /* EnumTxt:"SPD1" */
  VarDecEnum_15_106 = 106,             /* EnumTxt:"SPD2" */
  VarDecEnum_15_111 = 111,             /* EnumTxt:"DG8M" */
} VarDecEnum_15;

/* Name: VarDecEnum_16 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_16__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_16_53 = 53,               /* EnumTxt:"ECUP" */
  VarDecEnum_16_54 = 54,               /* EnumTxt:"DRVP" */
  VarDecEnum_16_55 = 55,               /* EnumTxt:"XDRP" */
  VarDecEnum_16_56 = 56,               /* EnumTxt:"AN1M" */
  VarDecEnum_16_57 = 57,               /* EnumTxt:"AN2M" */
  VarDecEnum_16_58 = 58,               /* EnumTxt:"AN3M" */
  VarDecEnum_16_59 = 59,               /* EnumTxt:"AN4M" */
  VarDecEnum_16_60 = 60,               /* EnumTxt:"AN5M" */
  VarDecEnum_16_61 = 61,               /* EnumTxt:"AN6M" */
  VarDecEnum_16_62 = 62,               /* EnumTxt:"AN7M" */
  VarDecEnum_16_63 = 63,               /* EnumTxt:"AN8M" */
  VarDecEnum_16_64 = 64,               /* EnumTxt:"AN9M" */
  VarDecEnum_16_65 = 65,               /* EnumTxt:"AN10M" */
  VarDecEnum_16_66 = 66,               /* EnumTxt:"AN11M" */
  VarDecEnum_16_67 = 67,               /* EnumTxt:"AN12M" */
  VarDecEnum_16_68 = 68,               /* EnumTxt:"AN13M" */
  VarDecEnum_16_69 = 69,               /* EnumTxt:"AN14M" */
  VarDecEnum_16_70 = 70,               /* EnumTxt:"AN15M" */
  VarDecEnum_16_71 = 71,               /* EnumTxt:"AN16M" */
  VarDecEnum_16_72 = 72,               /* EnumTxt:"AN17M" */
  VarDecEnum_16_73 = 73,               /* EnumTxt:"AN18M" */
  VarDecEnum_16_74 = 74,               /* EnumTxt:"AN19M" */
  VarDecEnum_16_75 = 75,               /* EnumTxt:"AN20M" */
  VarDecEnum_16_76 = 76,               /* EnumTxt:"AN21M" */
  VarDecEnum_16_77 = 77,               /* EnumTxt:"AN22M" */
  VarDecEnum_16_78 = 78,               /* EnumTxt:"AN23M" */
  VarDecEnum_16_79 = 79,               /* EnumTxt:"AN24M" */
  VarDecEnum_16_80 = 80,               /* EnumTxt:"AN25M" */
  VarDecEnum_16_81 = 81,               /* EnumTxt:"AN26M" */
  VarDecEnum_16_82 = 82,               /* EnumTxt:"AN27M" */
  VarDecEnum_16_83 = 83,               /* EnumTxt:"AN28M" */
  VarDecEnum_16_84 = 84,               /* EnumTxt:"AN29M" */
  VarDecEnum_16_85 = 85,               /* EnumTxt:"AN30M" */
  VarDecEnum_16_86 = 86,               /* EnumTxt:"AN31M" */
  VarDecEnum_16_87 = 87,               /* EnumTxt:"AN32M" */
  VarDecEnum_16_88 = 88,               /* EnumTxt:"AN33M" */
  VarDecEnum_16_89 = 89,               /* EnumTxt:"AN34M" */
  VarDecEnum_16_90 = 90,               /* EnumTxt:"O2A" */
  VarDecEnum_16_91 = 91,               /* EnumTxt:"O2B" */
  VarDecEnum_16_92 = 92,               /* EnumTxt:"XDRP_B" */
} VarDecEnum_16;

/* Name: VarDecEnum_17 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_17_0 = 0,                 /* EnumTxt:"5V" */
  VarDecEnum_17_1 = 1,                 /* EnumTxt:"2.7V" */
} VarDecEnum_17;

/* Name: VarDecEnum_18 ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  VarDecEnum_18__1 = -1,               /* EnumTxt:"(None)" */
  VarDecEnum_18_53 = 53,               /* EnumTxt:"ECUP" */
  VarDecEnum_18_54 = 54,               /* EnumTxt:"DRVP" */
  VarDecEnum_18_55 = 55,               /* EnumTxt:"XDRP" */
  VarDecEnum_18_56 = 56,               /* EnumTxt:"AN1M" */
  VarDecEnum_18_57 = 57,               /* EnumTxt:"AN2M" */
  VarDecEnum_18_58 = 58,               /* EnumTxt:"AN3M" */
  VarDecEnum_18_59 = 59,               /* EnumTxt:"AN4M" */
  VarDecEnum_18_60 = 60,               /* EnumTxt:"AN5M" */
  VarDecEnum_18_61 = 61,               /* EnumTxt:"AN6M" */
  VarDecEnum_18_62 = 62,               /* EnumTxt:"AN7M" */
  VarDecEnum_18_63 = 63,               /* EnumTxt:"AN8M" */
  VarDecEnum_18_64 = 64,               /* EnumTxt:"AN9M" */
  VarDecEnum_18_65 = 65,               /* EnumTxt:"AN10M" */
  VarDecEnum_18_66 = 66,               /* EnumTxt:"AN11M" */
  VarDecEnum_18_67 = 67,               /* EnumTxt:"AN12M" */
  VarDecEnum_18_68 = 68,               /* EnumTxt:"AN13M" */
  VarDecEnum_18_69 = 69,               /* EnumTxt:"AN14M" */
  VarDecEnum_18_70 = 70,               /* EnumTxt:"AN15M" */
  VarDecEnum_18_71 = 71,               /* EnumTxt:"AN16M" */
  VarDecEnum_18_72 = 72,               /* EnumTxt:"AN17M" */
  VarDecEnum_18_73 = 73,               /* EnumTxt:"AN18M" */
  VarDecEnum_18_74 = 74,               /* EnumTxt:"AN19M" */
  VarDecEnum_18_75 = 75,               /* EnumTxt:"AN20M" */
  VarDecEnum_18_76 = 76,               /* EnumTxt:"AN21M" */
  VarDecEnum_18_77 = 77,               /* EnumTxt:"AN22M" */
  VarDecEnum_18_78 = 78,               /* EnumTxt:"AN23M" */
  VarDecEnum_18_79 = 79,               /* EnumTxt:"AN24M" */
  VarDecEnum_18_80 = 80,               /* EnumTxt:"AN25M" */
  VarDecEnum_18_81 = 81,               /* EnumTxt:"AN26M" */
  VarDecEnum_18_82 = 82,               /* EnumTxt:"AN27M" */
  VarDecEnum_18_83 = 83,               /* EnumTxt:"AN28M" */
  VarDecEnum_18_84 = 84,               /* EnumTxt:"AN29M" */
  VarDecEnum_18_85 = 85,               /* EnumTxt:"AN30M" */
  VarDecEnum_18_86 = 86,               /* EnumTxt:"AN31M" */
  VarDecEnum_18_87 = 87,               /* EnumTxt:"AN32M" */
  VarDecEnum_18_88 = 88,               /* EnumTxt:"AN33M" */
  VarDecEnum_18_89 = 89,               /* EnumTxt:"AN34M" */
  VarDecEnum_18_90 = 90,               /* EnumTxt:"O2A" */
  VarDecEnum_18_91 = 91,               /* EnumTxt:"O2B" */
  VarDecEnum_18_92 = 92,               /* EnumTxt:"XDRP_B" */
  VarDecEnum_18_143 = 143,             /* EnumTxt:"REF_14V" */
} VarDecEnum_18;

#endif
