/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c2_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0U)
#define c2_IN_timed_out                (4U)
#define c2_IN_init                     (2U)
#define c2_IN_too_many_timeouts        (5U)
#define c2_IN_genset_standingby        (1U)
#define c2_IN_successful_start         (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *
  chartInstance);
static void enable_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c2_update_debugger_state_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c2_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_d_sf_marshall(void *chartInstanceVoid, void *c2_u);
static boolean_T c2_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_flt_crank_lockout, const char_T *c2_name);
static real_T c2_b_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_b_count, const char_T *c2_name);
static uint8_T c2_c_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Dyno_IPT_2014, const char_T
  *c2_name);
static const mxArray *c2_d_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_name);
static void init_test_point_addr_map(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  boolean_T *c2_flt_crank_lockout;
  boolean_T *c2_flt_max_crank_timeouts_exceeded;
  c2_flt_max_crank_timeouts_exceeded = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  chartInstance->c2_tp_genset_standingby = 0U;
  chartInstance->c2_tp_init = 0U;
  chartInstance->c2_tp_successful_start = 0U;
  chartInstance->c2_tp_timed_out = 0U;
  chartInstance->c2_tp_too_many_timeouts = 0U;
  chartInstance->c2_is_active_c2_Dyno_IPT_2014 = 0U;
  chartInstance->c2_is_c2_Dyno_IPT_2014 = 0U;
  chartInstance->c2_timeouts = 0.0;
  chartInstance->c2_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c2_flt_crank_lockout = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c2_flt_max_crank_timeouts_exceeded = FALSE;
  }
}

static void initialize_params_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *
  chartInstance)
{
}

