/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c9_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c9_debug_family_names[6] = { "i", "nargin", "nargout",
  "faultStatus", "fault1", "fault2" };

/* Function Declarations */
static void initialize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c9_update_debugger_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_st);
static void finalize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_b_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_c_sf_marshall(void *chartInstanceVoid, void *c9_u);
static void c9_info_helper(c9_ResolvedFunctionInfo c9_info[42]);
static const mxArray *c9_d_sf_marshall(void *chartInstanceVoid, void *c9_u);
static uint32_T c9_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_fault1, const char_T *c9_name);
static uint8_T c9_b_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_BuckyWagon_01, const char_T
  *c9_name);
static void init_dsm_address_info(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_is_active_c9_BuckyWagon_01 = 0U;
}

static void initialize_params_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c9_st = NULL;
  const mxArray *c9_y = NULL;
  uint32_T c9_hoistedGlobal;
  uint32_T c9_u;
  const mxArray *c9_b_y = NULL;
  uint32_T c9_b_hoistedGlobal;
  uint32_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  uint8_T c9_c_hoistedGlobal;
  uint8_T c9_c_u;
  const mxArray *c9_d_y = NULL;
  uint32_T *c9_fault1;
  uint32_T *c9_fault2;
  c9_fault2 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_fault1 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(3));
  c9_hoistedGlobal = *c9_fault1;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = *c9_fault2;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 1, c9_c_y);
  c9_c_hoistedGlobal = chartInstance->c9_is_active_c9_BuckyWagon_01;
  c9_c_u = c9_c_hoistedGlobal;
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 2, c9_d_y);
  sf_mex_assign(&c9_st, c9_y);
  return c9_st;
}

static void set_sim_state_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_st)
{
  const mxArray *c9_u;
  uint32_T *c9_fault1;
  uint32_T *c9_fault2;
  c9_fault2 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_fault1 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_doneDoubleBufferReInit = TRUE;
  c9_u = sf_mex_dup(c9_st);
  *c9_fault1 = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u,
    0)), "fault1");
  *c9_fault2 = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u,
    1)), "fault2");
  chartInstance->c9_is_active_c9_BuckyWagon_01 = c9_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 2)),
     "is_active_c9_BuckyWagon_01");
  sf_mex_destroy(&c9_u);
  c9_update_debugger_state_c9_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void finalize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

