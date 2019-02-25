/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   ::
   ::   Module      :   CCP Protocol Runtime CCP_BAT
   ::   Copyright   :   (C)2009 Woodward
   ::
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/

#include "Application.h"

/*---- PROTOTYPES -------------------------------------------------------------------------------------------*/

/*----- CONSTANT PARAMETERS -------------------------------------------------------------------------------*/

/*----- CALIBRATION ---------------------------------------------------------------------------------------*/

/*----- VarDecs ---------------------------------------------------------------------------------------*/

/* Name: CCP_CCP_BAT_ConnectionStatus ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:S_CCPHandlerInstance Struct:mh_CCP_BAT_CCPHandlerInstance.Connected
   Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255 Format:1.0 UpdateID:BACKGND
   Group:"System | CCP | CCP_BAT "
   Help:"CCP Handler CCP_BAT connection status"  EnumDec:VarDecEnum_0 */

/* Name: CCP_CCP_BAT_Access ClassID:BITVAR Access:RO4+RO3+RO2+RO1
   StorageID:RAM     UpdateID:BACKGND      TypeID:UINT1 CType:S_CCPHandlerInstance
   Struct:mh_CCP_BAT_CCPHandlerInstance.UnlockStatus
   Help:"Current Access Code for CCP Handler CCP_BAT" Group:"System | CCP | CCP_BAT" */

/* Name: CCP_CCP_BAT_CAL ClassID:BIT ParentVar:CCP_CCP_BAT_Access BitNo: 0
   TrueTxt:"Calibration Unlocked" FalseTxt:"Calibration Locked"
   Help:"Calibration Authentication Status for CCP Handler CCP_BAT"
   Group:"System | CCP | CCP_BAT" */

/* Name: CCP_CCP_BAT_DAQ ClassID:BIT ParentVar:CCP_CCP_BAT_Access BitNo: 1
   TrueTxt:"Data Acquisition Unlocked" FalseTxt:"Data Acquisition Locked"
   Help:"Data Acquisition Authentication Status for CCP Handler CCP_BAT"
   Group:"System | CCP | CCP_BAT" */

/* Name: CCP_CCP_BAT_PGM ClassID:BIT ParentVar:CCP_CCP_BAT_Access BitNo: 6
   TrueTxt:"Programming Unlocked" FalseTxt:"Programming Locked"
   Help:"Programming Authentication Status for CCP Handler CCP_BAT"
   Group:"System | CCP | CCP_BAT" */

/*----- GLOBAL RAM PARAMETERS -----------------------------------------------------------------------------*/

/* Zero initialized - written too often to be capable of being in CAL space */
uint16_T mh_CCP_BAT_CCPHandlerConfigPrescalers[4];
uint8_T mh_CCP_BAT_CCPHandlerConfigFrameReady[4];
S_CCPHandlerInstance mh_CCP_BAT_CCPHandlerInstance;

/*----- STATIC RAM PARAMETERS -----------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
const S_CCPHandlerConfig mh_CCP_BAT_CCPHandlerConfig = {
  CAN_1_Transmit,                      /* pTxCallback */
  (S_CCPDAQ_T *) &(DAQ0_DataStore_mh_CCP_BAT_CCPHandlerInstanceDAQs()),/* DAQs		 */
  (S_CCPODT_T *) &(ODT0_DataStore_mh_CCP_BAT_CCPHandlerInstanceODTs()),/* ODTs		 */
  &mh_CCP_BAT_CCPHandlerConfigPrescalers[0],/* DAQ Prescalers */
  &mh_CCP_BAT_CCPHandlerConfigFrameReady[0],/* DAQ Frame Ready Flags */
  4,                                   /* numDAQs;	 */
  8,                                   /* numODTs;	 */
  8,                                   /* numTrigs;	 */
  0,                                   /* bSendCPB: flag to send the Command Processor Busy prior to long memory writes */
};

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
