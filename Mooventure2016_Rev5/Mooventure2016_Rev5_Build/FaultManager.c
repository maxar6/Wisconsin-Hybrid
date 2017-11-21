#include "Application.h"

/* --- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_Code.h>

uint32_T NullFault(void)
{
  return 93;
}

boolean_T IsFaultValid(uint32_T fault)
{
  return (fault < 93);
}

boolean_T IsFaultEnabled(uint32_T fault)
{
  uint16_T mode;
  if (fault >= 93)
    return 0;
  mode = FaultManager_DataStore_ByIndex(fault).mode;
  return (mode != 0);
}

boolean_T IsFaultSuspected(uint32_T fault)
{
  uint16_T index;
  uint8_T mask;
  if (fault >= 93)
    return 0;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  return (VolFaultManager_DataStore_VolFaultManager().suspected[index] & mask)
    != 0;
}

boolean_T IsFaultActive(uint32_T fault)
{
  uint16_T index;
  uint8_T mask;
  if (fault >= 93)
    return 0;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  return (VolFaultManager_DataStore_VolFaultManager().active[index] & mask) != 0;
}

boolean_T IsFaultOccurred(uint32_T fault)
{
  uint16_T index;
  uint8_T mask;
  if (fault >= 93)
    return 0;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  return (VolFaultManager_DataStore_VolFaultManager().occurred[index] & mask) !=
    0;
}

void RefreshFaultActionReferenceCounts(void)
{
  int32_T fault;
  uint16_T action;
  uint16_T index;
  for (action=0; action < 17; action++) {
    Actions_DataStore_ByIndex(action).reference_count = 0;
  }

  for (fault=0; fault < 93; fault++) {
    uint8_T mask;
    mask = (uint8_T) (1U << (fault & 7U));
    index = (uint16_T) (fault >> 3UL);

    {
      boolean_T s = (VolFaultManager_DataStore_VolFaultManager().suspected[index]
                     & mask) != 0;
      boolean_T a = (VolFaultManager_DataStore_VolFaultManager().active[index] &
                     mask) != 0;
      boolean_T o = (VolFaultManager_DataStore_VolFaultManager().occurred[index]
                     & mask) != 0;
      uint16_T cond;

      {
        cond = FaultManager_DataStore_ByIndex(fault).action1_condition;
        action = FaultManager_DataStore_ByIndex(fault).action1;
        if (action < 17) {
          if (s && (cond & FAULT_COND_SUSPECTED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (a && (cond & FAULT_COND_ACTIVE)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (o && (cond & FAULT_COND_OCCURRED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }
        }
      }

      {
        cond = FaultManager_DataStore_ByIndex(fault).action2_condition;
        action = FaultManager_DataStore_ByIndex(fault).action2;
        if (action < 17) {
          if (s && (cond & FAULT_COND_SUSPECTED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (a && (cond & FAULT_COND_ACTIVE)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (o && (cond & FAULT_COND_OCCURRED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }
        }
      }

      {
        cond = FaultManager_DataStore_ByIndex(fault).action3_condition;
        action = FaultManager_DataStore_ByIndex(fault).action3;
        if (action < 17) {
          if (s && (cond & FAULT_COND_SUSPECTED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (a && (cond & FAULT_COND_ACTIVE)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (o && (cond & FAULT_COND_OCCURRED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }
        }
      }

      {
        cond = FaultManager_DataStore_ByIndex(fault).action4_condition;
        action = FaultManager_DataStore_ByIndex(fault).action4;
        if (action < 17) {
          if (s && (cond & FAULT_COND_SUSPECTED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (a && (cond & FAULT_COND_ACTIVE)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }

          if (o && (cond & FAULT_COND_OCCURRED)) {
            Actions_DataStore_ByIndex(action).reference_count++;
          }
        }
      }
    }
  }
}

void AdjustFaultActionReferenceCount(uint32_T fault, boolean_T val, uint8_T
  condition)
{
  uint16_T action;
  S_ConstFault_T const* pFlt;
  if (fault >= 93)
    return;
  pFlt = &(FaultManager_DataStore_ByIndex(fault));

  /* Adjust the fault action reference count for each action condition set in the calibration */
  {
    if (pFlt->action1_condition & condition) {
      action = pFlt->action1;
      if (action < 17) {
        if (val) {
          Actions_DataStore_ByIndex(action).reference_count++;
        } else if (Actions_DataStore_ByIndex(action).reference_count) {
          Actions_DataStore_ByIndex(action).reference_count--;
        }
      }
    }
  }

  {
    if (pFlt->action2_condition & condition) {
      action = pFlt->action2;
      if (action < 17) {
        if (val) {
          Actions_DataStore_ByIndex(action).reference_count++;
        } else if (Actions_DataStore_ByIndex(action).reference_count) {
          Actions_DataStore_ByIndex(action).reference_count--;
        }
      }
    }
  }

  {
    if (pFlt->action3_condition & condition) {
      action = pFlt->action3;
      if (action < 17) {
        if (val) {
          Actions_DataStore_ByIndex(action).reference_count++;
        } else if (Actions_DataStore_ByIndex(action).reference_count) {
          Actions_DataStore_ByIndex(action).reference_count--;
        }
      }
    }
  }

  {
    if (pFlt->action4_condition & condition) {
      action = pFlt->action4;
      if (action < 17) {
        if (val) {
          Actions_DataStore_ByIndex(action).reference_count++;
        } else if (Actions_DataStore_ByIndex(action).reference_count) {
          Actions_DataStore_ByIndex(action).reference_count--;
        }
      }
    }
  }
}

