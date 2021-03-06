/*
 * Trigger_CAN_RX_BusCAN_2_Buf1.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "cx06_MA.h"
#include "cx06_MA_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

/*
   Bus: CAN_2 (std)






   Masked IDs: CAN_2 (std)


   masked_id = 0x00000380
   masked_id = 0x00000280
   masked_id = 0x00000300
   masked_id = 0x00000310

   Masks: CAN_2 (std)
   computed mask = 0x0000066F
   computed id   = 0x00000200

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_RxSlot_7066p002 = { 0 };

static boolean_T MHCAN_handler_RxSlot_7066p002(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000380) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_7066p002.ready;
      MHCAN_directslot_RxSlot_7066p002.message = *messageObj;
      MHCAN_directslot_RxSlot_7066p002.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_7065p0012 = { 0 };

static boolean_T MHCAN_handler_RxSlot_7065p0012(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000280) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_7065p0012.ready;
      MHCAN_directslot_RxSlot_7065p0012.message = *messageObj;
      MHCAN_directslot_RxSlot_7065p0012.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10248p0009 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10248p0009(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000300) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10248p0009.ready;
      MHCAN_directslot_RxSlot_10248p0009.message = *messageObj;
      MHCAN_directslot_RxSlot_10248p0009.ready = 1;
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_10249p0007 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10249p0007(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000310) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_10249p0007,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x000007FF[] = {
  { 0x00000380, MHCAN_handler_RxSlot_7066p002 },

  { 0x00000280, MHCAN_handler_RxSlot_7065p0012 },

  { 0x00000300, MHCAN_handler_RxSlot_10248p0009 },

  { 0x00000310, MHCAN_handler_RxSlot_10249p0007 },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x000007FF, 4, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x000007FF },
};

/*---------------------------------------------------------------*/
void Trigger_CAN_RX_BusCAN_2_Buf1(E_TouCANNotificationEventMask in_EventMask,
  TouCANBufferHandle in_BufferHandle, NativePtrSizedInt_U in_uAppSuppliedData)
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  unsigned char idx;
  uint32_T maskidx;
  boolean_T handled;
  do {
    handled = 0;
    sErrorResult = SynchReadFromTouCAN(RES_CAN2, TOUCAN_BUFF1, &messageObj, 0);
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

      (CAN_2_std_receive_count_DataStore())++;
      if (handled) {
        (CAN_2_std_handled_count_DataStore())++;
      } else {
        (CAN_2_std_last_unhandled_id_DataStore()) = messageObj.u4MessageID;
      }

      if (sErrorResult == SUCCESS_Q_EMPTY)
        return;
    }
  } while (SUCCESS(sErrorResult));
}

/*---- END OF FILE -----------------------------------------------------------------------------------------*/
