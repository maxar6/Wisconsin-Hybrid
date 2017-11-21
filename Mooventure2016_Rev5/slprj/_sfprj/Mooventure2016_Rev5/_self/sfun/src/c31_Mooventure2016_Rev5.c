/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c31_Mooventure2016_Rev5.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c31_debug_family_names[5] = { "nargin", "nargout",
  "maxTorque", "torqueIn", "torqueOut" };

/* Function Declarations */
static void initialize_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c31_update_debugger_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c31_st);
static void finalize_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c31_Mooventure2016_Rev5(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c31_machineNumber, uint32_T
  c31_chartNumber);
static const mxArray *c31_sf_marshallOut(void *chartInstanceVoid, void
  *c31_inData);
static real_T c31_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_torqueOut, const char_T *c31_identifier);
static real_T c31_b_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId);
static void c31_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c31_mxArrayInData, const char_T *c31_varName, void *c31_outData);
static const mxArray *c31_b_sf_marshallOut(void *chartInstanceVoid, void
  *c31_inData);
static int32_T c31_c_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId);
static void c31_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c31_mxArrayInData, const char_T *c31_varName, void *c31_outData);
static uint8_T c31_d_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_b_is_active_c31_Mooventure2016_Rev5, const
  char_T *c31_identifier);
static uint8_T c31_e_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId);
static void init_dsm_address_info(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c31_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c31_is_active_c31_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c31_update_debugger_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c31_st;
  const mxArray *c31_y = NULL;
  real_T c31_hoistedGlobal;
  real_T c31_u;
  const mxArray *c31_b_y = NULL;
  uint8_T c31_b_hoistedGlobal;
  uint8_T c31_b_u;
  const mxArray *c31_c_y = NULL;
  real_T *c31_torqueOut;
  c31_torqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c31_st = NULL;
  c31_st = NULL;
  c31_y = NULL;
  sf_mex_assign(&c31_y, sf_mex_createcellarray(2));
  c31_hoistedGlobal = *c31_torqueOut;
  c31_u = c31_hoistedGlobal;
  c31_b_y = NULL;
  sf_mex_assign(&c31_b_y, sf_mex_create("y", &c31_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c31_y, 0, c31_b_y);
  c31_b_hoistedGlobal = chartInstance->c31_is_active_c31_Mooventure2016_Rev5;
  c31_b_u = c31_b_hoistedGlobal;
  c31_c_y = NULL;
  sf_mex_assign(&c31_c_y, sf_mex_create("y", &c31_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c31_y, 1, c31_c_y);
  sf_mex_assign(&c31_st, c31_y);
  return c31_st;
}

static void set_sim_state_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c31_st)
{
  const mxArray *c31_u;
  real_T *c31_torqueOut;
  c31_torqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c31_doneDoubleBufferReInit = TRUE;
  c31_u = sf_mex_dup(c31_st);
  *c31_torqueOut = c31_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c31_u, 0)), "torqueOut");
  chartInstance->c31_is_active_c31_Mooventure2016_Rev5 = c31_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c31_u, 1)),
     "is_active_c31_Mooventure2016_Rev5");
  sf_mex_destroy(&c31_u);
  c31_update_debugger_state_c31_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c31_st);
}