void OnChangeFaultSuspected(uint32_T fault, boolean_T val)
{
  if (fault >= 93)
    return;
  AdjustFaultActionReferenceCount(fault, val, FAULT_COND_SUSPECTED);
  if (val) {
    VolFaultManager_DataStore_VolFaultManager().last_suspected_fault = (uint8_T)
      fault;
  } else {
    VolFaultManager_DataStore_VolFaultManager().last_unsuspected_fault =
      (uint8_T) fault;
  }
}

void OnChangeFaultActive(uint32_T fault, boolean_T val)
{
  if (fault >= 93)
    return;
  AdjustFaultActionReferenceCount(fault, val, FAULT_COND_ACTIVE);
  if (val) {
    VolFaultManager_DataStore_VolFaultManager().last_active_fault = (uint8_T)
      fault;

    /* Trigger callbacks on active faults */
    {
      extern void Trigger_Fault_active_0_8(void);
      Trigger_Fault_active_0_8();
    }
  } else {
    VolFaultManager_DataStore_VolFaultManager().last_inactive_fault = (uint8_T)
      fault;
  }
}

void OnChangeFaultOccurred(uint32_T fault, boolean_T val)
{
  if (fault >= 93)
    return;
  AdjustFaultActionReferenceCount(fault, val, FAULT_COND_OCCURRED);
  if (val) {
    VolFaultManager_DataStore_VolFaultManager().last_occurred_fault = (uint8_T)
      fault;
  }
}

void SetFaultSuspected(uint32_T fault, boolean_T val)
{
  uint16_T index;
  uint8_T mask;
  boolean_T old;
  if (fault >= 93)
    return;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  old = (VolFaultManager_DataStore_VolFaultManager().suspected[index] & mask) !=
    0;
  if (val != old) {
    if (val) {
      VolFaultManager_DataStore_VolFaultManager().suspected[index] |= mask;
    } else {
      VolFaultManager_DataStore_VolFaultManager().suspected[index] &= ~mask;
    }

    OnChangeFaultSuspected(fault, val);
  }
}

void SetFaultActive(uint32_T fault, boolean_T val)
{
  uint16_T index;
  uint8_T mask;
  boolean_T old;
  if (fault >= 93)
    return;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  old = (VolFaultManager_DataStore_VolFaultManager().active[index] & mask) != 0;
  if (val != old) {
    if (val) {
      VolFaultManager_DataStore_VolFaultManager().active[index] |= mask;
    } else {
      VolFaultManager_DataStore_VolFaultManager().active[index] &= ~mask;
    }

    OnChangeFaultActive(fault, val);
  }
}

