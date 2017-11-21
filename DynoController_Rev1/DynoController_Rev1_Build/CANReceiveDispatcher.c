/*
 * CANReceiveDispatcher.c
 *
 */

#include "CANReceiveDispatcher.h"

boolean_T MHCAN_enqueue(MHCAN_queue *queue, uint32_T queue_size, S_CANMessage
  *messageObj)
{
  queue->messages[queue->head] = *messageObj;
  queue->head++;
  if (queue->head >= queue_size) {
    queue->head = 0;
  }

  return 1;
}

boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size, uint32_T *tail,
  S_CANMessage *messageObj)
{
  uint32_T temp_tail = *tail;
  boolean_T available = (temp_tail != queue->head);
  if (available) {
    *messageObj = queue->messages[temp_tail];
    temp_tail++;
    if (temp_tail >= queue_size) {
      temp_tail = 0;
    }

    *tail = temp_tail;
  }

  return available;
}

boolean_T MHCAN_getdirect(MHCAN_directslot *slot, S_CANMessage *messageObj)
{
  boolean_T available = slot->ready;
  if (available) {
    *messageObj = slot->message;
    slot->ready = 0;
  }

  return available;
}
