/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c1_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_event_buttonPress           (0)
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_Main                     (1U)
#define c1_IN_waitRelease              (3U)
#define c1_IN_TransistionOn            (2U)
#define c1_IN_TransistionOff           (1U)
#define c1_IN_Forward                  (1U)
#define c1_IN_Reverse                  (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c1_update_debugger_state_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static void c1_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u);
static real_T c1_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_inReverse, const char_T *c1_name);
static uint8_T c1_b_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_BuckyWagon_01, const char_T
  *c1_name);
static const mxArray *c1_c_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_name);
static void init_test_point_addr_map(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c1_inReverse;
  c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_tp_Main = 0U;
  chartInstance->c1_is_active_ButtonDebounce = 0U;
  chartInstance->c1_is_ButtonDebounce = 0U;
  chartInstance->c1_tp_ButtonDebounce = 0U;
  chartInstance->c1_tp_TransistionOff = 0U;
  chartInstance->c1_tp_TransistionOn = 0U;
  chartInstance->c1_tp_waitRelease = 0U;
  chartInstance->c1_is_active_ReverseLogic = 0U;
  chartInstance->c1_is_ReverseLogic = 0U;
  chartInstance->c1_tp_ReverseLogic = 0U;
  chartInstance->c1_tp_Forward = 0U;
  chartInstance->c1_tp_Reverse = 0U;
  chartInstance->c1_is_active_c1_BuckyWagon_01 = 0U;
  chartInstance->c1_is_c1_BuckyWagon_01 = 0U;
  chartInstance->c1_timer = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_inReverse = 0.0;
  }
}