void SetFaultOccurred(uint32_T fault, boolean_T val)
{
  uint16_T index;
  uint8_T mask;
  boolean_T old;
  if (fault >= 93)
    return;
  index = (uint16_T) (fault >> 3UL);
  mask = (uint8_T) (1U << (fault & 7U));
  old = (VolFaultManager_DataStore_VolFaultManager().occurred[index] & mask) !=
    0;
  if (val != old) {
    if (val) {
      VolFaultManager_DataStore_VolFaultManager().occurred[index] |= mask;
    } else {
      VolFaultManager_DataStore_VolFaultManager().occurred[index] &= ~mask;
    }

    OnChangeFaultOccurred(fault, val);
  }
}

uint32_T GetLastSuspectedFault(void)
{
  return VolFaultManager_DataStore_VolFaultManager().last_suspected_fault;
}

uint32_T GetLastUnsuspectedFault(void)
{
  return VolFaultManager_DataStore_VolFaultManager().last_unsuspected_fault;
}

uint32_T GetLastActiveFault(void)
{
  return VolFaultManager_DataStore_VolFaultManager().last_active_fault;
}

uint32_T GetLastInactiveFault(void)
{
  return VolFaultManager_DataStore_VolFaultManager().last_inactive_fault;
}

uint32_T GetLastOccurredFault(void)
{
  return VolFaultManager_DataStore_VolFaultManager().last_occurred_fault;
}

uint32_T GetNextFault(uint32_T fault, boolean_T loop)
{
  if (fault == 92) {
    if (!loop)
      return 93;
    fault = 0;
  } else if (fault > 92) {
    fault = 0;
  } else {
    fault++;
  }

  return fault;
}

uint32_T GetNextEnabledFault(uint32_T fault, boolean_T loop)
{
  uint8_T count;
  if (fault == 92) {
    if (!loop)
      return 93;
    fault = 0;
  } else if (fault > 92) {
    fault = 0;
  } else {
    fault++;
  }

  count = 0;
  while (count < 93) {
    if (IsFaultEnabled(fault)) {
      return fault;
    }

    fault++;
    if (fault >= 93) {
      if (loop) {
        fault = 0;
      } else {
        return 93;
      }
    }

    count++;
  }

  return 93;
}

uint32_T GetNextSuspectedFault(uint32_T fault, boolean_T loop)
{
  uint8_T count;
  if (fault == 92) {
    if (!loop)
      return 93;
    fault = 0;
  } else if (fault > 92) {
    fault = 0;
  } else {
    fault++;
  }

  count = 0;
  while (count < 93) {
    if (IsFaultSuspected(fault)) {
      return fault;
    }

    fault++;
    if (fault >= 93) {
      if (loop) {
        fault = 0;
      } else {
        return 93;
      }
    }

    count++;
  }

  return 93;
}

uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop)
{
  uint8_T count;
  if (fault == 92) {
    if (!loop)
      return 93;
    fault = 0;
  } else if (fault > 92) {
    fault = 0;
  } else {
    fault++;
  }

  count = 0;
  while (count < 93) {
    if (IsFaultActive(fault)) {
      return fault;
    }

    fault++;
    if (fault >= 93) {
      if (loop) {
        fault = 0;
      } else {
        return 93;
      }
    }

    count++;
  }

  return 93;
}

uint32_T GetNextOccurredFault(uint32_T fault, boolean_T loop)
{
  uint8_T count;
  if (fault == 92) {
    if (!loop)
      return 93;
    fault = 0;
  } else if (fault > 92) {
    fault = 0;
  } else {
    fault++;
  }

  count = 0;
  while (count < 93) {
    if (IsFaultOccurred(fault)) {
      return fault;
    }

    fault++;
    if (fault >= 93) {
      if (loop) {
        fault = 0;
      } else {
        return 93;
      }
    }

    count++;
  }

  return 93;
}