static void finalize_c31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c31_Mooventure2016_Rev5(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c31_hoistedGlobal;
  real_T c31_b_hoistedGlobal;
  real_T c31_maxTorque;
  real_T c31_torqueIn;
  uint32_T c31_debug_family_var_map[5];
  real_T c31_nargin = 2.0;
  real_T c31_nargout = 1.0;
  real_T c31_torqueOut;
  real_T c31_x;
  real_T c31_b_x;
  real_T c31_y;
  real_T c31_c_x;
  real_T c31_d_x;
  real_T c31_b_y;
  real_T c31_e_x;
  real_T c31_f_x;
  real_T c31_a;
  real_T c31_b;
  real_T *c31_b_maxTorque;
  real_T *c31_b_torqueIn;
  real_T *c31_b_torqueOut;
  c31_b_torqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c31_b_torqueIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c31_b_maxTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 30U, chartInstance->c31_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c31_b_maxTorque, 0U);
  _SFD_DATA_RANGE_CHECK(*c31_b_torqueIn, 1U);
  _SFD_DATA_RANGE_CHECK(*c31_b_torqueOut, 2U);
  chartInstance->c31_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 30U, chartInstance->c31_sfEvent);
  c31_hoistedGlobal = *c31_b_maxTorque;
  c31_b_hoistedGlobal = *c31_b_torqueIn;
  c31_maxTorque = c31_hoistedGlobal;
  c31_torqueIn = c31_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 5U, 5U, c31_debug_family_names,
    c31_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c31_nargin, 0U, c31_sf_marshallOut,
    c31_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c31_nargout, 1U, c31_sf_marshallOut,
    c31_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c31_maxTorque, 2U, c31_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c31_torqueIn, 3U, c31_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c31_torqueOut, 4U,
    c31_sf_marshallOut, c31_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, 3);
  c31_x = c31_torqueIn;
  c31_b_x = c31_x;
  c31_y = muDoubleScalarAbs(c31_b_x);
  if (CV_EML_IF(0, 0, c31_y < c31_maxTorque)) {
    _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, 4);
    c31_torqueOut = c31_torqueIn;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, 5);
    c31_c_x = c31_torqueIn;
    c31_d_x = c31_c_x;
    c31_b_y = muDoubleScalarAbs(c31_d_x);
    if (CV_EML_IF(0, 1, c31_b_y >= c31_maxTorque)) {
      _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, 6);
      c31_e_x = c31_torqueIn;
      c31_f_x = c31_e_x;
      if (c31_f_x > 0.0) {
        c31_f_x = 1.0;
      } else if (c31_f_x < 0.0) {
        c31_f_x = -1.0;
      } else {
        if (c31_f_x == 0.0) {
          c31_f_x = 0.0;
        }
      }

      c31_a = c31_maxTorque;
      c31_b = c31_f_x;
      c31_torqueOut = c31_a * c31_b;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, 8);
      c31_torqueOut = c31_torqueIn;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c31_sfEvent, -8);
  sf_debug_symbol_scope_pop();
  *c31_b_torqueOut = c31_torqueOut;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, chartInstance->c31_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc31_Mooventure2016_Rev5
  (SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c31_machineNumber, uint32_T
  c31_chartNumber)
{
}

static const mxArray *c31_sf_marshallOut(void *chartInstanceVoid, void
  *c31_inData)
{
  const mxArray *c31_mxArrayOutData = NULL;
  real_T c31_u;
  const mxArray *c31_y = NULL;
  SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c31_mxArrayOutData = NULL;
  c31_u = *(real_T *)c31_inData;
  c31_y = NULL;
  sf_mex_assign(&c31_y, sf_mex_create("y", &c31_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c31_mxArrayOutData, c31_y);
  return c31_mxArrayOutData;
}

static real_T c31_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_torqueOut, const char_T *c31_identifier)
{
  real_T c31_y;
  emlrtMsgIdentifier c31_thisId;
  c31_thisId.fIdentifier = c31_identifier;
  c31_thisId.fParent = NULL;
  c31_y = c31_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c31_torqueOut),
    &c31_thisId);
  sf_mex_destroy(&c31_torqueOut);
  return c31_y;
}

static real_T c31_b_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId)
{
  real_T c31_y;
  real_T c31_d0;
  sf_mex_import(c31_parentId, sf_mex_dup(c31_u), &c31_d0, 1, 0, 0U, 0, 0U, 0);
  c31_y = c31_d0;
  sf_mex_destroy(&c31_u);
  return c31_y;
}

static void c31_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c31_mxArrayInData, const char_T *c31_varName, void *c31_outData)
{
  const mxArray *c31_torqueOut;
  const char_T *c31_identifier;
  emlrtMsgIdentifier c31_thisId;
  real_T c31_y;
  SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c31_torqueOut = sf_mex_dup(c31_mxArrayInData);
  c31_identifier = c31_varName;
  c31_thisId.fIdentifier = c31_identifier;
  c31_thisId.fParent = NULL;
  c31_y = c31_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c31_torqueOut),
    &c31_thisId);
  sf_mex_destroy(&c31_torqueOut);
  *(real_T *)c31_outData = c31_y;
  sf_mex_destroy(&c31_mxArrayInData);
}

