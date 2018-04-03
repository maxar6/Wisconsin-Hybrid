/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c6_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c6_IN_NO_ACTIVE_CHILD          (0U)
#define c6_IN_CruiseDisabled           (1U)
#define c6_IN_CruiseOff                (2U)
#define c6_IN_PressOne                 (4U)
#define c6_IN_WaitOne                  (6U)
#define c6_IN_PressTwo                 (5U)
#define c6_IN_CruiseOn                 (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c6_update_debugger_state_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void c6_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void c6_CruiseDisabled(SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void c6_CruiseOff(SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber);
static const mxArray *c6_sf_marshall(void *chartInstanceVoid, void *c6_u);
static const mxArray *c6_b_sf_marshall(void *chartInstanceVoid, void *c6_u);
static const mxArray *c6_c_sf_marshall(void *chartInstanceVoid, void *c6_u);
static uint8_T c6_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_cCOn, const char_T *c6_name);
static real_T c6_b_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_speedSet, const char_T *c6_name);
static const mxArray *c6_c_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_name);
static uint8_T c6__u8_s32_(SFc6_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c6_b);
static void init_test_point_addr_map(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c6_speedSet;
  uint8_T *c6_cCOn;
  uint8_T *c6_state;
  uint8_T *c6_timer;
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  chartInstance->c6_tp_CruiseDisabled = 0U;
  chartInstance->c6_tp_CruiseOff = 0U;
  chartInstance->c6_tp_CruiseOn = 0U;
  chartInstance->c6_tp_PressOne = 0U;
  chartInstance->c6_tp_PressTwo = 0U;
  chartInstance->c6_tp_WaitOne = 0U;
  chartInstance->c6_is_active_c6_BuckyWagon_01 = 0U;
  chartInstance->c6_is_c6_BuckyWagon_01 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c6_speedSet = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c6_cCOn = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c6_state = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c6_timer = 0U;
  }
}

static void initialize_params_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c6_update_debugger_state_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c6_is_active_c6_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,5);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseDisabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_PressOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_WaitOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_PressTwo) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c6_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c6_st = NULL;
  const mxArray *c6_y = NULL;
  uint8_T c6_hoistedGlobal;
  uint8_T c6_u;
  const mxArray *c6_b_y = NULL;
  real_T c6_b_hoistedGlobal;
  real_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  uint8_T c6_c_hoistedGlobal;
  uint8_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  uint8_T c6_d_hoistedGlobal;
  uint8_T c6_d_u;
  const mxArray *c6_e_y = NULL;
  uint8_T c6_e_hoistedGlobal;
  uint8_T c6_e_u;
  const mxArray *c6_f_y = NULL;
  uint8_T c6_f_hoistedGlobal;
  uint8_T c6_f_u;
  const mxArray *c6_g_y = NULL;
  uint8_T *c6_cCOn;
  real_T *c6_speedSet;
  uint8_T *c6_state;
  uint8_T *c6_timer;
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellarray(6));
  c6_hoistedGlobal = *c6_cCOn;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = *c6_speedSet;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = *c6_state;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = *c6_timer;
  c6_d_u = c6_d_hoistedGlobal;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_e_hoistedGlobal = chartInstance->c6_is_active_c6_BuckyWagon_01;
  c6_e_u = c6_e_hoistedGlobal;
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_f_hoistedGlobal = chartInstance->c6_is_c6_BuckyWagon_01;
  c6_f_u = c6_f_hoistedGlobal;
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 5, c6_g_y);
  sf_mex_assign(&c6_st, c6_y);
  return c6_st;
}

