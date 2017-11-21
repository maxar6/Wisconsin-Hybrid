/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c50_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c50_debug_family_names[5] = { "nargin", "nargout",
  "threshold", "MPGe", "color" };

/* Function Declarations */
static void initialize_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c50_update_debugger_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c50_st);
static void finalize_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c50_Mooventure2016_Rev5(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c50_machineNumber, uint32_T
  c50_chartNumber);
static const mxArray *c50_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData);
static real_T c50_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_color, const char_T *c50_identifier);
static real_T c50_b_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId);
static void c50_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c50_mxArrayInData, const char_T *c50_varName, void *c50_outData);
static const mxArray *c50_b_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData);
static const mxArray *c50_c_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData);
static int32_T c50_c_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId);
static void c50_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c50_mxArrayInData, const char_T *c50_varName, void *c50_outData);
static uint8_T c50_d_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_b_is_active_c50_Mooventure2016_Rev5, const
  char_T *c50_identifier);
static uint8_T c50_e_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId);
static void init_dsm_address_info(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c50_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c50_is_active_c50_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c50_update_debugger_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c50_st;
  const mxArray *c50_y = NULL;
  real_T c50_hoistedGlobal;
  real_T c50_u;
  const mxArray *c50_b_y = NULL;
  uint8_T c50_b_hoistedGlobal;
  uint8_T c50_b_u;
  const mxArray *c50_c_y = NULL;
  real_T *c50_color;
  c50_color = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c50_st = NULL;
  c50_st = NULL;
  c50_y = NULL;
  sf_mex_assign(&c50_y, sf_mex_createcellarray(2));
  c50_hoistedGlobal = *c50_color;
  c50_u = c50_hoistedGlobal;
  c50_b_y = NULL;
  sf_mex_assign(&c50_b_y, sf_mex_create("y", &c50_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c50_y, 0, c50_b_y);
  c50_b_hoistedGlobal = chartInstance->c50_is_active_c50_Mooventure2016_Rev5;
  c50_b_u = c50_b_hoistedGlobal;
  c50_c_y = NULL;
  sf_mex_assign(&c50_c_y, sf_mex_create("y", &c50_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c50_y, 1, c50_c_y);
  sf_mex_assign(&c50_st, c50_y);
  return c50_st;
}

static void set_sim_state_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c50_st)
{
  const mxArray *c50_u;
  real_T *c50_color;
  c50_color = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c50_doneDoubleBufferReInit = TRUE;
  c50_u = sf_mex_dup(c50_st);
  *c50_color = c50_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c50_u, 0)), "color");
  chartInstance->c50_is_active_c50_Mooventure2016_Rev5 = c50_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c50_u, 1)),
     "is_active_c50_Mooventure2016_Rev5");
  sf_mex_destroy(&c50_u);
  c50_update_debugger_state_c50_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c50_st);
}

static void finalize_c50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c50_Mooventure2016_Rev5(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  int32_T c50_i0;
  real_T c50_hoistedGlobal;
  real_T c50_threshold;
  int32_T c50_i1;
  real_T c50_MPGe[15];
  uint32_T c50_debug_family_var_map[5];
  real_T c50_nargin = 2.0;
  real_T c50_nargout = 1.0;
  real_T c50_color;
  real_T *c50_b_threshold;
  real_T *c50_b_color;
  real_T (*c50_b_MPGe)[15];
  c50_b_color = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c50_b_MPGe = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
  c50_b_threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 49U, chartInstance->c50_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c50_b_threshold, 0U);
  for (c50_i0 = 0; c50_i0 < 15; c50_i0++) {
    _SFD_DATA_RANGE_CHECK((*c50_b_MPGe)[c50_i0], 1U);
  }

  _SFD_DATA_RANGE_CHECK(*c50_b_color, 2U);
  chartInstance->c50_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 49U, chartInstance->c50_sfEvent);
  c50_hoistedGlobal = *c50_b_threshold;
  c50_threshold = c50_hoistedGlobal;
  for (c50_i1 = 0; c50_i1 < 15; c50_i1++) {
    c50_MPGe[c50_i1] = (*c50_b_MPGe)[c50_i1];
  }

  sf_debug_symbol_scope_push_eml(0U, 5U, 5U, c50_debug_family_names,
    c50_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c50_nargin, 0U, c50_sf_marshallOut,
    c50_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c50_nargout, 1U, c50_sf_marshallOut,
    c50_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c50_threshold, 2U, c50_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(c50_MPGe, 3U, c50_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c50_color, 4U, c50_sf_marshallOut,
    c50_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c50_sfEvent, 3);
  if (CV_EML_IF(0, 0, c50_MPGe[0] >= c50_threshold)) {
    _SFD_EML_CALL(0U, chartInstance->c50_sfEvent, 4);
    c50_color = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c50_sfEvent, 6);
    c50_color = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c50_sfEvent, -6);
  sf_debug_symbol_scope_pop();
  *c50_b_color = c50_color;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 49U, chartInstance->c50_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc50_Mooventure2016_Rev5
  (SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c50_machineNumber, uint32_T
  c50_chartNumber)
{
}

