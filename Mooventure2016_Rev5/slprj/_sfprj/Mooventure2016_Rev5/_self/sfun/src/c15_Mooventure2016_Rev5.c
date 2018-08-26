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
#define c15_IN_Default                 (1U)
#define c15_IN_RampOut                 (3U)
#define c15_IN_RampIn                  (2U)
#define c15_IN_Saturated               (4U)

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
  *chartInstance, const mxArray *c15_b_tp_Default, const char_T *c15_identifier);
static uint8_T c15_c_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static real_T c15_d_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_TorqueOut, const char_T *c15_identifier);
static real_T c15_e_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
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
  real_T *c15_TorqueOut;
  c15_TorqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c15_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c15_doSetSimStateSideEffects = 0U;
  chartInstance->c15_setSimStateSideEffectsInfo = NULL;
  chartInstance->c15_tp_Default = 0U;
  chartInstance->c15_tp_RampIn = 0U;
  chartInstance->c15_tp_RampOut = 0U;
  chartInstance->c15_tp_Saturated = 0U;
  chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = 0U;
  chartInstance->c15_is_c15_Mooventure2016_Rev5 = 0U;
  chartInstance->c15_lastTorque = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c15_TorqueOut = 0.0;
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

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_Default) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
  }

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_RampOut) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
  }

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_RampIn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
  }

  if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_Saturated) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c15_sfEvent);
  }

  sf_debug_set_animation(c15_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c15_st;
  const mxArray *c15_y = NULL;
  real_T c15_hoistedGlobal;
  real_T c15_u;
  const mxArray *c15_b_y = NULL;
  real_T c15_b_hoistedGlobal;
  real_T c15_b_u;
  const mxArray *c15_c_y = NULL;
  uint8_T c15_c_hoistedGlobal;
  uint8_T c15_c_u;
  const mxArray *c15_d_y = NULL;
  uint8_T c15_d_hoistedGlobal;
  uint8_T c15_d_u;
  const mxArray *c15_e_y = NULL;
  real_T *c15_TorqueOut;
  c15_TorqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_st = NULL;
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellarray(4));
  c15_hoistedGlobal = *c15_TorqueOut;
  c15_u = c15_hoistedGlobal;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_b_hoistedGlobal = chartInstance->c15_lastTorque;
  c15_b_u = c15_b_hoistedGlobal;
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 1, c15_c_y);
  c15_c_hoistedGlobal = chartInstance->c15_is_active_c15_Mooventure2016_Rev5;
  c15_c_u = c15_c_hoistedGlobal;
  c15_d_y = NULL;
  sf_mex_assign(&c15_d_y, sf_mex_create("y", &c15_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 2, c15_d_y);
  c15_d_hoistedGlobal = chartInstance->c15_is_c15_Mooventure2016_Rev5;
  c15_d_u = c15_d_hoistedGlobal;
  c15_e_y = NULL;
  sf_mex_assign(&c15_e_y, sf_mex_create("y", &c15_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 3, c15_e_y);
  sf_mex_assign(&c15_st, c15_y);
  return c15_st;
}

static void set_sim_state_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c15_st)
{
  const mxArray *c15_u;
  real_T *c15_TorqueOut;
  c15_TorqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_u = sf_mex_dup(c15_st);
  *c15_TorqueOut = c15_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c15_u, 0)), "TorqueOut");
  chartInstance->c15_lastTorque = c15_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c15_u, 1)), "lastTorque");
  chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = c15_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 2)),
     "is_active_c15_Mooventure2016_Rev5");
  chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 3)),
     "is_c15_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c15_setSimStateSideEffectsInfo,
                c15_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c15_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c15_u);
  chartInstance->c15_doSetSimStateSideEffects = 1U;
  c15_update_debugger_state_c15_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c15_st);
}