const mxArray *sf_c31_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c31_nameCaptureInfo;
  c31_ResolvedFunctionInfo c31_info[5];
  c31_ResolvedFunctionInfo (*c31_b_info)[5];
  const mxArray *c31_m0 = NULL;
  int32_T c31_i0;
  c31_ResolvedFunctionInfo *c31_r0;
  c31_nameCaptureInfo = NULL;
  c31_nameCaptureInfo = NULL;
  c31_b_info = (c31_ResolvedFunctionInfo (*)[5])c31_info;
  (*c31_b_info)[0].context = "";
  (*c31_b_info)[0].name = "abs";
  (*c31_b_info)[0].dominantType = "double";
  (*c31_b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  (*c31_b_info)[0].fileTimeLo = 3239288576U;
  (*c31_b_info)[0].fileTimeHi = 30108069U;
  (*c31_b_info)[0].mFileTimeLo = 0U;
  (*c31_b_info)[0].mFileTimeHi = 0U;
  (*c31_b_info)[1].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  (*c31_b_info)[1].name = "eml_scalar_abs";
  (*c31_b_info)[1].dominantType = "double";
  (*c31_b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  (*c31_b_info)[1].fileTimeLo = 3419288576U;
  (*c31_b_info)[1].fileTimeHi = 30108069U;
  (*c31_b_info)[1].mFileTimeLo = 0U;
  (*c31_b_info)[1].mFileTimeHi = 0U;
  (*c31_b_info)[2].context = "";
  (*c31_b_info)[2].name = "sign";
  (*c31_b_info)[2].dominantType = "double";
  (*c31_b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  (*c31_b_info)[2].fileTimeLo = 3799288576U;
  (*c31_b_info)[2].fileTimeHi = 30108069U;
  (*c31_b_info)[2].mFileTimeLo = 0U;
  (*c31_b_info)[2].mFileTimeHi = 0U;
  (*c31_b_info)[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  (*c31_b_info)[3].name = "eml_scalar_sign";
  (*c31_b_info)[3].dominantType = "double";
  (*c31_b_info)[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sign.m";
  (*c31_b_info)[3].fileTimeLo = 3659288576U;
  (*c31_b_info)[3].fileTimeHi = 30108069U;
  (*c31_b_info)[3].mFileTimeLo = 0U;
  (*c31_b_info)[3].mFileTimeHi = 0U;
  (*c31_b_info)[4].context = "";
  (*c31_b_info)[4].name = "mtimes";
  (*c31_b_info)[4].dominantType = "double";
  (*c31_b_info)[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c31_b_info)[4].fileTimeLo = 2169964032U;
  (*c31_b_info)[4].fileTimeHi = 30114358U;
  (*c31_b_info)[4].mFileTimeLo = 0U;
  (*c31_b_info)[4].mFileTimeHi = 0U;
  sf_mex_assign(&c31_m0, sf_mex_createstruct("nameCaptureInfo", 1, 5));
  for (c31_i0 = 0; c31_i0 < 5; c31_i0++) {
    c31_r0 = &c31_info[c31_i0];
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo", c31_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c31_r0->context)), "context", "nameCaptureInfo",
                    c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo", c31_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c31_r0->name)), "name", "nameCaptureInfo", c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo",
      c31_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c31_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo", c31_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c31_r0->resolved)), "resolved",
                    "nameCaptureInfo", c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo", &c31_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo", &c31_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo",
      &c31_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c31_i0);
    sf_mex_addfield(c31_m0, sf_mex_create("nameCaptureInfo",
      &c31_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c31_i0);
  }

  sf_mex_assign(&c31_nameCaptureInfo, c31_m0);
  return c31_nameCaptureInfo;
}

static const mxArray *c31_b_sf_marshallOut(void *chartInstanceVoid, void
  *c31_inData)
{
  const mxArray *c31_mxArrayOutData = NULL;
  int32_T c31_u;
  const mxArray *c31_y = NULL;
  SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c31_mxArrayOutData = NULL;
  c31_u = *(int32_T *)c31_inData;
  c31_y = NULL;
  sf_mex_assign(&c31_y, sf_mex_create("y", &c31_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c31_mxArrayOutData, c31_y);
  return c31_mxArrayOutData;
}

static int32_T c31_c_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId)
{
  int32_T c31_y;
  int32_T c31_i1;
  sf_mex_import(c31_parentId, sf_mex_dup(c31_u), &c31_i1, 1, 6, 0U, 0, 0U, 0);
  c31_y = c31_i1;
  sf_mex_destroy(&c31_u);
  return c31_y;
}

static void c31_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c31_mxArrayInData, const char_T *c31_varName, void *c31_outData)
{
  const mxArray *c31_b_sfEvent;
  const char_T *c31_identifier;
  emlrtMsgIdentifier c31_thisId;
  int32_T c31_y;
  SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c31_b_sfEvent = sf_mex_dup(c31_mxArrayInData);
  c31_identifier = c31_varName;
  c31_thisId.fIdentifier = c31_identifier;
  c31_thisId.fParent = NULL;
  c31_y = c31_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c31_b_sfEvent),
    &c31_thisId);
  sf_mex_destroy(&c31_b_sfEvent);
  *(int32_T *)c31_outData = c31_y;
  sf_mex_destroy(&c31_mxArrayInData);
}

static uint8_T c31_d_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_b_is_active_c31_Mooventure2016_Rev5, const
  char_T *c31_identifier)
{
  uint8_T c31_y;
  emlrtMsgIdentifier c31_thisId;
  c31_thisId.fIdentifier = c31_identifier;
  c31_thisId.fParent = NULL;
  c31_y = c31_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c31_b_is_active_c31_Mooventure2016_Rev5), &c31_thisId);
  sf_mex_destroy(&c31_b_is_active_c31_Mooventure2016_Rev5);
  return c31_y;
}

