/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c62_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c62_IN_NO_ACTIVE_CHILD         (0U)
#define c62_IN_Default                 (2U)
#define c62_IN_CommsLost               (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c62_update_debugger_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c62_st);
static void c62_set_sim_state_side_effects_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c62_Mooventure2016_Rev5(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c62_machineNumber, uint32_T
  c62_chartNumber);
static const mxArray *c62_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static int32_T c62_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static void c62_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_b_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static uint8_T c62_b_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_b_tp_Default, const char_T *c62_identifier);
static uint8_T c62_c_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static void c62_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_c_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static const mxArray *c62_d_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static real_T c62_d_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_val, const char_T *c62_identifier);
static real_T c62_e_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static void c62_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_f_emlrt_marshallIn
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c62_b_setSimStateSideEffectsInfo, const char_T *c62_identifier);
static const mxArray *c62_g_emlrt_marshallIn
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c62_u,
   const emlrtMsgIdentifier *c62_parentId);
static void init_dsm_address_info(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c62_val;
  c62_val = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c62_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c62_doSetSimStateSideEffects = 0U;
  chartInstance->c62_setSimStateSideEffectsInfo = NULL;
  chartInstance->c62_tp_CommsLost = 0U;
  chartInstance->c62_tp_Default = 0U;
  chartInstance->c62_is_active_c62_Mooventure2016_Rev5 = 0U;
  chartInstance->c62_is_c62_Mooventure2016_Rev5 = 0U;
  chartInstance->c62_tempval = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c62_val = 0.0;
  }
}

static void initialize_params_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c62_update_debugger_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c62_prevAniVal;
  c62_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c62_is_active_c62_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 61U, chartInstance->c62_sfEvent);
  }

  if (chartInstance->c62_is_c62_Mooventure2016_Rev5 == c62_IN_Default) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
  }

  if (chartInstance->c62_is_c62_Mooventure2016_Rev5 == c62_IN_CommsLost) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
  }

  sf_debug_set_animation(c62_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c62_st;
  const mxArray *c62_y = NULL;
  real_T c62_hoistedGlobal;
  real_T c62_u;
  const mxArray *c62_b_y = NULL;
  real_T c62_b_hoistedGlobal;
  real_T c62_b_u;
  const mxArray *c62_c_y = NULL;
  uint8_T c62_c_hoistedGlobal;
  uint8_T c62_c_u;
  const mxArray *c62_d_y = NULL;
  uint8_T c62_d_hoistedGlobal;
  uint8_T c62_d_u;
  const mxArray *c62_e_y = NULL;
  real_T *c62_val;
  c62_val = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c62_st = NULL;
  c62_st = NULL;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_createcellarray(4));
  c62_hoistedGlobal = *c62_val;
  c62_u = c62_hoistedGlobal;
  c62_b_y = NULL;
  sf_mex_assign(&c62_b_y, sf_mex_create("y", &c62_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c62_y, 0, c62_b_y);
  c62_b_hoistedGlobal = chartInstance->c62_tempval;
  c62_b_u = c62_b_hoistedGlobal;
  c62_c_y = NULL;
  sf_mex_assign(&c62_c_y, sf_mex_create("y", &c62_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c62_y, 1, c62_c_y);
  c62_c_hoistedGlobal = chartInstance->c62_is_active_c62_Mooventure2016_Rev5;
  c62_c_u = c62_c_hoistedGlobal;
  c62_d_y = NULL;
  sf_mex_assign(&c62_d_y, sf_mex_create("y", &c62_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c62_y, 2, c62_d_y);
  c62_d_hoistedGlobal = chartInstance->c62_is_c62_Mooventure2016_Rev5;
  c62_d_u = c62_d_hoistedGlobal;
  c62_e_y = NULL;
  sf_mex_assign(&c62_e_y, sf_mex_create("y", &c62_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c62_y, 3, c62_e_y);
  sf_mex_assign(&c62_st, c62_y);
  return c62_st;
}

static void set_sim_state_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c62_st)
{
  const mxArray *c62_u;
  real_T *c62_val;
  c62_val = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c62_u = sf_mex_dup(c62_st);
  *c62_val = c62_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c62_u, 0)), "val");
  chartInstance->c62_tempval = c62_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c62_u, 1)), "tempval");
  chartInstance->c62_is_active_c62_Mooventure2016_Rev5 = c62_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c62_u, 2)),
     "is_active_c62_Mooventure2016_Rev5");
  chartInstance->c62_is_c62_Mooventure2016_Rev5 = c62_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c62_u, 3)),
     "is_c62_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c62_setSimStateSideEffectsInfo,
                c62_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c62_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c62_u);
  chartInstance->c62_doSetSimStateSideEffects = 1U;
  c62_update_debugger_state_c62_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c62_st);
}

