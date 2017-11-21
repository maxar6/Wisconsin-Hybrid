
/* MotoCoder_Types.h */
/* Generated by MotoCoder */
/* Version: 0.10.7 */
/* At: 2017-11-19 19:40:21 */
/* Copyright: 2017 Woodward. */


#ifndef MOTOCODER_TYPES_H
#define MOTOCODER_TYPES_H



	


/* reference_T used as a pointer to DataStorage */
#ifndef defined_reference_T
#define defined_reference_T
typedef void * reference_T;
#endif

/* struct_reference_T used as a pointer to Structure DataStorage */
#ifndef defined_struct_reference_T
#define defined_struct_reference_T
typedef void * struct_reference_T;
#endif

#ifndef defined_char_T
#define defined_char_T
typedef char                   char_T;
#endif

#ifndef defined_boolean_T
#define defined_boolean_T
typedef unsigned char          boolean_T;
#endif

#ifndef defined_int8_T
#define defined_int8_T
typedef signed char            int8_T;
#endif

#ifndef defined_uint8_T
#define defined_uint8_T
typedef unsigned char          uint8_T;
#endif

#ifndef defined_int16_T
#define defined_int16_T
typedef short                  int16_T;
#endif

#ifndef defined_uint16_T
#define defined_uint16_T
typedef unsigned short         uint16_T;
#endif

#ifndef defined_int32_T
#define defined_int32_T
typedef int                    int32_T;
#endif

#ifndef defined_uint32_T
#define defined_uint32_T
typedef unsigned int           uint32_T;
#endif

#ifndef defined_int64_T
#define defined_int64_T
typedef long long              int64_T;
#endif

#ifndef defined_uint64_T
#define defined_uint64_T
typedef unsigned long long     uint64_T;
#endif

#ifndef defined_real32_T
#define defined_real32_T
typedef float                  real32_T;
#endif

#ifndef defined_real64_T
#define defined_real64_T
typedef double                 real64_T;
#endif

#define Interrupt_Disable() DISABLE()
#define Interrupt_Enable() UNDISABLE()
    /* VarDecEnum_0 Enumeration */
typedef enum {
    VARDECENUM_0_RUN=0,
    VARDECENUM_0_REBOOT=1,
} E_VarDecEnum_0;

/* VarDecEnum_1 Enumeration */
typedef enum {
    VARDECENUM_1_OFF=0,
    VARDECENUM_1_ON=1,
} E_VarDecEnum_1;

/* VarDecEnum_2 Enumeration */
typedef enum {
    VARDECENUM_2_PASSDASHTHROUGH=0,
    VARDECENUM_2_OVERRIDE=1,
} E_VarDecEnum_2;

/* VarDecEnum_3 Enumeration */
typedef enum {
    VARDECENUM_3_RUN=0,
    VARDECENUM_3_RESTORETODEFAULTS=1,
} E_VarDecEnum_3;

/* VarDecEnum_4 Enumeration */
typedef enum {
    VARDECENUM_4_RUN=0,
    VARDECENUM_4_STORETOEEPROM=1,
} E_VarDecEnum_4;

/* VarDecEnum_5 Enumeration */
typedef enum {
    VARDECENUM_5_DISABLED=0,
    VARDECENUM_5_ENABLED=1,
} E_VarDecEnum_5;

/* VarDecEnum_6 Enumeration */
typedef enum {
    VARDECENUM_6_DISABLEONLOWECUP=0,
    VARDECENUM_6_KEEPALIVE=1,
} E_VarDecEnum_6;

/* VarDecEnum_7 Enumeration */
typedef enum {
    VARDECENUM_7_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_7_FUELP=0,
    VARDECENUM_7_EST1=36,
    VARDECENUM_7_MPRD=52,
    VARDECENUM_7_LIAC=7,
    VARDECENUM_7_HORN=8,
    VARDECENUM_7_SPARE=9,
    VARDECENUM_7_FUEL1=12,
    VARDECENUM_7_FUEL2=13,
    VARDECENUM_7_FUEL3=14,
    VARDECENUM_7_FUEL4=15,
    VARDECENUM_7_TACH=24,
} E_VarDecEnum_7;

/* VarDecEnum_8 Enumeration */
typedef enum {
    VARDECENUM_8_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_8_AN1M=56,
    VARDECENUM_8_AN15M=70,
    VARDECENUM_8_AN16M=71,
    VARDECENUM_8_AN17M=72,
    VARDECENUM_8_AN18M=73,
    VARDECENUM_8_AN19M=74,
    VARDECENUM_8_AN20M=75,
    VARDECENUM_8_DG1M=93,
    VARDECENUM_8_DG2M=94,
    VARDECENUM_8_DG4M=96,
    VARDECENUM_8_STOP=97,
    VARDECENUM_8_AN2M=57,
    VARDECENUM_8_AN3M=58,
    VARDECENUM_8_AN4M=59,
    VARDECENUM_8_AN5M=60,
    VARDECENUM_8_AN9M=64,
    VARDECENUM_8_AN10M=65,
    VARDECENUM_8_AN11M=66,
    VARDECENUM_8_AN14M=69,
} E_VarDecEnum_8;



#endif