void ClearFault(uint32_T fault)
{
  if (fault >= 93)
    return;
  VolFaults_DataStore_ByIndex(fault).x = 0;
  VolFaults_DataStore_ByIndex(fault).y = 0;
  SetFaultSuspected(fault, 0);
  SetFaultActive(fault, 0);
  SetFaultOccurred(fault, 0);
}

void UpdateFault(uint32_T fault)
{
  uint16_T mode;
  uint32_T xlim;
  uint32_T ylim;
  uint32_T x;
  uint32_T y;
  boolean_T s;
  boolean_T a;
  boolean_T o;
  uint8_T mask;
  uint16_T index;
  S_ConstFault_T const* pFlt;
  if (fault >= 93)
    return;
  pFlt = &(FaultManager_DataStore_ByIndex(fault));
  mode = pFlt->mode;

  /* If disabled, the input signal is considered zero, and the x/y counters should be cleared */
  if (mode <= FAULT_MODE_DISABLED) {
    s = 0;
    a = 0;
    o = 0;
    x = 0;
    y = 0;
  } else {
    index = (uint16_T) (fault >> 3UL);
    mask = (uint8_T) (1U << (fault & 7U));
    xlim = pFlt->xlim;
    ylim = pFlt->ylim;
    x = VolFaults_DataStore_ByIndex(fault).x;
    y = VolFaults_DataStore_ByIndex(fault).y;
    s = ((VolFaultManager_DataStore_VolFaultManager().suspected[index] & mask)
         != 0);
    a = ((VolFaultManager_DataStore_VolFaultManager().active[index] & mask) != 0);
    o = ((VolFaultManager_DataStore_VolFaultManager().occurred[index] & mask) !=
         0);

    /* Set suspected status during test */
    s |= ((boolean_T) pFlt->test);

    /* X/Y Fault Counter Mechanism */
    if (a) {
      if ((mode == FAULT_MODE_STICKY) ||
          (mode == FAULT_MODE_STICKYDASHPERSISTENT)) {
        x = 0;
        y = 0;
      } else {
        if (s) {
          x = 0;
          y = 0;
        } else {
          y++;
        }
      }
    } else {
      if (s) {
        x++;
      }

      if (x > 0) {
        y++;
      }

      if ((xlim - x) > (ylim - y)) {
        x = 0;
        y = 0;
      }
    }

    /* Check counters and change states */
    if (x >= xlim) {
      a = 1;
      x = 0;
      y = 0;
    } else if (y >= ylim) {
      /* Go inactive and become occurred, unlesss sticky */
      if ((mode != FAULT_MODE_STICKY) &&
          (mode != FAULT_MODE_STICKYDASHPERSISTENT)) {
        if (a) {
          o = 1;
        }

        a = 0;
      }

      x = 0;
      y = 0;
    }
  }

  /* Set status bits, and update counters */
  VolFaults_DataStore_ByIndex(fault).x = (uint16_T) x;
  VolFaults_DataStore_ByIndex(fault).y = (uint16_T) y;
  SetFaultSuspected(fault, s);
  SetFaultActive(fault, a);
  SetFaultOccurred(fault, o);
}

void ResetFaultXY(uint32_T fault)
{
  if (fault >= 93)
    return;

  /* Reset X/Y Counters to Zero */
  VolFaults_DataStore_ByIndex(fault).x = 0;
  VolFaults_DataStore_ByIndex(fault).y = 0;
}

