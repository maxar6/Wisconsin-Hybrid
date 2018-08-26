/* Include files */

#include "blascompat32.h"
#include "BatteryController_Rev1_sfun.h"
#include "c7_BatteryController_Rev1.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BatteryController_Rev1_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c7_debug_family_names[5] = { "nargin", "nargout",
  "precharge", "positive", "PackState" };

/* Function Declarations */
static void initialize_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void initialize_params_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void enable_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void disable_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void c7_update_debugger_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void set_sim_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance, const mxArray
   *c7_st);
static void finalize_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void sf_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void initSimStructsc7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber);
static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData);
static real_T c7_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_PackState, const char_T *c7_identifier);
static real_T c7_b_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static int32_T c7_c_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static uint8_T c7_d_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BatteryController_Rev1, const
  char_T *c7_identifier);
static uint8_T c7_e_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void init_dsm_address_info(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
  chartInstance->c7_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c7_is_active_c7_BatteryController_Rev1 = 0U;
}

static void initialize_params_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
}

static void enable_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c7_update_debugger_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
  const mxArray *c7_st;
  const mxArray *c7_y = NULL;
  real_T c7_hoistedGlobal;
  real_T c7_u;
  const mxArray *c7_b_y = NULL;
  uint8_T c7_b_hoistedGlobal;
  uint8_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  real_T *c7_PackState;
  c7_PackState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_st = NULL;
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellarray(2));
  c7_hoistedGlobal = *c7_PackState;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = chartInstance->c7_is_active_c7_BatteryController_Rev1;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 1, c7_c_y);
  sf_mex_assign(&c7_st, c7_y);
  return c7_st;
}

static void set_sim_state_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance, const mxArray
   *c7_st)
{
  const mxArray *c7_u;
  real_T *c7_PackState;
  c7_PackState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c7_doneDoubleBufferReInit = TRUE;
  c7_u = sf_mex_dup(c7_st);
  *c7_PackState = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 0)), "PackState");
  chartInstance->c7_is_active_c7_BatteryController_Rev1 = c7_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
     "is_active_c7_BatteryController_Rev1");
  sf_mex_destroy(&c7_u);
  c7_update_debugger_state_c7_BatteryController_Rev1(chartInstance);
  sf_mex_destroy(&c7_st);
}

static void finalize_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
}

static void sf_c7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
  boolean_T c7_hoistedGlobal;
  boolean_T c7_b_hoistedGlobal;
  boolean_T c7_precharge;
  boolean_T c7_positive;
  uint32_T c7_debug_family_var_map[5];
  real_T c7_nargin = 2.0;
  real_T c7_nargout = 1.0;
  real_T c7_PackState;
  boolean_T *c7_b_precharge;
  real_T *c7_b_PackState;
  boolean_T *c7_b_positive;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  c7_b_positive = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_b_PackState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_b_precharge = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 4U, chartInstance->c7_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_precharge, 0U);
  _SFD_DATA_RANGE_CHECK(*c7_b_PackState, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_positive, 2U);
  chartInstance->c7_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c7_sfEvent);
  c7_hoistedGlobal = *c7_b_precharge;
  c7_b_hoistedGlobal = *c7_b_positive;
  c7_precharge = c7_hoistedGlobal;
  c7_positive = c7_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 5U, 5U, c7_debug_family_names,
    c7_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c7_nargin, 0U, c7_sf_marshallOut,
    c7_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c7_nargout, 1U, c7_sf_marshallOut,
    c7_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c7_precharge, 2U, c7_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c7_positive, 3U, c7_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c7_PackState, 4U, c7_sf_marshallOut,
    c7_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 3);
  guard1 = FALSE;
  if (CV_EML_COND(0, 0, (real_T)c7_precharge == 0.0)) {
    if (CV_EML_COND(0, 1, (real_T)c7_positive == 0.0)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 4);
      c7_PackState = 2.0;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 0, FALSE);
    CV_EML_IF(0, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 5);
    guard2 = FALSE;
    if (CV_EML_COND(0, 2, (real_T)c7_precharge == 1.0)) {
      if (CV_EML_COND(0, 3, (real_T)c7_positive == 0.0)) {
        CV_EML_MCDC(0, 1, TRUE);
        CV_EML_IF(0, 1, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 6);
        c7_PackState = 3.0;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      CV_EML_MCDC(0, 1, FALSE);
      CV_EML_IF(0, 1, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 7);
      guard3 = FALSE;
      if (CV_EML_COND(0, 4, (real_T)c7_precharge == 0.0)) {
        if (CV_EML_COND(0, 5, (real_T)c7_positive == 1.0)) {
          CV_EML_MCDC(0, 2, TRUE);
          CV_EML_IF(0, 2, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 8);
          c7_PackState = 4.0;
        } else {
          guard3 = TRUE;
        }
      } else {
        guard3 = TRUE;
      }

      if (guard3 == TRUE) {
        CV_EML_MCDC(0, 2, FALSE);
        CV_EML_IF(0, 2, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, 10);
        c7_PackState = 1.0;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c7_sfEvent, -10);
  sf_debug_symbol_scope_pop();
  *c7_b_PackState = c7_PackState;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c7_sfEvent);
  sf_debug_check_for_state_inconsistency(_BatteryController_Rev1MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc7_BatteryController_Rev1
  (SFc7_BatteryController_Rev1InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber)
{
}

static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  real_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(real_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static real_T c7_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_PackState, const char_T *c7_identifier)
{
  real_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_PackState),
    &c7_thisId);
  sf_mex_destroy(&c7_PackState);
  return c7_y;
}

