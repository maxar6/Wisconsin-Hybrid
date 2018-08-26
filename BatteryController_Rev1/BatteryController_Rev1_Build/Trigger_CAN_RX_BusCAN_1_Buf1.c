/*
 * Trigger_CAN_RX_BusCAN_1_Buf1.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

/*
   Bus: CAN_1 (std)







   Masked IDs: CAN_1 (std)


   masked_id = 0x00000069
   masked_id = 0x0000006A
   masked_id = 0x0000006B
   masked_id = 0x000002F0
   masked_id = 0x0000006C

   Masks: CAN_1 (std)
   computed mask = 0x00000560
   computed id   = 0x00000060

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_RxSlot_417p001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_417p001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000069) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_417p001.ready;
      MHCAN_directslot_RxSlot_417p001.message = *messageObj;
      MHCAN_directslot_RxSlot_417p001.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_416p001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_416p001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000006A) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_416p001.ready;
      MHCAN_directslot_RxSlot_416p001.message = *messageObj;
      MHCAN_directslot_RxSlot_416p001.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_415p001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_415p001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000006B) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_415p001.ready;
      MHCAN_directslot_RxSlot_415p001.message = *messageObj;
      MHCAN_directslot_RxSlot_415p001.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_498p001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_498p001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000002F0) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    if (messageObj->u1Length < 6) {
      good_payload = 0;
    }

    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_498p001.ready;
      MHCAN_directslot_RxSlot_498p001.message = *messageObj;
      MHCAN_directslot_RxSlot_498p001.ready = 1;
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_414p001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_414p001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000006C) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_414p001.ready;
      MHCAN_directslot_RxSlot_414p001.message = *messageObj;
      MHCAN_directslot_RxSlot_414p001.ready = 1;
    }

    return 1;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x000007FF[] = {
  { 0x00000069, MHCAN_handler_RxSlot_417p001 },

  { 0x0000006a, MHCAN_handler_RxSlot_416p001 },

  { 0x0000006b, MHCAN_handler_RxSlot_415p001 },

  { 0x000002f0, MHCAN_handler_RxSlot_498p001 },

  { 0x0000006c, MHCAN_handler_RxSlot_414p001 },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x000007FF, 5, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x000007FF },
};

/*---------------------------------------------------------------*/
void Trigger_CAN_RX_BusCAN_1_Buf1(E_TouCANNotificationEventMask in_EventMask,
  TouCANBufferHandle in_BufferHandle, NativePtrSizedInt_U in_uAppSuppliedData)
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  unsigned char idx;
  uint32_T maskidx;
  boolean_T handled;
  do {
    handled = 0;
    sErrorResult = SynchReadFromTouCAN(RES_CAN1, TOUCAN_BUFF1, &messageObj, 0);
    if (SUCCESS(sErrorResult)) {
      for (maskidx=0; maskidx < 1; maskidx++) {
        uint32_T ididx;
        if (!masks[maskidx].optimized_dispatcher) {
          for (ididx=0; ididx < masks[maskidx].consumer_count; ididx++) {
            if (masks[maskidx].consumer_list[ididx].consumer(&messageObj)) {
              handled = 1;
            }
          }
        } else {
          if (masks[maskidx].optimized_dispatcher(masks[maskidx].mask,
               masks[maskidx].consumer_list, &messageObj)) {
            handled = 1;
          }
        }
      }

      (CAN_1_std_receive_count_DataStore())++;
      if (handled) {
        (CAN_1_std_handled_count_DataStore())++;
      } else {
        (CAN_1_std_last_unhandled_id_DataStore()) = messageObj.u4MessageID;
      }

      if (sErrorResult == SUCCESS_Q_EMPTY)
        return;
    }
  } while (SUCCESS(sErrorResult));
}

/*---- END OF FILE -----------------------------------------------------------------------------------------*/
