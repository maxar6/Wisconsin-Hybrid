/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c18_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c18_debug_family_names[5] = { "nargin", "nargout", "brakeIn",
  "inReverse", "brakeOut" };

/* Function Declarations */
static void initialize_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c18_update_debugger_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c18_st);
static void finalize_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c18_Mooventure2016_Rev5(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber);
static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static real_T c18_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_brakeOut, const char_T *c18_identifier);
static real_T c18_b_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static const mxArray *c18_c_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData);
static int32_T c18_c_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData);
static uint8_T c18_d_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_Mooventure2016_Rev5, const
  char_T *c18_identifier);
static uint8_T c18_e_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId);
static void init_dsm_address_info(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c18_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c18_is_active_c18_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c18_update_debugger_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c18_st;
  const mxArray *c18_y = NULL;
  real_T c18_hoistedGlobal;
  real_T c18_u;
  const mxArray *c18_b_y = NULL;
  uint8_T c18_b_hoistedGlobal;
  uint8_T c18_b_u;
  const mxArray *c18_c_y = NULL;
  real_T *c18_brakeOut;
  c18_brakeOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_st = NULL;
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellarray(2));
  c18_hoistedGlobal = *c18_brakeOut;
  c18_u = c18_hoistedGlobal;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_b_hoistedGlobal = chartInstance->c18_is_active_c18_Mooventure2016_Rev5;
  c18_b_u = c18_b_hoistedGlobal;
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", &c18_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 1, c18_c_y);
  sf_mex_assign(&c18_st, c18_y);
  return c18_st;
}

static void set_sim_state_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_u;
  real_T *c18_brakeOut;
  c18_brakeOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c18_doneDoubleBufferReInit = TRUE;
  c18_u = sf_mex_dup(c18_st);
  *c18_brakeOut = c18_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 0)), "brakeOut");
  chartInstance->c18_is_active_c18_Mooventure2016_Rev5 = c18_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 1)),
     "is_active_c18_Mooventure2016_Rev5");
  sf_mex_destroy(&c18_u);
  c18_update_debugger_state_c18_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c18_st);
}

static void finalize_c18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c18_Mooventure2016_Rev5(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c18_hoistedGlobal;
  boolean_T c18_b_hoistedGlobal;
  real_T c18_brakeIn;
  boolean_T c18_inReverse;
  uint32_T c18_debug_family_var_map[5];
  real_T c18_nargin = 2.0;
  real_T c18_nargout = 1.0;
  real_T c18_brakeOut;
  real_T c18_A;
  real_T c18_x;
  real_T c18_b_x;
  real_T c18_c_x;
  real_T c18_y;
  real_T c18_b_A;
  real_T c18_d_x;
  real_T c18_e_x;
  real_T c18_f_x;
  real_T c18_b_y;
  real_T *c18_b_brakeIn;
  real_T *c18_b_brakeOut;
  boolean_T *c18_b_inReverse;
  c18_b_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_b_brakeOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_b_brakeIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c18_b_brakeIn, 0U);
  _SFD_DATA_RANGE_CHECK(*c18_b_brakeOut, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_b_inReverse, 2U);
  chartInstance->c18_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
  c18_hoistedGlobal = *c18_b_brakeIn;
  c18_b_hoistedGlobal = *c18_b_inReverse;
  c18_brakeIn = c18_hoistedGlobal;
  c18_inReverse = c18_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 5U, 5U, c18_debug_family_names,
    c18_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c18_nargin, 0U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c18_nargout, 1U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c18_brakeIn, 2U, c18_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c18_inReverse, 3U, c18_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c18_brakeOut, 4U, c18_sf_marshallOut,
    c18_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 2);
  if (CV_EML_IF(0, 0, CV_EML_MCDC(0, 0, !CV_EML_COND(0, 0, c18_inReverse)))) {
    _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 3);
    c18_A = c18_brakeIn - 23900.0;
    c18_x = c18_A;
    c18_b_x = c18_x;
    c18_c_x = c18_b_x;
    c18_y = c18_c_x / 8900.0;
    c18_brakeOut = 1.0 - c18_y;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, 5);
    c18_b_A = 41700.0 - c18_brakeIn;
    c18_d_x = c18_b_A;
    c18_e_x = c18_d_x;
    c18_f_x = c18_e_x;
    c18_b_y = c18_f_x / 8900.0;
    c18_brakeOut = 1.0 - c18_b_y;
  }

  _SFD_EML_CALL(0U, chartInstance->c18_sfEvent, -5);
  sf_debug_symbol_scope_pop();
  *c18_b_brakeOut = c18_brakeOut;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, chartInstance->c18_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc18_Mooventure2016_Rev5
  (SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber)
{
}