static void enable_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c2_prevAniVal;
  c2_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c2_is_active_c2_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_timed_out) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_too_many_timeouts) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_genset_standingby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_successful_start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c2_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  boolean_T c2_hoistedGlobal;
  boolean_T c2_u;
  const mxArray *c2_b_y = NULL;
  boolean_T c2_b_hoistedGlobal;
  boolean_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  real_T c2_c_hoistedGlobal;
  real_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  real_T c2_d_hoistedGlobal;
  real_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  uint8_T c2_e_hoistedGlobal;
  uint8_T c2_e_u;
  const mxArray *c2_f_y = NULL;
  uint8_T c2_f_hoistedGlobal;
  uint8_T c2_f_u;
  const mxArray *c2_g_y = NULL;
  boolean_T *c2_flt_crank_lockout;
  boolean_T *c2_flt_max_crank_timeouts_exceeded;
  c2_flt_max_crank_timeouts_exceeded = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(6));
  c2_hoistedGlobal = *c2_flt_crank_lockout;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_flt_max_crank_timeouts_exceeded;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = chartInstance->c2_count;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = chartInstance->c2_timeouts;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_e_hoistedGlobal = chartInstance->c2_is_active_c2_Dyno_IPT_2014;
  c2_e_u = c2_e_hoistedGlobal;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_f_hoistedGlobal = chartInstance->c2_is_c2_Dyno_IPT_2014;
  c2_f_u = c2_f_hoistedGlobal;
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 5, c2_g_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  boolean_T *c2_flt_crank_lockout;
  boolean_T *c2_flt_max_crank_timeouts_exceeded;
  c2_flt_max_crank_timeouts_exceeded = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_u = sf_mex_dup(c2_st);
  *c2_flt_crank_lockout = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "flt_crank_lockout");
  *c2_flt_max_crank_timeouts_exceeded = c2_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)),
    "flt_max_crank_timeouts_exceeded");
  chartInstance->c2_count = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "count");
  chartInstance->c2_timeouts = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "timeouts");
  chartInstance->c2_is_active_c2_Dyno_IPT_2014 = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 4)),
     "is_active_c2_Dyno_IPT_2014");
  chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 5)),
    "is_c2_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 6)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_Dyno_IPT_2014
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_genset_standingby) {
      chartInstance->c2_tp_genset_standingby = 1U;
    } else {
      chartInstance->c2_tp_genset_standingby = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_init) {
      chartInstance->c2_tp_init = 1U;
    } else {
      chartInstance->c2_tp_init = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_successful_start) {
      chartInstance->c2_tp_successful_start = 1U;
    } else {
      chartInstance->c2_tp_successful_start = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_timed_out) {
      chartInstance->c2_tp_timed_out = 1U;
    } else {
      chartInstance->c2_tp_timed_out = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_IPT_2014 == c2_IN_too_many_timeouts) {
      chartInstance->c2_tp_too_many_timeouts = 1U;
    } else {
      chartInstance->c2_tp_too_many_timeouts = 0U;
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c2_previousEvent;
  int8_T *c2_genset_state;
  real_T *c2_cal_MAX_CRANK_TIMEOUTS;
  boolean_T *c2_flt_crank_lockout;
  boolean_T *c2_flt_max_crank_timeouts_exceeded;
  c2_flt_max_crank_timeouts_exceeded = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_cal_MAX_CRANK_TIMEOUTS = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_genset_state = (int8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c2_set_sim_state_side_effects_c2_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,1);
  _SFD_DATA_RANGE_CHECK(chartInstance->c2_timeouts, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_genset_state, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_cal_MAX_CRANK_TIMEOUTS, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_crank_lockout, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_max_crank_timeouts_exceeded, 4U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c2_count, 5U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c2_c2_Dyno_IPT_2014(chartInstance);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c2_c2_Dyno_IPT_2014(SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  real_T c2_d0;
  real_T c2_d1;
  boolean_T c2_b0;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  real_T c2_d2;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  real_T c2_d3;
  boolean_T *c2_flt_crank_lockout;
  boolean_T *c2_flt_max_crank_timeouts_exceeded;
  int8_T *c2_genset_state;
  real_T *c2_cal_MAX_CRANK_TIMEOUTS;
  c2_flt_max_crank_timeouts_exceeded = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_cal_MAX_CRANK_TIMEOUTS = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_genset_state = (int8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,1);
  if ((int16_T)chartInstance->c2_is_active_c2_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,1);
    chartInstance->c2_is_active_c2_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_init = 1U;
  } else {
    switch (chartInstance->c2_is_c2_Dyno_IPT_2014) {
     case c2_IN_genset_standingby:
      CV_CHART_EVAL(1,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c2_genset_state ==
              3)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if (*c2_genset_state >= 4) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c2_tp_genset_standingby = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_timed_out;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c2_tp_timed_out = 1U;
        chartInstance->c2_timeouts = chartInstance->c2_timeouts + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c2_timeouts, 0U);
        c2_d0 = chartInstance->c2_timeouts;
        sf_mex_printf("%s =\\n", "timeouts");
        sf_mex_call_debug("disp", 0U, 1U, 6, c2_d0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c2_genset_state
                >= 4)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c2_tp_genset_standingby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_successful_start;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c2_tp_successful_start = 1U;
          chartInstance->c2_timeouts = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c2_timeouts, 0U);
          c2_d1 = chartInstance->c2_timeouts;
          sf_mex_printf("%s =\\n", "timeouts");
          sf_mex_call_debug("disp", 0U, 1U, 6, c2_d1);
        } else {
          *c2_flt_crank_lockout = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_crank_lockout, 3U);
          c2_b0 = *c2_flt_crank_lockout;
          sf_mex_printf("%s =\\n", "flt_crank_lockout");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b0);
          *c2_flt_max_crank_timeouts_exceeded = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_max_crank_timeouts_exceeded, 4U);
          c2_b1 = *c2_flt_max_crank_timeouts_exceeded;
          sf_mex_printf("%s =\\n", "flt_max_crank_timeouts_exceeded");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c2_IN_init:
      CV_CHART_EVAL(1,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c2_tp_init = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_genset_standingby;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c2_tp_genset_standingby = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c2_IN_successful_start:
      CV_CHART_EVAL(1,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
      if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c2_genset_state ==
              0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c2_tp_successful_start = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_genset_standingby;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c2_tp_genset_standingby = 1U;
      } else {
        *c2_flt_crank_lockout = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_crank_lockout, 3U);
        c2_b2 = *c2_flt_crank_lockout;
        sf_mex_printf("%s =\\n", "flt_crank_lockout");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b2);
        *c2_flt_max_crank_timeouts_exceeded = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_max_crank_timeouts_exceeded, 4U);
        c2_b3 = *c2_flt_max_crank_timeouts_exceeded;
        sf_mex_printf("%s =\\n", "flt_max_crank_timeouts_exceeded");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b3);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c2_IN_timed_out:
      CV_CHART_EVAL(1,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
            ((chartInstance->c2_timeouts >= *c2_cal_MAX_CRANK_TIMEOUTS)!=0))) !=
          0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (*c2_genset_state == 0) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c2_tp_timed_out = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_too_many_timeouts;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c2_tp_too_many_timeouts = 1U;
        chartInstance->c2_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c2_count, 5U);
        c2_d2 = chartInstance->c2_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c2_d2);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
        if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c2_genset_state
                == 0)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c2_tp_timed_out = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_genset_standingby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
          chartInstance->c2_tp_genset_standingby = 1U;
        } else {
          *c2_flt_crank_lockout = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_crank_lockout, 3U);
          c2_b4 = *c2_flt_crank_lockout;
          sf_mex_printf("%s =\\n", "flt_crank_lockout");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b4);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c2_IN_too_many_timeouts:
      CV_CHART_EVAL(1,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,
            ((chartInstance->c2_count > 2.0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c2_tp_too_many_timeouts = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c2_is_c2_Dyno_IPT_2014 = c2_IN_genset_standingby;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c2_tp_genset_standingby = 1U;
      } else {
        *c2_flt_crank_lockout = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_crank_lockout, 3U);
        c2_b5 = *c2_flt_crank_lockout;
        sf_mex_printf("%s =\\n", "flt_crank_lockout");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b5);
        *c2_flt_max_crank_timeouts_exceeded = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_flt_max_crank_timeouts_exceeded, 4U);
        c2_b6 = *c2_flt_max_crank_timeouts_exceeded;
        sf_mex_printf("%s =\\n", "flt_max_crank_timeouts_exceeded");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b6);
        chartInstance->c2_count = chartInstance->c2_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c2_count, 5U);
        c2_d3 = chartInstance->c2_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c2_d3);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(1,0,0);
      chartInstance->c2_is_c2_Dyno_IPT_2014 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