static const mxArray *c50_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData)
{
  const mxArray *c50_mxArrayOutData = NULL;
  real_T c50_u;
  const mxArray *c50_y = NULL;
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c50_mxArrayOutData = NULL;
  c50_u = *(real_T *)c50_inData;
  c50_y = NULL;
  sf_mex_assign(&c50_y, sf_mex_create("y", &c50_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c50_mxArrayOutData, c50_y);
  return c50_mxArrayOutData;
}

static real_T c50_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_color, const char_T *c50_identifier)
{
  real_T c50_y;
  emlrtMsgIdentifier c50_thisId;
  c50_thisId.fIdentifier = c50_identifier;
  c50_thisId.fParent = NULL;
  c50_y = c50_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c50_color),
    &c50_thisId);
  sf_mex_destroy(&c50_color);
  return c50_y;
}

static real_T c50_b_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId)
{
  real_T c50_y;
  real_T c50_d0;
  sf_mex_import(c50_parentId, sf_mex_dup(c50_u), &c50_d0, 1, 0, 0U, 0, 0U, 0);
  c50_y = c50_d0;
  sf_mex_destroy(&c50_u);
  return c50_y;
}

static void c50_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c50_mxArrayInData, const char_T *c50_varName, void *c50_outData)
{
  const mxArray *c50_color;
  const char_T *c50_identifier;
  emlrtMsgIdentifier c50_thisId;
  real_T c50_y;
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c50_color = sf_mex_dup(c50_mxArrayInData);
  c50_identifier = c50_varName;
  c50_thisId.fIdentifier = c50_identifier;
  c50_thisId.fParent = NULL;
  c50_y = c50_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c50_color),
    &c50_thisId);
  sf_mex_destroy(&c50_color);
  *(real_T *)c50_outData = c50_y;
  sf_mex_destroy(&c50_mxArrayInData);
}

static const mxArray *c50_b_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData)
{
  const mxArray *c50_mxArrayOutData = NULL;
  int32_T c50_i2;
  real_T c50_b_inData[15];
  int32_T c50_i3;
  real_T c50_u[15];
  const mxArray *c50_y = NULL;
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c50_mxArrayOutData = NULL;
  for (c50_i2 = 0; c50_i2 < 15; c50_i2++) {
    c50_b_inData[c50_i2] = (*(real_T (*)[15])c50_inData)[c50_i2];
  }

  for (c50_i3 = 0; c50_i3 < 15; c50_i3++) {
    c50_u[c50_i3] = c50_b_inData[c50_i3];
  }

  c50_y = NULL;
  sf_mex_assign(&c50_y, sf_mex_create("y", c50_u, 0, 0U, 1U, 0U, 2, 15, 1));
  sf_mex_assign(&c50_mxArrayOutData, c50_y);
  return c50_mxArrayOutData;
}

const mxArray *sf_c50_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c50_nameCaptureInfo = NULL;
  c50_nameCaptureInfo = NULL;
  sf_mex_assign(&c50_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c50_nameCaptureInfo;
}

static const mxArray *c50_c_sf_marshallOut(void *chartInstanceVoid, void
  *c50_inData)
{
  const mxArray *c50_mxArrayOutData = NULL;
  int32_T c50_u;
  const mxArray *c50_y = NULL;
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c50_mxArrayOutData = NULL;
  c50_u = *(int32_T *)c50_inData;
  c50_y = NULL;
  sf_mex_assign(&c50_y, sf_mex_create("y", &c50_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c50_mxArrayOutData, c50_y);
  return c50_mxArrayOutData;
}

static int32_T c50_c_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId)
{
  int32_T c50_y;
  int32_T c50_i4;
  sf_mex_import(c50_parentId, sf_mex_dup(c50_u), &c50_i4, 1, 6, 0U, 0, 0U, 0);
  c50_y = c50_i4;
  sf_mex_destroy(&c50_u);
  return c50_y;
}

