#include "TableLookupFunctions.h"

uint16_T TablePrelookup_real_T(real_T in, const volatile real_T ordarr[],
  uint32_T sz, uint16_T prev);
uint16_T TablePrelookup_real_T(real_T in, const volatile real_T ordarr[],
  uint32_T sz, uint16_T prev)
{
  real_T left_value = ordarr[0];
  real_T right_value = ordarr[sz-1];
  real_T lo_value;
  real_T hi_value;
  real_T range;
  uint16_T ord;
  if (left_value <= right_value) {
    if (in <= left_value) {
      ord = 0;
    } else if (in >= right_value) {
      ord = (uint16_T)((sz << 9) - 1);
    } else {
      ord = (prev >> 9);
      hi_value = ordarr[ord];
      while (hi_value <= in) {
        ord++;
        hi_value = ordarr[ord];
      }

      ord--;
      lo_value = ordarr[ord];
      while (lo_value > in) {
        ord--;
        lo_value = ordarr[ord];
      }

      range = (hi_value - lo_value);
      ord = (uint16_T) ((ord << 9) + (real_T)((((real_T)(in - lo_value)) *
        512.0F + (range / 2.0F)) / range));
    }
  } else {
    if (in >= left_value) {
      ord = 0;
    } else if (in <= right_value) {
      ord = (uint16_T)((sz << 9) - 1);
    } else {
      ord = (prev >> 9);
      lo_value = ordarr[ord];
      while (lo_value > in) {
        ord++;
        lo_value = ordarr[ord];
      }

      ord--;
      hi_value = ordarr[ord];
      while (hi_value < in) {
        ord--;
        hi_value = ordarr[ord];
      }

      range = (hi_value - lo_value);
      ord = (uint16_T) ((ord << 9) + (uint16_T)(0x200) - (real_T)((((real_T)(in
        - lo_value)) * 512.0F + (range / 2.0F)) / range));
    }
  }

  return ord;
}

real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data, uint32_T sz)
{
  real_T out;
  real_T range;
  real_T lo_value;
  real_T hi_value;
  uint16_T frac;
  uint16_T ord = (idx) >> 9;
  if (ord >= sz-1) {
    ord = (uint16_T)(sz-1);
    out = tbl_data[ord];
  } else {
    lo_value = tbl_data[ord];
    hi_value = tbl_data[ord+1];
    range = hi_value - lo_value;
    frac = (idx) & 0x1FF;
    out = (real_T)(lo_value + ((real_T)((real_T)(frac * range) / 512.0F)));
  }

  return out;
}
