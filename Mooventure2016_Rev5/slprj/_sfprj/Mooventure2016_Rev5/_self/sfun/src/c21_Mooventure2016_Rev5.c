/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c21_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c21_debug_family_names[4] = { "nargin", "nargout",
  "throttleIn", "throttleOut" };

/* Function Declarations */
static void initialize_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c21_update_debugger_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c21_st);
static void finalize_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c21_Mooventure2016_Rev5(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber);
static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static real_T c21_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_throttleOut, const char_T *c21_identifier);
static real_T c21_b_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static int32_T c21_c_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static uint8_T c21_d_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_Mooventure2016_Rev5, const
  char_T *c21_identifier);
static uint8_T c21_e_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c21_is_active_c21_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c21_update_debugger_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  real_T c21_hoistedGlobal;
  real_T c21_u;
  const mxArray *c21_b_y = NULL;
  uint8_T c21_b_hoistedGlobal;
  uint8_T c21_b_u;
  const mxArray *c21_c_y = NULL;
  real_T *c21_throttleOut;
  c21_throttleOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellarray(2));
  c21_hoistedGlobal = *c21_throttleOut;
  c21_u = c21_hoistedGlobal;
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_b_hoistedGlobal = chartInstance->c21_is_active_c21_Mooventure2016_Rev5;
  c21_b_u = c21_b_hoistedGlobal;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y);
  return c21_st;
}

static void set_sim_state_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  real_T *c21_throttleOut;
  c21_throttleOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c21_doneDoubleBufferReInit = TRUE;
  c21_u = sf_mex_dup(c21_st);
  *c21_throttleOut = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_u, 0)), "throttleOut");
  chartInstance->c21_is_active_c21_Mooventure2016_Rev5 = c21_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c21_u, 1)),
     "is_active_c21_Mooventure2016_Rev5");
  sf_mex_destroy(&c21_u);
  c21_update_debugger_state_c21_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void finalize_c21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c21_Mooventure2016_Rev5(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c21_hoistedGlobal;
  real_T c21_throttleIn;
  uint32_T c21_debug_family_var_map[4];
  real_T c21_nargin = 1.0;
  real_T c21_nargout = 1.0;
  real_T c21_throttleOut;
  real_T c21_A;
  real_T c21_x;
  real_T c21_b_x;
  real_T c21_c_x;
  real_T *c21_b_throttleIn;
  real_T *c21_b_throttleOut;
  c21_b_throttleOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_b_throttleIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c21_b_throttleIn, 0U);
  _SFD_DATA_RANGE_CHECK(*c21_b_throttleOut, 1U);
  chartInstance->c21_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  c21_hoistedGlobal = *c21_b_throttleIn;
  c21_throttleIn = c21_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 4U, 4U, c21_debug_family_names,
    c21_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c21_nargin, 0U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c21_nargout, 1U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c21_throttleIn, 2U, c21_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c21_throttleOut, 3U,
    c21_sf_marshallOut, c21_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 2);
  c21_A = c21_throttleIn - 16.0;
  c21_x = c21_A;
  c21_b_x = c21_x;
  c21_c_x = c21_b_x;
  c21_throttleOut = c21_c_x / 91.0;
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, -2);
  sf_debug_symbol_scope_pop();
  *c21_b_throttleOut = c21_throttleOut;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, chartInstance->c21_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc21_Mooventure2016_Rev5
  (SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber)
{
}

static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  real_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(real_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c21_mxArrayOutData, c21_y);
  return c21_mxArrayOutData;
}

static real_T c21_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_throttleOut, const char_T *c21_identifier)
{
  real_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_throttleOut),
    &c21_thisId);
  sf_mex_destroy(&c21_throttleOut);
  return c21_y;
}