static void c50_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c50_mxArrayInData, const char_T *c50_varName, void *c50_outData)
{
  const mxArray *c50_b_sfEvent;
  const char_T *c50_identifier;
  emlrtMsgIdentifier c50_thisId;
  int32_T c50_y;
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c50_b_sfEvent = sf_mex_dup(c50_mxArrayInData);
  c50_identifier = c50_varName;
  c50_thisId.fIdentifier = c50_identifier;
  c50_thisId.fParent = NULL;
  c50_y = c50_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c50_b_sfEvent),
    &c50_thisId);
  sf_mex_destroy(&c50_b_sfEvent);
  *(int32_T *)c50_outData = c50_y;
  sf_mex_destroy(&c50_mxArrayInData);
}

static uint8_T c50_d_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_b_is_active_c50_Mooventure2016_Rev5, const
  char_T *c50_identifier)
{
  uint8_T c50_y;
  emlrtMsgIdentifier c50_thisId;
  c50_thisId.fIdentifier = c50_identifier;
  c50_thisId.fParent = NULL;
  c50_y = c50_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c50_b_is_active_c50_Mooventure2016_Rev5), &c50_thisId);
  sf_mex_destroy(&c50_b_is_active_c50_Mooventure2016_Rev5);
  return c50_y;
}

static uint8_T c50_e_emlrt_marshallIn(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c50_u, const emlrtMsgIdentifier *c50_parentId)
{
  uint8_T c50_y;
  uint8_T c50_u0;
  sf_mex_import(c50_parentId, sf_mex_dup(c50_u), &c50_u0, 1, 3, 0U, 0, 0U, 0);
  c50_y = c50_u0;
  sf_mex_destroy(&c50_u);
  return c50_y;
}

static void init_dsm_address_info(SFc50_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c50_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1822014213U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2519462691U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3547793457U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2668389008U);
}

mxArray *sf_c50_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1220544836U);
    pr[1] = (double)(2272469773U);
    pr[2] = (double)(2446326427U);
    pr[3] = (double)(1211848701U);
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
      pr[0] = (double)(15);
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

static const mxArray *sf_get_sim_state_info_c50_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"color\",},{M[8],M[0],T\"is_active_c50_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c50_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           50,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"threshold");
          _SFD_SET_DATA_PROPS(1,1,1,0,"MPGe");
          _SFD_SET_DATA_PROPS(2,2,0,1,"color");
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
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,100);
        _SFD_CV_INIT_EML_IF(0,0,39,62,78,100);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c50_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 15;
          dimVector[1]= 1;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c50_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c50_sf_marshallOut,(MexInFcnForType)c50_sf_marshallIn);

        {
          real_T *c50_threshold;
          real_T *c50_color;
          real_T (*c50_MPGe)[15];
          c50_color = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c50_MPGe = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
          c50_threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c50_threshold);
          _SFD_SET_DATA_VALUE_PTR(1U, *c50_MPGe);
          _SFD_SET_DATA_VALUE_PTR(2U, c50_color);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c50_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c50_Mooventure2016_Rev5
    ((SFc50_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c50_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c50_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c50_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c50_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c50_Mooventure2016_Rev5
    ((SFc50_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c50_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c50_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c50_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c50_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c50_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c50_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c50_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c50_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc50_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc50_Mooventure2016_Rev5((SFc50_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c50_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c50_Mooventure2016_Rev5
      ((SFc50_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c50_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      50);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",50,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",50,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",50,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",50,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",50);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(351289632U));
  ssSetChecksum1(S,(2565944255U));
  ssSetChecksum2(S,(3062328552U));
  ssSetChecksum3(S,(746117906U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c50_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",50);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c50_Mooventure2016_Rev5(SimStruct *S)
{
  SFc50_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc50_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc50_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc50_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c50_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c50_Mooventure2016_Rev5;
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

void c50_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c50_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c50_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c50_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c50_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
