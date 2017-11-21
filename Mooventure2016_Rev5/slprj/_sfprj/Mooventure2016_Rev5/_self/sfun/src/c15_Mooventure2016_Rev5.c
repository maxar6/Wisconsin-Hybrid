/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c15_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c15_IN_NO_ACTIVE_CHILD         (0U)
#define c15_IN_PumpOff                 (1U)
#define c15_IN_PumpOn                  (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c15_update_debugger_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c15_st);
static void c15_set_sim_state_side_effects_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c15_Mooventure2016_Rev5(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber);
static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static int32_T c15_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static uint8_T c15_b_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_b_tp_PumpOff, const char_T *c15_identifier);
static uint8_T c15_c_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static boolean_T c15_d_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c15_PumpOn, const char_T *c15_identifier);
static boolean_T c15_e_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_f_emlrt_marshallIn
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c15_b_setSimStateSideEffectsInfo, const char_T *c15_identifier);
static const mxArray *c15_g_emlrt_marshallIn
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c15_u,
   const emlrtMsgIdentifier *c15_parentId);
static void init_dsm_address_info(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c15_PumpOn;
  c15_PumpOn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c15_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c15_doSetSimStateSideEffects = 0U;
  chartInstance->c15_setSimStateSideEffectsInfo = NULL;
  chartInstance->c15_tp_PumpOff = 0U;
  chartInstance->c15_tp_PumpOn = 0U;
  chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = 0U;
  chartInstance->c15_is_c15_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c15_PumpOn = FALSE;
  }
}

static void initialize_params_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c15_update_debugger_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c15_prevAniVal;
  c15_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c15_is_active_c15_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 14U, chartInstance->c15_sfEvent);
  }

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_PumpOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
  }

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_PumpOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
  }

  sf_debug_set_animation(c15_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c15_st;
  const mxArray *c15_y = NULL;
  boolean_T c15_hoistedGlobal;
  boolean_T c15_u;
  const mxArray *c15_b_y = NULL;
  uint8_T c15_b_hoistedGlobal;
  uint8_T c15_b_u;
  const mxArray *c15_c_y = NULL;
  uint8_T c15_c_hoistedGlobal;
  uint8_T c15_c_u;
  const mxArray *c15_d_y = NULL;
  boolean_T *c15_PumpOn;
  c15_PumpOn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_st = NULL;
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellarray(3));
  c15_hoistedGlobal = *c15_PumpOn;
  c15_u = c15_hoistedGlobal;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_b_hoistedGlobal = chartInstance->c15_is_active_c15_Mooventure2016_Rev5;
  c15_b_u = c15_b_hoistedGlobal;
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 1, c15_c_y);
  c15_c_hoistedGlobal = chartInstance->c15_is_c15_Mooventure2016_Rev5;
  c15_c_u = c15_c_hoistedGlobal;
  c15_d_y = NULL;
  sf_mex_assign(&c15_d_y, sf_mex_create("y", &c15_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 2, c15_d_y);
  sf_mex_assign(&c15_st, c15_y);
  return c15_st;
}

static void set_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c15_st)
{
  const mxArray *c15_u;
  boolean_T *c15_PumpOn;
  c15_PumpOn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_u = sf_mex_dup(c15_st);
  *c15_PumpOn = c15_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c15_u, 0)), "PumpOn");
  chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = c15_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 1)),
     "is_active_c15_Mooventure2016_Rev5");
  chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 2)),
     "is_c15_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c15_setSimStateSideEffectsInfo,
                c15_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c15_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c15_u);
  chartInstance->c15_doSetSimStateSideEffects = 1U;
  c15_update_debugger_state_c15_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c15_st);
}

static void c15_set_sim_state_side_effects_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c15_doSetSimStateSideEffects != 0) {
    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_PumpOff) {
      chartInstance->c15_tp_PumpOff = 1U;
    } else {
      chartInstance->c15_tp_PumpOff = 0U;
    }

    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_PumpOn) {
      chartInstance->c15_tp_PumpOn = 1U;
    } else {
      chartInstance->c15_tp_PumpOn = 0U;
    }

    chartInstance->c15_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c15_setSimStateSideEffectsInfo);
}

static void sf_c15_Mooventure2016_Rev5(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T *c15_SomethingsHot;
  boolean_T *c15_SomethingsCold;
  boolean_T *c15_PumpOn;
  c15_PumpOn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_SomethingsCold = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c15_SomethingsHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c15_set_sim_state_side_effects_c15_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c15_SomethingsHot, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c15_SomethingsCold, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c15_PumpOn, 2U);
  chartInstance->c15_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
  if ((int16_T)chartInstance->c15_is_active_c15_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
    chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c15_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
    chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_PumpOff;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
    chartInstance->c15_tp_PumpOff = 1U;
  } else {
    switch (chartInstance->c15_is_c15_Mooventure2016_Rev5) {
     case c15_IN_PumpOff:
      CV_CHART_EVAL(14, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
            *c15_SomethingsHot != 0U, chartInstance->c15_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_PumpOff = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_PumpOn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_PumpOn = 1U;
      } else {
        *c15_PumpOn = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c15_PumpOn, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c15_sfEvent);
      break;

     case c15_IN_PumpOn:
      CV_CHART_EVAL(14, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
            *c15_SomethingsCold != 0U, chartInstance->c15_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_PumpOn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_PumpOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_PumpOff = 1U;
      } else {
        *c15_PumpOn = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c15_PumpOn, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c15_sfEvent);
      break;

     default:
      CV_CHART_EVAL(14, 0, 0);
      chartInstance->c15_is_c15_Mooventure2016_Rev5 = (uint8_T)
        c15_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber)
{
}

const mxArray *sf_c15_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  sf_mex_assign(&c15_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c15_nameCaptureInfo;
}

static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  int32_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(int32_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_mxArrayOutData, c15_y);
  return c15_mxArrayOutData;
}

