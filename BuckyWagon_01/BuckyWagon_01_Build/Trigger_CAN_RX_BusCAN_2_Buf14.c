/*
 * Trigger_CAN_RX_BusCAN_2_Buf14.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

/*
   Bus: CAN_2 (ext)





   Masked IDs: CAN_2 (ext)


   masked_id = 0x00FF602E

   masked_id = 0x18FF4049

   Masks: CAN_2 (ext)
   computed mask = 0x00FFDF98
   computed id   = 0x00FF4008

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_RxSlot_2437p0011 = { 0 };

static boolean_T MHCAN_handler_RxSlot_2437p0011(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x00FFFFFF) == 0x00FF602E) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_2437p0011.ready;
      MHCAN_directslot_RxSlot_2437p0011.message = *messageObj;
      MHCAN_directslot_RxSlot_2437p0011.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_2621p0012 = { 0 };

static boolean_T MHCAN_handler_RxSlot_2621p0012(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18FF4049) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_2621p0012.ready;
      MHCAN_directslot_RxSlot_2621p0012.message = *messageObj;
      MHCAN_directslot_RxSlot_2621p0012.ready = 1;
    }

    return 1;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x00FFFFFF[] = {
  { 0x00ff602e, MHCAN_handler_RxSlot_2437p0011 },
};

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x1FFFFFFF[] = {
  { 0x18ff4049, MHCAN_handler_RxSlot_2621p0012 },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x00FFFFFF, 1, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x00FFFFFF },

  { 0x1FFFFFFF, 1, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x1FFFFFFF },
};

/*---------------------------------------------------------------*/
void Trigger_CAN_RX_BusCAN_2_Buf14(E_TouCANNotificationEventMask in_EventMask,
  TouCANBufferHandle in_BufferHandle, NativePtrSizedInt_U in_uAppSuppliedData)
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  unsigned char idx;
  uint32_T maskidx;
  boolean_T handled;
  do {
    handled = 0;
    sErrorResult = SynchReadFromTouCAN(RES_CAN2, TOUCAN_BUFF14, &messageObj, 0);
    if (SUCCESS(sErrorResult)) {
      for (maskidx=0; maskidx < 2; maskidx++) {
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

      (CAN_2_ext_receive_count_DataStore())++;
      if (handled) {
        (CAN_2_ext_handled_count_DataStore())++;
      } else {
        (CAN_2_ext_last_unhandled_id_DataStore()) = messageObj.u4MessageID;
      }

      if (sErrorResult == SUCCESS_Q_EMPTY)
        return;
    }
  } while (SUCCESS(sErrorResult));
}

/*---- END OF FILE -----------------------------------------------------------------------------------------*/
