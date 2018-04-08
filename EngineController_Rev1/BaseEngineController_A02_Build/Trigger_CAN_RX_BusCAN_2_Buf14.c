/*
 * Trigger_CAN_RX_BusCAN_2_Buf14.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

/*
   Bus: CAN_2 (ext)






   Masked IDs: CAN_2 (ext)


   masked_id = 0x18EFFF01
   masked_id = 0x18EFFF01
   masked_id = 0x18EFFF01
   masked_id = 0x18EFFF01

   Masks: CAN_2 (ext)
   computed mask = 0x1FFFFFFF
   computed id   = 0x18EFFF01

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_RxSlot_6221p0004 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6221p0004(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18EFFF01) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0xF3);
    good_payload = good_payload && ((messageObj->u1DataArr[1] & 0xFF) == 0x00);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6221p0004.ready;
      MHCAN_directslot_RxSlot_6221p0004.message = *messageObj;
      MHCAN_directslot_RxSlot_6221p0004.ready = 1;
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_6222p0001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6222p0001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18EFFF01) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0xF3);
    good_payload = good_payload && ((messageObj->u1DataArr[1] & 0xFF) == 0x01);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6222p0001.ready;
      MHCAN_directslot_RxSlot_6222p0001.message = *messageObj;
      MHCAN_directslot_RxSlot_6222p0001.ready = 1;
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_6223p0001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6223p0001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18EFFF01) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0xF3);
    good_payload = good_payload && ((messageObj->u1DataArr[1] & 0xFF) == 0x02);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6223p0001.ready;
      MHCAN_directslot_RxSlot_6223p0001.message = *messageObj;
      MHCAN_directslot_RxSlot_6223p0001.ready = 1;
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_6224p0001 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6224p0001(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18EFFF01) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0xF3);
    good_payload = good_payload && ((messageObj->u1DataArr[1] & 0xFF) == 0x03);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6224p0001.ready;
      MHCAN_directslot_RxSlot_6224p0001.message = *messageObj;
      MHCAN_directslot_RxSlot_6224p0001.ready = 1;
    }

    return good_payload;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x1FFFFFFF[] = {
  { 0x18efff01, MHCAN_handler_RxSlot_6221p0004 },

  { 0x18efff01, MHCAN_handler_RxSlot_6222p0001 },

  { 0x18efff01, MHCAN_handler_RxSlot_6223p0001 },

  { 0x18efff01, MHCAN_handler_RxSlot_6224p0001 },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x1FFFFFFF, 4, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x1FFFFFFF },
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