static int32_T c15_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  int32_T c15_y;
  int32_T c15_i0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_i0, 1, 6, 0U, 0, 0U, 0);
  c15_y = c15_i0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_b_sfEvent;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  int32_T c15_y;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_b_sfEvent = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_sfEvent),
    &c15_thisId);
  sf_mex_destroy(&c15_b_sfEvent);
  *(int32_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  uint8_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(uint8_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_mxArrayOutData, c15_y);
  return c15_mxArrayOutData;
}

static uint8_T c15_b_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_b_tp_PumpOff, const char_T *c15_identifier)
{
  uint8_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_tp_PumpOff),
    &c15_thisId);
  sf_mex_destroy(&c15_b_tp_PumpOff);
  return c15_y;
}

static uint8_T c15_c_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  uint8_T c15_y;
  uint8_T c15_u0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_u0, 1, 3, 0U, 0, 0U, 0);
  c15_y = c15_u0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_b_tp_PumpOff;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  uint8_T c15_y;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_b_tp_PumpOff = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_tp_PumpOff),
    &c15_thisId);
  sf_mex_destroy(&c15_b_tp_PumpOff);
  *(uint8_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  boolean_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(boolean_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_mxArrayOutData, c15_y);
  return c15_mxArrayOutData;
}

static boolean_T c15_d_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c15_PumpOn, const char_T *c15_identifier)
{
  boolean_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_PumpOn),
    &c15_thisId);
  sf_mex_destroy(&c15_PumpOn);
  return c15_y;
}

static boolean_T c15_e_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  boolean_T c15_y;
  boolean_T c15_b0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_b0, 1, 11, 0U, 0, 0U, 0);
  c15_y = c15_b0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_PumpOn;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  boolean_T c15_y;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_PumpOn = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_PumpOn),
    &c15_thisId);
  sf_mex_destroy(&c15_PumpOn);
  *(boolean_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static const mxArray *c15_f_emlrt_marshallIn
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c15_b_setSimStateSideEffectsInfo, const char_T *c15_identifier)
{
  const mxArray *c15_y = NULL;
  emlrtMsgIdentifier c15_thisId;
  c15_y = NULL;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  sf_mex_assign(&c15_y, c15_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_b_setSimStateSideEffectsInfo), &c15_thisId));
  sf_mex_destroy(&c15_b_setSimStateSideEffectsInfo);
  return c15_y;
}

static const mxArray *c15_g_emlrt_marshallIn
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c15_u,
   const emlrtMsgIdentifier *c15_parentId)
{
  const mxArray *c15_y = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_duplicatearraysafe(&c15_u));
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void init_dsm_address_info(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c15_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2385834366U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3392065470U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1461543691U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3237593908U);
}

mxArray *sf_c15_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3816194049U);
    pr[1] = (double)(272805588U);
    pr[2] = (double)(4281663591U);
    pr[3] = (double)(3017488663U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

static const mxArray *sf_get_sim_state_info_c15_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[36],T\"PumpOn\",},{M[8],M[0],T\"is_active_c15_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c15_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           15,
           2,
           3,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"SomethingsHot");
          _SFD_SET_DATA_PROPS(1,1,1,0,"SomethingsCold");
          _SFD_SET_DATA_PROPS(2,2,0,1,"PumpOn");
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

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)
          c15_c_sf_marshallIn);

        {
          boolean_T *c15_SomethingsHot;
          boolean_T *c15_SomethingsCold;
          boolean_T *c15_PumpOn;
          c15_PumpOn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c15_SomethingsCold = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c15_SomethingsHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          _SFD_SET_DATA_VALUE_PTR(0U, c15_SomethingsHot);
          _SFD_SET_DATA_VALUE_PTR(1U, c15_SomethingsCold);
          _SFD_SET_DATA_VALUE_PTR(2U, c15_PumpOn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c15_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c15_Mooventure2016_Rev5
    ((SFc15_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c15_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c15_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c15_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c15_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c15_Mooventure2016_Rev5
    ((SFc15_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c15_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c15_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c15_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c15_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c15_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c15_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c15_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c15_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc15_Mooventure2016_Rev5((SFc15_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_Mooventure2016_Rev5
      ((SFc15_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c15_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      15);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",15,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",15,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",15,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",15,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",15);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1547603981U));
  ssSetChecksum1(S,(4204145352U));
  ssSetChecksum2(S,(1629356800U));
  ssSetChecksum3(S,(3614009602U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c15_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",15);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c15_Mooventure2016_Rev5(SimStruct *S)
{
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc15_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc15_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c15_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c15_Mooventure2016_Rev5;
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

void c15_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c15_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
