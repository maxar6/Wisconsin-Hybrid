/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*! 
\file      TDBDefn.h
\brief     ECU Table Database Dll Structure & Definitions
           
           (C)1998-2010 Woodward  <BR>
           Platform: Platform independant

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
#ifndef __TDBDEFN_H
#define __TDBDEFN_H

#pragma pack(1)

/*----- INCLUDES ---------------------------------------------------------*/
#include "DBStructInfo.h"
#include "TypeDefn.h"

/*----- DEFINES ----------------------------------------------------------*/
#define MAX_TABLES 8

#if defined(GENERIC)
    #define STRUCT_MAJ  4   /* DB Structure Major Revision */
    #define S_ParamList     S_ParamListV4
    #define S_VARList       S_VARListV5
    #define S_VAROFSTList   S_VAROFSTListV5
    #define S_BITList       S_BITListV5
    #define S_TDBInfo       S_TDBInfoV6
	#define Table_Rev_List  S_TableRevList
#endif
#if defined(USE_STRUCT_MAJ7)
    #define STRUCT_MAJ  7   /* DB Structure Major Revision */
    #define S_ParamList     S_ParamListV6
    #define S_VARList       S_VARListV6
    #define S_VAROFSTList   S_VAROFSTListV6
    #define S_BITList       S_BITListV6
    #define S_TDBInfo       S_TDBInfoV7
	#define Table_Rev_List  S_TableRevList
#endif
#if defined(USE_STRUCT_MAJ8)
    #define STRUCT_MAJ  8   /* DB Structure Major Revision */
    #define S_ParamList     S_ParamListV8
    #define S_VARList       S_VARListV6
    #define S_VAROFSTList   S_VAROFSTListV6
    #define S_BITList       S_BITListV6
    #define S_TDBInfo       S_TDBInfoV7
	#define Table_Rev_List  S_TableRevListV8
#endif


#define STRUCT_MIN  0   /* DB Structure Minor Revision */

#define TABLE_ID        E_TableID
#define PROJECT_ID      E_TDBProjectID
#define CLASS_ID        E_ClassID
#define STORAGE_ID      E_StorageID
#define TYPE_ID         E_TypeID
#define ACCESS          E_Access
#define UPDATE_ID       E_UpdateID

#define VAR_List        S_VARList
#define VAROFST_List    S_VAROFSTList
#define BIT_List        S_BITList
#define BITVAR_List     S_BITVARList
#define ORDARR_List     S_ORDARRList
#define MAP_List        S_MAPList
#define TBL_List        S_TBLList
#define ARRAY_List      S_ARRAYList
#define ENUMDec_List    S_ENUMDecList
#define ENUMVAR_List    S_ENUMVARList
#define TEXT_List       S_TEXTList
#define HEADERDec_List  S_HEADERDecList
#define ENUMARR_List    S_ENUMARRList
#define RECORD_List     S_RECORDList
#define RECARR_List     S_RECARRList
#define ALIAS_List      S_ALIASList
#define Parameter_List  S_ParamList
#define Table_List      S_TableList
#define Project_List    S_ProjectList
#define DB_info         S_TDBInfo

/*----- TYPEDEFS ---------------------------------------------------------*/
/***********************************/
/* ECU Table Database Enumerations */                      
/***********************************/
typedef enum
{
    TABLE_0 = 0,
    TABLE_1 = 1,
    TABLE_2 = 2,
    TABLE_3 = 3,
    TABLE_4 = 4,
    TABLE_5 = 5,
    TABLE_6 = 6,
    TABLE_7 = 7,
    END_TABLE_ID
} E_TableID;

typedef enum
{
    NO_PROJECT = 0,
    END_PROJECT_ID          
} E_TDBProjectID;

typedef enum
{
    NO_CLASS = 0,
    VAR,            /* Variables & Constants */
    VAROFST,        /* Variable with Offset or Lock */
    BITVAR,         /* BitField Parents */
    FBITVAR,        /* BitField Fault Parent */
    BIT,            /* Bit Parameter */
    ORDARR,         /* Ordinate Parameter */
    MAP,            /* 2D Map With Ordinates */
    TBL,            /* 1D Map With Ordinates */
    ARRAY,          /* Map Parameter No Ordinates */
    ENUMVAR,        /* Enumerated Variable */
    TEXT,           /* NULL Terminates Text String */  
    ENUMDEC,        /* Enumeration Declaration */
    ENUMARR,        /* Array of Enumerations */
    RECDEC,         /* Record Declaration */
    RECORD,         /* Record Variable */
    RECARR,         /* Array of Records */
    ALIAS,          /* Alias */
    END_CLASS_ID
} E_ClassID;

