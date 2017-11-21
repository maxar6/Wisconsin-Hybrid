/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c58_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c58_debug_family_names[6] = { "nargin", "nargout", "speed",
  "fan1", "fan2", "fan3" };

/* Function Declarations */
static void initialize_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c58_update_debugger_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c58_st);
static void finalize_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c58_Mooventure2016_Rev5(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c58_machineNumber, uint32_T
  c58_chartNumber);
static const mxArray *c58_sf_marshallOut(void *chartInstanceVoid, void
  *c58_inData);
static real_T c58_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_fan3, const char_T *c58_identifier);
static real_T c58_b_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId);
static void c58_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c58_mxArrayInData, const char_T *c58_varName, void *c58_outData);
static const mxArray *c58_b_sf_marshallOut(void *chartInstanceVoid, void
  *c58_inData);
static int32_T c58_c_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId);
static void c58_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c58_mxArrayInData, const char_T *c58_varName, void *c58_outData);
static uint8_T c58_d_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_b_is_active_c58_Mooventure2016_Rev5, const
  char_T *c58_identifier);
static uint8_T c58_e_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId);
static void init_dsm_address_info(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c58_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c58_is_active_c58_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c58_update_debugger_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c58_st;
  const mxArray *c58_y = NULL;
  real_T c58_hoistedGlobal;
  real_T c58_u;
  const mxArray *c58_b_y = NULL;
  real_T c58_b_hoistedGlobal;
  real_T c58_b_u;
  const mxArray *c58_c_y = NULL;
  real_T c58_c_hoistedGlobal;
  real_T c58_c_u;
  const mxArray *c58_d_y = NULL;
  uint8_T c58_d_hoistedGlobal;
  uint8_T c58_d_u;
  const mxArray *c58_e_y = NULL;
  real_T *c58_fan1;
  real_T *c58_fan2;
  real_T *c58_fan3;
  c58_fan3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c58_fan2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c58_fan1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c58_st = NULL;
  c58_st = NULL;
  c58_y = NULL;
  sf_mex_assign(&c58_y, sf_mex_createcellarray(4));
  c58_hoistedGlobal = *c58_fan1;
  c58_u = c58_hoistedGlobal;
  c58_b_y = NULL;
  sf_mex_assign(&c58_b_y, sf_mex_create("y", &c58_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c58_y, 0, c58_b_y);
  c58_b_hoistedGlobal = *c58_fan2;
  c58_b_u = c58_b_hoistedGlobal;
  c58_c_y = NULL;
  sf_mex_assign(&c58_c_y, sf_mex_create("y", &c58_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c58_y, 1, c58_c_y);
  c58_c_hoistedGlobal = *c58_fan3;
  c58_c_u = c58_c_hoistedGlobal;
  c58_d_y = NULL;
  sf_mex_assign(&c58_d_y, sf_mex_create("y", &c58_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c58_y, 2, c58_d_y);
  c58_d_hoistedGlobal = chartInstance->c58_is_active_c58_Mooventure2016_Rev5;
  c58_d_u = c58_d_hoistedGlobal;
  c58_e_y = NULL;
  sf_mex_assign(&c58_e_y, sf_mex_create("y", &c58_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c58_y, 3, c58_e_y);
  sf_mex_assign(&c58_st, c58_y);
  return c58_st;
}

static void set_sim_state_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c58_st)
{
  const mxArray *c58_u;
  real_T *c58_fan1;
  real_T *c58_fan2;
  real_T *c58_fan3;
  c58_fan3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c58_fan2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c58_fan1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c58_doneDoubleBufferReInit = TRUE;
  c58_u = sf_mex_dup(c58_st);
  *c58_fan1 = c58_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c58_u, 0)), "fan1");
  *c58_fan2 = c58_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c58_u, 1)), "fan2");
  *c58_fan3 = c58_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c58_u, 2)), "fan3");
  chartInstance->c58_is_active_c58_Mooventure2016_Rev5 = c58_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c58_u, 3)),
     "is_active_c58_Mooventure2016_Rev5");
  sf_mex_destroy(&c58_u);
  c58_update_debugger_state_c58_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c58_st);
}

