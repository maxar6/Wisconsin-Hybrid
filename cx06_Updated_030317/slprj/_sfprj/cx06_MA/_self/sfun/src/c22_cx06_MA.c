/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c22_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c22_debug_family_names[9] = { "nargin", "nargout", "voltage",
  "currentPlusMinus", "lowV", "highV", "currentBat", "SOCLast", "SOC" };

/* Function Declarations */
static void initialize_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance);
static void disable_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance);
static void c22_update_debugger_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_st);
static void finalize_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance);
static void sf_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c22_machineNumber, uint32_T
  c22_chartNumber);
static const mxArray *c22_sf_marshall(void *chartInstanceVoid, void *c22_u);
static void c22_info_helper(c22_ResolvedFunctionInfo c22_info[19]);
static const mxArray *c22_b_sf_marshall(void *chartInstanceVoid, void *c22_u);
static real_T c22_emlrt_marshallIn(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_SOC, const char_T *c22_name);
static uint8_T c22_b_emlrt_marshallIn(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_b_is_active_c22_cx06_MA, const char_T *c22_name);
static void init_dsm_address_info(SFc22_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c22_is_active_c22_cx06_MA = 0U;
}

static void initialize_params_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c22_update_debugger_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c22_st = NULL;
  const mxArray *c22_y = NULL;
  real_T c22_hoistedGlobal;
  real_T c22_u;
  const mxArray *c22_b_y = NULL;
  uint8_T c22_b_hoistedGlobal;
  uint8_T c22_b_u;
  const mxArray *c22_c_y = NULL;
  real_T *c22_SOC;
  c22_SOC = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c22_st = NULL;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_createcellarray(2));
  c22_hoistedGlobal = *c22_SOC;
  c22_u = c22_hoistedGlobal;
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", &c22_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 0, c22_b_y);
  c22_b_hoistedGlobal = chartInstance->c22_is_active_c22_cx06_MA;
  c22_b_u = c22_b_hoistedGlobal;
  c22_c_y = NULL;
  sf_mex_assign(&c22_c_y, sf_mex_create("y", &c22_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 1, c22_c_y);
  sf_mex_assign(&c22_st, c22_y);
  return c22_st;
}

static void set_sim_state_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_st)
{
  const mxArray *c22_u;
  real_T *c22_SOC;
  c22_SOC = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c22_doneDoubleBufferReInit = TRUE;
  c22_u = sf_mex_dup(c22_st);
  *c22_SOC = c22_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c22_u,
    0)), "SOC");
  chartInstance->c22_is_active_c22_cx06_MA = c22_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c22_u, 1)),
     "is_active_c22_cx06_MA");
  sf_mex_destroy(&c22_u);
  c22_update_debugger_state_c22_cx06_MA(chartInstance);
  sf_mex_destroy(&c22_st);
}

static void finalize_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance)
{
}