typedef enum
{
    NO_STORAGE = 0,
    CODE,           /* Code Space */
    RAM,            /* RAM or Virtual RAM */
    EE,             /* Electrically Eraseable ROM */
    FLASH,          /* FLASH ROM */
    END_STORAGE_ID
} E_StorageID;

typedef enum
{
    NO_TYPE = 0,
    UINT1,          /* Unsigned Integer 1 byte */
    UINT2,          /* Unsigned Integer 2 bytes */
    UINT3,          /* Unsigned Integer 3 bytes */
    UINT4,          /* Unsigned Integer 4 bytes */
    SINT1,          /* Signed Integer 1 byte */
    SINT2,          /* Signed Integer 2 bytes */
    SINT3,          /* Signed Integer 3 bytes */
    SINT4,          /* Signed Integer 4 bytes */
    REAL4,          /* IEEE Floating Point 4 bytes */
    REAL8,          /* IEEE Floating Point 8 bytes */
    TXTCHAR,        /* Unsigned Char 1 byte */
    END_TYPE_ID
} E_TypeID;

typedef enum
{
    NA1 = 0x00,     /* No Access  Level 1 */
    RO1 = 0x01,     /* Read  Only Level 1 */
    WO1 = 0x02,     /* Write Only Level 1 */
    RW1 = 0x03,     /* Read/Write Level 1 */
    NA2 = 0x00,     /* No Access  Level 2 */
    RO2 = 0x04,     /* Read  Only Level 2 */
    WO2 = 0x08,     /* Write Only Level 2 */
    RW2 = 0x0C,     /* Read/Write Level 2 */
    NA3 = 0x00,     /* No Access  Level 3 */
    RO3 = 0x10,     /* Read  Only Level 3 */
    WO3 = 0x20,     /* Write Only Level 3 */
    RW3 = 0x30,     /* Read/Write Level 3 */
    NA4 = 0x00,     /* No Access  Level 4 */
    RO4 = 0x40,     /* Read  Only Level 4 */
    WO4 = 0x80,     /* Write Only Level 4 */
    RW4 = 0xC0      /* Read/Write Level 4 */
} E_Access;

typedef enum
{
   NO_UPDATE = 0,
   BACKGND,         /* Updated in ECU Background */ 
   ANGLE,           /* Updated at least once every engine revolution */
   ONEMS,           /* Update rate slower or equal to once per millisecond */
   HUNDREDMS,       /* Update rate slower or equal to once per 100 milliseconds */
   SECOND,          /* Update rate slower or equal to once per second */      
   MINUTE,          /* Update rate slower or equal to once per minute */      
   ONCE,            /* Parameter is constant */
   REMOTE,          /* Updated by remote device to ECU */
   END_UPDATE_ID
} E_UpdateID;

/****************************/
/* ECU Class TDB Structures */                      
/****************************/
typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
} S_VARListV5;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    uint1           u1SqlDataType;  /* SQL Data Type */
} S_VARListV6;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    char1 *         sz1OfstVar;     /* Offset Variable */
    char1 *         sz1LockVar;     /* Lock Variable */
} S_VAROFSTListV5;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    char1 *         sz1OfstVar;     /* Offset Variable */
    char1 *         sz1LockVar;     /* Lock Variable */
    uint1           u1SqlDataType;  /* SQL Data Type */
} S_VAROFSTListV6;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Help;        /* Bit Definition/Help */
    uint1           u1Bit;          /* Bit Number */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1TrueTxt;     /* True Text */
    char1 *         sz1FalseTxt;    /* False Text */
} S_BITListV5;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Help;        /* Bit Definition/Help */
    uint1           u1Bit;          /* Bit Number */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1TrueTxt;     /* True Text */
    char1 *         sz1FalseTxt;    /* False Text */
    uint4           u4SqlParamID;   /* The PID used in TSys SQL Db to describe this parameter */
} S_BITListV6;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    void *          BitTblPtr;      /* Pointer to Bit Definitions */
    uint1           u1TblLen;       /* Length of Bit Table */
} S_BITVARList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    uint2           u2OrdLen;       /* Number of points in ORD Array */
    char1 *         sz1OrdVar;      /* Name of Variable holding Ordinate Result */
    char1 *         sz1OrdIndex;    /* Name of Variable used to Index Array */
} S_ORDARRList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    char1 *         sz1XOrdArr;     /* Name of X Ordinate */
    char1 *         sz1YOrdArr;     /* Name of Y Ordinate */
    char1 *         sz1MapVar;      /* Name Varaible holding current map lookup value */
} S_MAPList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    char1 *         sz1OrdArr;      /* Name of Ordinate */
    char1 *         sz1TblVar;      /* Name Varaible holding current table lookup value */
} S_TBLList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    uint2           u2XLen;         /* Length of X axis */
    uint2           u2YLen;         /* Length of Y axis */
} S_ARRAYList;