const mxArray *sf_c2_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c2_nameCaptureInfo;
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  real_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((real_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_d_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((int8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static boolean_T c2_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_flt_crank_lockout, const
  char_T *c2_name)
{
  boolean_T c2_y;
  boolean_T c2_b7;
  sf_mex_import(c2_name, sf_mex_dup(c2_flt_crank_lockout), &c2_b7, 1, 11, 0U, 0,
                0U, 0);
  c2_y = c2_b7;
  sf_mex_destroy(&c2_flt_crank_lockout);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_b_count, const char_T *
  c2_name)
{
  real_T c2_y;
  real_T c2_d4;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_count), &c2_d4, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d4;
  sf_mex_destroy(&c2_b_count);
  return c2_y;
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Dyno_IPT_2014
  , const char_T *c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_is_active_c2_Dyno_IPT_2014), &c2_u0, 1,
                3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_b_is_active_c2_Dyno_IPT_2014);
  return c2_y;
}

static const mxArray *c2_d_emlrt_marshallIn(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c2_b_setSimStateSideEffectsInfo, const char_T *c2_name)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe
                (&c2_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static void init_test_point_addr_map(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c2_testPointAddrMap[0] = &chartInstance->c2_timeouts;
  chartInstance->c2_testPointAddrMap[1] = &chartInstance->c2_count;
  chartInstance->c2_testPointAddrMap[2] =
    &chartInstance->c2_tp_genset_standingby;
  chartInstance->c2_testPointAddrMap[3] = &chartInstance->c2_tp_init;
  chartInstance->c2_testPointAddrMap[4] = &chartInstance->c2_tp_successful_start;
  chartInstance->c2_testPointAddrMap[5] = &chartInstance->c2_tp_timed_out;
  chartInstance->c2_testPointAddrMap[6] =
    &chartInstance->c2_tp_too_many_timeouts;
}

static void **get_test_point_address_map(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c2_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c2_testPointMappingInfo;
}

static void init_dsm_address_info(SFc2_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c2_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3527514911U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3307255690U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(781279091U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1311444115U);
}

mxArray *sf_c2_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2134246866U);
    pr[1] = (double)(2612125876U);
    pr[2] = (double)(2740841385U);
    pr[3] = (double)(720227473U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[27],T\"flt_crank_lockout\",},{M[1],M[28],T\"flt_max_crank_timeouts_exceeded\",},{M[3],M[31],T\"count\",},{M[3],M[23],T\"timeouts\",},{M[8],M[0],T\"is_active_c2_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c2_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           2,
           5,
           8,
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
          init_script_number_translation(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Dyno_IPT_2014MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "timeouts",0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,
                              "genset_state",0,(MexFcnForType)c2_d_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_MAX_CRANK_TIMEOUTS",0,(MexFcnForType)
                              c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "flt_crank_lockout",0,(MexFcnForType)
                              c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "flt_max_crank_timeouts_exceeded",0,(MexFcnForType)
                              c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c2_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_CH_SUBSTATE_COUNT(5);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
        }

        _SFD_CV_INIT_CHART(5,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 35 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(1,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 35 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          int8_T *c2_genset_state;
          real_T *c2_cal_MAX_CRANK_TIMEOUTS;
          boolean_T *c2_flt_crank_lockout;
          boolean_T *c2_flt_max_crank_timeouts_exceeded;
          c2_flt_max_crank_timeouts_exceeded = (boolean_T *)
            ssGetOutputPortSignal(chartInstance->S, 2);
          c2_flt_crank_lockout = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c2_cal_MAX_CRANK_TIMEOUTS = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c2_genset_state = (int8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, &chartInstance->c2_timeouts);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_genset_state);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_cal_MAX_CRANK_TIMEOUTS);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_flt_crank_lockout);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_flt_max_crank_timeouts_exceeded);
          _SFD_SET_DATA_VALUE_PTR(5U, &chartInstance->c2_count);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_Dyno_IPT_2014
    ((SFc2_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c2_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c2_Dyno_IPT_2014(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c2_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c2_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_Dyno_IPT_2014((SFc2_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",2,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",2,2);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",2,2);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(421341634U));
  ssSetChecksum1(S,(4279932746U));
  ssSetChecksum2(S,(4057859063U));
  ssSetChecksum3(S,(1557320019U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_Dyno_IPT_2014(SimStruct *S)
{
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc2_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_Dyno_IPT_2014;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info(chartInstance);
  }

  chart_debug_initialization(S,1);
}

void c2_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_Dyno_IPT_2014_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "real_T", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "uint8_T", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 } };

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0 } };

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 } };

