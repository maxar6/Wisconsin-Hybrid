/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c32_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c32_IN_NO_ACTIVE_CHILD         (0U)
#define c32_IN_Off                     (2U)
#define c32_IN_countUp                 (4U)
#define c32_IN_CountDown               (1U)
#define c32_IN_On                      (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance);
static void enable_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c32_update_debugger_state_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_st);
static void c32_set_sim_state_side_effects_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c32_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c32_machineNumber, uint32_T
  c32_chartNumber);
static const mxArray *c32_sf_marshall(void *chartInstanceVoid, void *c32_u);
static const mxArray *c32_b_sf_marshall(void *chartInstanceVoid, void *c32_u);
static const mxArray *c32_c_sf_marshall(void *chartInstanceVoid, void *c32_u);
static const mxArray *c32_d_sf_marshall(void *chartInstanceVoid, void *c32_u);
static boolean_T c32_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_pluggedIn, const char_T *c32_name);
static int16_T c32_b_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_b_timer, const char_T *c32_name);
static uint8_T c32_c_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_b_is_active_c32_BuckyWagon_01, const char_T
  *c32_name);
static const mxArray *c32_d_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_b_setSimStateSideEffectsInfo, const char_T *
  c32_name);
static int16_T c32__s16_s32_(SFc32_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c32_b);
static void init_test_point_addr_map(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T *c32_pluggedIn;
  c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c32_doSetSimStateSideEffects = 0U;
  chartInstance->c32_setSimStateSideEffectsInfo = NULL;
  chartInstance->c32_tp_CountDown = 0U;
  chartInstance->c32_tp_Off = 0U;
  chartInstance->c32_tp_On = 0U;
  chartInstance->c32_tp_countUp = 0U;
  chartInstance->c32_is_active_c32_BuckyWagon_01 = 0U;
  chartInstance->c32_is_c32_BuckyWagon_01 = 0U;
  chartInstance->c32_timer = 0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c32_pluggedIn = FALSE;
  }
}

static void initialize_params_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance)
{
}

static void enable_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c32_update_debugger_state_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c32_prevAniVal;
  c32_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c32_is_active_c32_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,11);
  }

  if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_countUp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_CountDown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c32_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c32_st = NULL;
  const mxArray *c32_y = NULL;
  boolean_T c32_hoistedGlobal;
  boolean_T c32_u;
  const mxArray *c32_b_y = NULL;
  int16_T c32_b_hoistedGlobal;
  int16_T c32_b_u;
  const mxArray *c32_c_y = NULL;
  uint8_T c32_c_hoistedGlobal;
  uint8_T c32_c_u;
  const mxArray *c32_d_y = NULL;
  uint8_T c32_d_hoistedGlobal;
  uint8_T c32_d_u;
  const mxArray *c32_e_y = NULL;
  boolean_T *c32_pluggedIn;
  c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c32_st = NULL;
  c32_y = NULL;
  sf_mex_assign(&c32_y, sf_mex_createcellarray(4));
  c32_hoistedGlobal = *c32_pluggedIn;
  c32_u = c32_hoistedGlobal;
  c32_b_y = NULL;
  sf_mex_assign(&c32_b_y, sf_mex_create("y", &c32_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c32_y, 0, c32_b_y);
  c32_b_hoistedGlobal = chartInstance->c32_timer;
  c32_b_u = c32_b_hoistedGlobal;
  c32_c_y = NULL;
  sf_mex_assign(&c32_c_y, sf_mex_create("y", &c32_b_u, 4, 0U, 0U, 0U, 0));
  sf_mex_setcell(c32_y, 1, c32_c_y);
  c32_c_hoistedGlobal = chartInstance->c32_is_active_c32_BuckyWagon_01;
  c32_c_u = c32_c_hoistedGlobal;
  c32_d_y = NULL;
  sf_mex_assign(&c32_d_y, sf_mex_create("y", &c32_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c32_y, 2, c32_d_y);
  c32_d_hoistedGlobal = chartInstance->c32_is_c32_BuckyWagon_01;
  c32_d_u = c32_d_hoistedGlobal;
  c32_e_y = NULL;
  sf_mex_assign(&c32_e_y, sf_mex_create("y", &c32_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c32_y, 3, c32_e_y);
  sf_mex_assign(&c32_st, c32_y);
  return c32_st;
}

static void set_sim_state_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_st)
{
  const mxArray *c32_u;
  boolean_T *c32_pluggedIn;
  c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c32_u = sf_mex_dup(c32_st);
  *c32_pluggedIn = c32_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c32_u, 0)), "pluggedIn");
  chartInstance->c32_timer = c32_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c32_u, 1)), "timer");
  chartInstance->c32_is_active_c32_BuckyWagon_01 = c32_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c32_u, 2)),
     "is_active_c32_BuckyWagon_01");
  chartInstance->c32_is_c32_BuckyWagon_01 = c32_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c32_u, 3)),
    "is_c32_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c32_setSimStateSideEffectsInfo,
                c32_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c32_u
     , 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c32_u);
  chartInstance->c32_doSetSimStateSideEffects = 1U;
  c32_update_debugger_state_c32_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c32_st);
}