typedef struct
{
    sint2           s2EnumVal;      /* Value of enumeration */
    char1 *         sz1EnumTxt;     /* Text for this value of enumeration */
} S_ENUMDecList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    S_ENUMDecList * EnumTblPtr;     /* Pointer to enumerated definitions */
    uint2           u2EnumTblLen;   /* Length of enum defn table */
    char1 *         sz1EnumDflt;    /* Default String */
} S_ENUMVARList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    uint2           u2TextLen;      /* Maximum length of String */
} S_TEXTList;

typedef struct
{  
    S_ENUMDecList * EnumTblPtr;     /* Pointer to enumerated definitions */
    uint2           u2EnumTblLen;   /* Length of enum defn table */
    char1 *         sz1EnumDflt;    /* Default String */
} S_HEADERDecList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    E_TypeID        TypeID;         /* ECU Storage type */
    real8           r8Gain;         /* Gain */
    real8           r8Offset;       /* Offset */
    real4           r4Exp;          /* Exponent */
    real8           r8Max;          /* Maximum Value */
    real8           r8Min;          /* Minimum Value */
    char1 *         sz1Format;      /* Display Format */
    uint4           u4Mask;         /* Raw Data mask */
    uint2           u2XLen;         /* Length of X axis */
    uint2           u2YLen;         /* Length of Y axis */
    S_ENUMDecList * XEnumTblPtr;    /* Enumerations for X Axis. MUST be same length as x_len */
    S_ENUMDecList * YEnumTblPtr;    /* Enumerations for Y Axis. MUST be same length as y_len */
    S_HEADERDecList*XHeaderTblPtr;  /* Enumerations for each column in X Axis length same as x_len */
} S_ENUMARRList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    uint2           u2ByteLen;      /* Total length in bytes of record */
    void *          ParamLstPtr;    /* Pointer to RECDEC Parameter List */
    uint1           u1LstLength;    /* Length of RECDEC Parameter List */
    bool1           b1Virtual;      /* TRUE if the RECDEC is virtual (ie hasn't been defined explicitly) */
} S_RECORDList;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    uint2           u2ByteLen;      /* Total length in bytes of record */
    void *          ParamLstPtr;    /* Pointer to RECDEC Parameter List */
    uint1           u1LstLength;    /* Length of RECDEC Parameter List */
    uint2           u2RecLen;       /* Number of records in the array */
    S_ENUMDecList * EnumTblPtr;     /* Enumerations for row. Can be NULL, if not MUST be same length as u2RecLen */
} S_RECARRList;

/********************************/
/* ECU Parameter TDB Structures */                      
/********************************/
typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Units;       /* Units */
    E_ClassID       ClassID;        /* ECU Class Type */
    uint1           u1Access;       /* Access Permissions */
    E_StorageID     StorageID;      /* ECU Storage Class */
    uint4           u4Address;      /* ECU Address */
    void *          AttribPtr;      /* Pointer to Attributes Table */
    uint1           u1AttribLen;    /* Length Attributes Table */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1Help;        /* Help Info */
    E_UpdateID      Update;         /* ECU Update Rate */
} S_ParamListV4;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Units;       /* Units */
    E_ClassID       ClassID;        /* ECU Class Type */
    uint1           u1Access;       /* Access Permissions */
    E_StorageID     StorageID;      /* ECU Storage Class */
    uint4           u4Address;      /* ECU Address */
    void *          AttribPtr;      /* Pointer to Attributes Table */
    uint1           u1AttribLen;    /* Length Attributes Table */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1Help;        /* Help Info */
    E_UpdateID      Update;         /* ECU Update Rate */
    uint1           u1TblParamNum;  /* The item number within table that currently in */
} S_ParamListV5;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Units;       /* Units */
    E_ClassID       ClassID;        /* ECU Class Type */
    uint1           u1Access;       /* Access Permissions */
    E_StorageID     StorageID;      /* ECU Storage Class */
    uint4           u4Address;      /* ECU Address */
    void *          AttribPtr;      /* Pointer to Attributes Table */
    uint1           u1AttribLen;    /* Length Attributes Table */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1Help;        /* Help Info */
    E_UpdateID      Update;         /* ECU Update Rate */
    uint1           u1TblParamNum;  /* The item number within table that currently in */
    uint4           u4SqlParamID;   /* The PID used in TSys SQL Db to describe this parameter */
} S_ParamListV6;