static void sf_c22_cx06_MA(SFc22_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c22_previousEvent;
  real_T c22_hoistedGlobal;
  real_T c22_b_hoistedGlobal;
  real_T c22_c_hoistedGlobal;
  real_T c22_d_hoistedGlobal;
  real_T c22_e_hoistedGlobal;
  real_T c22_f_hoistedGlobal;
  real_T c22_voltage;
  real_T c22_currentPlusMinus;
  real_T c22_lowV;
  real_T c22_highV;
  real_T c22_currentBat;
  real_T c22_SOCLast;
  uint32_T c22_debug_family_var_map[9];
  real_T c22_nargin = 6.0;
  real_T c22_nargout = 1.0;
  real_T c22_SOC;
  real_T c22_b;
  real_T c22_y;
  real_T c22_A;
  real_T c22_B;
  real_T c22_x;
  real_T c22_b_y;
  real_T c22_b_x;
  real_T c22_c_y;
  real_T c22_c_x;
  real_T c22_d_y;
  real_T c22_e_y;
  real_T c22_b_b;
  real_T *c22_b_voltage;
  real_T *c22_b_SOC;
  real_T *c22_b_currentPlusMinus;
  real_T *c22_b_lowV;
  real_T *c22_b_highV;
  real_T *c22_b_currentBat;
  real_T *c22_b_SOCLast;
  c22_b_SOCLast = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c22_b_currentBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c22_b_highV = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c22_b_lowV = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c22_b_currentPlusMinus = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c22_b_SOC = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c22_b_voltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,18);
  _SFD_DATA_RANGE_CHECK(*c22_b_voltage, 0U);
  _SFD_DATA_RANGE_CHECK(*c22_b_SOC, 1U);
  _SFD_DATA_RANGE_CHECK(*c22_b_currentPlusMinus, 2U);
  _SFD_DATA_RANGE_CHECK(*c22_b_lowV, 3U);
  _SFD_DATA_RANGE_CHECK(*c22_b_highV, 4U);
  _SFD_DATA_RANGE_CHECK(*c22_b_currentBat, 5U);
  _SFD_DATA_RANGE_CHECK(*c22_b_SOCLast, 6U);
  c22_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,18);
  c22_hoistedGlobal = *c22_b_voltage;
  c22_b_hoistedGlobal = *c22_b_currentPlusMinus;
  c22_c_hoistedGlobal = *c22_b_lowV;
  c22_d_hoistedGlobal = *c22_b_highV;
  c22_e_hoistedGlobal = *c22_b_currentBat;
  c22_f_hoistedGlobal = *c22_b_SOCLast;
  c22_voltage = c22_hoistedGlobal;
  c22_currentPlusMinus = c22_b_hoistedGlobal;
  c22_lowV = c22_c_hoistedGlobal;
  c22_highV = c22_d_hoistedGlobal;
  c22_currentBat = c22_e_hoistedGlobal;
  c22_SOCLast = c22_f_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 9U, 9U, c22_debug_family_names,
    c22_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c22_nargin, c22_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c22_nargout, c22_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c22_voltage, c22_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c22_currentPlusMinus, c22_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c22_lowV, c22_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c22_highV, c22_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c22_currentBat, c22_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c22_SOCLast, c22_sf_marshall, 7U);
  sf_debug_symbol_scope_add_eml(&c22_SOC, c22_sf_marshall, 8U);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0,3);
  if (CV_EML_COND(0, 0, c22_currentBat <= c22_currentPlusMinus)) {
    c22_b = c22_currentPlusMinus;
    c22_y = -1.0 * c22_b;
    if (CV_EML_COND(0, 1, c22_currentBat >= c22_y)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0,4);
      c22_A = c22_voltage - c22_lowV;
      c22_B = c22_highV - c22_lowV;
      c22_x = c22_A;
      c22_b_y = c22_B;
      c22_b_x = c22_x;
      c22_c_y = c22_b_y;
      c22_c_x = c22_b_x;
      c22_d_y = c22_c_y;
      c22_e_y = c22_c_x / c22_d_y;
      c22_b_b = c22_e_y;
      c22_SOC = 100.0 * c22_b_b;
      goto label_1;
    }
  }

  CV_EML_MCDC(0, 0, FALSE);
  CV_EML_IF(0, 0, FALSE);
  _SFD_EML_CALL(0,5);
  if (CV_EML_IF(0, 1, c22_voltage >= 390.0)) {
    _SFD_EML_CALL(0,6);
    c22_SOC = 100.0;
  } else {
    _SFD_EML_CALL(0,8);
    c22_SOC = c22_SOCLast;
  }

 label_1:
  ;
  _SFD_EML_CALL(0,-8);
  sf_debug_symbol_scope_pop();
  *c22_b_SOC = c22_SOC;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,18);
  _sfEvent_ = c22_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c22_machineNumber, uint32_T
  c22_chartNumber)
{
}