static uint8_T c31_e_emlrt_marshallIn(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c31_u, const emlrtMsgIdentifier *c31_parentId)
{
  uint8_T c31_y;
  uint8_T c31_u0;
  sf_mex_import(c31_parentId, sf_mex_dup(c31_u), &c31_u0, 1, 3, 0U, 0, 0U, 0);
  c31_y = c31_u0;
  sf_mex_destroy(&c31_u);
  return c31_y;
}

static void init_dsm_address_info(SFc31_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c31_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1079921954U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1186546150U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3225755982U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3749512839U);
}

mxArray *sf_c31_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2926434833U);
    pr[1] = (double)(2034967966U);
    pr[2] = (double)(532188510U);
    pr[3] = (double)(3252108184U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

static const mxArray *sf_get_sim_state_info_c31_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"torqueOut\",},{M[8],M[0],T\"is_active_c31_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c31_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           31,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"maxTorque");
          _SFD_SET_DATA_PROPS(1,1,1,0,"torqueIn");
          _SFD_SET_DATA_PROPS(2,2,0,1,"torqueOut");
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
        _SFD_CV_INIT_EML(0,1,2,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,214);
        _SFD_CV_INIT_EML_IF(0,0,47,76,103,213);
        _SFD_CV_INIT_EML_IF(0,1,103,136,179,213);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c31_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c31_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c31_sf_marshallOut,(MexInFcnForType)c31_sf_marshallIn);

        {
          real_T *c31_maxTorque;
          real_T *c31_torqueIn;
          real_T *c31_torqueOut;
          c31_torqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c31_torqueIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c31_maxTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c31_maxTorque);
          _SFD_SET_DATA_VALUE_PTR(1U, c31_torqueIn);
          _SFD_SET_DATA_VALUE_PTR(2U, c31_torqueOut);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c31_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c31_Mooventure2016_Rev5
    ((SFc31_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c31_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c31_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c31_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c31_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c31_Mooventure2016_Rev5
    ((SFc31_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c31_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c31_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c31_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c31_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c31_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c31_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c31_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c31_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc31_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc31_Mooventure2016_Rev5((SFc31_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c31_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c31_Mooventure2016_Rev5
      ((SFc31_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c31_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      31);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",31,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",31,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",31,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",31,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",31);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3285068369U));
  ssSetChecksum1(S,(4055385406U));
  ssSetChecksum2(S,(3854432111U));
  ssSetChecksum3(S,(3854057781U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c31_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",31);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c31_Mooventure2016_Rev5(SimStruct *S)
{
  SFc31_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc31_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc31_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc31_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c31_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c31_Mooventure2016_Rev5;
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

void c31_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c31_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c31_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c31_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c31_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