static void c62_set_sim_state_side_effects_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c62_doSetSimStateSideEffects != 0) {
    if (chartInstance->c62_is_c62_Mooventure2016_Rev5 == c62_IN_CommsLost) {
      chartInstance->c62_tp_CommsLost = 1U;
    } else {
      chartInstance->c62_tp_CommsLost = 0U;
    }

    if (chartInstance->c62_is_c62_Mooventure2016_Rev5 == c62_IN_Default) {
      chartInstance->c62_tp_Default = 1U;
    } else {
      chartInstance->c62_tp_Default = 0U;
    }

    chartInstance->c62_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c62_setSimStateSideEffectsInfo);
}

static void sf_c62_Mooventure2016_Rev5(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c62_temp;
  real_T *c62_cval;
  boolean_T *c62_zval;
  real_T *c62_val;
  real_T *c62_lval;
  boolean_T *c62_znow;
  c62_znow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c62_lval = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c62_val = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c62_zval = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c62_cval = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c62_set_sim_state_side_effects_c62_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 61U, chartInstance->c62_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c62_cval, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c62_zval, 1U);
  _SFD_DATA_RANGE_CHECK(*c62_val, 2U);
  _SFD_DATA_RANGE_CHECK(*c62_lval, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c62_znow, 4U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c62_tempval, 5U);
  chartInstance->c62_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 61U, chartInstance->c62_sfEvent);
  if ((int16_T)chartInstance->c62_is_active_c62_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 61U, chartInstance->c62_sfEvent);
    chartInstance->c62_is_active_c62_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 61U, chartInstance->c62_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c62_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
    chartInstance->c62_is_c62_Mooventure2016_Rev5 = c62_IN_Default;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
    chartInstance->c62_tp_Default = 1U;
  } else {
    switch (chartInstance->c62_is_c62_Mooventure2016_Rev5) {
     case c62_IN_CommsLost:
      CV_CHART_EVAL(61, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c62_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c62_sfEvent);
      c62_temp = (_SFD_CCP_CALL(2U, 0, *c62_zval != 0U,
        chartInstance->c62_sfEvent) != 0);
      if (!c62_temp) {
        c62_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)*c62_znow == 0 != 0U,
          chartInstance->c62_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c62_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c62_sfEvent);
        chartInstance->c62_tp_CommsLost = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
        chartInstance->c62_is_c62_Mooventure2016_Rev5 = c62_IN_Default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
        chartInstance->c62_tp_Default = 1U;
      } else {
        *c62_val = chartInstance->c62_tempval;
        _SFD_DATA_RANGE_CHECK(*c62_val, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c62_sfEvent);
      break;

     case c62_IN_Default:
      CV_CHART_EVAL(61, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c62_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c62_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, (int16_T)
            *c62_znow == 1 != 0U, chartInstance->c62_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
        chartInstance->c62_tp_Default = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c62_sfEvent);
        chartInstance->c62_is_c62_Mooventure2016_Rev5 = c62_IN_CommsLost;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
        chartInstance->c62_tp_CommsLost = 1U;
        chartInstance->c62_tempval = *c62_lval;
        _SFD_DATA_RANGE_CHECK(chartInstance->c62_tempval, 5U);
      } else {
        *c62_val = *c62_cval;
        _SFD_DATA_RANGE_CHECK(*c62_val, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c62_sfEvent);
      break;

     default:
      CV_CHART_EVAL(61, 0, 0);
      chartInstance->c62_is_c62_Mooventure2016_Rev5 = (uint8_T)
        c62_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c62_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 61U, chartInstance->c62_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc62_Mooventure2016_Rev5
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c62_machineNumber, uint32_T
  c62_chartNumber)
{
}

const mxArray *sf_c62_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c62_nameCaptureInfo = NULL;
  c62_nameCaptureInfo = NULL;
  sf_mex_assign(&c62_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c62_nameCaptureInfo;
}

static const mxArray *c62_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(int32_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c62_mxArrayOutData, c62_y);
  return c62_mxArrayOutData;
}

static int32_T c62_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  int32_T c62_y;
  int32_T c62_i0;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_i0, 1, 6, 0U, 0, 0U, 0);
  c62_y = c62_i0;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void c62_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_sfEvent;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  int32_T c62_y;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_b_sfEvent = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_sfEvent),
    &c62_thisId);
  sf_mex_destroy(&c62_b_sfEvent);
  *(int32_T *)c62_outData = c62_y;
  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_b_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  uint8_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(uint8_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c62_mxArrayOutData, c62_y);
  return c62_mxArrayOutData;
}

static uint8_T c62_b_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_b_tp_Default, const char_T *c62_identifier)
{
  uint8_T c62_y;
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_tp_Default),
    &c62_thisId);
  sf_mex_destroy(&c62_b_tp_Default);
  return c62_y;
}

