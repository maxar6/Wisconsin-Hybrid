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
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber);
static const mxArray *c7_sf_marshall(void *chartInstanceVoid, void *c7_u);
static const mxArray *c7_b_sf_marshall(void *chartInstanceVoid, void *c7_u);
static const mxArray *c7_c_sf_marshall(void *chartInstanceVoid, void *c7_u);
static real_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_ctrlState, const char_T *c7_name);
static uint8_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BuckyWagon_01, const char_T
  *c7_name);
static const mxArray *c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_name);
static void init_test_point_addr_map(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c7_ctrlState;
  c7_ctrlState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
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
    _SFD_CC_CALL(CHART_ACTIVE_TAG,6);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Restart) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  sf_debug_set_animation(c7_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c7_st = NULL;
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
  *c7_ctrlState = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 0)), "ctrlState");
  chartInstance->c7_is_active_c7_BuckyWagon_01 = c7_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
     "is_active_c7_BuckyWagon_01");
  chartInstance->c7_is_c7_BuckyWagon_01 = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c7_u, 2)),
    "is_c7_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c7_setSimStateSideEffectsInfo,
                c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 3)
    ), "setSimStateSideEffectsInfo"));
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
  int32_T c7_previousEvent;
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
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,6);
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
  c7_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c7_chartstep_c7_BuckyWagon_01(chartInstance);
  _sfEvent_ = c7_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c7_chartstep_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T c7_temp;
  real_T *c7_trqIn;
  real_T *c7_trqThresh;
  boolean_T *c7_shutdownReq;
  real_T *c7_offState;
  real_T *c7_ctrlState;
  real_T *c7_keyOn;
  real_T *c7_keyThreshOn;
  real_T *c7_initState;
  real_T *c7_keyThreshOnOff;
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
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,6);
  if ((int16_T)chartInstance->c7_is_active_c7_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,6);
    chartInstance->c7_is_active_c7_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c7_tp_Init = 1U;
  } else {
    switch (chartInstance->c7_is_c7_BuckyWagon_01) {
     case c7_IN_Init:
      CV_CHART_EVAL(6,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c7_keyOn >=
              *c7_keyThreshOn)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c7_tp_Init = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c7_tp_On = 1U;
      } else {
        *c7_ctrlState = *c7_initState;
        _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c7_IN_Off:
      CV_CHART_EVAL(6,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      *c7_ctrlState = *c7_offState;
      _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c7_IN_On:
      CV_CHART_EVAL(6,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c7_shutdownReq)!=
             0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((*c7_keyOn >= *c7_keyThreshOnOff) && (*c7_trqIn < *c7_trqThresh))
          {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c7_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c7_tp_Off = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        c7_temp = (_SFD_CCP_CALL(3,0,((*c7_keyOn >= *c7_keyThreshOnOff)!=0)) !=
                   0);
        if (c7_temp) {
          c7_temp = (_SFD_CCP_CALL(3,1,((*c7_trqIn < *c7_trqThresh)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c7_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c7_tp_On = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c7_tp_Standby = 1U;
        } else {
          *c7_ctrlState = *c7_onState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c7_IN_Restart:
      CV_CHART_EVAL(6,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c7_ctrlState ==
              *c7_initState)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if (*c7_shutdownReq) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c7_tp_Restart = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c7_tp_On = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c7_shutdownReq)
               !=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c7_tp_Restart = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c7_tp_Off = 1U;
        } else {
          *c7_ctrlState = *c7_initState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c7_IN_Standby:
      CV_CHART_EVAL(6,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c7_trqIn >=
              *c7_trqThresh)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c7_shutdownReq) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c7_tp_Standby = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Restart;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c7_tp_Restart = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c7_shutdownReq)
               !=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c7_tp_Standby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c7_tp_Off = 1U;
        } else {
          *c7_ctrlState = *c7_offState;
          _SFD_DATA_RANGE_CHECK(*c7_ctrlState, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(6,0,0);
      chartInstance->c7_is_c7_BuckyWagon_01 = (uint8_T)c7_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
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

static const mxArray *c7_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  uint8_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((uint8_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static const mxArray *c7_b_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  boolean_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((boolean_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static const mxArray *c7_c_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  real_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((real_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static real_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_ctrlState, const char_T *
  c7_name)
{
  real_T c7_y;
  real_T c7_d0;
  sf_mex_import(c7_name, sf_mex_dup(c7_ctrlState), &c7_d0, 1, 0, 0U, 0, 0U, 0);
  c7_y = c7_d0;
  sf_mex_destroy(&c7_ctrlState);
  return c7_y;
}

static uint8_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BuckyWagon_01
  , const char_T *c7_name)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  sf_mex_import(c7_name, sf_mex_dup(c7_b_is_active_c7_BuckyWagon_01), &c7_u0, 1,
                3, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_b_is_active_c7_BuckyWagon_01);
  return c7_y;
}

static const mxArray *c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c7_b_setSimStateSideEffectsInfo, const char_T *c7_name)
{
  const mxArray *c7_y = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_duplicatearraysafe
                (&c7_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c7_b_setSimStateSideEffectsInfo);
  return c7_y;
}

static void init_test_point_addr_map(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c7_testPointAddrMap[0] = &chartInstance->c7_tp_Init;
  chartInstance->c7_testPointAddrMap[1] = &chartInstance->c7_tp_Off;
  chartInstance->c7_testPointAddrMap[2] = &chartInstance->c7_tp_On;
  chartInstance->c7_testPointAddrMap[3] = &chartInstance->c7_tp_Restart;
  chartInstance->c7_testPointAddrMap[4] = &chartInstance->c7_tp_Standby;
}

static void **get_test_point_address_map(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c7_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c7_testPointMappingInfo;
}

static void init_dsm_address_info(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c7_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(444252106U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3369987593U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(608927271U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(399583851U);
}

mxArray *sf_c7_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2673312609U);
    pr[1] = (double)(3553134923U);
    pr[2] = (double)(3783838666U);
    pr[3] = (double)(2758498701U);
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

static mxArray *sf_get_sim_state_info_c7_BuckyWagon_01(void)
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
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "ctrlState",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"keyOn",0,
                              (MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "keyThreshOn",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "shutdownReq",0,(MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "initState",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"onState",
                              0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "offState",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "keyThreshOnOff",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "trqThresh",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"trqIn",0,
                              (MexFcnForType)c7_c_sf_marshall);
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

static mxArray* sf_internal_get_sim_state_c7_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c7_BuckyWagon_01
    ((SFc7_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c7_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c7_BuckyWagon_01(SimStruct* S, const
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

static mxArray* sf_opaque_get_sim_state_c7_BuckyWagon_01(SimStruct* S)
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
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
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
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",7,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
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
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1131971884U));
  ssSetChecksum1(S,(4213618216U));
  ssSetChecksum2(S,(189600534U));
  ssSetChecksum3(S,(904201119U));
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
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info(chartInstance);
  }

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
  { 0, 0, "StateflowChart/Init", "Init", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Off", "Off", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/On", "On", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Restart", "Restart", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/Standby", "Standby", 0, 0, 0, 0, 0 } };

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
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
