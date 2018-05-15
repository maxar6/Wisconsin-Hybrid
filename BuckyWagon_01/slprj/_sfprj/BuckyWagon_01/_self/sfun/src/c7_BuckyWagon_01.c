/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c7_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c7_IN_NO_ACTIVE_CHILD          (0U)
#define c7_IN_Init                     (1U)
#define c7_IN_On                       (3U)
#define c7_IN_Off                      (2U)
#define c7_IN_Standby                  (5U)
#define c7_IN_Restart                  (4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c7_update_debugger_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_st);
static void c7_set_sim_state_side_effects_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct *chartInstance);
static void c7_chartstep_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initSimStructsc7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber);
static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData);
static int32_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static uint8_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_tp_Init, const char_T *c7_identifier);
static uint8_T c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static real_T c7_d_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_ctrlState, const char_T *c7_identifier);
static real_T c7_e_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_d_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static const mxArray *c7_f_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_identifier);
static const mxArray *c7_g_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void init_dsm_address_info(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c7_ctrlState;
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c7_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c7_doSetSimStateSideEffects = 0U;
  chartInstance->c7_setSimStateSideEffectsInfo = NULL;
  chartInstance->c7_tp_Init = 0U;
  chartInstance->c7_tp_Off = 0U;
  chartInstance->c7_tp_On = 0U;
  chartInstance->c7_tp_Restart = 0U;
  chartInstance->c7_tp_Standby = 0U;
  chartInstance->c7_is_active_c7_BuckyWagon_01 = 0U;
  chartInstance->c7_is_c7_BuckyWagon_01 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c7_ctrlState = 0.0;
  }
}

static void initialize_params_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c7_update_debugger_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c7_prevAniVal;
  c7_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c7_is_active_c7_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 6U, chartInstance->c7_sfEvent);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Restart) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
  }

  sf_debug_set_animation(c7_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c7_st;
  const mxArray *c7_y = NULL;
  real_T c7_hoistedGlobal;
  real_T c7_u;
  const mxArray *c7_b_y = NULL;
  uint8_T c7_b_hoistedGlobal;
  uint8_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  uint8_T c7_c_hoistedGlobal;
  uint8_T c7_c_u;
  const mxArray *c7_d_y = NULL;
  real_T *c7_ctrlState;
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_st = NULL;
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellarray(3));
  c7_hoistedGlobal = *c7_ctrlState;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = chartInstance->c7_is_active_c7_BuckyWagon_01;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 1, c7_c_y);
  c7_c_hoistedGlobal = chartInstance->c7_is_c7_BuckyWagon_01;
  c7_c_u = c7_c_hoistedGlobal;
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y", &c7_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 2, c7_d_y);
  sf_mex_assign(&c7_st, c7_y);
  return c7_st;
}

static void set_sim_state_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_st)
{
  const mxArray *c7_u;
  real_T *c7_ctrlState;
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_u = sf_mex_dup(c7_st);
  *c7_ctrlState = c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 0)), "ctrlState");
  chartInstance->c7_is_active_c7_BuckyWagon_01 = c7_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
     "is_active_c7_BuckyWagon_01");
  chartInstance->c7_is_c7_BuckyWagon_01 = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c7_u, 2)), "is_c7_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c7_setSimStateSideEffectsInfo,
                c7_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c7_u);
  chartInstance->c7_doSetSimStateSideEffects = 1U;
  c7_update_debugger_state_c7_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c7_st);
}

static void c7_set_sim_state_side_effects_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c7_doSetSimStateSideEffects != 0) {
    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Init) {
      chartInstance->c7_tp_Init = 1U;
    } else {
      chartInstance->c7_tp_Init = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Off) {
      chartInstance->c7_tp_Off = 1U;
    } else {
      chartInstance->c7_tp_Off = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_On) {
      chartInstance->c7_tp_On = 1U;
    } else {
      chartInstance->c7_tp_On = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Restart) {
      chartInstance->c7_tp_Restart = 1U;
    } else {
      chartInstance->c7_tp_Restart = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Standby) {
      chartInstance->c7_tp_Standby = 1U;
    } else {
      chartInstance->c7_tp_Standby = 0U;
    }

    chartInstance->c7_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c7_setSimStateSideEffectsInfo);
}