static void initialize_params_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c1_is_active_c1_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,0);
  }

  if (chartInstance->c1_is_c1_BuckyWagon_01 == c1_IN_Main) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if ((int16_T)chartInstance->c1_is_active_ButtonDebounce == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c1_is_ButtonDebounce == c1_IN_waitRelease) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if ((int16_T)chartInstance->c1_is_active_ReverseLogic == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c1_is_ButtonDebounce == c1_IN_TransistionOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c1_is_ButtonDebounce == c1_IN_TransistionOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c1_is_ReverseLogic == c1_IN_Forward) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c1_is_ReverseLogic == c1_IN_Reverse) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_hoistedGlobal;
  real_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  uint8_T c1_c_hoistedGlobal;
  uint8_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  uint8_T c1_d_hoistedGlobal;
  uint8_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_e_hoistedGlobal;
  uint8_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_f_hoistedGlobal;
  uint8_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  uint8_T c1_g_hoistedGlobal;
  uint8_T c1_g_u;
  const mxArray *c1_h_y = NULL;
  uint8_T c1_h_hoistedGlobal;
  uint8_T c1_h_u;
  const mxArray *c1_i_y = NULL;
  real_T *c1_inReverse;
  c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(8));
  c1_hoistedGlobal = *c1_inReverse;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = chartInstance->c1_timer;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = chartInstance->c1_is_active_c1_BuckyWagon_01;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = chartInstance->c1_is_active_ButtonDebounce;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = chartInstance->c1_is_active_ReverseLogic;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = chartInstance->c1_is_c1_BuckyWagon_01;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = chartInstance->c1_is_ButtonDebounce;
  c1_g_u = c1_g_hoistedGlobal;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_h_hoistedGlobal = chartInstance->c1_is_ReverseLogic;
  c1_h_u = c1_h_hoistedGlobal;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 7, c1_i_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_inReverse;
  c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_inReverse = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 0)), "inReverse");
  chartInstance->c1_timer = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "timer");
  chartInstance->c1_is_active_c1_BuckyWagon_01 = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
     "is_active_c1_BuckyWagon_01");
  chartInstance->c1_is_active_ButtonDebounce = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
     "is_active_ButtonDebounce");
  chartInstance->c1_is_active_ReverseLogic = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 4)),
    "is_active_ReverseLogic");
  chartInstance->c1_is_c1_BuckyWagon_01 = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 5)),
    "is_c1_BuckyWagon_01");
  chartInstance->c1_is_ButtonDebounce = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 6)), "is_ButtonDebounce");
  chartInstance->c1_is_ReverseLogic = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 7)), "is_ReverseLogic");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 8)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_BuckyWagon_01
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (chartInstance->c1_is_c1_BuckyWagon_01 == c1_IN_Main) {
      chartInstance->c1_tp_Main = 1U;
    } else {
      chartInstance->c1_tp_Main = 0U;
    }

    if ((int16_T)chartInstance->c1_is_active_ButtonDebounce == 1) {
      chartInstance->c1_tp_ButtonDebounce = 1U;
    } else {
      chartInstance->c1_tp_ButtonDebounce = 0U;
    }

    if (chartInstance->c1_is_ButtonDebounce == c1_IN_TransistionOff) {
      chartInstance->c1_tp_TransistionOff = 1U;
    } else {
      chartInstance->c1_tp_TransistionOff = 0U;
    }

    if (chartInstance->c1_is_ButtonDebounce == c1_IN_TransistionOn) {
      chartInstance->c1_tp_TransistionOn = 1U;
    } else {
      chartInstance->c1_tp_TransistionOn = 0U;
    }

    if (chartInstance->c1_is_ButtonDebounce == c1_IN_waitRelease) {
      chartInstance->c1_tp_waitRelease = 1U;
    } else {
      chartInstance->c1_tp_waitRelease = 0U;
    }

    if ((int16_T)chartInstance->c1_is_active_ReverseLogic == 1) {
      chartInstance->c1_tp_ReverseLogic = 1U;
    } else {
      chartInstance->c1_tp_ReverseLogic = 0U;
    }

    if (chartInstance->c1_is_ReverseLogic == c1_IN_Forward) {
      chartInstance->c1_tp_Forward = 1U;
    } else {
      chartInstance->c1_tp_Forward = 0U;
    }

    if (chartInstance->c1_is_ReverseLogic == c1_IN_Reverse) {
      chartInstance->c1_tp_Reverse = 1U;
    } else {
      chartInstance->c1_tp_Reverse = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c1_previousEvent;
  real_T *c1_accel;
  real_T *c1_speed;
  boolean_T *c1_revButton;
  real_T *c1_fwdAccThres;
  real_T *c1_fwdSpdThres;
  real_T *c1_inReverse;
  real_T *c1_offTime;
  real_T *c1_revAccThres;
  real_T *c1_revSpdThres;
  real_T *c1_onTime;
  c1_onTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c1_revSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c1_revAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c1_offTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_fwdSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c1_fwdAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_revButton = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_set_sim_state_side_effects_c1_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK(*c1_accel, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_speed, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_revButton, 2U);
  _SFD_DATA_RANGE_CHECK(*c1_fwdAccThres, 3U);
  _SFD_DATA_RANGE_CHECK(*c1_fwdSpdThres, 4U);
  _SFD_DATA_RANGE_CHECK(*c1_inReverse, 5U);
  _SFD_DATA_RANGE_CHECK(*c1_offTime, 6U);
  _SFD_DATA_RANGE_CHECK(*c1_revAccThres, 7U);
  _SFD_DATA_RANGE_CHECK(*c1_revSpdThres, 8U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c1_timer, 9U);
  _SFD_DATA_RANGE_CHECK(*c1_onTime, 10U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c1_c1_BuckyWagon_01(chartInstance);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c1_c1_BuckyWagon_01(SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c1_previousEvent;
  boolean_T c1_temp;
  boolean_T c1_b_temp;
  boolean_T c1_c_temp;
  boolean_T c1_d_temp;
  real_T *c1_speed;
  real_T *c1_revSpdThres;
  real_T *c1_accel;
  real_T *c1_revAccThres;
  real_T *c1_inReverse;
  real_T *c1_fwdSpdThres;
  real_T *c1_fwdAccThres;
  real_T *c1_offTime;
  boolean_T *c1_revButton;
  real_T *c1_onTime;
  c1_onTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c1_revSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c1_revAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c1_offTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_fwdSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c1_fwdAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_revButton = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  if ((int16_T)chartInstance->c1_is_active_c1_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,0);
    chartInstance->c1_is_active_c1_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c1_is_c1_BuckyWagon_01 = c1_IN_Main;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c1_tp_Main = 1U;
    chartInstance->c1_is_active_ButtonDebounce = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c1_tp_ButtonDebounce = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
    chartInstance->c1_is_ButtonDebounce = c1_IN_TransistionOn;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c1_tp_TransistionOn = 1U;
    chartInstance->c1_is_active_ReverseLogic = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c1_tp_ReverseLogic = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
    if (chartInstance->c1_is_ReverseLogic == c1_IN_Forward) {
    } else {
      chartInstance->c1_is_ReverseLogic = c1_IN_Forward;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
      chartInstance->c1_tp_Forward = 1U;
      *c1_inReverse = 0.0;
      _SFD_DATA_RANGE_CHECK(*c1_inReverse, 5U);
    }
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
    if (chartInstance->c1_is_c1_BuckyWagon_01 != c1_IN_Main) {
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      if ((int16_T)chartInstance->c1_is_active_ButtonDebounce == 0) {
      } else {
        switch (chartInstance->c1_is_ButtonDebounce) {
         case c1_IN_TransistionOff:
          CV_STATE_EVAL(1,0,1);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
          if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,
                ((chartInstance->c1_timer >= *c1_offTime)!=0))) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 1;
              sf_debug_transition_conflict_check_begin();
              if (*c1_revButton) {
                transitionList[numTransitions] = 0;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
            chartInstance->c1_tp_TransistionOff = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
            chartInstance->c1_is_ButtonDebounce = c1_IN_TransistionOn;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
            chartInstance->c1_tp_TransistionOn = 1U;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
            if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0,0,
                  ((*c1_revButton)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
              chartInstance->c1_timer = 0.0;
              _SFD_DATA_RANGE_CHECK(chartInstance->c1_timer, 9U);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
              chartInstance->c1_tp_TransistionOff = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
              chartInstance->c1_is_ButtonDebounce = c1_IN_TransistionOff;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
              chartInstance->c1_tp_TransistionOff = 1U;
            } else {
              chartInstance->c1_timer = chartInstance->c1_timer + 1.0;
              _SFD_DATA_RANGE_CHECK(chartInstance->c1_timer, 9U);
            }
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          break;

         case c1_IN_TransistionOn:
          CV_STATE_EVAL(1,0,2);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
          if (CV_TRANSITION_EVAL(4U, !(_SFD_CCP_CALL(4,0,((*c1_revButton)!=0))
                != 0)) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 4;
              sf_debug_transition_conflict_check_begin();
              if (chartInstance->c1_timer >= *c1_onTime) {
                transitionList[numTransitions] = 2;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
            chartInstance->c1_timer = 0.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c1_timer, 9U);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
            chartInstance->c1_tp_TransistionOn = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
            chartInstance->c1_is_ButtonDebounce = c1_IN_TransistionOn;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
            chartInstance->c1_tp_TransistionOn = 1U;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
            if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,
                  ((chartInstance->c1_timer >= *c1_onTime)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
              chartInstance->c1_tp_TransistionOn = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
              chartInstance->c1_is_ButtonDebounce = c1_IN_waitRelease;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
              chartInstance->c1_tp_waitRelease = 1U;
              c1_previousEvent = _sfEvent_;
              _sfEvent_ = c1_event_buttonPress;
              _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c1_event_buttonPress);
              c1_c1_BuckyWagon_01(chartInstance);
              _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c1_event_buttonPress);
              _sfEvent_ = c1_previousEvent;
            } else {
              chartInstance->c1_timer = chartInstance->c1_timer + 1.0;
              _SFD_DATA_RANGE_CHECK(chartInstance->c1_timer, 9U);
            }
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          break;

         case c1_IN_waitRelease:
          CV_STATE_EVAL(1,0,3);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
          if (chartInstance->c1_is_ButtonDebounce != c1_IN_waitRelease) {
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
            if (CV_TRANSITION_EVAL(3U, !(_SFD_CCP_CALL(3,0,((*c1_revButton)!=0))
                  != 0)) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
              chartInstance->c1_tp_waitRelease = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
              chartInstance->c1_is_ButtonDebounce = c1_IN_TransistionOff;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
              chartInstance->c1_tp_TransistionOff = 1U;
            }
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          break;

         default:
          CV_STATE_EVAL(1,0,0);
          chartInstance->c1_is_ButtonDebounce = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          break;
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      if ((int16_T)chartInstance->c1_is_active_ReverseLogic == 0) {
      } else {
        switch (chartInstance->c1_is_ReverseLogic) {
         case c1_IN_Forward:
          CV_STATE_EVAL(5,0,1);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
          c1_temp = (_SFD_CCP_CALL(6,0,((_sfEvent_ == c1_event_buttonPress)!=0))
                     != 0);
          if (c1_temp) {
            c1_b_temp = (_SFD_CCP_CALL(6,1,((*c1_speed < *c1_revSpdThres)!=0))
                         != 0);
            if (c1_b_temp) {
              c1_b_temp = (_SFD_CCP_CALL(6,2,((*c1_accel < *c1_revAccThres)!=0))
                           != 0);
            }

            c1_temp = c1_b_temp;
          }

          if (CV_TRANSITION_EVAL(6U, (int32_T)c1_temp) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
            chartInstance->c1_tp_Forward = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
            chartInstance->c1_is_ReverseLogic = c1_IN_Reverse;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
            chartInstance->c1_tp_Reverse = 1U;
            *c1_inReverse = 1.0;
            _SFD_DATA_RANGE_CHECK(*c1_inReverse, 5U);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
          break;

         case c1_IN_Reverse:
          CV_STATE_EVAL(5,0,2);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
          c1_c_temp = (_SFD_CCP_CALL(5,0,((_sfEvent_ == c1_event_buttonPress)!=0))
                       != 0);
          if (c1_c_temp) {
            c1_d_temp = (_SFD_CCP_CALL(5,1,((*c1_speed < *c1_fwdSpdThres)!=0))
                         != 0);
            if (c1_d_temp) {
              c1_d_temp = (_SFD_CCP_CALL(5,2,((*c1_accel < *c1_fwdAccThres)!=0))
                           != 0);
            }

            c1_c_temp = c1_d_temp;
          }

          if (CV_TRANSITION_EVAL(5U, (int32_T)c1_c_temp) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
            chartInstance->c1_tp_Reverse = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
            chartInstance->c1_is_ReverseLogic = c1_IN_Forward;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
            chartInstance->c1_tp_Forward = 1U;
            *c1_inReverse = 0.0;
            _SFD_DATA_RANGE_CHECK(*c1_inReverse, 5U);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
          break;

         default:
          CV_STATE_EVAL(5,0,0);
          chartInstance->c1_is_ReverseLogic = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
          break;
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  uint8_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc1_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((uint8_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  boolean_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc1_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((boolean_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc1_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static real_T c1_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_inReverse, const char_T *
  c1_name)
{
  real_T c1_y;
  real_T c1_d0;
  sf_mex_import(c1_name, sf_mex_dup(c1_inReverse), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_inReverse);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_BuckyWagon_01
  , const char_T *c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_b_is_active_c1_BuckyWagon_01), &c1_u0, 1,
                3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_b_is_active_c1_BuckyWagon_01);
  return c1_y;
}

static const mxArray *c1_c_emlrt_marshallIn(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c1_b_setSimStateSideEffectsInfo, const char_T *c1_name)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe
                (&c1_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static void init_test_point_addr_map(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c1_testPointAddrMap[0] = &chartInstance->c1_timer;
  chartInstance->c1_testPointAddrMap[1] = &chartInstance->c1_tp_Main;
  chartInstance->c1_testPointAddrMap[2] = &chartInstance->c1_tp_ButtonDebounce;
  chartInstance->c1_testPointAddrMap[3] = &chartInstance->c1_tp_TransistionOff;
  chartInstance->c1_testPointAddrMap[4] = &chartInstance->c1_tp_TransistionOn;
  chartInstance->c1_testPointAddrMap[5] = &chartInstance->c1_tp_waitRelease;
  chartInstance->c1_testPointAddrMap[6] = &chartInstance->c1_tp_ReverseLogic;
  chartInstance->c1_testPointAddrMap[7] = &chartInstance->c1_tp_Forward;
  chartInstance->c1_testPointAddrMap[8] = &chartInstance->c1_tp_Reverse;
}

static void **get_test_point_address_map(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c1_testPointMappingInfo;
}

static void init_dsm_address_info(SFc1_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3488990853U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3651117446U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2816337094U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(662992781U);
}

mxArray *sf_c1_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1060411324U);
    pr[1] = (double)(951980723U);
    pr[2] = (double)(3389463405U);
    pr[3] = (double)(260343089U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
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

static mxArray *sf_get_sim_state_info_c1_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[23],T\"inReverse\",},{M[3],M[27],T\"timer\",},{M[8],M[0],T\"is_active_c1_BuckyWagon_01\",},{M[8],M[2],T\"is_active_ButtonDebounce\",},{M[8],M[4],T\"is_active_ReverseLogic\",},{M[9],M[0],T\"is_c1_BuckyWagon_01\",},{M[9],M[2],T\"is_ButtonDebounce\",},{M[9],M[4],T\"is_ReverseLogic\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc1_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           1,
           8,
           9,
           11,
           1,
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
            1,
            1,
            1);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"accel",0,
                              (MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"speed",0,
                              (MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "revButton",0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "fwdAccThres",0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "fwdSpdThres",0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "inReverse",0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"offTime",
                              0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "revAccThres",0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "revSpdThres",0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
                              (MexFcnForType)c1_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"onTime",
                              0,(MexFcnForType)c1_c_sf_marshall);
          _SFD_EVENT_SCOPE(0,0);
          _SFD_STATE_INFO(0,1,0);
          _SFD_STATE_INFO(1,0,1);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,1);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,2);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,5);
          _SFD_ST_SUBSTATE_COUNT(1,3);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_INDEX(1,2,4);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,2);
          _SFD_ST_SUBSTATE_INDEX(5,0,6);
          _SFD_ST_SUBSTATE_INDEX(5,1,7);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,2,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,3,1,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(5,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 17, 44 };

          static unsigned int sEndGuardMap[] = { 11, 36, 63 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -3, -3 };

          _SFD_CV_INIT_TRANS(5,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 17, 44 };

          static unsigned int sEndGuardMap[] = { 11, 36, 63 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -3, -3 };

          _SFD_CV_INIT_TRANS(6,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_TRANS_COV_WTS(0,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 17, 44 };

          static unsigned int sEndGuardMap[] = { 11, 36, 63 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 17, 44 };

          static unsigned int sEndGuardMap[] = { 11, 36, 63 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c1_accel;
          real_T *c1_speed;
          boolean_T *c1_revButton;
          real_T *c1_fwdAccThres;
          real_T *c1_fwdSpdThres;
          real_T *c1_inReverse;
          real_T *c1_offTime;
          real_T *c1_revAccThres;
          real_T *c1_revSpdThres;
          real_T *c1_onTime;
          c1_onTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c1_revSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c1_revAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c1_offTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c1_inReverse = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c1_fwdSpdThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c1_fwdAccThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c1_revButton = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c1_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_accel);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_speed);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_revButton);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_fwdAccThres);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_fwdSpdThres);
          _SFD_SET_DATA_VALUE_PTR(5U, c1_inReverse);
          _SFD_SET_DATA_VALUE_PTR(6U, c1_offTime);
          _SFD_SET_DATA_VALUE_PTR(7U, c1_revAccThres);
          _SFD_SET_DATA_VALUE_PTR(8U, c1_revSpdThres);
          _SFD_SET_DATA_VALUE_PTR(9U, &chartInstance->c1_timer);
          _SFD_SET_DATA_VALUE_PTR(10U, c1_onTime);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_BuckyWagon_01
    ((SFc1_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c1_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c1_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c1_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c1_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_BuckyWagon_01((SFc1_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",1,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",1,9);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",1,1);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(650919634U));
  ssSetChecksum1(S,(3839284244U));
  ssSetChecksum2(S,(5169631U));
  ssSetChecksum3(S,(1275852644U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_BuckyWagon_01(SimStruct *S)
{
  SFc1_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc1_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc1_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_BuckyWagon_01;
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

void c1_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_BuckyWagon_01_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/timer", "timer", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Main", "Main", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/Main.ButtonDebounce", "ButtonDebounce", 0, 1, 0, 0, 0
  },

  { 3, 0, "StateflowChart/Main.ButtonDebounce.TransistionOff", "TransistionOff",
    0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/Main.ButtonDebounce.TransistionOn", "TransistionOn", 0,
    1, 0, 0, 0 },

  { 5, 0, "StateflowChart/Main.ButtonDebounce.waitRelease", "waitRelease", 0, 1,
    0, 0, 0 },

  { 6, 0, "StateflowChart/Main.ReverseLogic", "ReverseLogic", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/Main.ReverseLogic.Forward", "Forward", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/Main.ReverseLogic.Reverse", "Reverse", 0, 1, 0, 0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    9                                  /* Num Block IO signals */
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
  SFc1_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc1_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