static const mxArray *c22_sf_marshall(void *chartInstanceVoid, void *c22_u)
{
  const mxArray *c22_y = NULL;
  real_T c22_b_u;
  const mxArray *c22_b_y = NULL;
  SFc22_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc22_cx06_MAInstanceStruct *)chartInstanceVoid;
  c22_y = NULL;
  c22_b_u = *((real_T *)c22_u);
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", &c22_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_y, c22_b_y);
  return c22_y;
}

const mxArray *sf_c22_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c22_nameCaptureInfo = NULL;
  c22_ResolvedFunctionInfo c22_info[19];
  const mxArray *c22_m0 = NULL;
  int32_T c22_i0;
  c22_ResolvedFunctionInfo *c22_r0;
  c22_nameCaptureInfo = NULL;
  c22_info_helper(c22_info);
  sf_mex_assign(&c22_m0, sf_mex_createstruct("nameCaptureInfo", 1, 19));
  for (c22_i0 = 0; c22_i0 < 19; c22_i0 = c22_i0 + 1) {
    c22_r0 = &c22_info[c22_i0];
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", c22_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c22_r0->context)), "context"
                    , "nameCaptureInfo", c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", c22_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c22_r0->name)), "name",
                    "nameCaptureInfo", c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo",
      c22_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c22_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", c22_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c22_r0->resolved)),
                    "resolved", "nameCaptureInfo", c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", &c22_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", &c22_r0->fileTime1,
      7, 0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo",
                    c22_i0);
    sf_mex_addfield(c22_m0, sf_mex_create("nameCaptureInfo", &c22_r0->fileTime2,
      7, 0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo",
                    c22_i0);
  }

  sf_mex_assign(&c22_nameCaptureInfo, c22_m0);
  return c22_nameCaptureInfo;
}