static void sf_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  real_T *c7_ctrlState;
  real_T *c7_keyOn;
  real_T *c7_keyThreshOn;
  boolean_T *c7_shutdownReq;
  real_T *c7_initState;
  real_T *c7_onState;
  real_T *c7_offState;
  real_T *c7_keyThreshOnOff;
  real_T *c7_trqThresh;
  real_T *c7_trqIn;
  c7_trqIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c7_trqThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c7_keyThreshOnOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c7_offState = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c7_onState = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c7_initState = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c7_shutdownReq = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c7_keyThreshOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_keyOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_set_sim_state_side_effects_c7_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 6U, chartInstance->c7_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
  _SFD_DATA_RANGE_CHECK(*c7_keyOn, 1U);
  _SFD_DATA_RANGE_CHECK(*c7_keyThreshOn, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_shutdownReq, 3U);
  _SFD_DATA_RANGE_CHECK(*c7_initState, 4U);
  _SFD_DATA_RANGE_CHECK(*c7_onState, 5U);
  _SFD_DATA_RANGE_CHECK(*c7_offState, 6U);
  _SFD_DATA_RANGE_CHECK(*c7_keyThreshOnOff, 7U);
  _SFD_DATA_RANGE_CHECK(*c7_trqThresh, 8U);
  _SFD_DATA_RANGE_CHECK(*c7_trqIn, 9U);
  chartInstance->c7_sfEvent = CALL_EVENT;
  c7_chartstep_c7_BuckyWagon_01(chartInstance);
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c7_chartstep_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T c7_temp;
  real_T *c7_keyOn;
  real_T *c7_keyThreshOn;
  real_T *c7_initState;
  real_T *c7_ctrlState;
  real_T *c7_offState;
  boolean_T *c7_shutdownReq;
  real_T *c7_keyThreshOnOff;
  real_T *c7_trqIn;
  real_T *c7_trqThresh;
  real_T *c7_onState;
  c7_trqIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c7_trqThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c7_keyThreshOnOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c7_offState = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c7_onState = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c7_initState = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c7_shutdownReq = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c7_keyThreshOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_keyOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 6U, chartInstance->c7_sfEvent);
  if ((int16_T)chartInstance->c7_is_active_c7_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 6U, chartInstance->c7_sfEvent);
    chartInstance->c7_is_active_c7_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c7_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c7_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
    chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
    chartInstance->c7_tp_Init = 1U;
  } else {
    switch (chartInstance->c7_is_c7_BuckyWagon_01) {
     case c7_IN_Init:
      CV_CHART_EVAL(6, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c7_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c7_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c7_keyOn >=
            *c7_keyThreshOn != 0U, chartInstance->c7_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_Init = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_On = 1U;
      } else {
        *c7_ctrlState = *c7_initState;
        _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c7_sfEvent);
      break;

     case c7_IN_Off:
      CV_CHART_EVAL(6, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c7_sfEvent);
      *c7_ctrlState = *c7_offState;
      _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c7_sfEvent);
      break;

     case c7_IN_On:
      CV_CHART_EVAL(6, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c7_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c7_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c7_shutdownReq
            != 0U, chartInstance->c7_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((*c7_keyOn >= *c7_keyThreshOnOff) && (*c7_trqIn < *c7_trqThresh))
          {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_Off = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c7_sfEvent);
        c7_temp = (_SFD_CCP_CALL(3U, 0, *c7_keyOn >= *c7_keyThreshOnOff != 0U,
                    chartInstance->c7_sfEvent) != 0);
        if (c7_temp) {
          c7_temp = (_SFD_CCP_CALL(3U, 1, *c7_trqIn < *c7_trqThresh != 0U,
                      chartInstance->c7_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c7_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_On = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_Standby = 1U;
        } else {
          *c7_ctrlState = *c7_onState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c7_sfEvent);
      break;

     case c7_IN_Restart:
      CV_CHART_EVAL(6, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c7_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c7_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c7_ctrlState == *
            c7_initState != 0U, chartInstance->c7_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if (*c7_shutdownReq) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_Restart = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_On = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                     chartInstance->c7_sfEvent);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c7_shutdownReq
              != 0U, chartInstance->c7_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_Restart = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_Off = 1U;
        } else {
          *c7_ctrlState = *c7_initState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c7_sfEvent);
      break;

     case c7_IN_Standby:
      CV_CHART_EVAL(6, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c7_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c7_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c7_trqIn >=
            *c7_trqThresh != 0U, chartInstance->c7_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c7_shutdownReq) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_Standby = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Restart;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c7_sfEvent);
        chartInstance->c7_tp_Restart = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     chartInstance->c7_sfEvent);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c7_shutdownReq
              != 0U, chartInstance->c7_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_Standby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c7_sfEvent);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c7_sfEvent);
          chartInstance->c7_tp_Off = 1U;
        } else {
          *c7_ctrlState = *c7_offState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c7_sfEvent);
      break;

     default:
      CV_CHART_EVAL(6, 0, 0);
      chartInstance->c7_is_c7_BuckyWagon_01 = (uint8_T)c7_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c7_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c7_sfEvent);
}

static void initSimStructsc7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber)
{
}

const mxArray *sf_c7_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c7_nameCaptureInfo;
}

static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  int32_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(int32_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static int32_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  int32_T c7_y;
  int32_T c7_i0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_i0, 1, 6, 0U, 0, 0U, 0);
  c7_y = c7_i0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_b_sfEvent;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  int32_T c7_y;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_b_sfEvent = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_sfEvent), &c7_thisId);
  sf_mex_destroy(&c7_b_sfEvent);
  *(int32_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  uint8_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(uint8_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static uint8_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_tp_Init, const char_T *c7_identifier)
{
  uint8_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_tp_Init),
    &c7_thisId);
  sf_mex_destroy(&c7_b_tp_Init);
  return c7_y;
}