static void sf_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c9_i0;
  int32_T c9_previousEvent;
  uint32_T *c9_fault1;
  uint32_T *c9_fault2;
  boolean_T (*c9_faultStatus)[23];
  c9_fault2 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_fault1 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_faultStatus = (boolean_T (*)[23])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,8);
  for (c9_i0 = 0; c9_i0 < 23; c9_i0 = c9_i0 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c9_faultStatus)[c9_i0], 0U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c9_fault1, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_fault2, 2U);
  c9_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c9_c9_BuckyWagon_01(chartInstance);
  _sfEvent_ = c9_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c9_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c9_i1;
  boolean_T c9_hoistedGlobal[23];
  int32_T c9_i2;
  boolean_T c9_faultStatus[23];
  uint32_T c9_debug_family_var_map[6];
  real_T c9_i;
  real_T c9_nargin = 1.0;
  real_T c9_nargout = 2.0;
  uint32_T c9_fault1;
  uint32_T c9_fault2;
  real_T c9_b_i;
  uint32_T c9_a;
  uint32_T c9_a1;
  uint32_T c9_c;
  uint32_T c9_b_a;
  uint32_T c9_b;
  real_T c9_n;
  real_T c9_k;
  real_T c9_b_k;
  int32_T c9_hoistedExpr;
  int32_T c9_b_hoistedExpr;
  int32_T c9_c_hoistedExpr;
  uint32_T c9_c_a;
  uint32_T c9_b_a1;
  uint32_T *c9_b_fault2;
  uint32_T *c9_b_fault1;
  boolean_T (*c9_b_faultStatus)[23];
  c9_b_fault2 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_b_fault1 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_b_faultStatus = (boolean_T (*)[23])ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,8);
  for (c9_i1 = 0; c9_i1 < 23; c9_i1 = c9_i1 + 1) {
    c9_hoistedGlobal[c9_i1] = (*c9_b_faultStatus)[c9_i1];
  }

  for (c9_i2 = 0; c9_i2 < 23; c9_i2 = c9_i2 + 1) {
    c9_faultStatus[c9_i2] = c9_hoistedGlobal[c9_i2];
  }

  sf_debug_symbol_scope_push_eml(0U, 6U, 6U, c9_debug_family_names,
    c9_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c9_i, c9_c_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c9_nargin, c9_c_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c9_nargout, c9_c_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c9_faultStatus, c9_b_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c9_fault1, c9_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c9_fault2, c9_sf_marshall, 5U);
  CV_EML_FCN(0, 0);

  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,4);
  c9_fault1 = 0U;
  _SFD_EML_CALL(0,5);
  c9_fault2 = 0U;
  c9_i = 1.0;
  c9_b_i = 1.0;
  while (c9_b_i <= 23.0) {
    c9_i = c9_b_i;
    CV_EML_FOR(0, 0, 1);
    _SFD_EML_CALL(0,7);
    c9_a = c9_fault1;
    c9_a1 = c9_a;
    c9_c = c9_a1 << 1U;
    c9_b_a = c9_c;
    c9_b = (uint32_T)c9_faultStatus[_SFD_EML_ARRAY_BOUNDS_CHECK("faultStatus",
      (int32_T)_SFD_INTEGER_CHECK("i", c9_i), 1, 23, 1, 0) - 1];
    c9_fault1 = c9_b_a | c9_b;
    c9_b_i = c9_b_i + 1.0;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 0, 0);
  _SFD_EML_CALL(0,9);
  c9_n = 0.0;
  c9_k = 1.0;
 label_1:
  ;
  if (c9_k <= 2.0) {
    c9_b_k = c9_k;
    c9_hoistedExpr = _SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)_SFD_INTEGER_CHECK
      ("", c9_b_k), 1, 2, 1, 0) - 1;
    if (23.0 + -22.0 * (real_T)c9_hoistedExpr == 0.0) {
      c9_n = 0.0;
    } else {
      c9_b_hoistedExpr = _SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)
        _SFD_INTEGER_CHECK("", c9_b_k), 1, 2, 1, 0) - 1;
      if (23.0 + -22.0 * (real_T)c9_b_hoistedExpr > c9_n) {
        c9_c_hoistedExpr = _SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)
          _SFD_INTEGER_CHECK("", c9_b_k), 1, 2, 1, 0) - 1;
        c9_n = 23.0 + -22.0 * (real_T)c9_c_hoistedExpr;
      }

      c9_k = c9_k + 1.0;
      goto label_1;
    }
  }

  CV_EML_IF(0, 0, c9_n <= 32.0);
  _SFD_EML_CALL(0,10);
  c9_c_a = c9_fault1;
  c9_b_a1 = c9_c_a;
  c9_fault1 = c9_b_a1 << 9U;
  _SFD_EML_CALL(0,-15);
  sf_debug_symbol_scope_pop();
  *c9_b_fault1 = c9_fault1;
  *c9_b_fault2 = c9_fault2;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

static const mxArray *c9_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  uint32_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((uint32_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_b_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  int32_T c9_i3;
  boolean_T c9_b_u[23];
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  for (c9_i3 = 0; c9_i3 < 23; c9_i3 = c9_i3 + 1) {
    c9_b_u[c9_i3] = (*((boolean_T (*)[23])c9_u))[c9_i3];
  }

  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 11, 0U, 1U, 0U, 1, 23));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_c_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  real_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((real_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

const mxArray *sf_c9_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_ResolvedFunctionInfo c9_info[42];
  const mxArray *c9_m0 = NULL;
  int32_T c9_i4;
  c9_ResolvedFunctionInfo *c9_r0;
  c9_nameCaptureInfo = NULL;
  c9_info_helper(c9_info);
  sf_mex_assign(&c9_m0, sf_mex_createstruct("nameCaptureInfo", 1, 42));
  for (c9_i4 = 0; c9_i4 < 42; c9_i4 = c9_i4 + 1) {
    c9_r0 = &c9_info[c9_i4];
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->context)), "context",
                    "nameCaptureInfo", c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c9_r0->name)), "name",
                    "nameCaptureInfo", c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c9_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->resolved)), "resolved"
                    , "nameCaptureInfo", c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTime1, 7,
      0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c9_i4);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTime2, 7,
      0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c9_i4);
  }

  sf_mex_assign(&c9_nameCaptureInfo, c9_m0);
  return c9_nameCaptureInfo;
}

