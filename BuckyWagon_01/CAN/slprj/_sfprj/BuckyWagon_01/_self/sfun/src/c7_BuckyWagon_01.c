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
#define c7_IN_Off                      (3U)
#define c7_IN_FlashOne                 (1U)
#define c7_IN_FlashTwo                 (2U)
#define c7_IN_OffOne                   (4U)
#define c7_IN_OffTwo                   (5U)

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
static boolean_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_light, const char_T *c7_name);
static uint16_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_timer, const char_T *c7_name);
static uint8_T c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BuckyWagon_01, const char_T
  *c7_name);
static const mxArray *c7_d_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_name);
static uint16_T c7__u16_s32_(SFc7_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c7_b);
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
  boolean_T *c7_light;
  c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c7_doSetSimStateSideEffects = 0U;
  chartInstance->c7_setSimStateSideEffectsInfo = NULL;
  chartInstance->c7_tp_FlashOne = 0U;
  chartInstance->c7_tp_FlashTwo = 0U;
  chartInstance->c7_tp_Off = 0U;
  chartInstance->c7_tp_OffOne = 0U;
  chartInstance->c7_tp_OffTwo = 0U;
  chartInstance->c7_is_active_c7_BuckyWagon_01 = 0U;
  chartInstance->c7_is_c7_BuckyWagon_01 = 0U;
  chartInstance->c7_timer = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c7_light = FALSE;
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

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_FlashOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_FlashTwo) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_OffOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_OffTwo) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  sf_debug_set_animation(c7_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c7_BuckyWagon_01
  (SFc7_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c7_st = NULL;
  const mxArray *c7_y = NULL;
  boolean_T c7_hoistedGlobal;
  boolean_T c7_u;
  const mxArray *c7_b_y = NULL;
  uint16_T c7_b_hoistedGlobal;
  uint16_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  uint8_T c7_c_hoistedGlobal;
  uint8_T c7_c_u;
  const mxArray *c7_d_y = NULL;
  uint8_T c7_d_hoistedGlobal;
  uint8_T c7_d_u;
  const mxArray *c7_e_y = NULL;
  boolean_T *c7_light;
  c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellarray(4));
  c7_hoistedGlobal = *c7_light;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = chartInstance->c7_timer;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 1, c7_c_y);
  c7_c_hoistedGlobal = chartInstance->c7_is_active_c7_BuckyWagon_01;
  c7_c_u = c7_c_hoistedGlobal;
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y", &c7_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 2, c7_d_y);
  c7_d_hoistedGlobal = chartInstance->c7_is_c7_BuckyWagon_01;
  c7_d_u = c7_d_hoistedGlobal;
  c7_e_y = NULL;
  sf_mex_assign(&c7_e_y, sf_mex_create("y", &c7_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 3, c7_e_y);
  sf_mex_assign(&c7_st, c7_y);
  return c7_st;
}

