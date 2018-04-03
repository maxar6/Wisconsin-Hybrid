/*
 * Trigger_CAN_RX_BusCAN_1_Buf1.c
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
   Bus: CAN_1 (std)
























   Masked IDs: CAN_1 (std)


   masked_id = 0x00000370
   masked_id = 0x00000369
   masked_id = 0x00000110
   masked_id = 0x00000120
   masked_id = 0x000001A0
   masked_id = 0x00000300
   masked_id = 0x00000301
   masked_id = 0x00000348
   masked_id = 0x00000410
   masked_id = 0x00000510
   masked_id = 0x00000258
   masked_id = 0x00000278
   masked_id = 0x00000638
   masked_id = 0x00000620
   masked_id = 0x000001A4
   masked_id = 0x000001A5
   masked_id = 0x000001A3
   masked_id = 0x000001A1
   masked_id = 0x000001A2
   masked_id = 0x000000A3
   masked_id = 0x000000A1
   masked_id = 0x000000A2

   Masks: CAN_1 (std)
   computed mask = 0x00000000
   computed id   = 0x00000000

 */

/*---------------------------------------------------------------*/
MHCAN_directslot MHCAN_directslot_RxSlot_6481p0011 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6481p0011(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000370) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6481p0011.ready;
      MHCAN_directslot_RxSlot_6481p0011.message = *messageObj;
      MHCAN_directslot_RxSlot_6481p0011.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_6480p0046 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6480p0046(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000369) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_6480p0046.ready;
      MHCAN_directslot_RxSlot_6480p0046.message = *messageObj;
      MHCAN_directslot_RxSlot_6480p0046.ready = 1;
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6629p0026 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6629p0026(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000110) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6629p0026,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6628p0022 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6628p0022(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000120) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6628p0022,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6630p0013 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6630p0013(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A0) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6630p0013,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6631p0016 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6631p0016(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000300) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6631p0016,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6632p0015 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6632p0015(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000301) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6632p0015,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6633p0013 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6633p0013(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000348) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6633p0013,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6634p0016 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6634p0016(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000410) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6634p0016,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_6635p0016 = { 0 };

static boolean_T MHCAN_handler_RxSlot_6635p0016(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000510) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_6635p0016,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_9757p0005 = { 0 };

static boolean_T MHCAN_handler_RxSlot_9757p0005(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000258) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_9757p0005,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

struct {
  uint32_T head;
  S_CANMessage messages[2];
} MHCAN_queue_RxSlot_9758p0005 = { 0 };

static boolean_T MHCAN_handler_RxSlot_9758p0005(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000278) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = MHCAN_enqueue((MHCAN_queue *) &MHCAN_queue_RxSlot_9758p0005,
        2, messageObj);
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_9759p0005 = { 0 };

static boolean_T MHCAN_handler_RxSlot_9759p0005(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000638) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_9759p0005.ready;
      MHCAN_directslot_RxSlot_9759p0005.message = *messageObj;
      MHCAN_directslot_RxSlot_9759p0005.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_9760p0005 = { 0 };

static boolean_T MHCAN_handler_RxSlot_9760p0005(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x00000620) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_9760p0005.ready;
      MHCAN_directslot_RxSlot_9760p0005.message = *messageObj;
      MHCAN_directslot_RxSlot_9760p0005.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10416p0017 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10416p0017(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A4) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10416p0017.ready;
      MHCAN_directslot_RxSlot_10416p0017.message = *messageObj;
      MHCAN_directslot_RxSlot_10416p0017.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10417p0017 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10417p0017(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A5) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10417p0017.ready;
      MHCAN_directslot_RxSlot_10417p0017.message = *messageObj;
      MHCAN_directslot_RxSlot_10417p0017.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10419p0012 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10419p0012(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A3) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10419p0012.ready;
      MHCAN_directslot_RxSlot_10419p0012.message = *messageObj;
      MHCAN_directslot_RxSlot_10419p0012.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10421p0018 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10421p0018(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A1) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10421p0018.ready;
      MHCAN_directslot_RxSlot_10421p0018.message = *messageObj;
      MHCAN_directslot_RxSlot_10421p0018.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10423p0016 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10423p0016(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000001A2) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10423p0016.ready;
      MHCAN_directslot_RxSlot_10423p0016.message = *messageObj;
      MHCAN_directslot_RxSlot_10423p0016.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10418p0017 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10418p0017(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000000A3) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10418p0017.ready;
      MHCAN_directslot_RxSlot_10418p0017.message = *messageObj;
      MHCAN_directslot_RxSlot_10418p0017.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10420p0016 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10420p0016(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000000A1) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10420p0016.ready;
      MHCAN_directslot_RxSlot_10420p0016.message = *messageObj;
      MHCAN_directslot_RxSlot_10420p0016.ready = 1;
    }

    return 1;
  }

  return 0;
}

MHCAN_directslot MHCAN_directslot_RxSlot_10422p0018 = { 0 };

static boolean_T MHCAN_handler_RxSlot_10422p0018(S_CANMessage *messageObj)
{
  if ((messageObj->u4MessageID & 0x000007FF) == 0x000000A2) {
    messageObj->u1Length = messageObj->u1Length > 8 ? 8 : messageObj->u1Length;

    {
      boolean_T new_message;
      new_message = !MHCAN_directslot_RxSlot_10422p0018.ready;
      MHCAN_directslot_RxSlot_10422p0018.message = *messageObj;
      MHCAN_directslot_RxSlot_10422p0018.ready = 1;
    }

    return 1;
  }

  return 0;
}

static const MHCAN_id_dispatcher_T MHCAN_consumers_0x000007FF[] = {
  { 0x00000370, MHCAN_handler_RxSlot_6481p0011 },

  { 0x00000369, MHCAN_handler_RxSlot_6480p0046 },

  { 0x00000110, MHCAN_handler_RxSlot_6629p0026 },

  { 0x00000120, MHCAN_handler_RxSlot_6628p0022 },

  { 0x000001a0, MHCAN_handler_RxSlot_6630p0013 },

  { 0x00000300, MHCAN_handler_RxSlot_6631p0016 },

  { 0x00000301, MHCAN_handler_RxSlot_6632p0015 },

  { 0x00000348, MHCAN_handler_RxSlot_6633p0013 },

  { 0x00000410, MHCAN_handler_RxSlot_6634p0016 },

  { 0x00000510, MHCAN_handler_RxSlot_6635p0016 },

  { 0x00000258, MHCAN_handler_RxSlot_9757p0005 },

  { 0x00000278, MHCAN_handler_RxSlot_9758p0005 },

  { 0x00000638, MHCAN_handler_RxSlot_9759p0005 },

  { 0x00000620, MHCAN_handler_RxSlot_9760p0005 },

  { 0x000001a4, MHCAN_handler_RxSlot_10416p0017 },

  { 0x000001a5, MHCAN_handler_RxSlot_10417p0017 },

  { 0x000001a3, MHCAN_handler_RxSlot_10419p0012 },

  { 0x000001a1, MHCAN_handler_RxSlot_10421p0018 },

  { 0x000001a2, MHCAN_handler_RxSlot_10423p0016 },

  { 0x000000a3, MHCAN_handler_RxSlot_10418p0017 },

  { 0x000000a1, MHCAN_handler_RxSlot_10420p0016 },

  { 0x000000a2, MHCAN_handler_RxSlot_10422p0018 },
};

static const MHCAN_mask_dispatcher_T masks[] = {
  { 0x000007FF, 22, 0, (MHCAN_id_dispatcher_T *) MHCAN_consumers_0x000007FF },
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