static real_T c7_b_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  real_T c7_y;
  real_T c7_d0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_d0, 1, 0, 0U, 0, 0U, 0);
  c7_y = c7_d0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_PackState;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  real_T c7_y;
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)chartInstanceVoid;
  c7_PackState = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_PackState),
    &c7_thisId);
  sf_mex_destroy(&c7_PackState);
  *(real_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  boolean_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(boolean_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

const mxArray *sf_c7_BatteryController_Rev1_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c7_nameCaptureInfo;
}

static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  int32_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(int32_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static int32_T c7_c_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  int32_T c7_y;
  int32_T c7_i0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_i0, 1, 6, 0U, 0, 0U, 0);
  c7_y = c7_i0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_b_sfEvent;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  int32_T c7_y;
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)chartInstanceVoid;
  c7_b_sfEvent = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_sfEvent),
    &c7_thisId);
  sf_mex_destroy(&c7_b_sfEvent);
  *(int32_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static uint8_T c7_d_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BatteryController_Rev1, const
  char_T *c7_identifier)
{
  uint8_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c7_b_is_active_c7_BatteryController_Rev1), &c7_thisId);
  sf_mex_destroy(&c7_b_is_active_c7_BatteryController_Rev1);
  return c7_y;
}

static uint8_T c7_e_emlrt_marshallIn(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_u0, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void init_dsm_address_info(SFc7_BatteryController_Rev1InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c7_BatteryController_Rev1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(894221261U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(941283724U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3250152675U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1296246668U);
}

mxArray *sf_c7_BatteryController_Rev1_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(525400658U);
    pr[1] = (double)(1846421474U);
    pr[2] = (double)(1118389929U);
    pr[3] = (double)(2644913019U);
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

static const mxArray *sf_get_sim_state_info_c7_BatteryController_Rev1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"PackState\",},{M[8],M[0],T\"is_active_c7_BatteryController_Rev1\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_BatteryController_Rev1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
    chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BatteryController_Rev1MachineNumber_,
           7,
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
          init_script_number_translation(_BatteryController_Rev1MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BatteryController_Rev1MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_BatteryController_Rev1MachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"precharge");
          _SFD_SET_DATA_PROPS(1,2,0,1,"PackState");
          _SFD_SET_DATA_PROPS(2,1,1,0,"positive");
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
        _SFD_CV_INIT_EML(0,1,3,0,0,0,0,6,3);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,308);
        _SFD_CV_INIT_EML_IF(0,0,46,78,110,308);
        _SFD_CV_INIT_EML_IF(0,1,110,146,177,308);
        _SFD_CV_INIT_EML_IF(0,2,177,213,250,308);

        {
          static int condStart[] = { 50, 66 };

          static int condEnd[] = { 62, 77 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,50,77,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 118, 134 };

          static int condEnd[] = { 130, 145 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,118,145,2,2,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 185, 201 };

          static int condEnd[] = { 197, 212 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,2,185,212,2,4,&(condStart[0]),&(condEnd[0]),3,
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_sf_marshallOut,(MexInFcnForType)c7_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c7_precharge;
          real_T *c7_PackState;
          boolean_T *c7_positive;
          c7_positive = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c7_PackState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c7_precharge = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c7_precharge);
          _SFD_SET_DATA_VALUE_PTR(1U, c7_PackState);
          _SFD_SET_DATA_VALUE_PTR(2U, c7_positive);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BatteryController_Rev1MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c7_BatteryController_Rev1(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc7_BatteryController_Rev1InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c7_BatteryController_Rev1
    ((SFc7_BatteryController_Rev1InstanceStruct*) chartInstanceVar);
  initialize_c7_BatteryController_Rev1
    ((SFc7_BatteryController_Rev1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_BatteryController_Rev1(void *chartInstanceVar)
{
  enable_c7_BatteryController_Rev1((SFc7_BatteryController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c7_BatteryController_Rev1(void *chartInstanceVar)
{
  disable_c7_BatteryController_Rev1((SFc7_BatteryController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c7_BatteryController_Rev1(void *chartInstanceVar)
{
  sf_c7_BatteryController_Rev1((SFc7_BatteryController_Rev1InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c7_BatteryController_Rev1
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c7_BatteryController_Rev1
    ((SFc7_BatteryController_Rev1InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_BatteryController_Rev1();/* state var info */
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

extern void sf_internal_set_sim_state_c7_BatteryController_Rev1(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_BatteryController_Rev1();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c7_BatteryController_Rev1
    ((SFc7_BatteryController_Rev1InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c7_BatteryController_Rev1
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c7_BatteryController_Rev1(S);
}

static void sf_opaque_set_sim_state_c7_BatteryController_Rev1(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c7_BatteryController_Rev1(S, st);
}

static void sf_opaque_terminate_c7_BatteryController_Rev1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_BatteryController_Rev1InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c7_BatteryController_Rev1
      ((SFc7_BatteryController_Rev1InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc7_BatteryController_Rev1
    ((SFc7_BatteryController_Rev1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_BatteryController_Rev1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_BatteryController_Rev1
      ((SFc7_BatteryController_Rev1InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c7_BatteryController_Rev1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BatteryController_Rev1",
      "BatteryController_Rev1",7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BatteryController_Rev1",
                "BatteryController_Rev1",7,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"BatteryController_Rev1",
      "BatteryController_Rev1",7,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BatteryController_Rev1",
        "BatteryController_Rev1",7,2);
      sf_mark_chart_reusable_outputs(S,"BatteryController_Rev1",
        "BatteryController_Rev1",7,1);
    }

    sf_set_rtw_dwork_info(S,"BatteryController_Rev1","BatteryController_Rev1",7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(753112968U));
  ssSetChecksum1(S,(1976850859U));
  ssSetChecksum2(S,(2397258705U));
  ssSetChecksum3(S,(1775721594U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c7_BatteryController_Rev1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BatteryController_Rev1",
      "BatteryController_Rev1",7);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c7_BatteryController_Rev1(SimStruct *S)
{
  SFc7_BatteryController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc7_BatteryController_Rev1InstanceStruct *)malloc(sizeof
    (SFc7_BatteryController_Rev1InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc7_BatteryController_Rev1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c7_BatteryController_Rev1;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_BatteryController_Rev1;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c7_BatteryController_Rev1;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c7_BatteryController_Rev1;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c7_BatteryController_Rev1;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c7_BatteryController_Rev1;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c7_BatteryController_Rev1;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_BatteryController_Rev1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_BatteryController_Rev1;
  chartInstance->chartInfo.mdlStart = mdlStart_c7_BatteryController_Rev1;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c7_BatteryController_Rev1;
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

void c7_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c7_BatteryController_Rev1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_BatteryController_Rev1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_BatteryController_Rev1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_BatteryController_Rev1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
