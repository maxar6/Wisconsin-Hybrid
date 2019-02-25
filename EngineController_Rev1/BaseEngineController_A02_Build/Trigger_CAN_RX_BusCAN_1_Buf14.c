/*
 * Trigger_CAN_RX_BusCAN_1_Buf14.c
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
   Bus: CAN_1 (ext)



   Masked IDs: CAN_1 (ext)


   masked_id = 0x18EF0233

   Masks: CAN_1 (ext)
   computed mask = 0x1FFFFFFF
   computed id   = 0x18EF0233

 */

/*---------------------------------------------------------------*/
struct {
  uint32_T head;
  S_CANMessage messages[4];
} MHCAN_queue_Engine_Controller = { 0 };

uint32_T RxSlot_Engine_Controller_ID = 0;
uint32_T RxSlot_Engine_Controller_IDMask = 0;
static boolean_T MHCAN_handler_Engine_Controller(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x1FFFFFFF) == 0x18EF0233) {
    if ((messageObj->u4MessageID & RxSlot_Engine_Controller_IDMask) ==
        (RxSlot_Engine_Controller_ID & RxSlot_Engine_Controller_IDMask)) {
      boolean_T good_payload = 1;
      messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
      if (good_payload) {
        boolean_T new_message;
        new_message = MHCAN_enqueue((MHCAN_queue *)
          &MHCAN_queue_Engine_Controller, 4, messageObj);
      }

      return good_payload;
    }
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x1FFFFFFF[] = {
  { 0x18ef0233, MHCAN_handler_Engine_Controller },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x1FFFFFFF, 1, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x1FFFFFFF },
};

/*---------------------------------------------------------------*/
void Trigger_CAN_RX_BusCAN_1_Buf14(E_TouCANNotificationEventMask in_EventMask,
  TouCANBufferHandle in_BufferHandle, NativePtrSizedInt_U in_uAppSuppliedData)
{
  S_CANMessage messageObj;
  NativeError_S sErrorResult;
  unsigned char idx;
  uint32_T maskidx;
  boolean_T handled;
  do {
    handled = 0;
    sErrorResult = SynchReadFromTouCAN(RES_CAN1, TOUCAN_BUFF14, &messageObj, 0);
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

      (CAN_1_ext_receive_count_DataStore())++;
      if (handled) {
        (CAN_1_ext_handled_count_DataStore())++;
      } else {
        (CAN_1_ext_last_unhandled_id_DataStore()) = messageObj.u4MessageID;
      }

      if (sErrorResult == SUCCESS_Q_EMPTY)
        return;
    }
  } while (SUCCESS(sErrorResult));
}

/*---- END OF FILE -----------------------------------------------------------------------------------------*/
