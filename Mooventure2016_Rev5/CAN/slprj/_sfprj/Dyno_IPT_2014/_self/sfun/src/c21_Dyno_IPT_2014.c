/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c21_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c21_IN_NO_ACTIVE_CHILD         (0U)
#define c21_IN_standby                 (3U)
#define c21_IN_regen_induced_genset_disable (1U)
#define c21_IN_reset_regen_engine_lockout_timer (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance);
static void enable_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c21_update_debugger_state_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_st);
static void c21_set_sim_state_side_effects_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c21_chartstep_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber);
static const mxArray *c21_sf_marshall(void *chartInstanceVoid, void *c21_u);
static const mxArray *c21_b_sf_marshall(void *chartInstanceVoid, void *c21_u);
static const mxArray *c21_c_sf_marshall(void *chartInstanceVoid, void *c21_u);
static real_T c21_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_regen_disable_genset, const char_T
  *c21_name);
static uint8_T c21_b_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_Dyno_IPT_2014, const char_T
  *c21_name);
static const mxArray *c21_c_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_b_setSimStateSideEffectsInfo, const char_T *
  c21_name);
static void init_test_point_addr_map(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T *c21_regen_disable_genset;
  c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c21_doSetSimStateSideEffects = 0U;
  chartInstance->c21_setSimStateSideEffectsInfo = NULL;
  chartInstance->c21_tp_regen_induced_genset_disable = 0U;
  chartInstance->c21_tp_reset_regen_engine_lockout_timer = 0U;
  chartInstance->c21_tp_standby = 0U;
  chartInstance->c21_is_active_c21_Dyno_IPT_2014 = 0U;
  chartInstance->c21_is_c21_Dyno_IPT_2014 = 0U;
  chartInstance->c21_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c21_regen_disable_genset = 0.0;
  }
}

static void initialize_params_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance)
{
}

static void enable_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c21_update_debugger_state_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c21_prevAniVal;
  c21_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c21_is_active_c21_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,7);
  }

  if (chartInstance->c21_is_c21_Dyno_IPT_2014 == c21_IN_standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c21_is_c21_Dyno_IPT_2014 ==
      c21_IN_regen_induced_genset_disable) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c21_is_c21_Dyno_IPT_2014 ==
      c21_IN_reset_regen_engine_lockout_timer) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c21_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c21_st = NULL;
  const mxArray *c21_y = NULL;
  real_T c21_hoistedGlobal;
  real_T c21_u;
  const mxArray *c21_b_y = NULL;
  real_T c21_b_hoistedGlobal;
  real_T c21_b_u;
  const mxArray *c21_c_y = NULL;
  uint8_T c21_c_hoistedGlobal;
  uint8_T c21_c_u;
  const mxArray *c21_d_y = NULL;
  uint8_T c21_d_hoistedGlobal;
  uint8_T c21_d_u;
  const mxArray *c21_e_y = NULL;
  real_T *c21_regen_disable_genset;
  c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellarray(4));
  c21_hoistedGlobal = *c21_regen_disable_genset;
  c21_u = c21_hoistedGlobal;
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_b_hoistedGlobal = chartInstance->c21_count;
  c21_b_u = c21_b_hoistedGlobal;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 1, c21_c_y);
  c21_c_hoistedGlobal = chartInstance->c21_is_active_c21_Dyno_IPT_2014;
  c21_c_u = c21_c_hoistedGlobal;
  c21_d_y = NULL;
  sf_mex_assign(&c21_d_y, sf_mex_create("y", &c21_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 2, c21_d_y);
  c21_d_hoistedGlobal = chartInstance->c21_is_c21_Dyno_IPT_2014;
  c21_d_u = c21_d_hoistedGlobal;
  c21_e_y = NULL;
  sf_mex_assign(&c21_e_y, sf_mex_create("y", &c21_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c21_y, 3, c21_e_y);
  sf_mex_assign(&c21_st, c21_y);
  return c21_st;
}

static void set_sim_state_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  real_T *c21_regen_disable_genset;
  c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_u = sf_mex_dup(c21_st);
  *c21_regen_disable_genset = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_u, 0)), "regen_disable_genset");
  chartInstance->c21_count = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_u, 1)), "count");
  chartInstance->c21_is_active_c21_Dyno_IPT_2014 = c21_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c21_u, 2)),
     "is_active_c21_Dyno_IPT_2014");
  chartInstance->c21_is_c21_Dyno_IPT_2014 = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c21_u, 3)),
    "is_c21_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c21_setSimStateSideEffectsInfo,
                c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c21_u
     , 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c21_u);
  chartInstance->c21_doSetSimStateSideEffects = 1U;
  c21_update_debugger_state_c21_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void c21_set_sim_state_side_effects_c21_Dyno_IPT_2014
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c21_doSetSimStateSideEffects != 0) {
    if (chartInstance->c21_is_c21_Dyno_IPT_2014 ==
        c21_IN_regen_induced_genset_disable) {
      chartInstance->c21_tp_regen_induced_genset_disable = 1U;
    } else {
      chartInstance->c21_tp_regen_induced_genset_disable = 0U;
    }

    if (chartInstance->c21_is_c21_Dyno_IPT_2014 ==
        c21_IN_reset_regen_engine_lockout_timer) {
      chartInstance->c21_tp_reset_regen_engine_lockout_timer = 1U;
    } else {
      chartInstance->c21_tp_reset_regen_engine_lockout_timer = 0U;
    }

    if (chartInstance->c21_is_c21_Dyno_IPT_2014 == c21_IN_standby) {
      chartInstance->c21_tp_standby = 1U;
    } else {
      chartInstance->c21_tp_standby = 0U;
    }

    chartInstance->c21_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c21_setSimStateSideEffectsInfo);
}