static real_T c21_b_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_y;
  real_T c21_d0;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d0, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_throttleOut;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c21_throttleOut = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_throttleOut),
    &c21_thisId);
  sf_mex_destroy(&c21_throttleOut);
  *(real_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

const mxArray *sf_c21_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo;
  c21_ResolvedFunctionInfo c21_info[3];
  c21_ResolvedFunctionInfo (*c21_b_info)[3];
  const mxArray *c21_m0 = NULL;
  int32_T c21_i0;
  c21_ResolvedFunctionInfo *c21_r0;
  c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  c21_b_info = (c21_ResolvedFunctionInfo (*)[3])c21_info;
  (*c21_b_info)[0].context = "";
  (*c21_b_info)[0].name = "mrdivide";
  (*c21_b_info)[0].dominantType = "double";
  (*c21_b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c21_b_info)[0].fileTimeLo = 714027776U;
  (*c21_b_info)[0].fileTimeHi = 30130994U;
  (*c21_b_info)[0].mFileTimeLo = 2169964032U;
  (*c21_b_info)[0].mFileTimeHi = 30114358U;
  (*c21_b_info)[1].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c21_b_info)[1].name = "rdivide";
  (*c21_b_info)[1].dominantType = "double";
  (*c21_b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c21_b_info)[1].fileTimeLo = 444321280U;
  (*c21_b_info)[1].fileTimeHi = 30108070U;
  (*c21_b_info)[1].mFileTimeLo = 0U;
  (*c21_b_info)[1].mFileTimeHi = 0U;
  (*c21_b_info)[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c21_b_info)[2].name = "eml_div";
  (*c21_b_info)[2].dominantType = "double";
  (*c21_b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c21_b_info)[2].fileTimeLo = 3279288576U;
  (*c21_b_info)[2].fileTimeHi = 30108069U;
  (*c21_b_info)[2].mFileTimeLo = 0U;
  (*c21_b_info)[2].mFileTimeHi = 0U;
  sf_mex_assign(&c21_m0, sf_mex_createstruct("nameCaptureInfo", 1, 3));
  for (c21_i0 = 0; c21_i0 < 3; c21_i0++) {
    c21_r0 = &c21_info[c21_i0];
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c21_r0->context)), "context", "nameCaptureInfo",
                    c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c21_r0->name)), "name", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      c21_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c21_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", c21_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c21_r0->resolved)), "resolved",
                    "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", &c21_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo", &c21_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      &c21_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c21_i0);
    sf_mex_addfield(c21_m0, sf_mex_create("nameCaptureInfo",
      &c21_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c21_i0);
  }

  sf_mex_assign(&c21_nameCaptureInfo, c21_m0);
  return c21_nameCaptureInfo;
}

static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData = NULL;
  int32_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_u = *(int32_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c21_mxArrayOutData, c21_y);
  return c21_mxArrayOutData;
}

static int32_T c21_c_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  int32_T c21_y;
  int32_T c21_i1;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_i1, 1, 6, 0U, 0, 0U, 0);
  c21_y = c21_i1;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_sfEvent;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  int32_T c21_y;
  SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c21_b_sfEvent = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_sfEvent),
    &c21_thisId);
  sf_mex_destroy(&c21_b_sfEvent);
  *(int32_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static uint8_T c21_d_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_Mooventure2016_Rev5, const
  char_T *c21_identifier)
{
  uint8_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_y = c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_is_active_c21_Mooventure2016_Rev5), &c21_thisId);
  sf_mex_destroy(&c21_b_is_active_c21_Mooventure2016_Rev5);
  return c21_y;
}

static uint8_T c21_e_emlrt_marshallIn(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u0, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void init_dsm_address_info(SFc21_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c21_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3301231313U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(258047087U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1749577923U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(906278336U);
}

mxArray *sf_c21_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2992323777U);
    pr[1] = (double)(232183577U);
    pr[2] = (double)(2512067629U);
    pr[3] = (double)(3986583070U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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

static const mxArray *sf_get_sim_state_info_c21_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"throttleOut\",},{M[8],M[0],T\"is_active_c21_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           21,
           1,
           1,
           2,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"throttleIn");
          _SFD_SET_DATA_PROPS(1,2,0,1,"throttleOut");
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
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,71);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)c21_sf_marshallIn);

        {
          real_T *c21_throttleIn;
          real_T *c21_throttleOut;
          c21_throttleOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c21_throttleIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c21_throttleIn);
          _SFD_SET_DATA_VALUE_PTR(1U, c21_throttleOut);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c21_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c21_Mooventure2016_Rev5
    ((SFc21_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c21_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c21_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c21_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c21_Mooventure2016_Rev5
    ((SFc21_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c21_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c21_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c21_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c21_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c21_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c21_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c21_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c21_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc21_Mooventure2016_Rev5((SFc21_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_Mooventure2016_Rev5
      ((SFc21_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c21_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",21,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",21,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",21,1);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",21,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",21);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4269758023U));
  ssSetChecksum1(S,(4009282240U));
  ssSetChecksum2(S,(1012855640U));
  ssSetChecksum3(S,(1680489262U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c21_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",21);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c21_Mooventure2016_Rev5(SimStruct *S)
{
  SFc21_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc21_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc21_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc21_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c21_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c21_Mooventure2016_Rev5;
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

void c21_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
