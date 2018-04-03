/*
 * CANReceiveDispatcher.h
 *
 */

#ifndef CAN_RECEIVE_DISPATCHER_H
#define CAN_RECEIVE_DISPATCHER_H
#include "CommonInclude.h"

typedef struct {
  uint32_T head;
  S_CANMessage messages[1];
} MHCAN_queue;

typedef struct {
  boolean_T ready;
  S_CANMessage message;
} MHCAN_directslot;

typedef boolean_T (*MHCAN_handler_func)(S_CANMessage *messageObj);
typedef struct {
  uint32_T masked_id;
  MHCAN_handler_func consumer;
} MHCAN_id_dispatcher_T;

typedef boolean_T (*MHCAN_optimized_dispatcher_func)(uint32_T mask,
  MHCAN_id_dispatcher_T *consumer_list, S_CANMessage *messageObj);
typedef struct {
  uint32_T mask;
  uint32_T consumer_count;
  MHCAN_optimized_dispatcher_func optimized_dispatcher;
  MHCAN_id_dispatcher_T *consumer_list;
} MHCAN_mask_dispatcher_T;

extern boolean_T MHCAN_enqueue(MHCAN_queue *queue, uint32_T queue_size,
  S_CANMessage *messageObj);
extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size, uint32_T
  *tail, S_CANMessage *messageObj);
extern boolean_T MHCAN_getdirect(MHCAN_directslot *slot, S_CANMessage
  *messageObj);

#endif