typedef struct
{
    char1 *         sz1Name;        /* Name */
    char1 *         sz1Units;       /* Units */
    E_ClassID       ClassID;        /* ECU Class Type */
    uint1           u1Access;       /* Access Permissions */
    E_StorageID     StorageID;      /* ECU Storage Class */
    uint4           u4Address;      /* ECU Address */
    void *          AttribPtr;      /* Pointer to Attributes Table */
    uint1           u1AttribLen;    /* Length Attributes Table */
    char1 *         sz1Group;       /* Parameter Group */
    char1 *         sz1Help;        /* Help Info */
    E_UpdateID      Update;         /* ECU Update Rate */
    uint2           u1TblParamNum;  /* The item number within table that currently in */
    uint4           u4SqlParamID;   /* The PID used in TSys SQL Db to describe this parameter */
} S_ParamListV8;

typedef struct
{
    uint1           u1TblRev;       /* Table Rev Value from ECU */
    void *          ParamLstPtr;    /* Pointer to Parameter List */
    uint1           u1LstLength;    /* Length of Parameter List */
} S_TableRevList;

typedef struct
{
    uint1           u1TblRev;       /* Table Rev Value from ECU */
    void *          ParamLstPtr;    /* Pointer to Parameter List */
    uint2           u1LstLength;    /* Length of Parameter List */
} S_TableRevListV8;


typedef struct
{
    uint1           u1TblNum;       /* Table Number in ECU */
    S_TableRevList *TblRevLstPtr;   /* Pointer to Table Revision List */
    uint1           u1LstLength;    /* Length of Table Revision List */
    char1 *         sz1Description; /* Description of Table */
} S_TableList;

typedef struct
{
    E_TDBProjectID  ProjectID;      /* Project ID Value from ECU */
    S_TableList *   TableLstPtr;    /* Pointer to Project Table List */
    uint1           u1LstLength;    /* Length of Project Table List */
    char1 *         sz1Description; /* Description of Project */
} S_ProjectList;

typedef struct
{
    char1 *         sz1AliasName;   /* The alias name */
    char1 *         sz1ParamName;   /* The name of the parameter to which it is aliased */
    uint4           u4SqlParamID;   /* The PID used in TSys SQL Db to describe this parameter */
    uint1           u1SqlDataType;  /* SQL Data Type */
} S_ALIASList;

typedef struct
{
    uint1           u1StructMaj;    /* DB Structure Major Revision */
    uint1           u1StructMin;    /* DB Structure Minor Revision */
    S_ProjectList * ProjectLstPtr;  /* Pointer to Project List */
    uint1           u1LstLength;    /* Length of Project List */
} S_TDBInfoV6;

typedef struct
{
    uint1           u1StructMaj;    /* DB Structure Major Revision */
    uint1           u1StructMin;    /* DB Structure Minor Revision */
    S_ProjectList * ProjectLstPtr;  /* Pointer to Project List */
    uint1           u1LstLength;    /* Length of Project List */
    S_ALIASList *   AliasLstPtr;
    uint4           u4AliasLstLen;
} S_TDBInfoV7;

#pragma pack()

/*----- EXTERNALS --------------------------------------------------------*/
#ifndef __TDBDEFN_C


#endif /* __TDBDEFN_C */

/*----- PROTOTYPES -------------------------------------------------------*/


#endif /* __TDBDEFN_H */

/*----- END OF FILE ------------------------------------------------------*/