boolean_T GetFaultProperties(uint32_T fault,
  uint32_T *out_id, uint8_T *out_mode,
  uint32_T *out_xlim, uint32_T *out_ylim,
  uint32_T *out_x, uint32_T *out_y)
{
  if (fault >= 93) {
    if (out_id)
      *out_id = 0;
    if (out_mode)
      *out_mode = 0;
    if (out_xlim)
      *out_xlim = 0;
    if (out_ylim)
      *out_ylim = 0;
    if (out_x)
      *out_x = 0;
    if (out_y)
      *out_y = 0;
    return 0;
  } else {
    S_ConstFault_T const* pFlt;
    S_Fault_T const* pVolFlt;
    pFlt = &(FaultManager_DataStore_ByIndex(fault));
    pVolFlt = &(VolFaults_DataStore_ByIndex(fault));
    if (out_id)
      *out_id = (uint32_T) pFlt->id;
    if (out_mode)
      *out_mode = (uint8_T) pFlt->mode;
    if (out_xlim)
      *out_xlim = (uint32_T) pFlt->xlim;
    if (out_ylim)
      *out_ylim = (uint32_T) pFlt->ylim;
    if (out_x)
      *out_x = (uint32_T) pVolFlt->x;
    if (out_y)
      *out_y = (uint32_T) pVolFlt->y;
    return 1;
  }
}

const char *GetFaultName(uint32_T fault)
{
  return 0;
}

uint8_T GetActionCondForFaultAction(uint32_T fault, uint8_T action)
{
  S_ConstFault_T const* pFlt;
  if (fault >= 93 || action >= 17)
    return 0;
  pFlt = &(FaultManager_DataStore_ByIndex(fault));
  if ((pFlt->action1 == action) && (pFlt->action1_condition > 0)) {
    return (uint8_T)(pFlt->action1_condition);
  } else if ((pFlt->action2 == action) && (pFlt->action2_condition > 0)) {
    return (uint8_T)(pFlt->action2_condition);
  } else if ((pFlt->action3 == action) && (pFlt->action3_condition > 0)) {
    return (uint8_T)(pFlt->action3_condition);
  } else if ((pFlt->action4 == action) && (pFlt->action4_condition > 0)) {
    return (uint8_T)(pFlt->action4_condition);
  } else {
    return 0;
  }
}

boolean_T GetFaultActionStatus(uint32_T action)
{
  if (action >= 17)
    return 0;
  return (Actions_DataStore_ByIndex(action).reference_count > 0);
}

void GlobalFaultClear(void)
{
  {
    uint32_T index;
    for (index=0; index < 93; index++) {
      ClearFault(index);
    }

    for (index=0; index < 12; index++) {
      VolFaultManager_DataStore_VolFaultManager().suspected[index] = 0;
      VolFaultManager_DataStore_VolFaultManager().active[index] = 0;
      VolFaultManager_DataStore_VolFaultManager().occurred[index] = 0;
    }
  }

  {
    uint32_T action;
    for (action=0; action < 17; action++) {
      Actions_DataStore_ByIndex(action).reference_count = 0;
    }
  }

  FaultMarquees_DataStore_FaultMarquees().current_suspected_vardec = 93;
  FaultMarquees_DataStore_FaultMarquees().current_active_vardec = 93;
  FaultMarquees_DataStore_FaultMarquees().current_occurred_vardec = 93;
  VolFaultManager_DataStore_VolFaultManager().last_suspected_fault = 93;
  VolFaultManager_DataStore_VolFaultManager().last_unsuspected_fault = 93;
  VolFaultManager_DataStore_VolFaultManager().last_active_fault = 93;
  VolFaultManager_DataStore_VolFaultManager().last_inactive_fault = 93;
  VolFaultManager_DataStore_VolFaultManager().last_occurred_fault = 93;
}

static void UpdateSuspectedMarquee(void)
{
  FaultMarquees_DataStore_FaultMarquees().current_suspected_vardec = (uint8_T)
    GetNextSuspectedFault(FaultMarquees_DataStore_FaultMarquees().
    current_suspected_vardec, 1);
}

static void UpdateActiveMarquee(void)
{
  FaultMarquees_DataStore_FaultMarquees().current_active_vardec = (uint8_T)
    GetNextActiveFault(FaultMarquees_DataStore_FaultMarquees().
                       current_active_vardec, 1);
}

static void UpdateOccurredMarquee(void)
{
  FaultMarquees_DataStore_FaultMarquees().current_occurred_vardec = (uint8_T)
    GetNextOccurredFault(FaultMarquees_DataStore_FaultMarquees().
    current_occurred_vardec, 1);
}

