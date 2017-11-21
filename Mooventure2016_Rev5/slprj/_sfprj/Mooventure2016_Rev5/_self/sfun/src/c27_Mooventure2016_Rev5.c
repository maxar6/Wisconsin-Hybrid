/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c27_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c27_debug_family_names[9] = { "nargin", "nargout", "maxTemp",
  "lowThreshold", "mediumThreshold", "highThreshold", "acOn", "fault",
  "radiatorFan" };

/* Function Declarations */
static void initialize_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c27_update_debugger_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c27_st);
static void finalize_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c27_Mooventure2016_Rev5(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c27_machineNumber, uint32_T
  c27_chartNumber);
static const mxArray *c27_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static real_T c27_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_radiatorFan, const char_T *c27_identifier);
static real_T c27_b_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData);
static const mxArray *c27_b_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static const mxArray *c27_c_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static int32_T c27_c_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData);
static uint8_T c27_d_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_b_is_active_c27_Mooventure2016_Rev5, const
  char_T *c27_identifier);
static uint8_T c27_e_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void init_dsm_address_info(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c27_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c27_is_active_c27_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c27_update_debugger_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c27_st;
  const mxArray *c27_y = NULL;
  real_T c27_hoistedGlobal;
  real_T c27_u;
  const mxArray *c27_b_y = NULL;
  uint8_T c27_b_hoistedGlobal;
  uint8_T c27_b_u;
  const mxArray *c27_c_y = NULL;
  real_T *c27_radiatorFan;
  c27_radiatorFan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c27_st = NULL;
  c27_st = NULL;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_createcellarray(2));
  c27_hoistedGlobal = *c27_radiatorFan;
  c27_u = c27_hoistedGlobal;
  c27_b_y = NULL;
  sf_mex_assign(&c27_b_y, sf_mex_create("y", &c27_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c27_y, 0, c27_b_y);
  c27_b_hoistedGlobal = chartInstance->c27_is_active_c27_Mooventure2016_Rev5;
  c27_b_u = c27_b_hoistedGlobal;
  c27_c_y = NULL;
  sf_mex_assign(&c27_c_y, sf_mex_create("y", &c27_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c27_y, 1, c27_c_y);
  sf_mex_assign(&c27_st, c27_y);
  return c27_st;
}

static void set_sim_state_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c27_st)
{
  const mxArray *c27_u;
  real_T *c27_radiatorFan;
  c27_radiatorFan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c27_doneDoubleBufferReInit = TRUE;
  c27_u = sf_mex_dup(c27_st);
  *c27_radiatorFan = c27_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c27_u, 0)), "radiatorFan");
  chartInstance->c27_is_active_c27_Mooventure2016_Rev5 = c27_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c27_u, 1)),
     "is_active_c27_Mooventure2016_Rev5");
  sf_mex_destroy(&c27_u);
  c27_update_debugger_state_c27_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c27_st);
}

