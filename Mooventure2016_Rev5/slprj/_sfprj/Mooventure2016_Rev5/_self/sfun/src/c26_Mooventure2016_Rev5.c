/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c26_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c26_debug_family_names[5] = { "nargin", "nargout", "sHot",
  "pass", "radBlend" };

/* Function Declarations */
static void initialize_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c26_update_debugger_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c26_st);
static void finalize_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c26_Mooventure2016_Rev5(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c26_machineNumber, uint32_T
  c26_chartNumber);
static const mxArray *c26_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData);
static real_T c26_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_radBlend, const char_T *c26_identifier);
static real_T c26_b_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId);
static void c26_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c26_mxArrayInData, const char_T *c26_varName, void *c26_outData);
static const mxArray *c26_b_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData);
static const mxArray *c26_c_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData);
static int32_T c26_c_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId);
static void c26_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c26_mxArrayInData, const char_T *c26_varName, void *c26_outData);
static uint8_T c26_d_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_b_is_active_c26_Mooventure2016_Rev5, const
  char_T *c26_identifier);
static uint8_T c26_e_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId);
static void init_dsm_address_info(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c26_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c26_is_active_c26_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c26_update_debugger_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c26_st;
  const mxArray *c26_y = NULL;
  real_T c26_hoistedGlobal;
  real_T c26_u;
  const mxArray *c26_b_y = NULL;
  uint8_T c26_b_hoistedGlobal;
  uint8_T c26_b_u;
  const mxArray *c26_c_y = NULL;
  real_T *c26_radBlend;
  c26_radBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c26_st = NULL;
  c26_st = NULL;
  c26_y = NULL;
  sf_mex_assign(&c26_y, sf_mex_createcellarray(2));
  c26_hoistedGlobal = *c26_radBlend;
  c26_u = c26_hoistedGlobal;
  c26_b_y = NULL;
  sf_mex_assign(&c26_b_y, sf_mex_create("y", &c26_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c26_y, 0, c26_b_y);
  c26_b_hoistedGlobal = chartInstance->c26_is_active_c26_Mooventure2016_Rev5;
  c26_b_u = c26_b_hoistedGlobal;
  c26_c_y = NULL;
  sf_mex_assign(&c26_c_y, sf_mex_create("y", &c26_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c26_y, 1, c26_c_y);
  sf_mex_assign(&c26_st, c26_y);
  return c26_st;
}

static void set_sim_state_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c26_st)
{
  const mxArray *c26_u;
  real_T *c26_radBlend;
  c26_radBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c26_doneDoubleBufferReInit = TRUE;
  c26_u = sf_mex_dup(c26_st);
  *c26_radBlend = c26_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c26_u, 0)), "radBlend");
  chartInstance->c26_is_active_c26_Mooventure2016_Rev5 = c26_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c26_u, 1)),
     "is_active_c26_Mooventure2016_Rev5");
  sf_mex_destroy(&c26_u);
  c26_update_debugger_state_c26_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c26_st);
}

static void finalize_c26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c26_Mooventure2016_Rev5(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c26_hoistedGlobal;
  real_T c26_b_hoistedGlobal;
  boolean_T c26_sHot;
  real_T c26_pass;
  uint32_T c26_debug_family_var_map[5];
  real_T c26_nargin = 2.0;
  real_T c26_nargout = 1.0;
  real_T c26_radBlend;
  boolean_T *c26_b_sHot;
  real_T *c26_b_radBlend;
  real_T *c26_b_pass;
  c26_b_pass = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c26_b_radBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c26_b_sHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 25U, chartInstance->c26_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c26_b_sHot, 0U);
  _SFD_DATA_RANGE_CHECK(*c26_b_radBlend, 1U);
  _SFD_DATA_RANGE_CHECK(*c26_b_pass, 2U);
  chartInstance->c26_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 25U, chartInstance->c26_sfEvent);
  c26_hoistedGlobal = *c26_b_sHot;
  c26_b_hoistedGlobal = *c26_b_pass;
  c26_sHot = c26_hoistedGlobal;
  c26_pass = c26_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 5U, 5U, c26_debug_family_names,
    c26_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c26_nargin, 0U, c26_sf_marshallOut,
    c26_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c26_nargout, 1U, c26_sf_marshallOut,
    c26_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c26_sHot, 2U, c26_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c26_pass, 3U, c26_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c26_radBlend, 4U, c26_sf_marshallOut,
    c26_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, 3);
  if (CV_EML_IF(0, 0, c26_sHot)) {
    _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, 4);
    c26_radBlend = 20.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, 5);
    if (CV_EML_IF(0, 1, c26_pass >= 30.0)) {
      _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, 6);
      c26_radBlend = c26_pass;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, 8);
      c26_radBlend = 231.0;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c26_sfEvent, -8);
  sf_debug_symbol_scope_pop();
  *c26_b_radBlend = c26_radBlend;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 25U, chartInstance->c26_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc26_Mooventure2016_Rev5
  (SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c26_machineNumber, uint32_T
  c26_chartNumber)
{
}