static uint8_T c62_c_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  uint8_T c62_y;
  uint8_T c62_u0;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_u0, 1, 3, 0U, 0, 0U, 0);
  c62_y = c62_u0;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void c62_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_tp_Default;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  uint8_T c62_y;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_b_tp_Default = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_tp_Default),
    &c62_thisId);
  sf_mex_destroy(&c62_b_tp_Default);
  *(uint8_T *)c62_outData = c62_y;
  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_c_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  real_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(real_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c62_mxArrayOutData, c62_y);
  return c62_mxArrayOutData;
}

static const mxArray *c62_d_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  boolean_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(boolean_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c62_mxArrayOutData, c62_y);
  return c62_mxArrayOutData;
}

static real_T c62_d_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_val, const char_T *c62_identifier)
{
  real_T c62_y;
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_val), &c62_thisId);
  sf_mex_destroy(&c62_val);
  return c62_y;
}

static real_T c62_e_emlrt_marshallIn(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  real_T c62_y;
  real_T c62_d0;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_d0, 1, 0, 0U, 0, 0U, 0);
  c62_y = c62_d0;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void c62_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_val;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  real_T c62_y;
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c62_val = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_val), &c62_thisId);
  sf_mex_destroy(&c62_val);
  *(real_T *)c62_outData = c62_y;
  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_f_emlrt_marshallIn
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c62_b_setSimStateSideEffectsInfo, const char_T *c62_identifier)
{
  const mxArray *c62_y = NULL;
  emlrtMsgIdentifier c62_thisId;
  c62_y = NULL;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  sf_mex_assign(&c62_y, c62_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c62_b_setSimStateSideEffectsInfo), &c62_thisId));
  sf_mex_destroy(&c62_b_setSimStateSideEffectsInfo);
  return c62_y;
}

static const mxArray *c62_g_emlrt_marshallIn
  (SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c62_u,
   const emlrtMsgIdentifier *c62_parentId)
{
  const mxArray *c62_y = NULL;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_duplicatearraysafe(&c62_u));
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void init_dsm_address_info(SFc62_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c62_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2652354165U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(952325769U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1349642316U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2531549906U);
}

mxArray *sf_c62_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3030132800U);
    pr[1] = (double)(389922136U);
    pr[2] = (double)(104987322U);
    pr[3] = (double)(107083729U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
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

static const mxArray *sf_get_sim_state_info_c62_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[3],T\"val\",},{M[3],M[12],T\"tempval\",},{M[8],M[0],T\"is_active_c62_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c62_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c62_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           62,
           2,
           3,
           6,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"cval");
          _SFD_SET_DATA_PROPS(1,1,1,0,"zval");
          _SFD_SET_DATA_PROPS(2,2,0,1,"val");
          _SFD_SET_DATA_PROPS(3,1,1,0,"lval");
          _SFD_SET_DATA_PROPS(4,1,1,0,"znow");
          _SFD_SET_DATA_PROPS(5,0,0,0,"tempval");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 5, 16 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 5, 16 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_c_sf_marshallOut,(MexInFcnForType)
          c62_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_c_sf_marshallOut,(MexInFcnForType)
          c62_c_sf_marshallIn);

        {
          real_T *c62_cval;
          boolean_T *c62_zval;
          real_T *c62_val;
          real_T *c62_lval;
          boolean_T *c62_znow;
          c62_znow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c62_lval = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c62_val = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c62_zval = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c62_cval = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c62_cval);
          _SFD_SET_DATA_VALUE_PTR(1U, c62_zval);
          _SFD_SET_DATA_VALUE_PTR(2U, c62_val);
          _SFD_SET_DATA_VALUE_PTR(3U, c62_lval);
          _SFD_SET_DATA_VALUE_PTR(4U, c62_znow);
          _SFD_SET_DATA_VALUE_PTR(5U, &chartInstance->c62_tempval);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c62_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c62_Mooventure2016_Rev5
    ((SFc62_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c62_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c62_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c62_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c62_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c62_Mooventure2016_Rev5
    ((SFc62_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c62_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c62_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c62_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c62_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c62_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c62_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c62_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c62_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc62_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc62_Mooventure2016_Rev5((SFc62_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c62_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c62_Mooventure2016_Rev5
      ((SFc62_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c62_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      62);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",62,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",62,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",62,4);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",62,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",62);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2958565332U));
  ssSetChecksum1(S,(1401054966U));
  ssSetChecksum2(S,(3751289445U));
  ssSetChecksum3(S,(2479225990U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c62_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",62);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c62_Mooventure2016_Rev5(SimStruct *S)
{
  SFc62_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc62_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc62_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc62_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c62_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c62_Mooventure2016_Rev5;
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

void c62_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c62_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c62_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c62_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c62_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