static void c9_info_helper(c9_ResolvedFunctionInfo c9_info[42])
{
  c9_info[0].context = "";
  c9_info[0].name = "uint32";
  c9_info[0].dominantType = "double";
  c9_info[0].resolved = "[B]uint32";
  c9_info[0].fileLength = 0U;
  c9_info[0].fileTime1 = 0U;
  c9_info[0].fileTime2 = 0U;
  c9_info[1].context = "";
  c9_info[1].name = "length";
  c9_info[1].dominantType = "logical";
  c9_info[1].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c9_info[1].fileLength = 326U;
  c9_info[1].fileTime1 = 1226602474U;
  c9_info[1].fileTime2 = 0U;
  c9_info[2].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c9_info[2].name = "nargin";
  c9_info[2].dominantType = "";
  c9_info[2].resolved = "[B]nargin";
  c9_info[2].fileLength = 0U;
  c9_info[2].fileTime1 = 0U;
  c9_info[2].fileTime2 = 0U;
  c9_info[3].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c9_info[3].name = "eq";
  c9_info[3].dominantType = "double";
  c9_info[3].resolved = "[B]eq";
  c9_info[3].fileLength = 0U;
  c9_info[3].fileTime1 = 0U;
  c9_info[3].fileTime2 = 0U;
  c9_info[4].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c9_info[4].name = "size";
  c9_info[4].dominantType = "logical";
  c9_info[4].resolved = "[B]size";
  c9_info[4].fileLength = 0U;
  c9_info[4].fileTime1 = 0U;
  c9_info[4].fileTime2 = 0U;
  c9_info[5].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  c9_info[5].name = "gt";
  c9_info[5].dominantType = "double";
  c9_info[5].resolved = "[B]gt";
  c9_info[5].fileLength = 0U;
  c9_info[5].fileTime1 = 0U;
  c9_info[5].fileTime2 = 0U;
  c9_info[6].context = "";
  c9_info[6].name = "min";
  c9_info[6].dominantType = "double";
  c9_info[6].resolved = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  c9_info[6].fileLength = 362U;
  c9_info[6].fileTime1 = 1244760752U;
  c9_info[6].fileTime2 = 0U;
  c9_info[7].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  c9_info[7].name = "le";
  c9_info[7].dominantType = "double";
  c9_info[7].resolved = "[B]le";
  c9_info[7].fileLength = 0U;
  c9_info[7].fileTime1 = 0U;
  c9_info[7].fileTime2 = 0U;
  c9_info[8].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  c9_info[8].name = "nargout";
  c9_info[8].dominantType = "";
  c9_info[8].resolved = "[B]nargout";
  c9_info[8].fileLength = 0U;
  c9_info[8].fileTime1 = 0U;
  c9_info[8].fileTime2 = 0U;
  c9_info[9].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  c9_info[9].name = "eml_min_or_max";
  c9_info[9].dominantType = "char";
  c9_info[9].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[9].fileLength = 9969U;
  c9_info[9].fileTime1 = 1240287206U;
  c9_info[9].fileTime2 = 0U;
  c9_info[10].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[10].name = "ischar";
  c9_info[10].dominantType = "char";
  c9_info[10].resolved = "[B]ischar";
  c9_info[10].fileLength = 0U;
  c9_info[10].fileTime1 = 0U;
  c9_info[10].fileTime2 = 0U;
  c9_info[11].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[11].name = "strcmp";
  c9_info[11].dominantType = "char";
  c9_info[11].resolved = "[B]strcmp";
  c9_info[11].fileLength = 0U;
  c9_info[11].fileTime1 = 0U;
  c9_info[11].fileTime2 = 0U;
  c9_info[12].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[12].name = "isnumeric";
  c9_info[12].dominantType = "double";
  c9_info[12].resolved = "[B]isnumeric";
  c9_info[12].fileLength = 0U;
  c9_info[12].fileTime1 = 0U;
  c9_info[12].fileTime2 = 0U;
  c9_info[13].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[13].name = "isreal";
  c9_info[13].dominantType = "double";
  c9_info[13].resolved = "[B]isreal";
  c9_info[13].fileLength = 0U;
  c9_info[13].fileTime1 = 0U;
  c9_info[13].fileTime2 = 0U;
  c9_info[14].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[14].name = "class";
  c9_info[14].dominantType = "double";
  c9_info[14].resolved = "[B]class";
  c9_info[14].fileLength = 0U;
  c9_info[14].fileTime1 = 0U;
  c9_info[14].fileTime2 = 0U;
  c9_info[15].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c9_info[15].name = "isa";
  c9_info[15].dominantType = "double";
  c9_info[15].resolved = "[B]isa";
  c9_info[15].fileLength = 0U;
  c9_info[15].fileTime1 = 0U;
  c9_info[15].fileTime2 = 0U;
  c9_info[16].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c9_info[16].name = "islogical";
  c9_info[16].dominantType = "double";
  c9_info[16].resolved = "[B]islogical";
  c9_info[16].fileLength = 0U;
  c9_info[16].fileTime1 = 0U;
  c9_info[16].fileTime2 = 0U;
  c9_info[17].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c9_info[17].name = "eml_scalar_eg";
  c9_info[17].dominantType = "double";
  c9_info[17].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c9_info[17].fileLength = 3068U;
  c9_info[17].fileTime1 = 1240287210U;
  c9_info[17].fileTime2 = 0U;
  c9_info[18].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m/any_enums";
  c9_info[18].name = "false";
  c9_info[18].dominantType = "";
  c9_info[18].resolved = "[B]false";
  c9_info[18].fileLength = 0U;
  c9_info[18].fileTime1 = 0U;
  c9_info[18].fileTime2 = 0U;
  c9_info[19].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c9_info[19].name = "isstruct";
  c9_info[19].dominantType = "double";
  c9_info[19].resolved = "[B]isstruct";
  c9_info[19].fileLength = 0U;
  c9_info[19].fileTime1 = 0U;
  c9_info[19].fileTime2 = 0U;
  c9_info[20].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m/zerosum";
  c9_info[20].name = "cast";
  c9_info[20].dominantType = "double";
  c9_info[20].resolved = "[B]cast";
  c9_info[20].fileLength = 0U;
  c9_info[20].fileTime1 = 0U;
  c9_info[20].fileTime2 = 0U;
  c9_info[21].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m/zerosum";
  c9_info[21].name = "plus";
  c9_info[21].dominantType = "double";
  c9_info[21].resolved = "[B]plus";
  c9_info[21].fileLength = 0U;
  c9_info[21].fileTime1 = 0U;
  c9_info[21].fileTime2 = 0U;
  c9_info[22].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c9_info[22].name = "eml_scalexp_alloc";
  c9_info[22].dominantType = "double";
  c9_info[22].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c9_info[22].fileLength = 808U;
  c9_info[22].fileTime1 = 1230519898U;
  c9_info[22].fileTime2 = 0U;
  c9_info[23].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c9_info[23].name = "minus";
  c9_info[23].dominantType = "double";
  c9_info[23].resolved = "[B]minus";
  c9_info[23].fileLength = 0U;
  c9_info[23].fileTime1 = 0U;
  c9_info[23].fileTime2 = 0U;
  c9_info[24].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c9_info[24].name = "isscalar";
  c9_info[24].dominantType = "double";
  c9_info[24].resolved = "[B]isscalar";
  c9_info[24].fileLength = 0U;
  c9_info[24].fileTime1 = 0U;
  c9_info[24].fileTime2 = 0U;
  c9_info[25].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c9_info[25].name = "not";
  c9_info[25].dominantType = "logical";
  c9_info[25].resolved = "[B]not";
  c9_info[25].fileLength = 0U;
  c9_info[25].fileTime1 = 0U;
  c9_info[25].fileTime2 = 0U;
  c9_info[26].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c9_info[26].name = "eml_index_class";
  c9_info[26].dominantType = "";
  c9_info[26].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c9_info[26].fileLength = 909U;
  c9_info[26].fileTime1 = 1192491982U;
  c9_info[26].fileTime2 = 0U;
  c9_info[27].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m/eml_bin_extremum";
  c9_info[27].name = "ones";
  c9_info[27].dominantType = "char";
  c9_info[27].resolved = "[B]ones";
  c9_info[27].fileLength = 0U;
  c9_info[27].fileTime1 = 0U;
  c9_info[27].fileTime2 = 0U;
  c9_info[28].context = "";
  c9_info[28].name = "bitshift";
  c9_info[28].dominantType = "uint32";
  c9_info[28].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[28].fileLength = 1889U;
  c9_info[28].fileTime1 = 1228119090U;
  c9_info[28].fileTime2 = 0U;
  c9_info[29].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[29].name = "ge";
  c9_info[29].dominantType = "double";
  c9_info[29].resolved = "[B]ge";
  c9_info[29].fileLength = 0U;
  c9_info[29].fileTime1 = 0U;
  c9_info[29].fileTime2 = 0U;
  c9_info[30].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[30].name = "eml_isa_uint";
  c9_info[30].dominantType = "uint32";
  c9_info[30].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  c9_info[30].fileLength = 239U;
  c9_info[30].fileTime1 = 1192491992U;
  c9_info[30].fileTime2 = 0U;
  c9_info[31].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[31].name = "eml_int_nbits";
  c9_info[31].dominantType = "char";
  c9_info[31].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m";
  c9_info[31].fileLength = 467U;
  c9_info[31].fileTime1 = 1192491988U;
  c9_info[31].fileTime2 = 0U;
  c9_info[32].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m";
  c9_info[32].name = "uint8";
  c9_info[32].dominantType = "double";
  c9_info[32].resolved = "[B]uint8";
  c9_info[32].fileLength = 0U;
  c9_info[32].fileTime1 = 0U;
  c9_info[32].fileTime2 = 0U;
  c9_info[33].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[33].name = "lt";
  c9_info[33].dominantType = "double";
  c9_info[33].resolved = "[B]lt";
  c9_info[33].fileLength = 0U;
  c9_info[33].fileTime1 = 0U;
  c9_info[33].fileTime2 = 0U;
  c9_info[34].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[34].name = "isempty";
  c9_info[34].dominantType = "uint32";
  c9_info[34].resolved = "[B]isempty";
  c9_info[34].fileLength = 0U;
  c9_info[34].fileTime1 = 0U;
  c9_info[34].fileTime2 = 0U;
  c9_info[35].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[35].name = "floor";
  c9_info[35].dominantType = "double";
  c9_info[35].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c9_info[35].fileLength = 332U;
  c9_info[35].fileTime1 = 1203473222U;
  c9_info[35].fileTime2 = 0U;
  c9_info[36].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c9_info[36].name = "eml_scalar_floor";
  c9_info[36].dominantType = "double";
  c9_info[36].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  c9_info[36].fileLength = 260U;
  c9_info[36].fileTime1 = 1209355990U;
  c9_info[36].fileTime2 = 0U;
  c9_info[37].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[37].name = "ne";
  c9_info[37].dominantType = "double";
  c9_info[37].resolved = "[B]ne";
  c9_info[37].fileLength = 0U;
  c9_info[37].fileTime1 = 0U;
  c9_info[37].fileTime2 = 0U;
  c9_info[38].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[38].name = "eml_error";
  c9_info[38].dominantType = "char";
  c9_info[38].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  c9_info[38].fileLength = 315U;
  c9_info[38].fileTime1 = 1213951944U;
  c9_info[38].fileTime2 = 0U;
  c9_info[39].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitshift.m";
  c9_info[39].name = "uminus";
  c9_info[39].dominantType = "double";
  c9_info[39].resolved = "[B]uminus";
  c9_info[39].fileLength = 0U;
  c9_info[39].fileTime1 = 0U;
  c9_info[39].fileTime2 = 0U;
  c9_info[40].context = "";
  c9_info[40].name = "bitor";
  c9_info[40].dominantType = "uint32";
  c9_info[40].resolved = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitor.m";
  c9_info[40].fileLength = 1051U;
  c9_info[40].fileTime1 = 1219778132U;
  c9_info[40].fileTime2 = 0U;
  c9_info[41].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/bitor.m";
  c9_info[41].name = "eml_scalexp_compatible";
  c9_info[41].dominantType = "uint32";
  c9_info[41].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  c9_info[41].fileLength = 568U;
  c9_info[41].fileTime1 = 1228119040U;
  c9_info[41].fileTime2 = 0U;
}