static const uint_T dimensionArray[] = {
  1, 1 };

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  { &sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0 }
};

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  { 0, 0, "StateflowChart/timeouts", "timeouts", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/count", "count", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/genset_standingby", "genset_standingby", 0, 1, 0, 0, 0
  },

  { 3, 0, "StateflowChart/init", "init", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/successful_start", "successful_start", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/timed_out", "timed_out", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/too_many_timeouts", "too_many_timeouts", 0, 1, 0, 0, 0
  } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    7                                  /* Num Block IO signals */
  },

  /* parameter tuning */
  {
    NULL,                              /* Block parameters Array    */
    0,                                 /* Num block parameters      */
    NULL,                              /* Variable parameters Array */
    0                                  /* Num variable parameters   */
  },

  /* block states */
  {
    NULL,                              /* Block States array        */
    0                                  /* Num Block States          */
  },

  /* Static maps */
  {
    dataTypeMap,                       /* Data Type Map            */
    dimensionMap,                      /* Data Dimension Map       */
    fixedPointMap,                     /* Fixed Point Map          */
    NULL,                              /* Structure Element map    */
    sampleTimeMap,                     /* Sample Times Map         */
    dimensionArray                     /* Dimension Array          */
  },

  /* Target type */
  "float"
};

static void init_test_point_mapping_info(SimStruct *S)
{
  rtwCAPI_ModelMappingInfo *testPointMappingInfo;
  void **testPointAddrMap;
  SFc2_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
    (ssGetUserData(S)))->chartInstance;
  init_test_point_addr_map(chartInstance);
  testPointMappingInfo = get_test_point_mapping_info(chartInstance);
  testPointAddrMap = get_test_point_address_map(chartInstance);
  rtwCAPI_SetStaticMap(*testPointMappingInfo, &testPointMappingStaticInfo);
  rtwCAPI_SetLoggingStaticMap(*testPointMappingInfo, NULL);
  rtwCAPI_SetInstanceLoggingInfo(*testPointMappingInfo, NULL);
  rtwCAPI_SetPath(*testPointMappingInfo, "");
  rtwCAPI_SetFullPath(*testPointMappingInfo, NULL);
  rtwCAPI_SetDataAddressMap(*testPointMappingInfo, testPointAddrMap);
  rtwCAPI_SetChildMMIArray(*testPointMappingInfo, NULL);
  rtwCAPI_SetChildMMIArrayLen(*testPointMappingInfo, 0);
  ssSetModelMappingInfoPtr(S, testPointMappingInfo);
}
