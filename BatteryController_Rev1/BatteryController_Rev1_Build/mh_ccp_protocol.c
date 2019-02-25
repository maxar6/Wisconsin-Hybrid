/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   ::
   ::   Module      :   CCP Handling
   ::   Copyright   :   (C)2009 Woodward
   ::
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/

#include "Application.h"
#include "ERIRequestTables.h"
#include "CRC32.h"

/*---- PROTOTYPES -------------------------------------------------------------------------------------------*/
void mh_ProcessCCP_BuildChecksum(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Download(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Download6(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Connect(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_ExchangeID(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_GetCCPVersion(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_GetDAQSize(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_GetSessionStatus(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_SelectCalPage(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_SetDAQPointer(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_SetMTA(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_SetSessionStatus(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_ShortUpload(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_StartStop(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_StartStopAll(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Test(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_UnSupported(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Upload(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_WriteDAQ(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Disconnect(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_GetSeed(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCP_Unlock(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);
void mh_ProcessCCPDaq(uint8_T DAQidx,
                      S_CCPHandlerConfig * CCPHandlerConfig,
                      S_CCPHandlerInstance * CCPHandlerInstance);
void mh_CCP_getmem(S_CCPReplyStruct *CCPReplyStruct);
void mh_CCP_setmem(S_CCPReplyStruct *CCPReplyStruct);
void mh_CCP_checksum(S_CCPReplyStruct *CCPReplyStruct);
void mh_CCP_setmem_no_callback(void *dst, void *src, uint32_T size);

/* DEBUG SUPPORT */
void mh_ProcessCCP_GetMTAVal(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance);

/*----- CONSTANT PARAMETERS -------------------------------------------------------------------------------*/

/*----- CALIBRATION ---------------------------------------------------------------------------------------*/

/*----- GLOBAL RAM PARAMETERS -----------------------------------------------------------------------------*/

/*----- STATIC RAM PARAMETERS -----------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/

/*=========================================================================================================*/
void mh_InitCCP(S_CCPHandlerConfig * CCPHandlerConfig,
                S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T DAQidx, DAQStatus = CCP_DAQ_STOPPED;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  CCPHandlerInstance->CCPSessionStatus = (uint8_T)CCP_SS_DISCONNECTED;
  CCPHandlerInstance->Connected = false;

  /* MTA starts at zero */
  CCPHandlerInstance->MTA0.VirtualAddress = 0;
  CCPHandlerInstance->MTA0.EriTableIdx = 0;
  CCPHandlerInstance->MTA0.EriItemIdx = 0;
  CCPHandlerInstance->MTA0.EriItemOffset = 0;
  CCPHandlerInstance->MTA0.Valid = false;

  /* Mark all async operations completed */
  CCPHandlerInstance->CCPReplyStruct.AsyncComplete = true;
  CCPHandlerInstance->CCPReplyStruct.CommandCode = 0;

  /* Most of the EEPROM writes below should only really need to write once.  Hopefully unnecessary writes are avoided */
  for (DAQidx=0; DAQidx<CCPHandlerConfig->numDAQs; DAQidx++) {
    S_CCPDAQ_T* thisDAQ = &CCPHandlerConfig->DAQs[DAQidx];
    mh_CCP_setmem_no_callback(&thisDAQ->DAQStatus, &DAQStatus, sizeof(uint8_T));
    CCPHandlerConfig->bFrameNotReady[DAQidx] = 0;
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP(uint8_T in_u2NumBytes,
                   uint8_T *in_pRequestDataArr,
                   S_CCPHandlerConfig * CCPHandlerConfig,
                   S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (in_u2NumBytes >= 1) {
    uint8_T command = in_pRequestDataArr[0];
    switch (command) {
     case CCP_CC_CONNECT:
      mh_ProcessCCP_Connect(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                            CCPHandlerInstance);
      break;

     case CCP_CC_SET_MTA:
      mh_ProcessCCP_SetMTA(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                           CCPHandlerInstance);
      break;

     case CCP_CC_DNLOAD:
      mh_ProcessCCP_Download(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_UPLOAD:
      mh_ProcessCCP_Upload(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                           CCPHandlerInstance);
      break;

     case CCP_CC_TEST:
      mh_ProcessCCP_Test(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                         CCPHandlerInstance);
      break;

     case CCP_CC_START_STOP:
      mh_ProcessCCP_StartStop(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_DISCONNECT:
      mh_ProcessCCP_Disconnect(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_SET_CAL_PAGE:
      mh_ProcessCCP_SelectCalPage(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_START_STOP_ALL:
      mh_ProcessCCP_StartStopAll(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_SHORT_UPLOAD:
      mh_ProcessCCP_ShortUpload(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_GET_DAQ_SIZE:
      mh_ProcessCCP_GetDAQSize(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_SET_DAQ_PTR:
      mh_ProcessCCP_SetDAQPointer(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_WRITE_DAQ:
      mh_ProcessCCP_WriteDAQ(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_EXCHANGE_ID:
      mh_ProcessCCP_ExchangeID(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_GET_CCP_VERSION:
      mh_ProcessCCP_GetCCPVersion(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_DNLOAD6:
      mh_ProcessCCP_Download6(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     case CCP_CC_SET_S_STATUS:
      mh_ProcessCCP_SetSessionStatus(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_GET_S_STATUS:
      mh_ProcessCCP_GetSessionStatus(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_BUILD_CHKSUM:
      mh_ProcessCCP_BuildChecksum(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;

     case CCP_CC_GET_SEED:
      mh_ProcessCCP_GetSeed(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                            CCPHandlerInstance);
      break;

     case CCP_CC_UNLOCK:
      mh_ProcessCCP_Unlock(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
                           CCPHandlerInstance);
      break;

      /* DEBUG SUPPORT */
     case CCP_CC_GET_MTA_VAL:
      mh_ProcessCCP_GetMTAVal(in_u2NumBytes,in_pRequestDataArr,CCPHandlerConfig,
        CCPHandlerInstance);
      break;

     default:
      mh_ProcessCCP_UnSupported(in_u2NumBytes,in_pRequestDataArr,
        CCPHandlerConfig,CCPHandlerInstance);
      break;
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCPChecksum(S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  /* Process BUILD_CKSUM asynchronous event */
  if ((CCPHandlerInstance->CCPReplyStruct.CommandCode == CCP_CC_BUILD_CHKSUM) &&
      (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete))
    mh_CCP_checksum(&CCPHandlerInstance->CCPReplyStruct);
}

/*=========================================================================================================*/
void mh_ProcessCCPTick(int8_T *evt,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T EvtIdx;
  if (evt==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (0 == CCPHandlerInstance->SecurityFunctionCAL) {
    CCPHandlerInstance->UnlockStatus |= CCP_PL_CAL;
  }

  if (0 == CCPHandlerInstance->SecurityFunctionDAQ) {
    CCPHandlerInstance->UnlockStatus |= CCP_PL_DAQ;
  }

  /* Event 0 - n DAQ triggers */
  for (EvtIdx=0;EvtIdx<CCPHandlerConfig->numTrigs;EvtIdx++) {
    if (evt[EvtIdx]) {
      uint8_T DAQidx;
      for (DAQidx=0; DAQidx<CCPHandlerConfig->numDAQs;DAQidx++) {
        if (CCP_DAQ_RUN==CCPHandlerConfig->DAQs[DAQidx].DAQStatus) {
          if (EvtIdx==CCPHandlerConfig->DAQs[DAQidx].EventChannelNumber) {
            mh_ProcessCCPDaq(DAQidx, CCPHandlerConfig, CCPHandlerInstance);
          }
        }
      }
    }
  }
}

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

/*=========================================================================================================*/
/* Create a 32 bit integer from the provided array of bytes                                                */
uint32_T mh_MakeUint32(uint8_T* in_pRequestDataArr)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return(0);

#if defined(__GET_CPU_FROM_BE32)

  return __GET_CPU_FROM_BE32(in_pRequestDataArr);

#else

  /* To do: Make this routine operate properly on LSB-First processors */
  return (uint32_T) ( (in_pRequestDataArr[0] << 24) |
                     (in_pRequestDataArr[1] << 16) |
                     (in_pRequestDataArr[2] << 8) |
                     in_pRequestDataArr[3]);

#endif

}

/*=========================================================================================================*/
boolean_T mh_MoveMTA_Seek(S_CCPMTA * pMTA, boolean_T boolForceAdvance)
/*=========================================================================================================*/
{
  uint8_T access;
  boolean_T IndexValid = false;
  S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
  boolean_T isCalMemoryType = (pMTA->VirtualAddress & CCP_CALIBRATION_SPACE) !=
    0;
  boolean_T isMeasMemoryType = (pMTA->VirtualAddress & CCP_MEASUREMENT_SPACE) !=
    0;
  while ((pMTA->EriTableIdx < ERI_REQUEST_NUM_TBL) && !IndexValid) {
    if (boolForceAdvance) {
      boolForceAdvance = false;
      if ((pMTA->EriItemIdx + 1) == Table->TblLength) {
        pMTA->EriItemIdx = 0;
        pMTA->EriTableIdx++;
        if (pMTA->EriTableIdx < ERI_REQUEST_NUM_TBL) {
          Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
        } else {
          break;
        }
      } else {
        pMTA->EriItemIdx++;
      }
    }

    access = Table->TblAddr[pMTA->EriItemIdx].Access;

    /* found a calibration? */
    if (isCalMemoryType && (access & (WO1 + WO2 + WO3 + WO4))) {
      IndexValid = true;
    } else if (isMeasMemoryType && (0==(access & (WO1 + WO2 + WO3 + WO4)))) {
      /* found a measurement? */
      IndexValid = true;
    } else if ((pMTA->EriItemIdx + 1) == Table->TblLength) {
      pMTA->EriItemIdx = 0;
      pMTA->EriTableIdx++;
      if (pMTA->EriTableIdx < ERI_REQUEST_NUM_TBL) {
        Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
      }
    } else {
      pMTA->EriItemIdx++;
    }
  }

  return IndexValid;
}

/*=========================================================================================================*/
void mh_MoveMTAForward(S_CCPMTA * pMTA,
  uint32_T RequestedAddress)
/*=========================================================================================================*/
{
  S_EriReqTblList const* Table = NULL;

  /* Handle the special case where item 0 hasn't been indexed yet */
  if (!pMTA->Valid && (pMTA->EriTableIdx == 0) && (pMTA->EriItemIdx == 0)) {
    /* No item in this virtual space available? */
    if (!mh_MoveMTA_Seek(pMTA, false)) {
      return;
    }
  }

  Table = GetERIRequestTablePtr(pMTA->EriTableIdx);

  /* Now seek forward, until the location is found */
  while ((pMTA->EriTableIdx < ERI_REQUEST_NUM_TBL) && (pMTA->VirtualAddress <
          RequestedAddress)) {
    uint32_T SeekRemaining = RequestedAddress - pMTA->VirtualAddress;
    uint32_T SizeRemaining = (Table->TblAddr[pMTA->EriItemIdx].Size *
      Table->TblAddr[pMTA->EriItemIdx].uElementSize) - pMTA->EriItemOffset;
    if (SeekRemaining < SizeRemaining) {
      /* SeekRemaing must be less than  ((1<<12)-1) * 4  = 0x3ffc so it is safe to
         cast to uint16_T. */
      pMTA->EriItemOffset += (uint16_T)SeekRemaining;
      pMTA->VirtualAddress += SeekRemaining;
    } else {
      pMTA->EriItemOffset = 0;
      pMTA->VirtualAddress += SizeRemaining;

      /* Need to advance to the next calibration entry in the table */
      if (!mh_MoveMTA_Seek(pMTA, true)) {
        pMTA->Valid = false;
        return;
      }

      /* Every seek could result in a new table index */
      Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    }
  }

  /* Assign the validity */
  pMTA->Valid = pMTA->VirtualAddress == RequestedAddress;
}

/*=========================================================================================================*/

/*=========================================================================================================*/
void mh_MoveMTAReverse(S_CCPMTA * pMTA,
  uint32_T RequestedAddress)
{
}

/*=========================================================================================================*/

/*=========================================================================================================*/
void mh_MoveMTA(S_CCPMTA * pMTA,
                uint32_T RequestedAddress)
/*=========================================================================================================*/
{
  /* If the requested address does not fall into one of the virtual spaces, we can just assign the
     Eri values directly */
  if ((RequestedAddress & CCP_CALIBRATION_SPACE_MASK) == 0) {
    /* Assume the request is out-of-range */
    pMTA->Valid = false;
    pMTA->VirtualAddress = RequestedAddress;

    /* Note: all "array" items must be read from start (no random access within arrays) */
    pMTA->EriTableIdx = (uint8_T)(RequestedAddress >> 16);
    pMTA->EriItemIdx = (uint16_T)RequestedAddress;
    pMTA->EriItemOffset = 0;

    /* Check for validity */
    if (pMTA->EriTableIdx < ERI_REQUEST_NUM_TBL) {
      S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
      uint16_T ItemSize = (Table->TblAddr[pMTA->EriItemIdx].Size *
                           Table->TblAddr[pMTA->EriItemIdx].uElementSize);
      if ((pMTA->EriItemIdx < Table->TblLength) && (pMTA->EriItemOffset <
           ItemSize)) {
        pMTA->Valid = true;
      }
    }
  } else {
    /* Start from virtual address zero? */
    if (!pMTA->Valid || ((pMTA->VirtualAddress & CCP_CALIBRATION_SPACE_MASK) !=
                         (RequestedAddress & CCP_CALIBRATION_SPACE_MASK))) {
      pMTA->VirtualAddress = 0 | (RequestedAddress & CCP_CALIBRATION_SPACE_MASK);
      pMTA->EriTableIdx = 0;
      pMTA->EriItemIdx = 0;
      pMTA->EriItemOffset = 0;
      pMTA->Valid = false;
    }

    if (pMTA->VirtualAddress <= RequestedAddress) {
      mh_MoveMTAForward(pMTA, RequestedAddress);
    } else {
      /* Not Finished Yet - Just use forward algorithm */
      pMTA->VirtualAddress = 0 | (RequestedAddress & CCP_CALIBRATION_SPACE_MASK);
      pMTA->EriTableIdx = 0;
      pMTA->EriItemIdx = 0;
      pMTA->EriItemOffset = 0;
      pMTA->Valid = false;
      mh_MoveMTAForward(pMTA, RequestedAddress);

      /* Not Finished Yet */
      /*
         mh_MoveMTAReverse(pMTA, RequestedAddress);
       */
    }
  }

  /* Reset an invalid MTA */
  if (!pMTA->Valid) {
    pMTA->VirtualAddress = 0;
    pMTA->EriTableIdx = 0;
    pMTA->EriItemIdx = 0;
    pMTA->EriItemOffset = 0;
  }
}

/*=========================================================================================================*/
boolean_T mh_MTAIsCalibration(S_CCPMTA * pMTA)
/*=========================================================================================================*/
{
  /* The MTA must be set to a location by a CCP SET_MTA command */
  if (!pMTA->Valid) {
    return false;
  }

  /* Is the MTA in Calibration Space, or ERI space? */
  if (0 != (pMTA->VirtualAddress & CCP_CALIBRATION_SPACE_MASK)) {
    return 0 != (pMTA->VirtualAddress & CCP_CALIBRATION_SPACE);
  } else {
    /* Check the access in the table */
    S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    uint8_T access = Table->TblAddr[pMTA->EriItemIdx].Access;
    return 0 != (Table->TblAddr[pMTA->EriItemIdx].Access & (WO1 + WO2 + WO3 +
      WO4));
  }
}

/*=========================================================================================================*/
void mh_MTAPostIncrement(S_CCPMTA * pMTA,
  uint32_T in_Increment)
/*=========================================================================================================*/
{
  /* The MTA must be set to a location by a CCP SET_MTA command */
  if (!pMTA->Valid) {
    return;
  }

  /* Is the MTA in Calibration Space, or ERI space? */
  if (0 != (pMTA->VirtualAddress & CCP_CALIBRATION_SPACE_MASK)) {
    mh_MoveMTA(pMTA, pMTA->VirtualAddress + in_Increment);
  } else {
    /* Are there remaining bytes available in this item? */
    S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    uint32_T BytesAvailableThisItem = (Table->TblAddr[pMTA->EriItemIdx].Size *
      Table->TblAddr[pMTA->EriItemIdx].uElementSize) -
      pMTA->EriItemOffset;
    if (BytesAvailableThisItem > in_Increment) {
      /* Advance the offset this item (Mathematically less than 16 bit) */
      pMTA->EriItemOffset += (uint16_T)in_Increment;
    } else {
      pMTA->EriItemOffset = 0;

      /* Advance an entry in the table */
      if ((pMTA->EriItemIdx + 1) == Table->TblLength) {
        pMTA->EriItemIdx = 0;
        pMTA->EriTableIdx++;

        /* Exceeded last table */
        if (ERI_REQUEST_NUM_TBL == pMTA->EriTableIdx) {
          pMTA->Valid = 0;
          pMTA->VirtualAddress = 0;
          pMTA->EriTableIdx = 0;
          pMTA->EriItemIdx = 0;
          pMTA->EriItemOffset = 0;
        }
      } else {
        pMTA->EriItemIdx++;
      }
    }
  }
}

/*=========================================================================================================*/
void mh_CCPMemReadCallback( void const* pResultBuffer,
  uint4 uBytesAffected,
  E_Exceptions eException,
  NativePtrSizedInt_U uAppDataSentOnNotify)
/*=========================================================================================================*/
{
  S_CCPReplyStruct * CCPReplyStruct = (S_CCPReplyStruct*)uAppDataSentOnNotify;
  if (CCPReplyStruct && CCPReplyStruct->CCPHandlerConfig &&
      CCPReplyStruct->CCPHandlerConfig->pTxCallback) {
    if (eException == EXCEPTION_NONE) {
      if (CCPReplyStruct->TransferAddress) {
        memcpy(CCPReplyStruct->TransferAddress, pResultBuffer, (NativeVar_U)
               uBytesAffected);

        /* Increment MTA, counters, and destination pointer */
        mh_MTAPostIncrement(CCPReplyStruct->MTAx, uBytesAffected);
        CCPReplyStruct->u4NumBytesProcessed += uBytesAffected;
        CCPReplyStruct->TransferAddress += uBytesAffected;

        /* More data for this read? */
        if (CCPReplyStruct->u4NumBytesProcessed <
            CCPReplyStruct->u4NumBytesToProcess) {
          /* Did the read move the MTA invalid?*/
          if (!CCPReplyStruct->MTAx->Valid) {
            CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
            CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
              CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
          } else {
            mh_CCP_getmem(CCPReplyStruct);
          }
        } else {
          /* Asynchronous read complete */
          CCPReplyStruct->AsyncComplete = true;
          CCPReplyStruct->CommandCode = 0;
          CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
            CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
        }
      }
    } else {                           /* Send a message out on the can bus with the Exception */
      CCPReplyStruct->AsyncComplete = true;
      CCPReplyStruct->CommandCode = 0;
      CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
      CCPReplyStruct->TransmitDataArr[3] = 0;
      CCPReplyStruct->TransmitDataArr[4] = 0;
      CCPReplyStruct->TransmitDataArr[5] = 0;
      CCPReplyStruct->TransmitDataArr[6] = (uint8_T)eException;
      CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
        CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
/* CCP DAQ dispatching is optimized for RAM usage.  This means that extra code space is utilized to        */
/* indicate the offset into an individual DAQ message on the CAN bus                                       */
void mh_ProcessCCPDaq( uint8_T DAQidx,
                      S_CCPHandlerConfig * CCPHandlerConfig,
                      S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerConfig->DAQPrescalers[DAQidx]) {
    CCPHandlerConfig->DAQPrescalers[DAQidx]--;

    /* When the prescaler hits zero, the entire DAQ list needs to be sent out */
    if (0==CCPHandlerConfig->DAQPrescalers[DAQidx]) {
      CCPHandlerConfig->DAQPrescalers[DAQidx] = CCPHandlerConfig->DAQs[DAQidx].
        Prescaler;
      if (CCPHandlerConfig->DAQs[DAQidx].LastODTNumber <
          CCPHandlerConfig->numODTs) {
        if (CCPHandlerConfig->bFrameNotReady[DAQidx] == FALSE) {
          NativeVar_U i;
          NativeVar_U uPid = CCPHandlerConfig->numODTs * DAQidx;
          S_CCPODT_T *pODT = &CCPHandlerConfig->ODTs[uPid];
          uint8_T data[8];
          NativeVar_U uLastPid = uPid + CCPHandlerConfig->DAQs[DAQidx].
            LastODTNumber;

          /* About to modify the frame. bFrameNotReady stops retrigger if the callbacks are
             slower than this trigger execution speed */
          CCPHandlerConfig->bFrameNotReady[DAQidx] = TRUE;
          for (; uPid <= uLastPid; uPid++) {
            NativeVar_U bytesThisMessage = 0;
            data[0] = (uint8_T)uPid;
            for (i=0; i<nODTSITEMSPERLIST; i++) {
              S_CCPODTItem_T *item = &pODT->ODTList[i];
              MemReadSynch(&data[bytesThisMessage + 1], item->pData,
                           item->DataSize);
              bytesThisMessage += item->DataSize;
              if ((bytesThisMessage > 7) || (bytesThisMessage >= pODT->ODTSize))
                break;
            }

            /* Transmit it */
            CCPHandlerConfig->pTxCallback(CCPHandlerConfig->DAQs[DAQidx].TxID &
              0x80000000UL ? 1 : 0,
              CCPHandlerConfig->DAQs[DAQidx].TxID & 0x1FFFFFFFUL,
              pODT->ODTSize + 1,
              data);

            /* Process next ODT */
            pODT++;
          }

          CCPHandlerConfig->bFrameNotReady[DAQidx] = FALSE;
        }
      }
    }
  }
}

/*=========================================================================================================*/
void mh_CCPMemWriteCallback(void const* pResultBuffer,
  uint4 uBytesAffected,
  E_Exceptions eException,
  NativePtrSizedInt_U uAppDataSentOnNotify)
/*=========================================================================================================*/
{
  S_CCPReplyStruct * CCPReplyStruct = (S_CCPReplyStruct*)uAppDataSentOnNotify;
  if (CCPReplyStruct && CCPReplyStruct->CCPHandlerConfig &&
      CCPReplyStruct->CCPHandlerConfig->pTxCallback) {
    if (eException == EXCEPTION_NONE) {
      /* Increment MTA, counters, and destination pointer */
      mh_MTAPostIncrement(CCPReplyStruct->MTAx, uBytesAffected);
      CCPReplyStruct->u4NumBytesProcessed += uBytesAffected;
      CCPReplyStruct->TransferAddress += uBytesAffected;

      /* More data for this read? */
      if (CCPReplyStruct->u4NumBytesProcessed <
          CCPReplyStruct->u4NumBytesToProcess) {
        /* Did the read move the MTA invalid?*/
        if (!CCPReplyStruct->MTAx->Valid) {
          CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
          CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
            CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
        } else {
          /* Write next item */
          mh_CCP_setmem(CCPReplyStruct);
        }
      } else {
        memcpy(&CCPReplyStruct->TransmitDataArr[4], &CCPReplyStruct->
               MTAx->VirtualAddress, 4);

        /* Asynchronous write complete */
        CCPReplyStruct->AsyncComplete = true;
        CCPReplyStruct->CommandCode = 0;
        CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
          CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
      }
    } else {                           /* Send a message out on the can bus with the Exception */
      CCPReplyStruct->AsyncComplete = true;
      CCPReplyStruct->CommandCode = 0;
      CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
      CCPReplyStruct->TransmitDataArr[3] = 0;
      CCPReplyStruct->TransmitDataArr[4] = 0;
      CCPReplyStruct->TransmitDataArr[5] = 0;
      CCPReplyStruct->TransmitDataArr[6] = (uint8_T)eException;
      CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
        CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_CCP_getmem(S_CCPReplyStruct *CCPReplyStruct)
/* MTA has to be checked for valid prior to passing to this function! */
/*=========================================================================================================*/
{
  if (CCPReplyStruct) {
    /* Determine the source pointer from the passed in MTA */
    S_CCPMTA *pMTA = CCPReplyStruct->MTAx;
    S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    uint32_T BytesToRead = CCPReplyStruct->u4NumBytesToProcess -
      CCPReplyStruct->u4NumBytesProcessed;
    uint32_T BytesAvailableThisItem = (Table->TblAddr[pMTA->EriItemIdx].Size *
      Table->TblAddr[pMTA->EriItemIdx].uElementSize) -
      pMTA->EriItemOffset;
    void *src = (void *)(((NativePtrSizedInt_U)Table->TblAddr[pMTA->EriItemIdx].
                          ParamAddress) + pMTA->EriItemOffset);

    /* This address is a pointer to the address we are interested in */
    if (Table->TblAddr[pMTA->EriItemIdx].bIsPtr) {
      src = (void*)(((NativePtrSizedInt_U)(*(void**)(NativePtrSizedInt_U)
        Table->TblAddr[pMTA->EriItemIdx].ParamAddress)) + pMTA->EriItemOffset);
    }

    /* Limit the bytes to read based on the bytes available in this item */
    BytesToRead = BytesAvailableThisItem < BytesToRead ? BytesAvailableThisItem :
      BytesToRead;
    MemRead(src, BytesToRead, mh_CCPMemReadCallback, (NativePtrSizedInt_U)
            CCPReplyStruct);
  }
}

/*=========================================================================================================*/
void mh_CCP_setmem(S_CCPReplyStruct *CCPReplyStruct)
/*=========================================================================================================*/
{
  if (CCPReplyStruct) {
    /* Determine the source pointer from the passed in MTA */
    S_CCPMTA *pMTA = CCPReplyStruct->MTAx;
    S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    uint32_T BytesToWrite = CCPReplyStruct->u4NumBytesToProcess -
      CCPReplyStruct->u4NumBytesProcessed;

    /* Validate write access for this item */
    if (Table->TblAddr[pMTA->EriItemIdx].Access & (WO1 + WO2 + WO3 + WO4)) {
      uint32_T BytesAvailableThisItem = (Table->TblAddr[pMTA->EriItemIdx].Size *
        Table->TblAddr[pMTA->EriItemIdx].uElementSize) -
        pMTA->EriItemOffset;
      uint32_T BytesToWrite = CCPReplyStruct->u4NumBytesToProcess -
        CCPReplyStruct->u4NumBytesProcessed;
      void* dst = (void*)(((NativePtrSizedInt_U)Table->TblAddr[pMTA->EriItemIdx]
                           .ParamAddress) + pMTA->EriItemOffset);

      /* This address is a pointer to the address we are interested in */
      if (Table->TblAddr[pMTA->EriItemIdx].bIsPtr) {
        dst = (void*)(((NativePtrSizedInt_U)(*(void**)(NativePtrSizedInt_U)
          Table->TblAddr[pMTA->EriItemIdx].ParamAddress)) + pMTA->EriItemOffset);
      }

      /* Limit the bytes to read based on the bytes available in this item */
      BytesToWrite = BytesAvailableThisItem < BytesToWrite ?
        BytesAvailableThisItem : BytesToWrite;

      {
        /* If we have the opportunity to know that a long operation will possibly take place, we can relax the CCP Master's time out period by
           sending a "command processor busy" response.  NOTE: may not be supported by all calibration tools */
        extern boolean_T IsAddressInSPIEE (void const* pAddr, uint32_T
          in_u4NumBytes);
        extern boolean_T IsAddressInExtEEPROM(void const* pAddr, uint32_T
          in_u4NumBytes);
        if (0 == CCPReplyStruct->u4NumBytesProcessed) {
          CCPReplyStruct->bSendCPBComplete = false;
        }

        if ((!CCPReplyStruct->bSendCPBComplete) &&
            (CCPReplyStruct->CCPHandlerConfig->bSendCPB) &&
            (IsAddressInExtEEPROM(dst, BytesToWrite) || IsAddressInSPIEE(dst,
              BytesToWrite))) {
          uint8_T busy_msg[8] = { 0 };

          busy_msg[0] = 0xff;
          busy_msg[1] = CCP_CRC_CMD_BUSY;
          busy_msg[2] = CCPReplyStruct->TransmitDataArr[2];
          CCPReplyStruct->bSendCPBComplete = true;
          CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
            CCPReplyStruct->id,8,busy_msg);
        }
      }

      MemWrite(dst, CCPReplyStruct->TransferAddress, BytesToWrite,
               mh_CCPMemWriteCallback, (NativePtrSizedInt_U)CCPReplyStruct);
    } else if (CCPReplyStruct->CCPHandlerConfig &&
               CCPReplyStruct->CCPHandlerConfig->pTxCallback) {
      CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
      CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
        CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_CCP_setmem_no_callback (void *dst, void *src, uint32_T size)
/* This is a utility function necessary for accessing S_CCPDAQ_T and S_CCPODT structures as they may reside  */
/*   in RAM or they may reside in EEPROM                                                                   */
/*=========================================================================================================*/
{
  switch (size)
  {
   case 1:
    if ((*(uint8_T*)dst) == (*(uint8_T*)src))
      return;
    break;

   case 2:
    if ((*(uint16_T*)dst) == (*(uint16_T*)src))
      return;
    break;

   case 4:
    if ((*(uint32_T*)dst) == (*(uint32_T*)src))
      return;
    break;
  }

  /* Common code in all cases */
  MemWrite(dst, src, size, NULL, (NativePtrSizedInt_U)NULL);
}

/*=========================================================================================================*/
uint16_T mh_MakeStationAddress(uint8_T *in_pRequestDataArr)
/* Station Address is always transmitted in LSB first byte order */
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return(0);
  return(in_pRequestDataArr[1]*256+in_pRequestDataArr[0]);
}

/*=========================================================================================================*/
void mh_CCPReplyOK(S_CCPHandlerConfig * CCPHandlerConfig,
                   S_CCPHandlerInstance * CCPHandlerInstance,
                   E_CCPReturnCodes CCPReturnCode,
                   uint8_T SequenceID)
/*=========================================================================================================*/
{
  const uint8_T u2NumBytesToTransmit = 8;
  uint8_T TransmitDataArr[8];
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  TransmitDataArr[0] = 0xff;
  TransmitDataArr[1] = (uint8_T)CCPReturnCode;
  TransmitDataArr[2] = SequenceID;
  CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
    u2NumBytesToTransmit,TransmitDataArr);
}

/*=========================================================================================================*/
void mh_ProcessCCP_Test(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->StationID == mh_MakeStationAddress
      (&in_pRequestDataArr[2])) {
    mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                  in_pRequestDataArr[1]);
  } else {
    if (CCPHandlerInstance->Connected) {
      CCPHandlerInstance->Connected = false;
      CCPHandlerInstance->CCPSessionStatus = (uint8_T)CCP_SS_TMP_DISCONNECTED;
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_SetSessionStatus(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;

  /* Set the lower byte of the session status according to the request */
  CCPHandlerInstance->CCPSessionStatus =/*E_CCPSessionStatus*/
    in_pRequestDataArr[2];
  mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                in_pRequestDataArr[1]);
}

/*=========================================================================================================*/
void mh_ProcessCCP_GetSessionStatus(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    const uint8_T u2NumBytesToTransmit = 8;
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OK;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    TransmitDataArr[3] = CCPHandlerInstance->CCPSessionStatus;
    TransmitDataArr[4] = 0;
    TransmitDataArr[5] = 0;
    TransmitDataArr[6] = 0;
    TransmitDataArr[7] = 0;
    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      u2NumBytesToTransmit,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_StartStop(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;

  {
    uint8_T DAQListNumber = in_pRequestDataArr[3];
    uint8_T LastODTNumber = in_pRequestDataArr[4];
    uint8_T EventChannelNumber = in_pRequestDataArr[5];
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    if (CCPHandlerInstance->Connected) {
      if ((CCPHandlerInstance->UnlockStatus & CCP_PL_DAQ) == 0) {
        TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
      } else {
        if (DAQListNumber < CCPHandlerConfig->numDAQs) {
          if (LastODTNumber < CCPHandlerConfig->numODTs) {
            if (EventChannelNumber < CCPHandlerConfig->numTrigs) {
              /* Take a modifiable copy of this DAQ structure */
              S_CCPDAQ_T DAQCopy = CCPHandlerConfig->DAQs[DAQListNumber];
              DAQCopy.DAQStatus =      /* StartCommand */
                in_pRequestDataArr[2];
              DAQCopy.LastODTNumber = LastODTNumber;
              DAQCopy.EventChannelNumber = EventChannelNumber;
              DAQCopy.Prescaler = in_pRequestDataArr[6]*256+in_pRequestDataArr[7];

              /* Assign DAQ configuration parameters, which may be in CAL EEPROM */
              mh_CCP_setmem_no_callback(&CCPHandlerConfig->DAQs[DAQListNumber],
                &DAQCopy, sizeof(S_CCPDAQ_T));

              /* Prescalers remain in RAM, too write intensive to be in CAL EEPROM */
              CCPHandlerConfig->DAQPrescalers[DAQListNumber] = DAQCopy.Prescaler;
              TransmitDataArr[1] = CCP_CRC_OK;
            }
          }
        }
      }

      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,8,TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_StartStopAll(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T DAQidx;
    uint8_T StartCommand = in_pRequestDataArr[2];
    if ((CCPHandlerInstance->UnlockStatus & CCP_PL_DAQ) == 0) {
      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_ACCESS_DENIED,
                    in_pRequestDataArr[1]);
    } else {
      for (DAQidx=0; DAQidx<CCPHandlerConfig->numDAQs;DAQidx++) {
        if (0x01==StartCommand) {
          if (CCP_DAQ_PREPARED==CCPHandlerConfig->DAQs[DAQidx].DAQStatus) {
            uint8_T Status = CCP_DAQ_RUN;
            mh_CCP_setmem_no_callback(&CCPHandlerConfig->DAQs[DAQidx].DAQStatus,
              &Status, sizeof(Status));
          }
        } else {
          uint8_T Status = CCP_DAQ_STOPPED;
          mh_CCP_setmem_no_callback(&CCPHandlerConfig->DAQs[DAQidx].DAQStatus,
            &Status, sizeof(Status));
        }
      }

      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                    in_pRequestDataArr[1]);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Connect(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->StationID == mh_MakeStationAddress
      (&in_pRequestDataArr[2])) {
    mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                  in_pRequestDataArr[1]);
    CCPHandlerInstance->Connected = true;
  } else {
    if (CCPHandlerInstance->Connected) {
      CCPHandlerInstance->Connected = false;
      CCPHandlerInstance->CCPSessionStatus = (uint8_T)CCP_SS_TMP_DISCONNECTED;
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_ExchangeID(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T TransmitDataArr[8] = { 0 };

    EriRequestTablePtr SwIdTxt = &GetERIRequestTablePtr(0)->TblAddr[12];
    uint16_T SwIdSize = (SwIdTxt->Size * SwIdTxt->uElementSize);

    /* Set the MTA to table 0 item 12, which is always present as SwIdTxt */
    mh_MoveMTA(&CCPHandlerInstance->MTA0, 12);
    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OK;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    TransmitDataArr[3] = (uint8_T)SwIdSize;/* Always limited to 13 characters or less */
    TransmitDataArr[4] = 0;
    TransmitDataArr[5] = CCP_PL_CAL | CCP_PL_DAQ;/* Supported Resources */

    /* Locked Resources */
    TransmitDataArr[6] = (CCPHandlerInstance->UnlockStatus & CCP_PL_CAL ? 0 :
                          CCP_PL_CAL) |
      (CCPHandlerInstance->UnlockStatus & CCP_PL_DAQ ? 0 : CCP_PL_DAQ);
    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_GetDAQSize(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T DAQListNumber = in_pRequestDataArr[2];
    uint8_T i;
    uint8_T DAQStatus = CCP_DAQ_STOPPED;
    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OK;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    TransmitDataArr[3] = CCPHandlerConfig->numODTs;
    TransmitDataArr[4] = 0 + DAQListNumber*CCPHandlerConfig->numODTs;/* First PID 0,8,16, etc.*/
    if (DAQListNumber < CCPHandlerConfig->numDAQs) {
      uint32_T txID = 0;
      if (8==in_u2NumBytes) {
        txID = *(uint32_T *)(&in_pRequestDataArr[4]);
      }

      if (0==txID) {
        txID = (CCPHandlerInstance->ext ? 0x80000000UL : 0x00000000UL) +
          CCPHandlerInstance->id;
      }

      /* Vision work-around: Vision doesn't set the extended bit */
      if ((1<<11)-1 < txID) {
        /* if the requested identifier exceeds 11 bits, assume the CCP master wants 29 bit identifiers */
        txID |= 0x80000000UL;
      }

      /* Initialize a minimum set of parameters, to reduce EEPROM writes */
      mh_CCP_setmem_no_callback(&CCPHandlerConfig->DAQs[DAQListNumber].TxID,
        &txID, sizeof(uint32_T));
      mh_CCP_setmem_no_callback(&CCPHandlerConfig->DAQs[DAQListNumber].DAQStatus,
        &DAQStatus, sizeof(DAQStatus));
      for (i=0; i<CCPHandlerConfig->numODTs; i++) {
        uint8_T initialSize = 0;
        S_CCPODT_T* ODT = &CCPHandlerConfig->ODTs[DAQListNumber*
          CCPHandlerConfig->numODTs + i];
        mh_CCP_setmem_no_callback(&ODT->ODTSize, &initialSize, sizeof
          (initialSize));
      }
    } else {
      TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
      TransmitDataArr[3] = 0;
    }

    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_SetDAQPointer(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  TransmitDataArr[0] = 0xff;
  TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
  TransmitDataArr[2] = in_pRequestDataArr[1];
  if (CCPHandlerInstance->Connected) {
    uint8_T DAQListNumber = in_pRequestDataArr[2];
    uint8_T ODTListNumber = in_pRequestDataArr[3];
    uint8_T ODTItemNumber = in_pRequestDataArr[4];
    CCPHandlerInstance->CurrentDAQPtr = 0;
    if (DAQListNumber < CCPHandlerConfig->numDAQs) {
      if (ODTListNumber < CCPHandlerConfig->numODTs) {
        if (ODTItemNumber < 7) {
          CCPHandlerInstance->CurrentDAQPtr = CCPHandlerConfig->
            ODTs[DAQListNumber*CCPHandlerConfig->numODTs+ODTListNumber].ODTList+
            ODTItemNumber;
          CCPHandlerInstance->CurrentDAQIdx.DAQNumber = DAQListNumber;
          CCPHandlerInstance->CurrentDAQIdx.ODTNumber = ODTListNumber;
          CCPHandlerInstance->CurrentDAQIdx.ItemNumber = ODTItemNumber;
          TransmitDataArr[1] = CCP_CRC_OK;
        }
      }
    }

    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_WriteDAQ(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  /* assignment to DAQ items will be on a random access basis, so we just start with an un-set translator */
  S_CCPMTA AddressTranslator = { 0 };

  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  TransmitDataArr[0] = 0xff;
  TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
  TransmitDataArr[2] = in_pRequestDataArr[1];

  /* Ensure a connection has been established */
  if (CCPHandlerInstance->Connected) {
    /* Ensure the last SetDAQPtr was successful */
    if (CCPHandlerInstance->CurrentDAQPtr) {
      mh_MoveMTA(&AddressTranslator, mh_MakeUint32(&in_pRequestDataArr[4]));
      if (AddressTranslator.Valid) {
        /* Validate element size */
        S_EriReqTblList const* Table = GetERIRequestTablePtr
          (AddressTranslator.EriTableIdx);
        EriRequestTablePtr eriitem = &(Table->
          TblAddr[AddressTranslator.EriItemIdx]);
        if (eriitem) {
          /* Make sure the request is for an element sized portion of an array */
          if ((eriitem->uElementSize == in_pRequestDataArr[2]) &&
              ((eriitem->Size*eriitem->uElementSize) >=
               (AddressTranslator.EriItemOffset + in_pRequestDataArr[2]))) {
            uint8_T i= 0, newODTSize = 0;
            uint8_T daqnum = CCPHandlerInstance->CurrentDAQIdx.DAQNumber, odtnum=
              CCPHandlerInstance->CurrentDAQIdx.ODTNumber;
            S_CCPODT_T* ODT = &CCPHandlerConfig->ODTs[(daqnum*
              CCPHandlerConfig->numODTs)+odtnum];
            S_CCPODTItem_T ODTItem = *CCPHandlerInstance->CurrentDAQPtr;
            if (eriitem->bIsPtr == FALSE)
              ODTItem.pData = (void*)(((NativePtrSizedInt_U)
                eriitem->ParamAddress) + AddressTranslator.EriItemOffset);
            else                       /* This address is a pointer to the address we are interested in */
              ODTItem.pData = (void *)(((NativePtrSizedInt_U)(*(void**)
                (NativePtrSizedInt_U)eriitem->ParamAddress)) +
                AddressTranslator.EriItemOffset);

            /* ODTItem.Flags.MessageIdx = ODT->ODTSize + 1 pid*/
            ;
            ODTItem.DataSize = in_pRequestDataArr[2];

            /* Commit the new ODT settings to EEPROM or RAM */
            mh_CCP_setmem_no_callback(CCPHandlerInstance->CurrentDAQPtr,
              &ODTItem, sizeof (ODTItem));
            newODTSize = ODT->ODTSize + in_pRequestDataArr[2];
            mh_CCP_setmem_no_callback(&ODT->ODTSize, &newODTSize, sizeof(uint8_T));
            TransmitDataArr[1] = CCP_CRC_OK;
          }
        }
      }
    }

    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_SetMTA(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;

  /* Send a response to the command only if connected */
  if (CCPHandlerInstance->Connected) {
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
    TransmitDataArr[2] = in_pRequestDataArr[1];

    /* Currently only MTA0 is supported. We don't implement any
       functions which would utilize a MTA0 to MTA1 transfer */
    if (in_pRequestDataArr[2]==0) {
      /* common processing for a change in MTA, evaluate valid state */
      mh_MoveMTA(&CCPHandlerInstance->MTA0, mh_MakeUint32(&in_pRequestDataArr[4]));
      if (CCPHandlerInstance->MTA0.Valid) {
        TransmitDataArr[1] = CCP_CRC_OK;
      }
    }

    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Download(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T i;
    uint8_T u2NumBytesToTransmit = 8;
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_CMD_SYNTAX;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    if ((CCPHandlerInstance->UnlockStatus & CCP_PL_CAL) == 0) {
      TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
    }

    /* Prevent re-trigger of new download command prior to old command completing. */
    else if (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete) {
      TransmitDataArr[1] = CCP_CRC_CMD_BUSY;
    } else {
      if (in_u2NumBytes >= (3 + in_pRequestDataArr[2])) {
        /* Note some CAL tools may issue DNLOAD with size=0 as a pseudo GET_MTA command */
        if (in_pRequestDataArr[2] && (in_pRequestDataArr[2] <= 5) &&
            CCPHandlerInstance->MTA0.Valid) {
          CCPHandlerInstance->CCPReplyStruct.MTAx = &CCPHandlerInstance->MTA0;
          CCPHandlerInstance->CCPReplyStruct.CCPHandlerConfig = CCPHandlerConfig;
          CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[0] = 0xff;
          CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[1] = CCP_CRC_OK;
          CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[2] =
            in_pRequestDataArr[1];
          CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[3] = 0x00;
          CCPHandlerInstance->CCPReplyStruct.u4NumBytesToProcess =
            in_pRequestDataArr[2];
          CCPHandlerInstance->CCPReplyStruct.u4NumBytesProcessed = 0;
          CCPHandlerInstance->CCPReplyStruct.ext = CCPHandlerInstance->ext;
          CCPHandlerInstance->CCPReplyStruct.id = CCPHandlerInstance->id;
          CCPHandlerInstance->CCPReplyStruct.CommandCode = in_pRequestDataArr[0];
          CCPHandlerInstance->CCPReplyStruct.AsyncComplete = false;
          for (i=0; i<in_pRequestDataArr[2]; i++) {
            CCPHandlerInstance->WriteBuffer[i] = in_pRequestDataArr[3+i];
          }

          CCPHandlerInstance->CCPReplyStruct.TransferAddress =
            CCPHandlerInstance->WriteBuffer;
          mh_CCP_setmem(&CCPHandlerInstance->CCPReplyStruct);
          u2NumBytesToTransmit = 0;
        } else if (0 == in_pRequestDataArr[2]) {
          /* Process as a MTA getter only */
          TransmitDataArr[1] = CCP_CRC_OK;
          memcpy(&TransmitDataArr[4], &CCPHandlerInstance->MTA0.VirtualAddress,
                 4);
          u2NumBytesToTransmit = 8;
        } else {
          TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
        }
      }
    }

    if (u2NumBytesToTransmit) {
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,u2NumBytesToTransmit,TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Download6(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T i;
    uint8_T u2NumBytesToTransmit = 8;
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_CMD_SYNTAX;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    if ((CCPHandlerInstance->UnlockStatus & CCP_PL_CAL) == 0 ) {
      TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
    }

    /* Prevent re-trigger of new download command prior to old command completing. */
    else if (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete) {
      TransmitDataArr[1] = CCP_CRC_CMD_BUSY;
    } else {
      if (8 == in_u2NumBytes) {
        CCPHandlerInstance->CCPReplyStruct.MTAx = &CCPHandlerInstance->MTA0;
        CCPHandlerInstance->CCPReplyStruct.CCPHandlerConfig = CCPHandlerConfig;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[0] = 0xff;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[1] = CCP_CRC_OK;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[2] =
          in_pRequestDataArr[1];
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[3] = 0x00;
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesToProcess = 6;
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesProcessed = 0;
        CCPHandlerInstance->CCPReplyStruct.ext = CCPHandlerInstance->ext;
        CCPHandlerInstance->CCPReplyStruct.id = CCPHandlerInstance->id;
        CCPHandlerInstance->CCPReplyStruct.CommandCode = in_pRequestDataArr[0];
        CCPHandlerInstance->CCPReplyStruct.AsyncComplete = false;
        for (i=0; i<6; i++) {
          CCPHandlerInstance->WriteBuffer[i] = in_pRequestDataArr[2+i];
        }

        CCPHandlerInstance->CCPReplyStruct.TransferAddress =
          CCPHandlerInstance->WriteBuffer;
        mh_CCP_setmem(&CCPHandlerInstance->CCPReplyStruct);
        u2NumBytesToTransmit = 0;
      }
    }

    if (u2NumBytesToTransmit) {
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,u2NumBytesToTransmit,TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_GetCCPVersion(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T TransmitDataArr[8] = { 0 };

    CCPHandlerInstance->CCPMajorVersion = in_pRequestDataArr[2];
    CCPHandlerInstance->CCPMinorVersion = in_pRequestDataArr[3];
    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OK;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    TransmitDataArr[3] = 0x02;
    TransmitDataArr[4] = 0x01;
    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Upload(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  /* Check for NULL pointers */
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;

  /* Process only if a valid session has been started */
  if (CCPHandlerInstance->Connected) {
    uint8_T u2NumBytesToTransmit = 8;
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_CMD_SYNTAX;
    TransmitDataArr[2] = in_pRequestDataArr[1];

    /* Upload of calibrations only allowed when resource unlocked */
    if (((CCPHandlerInstance->UnlockStatus & CCP_PL_CAL) == 0) &&
        mh_MTAIsCalibration(&CCPHandlerInstance->MTA0)) {
      TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
    }

    /* Prevent re-trigger of new upload command prior to old command completing. */
    else if (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete) {
      TransmitDataArr[1] = CCP_CRC_CMD_BUSY;
    } else {
      /* Maximum upload payload is 5 bytes */
      if (in_pRequestDataArr[2] && (in_pRequestDataArr[2] <= 5) &&
          CCPHandlerInstance->MTA0.Valid) {
        CCPHandlerInstance->CCPReplyStruct.MTAx = &CCPHandlerInstance->MTA0;
        CCPHandlerInstance->CCPReplyStruct.CCPHandlerConfig = CCPHandlerConfig;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[0] = 0xff;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[1] = CCP_CRC_OK;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[2] =
          in_pRequestDataArr[1];
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesToProcess =
          in_pRequestDataArr[2];
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesProcessed = 0;
        CCPHandlerInstance->CCPReplyStruct.TransferAddress =
          &CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[3];
        CCPHandlerInstance->CCPReplyStruct.ext = CCPHandlerInstance->ext;
        CCPHandlerInstance->CCPReplyStruct.id = CCPHandlerInstance->id;
        CCPHandlerInstance->CCPReplyStruct.CommandCode = in_pRequestDataArr[0];
        CCPHandlerInstance->CCPReplyStruct.AsyncComplete = false;
        mh_CCP_getmem(&CCPHandlerInstance->CCPReplyStruct);
        u2NumBytesToTransmit = 0;
      } else {
        TransmitDataArr[0] = 0xff;
        TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
        TransmitDataArr[2] = in_pRequestDataArr[1];
        u2NumBytesToTransmit = 8;
      }
    }

    if (u2NumBytesToTransmit) {
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,u2NumBytesToTransmit,TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_SelectCalPage(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    mh_CCPReplyOK(CCPHandlerConfig, CCPHandlerInstance, CCP_CRC_OK,
                  in_pRequestDataArr[1]);
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_ShortUpload(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T u2NumBytesToTransmit = 0;
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_CMD_SYNTAX;
    TransmitDataArr[2] = in_pRequestDataArr[1];
    u2NumBytesToTransmit = 8;
    if (8 == in_u2NumBytes) {
      S_CCPMTA MTA = { 0, 0, 0, 0, 0 };

      TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
      mh_MoveMTA(&MTA, mh_MakeUint32(&in_pRequestDataArr[4]));
      if (((CCPHandlerInstance->UnlockStatus & CCP_PL_CAL) == 0) &&
          mh_MTAIsCalibration(&MTA)) {
        TransmitDataArr[1] = CCP_CRC_ACCESS_DENIED;
      }

      /* Prevent re-trigger of new upload command prior to old command completing. */
      else if (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete) {
        TransmitDataArr[1] = CCP_CRC_CMD_BUSY;
      }

      /* Maximum upload payload is 5 bytes */
      else if (in_pRequestDataArr[2] && (in_pRequestDataArr[2] <= 5) &&
               MTA.Valid) {
        CCPHandlerInstance->CCPReplyStruct.MTAx = &MTA;
        CCPHandlerInstance->CCPReplyStruct.CCPHandlerConfig = CCPHandlerConfig;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[0] = 0xff;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[1] = CCP_CRC_OK;
        CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[2] =
          in_pRequestDataArr[1];
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesToProcess =
          in_pRequestDataArr[2];
        CCPHandlerInstance->CCPReplyStruct.u4NumBytesProcessed = 0;
        CCPHandlerInstance->CCPReplyStruct.TransferAddress =
          &CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[3];
        CCPHandlerInstance->CCPReplyStruct.ext = CCPHandlerInstance->ext;
        CCPHandlerInstance->CCPReplyStruct.id = CCPHandlerInstance->id;
        CCPHandlerInstance->CCPReplyStruct.CommandCode = in_pRequestDataArr[0];
        CCPHandlerInstance->CCPReplyStruct.AsyncComplete = false;
        mh_CCP_getmem(&CCPHandlerInstance->CCPReplyStruct);
        u2NumBytesToTransmit = 0;
      }
    }

    if (u2NumBytesToTransmit) {
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,u2NumBytesToTransmit,TransmitDataArr);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Disconnect(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->StationID == mh_MakeStationAddress
      (&in_pRequestDataArr[4])) {
    if (0x01 == in_pRequestDataArr[2]) {
      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                    in_pRequestDataArr[1]);
      mh_InitCCP(CCPHandlerConfig, CCPHandlerInstance);
    } else {
      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_OK,
                    in_pRequestDataArr[1]);
      CCPHandlerInstance->Connected = false;
      CCPHandlerInstance->CCPSessionStatus = (uint8_T)CCP_SS_TMP_DISCONNECTED;
    }
  } else {
    if (CCPHandlerInstance->Connected) {
      CCPHandlerInstance->Connected = false;
      CCPHandlerInstance->CCPSessionStatus = (uint8_T)CCP_SS_TMP_DISCONNECTED;
    }
  }
}

/*=========================================================================================================*/
static void mh_ProcessCCP_SeedCallback(S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance,
  uint32_T seed)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  TransmitDataArr[0] = 0xff;
  TransmitDataArr[1] = CCP_CRC_OK;
  TransmitDataArr[2] = CCPHandlerInstance->cmd_idx;
  TransmitDataArr[3] = 1;
  TransmitDataArr[4] = ((uint8_T *)(&seed))[0];
  TransmitDataArr[5] = ((uint8_T *)(&seed))[1];
  TransmitDataArr[6] = ((uint8_T *)(&seed))[2];
  TransmitDataArr[7] = ((uint8_T *)(&seed))[3];
  CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,8,
    TransmitDataArr);
}

/*=========================================================================================================*/
void mh_ProcessCCP_GetSeed(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    if (in_pRequestDataArr[2] & CCP_PL_CAL) {
      if ((CCPHandlerInstance->SecurityFunctionCAL==0) ||
          (CCPHandlerInstance->UnlockStatus & CCP_PL_CAL)) {
        TransmitDataArr[0] = 0xff;
        TransmitDataArr[1] = CCP_CRC_OK;
        TransmitDataArr[2] = in_pRequestDataArr[1];
        TransmitDataArr[3] = CCPHandlerInstance->UnlockStatus & CCP_PL_CAL ? 0 :
          1;
        TransmitDataArr[4] = 0x00;
        TransmitDataArr[5] = 0x00;
        TransmitDataArr[6] = 0x00;
        TransmitDataArr[7] = 0x00;
        CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
          CCPHandlerInstance->id,8,TransmitDataArr);
      } else {
        CCPHandlerInstance->UnlockResource = CCP_PL_CAL;
        CCPHandlerInstance->cmd_idx = in_pRequestDataArr[1];
        CCPHandlerInstance->SecurityFunctionCallback =
          mh_ProcessCCP_SeedCallback;
        CCPHandlerInstance->SecurityFunctionCAL();
      }
    } else if (in_pRequestDataArr[2] & CCP_PL_DAQ) {
      if ((CCPHandlerInstance->SecurityFunctionDAQ==0) ||
          (CCPHandlerInstance->UnlockStatus & CCP_PL_DAQ)) {
        TransmitDataArr[0] = 0xff;
        TransmitDataArr[1] = CCP_CRC_OK;
        TransmitDataArr[2] = in_pRequestDataArr[1];
        TransmitDataArr[3] = CCPHandlerInstance->UnlockStatus & CCP_PL_DAQ ? 0 :
          1;
        TransmitDataArr[4] = 0x00;
        TransmitDataArr[5] = 0x00;
        TransmitDataArr[6] = 0x00;
        TransmitDataArr[7] = 0x00;
        CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
          CCPHandlerInstance->id,8,TransmitDataArr);
      } else {
        CCPHandlerInstance->UnlockResource = CCP_PL_DAQ;
        CCPHandlerInstance->cmd_idx = in_pRequestDataArr[1];
        CCPHandlerInstance->SecurityFunctionCallback =
          mh_ProcessCCP_SeedCallback;
        CCPHandlerInstance->SecurityFunctionDAQ();
      }
    } else {
      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_CMD_UNKNOWN,
                    in_pRequestDataArr[1]);
    }
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_Unlock(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  uint8_T TransmitDataArr[8] = { 0 };

  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    if ((in_pRequestDataArr[2] == CCPHandlerInstance->Key[0]) &&
        (in_pRequestDataArr[3] == CCPHandlerInstance->Key[1]) &&
        (in_pRequestDataArr[4] == CCPHandlerInstance->Key[2]) &&
        (in_pRequestDataArr[5] == CCPHandlerInstance->Key[3])) {
      CCPHandlerInstance->UnlockStatus |= CCPHandlerInstance->UnlockResource;
      TransmitDataArr[0] = 0xff;
      TransmitDataArr[1] = CCP_CRC_OK;
      TransmitDataArr[2] = in_pRequestDataArr[1];
      TransmitDataArr[3] = CCPHandlerInstance->UnlockStatus;
      TransmitDataArr[4] = 0x00;
      TransmitDataArr[5] = 0x00;
      TransmitDataArr[6] = 0x00;
      TransmitDataArr[7] = 0x00;
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,8,TransmitDataArr);
    } else {
      mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_ACCESS_DENIED,
                    in_pRequestDataArr[1]);
    }
  }

  CCPHandlerInstance->UnlockResource = 0;
  CCPHandlerInstance->Key[0] = 0;
  CCPHandlerInstance->Key[1] = 0;
  CCPHandlerInstance->Key[2] = 0;
  CCPHandlerInstance->Key[3] = 0;
}

/*=========================================================================================================*/
void mh_ProcessCCP_UnSupported(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  mh_CCPReplyOK(CCPHandlerConfig,CCPHandlerInstance,CCP_CRC_CMD_UNKNOWN,
                in_pRequestDataArr[1]);
}

/*=========================================================================================================*/
void mh_CCP_checksum(S_CCPReplyStruct *CCPReplyStruct)
/* MTA has to be checked for valid prior to passing to this function, or no response will be sent! */
/*=========================================================================================================*/
{
  /* Timer to prevent idle starvation detection. */
  extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T *
    pReference_lower32Bits, uint32_T *pReference_upper32Bits);
  uint32_T uReferenceTicks = 0;
  uint32_T uTime_us = 0;
  uint32_T BytesRemaining = CCPReplyStruct->u4NumBytesToProcess -
    CCPReplyStruct->u4NumBytesProcessed;

  /* Determine the source pointer from the passed in MTA */
  S_CCPMTA *pMTA = CCPReplyStruct->MTAx;
  S_EriReqTblList const* Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
  Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&uReferenceTicks, 0);

  /* The MTA can become invalid if the blocksize exceeds the end of the last table */
  while ((BytesRemaining > 0) && pMTA->Valid && (uTime_us < 250000UL)) {
    uint32_T BytesToRead;
    uint32_T BytesAvailableThisItem = (Table->TblAddr[pMTA->EriItemIdx].Size *
      Table->TblAddr[pMTA->EriItemIdx].uElementSize) -
      pMTA->EriItemOffset;
    void* src = (void*)(((NativePtrSizedInt_U)Table->TblAddr[pMTA->EriItemIdx].
                         ParamAddress) + pMTA->EriItemOffset);

    /* Or, this address is a pointer to the address we are interested in */
    if (Table->TblAddr[pMTA->EriItemIdx].bIsPtr) {
      src = (void*)(((NativePtrSizedInt_U)(*(void**)(NativePtrSizedInt_U)
        Table->TblAddr[pMTA->EriItemIdx].ParamAddress)) + pMTA->EriItemOffset);
    }

    /* Read entire item, or remaining size */
    BytesToRead = BytesRemaining < BytesAvailableThisItem ? BytesRemaining :
      BytesAvailableThisItem;
    AccumulateCRC32((uint32_T*)&CCPReplyStruct->TransmitDataArr[4], src,
                    BytesToRead);
    BytesRemaining -= BytesToRead;
    CCPReplyStruct->u4NumBytesProcessed += BytesToRead;
    if (BytesRemaining > 0) {
      mh_MTAPostIncrement(pMTA, BytesToRead);
      if (!pMTA->Valid) {
        /* Checksum ran out of valid memory space before blocksize bytes */
        CCPReplyStruct->TransmitDataArr[1] = CCP_CRC_OUT_OF_RANGE;
        CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
          CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);

        /* Response sent, reset CCPReplyStruct */
        CCPReplyStruct->CommandCode = 0;
        CCPReplyStruct->AsyncComplete = true;
      }

      Table = GetERIRequestTablePtr(pMTA->EriTableIdx);
    }

    /* Allowed more time for CRC calculations ?  */
    uTime_us += Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&uReferenceTicks, 0);
  }

  if (BytesRemaining == 0 && pMTA->Valid) {
    /* Finalize the Checksum (in-place)*/
    CCPReplyStruct->TransmitDataArr[3] = 4;/* CRC32 is a 4 byte checksum */
    *(uint32_T*)&CCPReplyStruct->TransmitDataArr[4] = ReturnCRC32Value((uint32_T*)
      &CCPReplyStruct->TransmitDataArr[4]);
    CCPReplyStruct->CCPHandlerConfig->pTxCallback(CCPReplyStruct->ext,
      CCPReplyStruct->id,8,CCPReplyStruct->TransmitDataArr);

    /* Response sent, reset CCPReplyStruct */
    CCPReplyStruct->CommandCode = 0;
    CCPReplyStruct->AsyncComplete = true;
  }
}

/*=========================================================================================================*/
void mh_ProcessCCP_BuildChecksum(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  /* Check for NULL pointers */
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;

  /* Process only if a valid session has been started */
  if (CCPHandlerInstance->Connected) {
    E_CCPReturnCodes ReturnCode = CCP_CRC_OK;
    uint32_T BlockSize = mh_MakeUint32(&in_pRequestDataArr[2]);

    /* Prevent re-trigger of new checksum command prior to old command completing. */
    if (!CCPHandlerInstance->CCPReplyStruct.AsyncComplete) {
      ReturnCode = CCP_CRC_CMD_BUSY;
    }

    /* Validate the starting address and the size */
    else if (CCPHandlerInstance->MTA0.Valid && (BlockSize > 0)) {
      /* Copy MTA0 to MTA1, and use for running checksum */
      CCPHandlerInstance->MTA1 = CCPHandlerInstance->MTA0;

      /* CRC is computed right where it will be transmitted from */
      InitialiseCRC32((uint32_T*)
                      &CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[4]);
      CCPHandlerInstance->CCPReplyStruct.MTAx = &CCPHandlerInstance->MTA1;
      CCPHandlerInstance->CCPReplyStruct.CCPHandlerConfig = CCPHandlerConfig;
      CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[0] = 0xff;
      CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[1] = CCP_CRC_OK;
      CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[2] =
        in_pRequestDataArr[1];
      CCPHandlerInstance->CCPReplyStruct.TransmitDataArr[3] = 0;
      CCPHandlerInstance->CCPReplyStruct.u4NumBytesToProcess = BlockSize;
      CCPHandlerInstance->CCPReplyStruct.u4NumBytesProcessed = 0;

      /* Indicate an available buffer the operation may use, if necessary */
      CCPHandlerInstance->CCPReplyStruct.TransferAddress =
        CCPHandlerInstance->WriteBuffer;
      CCPHandlerInstance->CCPReplyStruct.ext = CCPHandlerInstance->ext;
      CCPHandlerInstance->CCPReplyStruct.id = CCPHandlerInstance->id;
      CCPHandlerInstance->CCPReplyStruct.AsyncComplete = false;
      CCPHandlerInstance->CCPReplyStruct.CommandCode = in_pRequestDataArr[0];

      /* Checksum is built during IDLE time and sent when completed */
    } else {
      ReturnCode = CCP_CRC_OUT_OF_RANGE;
    }

    if (ReturnCode != CCP_CRC_OK) {
      uint8_T TransmitDataArr[8] = { 0 };

      /* respond with paramters out of range */
      TransmitDataArr[0] = 0xff;
      TransmitDataArr[1] = (uint8_T)ReturnCode;
      TransmitDataArr[2] = in_pRequestDataArr[1];
      CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,
        CCPHandlerInstance->id,8,TransmitDataArr);
    }
  }
}

/* DEBUG SUPPORT */
/*=========================================================================================================*/
void mh_ProcessCCP_GetMTAVal(uint8_T in_u2NumBytes,
  uint8_T *in_pRequestDataArr,
  S_CCPHandlerConfig * CCPHandlerConfig,
  S_CCPHandlerInstance * CCPHandlerInstance)
/*=========================================================================================================*/
{
  if (in_pRequestDataArr==0)
    return;
  if (CCPHandlerConfig==0)
    return;
  if (CCPHandlerInstance==0)
    return;
  if (CCPHandlerInstance->Connected) {
    uint8_T TransmitDataArr[8] = { 0 };

    TransmitDataArr[0] = 0xff;
    TransmitDataArr[1] = CCP_CRC_OK;
    TransmitDataArr[2] = CCPHandlerInstance->MTA0.EriTableIdx;
    TransmitDataArr[3] = (uint8_T)(CCPHandlerInstance->MTA0.EriItemIdx>>8);
    TransmitDataArr[4] = (uint8_T) CCPHandlerInstance->MTA0.EriItemIdx;
    TransmitDataArr[5] = (uint8_T)(CCPHandlerInstance->MTA0.EriItemOffset>>8);
    TransmitDataArr[6] = (uint8_T)CCPHandlerInstance->MTA0.EriItemOffset;
    TransmitDataArr[7] = (uint8_T)CCPHandlerInstance->MTA0.Valid;
    CCPHandlerConfig->pTxCallback(CCPHandlerInstance->ext,CCPHandlerInstance->id,
      8,TransmitDataArr);
  }
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