static void sf_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c21_previousEvent;
  real_T *c21_regen_disable_genset;
  boolean_T *c21_decel_stopped;
  real_T *c21_cal_max_charge_current;
  real_T *c21_cal_regen_engine_lockout;
  real_T *c21_gen_current;
  c21_gen_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c21_cal_regen_engine_lockout = (real_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c21_cal_max_charge_current = (real_T *)ssGetInputPortSignal(chartInstance->S,
    1);
  c21_decel_stopped = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c21_set_sim_state_side_effects_c21_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,7);
  _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
  _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c21_decel_stopped, 2U);
  _SFD_DATA_RANGE_CHECK(*c21_cal_max_charge_current, 3U);
  _SFD_DATA_RANGE_CHECK(*c21_cal_regen_engine_lockout, 4U);
  _SFD_DATA_RANGE_CHECK(*c21_gen_current, 5U);
  c21_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c21_chartstep_c21_Dyno_IPT_2014(chartInstance);
  _sfEvent_ = c21_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c21_chartstep_c21_Dyno_IPT_2014(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T c21_d0;
  real_T c21_d1;
  real_T c21_d2;
  boolean_T c21_temp;
  real_T c21_d3;
  real_T c21_d4;
  real_T c21_d5;
  real_T c21_d6;
  real_T c21_d7;
  real_T c21_d8;
  real_T c21_d9;
  real_T *c21_gen_current;
  real_T *c21_cal_max_charge_current;
  real_T *c21_regen_disable_genset;
  boolean_T *c21_decel_stopped;
  real_T *c21_cal_regen_engine_lockout;
  c21_gen_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c21_cal_regen_engine_lockout = (real_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c21_cal_max_charge_current = (real_T *)ssGetInputPortSignal(chartInstance->S,
    1);
  c21_decel_stopped = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,7);
  if ((int16_T)chartInstance->c21_is_active_c21_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,7);
    chartInstance->c21_is_active_c21_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c21_is_c21_Dyno_IPT_2014 = c21_IN_standby;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c21_tp_standby = 1U;
  } else {
    switch (chartInstance->c21_is_c21_Dyno_IPT_2014) {
     case c21_IN_regen_induced_genset_disable:
      CV_CHART_EVAL(7,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c21_gen_current >
              *c21_cal_max_charge_current)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions= 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if (*c21_decel_stopped) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          if ((chartInstance->c21_count > *c21_cal_regen_engine_lockout) &&
              (*c21_gen_current < *c21_cal_max_charge_current)) {
            transitionList[numTransitions] = 2;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c21_tp_regen_induced_genset_disable = 0U;
        chartInstance->c21_is_c21_Dyno_IPT_2014 = (uint8_T)
          c21_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c21_is_c21_Dyno_IPT_2014 =
          c21_IN_regen_induced_genset_disable;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c21_tp_regen_induced_genset_disable = 1U;
        chartInstance->c21_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
        c21_d0 = chartInstance->c21_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c21_d0);
        *c21_regen_disable_genset = 1.0;
        _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
        c21_d1 = *c21_regen_disable_genset;
        sf_mex_printf("%s =\\n", "regen_disable_genset");
        sf_mex_call_debug("disp", 0U, 1U, 6, c21_d1);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
              ((*c21_decel_stopped)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 3;
            sf_debug_transition_conflict_check_begin();
            if ((chartInstance->c21_count > *c21_cal_regen_engine_lockout) &&
                (*c21_gen_current < *c21_cal_max_charge_current)) {
              transitionList[numTransitions] = 2;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c21_tp_regen_induced_genset_disable = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c21_is_c21_Dyno_IPT_2014 =
            c21_IN_reset_regen_engine_lockout_timer;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c21_tp_reset_regen_engine_lockout_timer = 1U;
          chartInstance->c21_count = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
          c21_d2 = chartInstance->c21_count;
          sf_mex_printf("%s =\\n", "count");
          sf_mex_call_debug("disp", 0U, 1U, 6, c21_d2);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
          c21_temp = (_SFD_CCP_CALL(2,0,((chartInstance->c21_count >
            *c21_cal_regen_engine_lockout)!=0)) != 0);
          if (c21_temp) {
            c21_temp = (_SFD_CCP_CALL(2,1,((*c21_gen_current <
              *c21_cal_max_charge_current)!=0)) != 0);
          }

          if (CV_TRANSITION_EVAL(2U, (int32_T)c21_temp) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
            chartInstance->c21_tp_regen_induced_genset_disable = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
            chartInstance->c21_is_c21_Dyno_IPT_2014 = c21_IN_standby;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
            chartInstance->c21_tp_standby = 1U;
          } else {
            *c21_regen_disable_genset = 1.0;
            _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
            c21_d3 = *c21_regen_disable_genset;
            sf_mex_printf("%s =\\n", "regen_disable_genset");
            sf_mex_call_debug("disp", 0U, 1U, 6, c21_d3);
            chartInstance->c21_count = chartInstance->c21_count + 1.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
            c21_d4 = chartInstance->c21_count;
            sf_mex_printf("%s =\\n", "count");
            sf_mex_call_debug("disp", 0U, 1U, 6, c21_d4);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c21_IN_reset_regen_engine_lockout_timer:
      CV_CHART_EVAL(7,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c21_tp_reset_regen_engine_lockout_timer = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c21_is_c21_Dyno_IPT_2014 =
        c21_IN_regen_induced_genset_disable;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c21_tp_regen_induced_genset_disable = 1U;
      chartInstance->c21_count = 0.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
      c21_d5 = chartInstance->c21_count;
      sf_mex_printf("%s =\\n", "count");
      sf_mex_call_debug("disp", 0U, 1U, 6, c21_d5);
      *c21_regen_disable_genset = 1.0;
      _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
      c21_d6 = *c21_regen_disable_genset;
      sf_mex_printf("%s =\\n", "regen_disable_genset");
      sf_mex_call_debug("disp", 0U, 1U, 6, c21_d6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c21_IN_standby:
      CV_CHART_EVAL(7,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c21_gen_current >
              *c21_cal_max_charge_current)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c21_tp_standby = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c21_is_c21_Dyno_IPT_2014 =
          c21_IN_regen_induced_genset_disable;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c21_tp_regen_induced_genset_disable = 1U;
        chartInstance->c21_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c21_count, 0U);
        c21_d7 = chartInstance->c21_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c21_d7);
        *c21_regen_disable_genset = 1.0;
        _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
        c21_d8 = *c21_regen_disable_genset;
        sf_mex_printf("%s =\\n", "regen_disable_genset");
        sf_mex_call_debug("disp", 0U, 1U, 6, c21_d8);
      } else {
        *c21_regen_disable_genset = 0.0;
        _SFD_DATA_RANGE_CHECK(*c21_regen_disable_genset, 1U);
        c21_d9 = *c21_regen_disable_genset;
        sf_mex_printf("%s =\\n", "regen_disable_genset");
        sf_mex_call_debug("disp", 0U, 1U, 6, c21_d9);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     default:
      CV_CHART_EVAL(7,0,0);
      chartInstance->c21_is_c21_Dyno_IPT_2014 = (uint8_T)c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber)
{
}

const mxArray *sf_c21_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c21_nameCaptureInfo;
}

static const mxArray *c21_sf_marshall(void *chartInstanceVoid, void *c21_u)
{
  const mxArray *c21_y = NULL;
  uint8_T c21_b_u;
  const mxArray *c21_b_y = NULL;
  SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c21_y = NULL;
  c21_b_u = *((uint8_T *)c21_u);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c21_y, c21_b_y);
  return c21_y;
}

static const mxArray *c21_b_sf_marshall(void *chartInstanceVoid, void *c21_u)
{
  const mxArray *c21_y = NULL;
  boolean_T c21_b_u;
  const mxArray *c21_b_y = NULL;
  SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c21_y = NULL;
  c21_b_u = *((boolean_T *)c21_u);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c21_y, c21_b_y);
  return c21_y;
}

static const mxArray *c21_c_sf_marshall(void *chartInstanceVoid, void *c21_u)
{
  const mxArray *c21_y = NULL;
  real_T c21_b_u;
  const mxArray *c21_b_y = NULL;
  SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c21_y = NULL;
  c21_b_u = *((real_T *)c21_u);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c21_y, c21_b_y);
  return c21_y;
}