static void set_sim_state_c7_BuckyWagon_01(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_st)
{
  const mxArray *c7_u;
  boolean_T *c7_light;
  c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_u = sf_mex_dup(c7_st);
  *c7_light = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u,
    0)), "light");
  chartInstance->c7_timer = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c7_u, 1)), "timer");
  chartInstance->c7_is_active_c7_BuckyWagon_01 = c7_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 2)),
     "is_active_c7_BuckyWagon_01");
  chartInstance->c7_is_c7_BuckyWagon_01 = c7_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c7_u, 3)),
    "is_c7_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c7_setSimStateSideEffectsInfo,
                c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 4)
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
    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_FlashOne) {
      chartInstance->c7_tp_FlashOne = 1U;
    } else {
      chartInstance->c7_tp_FlashOne = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_FlashTwo) {
      chartInstance->c7_tp_FlashTwo = 1U;
    } else {
      chartInstance->c7_tp_FlashTwo = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_Off) {
      chartInstance->c7_tp_Off = 1U;
    } else {
      chartInstance->c7_tp_Off = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_OffOne) {
      chartInstance->c7_tp_OffOne = 1U;
    } else {
      chartInstance->c7_tp_OffOne = 0U;
    }

    if (chartInstance->c7_is_c7_BuckyWagon_01 == c7_IN_OffTwo) {
      chartInstance->c7_tp_OffTwo = 1U;
    } else {
      chartInstance->c7_tp_OffTwo = 0U;
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
  uint8_T *c7_cCOn;
  boolean_T *c7_light;
  uint16_T *c7_offLongTime;
  uint16_T *c7_offShortTime;
  uint16_T *c7_onTime;
  c7_onTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c7_offShortTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c7_offLongTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_cCOn = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c7_set_sim_state_side_effects_c7_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,6);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_cCOn, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_offLongTime, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_offShortTime, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_onTime, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
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
  uint8_T *c7_cCOn;
  boolean_T *c7_light;
  uint16_T *c7_onTime;
  uint16_T *c7_offShortTime;
  uint16_T *c7_offLongTime;
  c7_onTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c7_offShortTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c7_offLongTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_cCOn = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,6);
  if ((int16_T)chartInstance->c7_is_active_c7_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,6);
    chartInstance->c7_is_active_c7_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c7_tp_Off = 1U;
    *c7_light = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
  } else {
    switch (chartInstance->c7_is_c7_BuckyWagon_01) {
     case c7_IN_FlashOne:
      CV_CHART_EVAL(6,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,
            ((chartInstance->c7_timer >= *c7_onTime)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c7_tp_FlashOne = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_OffOne;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c7_tp_OffOne = 1U;
        *c7_light = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        chartInstance->c7_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      } else {
        chartInstance->c7_timer = c7__u16_s32_(chartInstance,
          chartInstance->c7_timer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c7_IN_FlashTwo:
      CV_CHART_EVAL(6,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,
            ((chartInstance->c7_timer >= *c7_onTime)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c7_tp_FlashTwo = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_OffTwo;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c7_tp_OffTwo = 1U;
        *c7_light = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        chartInstance->c7_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      } else {
        chartInstance->c7_timer = c7__u16_s32_(chartInstance,
          chartInstance->c7_timer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c7_IN_Off:
      CV_CHART_EVAL(6,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c7_cCOn)!=0))) !=
          0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c7_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_FlashOne;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c7_tp_FlashOne = 1U;
        *c7_light = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        chartInstance->c7_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c7_IN_OffOne:
      CV_CHART_EVAL(6,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
            ((chartInstance->c7_timer >= *c7_offShortTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (!((int16_T)*c7_cCOn != 0)) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c7_tp_OffOne = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_FlashTwo;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c7_tp_FlashTwo = 1U;
        *c7_light = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        chartInstance->c7_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        if (CV_TRANSITION_EVAL(5U, !(_SFD_CCP_CALL(5,0,((*c7_cCOn)!=0)) != 0))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c7_tp_OffOne = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c7_tp_Off = 1U;
          *c7_light = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        } else {
          chartInstance->c7_timer = c7__u16_s32_(chartInstance,
            chartInstance->c7_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c7_IN_OffTwo:
      CV_CHART_EVAL(6,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11,0,
            ((chartInstance->c7_timer >= *c7_offLongTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 11;
          sf_debug_transition_conflict_check_begin();
          if (!((int16_T)*c7_cCOn != 0)) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c7_tp_OffTwo = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_FlashOne;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c7_tp_FlashOne = 1U;
        *c7_light = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        chartInstance->c7_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, !(_SFD_CCP_CALL(6,0,((*c7_cCOn)!=0)) != 0))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c7_tp_OffTwo = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c7_is_c7_BuckyWagon_01 = c7_IN_Off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c7_tp_Off = 1U;
          *c7_light = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c7_light, 1U);
        } else {
          chartInstance->c7_timer = c7__u16_s32_(chartInstance,
            chartInstance->c7_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c7_timer, 5U);
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
  uint16_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc7_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((uint16_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static boolean_T c7_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_light, const char_T *c7_name
  )
{
  boolean_T c7_y;
  boolean_T c7_b0;
  sf_mex_import(c7_name, sf_mex_dup(c7_light), &c7_b0, 1, 11, 0U, 0, 0U, 0);
  c7_y = c7_b0;
  sf_mex_destroy(&c7_light);
  return c7_y;
}

static uint16_T c7_b_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_timer, const char_T *
  c7_name)
{
  uint16_T c7_y;
  uint16_T c7_u0;
  sf_mex_import(c7_name, sf_mex_dup(c7_b_timer), &c7_u0, 1, 5, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_b_timer);
  return c7_y;
}

static uint8_T c7_c_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BuckyWagon_01
  , const char_T *c7_name)
{
  uint8_T c7_y;
  uint8_T c7_u1;
  sf_mex_import(c7_name, sf_mex_dup(c7_b_is_active_c7_BuckyWagon_01), &c7_u1, 1,
                3, 0U, 0, 0U, 0);
  c7_y = c7_u1;
  sf_mex_destroy(&c7_b_is_active_c7_BuckyWagon_01);
  return c7_y;
}

static const mxArray *c7_d_emlrt_marshallIn(SFc7_BuckyWagon_01InstanceStruct
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

static uint16_T c7__u16_s32_(SFc7_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c7_b)
{
  uint16_T c7_a;
  c7_a = (uint16_T)c7_b;
  if (c7_a != c7_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c7_a;
}

static void init_test_point_addr_map(SFc7_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c7_testPointAddrMap[0] = &chartInstance->c7_timer;
  chartInstance->c7_testPointAddrMap[1] = &chartInstance->c7_tp_FlashOne;
  chartInstance->c7_testPointAddrMap[2] = &chartInstance->c7_tp_FlashTwo;
  chartInstance->c7_testPointAddrMap[3] = &chartInstance->c7_tp_Off;
  chartInstance->c7_testPointAddrMap[4] = &chartInstance->c7_tp_OffOne;
  chartInstance->c7_testPointAddrMap[5] = &chartInstance->c7_tp_OffTwo;
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
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2791757011U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1322936154U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(727659829U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(962554410U);
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
    pr[0] = (double)(1393685245U);
    pr[1] = (double)(2484836146U);
    pr[2] = (double)(92881684U);
    pr[3] = (double)(948473407U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[25],T\"light\",},{M[3],M[29],T\"timer\",},{M[8],M[0],T\"is_active_c7_BuckyWagon_01\",},{M[9],M[0],T\"is_c7_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
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
           13,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"cCOn",0,
                              (MexFcnForType)c7_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"light",0,
                              (MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "offLongTime",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "offShortTime",0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"onTime",
                              0,(MexFcnForType)c7_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,0,0,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
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

          static unsigned int sEndGuardMap[] = { 5 };

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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
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

          static unsigned int sEndGuardMap[] = { 5 };

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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
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

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
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

        {
          uint8_T *c7_cCOn;
          boolean_T *c7_light;
          uint16_T *c7_offLongTime;
          uint16_T *c7_offShortTime;
          uint16_T *c7_onTime;
          c7_onTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c7_offShortTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c7_offLongTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c7_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c7_cCOn = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c7_cCOn);
          _SFD_SET_DATA_VALUE_PTR(1U, c7_light);
          _SFD_SET_DATA_VALUE_PTR(2U, c7_offLongTime);
          _SFD_SET_DATA_VALUE_PTR(3U, c7_offShortTime);
          _SFD_SET_DATA_VALUE_PTR(4U, c7_onTime);
          _SFD_SET_DATA_VALUE_PTR(5U, &chartInstance->c7_timer);
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
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",7,4);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",7,1);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3532293843U));
  ssSetChecksum1(S,(103605330U));
  ssSetChecksum2(S,(1667832197U));
  ssSetChecksum3(S,(465218848U));
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
  { "uint16_T", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

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

  { 1, 0, "StateflowChart/FlashOne", "FlashOne", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/FlashTwo", "FlashTwo", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/Off", "Off", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/OffOne", "OffOne", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/OffTwo", "OffTwo", 0, 1, 0, 0, 0 } };

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