static void finalize_c27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c27_Mooventure2016_Rev5(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c27_hoistedGlobal;
  real_T c27_b_hoistedGlobal;
  real_T c27_c_hoistedGlobal;
  real_T c27_d_hoistedGlobal;
  boolean_T c27_e_hoistedGlobal;
  boolean_T c27_f_hoistedGlobal;
  real_T c27_maxTemp;
  real_T c27_lowThreshold;
  real_T c27_mediumThreshold;
  real_T c27_highThreshold;
  boolean_T c27_acOn;
  boolean_T c27_fault;
  uint32_T c27_debug_family_var_map[9];
  real_T c27_nargin = 6.0;
  real_T c27_nargout = 1.0;
  real_T c27_radiatorFan;
  real_T *c27_b_maxTemp;
  real_T *c27_b_radiatorFan;
  real_T *c27_b_lowThreshold;
  real_T *c27_b_mediumThreshold;
  real_T *c27_b_highThreshold;
  boolean_T *c27_b_acOn;
  boolean_T *c27_b_fault;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  c27_b_fault = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c27_b_acOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c27_b_highThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c27_b_mediumThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c27_b_lowThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c27_b_radiatorFan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c27_b_maxTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 26U, chartInstance->c27_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c27_b_maxTemp, 0U);
  _SFD_DATA_RANGE_CHECK(*c27_b_radiatorFan, 1U);
  _SFD_DATA_RANGE_CHECK(*c27_b_lowThreshold, 2U);
  _SFD_DATA_RANGE_CHECK(*c27_b_mediumThreshold, 3U);
  _SFD_DATA_RANGE_CHECK(*c27_b_highThreshold, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c27_b_acOn, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c27_b_fault, 6U);
  chartInstance->c27_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 26U, chartInstance->c27_sfEvent);
  c27_hoistedGlobal = *c27_b_maxTemp;
  c27_b_hoistedGlobal = *c27_b_lowThreshold;
  c27_c_hoistedGlobal = *c27_b_mediumThreshold;
  c27_d_hoistedGlobal = *c27_b_highThreshold;
  c27_e_hoistedGlobal = *c27_b_acOn;
  c27_f_hoistedGlobal = *c27_b_fault;
  c27_maxTemp = c27_hoistedGlobal;
  c27_lowThreshold = c27_b_hoistedGlobal;
  c27_mediumThreshold = c27_c_hoistedGlobal;
  c27_highThreshold = c27_d_hoistedGlobal;
  c27_acOn = c27_e_hoistedGlobal;
  c27_fault = c27_f_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 9U, 9U, c27_debug_family_names,
    c27_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c27_nargin, 0U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c27_nargout, 1U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c27_maxTemp, 2U, c27_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c27_lowThreshold, 3U, c27_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c27_mediumThreshold, 4U, c27_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c27_highThreshold, 5U, c27_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c27_acOn, 6U, c27_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c27_fault, 7U, c27_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c27_radiatorFan, 8U,
    c27_sf_marshallOut, c27_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 3);
  guard1 = FALSE;
  if (CV_EML_COND(0, 0, (real_T)c27_fault == 1.0)) {
    guard1 = TRUE;
  } else if (CV_EML_COND(0, 1, (real_T)c27_acOn == 1.0)) {
    guard1 = TRUE;
  } else {
    CV_EML_MCDC(0, 0, FALSE);
    CV_EML_IF(0, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 5);
    if (CV_EML_IF(0, 1, c27_maxTemp < c27_lowThreshold)) {
      _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 6);
      c27_radiatorFan = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 7);
      guard2 = FALSE;
      if (CV_EML_COND(0, 2, c27_maxTemp >= c27_lowThreshold)) {
        if (CV_EML_COND(0, 3, c27_maxTemp < c27_mediumThreshold)) {
          CV_EML_MCDC(0, 1, TRUE);
          CV_EML_IF(0, 2, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 8);
          c27_radiatorFan = 1.0;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard2 = TRUE;
      }

      if (guard2 == TRUE) {
        CV_EML_MCDC(0, 1, FALSE);
        CV_EML_IF(0, 2, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 9);
        guard3 = FALSE;
        if (CV_EML_COND(0, 4, c27_maxTemp >= c27_mediumThreshold)) {
          if (CV_EML_COND(0, 5, c27_maxTemp < c27_highThreshold)) {
            CV_EML_MCDC(0, 2, TRUE);
            CV_EML_IF(0, 3, TRUE);
            _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 10);
            c27_radiatorFan = 2.0;
          } else {
            guard3 = TRUE;
          }
        } else {
          guard3 = TRUE;
        }

        if (guard3 == TRUE) {
          CV_EML_MCDC(0, 2, FALSE);
          CV_EML_IF(0, 3, FALSE);
          _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 11);
          if (CV_EML_IF(0, 4, c27_maxTemp >= c27_highThreshold)) {
            _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 12);
            c27_radiatorFan = 3.0;
          } else {
            _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 14);
            c27_radiatorFan = 0.0;
          }
        }
      }
    }
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 0, TRUE);
    CV_EML_IF(0, 0, TRUE);
    _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, 4);
    c27_radiatorFan = 3.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c27_sfEvent, -14);
  sf_debug_symbol_scope_pop();
  *c27_b_radiatorFan = c27_radiatorFan;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, chartInstance->c27_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc27_Mooventure2016_Rev5
  (SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c27_machineNumber, uint32_T
  c27_chartNumber)
{
}