static const mxArray *c18_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData = NULL;
  real_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_u = *(real_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_mxArrayOutData, c18_y);
  return c18_mxArrayOutData;
}

static real_T c18_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_brakeOut, const char_T *c18_identifier)
{
  real_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_brakeOut),
    &c18_thisId);
  sf_mex_destroy(&c18_brakeOut);
  return c18_y;
}

static real_T c18_b_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  real_T c18_y;
  real_T c18_d0;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_d0, 1, 0, 0U, 0, 0U, 0);
  c18_y = c18_d0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_brakeOut;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  real_T c18_y;
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c18_brakeOut = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_brakeOut),
    &c18_thisId);
  sf_mex_destroy(&c18_brakeOut);
  *(real_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

static const mxArray *c18_b_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData = NULL;
  boolean_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_u = *(boolean_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_mxArrayOutData, c18_y);
  return c18_mxArrayOutData;
}

const mxArray *sf_c18_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c18_nameCaptureInfo;
  c18_ResolvedFunctionInfo c18_info[3];
  c18_ResolvedFunctionInfo (*c18_b_info)[3];
  const mxArray *c18_m0 = NULL;
  int32_T c18_i0;
  c18_ResolvedFunctionInfo *c18_r0;
  c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  c18_b_info = (c18_ResolvedFunctionInfo (*)[3])c18_info;
  (*c18_b_info)[0].context = "";
  (*c18_b_info)[0].name = "mrdivide";
  (*c18_b_info)[0].dominantType = "double";
  (*c18_b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c18_b_info)[0].fileTimeLo = 714027776U;
  (*c18_b_info)[0].fileTimeHi = 30130994U;
  (*c18_b_info)[0].mFileTimeLo = 2169964032U;
  (*c18_b_info)[0].mFileTimeHi = 30114358U;
  (*c18_b_info)[1].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c18_b_info)[1].name = "rdivide";
  (*c18_b_info)[1].dominantType = "double";
  (*c18_b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c18_b_info)[1].fileTimeLo = 444321280U;
  (*c18_b_info)[1].fileTimeHi = 30108070U;
  (*c18_b_info)[1].mFileTimeLo = 0U;
  (*c18_b_info)[1].mFileTimeHi = 0U;
  (*c18_b_info)[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c18_b_info)[2].name = "eml_div";
  (*c18_b_info)[2].dominantType = "double";
  (*c18_b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c18_b_info)[2].fileTimeLo = 3279288576U;
  (*c18_b_info)[2].fileTimeHi = 30108069U;
  (*c18_b_info)[2].mFileTimeLo = 0U;
  (*c18_b_info)[2].mFileTimeHi = 0U;
  sf_mex_assign(&c18_m0, sf_mex_createstruct("nameCaptureInfo", 1, 3));
  for (c18_i0 = 0; c18_i0 < 3; c18_i0++) {
    c18_r0 = &c18_info[c18_i0];
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c18_r0->context)), "context", "nameCaptureInfo",
                    c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c18_r0->name)), "name", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      c18_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c18_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", c18_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c18_r0->resolved)), "resolved",
                    "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", &c18_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo", &c18_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      &c18_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c18_i0);
    sf_mex_addfield(c18_m0, sf_mex_create("nameCaptureInfo",
      &c18_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c18_i0);
  }

  sf_mex_assign(&c18_nameCaptureInfo, c18_m0);
  return c18_nameCaptureInfo;
}