static const mxArray *c9_d_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  boolean_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((boolean_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static uint32_T c9_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_fault1, const char_T *c9_name
  )
{
  uint32_T c9_y;
  uint32_T c9_u0;
  sf_mex_import(c9_name, sf_mex_dup(c9_fault1), &c9_u0, 1, 7, 0U, 0, 0U, 0);
  c9_y = c9_u0;
  sf_mex_destroy(&c9_fault1);
  return c9_y;
}

static uint8_T c9_b_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_BuckyWagon_01
  , const char_T *c9_name)
{
  uint8_T c9_y;
  uint8_T c9_u1;
  sf_mex_import(c9_name, sf_mex_dup(c9_b_is_active_c9_BuckyWagon_01), &c9_u1, 1,
                3, 0U, 0, 0U, 0);
  c9_y = c9_u1;
  sf_mex_destroy(&c9_b_is_active_c9_BuckyWagon_01);
  return c9_y;
}

static void init_dsm_address_info(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c9_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(357497922U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2690283808U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3721510482U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2283067815U);
}

mxArray *sf_c9_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1125079264U);
    pr[1] = (double)(1528201596U);
    pr[2] = (double)(2663404581U);
    pr[3] = (double)(2860607945U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(23);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c9_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"fault1\",},{M[1],M[6],T\"fault2\",},{M[8],M[0],T\"is_active_c9_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc9_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           9,
           1,
           1,
           3,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);

          {
            unsigned int dimVector[1];
            dimVector[0]= 23;
            _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"faultStatus",0,(MexFcnForType)
                                c9_b_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(1,2,0,1,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,"fault1",
                              0,(MexFcnForType)c9_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,"fault2",
                              0,(MexFcnForType)c9_sf_marshall);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,2,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,553);
        _SFD_CV_INIT_EML_IF(0,0,278,306,364,552);
        _SFD_CV_INIT_EML_FOR(0,0,168,209,277);
        _SFD_CV_INIT_EML_FOR(0,1,373,415,491);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T (*c9_faultStatus)[23];
          uint32_T *c9_fault1;
          uint32_T *c9_fault2;
          c9_fault2 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c9_fault1 = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c9_faultStatus = (boolean_T (*)[23])ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_faultStatus);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_fault1);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_fault2);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c9_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c9_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c9_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c9_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c9_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_BuckyWagon_01
    ((SFc9_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c9_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

static void sf_internal_set_sim_state_c9_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c9_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c9_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c9_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c9_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c9_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",9,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",9,1);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",9,2);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",9);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2442312801U));
  ssSetChecksum1(S,(921126732U));
  ssSetChecksum2(S,(2081143898U));
  ssSetChecksum3(S,(1496570157U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c9_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",9);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c9_BuckyWagon_01(SimStruct *S)
{
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc9_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c9_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c9_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c9_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c9_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c9_BuckyWagon_01;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  if (!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info(chartInstance);
  }

  chart_debug_initialization(S,1);
}

void c9_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