static void c15_set_sim_state_side_effects_c15_Mooventure2016_Rev5
  (SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c15_doSetSimStateSideEffects != 0) {
    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_Default) {
      chartInstance->c15_tp_Default = 1U;
    } else {
      chartInstance->c15_tp_Default = 0U;
    }

    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_RampIn) {
      chartInstance->c15_tp_RampIn = 1U;
    } else {
      chartInstance->c15_tp_RampIn = 0U;
    }

    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_RampOut) {
      chartInstance->c15_tp_RampOut = 1U;
    } else {
      chartInstance->c15_tp_RampOut = 0U;
    }

    if (chartInstance->c15_is_c15_Mooventure2016_Rev5 == c15_IN_Saturated) {
      chartInstance->c15_tp_Saturated = 1U;
    } else {
      chartInstance->c15_tp_Saturated = 0U;
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
  real_T *c15_Activate;
  real_T *c15_TorqueIn;
  real_T *c15_RampOut;
  real_T *c15_RampIn;
  real_T *c15_MinTorque;
  real_T *c15_TorqueOut;
  c15_TorqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_MinTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c15_RampIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c15_RampOut = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c15_TorqueIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c15_Activate = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c15_set_sim_state_side_effects_c15_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c15_Activate, 0U);
  _SFD_DATA_RANGE_CHECK(*c15_TorqueIn, 1U);
  _SFD_DATA_RANGE_CHECK(*c15_RampOut, 2U);
  _SFD_DATA_RANGE_CHECK(*c15_RampIn, 3U);
  _SFD_DATA_RANGE_CHECK(*c15_MinTorque, 4U);
  _SFD_DATA_RANGE_CHECK(*c15_TorqueOut, 5U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c15_lastTorque, 6U);
  chartInstance->c15_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
  if ((int16_T)chartInstance->c15_is_active_c15_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
    chartInstance->c15_is_active_c15_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, chartInstance->c15_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c15_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
    chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_Default;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
    chartInstance->c15_tp_Default = 1U;
  } else {
    switch (chartInstance->c15_is_c15_Mooventure2016_Rev5) {
     case c15_IN_Default:
      CV_CHART_EVAL(14, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c15_Activate !=
            0U, chartInstance->c15_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_Default = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_RampOut;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_RampOut = 1U;
        chartInstance->c15_lastTorque = *c15_TorqueIn;
        _SFD_DATA_RANGE_CHECK(chartInstance->c15_lastTorque, 6U);
      } else {
        *c15_TorqueOut = *c15_TorqueIn;
        _SFD_DATA_RANGE_CHECK(*c15_TorqueOut, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c15_sfEvent);
      break;

     case c15_IN_RampIn:
      CV_CHART_EVAL(14, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c15_TorqueOut >=
            *c15_TorqueIn != 0U, chartInstance->c15_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_RampIn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_Default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_Default = 1U;
      } else {
        *c15_TorqueOut = chartInstance->c15_lastTorque;
        _SFD_DATA_RANGE_CHECK(*c15_TorqueOut, 5U);
        chartInstance->c15_lastTorque += *c15_RampIn;
        _SFD_DATA_RANGE_CHECK(chartInstance->c15_lastTorque, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c15_sfEvent);
      break;

     case c15_IN_RampOut:
      CV_CHART_EVAL(14, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c15_TorqueOut <=
            *c15_MinTorque != 0U, chartInstance->c15_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (!(*c15_Activate != 0.0)) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_RampOut = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_Saturated;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_Saturated = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     chartInstance->c15_sfEvent);
        if (CV_TRANSITION_EVAL(4U, !(_SFD_CCP_CALL(4U, 0, *c15_Activate != 0U,
               chartInstance->c15_sfEvent) != 0))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c15_sfEvent);
          chartInstance->c15_tp_RampOut = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c15_sfEvent);
          chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_RampIn;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
          chartInstance->c15_tp_RampIn = 1U;
        } else {
          *c15_TorqueOut = chartInstance->c15_lastTorque;
          _SFD_DATA_RANGE_CHECK(*c15_TorqueOut, 5U);
          chartInstance->c15_lastTorque -= *c15_RampOut;
          _SFD_DATA_RANGE_CHECK(chartInstance->c15_lastTorque, 6U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c15_sfEvent);
      break;

     case c15_IN_Saturated:
      CV_CHART_EVAL(14, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c15_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c15_sfEvent);
      if (CV_TRANSITION_EVAL(5U, !(_SFD_CCP_CALL(5U, 0, *c15_Activate != 0U,
             chartInstance->c15_sfEvent) != 0))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_Saturated = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c15_sfEvent);
        chartInstance->c15_is_c15_Mooventure2016_Rev5 = c15_IN_RampIn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c15_sfEvent);
        chartInstance->c15_tp_RampIn = 1U;
      } else {
        *c15_TorqueOut = *c15_MinTorque;
        _SFD_DATA_RANGE_CHECK(*c15_TorqueOut, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c15_sfEvent);
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
  *chartInstance, const mxArray *c15_b_tp_Default, const char_T *c15_identifier)
{
  uint8_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_tp_Default),
    &c15_thisId);
  sf_mex_destroy(&c15_b_tp_Default);
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
  const mxArray *c15_b_tp_Default;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  uint8_T c15_y;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_b_tp_Default = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_tp_Default),
    &c15_thisId);
  sf_mex_destroy(&c15_b_tp_Default);
  *(uint8_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  real_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(real_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_mxArrayOutData, c15_y);
  return c15_mxArrayOutData;
}