static const mxArray *c26_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData)
{
  const mxArray *c26_mxArrayOutData = NULL;
  real_T c26_u;
  const mxArray *c26_y = NULL;
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c26_mxArrayOutData = NULL;
  c26_u = *(real_T *)c26_inData;
  c26_y = NULL;
  sf_mex_assign(&c26_y, sf_mex_create("y", &c26_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c26_mxArrayOutData, c26_y);
  return c26_mxArrayOutData;
}

static real_T c26_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_radBlend, const char_T *c26_identifier)
{
  real_T c26_y;
  emlrtMsgIdentifier c26_thisId;
  c26_thisId.fIdentifier = c26_identifier;
  c26_thisId.fParent = NULL;
  c26_y = c26_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c26_radBlend),
    &c26_thisId);
  sf_mex_destroy(&c26_radBlend);
  return c26_y;
}

static real_T c26_b_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId)
{
  real_T c26_y;
  real_T c26_d0;
  sf_mex_import(c26_parentId, sf_mex_dup(c26_u), &c26_d0, 1, 0, 0U, 0, 0U, 0);
  c26_y = c26_d0;
  sf_mex_destroy(&c26_u);
  return c26_y;
}

static void c26_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c26_mxArrayInData, const char_T *c26_varName, void *c26_outData)
{
  const mxArray *c26_radBlend;
  const char_T *c26_identifier;
  emlrtMsgIdentifier c26_thisId;
  real_T c26_y;
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c26_radBlend = sf_mex_dup(c26_mxArrayInData);
  c26_identifier = c26_varName;
  c26_thisId.fIdentifier = c26_identifier;
  c26_thisId.fParent = NULL;
  c26_y = c26_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c26_radBlend),
    &c26_thisId);
  sf_mex_destroy(&c26_radBlend);
  *(real_T *)c26_outData = c26_y;
  sf_mex_destroy(&c26_mxArrayInData);
}

static const mxArray *c26_b_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData)
{
  const mxArray *c26_mxArrayOutData = NULL;
  boolean_T c26_u;
  const mxArray *c26_y = NULL;
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c26_mxArrayOutData = NULL;
  c26_u = *(boolean_T *)c26_inData;
  c26_y = NULL;
  sf_mex_assign(&c26_y, sf_mex_create("y", &c26_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c26_mxArrayOutData, c26_y);
  return c26_mxArrayOutData;
}

const mxArray *sf_c26_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c26_nameCaptureInfo = NULL;
  c26_nameCaptureInfo = NULL;
  sf_mex_assign(&c26_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c26_nameCaptureInfo;
}

static const mxArray *c26_c_sf_marshallOut(void *chartInstanceVoid, void
  *c26_inData)
{
  const mxArray *c26_mxArrayOutData = NULL;
  int32_T c26_u;
  const mxArray *c26_y = NULL;
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c26_mxArrayOutData = NULL;
  c26_u = *(int32_T *)c26_inData;
  c26_y = NULL;
  sf_mex_assign(&c26_y, sf_mex_create("y", &c26_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c26_mxArrayOutData, c26_y);
  return c26_mxArrayOutData;
}

static int32_T c26_c_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId)
{
  int32_T c26_y;
  int32_T c26_i0;
  sf_mex_import(c26_parentId, sf_mex_dup(c26_u), &c26_i0, 1, 6, 0U, 0, 0U, 0);
  c26_y = c26_i0;
  sf_mex_destroy(&c26_u);
  return c26_y;
}

static void c26_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c26_mxArrayInData, const char_T *c26_varName, void *c26_outData)
{
  const mxArray *c26_b_sfEvent;
  const char_T *c26_identifier;
  emlrtMsgIdentifier c26_thisId;
  int32_T c26_y;
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c26_b_sfEvent = sf_mex_dup(c26_mxArrayInData);
  c26_identifier = c26_varName;
  c26_thisId.fIdentifier = c26_identifier;
  c26_thisId.fParent = NULL;
  c26_y = c26_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c26_b_sfEvent),
    &c26_thisId);
  sf_mex_destroy(&c26_b_sfEvent);
  *(int32_T *)c26_outData = c26_y;
  sf_mex_destroy(&c26_mxArrayInData);
}

