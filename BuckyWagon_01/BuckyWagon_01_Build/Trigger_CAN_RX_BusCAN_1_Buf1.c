/*
 * Trigger_CAN_RX_BusCAN_1_Buf1.c
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
   Bus: CAN_1 (std)





   Masked IDs: CAN_1 (std)


   masked_id = 0x0000042F
   masked_id = 0x0000042F
   masked_id = 0x0000042F

   Masks: CAN_1 (std)
   computed mask = 0x000007FF
   computed id   = 0x0000042F

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_miniview_button_down = { 0 };

static boolean_T MHCAN_handler_miniview_button_down(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000042F) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    if (messageObj->u1Length < 3) {
      good_payload = 0;
    }

    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0x04);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_miniview_button_down.ready;
      MHCAN_directslot_miniview_button_down.message = *messageObj;
      MHCAN_directslot_miniview_button_down.ready = 1;

      /* Handle CAN Slot Triggers */
      if (new_message) {
        {
          extern void Trigger_CAN_Slot_miniview_button_down_1606p0006(void);
          Trigger_CAN_Slot_miniview_button_down_1606p0006();
        }
      }
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_miniview_button_menu = { 0 };

static boolean_T MHCAN_handler_miniview_button_menu(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000042F) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    if (messageObj->u1Length < 3) {
      good_payload = 0;
    }

    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0x03);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_miniview_button_menu.ready;
      MHCAN_directslot_miniview_button_menu.message = *messageObj;
      MHCAN_directslot_miniview_button_menu.ready = 1;

      /* Handle CAN Slot Triggers */
      if (new_message) {
        {
          extern void Trigger_CAN_Slot_miniview_button_menu_1864p0006(void);
          Trigger_CAN_Slot_miniview_button_menu_1864p0006();
        }
      }
    }

    return good_payload;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_miniview_button_up = { 0 };

static boolean_T MHCAN_handler_miniview_button_up(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x0000042F) {
    boolean_T good_payload = 1;
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;
    if (messageObj->u1Length < 3) {
      good_payload = 0;
    }

    good_payload = good_payload && ((messageObj->u1DataArr[0] & 0xFF) == 0x02);
    if (good_payload) {
      boolean_T new_message;
      new_message = !MHCAN_directslot_miniview_button_up.ready;
      MHCAN_directslot_miniview_button_up.message = *messageObj;
      MHCAN_directslot_miniview_button_up.ready = 1;

      /* Handle CAN Slot Triggers */
      if (new_message) {
        {
          extern void Trigger_CAN_Slot_miniview_button_up_2115p0011(void);
          Trigger_CAN_Slot_miniview_button_up_2115p0011();
        }
      }
    }

    return good_payload;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x000007FF[] = {
  { 0x0000042f, MHCAN_handler_miniview_button_down },

  { 0x0000042f, MHCAN_handler_miniview_button_menu },

  { 0x0000042f, MHCAN_handler_miniview_button_up },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x000007FF, 3, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x000007FF },
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