static const mxArray *c27_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData = NULL;
  real_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_u = *(real_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c27_mxArrayOutData, c27_y);
  return c27_mxArrayOutData;
}

static real_T c27_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_radiatorFan, const char_T *c27_identifier)
{
  real_T c27_y;
  emlrtMsgIdentifier c27_thisId;
  c27_thisId.fIdentifier = c27_identifier;
  c27_thisId.fParent = NULL;
  c27_y = c27_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_radiatorFan),
    &c27_thisId);
  sf_mex_destroy(&c27_radiatorFan);
  return c27_y;
}

static real_T c27_b_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  real_T c27_y;
  real_T c27_d0;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_d0, 1, 0, 0U, 0, 0U, 0);
  c27_y = c27_d0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData)
{
  const mxArray *c27_radiatorFan;
  const char_T *c27_identifier;
  emlrtMsgIdentifier c27_thisId;
  real_T c27_y;
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c27_radiatorFan = sf_mex_dup(c27_mxArrayInData);
  c27_identifier = c27_varName;
  c27_thisId.fIdentifier = c27_identifier;
  c27_thisId.fParent = NULL;
  c27_y = c27_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_radiatorFan),
    &c27_thisId);
  sf_mex_destroy(&c27_radiatorFan);
  *(real_T *)c27_outData = c27_y;
  sf_mex_destroy(&c27_mxArrayInData);
}

static const mxArray *c27_b_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData = NULL;
  boolean_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_u = *(boolean_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c27_mxArrayOutData, c27_y);
  return c27_mxArrayOutData;
}

const mxArray *sf_c27_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c27_nameCaptureInfo = NULL;
  c27_nameCaptureInfo = NULL;
  sf_mex_assign(&c27_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c27_nameCaptureInfo;
}

static const mxArray *c27_c_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData = NULL;
  int32_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_u = *(int32_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c27_mxArrayOutData, c27_y);
  return c27_mxArrayOutData;
}

static int32_T c27_c_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  int32_T c27_y;
  int32_T c27_i0;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_i0, 1, 6, 0U, 0, 0U, 0);
  c27_y = c27_i0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData)
{
  const mxArray *c27_b_sfEvent;
  const char_T *c27_identifier;
  emlrtMsgIdentifier c27_thisId;
  int32_T c27_y;
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c27_b_sfEvent = sf_mex_dup(c27_mxArrayInData);
  c27_identifier = c27_varName;
  c27_thisId.fIdentifier = c27_identifier;
  c27_thisId.fParent = NULL;
  c27_y = c27_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_b_sfEvent),
    &c27_thisId);
  sf_mex_destroy(&c27_b_sfEvent);
  *(int32_T *)c27_outData = c27_y;
  sf_mex_destroy(&c27_mxArrayInData);
}

static uint8_T c27_d_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_b_is_active_c27_Mooventure2016_Rev5, const
  char_T *c27_identifier)
{
  uint8_T c27_y;
  emlrtMsgIdentifier c27_thisId;
  c27_thisId.fIdentifier = c27_identifier;
  c27_thisId.fParent = NULL;
  c27_y = c27_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c27_b_is_active_c27_Mooventure2016_Rev5), &c27_thisId);
  sf_mex_destroy(&c27_b_is_active_c27_Mooventure2016_Rev5);
  return c27_y;
}