static real_T c21_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c21_regen_disable_genset, const
  char_T *c21_name)
{
  real_T c21_y;
  real_T c21_d10;
  sf_mex_import(c21_name, sf_mex_dup(c21_regen_disable_genset), &c21_d10, 1, 0,
                0U, 0, 0U, 0);
  c21_y = c21_d10;
  sf_mex_destroy(&c21_regen_disable_genset);
  return c21_y;
}

static uint8_T c21_b_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c21_b_is_active_c21_Dyno_IPT_2014, const char_T *c21_name)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  sf_mex_import(c21_name, sf_mex_dup(c21_b_is_active_c21_Dyno_IPT_2014), &c21_u0,
                1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_b_is_active_c21_Dyno_IPT_2014);
  return c21_y;
}

static const mxArray *c21_c_emlrt_marshallIn(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c21_b_setSimStateSideEffectsInfo, const char_T *c21_name)
{
  const mxArray *c21_y = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_duplicatearraysafe
                (&c21_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c21_b_setSimStateSideEffectsInfo);
  return c21_y;
}

static void init_test_point_addr_map(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c21_testPointAddrMap[0] = &chartInstance->c21_count;
  chartInstance->c21_testPointAddrMap[1] =
    &chartInstance->c21_tp_regen_induced_genset_disable;
  chartInstance->c21_testPointAddrMap[2] =
    &chartInstance->c21_tp_reset_regen_engine_lockout_timer;
  chartInstance->c21_testPointAddrMap[3] = &chartInstance->c21_tp_standby;
}

