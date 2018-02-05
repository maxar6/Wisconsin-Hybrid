#ifndef FAULT_MANAGER_H
#define FAULT_MANAGER_H
#include "Application.h"

extern void ClearFault(uint32_T fault);
extern uint32_T NullFault(void);
extern boolean_T IsFaultValid(uint32_T fault);
extern boolean_T IsFaultEnabled(uint32_T fault);
extern boolean_T IsFaultSuspected(uint32_T fault);
extern boolean_T IsFaultActive(uint32_T fault);
extern boolean_T IsFaultOccurred(uint32_T fault);
extern void SetFaultSuspected(uint32_T fault, boolean_T val);
extern void SetFaultActive(uint32_T fault, boolean_T val);
extern void SetFaultOccurred(uint32_T fault, boolean_T val);
extern boolean_T GetFaultActionStatus(uint32_T action);
extern void GlobalFaultClear(void);
extern void FaultManagerPeriodicTick(void);
extern void UpdateFault(uint32_T fault);
extern void ResetFaultXY(uint32_T fault);
extern void RefreshFaultActionReferenceCounts(void);
extern uint32_T GetLastSuspectedFault(void);
extern uint32_T GetLastUnsuspectedFault(void);
extern uint32_T GetLastActiveFault(void);
extern uint32_T GetLastInactiveFault(void);
extern uint32_T GetLastOccurredFault(void);
extern uint32_T GetNextFault(uint32_T fault, boolean_T loop);
extern uint32_T GetNextEnabledFault(uint32_T fault, boolean_T loop);
extern uint32_T GetNextSuspectedFault(uint32_T fault, boolean_T loop);
extern uint32_T GetNextActiveFault(uint32_T fault, boolean_T loop);
extern uint32_T GetNextOccurredFault(uint32_T fault, boolean_T loop);
extern boolean_T GetFaultProperties(uint32_T fault,
  uint32_T *out_id, uint8_T *out_mode,
  uint32_T *out_xlim, uint32_T *out_ylim,
  uint32_T *out_x, uint32_T *out_y);
extern const char *GetFaultName(uint32_T fault);
extern uint8_T GetActionCondForFaultAction(uint32_T fault, uint8_T action);

#endif