static void c32_set_sim_state_side_effects_c32_BuckyWagon_01
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c32_doSetSimStateSideEffects != 0) {
    if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_CountDown) {
      chartInstance->c32_tp_CountDown = 1U;
    } else {
      chartInstance->c32_tp_CountDown = 0U;
    }

    if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_Off) {
      chartInstance->c32_tp_Off = 1U;
    } else {
      chartInstance->c32_tp_Off = 0U;
    }

    if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_On) {
      chartInstance->c32_tp_On = 1U;
    } else {
      chartInstance->c32_tp_On = 0U;
    }

    if (chartInstance->c32_is_c32_BuckyWagon_01 == c32_IN_countUp) {
      chartInstance->c32_tp_countUp = 1U;
    } else {
      chartInstance->c32_tp_countUp = 0U;
    }

    chartInstance->c32_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c32_setSimStateSideEffectsInfo);
}

static void sf_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  int32_T c32_previousEvent;
  real_T *c32_histTime;
  boolean_T *c32_mainsOn;
  boolean_T *c32_pluggedIn;
  c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c32_mainsOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c32_histTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c32_set_sim_state_side_effects_c32_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,11);
  _SFD_DATA_RANGE_CHECK(*c32_histTime, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c32_mainsOn, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c32_pluggedIn, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c32_timer, 3U);
  c32_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c32_c32_BuckyWagon_01(chartInstance);
  _sfEvent_ = c32_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c32_c32_BuckyWagon_01(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T *c32_mainsOn;
  real_T *c32_histTime;
  boolean_T *c32_pluggedIn;
  c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c32_mainsOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c32_histTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,11);
  if ((int16_T)chartInstance->c32_is_active_c32_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,11);
    chartInstance->c32_is_active_c32_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c32_tp_Off = 1U;
    *c32_pluggedIn = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c32_pluggedIn, 2U);
  } else {
    switch (chartInstance->c32_is_c32_BuckyWagon_01) {
     case c32_IN_CountDown:
      CV_CHART_EVAL(11,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,
            ((chartInstance->c32_timer <= 0)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c32_mainsOn) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c32_tp_CountDown = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c32_tp_Off = 1U;
        *c32_pluggedIn = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c32_pluggedIn, 2U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c32_mainsOn)!=0)))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c32_tp_CountDown = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_countUp;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c32_tp_countUp = 1U;
        } else {
          chartInstance->c32_timer = c32__s16_s32_(chartInstance,
            chartInstance->c32_timer - 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c32_timer, 3U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c32_IN_Off:
      CV_CHART_EVAL(11,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c32_mainsOn)!=0)))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c32_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_countUp;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c32_tp_countUp = 1U;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c32_IN_On:
      CV_CHART_EVAL(11,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, !(_SFD_CCP_CALL(5,0,((*c32_mainsOn)!=0)) != 0))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c32_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_CountDown;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c32_tp_CountDown = 1U;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c32_IN_countUp:
      CV_CHART_EVAL(11,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2,0,((*c32_mainsOn)!=0)) != 0))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((real_T)chartInstance->c32_timer >= *c32_histTime) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c32_tp_countUp = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_CountDown;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c32_tp_CountDown = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,(((real_T)
                chartInstance->c32_timer >= *c32_histTime)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c32_tp_countUp = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c32_is_c32_BuckyWagon_01 = c32_IN_On;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c32_tp_On = 1U;
          *c32_pluggedIn = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c32_pluggedIn, 2U);
        } else {
          chartInstance->c32_timer = c32__s16_s32_(chartInstance,
            chartInstance->c32_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c32_timer, 3U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     default:
      CV_CHART_EVAL(11,0,0);
      chartInstance->c32_is_c32_BuckyWagon_01 = (uint8_T)c32_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
}

static void init_script_number_translation(uint32_T c32_machineNumber, uint32_T
  c32_chartNumber)
{
}

const mxArray *sf_c32_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c32_nameCaptureInfo = NULL;
  c32_nameCaptureInfo = NULL;
  sf_mex_assign(&c32_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c32_nameCaptureInfo;
}

static const mxArray *c32_sf_marshall(void *chartInstanceVoid, void *c32_u)
{
  const mxArray *c32_y = NULL;
  uint8_T c32_b_u;
  const mxArray *c32_b_y = NULL;
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c32_y = NULL;
  c32_b_u = *((uint8_T *)c32_u);
  c32_b_y = NULL;
  sf_mex_assign(&c32_b_y, sf_mex_create("y", &c32_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c32_y, c32_b_y);
  return c32_y;
}

static const mxArray *c32_b_sf_marshall(void *chartInstanceVoid, void *c32_u)
{
  const mxArray *c32_y = NULL;
  boolean_T c32_b_u;
  const mxArray *c32_b_y = NULL;
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c32_y = NULL;
  c32_b_u = *((boolean_T *)c32_u);
  c32_b_y = NULL;
  sf_mex_assign(&c32_b_y, sf_mex_create("y", &c32_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c32_y, c32_b_y);
  return c32_y;
}

static const mxArray *c32_c_sf_marshall(void *chartInstanceVoid, void *c32_u)
{
  const mxArray *c32_y = NULL;
  real_T c32_b_u;
  const mxArray *c32_b_y = NULL;
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c32_y = NULL;
  c32_b_u = *((real_T *)c32_u);
  c32_b_y = NULL;
  sf_mex_assign(&c32_b_y, sf_mex_create("y", &c32_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c32_y, c32_b_y);
  return c32_y;
}

static const mxArray *c32_d_sf_marshall(void *chartInstanceVoid, void *c32_u)
{
  const mxArray *c32_y = NULL;
  int16_T c32_b_u;
  const mxArray *c32_b_y = NULL;
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c32_y = NULL;
  c32_b_u = *((int16_T *)c32_u);
  c32_b_y = NULL;
  sf_mex_assign(&c32_b_y, sf_mex_create("y", &c32_b_u, 4, 0U, 0U, 0U, 0));
  sf_mex_assign(&c32_y, c32_b_y);
  return c32_y;
}

static boolean_T c32_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_pluggedIn, const char_T *
  c32_name)
{
  boolean_T c32_y;
  boolean_T c32_b0;
  sf_mex_import(c32_name, sf_mex_dup(c32_pluggedIn), &c32_b0, 1, 11, 0U, 0, 0U,
                0);
  c32_y = c32_b0;
  sf_mex_destroy(&c32_pluggedIn);
  return c32_y;
}

static int16_T c32_b_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c32_b_timer, const char_T *
  c32_name)
{
  int16_T c32_y;
  int16_T c32_i0;
  sf_mex_import(c32_name, sf_mex_dup(c32_b_timer), &c32_i0, 1, 4, 0U, 0, 0U, 0);
  c32_y = c32_i0;
  sf_mex_destroy(&c32_b_timer);
  return c32_y;
}

static uint8_T c32_c_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c32_b_is_active_c32_BuckyWagon_01, const char_T *c32_name)
{
  uint8_T c32_y;
  uint8_T c32_u0;
  sf_mex_import(c32_name, sf_mex_dup(c32_b_is_active_c32_BuckyWagon_01), &c32_u0,
                1, 3, 0U, 0, 0U, 0);
  c32_y = c32_u0;
  sf_mex_destroy(&c32_b_is_active_c32_BuckyWagon_01);
  return c32_y;
}

static const mxArray *c32_d_emlrt_marshallIn(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c32_b_setSimStateSideEffectsInfo, const char_T *c32_name)
{
  const mxArray *c32_y = NULL;
  c32_y = NULL;
  sf_mex_assign(&c32_y, sf_mex_duplicatearraysafe
                (&c32_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c32_b_setSimStateSideEffectsInfo);
  return c32_y;
}

static int16_T c32__s16_s32_(SFc32_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c32_b)
{
  int16_T c32_a;
  c32_a = (int16_T)c32_b;
  if (c32_a != c32_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c32_a;
}

static void init_test_point_addr_map(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c32_testPointAddrMap[0] = &chartInstance->c32_timer;
  chartInstance->c32_testPointAddrMap[1] = &chartInstance->c32_tp_CountDown;
  chartInstance->c32_testPointAddrMap[2] = &chartInstance->c32_tp_Off;
  chartInstance->c32_testPointAddrMap[3] = &chartInstance->c32_tp_On;
  chartInstance->c32_testPointAddrMap[4] = &chartInstance->c32_tp_countUp;
}

static void **get_test_point_address_map(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c32_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc32_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c32_testPointMappingInfo;
}

static void init_dsm_address_info(SFc32_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c32_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1151700010U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2589624197U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2203077332U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2721106134U);
}

mxArray *sf_c32_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2714662977U);
    pr[1] = (double)(1891130860U);
    pr[2] = (double)(2663518159U);
    pr[3] = (double)(1912145084U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c32_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[14],T\"pluggedIn\",},{M[3],M[15],T\"timer\",},{M[8],M[0],T\"is_active_c32_BuckyWagon_01\",},{M[9],M[0],T\"is_c32_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c32_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc32_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc32_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           32,
           4,
           7,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "histTime",0,(MexFcnForType)c32_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"mainsOn",
                              0,(MexFcnForType)c32_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "pluggedIn",0,(MexFcnForType)c32_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,0,0,0,SF_INT16,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
                              (MexFcnForType)c32_d_sf_marshall);
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

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

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

        {
          real_T *c32_histTime;
          boolean_T *c32_mainsOn;
          boolean_T *c32_pluggedIn;
          c32_pluggedIn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c32_mainsOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c32_histTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c32_histTime);
          _SFD_SET_DATA_VALUE_PTR(1U, c32_mainsOn);
          _SFD_SET_DATA_VALUE_PTR(2U, c32_pluggedIn);
          _SFD_SET_DATA_VALUE_PTR(3U, &chartInstance->c32_timer);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c32_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc32_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c32_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c32_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c32_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c32_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c32_BuckyWagon_01
    ((SFc32_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c32_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c32_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c32_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c32_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c32_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c32_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c32_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c32_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc32_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c32_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c32_BuckyWagon_01((SFc32_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c32_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",32);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",32,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",32,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",32,2);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",32,1);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",32);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2375655198U));
  ssSetChecksum1(S,(1135276990U));
  ssSetChecksum2(S,(3139400644U));
  ssSetChecksum3(S,(3064310778U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c32_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",32);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c32_BuckyWagon_01(SimStruct *S)
{
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc32_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc32_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c32_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c32_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c32_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c32_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c32_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c32_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c32_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c32_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c32_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c32_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c32_BuckyWagon_01;
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

void c32_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c32_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c32_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c32_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c32_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "int16_T", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

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

  { 1, 0, "StateflowChart/CountDown", "CountDown", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/Off", "Off", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/On", "On", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/countUp", "countUp", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    5                                  /* Num Block IO signals */
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
  SFc32_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc32_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