static const mxArray *c18_c_sf_marshallOut(void *chartInstanceVoid, void
  *c18_inData)
{
  const mxArray *c18_mxArrayOutData = NULL;
  int32_T c18_u;
  const mxArray *c18_y = NULL;
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c18_mxArrayOutData = NULL;
  c18_u = *(int32_T *)c18_inData;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_create("y", &c18_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_mxArrayOutData, c18_y);
  return c18_mxArrayOutData;
}

static int32_T c18_c_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  int32_T c18_y;
  int32_T c18_i1;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_i1, 1, 6, 0U, 0, 0U, 0);
  c18_y = c18_i1;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void c18_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c18_mxArrayInData, const char_T *c18_varName, void *c18_outData)
{
  const mxArray *c18_b_sfEvent;
  const char_T *c18_identifier;
  emlrtMsgIdentifier c18_thisId;
  int32_T c18_y;
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c18_b_sfEvent = sf_mex_dup(c18_mxArrayInData);
  c18_identifier = c18_varName;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_b_sfEvent),
    &c18_thisId);
  sf_mex_destroy(&c18_b_sfEvent);
  *(int32_T *)c18_outData = c18_y;
  sf_mex_destroy(&c18_mxArrayInData);
}

static uint8_T c18_d_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_Mooventure2016_Rev5, const
  char_T *c18_identifier)
{
  uint8_T c18_y;
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = c18_identifier;
  c18_thisId.fParent = NULL;
  c18_y = c18_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c18_b_is_active_c18_Mooventure2016_Rev5), &c18_thisId);
  sf_mex_destroy(&c18_b_is_active_c18_Mooventure2016_Rev5);
  return c18_y;
}

static uint8_T c18_e_emlrt_marshallIn(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c18_u, const emlrtMsgIdentifier *c18_parentId)
{
  uint8_T c18_y;
  uint8_T c18_u0;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_u), &c18_u0, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_u0;
  sf_mex_destroy(&c18_u);
  return c18_y;
}

static void init_dsm_address_info(SFc18_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c18_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3480040429U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(195859385U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1319284531U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2447605669U);
}

mxArray *sf_c18_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3013838583U);
    pr[1] = (double)(81674881U);
    pr[2] = (double)(1022337466U);
    pr[3] = (double)(2807674272U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
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

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c18_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"brakeOut\",},{M[8],M[0],T\"is_active_c18_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           18,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"brakeIn");
          _SFD_SET_DATA_PROPS(1,2,0,1,"brakeOut");
          _SFD_SET_DATA_PROPS(2,1,1,0,"inReverse");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,1,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,145);
        _SFD_CV_INIT_EML_IF(0,0,44,58,98,145);

        {
          static int condStart[] = { 48 };

          static int condEnd[] = { 57 };

          static int pfixExpr[] = { 0, -1 };

          _SFD_CV_INIT_EML_MCDC(0,0,47,57,1,0,&(condStart[0]),&(condEnd[0]),2,
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_sf_marshallOut,(MexInFcnForType)c18_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c18_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c18_brakeIn;
          real_T *c18_brakeOut;
          boolean_T *c18_inReverse;
          c18_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c18_brakeOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c18_brakeIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c18_brakeIn);
          _SFD_SET_DATA_VALUE_PTR(1U, c18_brakeOut);
          _SFD_SET_DATA_VALUE_PTR(2U, c18_inReverse);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c18_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c18_Mooventure2016_Rev5
    ((SFc18_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c18_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c18_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c18_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c18_Mooventure2016_Rev5
    ((SFc18_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c18_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c18_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c18_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c18_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c18_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c18_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc18_Mooventure2016_Rev5((SFc18_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_Mooventure2016_Rev5
      ((SFc18_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c18_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      18);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",18,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",18,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",18,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",18,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",18);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3834403251U));
  ssSetChecksum1(S,(485204860U));
  ssSetChecksum2(S,(1951450795U));
  ssSetChecksum3(S,(47554401U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c18_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",18);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c18_Mooventure2016_Rev5(SimStruct *S)
{
  SFc18_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc18_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc18_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc18_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c18_Mooventure2016_Rev5;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c18_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c18_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
