/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   ::
   ::   Module      :   CCP Protocol Runtime Engine_Controller
   ::   Copyright   :   (C)2009 Woodward
   ::
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/

#include "Application.h"

/*---- PROTOTYPES -------------------------------------------------------------------------------------------*/

/*----- CONSTANT PARAMETERS -------------------------------------------------------------------------------*/

/*----- CALIBRATION ---------------------------------------------------------------------------------------*/

/*----- VarDecs ---------------------------------------------------------------------------------------*/

/* Name: CCP_Engine_Controller_ConnectionStatus ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT1
   CType:S_CCPHandlerInstance Struct:mh_Engine_Controller_CCPHandlerInstance.Connected
   Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0.000000
   Max:255 Format:1.0 UpdateID:BACKGND
   Group:"System | CCP | Engine_Controller "
   Help:"CCP Handler Engine_Controller connection status"  EnumDec:VarDecEnum_0 */

/* Name: CCP_Engine_Controller_Access ClassID:BITVAR Access:RO4+RO3+RO2+RO1
   StorageID:RAM     UpdateID:BACKGND      TypeID:UINT1 CType:S_CCPHandlerInstance
   Struct:mh_Engine_Controller_CCPHandlerInstance.UnlockStatus
   Help:"Current Access Code for CCP Handler Engine_Controller" Group:"System | CCP | Engine_Controller" */

/* Name: CCP_Engine_Controller_CAL ClassID:BIT ParentVar:CCP_Engine_Controller_Access BitNo: 0
   TrueTxt:"Calibration Unlocked" FalseTxt:"Calibration Locked"
   Help:"Calibration Authentication Status for CCP Handler Engine_Controller"
   Group:"System | CCP | Engine_Controller" */

/* Name: CCP_Engine_Controller_DAQ ClassID:BIT ParentVar:CCP_Engine_Controller_Access BitNo: 1
   TrueTxt:"Data Acquisition Unlocked" FalseTxt:"Data Acquisition Locked"
   Help:"Data Acquisition Authentication Status for CCP Handler Engine_Controller"
   Group:"System | CCP | Engine_Controller" */

/* Name: CCP_Engine_Controller_PGM ClassID:BIT ParentVar:CCP_Engine_Controller_Access BitNo: 6
   TrueTxt:"Programming Unlocked" FalseTxt:"Programming Locked"
   Help:"Programming Authentication Status for CCP Handler Engine_Controller"
   Group:"System | CCP | Engine_Controller" */

/*----- GLOBAL RAM PARAMETERS -----------------------------------------------------------------------------*/

/* Zero initialized - written too often to be capable of being in CAL space */
uint16_T mh_Engine_Controller_CCPHandlerConfigPrescalers[4];
uint8_T mh_Engine_Controller_CCPHandlerConfigFrameReady[4];
S_CCPHandlerInstance mh_Engine_Controller_CCPHandlerInstance;

/*----- STATIC RAM PARAMETERS -----------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
const S_CCPHandlerConfig mh_Engine_Controller_CCPHandlerConfig = {
  CAN_1_Transmit,                      /* pTxCallback */
  (S_CCPDAQ_T *) &(DAQ0_DataStore_mh_Engine_Controller_CCPHandlerInstanceDAQs()),/* DAQs		 */
  (S_CCPODT_T *) &(ODT0_DataStore_mh_Engine_Controller_CCPHandlerInstanceODTs()),/* ODTs		 */
  &mh_Engine_Controller_CCPHandlerConfigPrescalers[0],/* DAQ Prescalers */
  &mh_Engine_Controller_CCPHandlerConfigFrameReady[0],/* DAQ Frame Ready Flags */
  4,                                   /* numDAQs;	 */
  8,                                   /* numODTs;	 */
  8,                                   /* numTrigs;	 */
  0,                                   /* bSendCPB: flag to send the Command Processor Busy prior to long memory writes */
};

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
