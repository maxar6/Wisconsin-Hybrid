/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   ::
   ::   Module      :   CCP Handling
   ::   Copyright   :   (C)2009 Woodward
   ::
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

#ifndef MH_CCP_PROTOCOL_H
#define MH_CCP_PROTOCOL_H              1

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#undef DISALLOW_TDB_DEFINES
#include "ERIRequestTables_GenAPI.h"
#include "BootInterface.h"
#include "Endian.h"

/*---- DEFINES ----------------------------------------------------------------------------------------------*/
#define CCP_MAX_MTA                    2
#define CCP_CALIBRATION_SPACE          0x80000000
#define CCP_CALIBRATION_SPACE_MASK     0xC0000000
#define CCP_MEASUREMENT_SPACE          0x40000000
#define CCP_MEASUREMENT_SPACE_MASK     CCP_CALIBRATION_SPACE_MASK
#define CCP_WRITE_BUF_SIZE             8

/*---- TYPEDEF ----------------------------------------------------------------------------------------------*/
typedef enum {

  /* required */
  CCP_CC_CONNECT = 0x01,
  CCP_CC_SET_MTA = 0x02,
  CCP_CC_DNLOAD = 0x03,
  CCP_CC_UPLOAD = 0x04,
  CCP_CC_TEST = 0x05,
  CCP_CC_START_STOP = 0x06,
  CCP_CC_DISCONNECT = 0x07,
  CCP_CC_START_STOP_ALL = 0x08,
  CCP_CC_SHORT_UPLOAD = 0x0F,
  CCP_CC_GET_DAQ_SIZE = 0x14,
  CCP_CC_SET_DAQ_PTR = 0x15,
  CCP_CC_WRITE_DAQ = 0x16,
  CCP_CC_EXCHANGE_ID = 0x17,
  CCP_CC_GET_CCP_VERSION = 0x1B,
  CCP_CC_DNLOAD6 = 0x23,

  /* Optional */
  CCP_CC_GET_CAL_PAGE = 0x09,
  CCP_CC_SET_S_STATUS = 0x0C,
  CCP_CC_GET_S_STATUS = 0x0D,
  CCP_CC_BUILD_CHKSUM = 0x0E,
  CCP_CC_CLEAR_MEMORY = 0x10,
  CCP_CC_SET_CAL_PAGE = 0x11,
  CCP_CC_GET_SEED = 0x12,
  CCP_CC_UNLOCK = 0x13,
  CCP_CC_PROGRAM = 0x18,
  CCP_CC_MOVE_MEMORY = 0x19,
  CCP_CC_DIAG_SERVICE = 0x20,
  CCP_CC_ACTION_SERVICE = 0x21,
  CCP_CC_PROGRAM6 = 0x22,

  /* Debug */
  CCP_CC_GET_MTA_VAL = 0x33,
} E_CCPCommandCodes;

typedef enum {

  /* Return Codes */
  CCP_CRC_OK = 0x00,

  /* C1 */
  CCP_CRC_CMD_BUSY = 0x10,
  CCP_CRC_DAQ_BUSY = 0x11,
  CCP_CRC_KEY_REQUEST = 0x18,
  CCP_CRC_STATUS_REQUEST = 0x19,

  /* C2 */
  CCP_CRC_COLD_START_REQUEST= 0x20,
  CCP_CRC_CAL_INIT_REQUEST = 0x21,
  CCP_CRC_DAQ_INIT_REQUEST = 0x22,
  CCP_CRC_CODE_REQUEST = 0x23,

  /* C3 (Errors) */
  CCP_CRC_CMD_UNKNOWN = 0x30,
  CCP_CRC_CMD_SYNTAX = 0x31,
  CCP_CRC_OUT_OF_RANGE = 0x32,
  CCP_CRC_ACCESS_DENIED = 0x33,
  CCP_CRC_OVERLOAD = 0x34,
  CCP_CRC_ACCESS_LOCKED = 0x35,
} E_CCPReturnCodes;

typedef enum {

  /* Session Status */
  CCP_SS_DISCONNECTED = 0x00,          /* CCP Session Disconnected */
  CCP_SS_CAL = 0x01,                   /* CCP Session Calibrating */
  CCP_SS_DAQ = 0x02,                   /* CCP Session DAQ Active */
  CCP_SS_RESUME = 0x04,                /* CCP Session Resuming */
  CCP_SS_TMP_DISCONNECTED = 0x10,      /* CCP Session Temporarily Disconnected */
  CCP_SS_STORE = 0x40,                 /* CCP Session Storing */
  CCP_SS_RUN = 0x80,                   /* CCP Session Running */
} E_CCPSessionStatus;

typedef enum {

  /* DAQ list status */
  CCP_DAQ_STOPPED = 0x00,              /* CCP DAQ Stopped */
  CCP_DAQ_RUN = 0x01,                  /* CCP DAQ Running */
  CCP_DAQ_PREPARED = 0x02,             /* CCP DAQ Prepared */
} E_CCPDAQStatus;