static void c22_info_helper(c22_ResolvedFunctionInfo c22_info[19])
{
  c22_info[0].context = "";
  c22_info[0].name = "le";
  c22_info[0].dominantType = "double";
  c22_info[0].resolved = "[B]le";
  c22_info[0].fileLength = 0U;
  c22_info[0].fileTime1 = 0U;
  c22_info[0].fileTime2 = 0U;
  c22_info[1].context = "";
  c22_info[1].name = "uminus";
  c22_info[1].dominantType = "double";
  c22_info[1].resolved = "[B]uminus";
  c22_info[1].fileLength = 0U;
  c22_info[1].fileTime1 = 0U;
  c22_info[1].fileTime2 = 0U;
  c22_info[2].context = "";
  c22_info[2].name = "mtimes";
  c22_info[2].dominantType = "double";
  c22_info[2].resolved = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[2].fileLength = 3425U;
  c22_info[2].fileTime1 = 1250697966U;
  c22_info[2].fileTime2 = 0U;
  c22_info[3].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[3].name = "nargin";
  c22_info[3].dominantType = "";
  c22_info[3].resolved = "[B]nargin";
  c22_info[3].fileLength = 0U;
  c22_info[3].fileTime1 = 0U;
  c22_info[3].fileTime2 = 0U;
  c22_info[4].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[4].name = "gt";
  c22_info[4].dominantType = "double";
  c22_info[4].resolved = "[B]gt";
  c22_info[4].fileLength = 0U;
  c22_info[4].fileTime1 = 0U;
  c22_info[4].fileTime2 = 0U;
  c22_info[5].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[5].name = "isa";
  c22_info[5].dominantType = "double";
  c22_info[5].resolved = "[B]isa";
  c22_info[5].fileLength = 0U;
  c22_info[5].fileTime1 = 0U;
  c22_info[5].fileTime2 = 0U;
  c22_info[6].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[6].name = "isinteger";
  c22_info[6].dominantType = "double";
  c22_info[6].resolved = "[B]isinteger";
  c22_info[6].fileLength = 0U;
  c22_info[6].fileTime1 = 0U;
  c22_info[6].fileTime2 = 0U;
  c22_info[7].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[7].name = "isscalar";
  c22_info[7].dominantType = "double";
  c22_info[7].resolved = "[B]isscalar";
  c22_info[7].fileLength = 0U;
  c22_info[7].fileTime1 = 0U;
  c22_info[7].fileTime2 = 0U;
  c22_info[8].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[8].name = "strcmp";
  c22_info[8].dominantType = "char";
  c22_info[8].resolved = "[B]strcmp";
  c22_info[8].fileLength = 0U;
  c22_info[8].fileTime1 = 0U;
  c22_info[8].fileTime2 = 0U;
  c22_info[9].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[9].name = "size";
  c22_info[9].dominantType = "double";
  c22_info[9].resolved = "[B]size";
  c22_info[9].fileLength = 0U;
  c22_info[9].fileTime1 = 0U;
  c22_info[9].fileTime2 = 0U;
  c22_info[10].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[10].name = "eq";
  c22_info[10].dominantType = "double";
  c22_info[10].resolved = "[B]eq";
  c22_info[10].fileLength = 0U;
  c22_info[10].fileTime1 = 0U;
  c22_info[10].fileTime2 = 0U;
  c22_info[11].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[11].name = "class";
  c22_info[11].dominantType = "double";
  c22_info[11].resolved = "[B]class";
  c22_info[11].fileLength = 0U;
  c22_info[11].fileTime1 = 0U;
  c22_info[11].fileTime2 = 0U;
  c22_info[12].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c22_info[12].name = "not";
  c22_info[12].dominantType = "logical";
  c22_info[12].resolved = "[B]not";
  c22_info[12].fileLength = 0U;
  c22_info[12].fileTime1 = 0U;
  c22_info[12].fileTime2 = 0U;
  c22_info[13].context = "";
  c22_info[13].name = "ge";
  c22_info[13].dominantType = "double";
  c22_info[13].resolved = "[B]ge";
  c22_info[13].fileLength = 0U;
  c22_info[13].fileTime1 = 0U;
  c22_info[13].fileTime2 = 0U;
  c22_info[14].context = "";
  c22_info[14].name = "minus";
  c22_info[14].dominantType = "double";
  c22_info[14].resolved = "[B]minus";
  c22_info[14].fileLength = 0U;
  c22_info[14].fileTime1 = 0U;
  c22_info[14].fileTime2 = 0U;
  c22_info[15].context = "";
  c22_info[15].name = "mrdivide";
  c22_info[15].dominantType = "double";
  c22_info[15].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c22_info[15].fileLength = 800U;
  c22_info[15].fileTime1 = 1238459490U;
  c22_info[15].fileTime2 = 0U;
  c22_info[16].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c22_info[16].name = "rdivide";
  c22_info[16].dominantType = "double";
  c22_info[16].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c22_info[16].fileLength = 403U;
  c22_info[16].fileTime1 = 1244760752U;
  c22_info[16].fileTime2 = 0U;
  c22_info[17].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c22_info[17].name = "eml_div";
  c22_info[17].dominantType = "double";
  c22_info[17].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c22_info[17].fileLength = 4269U;
  c22_info[17].fileTime1 = 1228119026U;
  c22_info[17].fileTime2 = 0U;
  c22_info[18].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m/eml_fldiv";
  c22_info[18].name = "isreal";
  c22_info[18].dominantType = "double";
  c22_info[18].resolved = "[B]isreal";
  c22_info[18].fileLength = 0U;
  c22_info[18].fileTime1 = 0U;
  c22_info[18].fileTime2 = 0U;
}

static const mxArray *c22_b_sf_marshall(void *chartInstanceVoid, void *c22_u)
{
  const mxArray *c22_y = NULL;
  boolean_T c22_b_u;
  const mxArray *c22_b_y = NULL;
  SFc22_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc22_cx06_MAInstanceStruct *)chartInstanceVoid;
  c22_y = NULL;
  c22_b_u = *((boolean_T *)c22_u);
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", &c22_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_y, c22_b_y);
  return c22_y;
}

