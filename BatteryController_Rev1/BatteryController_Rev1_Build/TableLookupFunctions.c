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

real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in, real_T
  *map_data, uint32_T row_sz, uint32_T col_sz)
{
  real_T out;
  real_T result;
  real_T r0c0_value;
  real_T r0c1_value = 0;
  real_T r1c0_value = 0;
  real_T r1c1_value = 0;
  int32_T q_frac;
  int32_T row_frac = (int32_T) ((row_in) & 0x1FF);
  int32_T col_frac = (int32_T) ((col_in) & 0x1FF);
  uint16_T row_ord = (row_in) >> 9;
  uint16_T col_ord = (col_in) >> 9;
  if (row_ord >= row_sz-1) {
    row_ord = (uint16_T)(row_sz-1);
    row_frac = 0;
  }

  if (col_ord >= col_sz-1) {
    col_ord = (uint16_T)(col_sz-1);
    col_frac = 0;
  }

  r0c0_value = map_data[(row_ord)*col_sz + (col_ord)];
  if (row_frac > 0)
    r1c0_value = map_data[(row_ord+1)*col_sz + (col_ord)];
  if (col_frac > 0)
    r0c1_value = map_data[(row_ord)*col_sz + (col_ord+1)];
  if ((row_frac > 0) && (col_frac > 0))
    r1c1_value = map_data[(row_ord+1)*col_sz + (col_ord+1)];
  q_frac = ((row_frac * col_frac) + 256) >> 9;
  result = (512 - row_frac - col_frac + q_frac) * r0c0_value;
  result += (row_frac - q_frac) * r1c0_value;
  result += (col_frac - q_frac) * r0c1_value;
  result += (q_frac) * r1c1_value;
  out = (real_T)(result / 512.0F);
  return out;
}
