#ifndef _TABLE_LOOKUP_FUNCTIONS_H_
#define _TABLE_LOOKUP_FUNCTIONS_H_
#include "CommonInclude.h"

extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T ordarr[],
  uint32_T sz, uint16_T prev);
extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
  uint32_T sz);

#endif