static void UpdateActionReasonMarquee(uint32_T fault_action_index)
{
  typedef struct {
    uint8_T fault_index;
  } fault_action_marquee_state_t;

  static fault_action_marquee_state_t fault_action_marquee_state[17] = { { 0 } };

  uint8_T fault;
  uint8_T count;
  if (GetFaultActionStatus(fault_action_index)) {
    fault = fault_action_marquee_state[fault_action_index].fault_index;
    count = 0;
    while (count < 93) {
      uint8_T mask;
      uint16_T index;
      fault++;
      if (fault >= 93) {
        fault = 0;
      }

      index = (uint16_T) (fault >> 3UL);
      mask = (uint8_T) (1U << (fault & 7U));
      if (FaultManager_DataStore_ByIndex(fault).action1==fault_action_index) {
        if ((FaultManager_DataStore_ByIndex(fault).action1_condition &
             FAULT_COND_SUSPECTED) &&
            ((VolFaultManager_DataStore_VolFaultManager().suspected[index] &
              mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action1_condition &
             FAULT_COND_ACTIVE) && ((VolFaultManager_DataStore_VolFaultManager()
              .active[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action1_condition &
             FAULT_COND_OCCURRED) && ((VolFaultManager_DataStore_VolFaultManager
              ().occurred[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }
      }

      if (FaultManager_DataStore_ByIndex(fault).action2==fault_action_index) {
        if ((FaultManager_DataStore_ByIndex(fault).action2_condition &
             FAULT_COND_SUSPECTED) &&
            ((VolFaultManager_DataStore_VolFaultManager().suspected[index] &
              mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action2_condition &
             FAULT_COND_ACTIVE) && ((VolFaultManager_DataStore_VolFaultManager()
              .active[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action2_condition &
             FAULT_COND_OCCURRED) && ((VolFaultManager_DataStore_VolFaultManager
              ().occurred[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }
      }

      if (FaultManager_DataStore_ByIndex(fault).action3==fault_action_index) {
        if ((FaultManager_DataStore_ByIndex(fault).action3_condition &
             FAULT_COND_SUSPECTED) &&
            ((VolFaultManager_DataStore_VolFaultManager().suspected[index] &
              mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action3_condition &
             FAULT_COND_ACTIVE) && ((VolFaultManager_DataStore_VolFaultManager()
              .active[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action3_condition &
             FAULT_COND_OCCURRED) && ((VolFaultManager_DataStore_VolFaultManager
              ().occurred[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }
      }

      if (FaultManager_DataStore_ByIndex(fault).action4==fault_action_index) {
        if ((FaultManager_DataStore_ByIndex(fault).action4_condition &
             FAULT_COND_SUSPECTED) &&
            ((VolFaultManager_DataStore_VolFaultManager().suspected[index] &
              mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action4_condition &
             FAULT_COND_ACTIVE) && ((VolFaultManager_DataStore_VolFaultManager()
              .active[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }

        if ((FaultManager_DataStore_ByIndex(fault).action4_condition &
             FAULT_COND_OCCURRED) && ((VolFaultManager_DataStore_VolFaultManager
              ().occurred[index] & mask) != 0)) {
          (FaultActionReason_DataStore())[fault_action_index] = fault;
          fault_action_marquee_state[fault_action_index].fault_index = fault;
          return;
        }
      }

      count++;
    }
  }

  (FaultActionReason_DataStore())[fault_action_index] = 93;
}

void FaultManagerPeriodicTick(void)
{
  /* Handle Command VarDec from MotoTune */
  if ((FaultCommand_DataStore()) == FAULT_COMMAND_CLEARALLFAULTS) {
    GlobalFaultClear();
  }

  (FaultCommand_DataStore()) = FAULT_COMMAND_DASH;

  /* Update VarDec Marquees */
  UpdateSuspectedMarquee();
  UpdateActiveMarquee();
  UpdateOccurredMarquee();

  {
    uint32_T i;
    for (i=0; i < 17; i++) {
      UpdateActionReasonMarquee(i);
    }
  }
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