static uint8_T c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_u0, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_b_tp_Init;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  uint8_T c7_y;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_b_tp_Init = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_tp_Init),
    &c7_thisId);
  sf_mex_destroy(&c7_b_tp_Init);
  *(uint8_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  real_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(real_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static real_T c7_d_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_ctrlState, const char_T *c7_identifier)
{
  real_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_ctrlState),
    &c7_thisId);
  sf_mex_destroy(&c7_ctrlState);
  return c7_y;
}

static real_T c7_e_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  real_T c7_y;
  real_T c7_d0;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_d0, 1, 0, 0U, 0, 0U, 0);
  c7_y = c7_d0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_ctrlState;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  real_T c7_y;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_ctrlState = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_y = c7_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_ctrlState),
    &c7_thisId);
  sf_mex_destroy(&c7_ctrlState);
  *(real_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_d_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  boolean_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(boolean_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_mxArrayOutData, c7_y);
  return c7_mxArrayOutData;
}

static const mxArray *c7_f_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_identifier)
{
  const mxArray *c7_y = NULL;
  emlrtMsgIdentifier c7_thisId;
  c7_y = NULL;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  sf_mex_assign(&c7_y, c7_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c7_b_setSimStateSideEffectsInfo), &c7_thisId));
  sf_mex_destroy(&c7_b_setSimStateSideEffectsInfo);
  return c7_y;
}

static const mxArray *c7_g_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  const mxArray *c7_y = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_duplicatearraysafe(&c7_u));
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void init_dsm_address_info(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c7_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2739647114U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(169595887U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3845751167U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(828002252U);
}

mxArray *sf_c7_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3818706778U);
    pr[1] = (double)(1727292310U);
    pr[2] = (double)(319857755U);
    pr[3] = (double)(104451024U);
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

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c7_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[7],T\"ctrlState\",},{M[8],M[0],T\"is_active_c7_BuckyWagon_01\",},{M[9],M[0],T\"is_c7_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc7_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           7,
           5,
           8,
           10,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"ctrlState");
          _SFD_SET_DATA_PROPS(1,1,1,0,"keyOn");
          _SFD_SET_DATA_PROPS(2,1,1,0,"keyThreshOn");
          _SFD_SET_DATA_PROPS(3,1,1,0,"shutdownReq");
          _SFD_SET_DATA_PROPS(4,1,1,0,"initState");
          _SFD_SET_DATA_PROPS(5,1,1,0,"onState");
          _SFD_SET_DATA_PROPS(6,1,1,0,"offState");
          _SFD_SET_DATA_PROPS(7,1,1,0,"keyThreshOnOff");
          _SFD_SET_DATA_PROPS(8,1,1,0,"trqThresh");
          _SFD_SET_DATA_PROPS(9,1,1,0,"trqIn");
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

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 26 };

          static unsigned int sEndGuardMap[] = { 22, 41 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

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

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 26 };

          static unsigned int sEndGuardMap[] = { 22, 41 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)c7_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c7_ctrlState;
          real_T *c7_keyOn;
          real_T *c7_keyThreshOn;
          boolean_T *c7_shutdownReq;
          real_T *c7_initState;
          real_T *c7_onState;
          real_T *c7_offState;
          real_T *c7_keyThreshOnOff;
          real_T *c7_trqThresh;
          real_T *c7_trqIn;
          c7_trqIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c7_trqThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c7_keyThreshOnOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c7_offState = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c7_onState = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c7_initState = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c7_shutdownReq = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c7_keyThreshOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c7_keyOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c7_ctrlState);
          _SFD_SET_DATA_VALUE_PTR(1U, c7_keyOn);
          _SFD_SET_DATA_VALUE_PTR(2U, c7_keyThreshOn);
          _SFD_SET_DATA_VALUE_PTR(3U, c7_shutdownReq);
          _SFD_SET_DATA_VALUE_PTR(4U, c7_initState);
          _SFD_SET_DATA_VALUE_PTR(5U, c7_onState);
          _SFD_SET_DATA_VALUE_PTR(6U, c7_offState);
          _SFD_SET_DATA_VALUE_PTR(7U, c7_keyThreshOnOff);
          _SFD_SET_DATA_VALUE_PTR(8U, c7_trqThresh);
          _SFD_SET_DATA_VALUE_PTR(9U, c7_trqIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c7_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc7_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c7_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c7_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c7_BuckyWagon_01
    ((SFc7_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_BuckyWagon_01();/* state var info */
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

extern void sf_internal_set_sim_state_c7_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c7_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c7_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c7_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c7_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c7_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_BuckyWagon_01((SFc7_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c7_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BuckyWagon_01","BuckyWagon_01",7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01","BuckyWagon_01",7,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01",
      "BuckyWagon_01",7,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",7,9);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",7,1);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1097658211U));
  ssSetChecksum1(S,(1627085061U));
  ssSetChecksum2(S,(3851053614U));
  ssSetChecksum3(S,(2315334095U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c7_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",7);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c7_BuckyWagon_01(SimStruct *S)
{
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc7_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc7_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c7_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c7_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c7_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c7_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c7_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c7_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c7_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c7_BuckyWagon_01;
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

void c7_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c7_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
