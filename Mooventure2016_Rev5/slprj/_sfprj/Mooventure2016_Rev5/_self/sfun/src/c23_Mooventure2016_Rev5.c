/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c23_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c23_debug_family_names[7] = { "nargin", "nargout", "currPos",
  "posRequest", "hyst", "motorEnable", "motorDirection" };

/* Function Declarations */
static void initialize_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c23_update_debugger_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c23_st);
static void finalize_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c23_Mooventure2016_Rev5(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber);
static const mxArray *c23_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData);
static real_T c23_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_motorDirection, const char_T
  *c23_identifier);
static real_T c23_b_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void c23_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData);
static const mxArray *c23_b_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData);
static int32_T c23_c_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void c23_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData);
static uint8_T c23_d_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_b_is_active_c23_Mooventure2016_Rev5, const
  char_T *c23_identifier);
static uint8_T c23_e_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId);
static void init_dsm_address_info(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c23_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c23_is_active_c23_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c23_update_debugger_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c23_st;
  const mxArray *c23_y = NULL;
  real_T c23_hoistedGlobal;
  real_T c23_u;
  const mxArray *c23_b_y = NULL;
  real_T c23_b_hoistedGlobal;
  real_T c23_b_u;
  const mxArray *c23_c_y = NULL;
  uint8_T c23_c_hoistedGlobal;
  uint8_T c23_c_u;
  const mxArray *c23_d_y = NULL;
  real_T *c23_motorDirection;
  real_T *c23_motorEnable;
  c23_motorDirection = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c23_motorEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_st = NULL;
  c23_st = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_createcellarray(3));
  c23_hoistedGlobal = *c23_motorDirection;
  c23_u = c23_hoistedGlobal;
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 0, c23_b_y);
  c23_b_hoistedGlobal = *c23_motorEnable;
  c23_b_u = c23_b_hoistedGlobal;
  c23_c_y = NULL;
  sf_mex_assign(&c23_c_y, sf_mex_create("y", &c23_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 1, c23_c_y);
  c23_c_hoistedGlobal = chartInstance->c23_is_active_c23_Mooventure2016_Rev5;
  c23_c_u = c23_c_hoistedGlobal;
  c23_d_y = NULL;
  sf_mex_assign(&c23_d_y, sf_mex_create("y", &c23_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 2, c23_d_y);
  sf_mex_assign(&c23_st, c23_y);
  return c23_st;
}

static void set_sim_state_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c23_st)
{
  const mxArray *c23_u;
  real_T *c23_motorDirection;
  real_T *c23_motorEnable;
  c23_motorDirection = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c23_motorEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c23_doneDoubleBufferReInit = TRUE;
  c23_u = sf_mex_dup(c23_st);
  *c23_motorDirection = c23_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c23_u, 0)), "motorDirection");
  *c23_motorEnable = c23_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c23_u, 1)), "motorEnable");
  chartInstance->c23_is_active_c23_Mooventure2016_Rev5 = c23_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c23_u, 2)),
     "is_active_c23_Mooventure2016_Rev5");
  sf_mex_destroy(&c23_u);
  c23_update_debugger_state_c23_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c23_st);
}