static void set_sim_state_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  uint8_T *c6_cCOn;
  real_T *c6_speedSet;
  uint8_T *c6_state;
  uint8_T *c6_timer;
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_u = sf_mex_dup(c6_st);
  *c6_cCOn = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u,
    0)), "cCOn");
  *c6_speedSet = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 1)), "speedSet");
  *c6_state = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u,
    2)), "state");
  *c6_timer = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u,
    3)), "timer");
  chartInstance->c6_is_active_c6_BuckyWagon_01 = c6_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 4)),
     "is_active_c6_BuckyWagon_01");
  chartInstance->c6_is_c6_BuckyWagon_01 = c6_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 5)),
    "is_c6_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 6)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_BuckyWagon_01
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseDisabled) {
      chartInstance->c6_tp_CruiseDisabled = 1U;
    } else {
      chartInstance->c6_tp_CruiseDisabled = 0U;
    }

    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseOff) {
      chartInstance->c6_tp_CruiseOff = 1U;
    } else {
      chartInstance->c6_tp_CruiseOff = 0U;
    }

    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_CruiseOn) {
      chartInstance->c6_tp_CruiseOn = 1U;
    } else {
      chartInstance->c6_tp_CruiseOn = 0U;
    }

    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_PressOne) {
      chartInstance->c6_tp_PressOne = 1U;
    } else {
      chartInstance->c6_tp_PressOne = 0U;
    }

    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_PressTwo) {
      chartInstance->c6_tp_PressTwo = 1U;
    } else {
      chartInstance->c6_tp_PressTwo = 0U;
    }

    if (chartInstance->c6_is_c6_BuckyWagon_01 == c6_IN_WaitOne) {
      chartInstance->c6_tp_WaitOne = 1U;
    } else {
      chartInstance->c6_tp_WaitOne = 0U;
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c6_previousEvent;
  boolean_T *c6_reverseSw;
  real_T *c6_speed;
  boolean_T *c6_cCEnable;
  boolean_T *c6_cCStop;
  uint8_T *c6_maxButtonTime;
  uint8_T *c6_minButtonTime;
  real_T *c6_speedSet;
  uint8_T *c6_cCOn;
  uint8_T *c6_state;
  uint8_T *c6_timer;
  real_T *c6_minSpeedCC;
  c6_minSpeedCC = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_minButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c6_maxButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c6_cCStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c6_cCEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_reverseSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c6_set_sim_state_side_effects_c6_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,5);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_reverseSw, 0U);
  _SFD_DATA_RANGE_CHECK(*c6_speed, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_cCEnable, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_cCStop, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_maxButtonTime, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_minButtonTime, 5U);
  _SFD_DATA_RANGE_CHECK(*c6_speedSet, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
  _SFD_DATA_RANGE_CHECK(*c6_minSpeedCC, 10U);
  c6_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c6_c6_BuckyWagon_01(chartInstance);
  _sfEvent_ = c6_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c6_c6_BuckyWagon_01(SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T c6_b_temp;
  boolean_T c6_c_temp;
  boolean_T c6_d_temp;
  boolean_T *c6_cCEnable;
  boolean_T *c6_cCStop;
  uint8_T *c6_state;
  uint8_T *c6_cCOn;
  uint8_T *c6_timer;
  uint8_T *c6_maxButtonTime;
  boolean_T *c6_reverseSw;
  uint8_T *c6_minButtonTime;
  real_T *c6_speed;
  real_T *c6_speedSet;
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_minButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c6_maxButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c6_cCStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c6_cCEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_reverseSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,5);
  if ((int16_T)chartInstance->c6_is_active_c6_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,5);
    chartInstance->c6_is_active_c6_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
    chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseDisabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c6_tp_CruiseDisabled = 1U;
    *c6_state = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
    *c6_cCOn = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
  } else {
    switch (chartInstance->c6_is_c6_BuckyWagon_01) {
     case c6_IN_CruiseDisabled:
      CV_CHART_EVAL(5,0,1);
      c6_CruiseDisabled(chartInstance);
      break;

     case c6_IN_CruiseOff:
      CV_CHART_EVAL(5,0,2);
      c6_CruiseOff(chartInstance);
      break;

     case c6_IN_CruiseOn:
      CV_CHART_EVAL(5,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      c6_temp = !(_SFD_CCP_CALL(11,0,((*c6_cCEnable)!=0)) != 0);
      if (!c6_temp) {
        c6_temp = (_SFD_CCP_CALL(11,1,((*c6_cCStop)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(11U, (int32_T)c6_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c6_tp_CruiseOn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c6_tp_CruiseOff = 1U;
        *c6_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
        *c6_cCOn = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c6_IN_PressOne:
      CV_CHART_EVAL(5,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
      if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c6_timer >
              *c6_maxButtonTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if ((!(*c6_reverseSw)) && (*c6_timer > *c6_minButtonTime)) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c6_tp_PressOne = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c6_tp_CruiseOff = 1U;
        *c6_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
        *c6_cCOn = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        c6_b_temp = !(_SFD_CCP_CALL(3,0,((*c6_reverseSw)!=0)) != 0);
        if (c6_b_temp) {
          c6_b_temp = (_SFD_CCP_CALL(3,1,((*c6_timer > *c6_minButtonTime)!=0))
                       != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c6_b_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c6_tp_PressOne = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_WaitOne;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c6_tp_WaitOne = 1U;
          *c6_state = 3U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
          *c6_timer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
        } else {
          *c6_timer = c6__u8_s32_(chartInstance, *c6_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c6_IN_PressTwo:
      CV_CHART_EVAL(5,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
      if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c6_timer >
              *c6_maxButtonTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 8;
          sf_debug_transition_conflict_check_begin();
          if ((!(*c6_reverseSw)) && (*c6_timer > *c6_minButtonTime)) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c6_tp_PressTwo = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c6_tp_CruiseOff = 1U;
        *c6_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
        *c6_cCOn = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        c6_c_temp = !(_SFD_CCP_CALL(5,0,((*c6_reverseSw)!=0)) != 0);
        if (c6_c_temp) {
          c6_c_temp = (_SFD_CCP_CALL(5,1,((*c6_timer > *c6_minButtonTime)!=0))
                       != 0);
        }

        if (CV_TRANSITION_EVAL(5U, (int32_T)c6_c_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c6_tp_PressTwo = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOn;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c6_tp_CruiseOn = 1U;
          *c6_state = 5U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
          *c6_cCOn = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
          *c6_speedSet = *c6_speed;
          _SFD_DATA_RANGE_CHECK(*c6_speedSet, 6U);
        } else {
          *c6_timer = c6__u8_s32_(chartInstance, *c6_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     case c6_IN_WaitOne:
      CV_CHART_EVAL(5,0,6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c6_timer >
              *c6_maxButtonTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if ((*c6_reverseSw) && (*c6_timer > *c6_minButtonTime)) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c6_tp_WaitOne = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c6_tp_CruiseOff = 1U;
        *c6_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
        *c6_cCOn = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
        c6_d_temp = (_SFD_CCP_CALL(4,0,((*c6_reverseSw)!=0)) != 0);
        if (c6_d_temp) {
          c6_d_temp = (_SFD_CCP_CALL(4,1,((*c6_timer > *c6_minButtonTime)!=0))
                       != 0);
        }

        if (CV_TRANSITION_EVAL(4U, (int32_T)c6_d_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
          chartInstance->c6_tp_WaitOne = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
          chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_PressTwo;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c6_tp_PressTwo = 1U;
          *c6_state = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
          *c6_timer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
        } else {
          *c6_timer = c6__u8_s32_(chartInstance, *c6_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     default:
      CV_CHART_EVAL(5,0,0);
      chartInstance->c6_is_c6_BuckyWagon_01 = (uint8_T)c6_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
}

static void c6_CruiseDisabled(SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T *c6_cCEnable;
  real_T *c6_speed;
  real_T *c6_minSpeedCC;
  uint8_T *c6_state;
  uint8_T *c6_cCOn;
  c6_minSpeedCC = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_cCEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
  c6_temp = (_SFD_CCP_CALL(0,0,((*c6_cCEnable)!=0)) != 0);
  if (c6_temp) {
    c6_temp = (_SFD_CCP_CALL(0,1,((*c6_speed > *c6_minSpeedCC)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(0U, (int32_T)c6_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c6_tp_CruiseDisabled = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseOff;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c6_tp_CruiseOff = 1U;
    *c6_state = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
    *c6_cCOn = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c6_CruiseOff(SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T *c6_cCEnable;
  real_T *c6_speed;
  real_T *c6_minSpeedCC;
  boolean_T *c6_reverseSw;
  uint8_T *c6_state;
  uint8_T *c6_timer;
  uint8_T *c6_cCOn;
  c6_minSpeedCC = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_cCEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_reverseSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
  c6_temp = !(_SFD_CCP_CALL(1,0,((*c6_cCEnable)!=0)) != 0);
  if (!c6_temp) {
    c6_temp = (_SFD_CCP_CALL(1,1,((*c6_speed < *c6_minSpeedCC)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(1U, (int32_T)c6_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 1;
      sf_debug_transition_conflict_check_begin();
      if (*c6_reverseSw) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c6_tp_CruiseOff = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_CruiseDisabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c6_tp_CruiseDisabled = 1U;
    *c6_state = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
    *c6_cCOn = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c6_cCOn, 7U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c6_reverseSw)!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c6_tp_CruiseOff = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c6_is_c6_BuckyWagon_01 = c6_IN_PressOne;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
      chartInstance->c6_tp_PressOne = 1U;
      *c6_state = 2U;
      _SFD_DATA_RANGE_CHECK((real_T)*c6_state, 8U);
      *c6_timer = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c6_timer, 9U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber)
{
}

const mxArray *sf_c6_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c6_nameCaptureInfo;
}

static const mxArray *c6_sf_marshall(void *chartInstanceVoid, void *c6_u)
{
  const mxArray *c6_y = NULL;
  uint8_T c6_b_u;
  const mxArray *c6_b_y = NULL;
  SFc6_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc6_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c6_y = NULL;
  c6_b_u = *((uint8_T *)c6_u);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_y, c6_b_y);
  return c6_y;
}

static const mxArray *c6_b_sf_marshall(void *chartInstanceVoid, void *c6_u)
{
  const mxArray *c6_y = NULL;
  boolean_T c6_b_u;
  const mxArray *c6_b_y = NULL;
  SFc6_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc6_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c6_y = NULL;
  c6_b_u = *((boolean_T *)c6_u);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_y, c6_b_y);
  return c6_y;
}

static const mxArray *c6_c_sf_marshall(void *chartInstanceVoid, void *c6_u)
{
  const mxArray *c6_y = NULL;
  real_T c6_b_u;
  const mxArray *c6_b_y = NULL;
  SFc6_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc6_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c6_y = NULL;
  c6_b_u = *((real_T *)c6_u);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_y, c6_b_y);
  return c6_y;
}

static uint8_T c6_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_cCOn, const char_T *c6_name)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  sf_mex_import(c6_name, sf_mex_dup(c6_cCOn), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_cCOn);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c6_speedSet, const char_T *
  c6_name)
{
  real_T c6_y;
  real_T c6_d0;
  sf_mex_import(c6_name, sf_mex_dup(c6_speedSet), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_speedSet);
  return c6_y;
}

static const mxArray *c6_c_emlrt_marshallIn(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c6_b_setSimStateSideEffectsInfo, const char_T *c6_name)
{
  const mxArray *c6_y = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe
                (&c6_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static uint8_T c6__u8_s32_(SFc6_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c6_b)
{
  uint8_T c6_a;
  c6_a = (uint8_T)c6_b;
  if (c6_a != c6_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c6_a;
}

static void init_test_point_addr_map(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c6_testPointAddrMap[0] = &chartInstance->c6_tp_CruiseDisabled;
  chartInstance->c6_testPointAddrMap[1] = &chartInstance->c6_tp_CruiseOff;
  chartInstance->c6_testPointAddrMap[2] = &chartInstance->c6_tp_CruiseOn;
  chartInstance->c6_testPointAddrMap[3] = &chartInstance->c6_tp_PressOne;
  chartInstance->c6_testPointAddrMap[4] = &chartInstance->c6_tp_PressTwo;
  chartInstance->c6_testPointAddrMap[5] = &chartInstance->c6_tp_WaitOne;
}

static void **get_test_point_address_map(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c6_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc6_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c6_testPointMappingInfo;
}

static void init_dsm_address_info(SFc6_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c6_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(165281895U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1138836423U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3887016552U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1804146201U);
}

mxArray *sf_c6_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(326725625U);
    pr[1] = (double)(201378538U);
    pr[2] = (double)(4102539365U);
    pr[3] = (double)(1963537484U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c6_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[35],T\"cCOn\",},{M[1],M[34],T\"speedSet\",},{M[1],M[36],T\"state\",},{M[1],M[37],T\"timer\",},{M[8],M[0],T\"is_active_c6_BuckyWagon_01\",},{M[9],M[0],T\"is_c6_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc6_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           6,
           6,
           16,
           11,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "reverseSw",0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"speed",0,
                              (MexFcnForType)c6_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"cCEnable",
                              0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"cCStop",0,
                              (MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "maxButtonTime",0,(MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "minButtonTime",0,(MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "speedSet",0,(MexFcnForType)c6_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"cCOn",0,
                              (MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(9,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
                              (MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "minSpeedCC",0,(MexFcnForType)c6_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(6);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(6,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 9, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(0,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 10, 36 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 11, 41 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 10, 40 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 11, 41 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 14 };

          static unsigned int sEndGuardMap[] = { 10, 20 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_TRANS_COV_WTS(0,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 9, 35 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 10, 36 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 11, 41 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 10, 40 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 11, 41 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 14 };

          static unsigned int sEndGuardMap[] = { 10, 20 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c6_reverseSw;
          real_T *c6_speed;
          boolean_T *c6_cCEnable;
          boolean_T *c6_cCStop;
          uint8_T *c6_maxButtonTime;
          uint8_T *c6_minButtonTime;
          real_T *c6_speedSet;
          uint8_T *c6_cCOn;
          uint8_T *c6_state;
          uint8_T *c6_timer;
          real_T *c6_minSpeedCC;
          c6_minSpeedCC = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c6_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c6_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c6_cCOn = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c6_speedSet = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c6_minButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c6_maxButtonTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c6_cCStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c6_cCEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c6_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c6_reverseSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c6_reverseSw);
          _SFD_SET_DATA_VALUE_PTR(1U, c6_speed);
          _SFD_SET_DATA_VALUE_PTR(2U, c6_cCEnable);
          _SFD_SET_DATA_VALUE_PTR(3U, c6_cCStop);
          _SFD_SET_DATA_VALUE_PTR(4U, c6_maxButtonTime);
          _SFD_SET_DATA_VALUE_PTR(5U, c6_minButtonTime);
          _SFD_SET_DATA_VALUE_PTR(6U, c6_speedSet);
          _SFD_SET_DATA_VALUE_PTR(7U, c6_cCOn);
          _SFD_SET_DATA_VALUE_PTR(8U, c6_state);
          _SFD_SET_DATA_VALUE_PTR(9U, c6_timer);
          _SFD_SET_DATA_VALUE_PTR(10U, c6_minSpeedCC);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c6_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c6_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c6_BuckyWagon_01
    ((SFc6_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c6_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c6_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c6_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c6_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c6_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c6_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c6_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_BuckyWagon_01((SFc6_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",6,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",6,7);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",6,4);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1076276067U));
  ssSetChecksum1(S,(472448890U));
  ssSetChecksum2(S,(2065374734U));
  ssSetChecksum3(S,(3788167148U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c6_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",6);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_BuckyWagon_01(SimStruct *S)
{
  SFc6_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc6_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc6_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c6_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_BuckyWagon_01;
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

void c6_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
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
  { 0, 0, "StateflowChart/CruiseDisabled", "CruiseDisabled", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/CruiseOff", "CruiseOff", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/CruiseOn", "CruiseOn", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/PressOne", "PressOne", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/PressTwo", "PressTwo", 0, 0, 0, 0, 0 },

  { 5, 0, "StateflowChart/WaitOne", "WaitOne", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    6                                  /* Num Block IO signals */
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
  SFc6_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc6_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