static void **get_test_point_address_map(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c21_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc21_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c21_testPointMappingInfo;
}

static void init_dsm_address_info(SFc21_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c21_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3964939139U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1607489982U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(522412750U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3422358537U);
}

mxArray *sf_c21_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3243198707U);
    pr[1] = (double)(2239815497U);
    pr[2] = (double)(2991666689U);
    pr[3] = (double)(1250549576U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c21_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[45],T\"regen_disable_genset\",},{M[3],M[44],T\"count\",},{M[8],M[0],T\"is_active_c21_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c21_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           21,
           3,
           6,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c21_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "regen_disable_genset",0,(MexFcnForType)
                              c21_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "decel_stopped",0,(MexFcnForType)c21_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_max_charge_current",0,(MexFcnForType)
                              c21_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_regen_engine_lockout",0,(MexFcnForType)
                              c21_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "gen_current",0,(MexFcnForType)c21_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 40 };

          static unsigned int sEndGuardMap[] = { 34, 76 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 40 };

          static unsigned int sEndGuardMap[] = { 34, 76 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c21_regen_disable_genset;
          boolean_T *c21_decel_stopped;
          real_T *c21_cal_max_charge_current;
          real_T *c21_cal_regen_engine_lockout;
          real_T *c21_gen_current;
          c21_gen_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c21_cal_regen_engine_lockout = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c21_cal_max_charge_current = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c21_decel_stopped = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          c21_regen_disable_genset = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, &chartInstance->c21_count);
          _SFD_SET_DATA_VALUE_PTR(1U, c21_regen_disable_genset);
          _SFD_SET_DATA_VALUE_PTR(2U, c21_decel_stopped);
          _SFD_SET_DATA_VALUE_PTR(3U, c21_cal_max_charge_current);
          _SFD_SET_DATA_VALUE_PTR(4U, c21_cal_regen_engine_lockout);
          _SFD_SET_DATA_VALUE_PTR(5U, c21_gen_current);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c21_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc21_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c21_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c21_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c21_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c21_Dyno_IPT_2014
    ((SFc21_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c21_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c21_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c21_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c21_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c21_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c21_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c21_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c21_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_Dyno_IPT_2014((SFc21_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c21_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",21,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",21,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",21,4);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",21,1);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",21);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(400376657U));
  ssSetChecksum1(S,(2833023258U));
  ssSetChecksum2(S,(4092856377U));
  ssSetChecksum3(S,(4144853814U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c21_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",21);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c21_Dyno_IPT_2014(SimStruct *S)
{
  SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc21_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc21_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c21_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c21_Dyno_IPT_2014;
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

void c21_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_Dyno_IPT_2014_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/count", "count", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/regen_induced_genset_disable",
    "regen_induced_genset_disable", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/reset_regen_engine_lockout_timer",
    "reset_regen_engine_lockout_timer", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/standby", "standby", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    4                                  /* Num Block IO signals */
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
  SFc21_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc21_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