static void finalize_c23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c23_Mooventure2016_Rev5(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c23_hoistedGlobal;
  real_T c23_b_hoistedGlobal;
  real_T c23_c_hoistedGlobal;
  real_T c23_currPos;
  real_T c23_posRequest;
  real_T c23_hyst;
  uint32_T c23_debug_family_var_map[7];
  real_T c23_nargin = 3.0;
  real_T c23_nargout = 2.0;
  real_T c23_motorEnable;
  real_T c23_motorDirection;
  real_T *c23_b_currPos;
  real_T *c23_b_motorEnable;
  real_T *c23_b_posRequest;
  real_T *c23_b_motorDirection;
  real_T *c23_b_hyst;
  boolean_T guard1 = FALSE;
  c23_b_hyst = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c23_b_motorDirection = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c23_b_posRequest = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c23_b_motorEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_b_currPos = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c23_b_currPos, 0U);
  _SFD_DATA_RANGE_CHECK(*c23_b_motorEnable, 1U);
  _SFD_DATA_RANGE_CHECK(*c23_b_posRequest, 2U);
  _SFD_DATA_RANGE_CHECK(*c23_b_motorDirection, 3U);
  _SFD_DATA_RANGE_CHECK(*c23_b_hyst, 4U);
  chartInstance->c23_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
  c23_hoistedGlobal = *c23_b_currPos;
  c23_b_hoistedGlobal = *c23_b_posRequest;
  c23_c_hoistedGlobal = *c23_b_hyst;
  c23_currPos = c23_hoistedGlobal;
  c23_posRequest = c23_b_hoistedGlobal;
  c23_hyst = c23_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 7U, 7U, c23_debug_family_names,
    c23_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c23_nargin, 0U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_nargout, 1U, c23_sf_marshallOut,
    c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c23_currPos, 2U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_posRequest, 3U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c23_hyst, 4U, c23_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c23_motorEnable, 5U,
    c23_sf_marshallOut, c23_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c23_motorDirection, 6U,
    c23_sf_marshallOut, c23_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 3);
  guard1 = FALSE;
  if (CV_EML_COND(0, 0, c23_currPos <= c23_posRequest + c23_hyst)) {
    if (CV_EML_COND(0, 1, c23_currPos >= c23_posRequest - c23_hyst)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 4);
      c23_motorEnable = 0.0;
      _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 5);
      c23_motorDirection = 0.0;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 0, FALSE);
    CV_EML_IF(0, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 6);
    if (CV_EML_IF(0, 1, c23_currPos < c23_posRequest)) {
      _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 7);
      c23_motorEnable = 1.0;
      _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 8);
      c23_motorDirection = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 9);
      if (CV_EML_IF(0, 2, c23_currPos > c23_posRequest)) {
        _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 10);
        c23_motorEnable = 1.0;
        _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 11);
        c23_motorDirection = 1.0;
      } else {
        _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 13);
        c23_motorEnable = 0.0;
        _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, 14);
        c23_motorDirection = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c23_sfEvent, -14);
  sf_debug_symbol_scope_pop();
  *c23_b_motorEnable = c23_motorEnable;
  *c23_b_motorDirection = c23_motorDirection;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, chartInstance->c23_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc23_Mooventure2016_Rev5
  (SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber)
{
}

static const mxArray *c23_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData)
{
  const mxArray *c23_mxArrayOutData = NULL;
  real_T c23_u;
  const mxArray *c23_y = NULL;
  SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c23_mxArrayOutData = NULL;
  c23_u = *(real_T *)c23_inData;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_create("y", &c23_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c23_mxArrayOutData, c23_y);
  return c23_mxArrayOutData;
}

static real_T c23_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_motorDirection, const char_T
  *c23_identifier)
{
  real_T c23_y;
  emlrtMsgIdentifier c23_thisId;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_motorDirection),
    &c23_thisId);
  sf_mex_destroy(&c23_motorDirection);
  return c23_y;
}

static real_T c23_b_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  real_T c23_y;
  real_T c23_d0;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_d0, 1, 0, 0U, 0, 0U, 0);
  c23_y = c23_d0;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void c23_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData)
{
  const mxArray *c23_motorDirection;
  const char_T *c23_identifier;
  emlrtMsgIdentifier c23_thisId;
  real_T c23_y;
  SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c23_motorDirection = sf_mex_dup(c23_mxArrayInData);
  c23_identifier = c23_varName;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_motorDirection),
    &c23_thisId);
  sf_mex_destroy(&c23_motorDirection);
  *(real_T *)c23_outData = c23_y;
  sf_mex_destroy(&c23_mxArrayInData);
}

const mxArray *sf_c23_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c23_nameCaptureInfo = NULL;
  c23_nameCaptureInfo = NULL;
  sf_mex_assign(&c23_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c23_nameCaptureInfo;
}

static const mxArray *c23_b_sf_marshallOut(void *chartInstanceVoid, void
  *c23_inData)
{
  const mxArray *c23_mxArrayOutData = NULL;
  int32_T c23_u;
  const mxArray *c23_y = NULL;
  SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c23_mxArrayOutData = NULL;
  c23_u = *(int32_T *)c23_inData;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_create("y", &c23_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c23_mxArrayOutData, c23_y);
  return c23_mxArrayOutData;
}