static void finalize_c58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c58_Mooventure2016_Rev5(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c58_hoistedGlobal;
  real_T c58_speed;
  uint32_T c58_debug_family_var_map[6];
  real_T c58_nargin = 1.0;
  real_T c58_nargout = 3.0;
  real_T c58_fan1;
  real_T c58_fan2;
  real_T c58_fan3;
  real_T *c58_b_speed;
  real_T *c58_b_fan1;
  real_T *c58_b_fan2;
  real_T *c58_b_fan3;
  c58_b_fan3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c58_b_fan2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c58_b_fan1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c58_b_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 57U, chartInstance->c58_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c58_b_speed, 0U);
  _SFD_DATA_RANGE_CHECK(*c58_b_fan1, 1U);
  _SFD_DATA_RANGE_CHECK(*c58_b_fan2, 2U);
  _SFD_DATA_RANGE_CHECK(*c58_b_fan3, 3U);
  chartInstance->c58_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 57U, chartInstance->c58_sfEvent);
  c58_hoistedGlobal = *c58_b_speed;
  c58_speed = c58_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 6U, 6U, c58_debug_family_names,
    c58_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c58_nargin, 0U, c58_sf_marshallOut,
    c58_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c58_nargout, 1U, c58_sf_marshallOut,
    c58_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c58_speed, 2U, c58_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c58_fan1, 3U, c58_sf_marshallOut,
    c58_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c58_fan2, 4U, c58_sf_marshallOut,
    c58_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c58_fan3, 5U, c58_sf_marshallOut,
    c58_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 3);
  if (CV_EML_IF(0, 0, c58_speed == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 4);
    c58_fan1 = 1.0;
    _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 5);
    c58_fan2 = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 6);
    c58_fan3 = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 7);
    if (CV_EML_IF(0, 1, c58_speed == 2.0)) {
      _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 8);
      c58_fan1 = 0.0;
      _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 9);
      c58_fan2 = 1.0;
      _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 10);
      c58_fan3 = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 11);
      if (CV_EML_IF(0, 2, c58_speed == 3.0)) {
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 12);
        c58_fan1 = 0.0;
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 13);
        c58_fan2 = 1.0;
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 14);
        c58_fan3 = 1.0;
      } else {
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 16);
        c58_fan1 = 0.0;
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 17);
        c58_fan2 = 0.0;
        _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, 18);
        c58_fan3 = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c58_sfEvent, -18);
  sf_debug_symbol_scope_pop();
  *c58_b_fan1 = c58_fan1;
  *c58_b_fan2 = c58_fan2;
  *c58_b_fan3 = c58_fan3;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 57U, chartInstance->c58_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc58_Mooventure2016_Rev5
  (SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c58_machineNumber, uint32_T
  c58_chartNumber)
{
}

static const mxArray *c58_sf_marshallOut(void *chartInstanceVoid, void
  *c58_inData)
{
  const mxArray *c58_mxArrayOutData = NULL;
  real_T c58_u;
  const mxArray *c58_y = NULL;
  SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c58_mxArrayOutData = NULL;
  c58_u = *(real_T *)c58_inData;
  c58_y = NULL;
  sf_mex_assign(&c58_y, sf_mex_create("y", &c58_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c58_mxArrayOutData, c58_y);
  return c58_mxArrayOutData;
}

static real_T c58_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_fan3, const char_T *c58_identifier)
{
  real_T c58_y;
  emlrtMsgIdentifier c58_thisId;
  c58_thisId.fIdentifier = c58_identifier;
  c58_thisId.fParent = NULL;
  c58_y = c58_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c58_fan3),
    &c58_thisId);
  sf_mex_destroy(&c58_fan3);
  return c58_y;
}

static real_T c58_b_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId)
{
  real_T c58_y;
  real_T c58_d0;
  sf_mex_import(c58_parentId, sf_mex_dup(c58_u), &c58_d0, 1, 0, 0U, 0, 0U, 0);
  c58_y = c58_d0;
  sf_mex_destroy(&c58_u);
  return c58_y;
}

static void c58_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c58_mxArrayInData, const char_T *c58_varName, void *c58_outData)
{
  const mxArray *c58_fan3;
  const char_T *c58_identifier;
  emlrtMsgIdentifier c58_thisId;
  real_T c58_y;
  SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c58_fan3 = sf_mex_dup(c58_mxArrayInData);
  c58_identifier = c58_varName;
  c58_thisId.fIdentifier = c58_identifier;
  c58_thisId.fParent = NULL;
  c58_y = c58_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c58_fan3),
    &c58_thisId);
  sf_mex_destroy(&c58_fan3);
  *(real_T *)c58_outData = c58_y;
  sf_mex_destroy(&c58_mxArrayInData);
}

const mxArray *sf_c58_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c58_nameCaptureInfo = NULL;
  c58_nameCaptureInfo = NULL;
  sf_mex_assign(&c58_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c58_nameCaptureInfo;
}

static const mxArray *c58_b_sf_marshallOut(void *chartInstanceVoid, void
  *c58_inData)
{
  const mxArray *c58_mxArrayOutData = NULL;
  int32_T c58_u;
  const mxArray *c58_y = NULL;
  SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c58_mxArrayOutData = NULL;
  c58_u = *(int32_T *)c58_inData;
  c58_y = NULL;
  sf_mex_assign(&c58_y, sf_mex_create("y", &c58_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c58_mxArrayOutData, c58_y);
  return c58_mxArrayOutData;
}

static int32_T c58_c_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId)
{
  int32_T c58_y;
  int32_T c58_i0;
  sf_mex_import(c58_parentId, sf_mex_dup(c58_u), &c58_i0, 1, 6, 0U, 0, 0U, 0);
  c58_y = c58_i0;
  sf_mex_destroy(&c58_u);
  return c58_y;
}