static real_T c15_d_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_TorqueOut, const char_T *c15_identifier)
{
  real_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_TorqueOut),
    &c15_thisId);
  sf_mex_destroy(&c15_TorqueOut);
  return c15_y;
}

static real_T c15_e_emlrt_marshallIn(SFc15_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  real_T c15_y;
  real_T c15_d0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_d0, 1, 0, 0U, 0, 0U, 0);
  c15_y = c15_d0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_TorqueOut;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  real_T c15_y;
  SFc15_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc15_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c15_TorqueOut = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_TorqueOut),
    &c15_thisId);
  sf_mex_destroy(&c15_TorqueOut);
  *(real_T *)c15_outData = c15_y;
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
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(85574463U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1924796189U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1815042151U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2140755879U);
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
    pr[0] = (double)(3657716567U);
    pr[1] = (double)(2059794650U);
    pr[2] = (double)(2221451191U);
    pr[3] = (double)(2889876540U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
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

static const mxArray *sf_get_sim_state_info_c15_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[6],T\"TorqueOut\",},{M[3],M[11],T\"lastTorque\",},{M[8],M[0],T\"is_active_c15_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c15_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
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
           4,
           6,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"Activate");
          _SFD_SET_DATA_PROPS(1,1,1,0,"TorqueIn");
          _SFD_SET_DATA_PROPS(2,1,1,0,"RampOut");
          _SFD_SET_DATA_PROPS(3,1,1,0,"RampIn");
          _SFD_SET_DATA_PROPS(4,1,1,0,"MinTorque");
          _SFD_SET_DATA_PROPS(5,2,0,1,"TorqueOut");
          _SFD_SET_DATA_PROPS(6,0,0,0,"lastTorque");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
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

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)
          c15_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_c_sf_marshallOut,(MexInFcnForType)
          c15_c_sf_marshallIn);

        {
          real_T *c15_Activate;
          real_T *c15_TorqueIn;
          real_T *c15_RampOut;
          real_T *c15_RampIn;
          real_T *c15_MinTorque;
          real_T *c15_TorqueOut;
          c15_TorqueOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c15_MinTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c15_RampIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c15_RampOut = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c15_TorqueIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c15_Activate = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c15_Activate);
          _SFD_SET_DATA_VALUE_PTR(1U, c15_TorqueIn);
          _SFD_SET_DATA_VALUE_PTR(2U, c15_RampOut);
          _SFD_SET_DATA_VALUE_PTR(3U, c15_RampIn);
          _SFD_SET_DATA_VALUE_PTR(4U, c15_MinTorque);
          _SFD_SET_DATA_VALUE_PTR(5U, c15_TorqueOut);
          _SFD_SET_DATA_VALUE_PTR(6U, &chartInstance->c15_lastTorque);
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
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",15,5);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",15,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",15);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2410362967U));
  ssSetChecksum1(S,(980438359U));
  ssSetChecksum2(S,(3880071226U));
  ssSetChecksum3(S,(674153059U));
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