static int32_T c23_c_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  int32_T c23_y;
  int32_T c23_i0;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_i0, 1, 6, 0U, 0, 0U, 0);
  c23_y = c23_i0;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void c23_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c23_mxArrayInData, const char_T *c23_varName, void *c23_outData)
{
  const mxArray *c23_b_sfEvent;
  const char_T *c23_identifier;
  emlrtMsgIdentifier c23_thisId;
  int32_T c23_y;
  SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c23_b_sfEvent = sf_mex_dup(c23_mxArrayInData);
  c23_identifier = c23_varName;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c23_b_sfEvent),
    &c23_thisId);
  sf_mex_destroy(&c23_b_sfEvent);
  *(int32_T *)c23_outData = c23_y;
  sf_mex_destroy(&c23_mxArrayInData);
}

static uint8_T c23_d_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_b_is_active_c23_Mooventure2016_Rev5, const
  char_T *c23_identifier)
{
  uint8_T c23_y;
  emlrtMsgIdentifier c23_thisId;
  c23_thisId.fIdentifier = c23_identifier;
  c23_thisId.fParent = NULL;
  c23_y = c23_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c23_b_is_active_c23_Mooventure2016_Rev5), &c23_thisId);
  sf_mex_destroy(&c23_b_is_active_c23_Mooventure2016_Rev5);
  return c23_y;
}

static uint8_T c23_e_emlrt_marshallIn(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c23_u, const emlrtMsgIdentifier *c23_parentId)
{
  uint8_T c23_y;
  uint8_T c23_u0;
  sf_mex_import(c23_parentId, sf_mex_dup(c23_u), &c23_u0, 1, 3, 0U, 0, 0U, 0);
  c23_y = c23_u0;
  sf_mex_destroy(&c23_u);
  return c23_y;
}

static void init_dsm_address_info(SFc23_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c23_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3306483962U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3081273410U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(327241952U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(480736706U);
}

mxArray *sf_c23_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(594173166U);
    pr[1] = (double)(2449106510U);
    pr[2] = (double)(2207042489U);
    pr[3] = (double)(26573719U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c23_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[7],T\"motorDirection\",},{M[1],M[5],T\"motorEnable\",},{M[8],M[0],T\"is_active_c23_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c23_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           23,
           1,
           1,
           5,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"currPos");
          _SFD_SET_DATA_PROPS(1,2,0,1,"motorEnable");
          _SFD_SET_DATA_PROPS(2,1,1,0,"posRequest");
          _SFD_SET_DATA_PROPS(3,2,0,1,"motorDirection");
          _SFD_SET_DATA_PROPS(4,1,1,0,"hyst");
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
        _SFD_CV_INIT_EML(0,1,3,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,362);
        _SFD_CV_INIT_EML_IF(0,0,73,129,171,356);
        _SFD_CV_INIT_EML_IF(0,1,171,197,239,356);
        _SFD_CV_INIT_EML_IF(0,2,239,265,307,356);

        {
          static int condStart[] = { 76, 104 };

          static int condEnd[] = { 100, 128 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,76,128,2,0,&(condStart[0]),&(condEnd[0]),3,
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
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)c23_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)c23_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c23_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c23_currPos;
          real_T *c23_motorEnable;
          real_T *c23_posRequest;
          real_T *c23_motorDirection;
          real_T *c23_hyst;
          c23_hyst = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c23_motorDirection = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c23_posRequest = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c23_motorEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c23_currPos = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c23_currPos);
          _SFD_SET_DATA_VALUE_PTR(1U, c23_motorEnable);
          _SFD_SET_DATA_VALUE_PTR(2U, c23_posRequest);
          _SFD_SET_DATA_VALUE_PTR(3U, c23_motorDirection);
          _SFD_SET_DATA_VALUE_PTR(4U, c23_hyst);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c23_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c23_Mooventure2016_Rev5
    ((SFc23_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c23_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c23_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c23_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c23_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c23_Mooventure2016_Rev5
    ((SFc23_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c23_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c23_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c23_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c23_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c23_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c23_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c23_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c23_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc23_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc23_Mooventure2016_Rev5((SFc23_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c23_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c23_Mooventure2016_Rev5
      ((SFc23_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c23_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      23);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",23,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",23,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",23,3);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",23,2);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",23);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1295155250U));
  ssSetChecksum1(S,(1540053511U));
  ssSetChecksum2(S,(1230151198U));
  ssSetChecksum3(S,(2558201344U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c23_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",23);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c23_Mooventure2016_Rev5(SimStruct *S)
{
  SFc23_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc23_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc23_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc23_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c23_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c23_Mooventure2016_Rev5;
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

void c23_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c23_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c23_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c23_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c23_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