static void c58_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c58_mxArrayInData, const char_T *c58_varName, void *c58_outData)
{
  const mxArray *c58_b_sfEvent;
  const char_T *c58_identifier;
  emlrtMsgIdentifier c58_thisId;
  int32_T c58_y;
  SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c58_b_sfEvent = sf_mex_dup(c58_mxArrayInData);
  c58_identifier = c58_varName;
  c58_thisId.fIdentifier = c58_identifier;
  c58_thisId.fParent = NULL;
  c58_y = c58_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c58_b_sfEvent),
    &c58_thisId);
  sf_mex_destroy(&c58_b_sfEvent);
  *(int32_T *)c58_outData = c58_y;
  sf_mex_destroy(&c58_mxArrayInData);
}

static uint8_T c58_d_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_b_is_active_c58_Mooventure2016_Rev5, const
  char_T *c58_identifier)
{
  uint8_T c58_y;
  emlrtMsgIdentifier c58_thisId;
  c58_thisId.fIdentifier = c58_identifier;
  c58_thisId.fParent = NULL;
  c58_y = c58_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c58_b_is_active_c58_Mooventure2016_Rev5), &c58_thisId);
  sf_mex_destroy(&c58_b_is_active_c58_Mooventure2016_Rev5);
  return c58_y;
}

static uint8_T c58_e_emlrt_marshallIn(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c58_u, const emlrtMsgIdentifier *c58_parentId)
{
  uint8_T c58_y;
  uint8_T c58_u0;
  sf_mex_import(c58_parentId, sf_mex_dup(c58_u), &c58_u0, 1, 3, 0U, 0, 0U, 0);
  c58_y = c58_u0;
  sf_mex_destroy(&c58_u);
  return c58_y;
}

static void init_dsm_address_info(SFc58_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c58_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(364531974U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3344237576U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(357417656U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4002014999U);
}

mxArray *sf_c58_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2231353320U);
    pr[1] = (double)(1818944145U);
    pr[2] = (double)(2921772220U);
    pr[3] = (double)(2109516426U);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c58_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"fan1\",},{M[1],M[6],T\"fan2\",},{M[1],M[7],T\"fan3\",},{M[8],M[0],T\"is_active_c58_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c58_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           58,
           1,
           1,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"speed");
          _SFD_SET_DATA_PROPS(1,2,0,1,"fan1");
          _SFD_SET_DATA_PROPS(2,2,0,1,"fan2");
          _SFD_SET_DATA_PROPS(3,2,0,1,"fan3");
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
        _SFD_CV_INIT_EML(0,1,3,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,266);
        _SFD_CV_INIT_EML_IF(0,0,40,53,96,266);
        _SFD_CV_INIT_EML_IF(0,1,96,113,156,266);
        _SFD_CV_INIT_EML_IF(0,2,156,173,216,266);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c58_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c58_sf_marshallOut,(MexInFcnForType)c58_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c58_sf_marshallOut,(MexInFcnForType)c58_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c58_sf_marshallOut,(MexInFcnForType)c58_sf_marshallIn);

        {
          real_T *c58_speed;
          real_T *c58_fan1;
          real_T *c58_fan2;
          real_T *c58_fan3;
          c58_fan3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c58_fan2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c58_fan1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c58_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c58_speed);
          _SFD_SET_DATA_VALUE_PTR(1U, c58_fan1);
          _SFD_SET_DATA_VALUE_PTR(2U, c58_fan2);
          _SFD_SET_DATA_VALUE_PTR(3U, c58_fan3);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c58_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c58_Mooventure2016_Rev5
    ((SFc58_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c58_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c58_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c58_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c58_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c58_Mooventure2016_Rev5
    ((SFc58_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c58_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c58_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c58_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c58_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c58_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c58_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c58_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c58_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc58_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc58_Mooventure2016_Rev5((SFc58_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c58_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c58_Mooventure2016_Rev5
      ((SFc58_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c58_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      58);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",58,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",58,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",58,1);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",58,3);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",58);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1721144038U));
  ssSetChecksum1(S,(218787635U));
  ssSetChecksum2(S,(991616315U));
  ssSetChecksum3(S,(689712549U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c58_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",58);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c58_Mooventure2016_Rev5(SimStruct *S)
{
  SFc58_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc58_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc58_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc58_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c58_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c58_Mooventure2016_Rev5;
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

void c58_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c58_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c58_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c58_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c58_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