typedef enum {

  /* Priviledge Level */
  CCP_PL_CAL = 0x01,
  CCP_PL_DAQ = 0x02,
  CCP_PL_PGM = 0x40,
} E_CCPPriviledgeLevel;

/* Function Prototype for transmission of CAN messages */
typedef boolean_T (* pfTxCallback)(boolean_T ext, uint32_T id, uint8_T
  in_u2NumBytesToTransmit, const uint8_T *in_pTransmitDataArr);

#define nODTSITEMSPERLIST              (7)

typedef struct ccphandlerconfig{
  pfTxCallback pTxCallback;
  S_CCPDAQ_T *DAQs;
  S_CCPODT_T *ODTs;
  uint16_T *DAQPrescalers;
  uint8_T *bFrameNotReady;
  uint8_T numDAQs;
  uint8_T numODTs;
  uint8_T numTrigs;
} S_CCPHandlerConfig;

typedef struct {
  uint32_T VirtualAddress;             /* Computed MTA Virtual Address */
  uint8_T EriTableIdx;                 /* Mapped ERI Table             */
  uint16_T EriItemIdx;                 /* Mapped ERI Table Item        */
  uint16_T EriItemOffset;              /* Mapped ERI Item Offset       */
  boolean_T Valid;                     /* Mapped to a valid location   */
} S_CCPMTA;

typedef struct ccpreplystruct {
  S_CCPHandlerConfig *CCPHandlerConfig;
  uint8_T TransmitDataArr[8];
  uint32_T u4NumBytesToProcess;
  uint32_T u4NumBytesProcessed;
  uint8_T *TransferAddress;            /* Source for memory writes, Destination for memory reads */
  S_CCPMTA *MTAx;
  uint8_T ext;
  uint32_T id;
  uint8_T CommandCode;                 /* Indicates command which is accessing memory asychronously */
  uint8_T AsyncComplete;
} S_CCPReplyStruct;

typedef struct daqptr {
  uint8_T DAQNumber;
  uint8_T ODTNumber;
  uint8_T ItemNumber;
} S_DAQPtr;

struct tag_S_CCPHandlerInstance;
typedef void (*mh_pfCCPSecurityFunction)(void);
typedef void (*mh_pfCCPSecurityFunctionCallback)(S_CCPHandlerConfig *
  CCPHandlerConfig, struct tag_S_CCPHandlerInstance *CCPHandlerInstance,
  uint32_T seed);
typedef struct tag_S_CCPHandlerInstance {
  uint8_T CCPSessionStatus;
  uint16_T StationID;
  uint8_T UnlockStatus;
  uint8_T UnlockResource;
  uint8_T Key[4];
  uint8_T CCPMajorVersion;
  uint8_T CCPMinorVersion;
  uint8_T WriteBuffer[CCP_WRITE_BUF_SIZE];
  uint32_T id;
  boolean_T ext;
  boolean_T Connected;
  S_CCPMTA MTA0;
  S_CCPMTA MTA1;                       /* Currently only the BUILD_CKSUM modifies MTA1*/
  S_CCPReplyStruct CCPReplyStruct;
  S_CCPODTItem_T *CurrentDAQPtr;
  S_DAQPtr CurrentDAQIdx;
  mh_pfCCPSecurityFunction SecurityFunctionCAL;
  mh_pfCCPSecurityFunctionCallback SecurityFunctionCallback;
  mh_pfCCPSecurityFunction SecurityFunctionDAQ;
  uint8_T cmd_idx;
} S_CCPHandlerInstance;

/*---- EXTERNALS --------------------------------------------------------------------------------------------*/
extern
  void mh_InitCCP(S_CCPHandlerConfig * CCPHandlerConfig,
                  S_CCPHandlerInstance * CCPHandlerInstance);
extern
  void mh_ProcessCCP(uint8_T in_u2NumBytes,
                     uint8_T *in_pRequestDataArr,
                     S_CCPHandlerConfig * CCPHandlerConfig,
                     S_CCPHandlerInstance * CCPHandlerInstance);
extern
  void mh_ProcessCCPChecksum(S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
extern
  void mh_ProcessCCPTick( int8_T *evt,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);

/*---- PROTOTYPES -------------------------------------------------------------------------------------------*/

/*----- CONSTANT PARAMETERS -------------------------------------------------------------------------------*/

/*----- CALIBRATION ---------------------------------------------------------------------------------------*/

/*----- GLOBAL RAM PARAMETERS -----------------------------------------------------------------------------*/

/*----- STATIC RAM PARAMETERS -----------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/

/*---- INLINE FUNCTIONS -----------------------------------------------------------------------------------*/

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
#endif                                 /* MH_CCP_PROTOCOL_H	*/