static real_T c22_emlrt_marshallIn(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_SOC, const char_T *c22_name)
{
  real_T c22_y;
  real_T c22_d0;
  sf_mex_import(c22_name, sf_mex_dup(c22_SOC), &c22_d0, 1, 0, 0U, 0, 0U, 0);
  c22_y = c22_d0;
  sf_mex_destroy(&c22_SOC);
  return c22_y;
}

static uint8_T c22_b_emlrt_marshallIn(SFc22_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c22_b_is_active_c22_cx06_MA, const
  char_T *c22_name)
{
  uint8_T c22_y;
  uint8_T c22_u0;
  sf_mex_import(c22_name, sf_mex_dup(c22_b_is_active_c22_cx06_MA), &c22_u0, 1, 3,
                0U, 0, 0U, 0);
  c22_y = c22_u0;
  sf_mex_destroy(&c22_b_is_active_c22_cx06_MA);
  return c22_y;
}

static void init_dsm_address_info(SFc22_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c22_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(953219557U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2658554926U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(16075594U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2938133158U);
}

mxArray *sf_c22_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2702431539U);
    pr[1] = (double)(134295575U);
    pr[2] = (double)(3673335026U);
    pr[3] = (double)(702971978U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c22_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"SOC\",},{M[8],M[0],T\"is_active_c22_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c22_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc22_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc22_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          22,
          1,
          1,
          7,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"voltage",
                              0,(MexFcnForType)c22_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"SOC",0,
                              (MexFcnForType)c22_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "currentPlusMinus",0,(MexFcnForType)
                              c22_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"lowV",0,
                              (MexFcnForType)c22_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"highV",0,
                              (MexFcnForType)c22_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "currentBat",0,(MexFcnForType)c22_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"SOCLast",
                              0,(MexFcnForType)c22_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,2,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,256);
        _SFD_CV_INIT_EML_IF(0,0,77,147,193,255);
        _SFD_CV_INIT_EML_IF(0,1,193,214,228,255);

        {
          static int condStart[] = { 81, 113 };

          static int condEnd[] = { 109, 146 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,81,146,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c22_voltage;
          real_T *c22_SOC;
          real_T *c22_currentPlusMinus;
          real_T *c22_lowV;
          real_T *c22_highV;
          real_T *c22_currentBat;
          real_T *c22_SOCLast;
          c22_SOCLast = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c22_currentBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c22_highV = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c22_lowV = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c22_currentPlusMinus = (real_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c22_SOC = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c22_voltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c22_voltage);
          _SFD_SET_DATA_VALUE_PTR(1U, c22_SOC);
          _SFD_SET_DATA_VALUE_PTR(2U, c22_currentPlusMinus);
          _SFD_SET_DATA_VALUE_PTR(3U, c22_lowV);
          _SFD_SET_DATA_VALUE_PTR(4U, c22_highV);
          _SFD_SET_DATA_VALUE_PTR(5U, c22_currentBat);
          _SFD_SET_DATA_VALUE_PTR(6U, c22_SOCLast);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c22_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc22_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c22_cx06_MA(void *chartInstanceVar)
{
  enable_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c22_cx06_MA(void *chartInstanceVar)
{
  disable_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c22_cx06_MA(void *chartInstanceVar)
{
  sf_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c22_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c22_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c22_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c22_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c22_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c22_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c22_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c22_cx06_MA(S, st);
}

static void sf_opaque_terminate_c22_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc22_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c22_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c22_cx06_MA((SFc22_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c22_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",22);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",22,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",22,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",22,6);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",22,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",22);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2665548239U));
  ssSetChecksum1(S,(1339834342U));
  ssSetChecksum2(S,(3465929330U));
  ssSetChecksum3(S,(3971683609U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c22_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",22);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c22_cx06_MA(SimStruct *S)
{
  SFc22_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc22_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc22_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc22_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c22_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c22_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c22_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c22_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c22_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c22_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c22_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c22_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c22_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c22_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c22_cx06_MA;
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

void c22_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c22_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c22_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c22_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c22_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