static uint8_T c26_d_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_b_is_active_c26_Mooventure2016_Rev5, const
  char_T *c26_identifier)
{
  uint8_T c26_y;
  emlrtMsgIdentifier c26_thisId;
  c26_thisId.fIdentifier = c26_identifier;
  c26_thisId.fParent = NULL;
  c26_y = c26_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c26_b_is_active_c26_Mooventure2016_Rev5), &c26_thisId);
  sf_mex_destroy(&c26_b_is_active_c26_Mooventure2016_Rev5);
  return c26_y;
}

static uint8_T c26_e_emlrt_marshallIn(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c26_u, const emlrtMsgIdentifier *c26_parentId)
{
  uint8_T c26_y;
  uint8_T c26_u0;
  sf_mex_import(c26_parentId, sf_mex_dup(c26_u), &c26_u0, 1, 3, 0U, 0, 0U, 0);
  c26_y = c26_u0;
  sf_mex_destroy(&c26_u);
  return c26_y;
}

static void init_dsm_address_info(SFc26_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c26_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4198666827U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1515971937U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(130873982U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1895253081U);
}

mxArray *sf_c26_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3872232360U);
    pr[1] = (double)(984069654U);
    pr[2] = (double)(870277042U);
    pr[3] = (double)(781593655U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

static const mxArray *sf_get_sim_state_info_c26_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"radBlend\",},{M[8],M[0],T\"is_active_c26_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c26_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           26,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"sHot");
          _SFD_SET_DATA_PROPS(1,2,0,1,"radBlend");
          _SFD_SET_DATA_PROPS(2,1,1,0,"pass");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,124);
        _SFD_CV_INIT_EML_IF(0,0,36,44,62,124);
        _SFD_CV_INIT_EML_IF(0,1,62,78,98,124);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c26_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c26_sf_marshallOut,(MexInFcnForType)c26_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c26_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c26_sHot;
          real_T *c26_radBlend;
          real_T *c26_pass;
          c26_pass = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c26_radBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c26_sHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c26_sHot);
          _SFD_SET_DATA_VALUE_PTR(1U, c26_radBlend);
          _SFD_SET_DATA_VALUE_PTR(2U, c26_pass);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c26_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c26_Mooventure2016_Rev5
    ((SFc26_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c26_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c26_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c26_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c26_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c26_Mooventure2016_Rev5
    ((SFc26_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c26_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c26_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c26_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c26_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c26_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c26_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c26_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c26_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc26_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc26_Mooventure2016_Rev5((SFc26_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c26_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c26_Mooventure2016_Rev5
      ((SFc26_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c26_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      26);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",26,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",26,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",26,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",26,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",26);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3828380879U));
  ssSetChecksum1(S,(3256591604U));
  ssSetChecksum2(S,(634444633U));
  ssSetChecksum3(S,(2755235147U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c26_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",26);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c26_Mooventure2016_Rev5(SimStruct *S)
{
  SFc26_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc26_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc26_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc26_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c26_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c26_Mooventure2016_Rev5;
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

void c26_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c26_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c26_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c26_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c26_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
