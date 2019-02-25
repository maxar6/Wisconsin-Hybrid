#ifndef APPLICATION_H
#define APPLICATION_H

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "CommonInclude.h"
#include "mh_ccp_protocol.h"
#include "AppMonitor.h"
#include "MotoHawk_IO.h"
#include "MotoHawk_CAN.h"
#include "CANReceiveDispatcher.h"
#include "TableLookupFunctions.h"

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/* Application defined events */
typedef enum {
  STARTUP_EVENT = BASE_APP_EVENT,      /* EnumTxt:"STARTUP_EVENT"  */
  SHUTDOWN_EVENT,                      /* EnumTxt:"SHUTDOWN_EVENT" */
} E_ApplicationEvents;

/*---- CUSTOM HEADER CODE ---------------------------------------------------------------------------------*/
extern uint32_T AppAssertBase_;

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
#endif                                 /* APPLICATION_H */