static uint8_T c27_e_emlrt_marshallIn(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  uint8_T c27_y;
  uint8_T c27_u0;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_u0, 1, 3, 0U, 0, 0U, 0);
  c27_y = c27_u0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void init_dsm_address_info(SFc27_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c27_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(553297520U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1496815281U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1783069435U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4112078071U);
}

mxArray *sf_c27_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1284490805U);
    pr[1] = (double)(1165740121U);
    pr[2] = (double)(184174721U);
    pr[3] = (double)(1165132879U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c27_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"radiatorFan\",},{M[8],M[0],T\"is_active_c27_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c27_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           27,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"maxTemp");
          _SFD_SET_DATA_PROPS(1,2,0,1,"radiatorFan");
          _SFD_SET_DATA_PROPS(2,1,1,0,"lowThreshold");
          _SFD_SET_DATA_PROPS(3,1,1,0,"mediumThreshold");
          _SFD_SET_DATA_PROPS(4,1,1,0,"highThreshold");
          _SFD_SET_DATA_PROPS(5,1,1,0,"acOn");
          _SFD_SET_DATA_PROPS(6,1,1,0,"fault");
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
        _SFD_CV_INIT_EML(0,1,5,0,0,0,0,6,3);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,417);
        _SFD_CV_INIT_EML_IF(0,0,96,119,139,417);
        _SFD_CV_INIT_EML_IF(0,1,139,167,187,417);
        _SFD_CV_INIT_EML_IF(0,2,187,243,263,417);
        _SFD_CV_INIT_EML_IF(0,3,263,320,340,417);
        _SFD_CV_INIT_EML_IF(0,4,340,370,390,417);

        {
          static int condStart[] = { 99, 111 };

          static int condEnd[] = { 107, 118 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(0,0,99,118,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 194, 219 };

          static int condEnd[] = { 215, 242 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,194,242,2,2,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 270, 298 };

          static int condEnd[] = { 294, 319 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,2,270,319,2,4,&(condStart[0]),&(condEnd[0]),3,
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
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c27_maxTemp;
          real_T *c27_radiatorFan;
          real_T *c27_lowThreshold;
          real_T *c27_mediumThreshold;
          real_T *c27_highThreshold;
          boolean_T *c27_acOn;
          boolean_T *c27_fault;
          c27_fault = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c27_acOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c27_highThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c27_mediumThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c27_lowThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c27_radiatorFan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c27_maxTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c27_maxTemp);
          _SFD_SET_DATA_VALUE_PTR(1U, c27_radiatorFan);
          _SFD_SET_DATA_VALUE_PTR(2U, c27_lowThreshold);
          _SFD_SET_DATA_VALUE_PTR(3U, c27_mediumThreshold);
          _SFD_SET_DATA_VALUE_PTR(4U, c27_highThreshold);
          _SFD_SET_DATA_VALUE_PTR(5U, c27_acOn);
          _SFD_SET_DATA_VALUE_PTR(6U, c27_fault);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c27_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c27_Mooventure2016_Rev5
    ((SFc27_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c27_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c27_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c27_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c27_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c27_Mooventure2016_Rev5
    ((SFc27_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c27_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c27_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c27_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c27_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c27_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c27_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c27_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c27_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc27_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc27_Mooventure2016_Rev5((SFc27_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c27_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c27_Mooventure2016_Rev5
      ((SFc27_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c27_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      27);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",27,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",27,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",27,6);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",27,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",27);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(733480191U));
  ssSetChecksum1(S,(1421573981U));
  ssSetChecksum2(S,(2736582321U));
  ssSetChecksum3(S,(47760085U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c27_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",27);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c27_Mooventure2016_Rev5(SimStruct *S)
{
  SFc27_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc27_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc27_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc27_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c27_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c27_Mooventure2016_Rev5;
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

void c27_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c27_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c27_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c27_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c27_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
