/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c5_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c5_IN_NO_ACTIVE_CHILD          (0U)
#define c5_IN_Off                      (2U)
#define c5_IN_FlashOn                  (2U)
#define c5_IN_FlashOff                 (1U)
#define c5_IN_On                       (3U)
#define c5_IN_Flash                    (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c5_update_debugger_state_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_st);
static void c5_set_sim_state_side_effects_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct *chartInstance);
static void c5_exit_internal_Flash(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber);
static const mxArray *c5_sf_marshall(void *chartInstanceVoid, void *c5_u);
static const mxArray *c5_b_sf_marshall(void *chartInstanceVoid, void *c5_u);
static uint8_T c5_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_flashCntr, const char_T *c5_name);
static boolean_T c5_b_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_light, const char_T *c5_name);
static const mxArray *c5_c_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_b_setSimStateSideEffectsInfo, const char_T
  *c5_name);
static uint8_T c5__u8_s32_(SFc5_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c5_b);
static void init_test_point_addr_map(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T *c5_light;
  uint8_T *c5_flashCntr;
  uint8_T *c5_timer;
  c5_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_flashCntr = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_doSetSimStateSideEffects = 0U;
  chartInstance->c5_setSimStateSideEffectsInfo = NULL;
  chartInstance->c5_is_Flash = 0U;
  chartInstance->c5_tp_Flash = 0U;
  chartInstance->c5_tp_FlashOff = 0U;
  chartInstance->c5_tp_FlashOn = 0U;
  chartInstance->c5_tp_Off = 0U;
  chartInstance->c5_tp_On = 0U;
  chartInstance->c5_is_active_c5_BuckyWagon_01 = 0U;
  chartInstance->c5_is_c5_BuckyWagon_01 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c5_light = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c5_flashCntr = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c5_timer = 0U;
  }
}

static void initialize_params_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_update_debugger_state_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c5_prevAniVal;
  c5_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c5_is_active_c5_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,4);
  }

  if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c5_is_Flash == c5_IN_FlashOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c5_is_Flash == c5_IN_FlashOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_Flash) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  sf_debug_set_animation(c5_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c5_st = NULL;
  const mxArray *c5_y = NULL;
  uint8_T c5_hoistedGlobal;
  uint8_T c5_u;
  const mxArray *c5_b_y = NULL;
  boolean_T c5_b_hoistedGlobal;
  boolean_T c5_b_u;
  const mxArray *c5_c_y = NULL;
  uint8_T c5_c_hoistedGlobal;
  uint8_T c5_c_u;
  const mxArray *c5_d_y = NULL;
  uint8_T c5_d_hoistedGlobal;
  uint8_T c5_d_u;
  const mxArray *c5_e_y = NULL;
  uint8_T c5_e_hoistedGlobal;
  uint8_T c5_e_u;
  const mxArray *c5_f_y = NULL;
  uint8_T c5_f_hoistedGlobal;
  uint8_T c5_f_u;
  const mxArray *c5_g_y = NULL;
  uint8_T *c5_flashCntr;
  boolean_T *c5_light;
  uint8_T *c5_timer;
  c5_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_flashCntr = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellarray(6));
  c5_hoistedGlobal = *c5_flashCntr;
  c5_u = c5_hoistedGlobal;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_b_hoistedGlobal = *c5_light;
  c5_b_u = c5_b_hoistedGlobal;
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", &c5_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_c_hoistedGlobal = *c5_timer;
  c5_c_u = c5_c_hoistedGlobal;
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_d_hoistedGlobal = chartInstance->c5_is_active_c5_BuckyWagon_01;
  c5_d_u = c5_d_hoistedGlobal;
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", &c5_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 3, c5_e_y);
  c5_e_hoistedGlobal = chartInstance->c5_is_c5_BuckyWagon_01;
  c5_e_u = c5_e_hoistedGlobal;
  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", &c5_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 4, c5_f_y);
  c5_f_hoistedGlobal = chartInstance->c5_is_Flash;
  c5_f_u = c5_f_hoistedGlobal;
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", &c5_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 5, c5_g_y);
  sf_mex_assign(&c5_st, c5_y);
  return c5_st;
}

static void set_sim_state_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  uint8_T *c5_flashCntr;
  boolean_T *c5_light;
  uint8_T *c5_timer;
  c5_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_flashCntr = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_u = sf_mex_dup(c5_st);
  *c5_flashCntr = c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 0)), "flashCntr");
  *c5_light = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 1)), "light");
  *c5_timer = c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u,
    2)), "timer");
  chartInstance->c5_is_active_c5_BuckyWagon_01 = c5_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 3)),
     "is_active_c5_BuckyWagon_01");
  chartInstance->c5_is_c5_BuckyWagon_01 = c5_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 4)),
    "is_c5_BuckyWagon_01");
  chartInstance->c5_is_Flash = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 5)), "is_Flash");
  sf_mex_assign(&chartInstance->c5_setSimStateSideEffectsInfo,
                c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 6)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c5_u);
  chartInstance->c5_doSetSimStateSideEffects = 1U;
  c5_update_debugger_state_c5_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void c5_set_sim_state_side_effects_c5_BuckyWagon_01
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c5_doSetSimStateSideEffects != 0) {
    if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_Flash) {
      chartInstance->c5_tp_Flash = 1U;
    } else {
      chartInstance->c5_tp_Flash = 0U;
    }

    if (chartInstance->c5_is_Flash == c5_IN_FlashOff) {
      chartInstance->c5_tp_FlashOff = 1U;
    } else {
      chartInstance->c5_tp_FlashOff = 0U;
    }

    if (chartInstance->c5_is_Flash == c5_IN_FlashOn) {
      chartInstance->c5_tp_FlashOn = 1U;
    } else {
      chartInstance->c5_tp_FlashOn = 0U;
    }

    if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_Off) {
      chartInstance->c5_tp_Off = 1U;
    } else {
      chartInstance->c5_tp_Off = 0U;
    }

    if (chartInstance->c5_is_c5_BuckyWagon_01 == c5_IN_On) {
      chartInstance->c5_tp_On = 1U;
    } else {
      chartInstance->c5_tp_On = 0U;
    }

    chartInstance->c5_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c5_setSimStateSideEffectsInfo);
}

static void sf_c5_BuckyWagon_01(SFc5_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c5_previousEvent;
  boolean_T *c5_BrakeSw;
  boolean_T *c5_light;
  uint8_T *c5_FlashEn;
  uint8_T *c5_flashCnt;
  uint8_T *c5_flashCntr;
  uint8_T *c5_flashTime;
  uint8_T *c5_timer;
  c5_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_flashTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c5_flashCntr = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_flashCnt = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c5_FlashEn = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c5_BrakeSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c5_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_set_sim_state_side_effects_c5_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,4);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_BrakeSw, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_FlashEn, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_flashCnt, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_flashCntr, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_flashTime, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
  c5_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,4);
  if ((int16_T)chartInstance->c5_is_active_c5_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,4);
    chartInstance->c5_is_active_c5_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c5_tp_Off = 1U;
    *c5_light = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
  } else {
    switch (chartInstance->c5_is_c5_BuckyWagon_01) {
     case c5_IN_Flash:
      CV_CHART_EVAL(4,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      if (CV_TRANSITION_EVAL(9U, !(_SFD_CCP_CALL(9,0,((*c5_BrakeSw)!=0)) != 0))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 9;
          sf_debug_transition_conflict_check_begin();
          if (*c5_flashCntr > *c5_flashCnt) {
            transitionList[numTransitions] = 10;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        c5_exit_internal_Flash(chartInstance);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c5_tp_Flash = 0U;
        chartInstance->c5_is_c5_BuckyWagon_01 = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c5_tp_Off = 1U;
        *c5_light = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,((*c5_flashCntr >
                *c5_flashCnt)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
          c5_exit_internal_Flash(chartInstance);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c5_tp_Flash = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_On;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c5_tp_On = 1U;
          *c5_light = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
        } else {
          switch (chartInstance->c5_is_Flash) {
           case c5_IN_FlashOff:
            CV_STATE_EVAL(0,0,1);
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
            if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c5_timer >=
                    *c5_flashTime)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
              chartInstance->c5_tp_FlashOff = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
              chartInstance->c5_is_Flash = c5_IN_FlashOn;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
              chartInstance->c5_tp_FlashOn = 1U;
              *c5_light = TRUE;
              _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
              *c5_timer = 0U;
              _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
              *c5_flashCntr = c5__u8_s32_(chartInstance, *c5_flashCntr + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c5_flashCntr, 4U);
            } else {
              *c5_timer = c5__u8_s32_(chartInstance, *c5_timer + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
            }

            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
            break;

           case c5_IN_FlashOn:
            CV_STATE_EVAL(0,0,2);
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
            if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c5_timer >=
                    *c5_flashTime)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
              chartInstance->c5_tp_FlashOn = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
              chartInstance->c5_is_Flash = c5_IN_FlashOff;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
              chartInstance->c5_tp_FlashOff = 1U;
              *c5_light = FALSE;
              _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
              *c5_timer = 0U;
              _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
            } else {
              *c5_timer = c5__u8_s32_(chartInstance, *c5_timer + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
            }

            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
            break;

           default:
            CV_STATE_EVAL(0,0,0);
            chartInstance->c5_is_Flash = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
            break;
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c5_IN_Off:
      CV_CHART_EVAL(4,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c5_BrakeSw)!=0)))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
        if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c5_FlashEn)!=0)))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c5_tp_Off = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_Flash;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
          chartInstance->c5_tp_Flash = 1U;
          *c5_flashCntr = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_flashCntr, 4U);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          chartInstance->c5_is_Flash = c5_IN_FlashOn;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c5_tp_FlashOn = 1U;
          *c5_light = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
          *c5_timer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_timer, 6U);
          *c5_flashCntr = c5__u8_s32_(chartInstance, *c5_flashCntr + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c5_flashCntr, 4U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c5_tp_Off = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_On;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c5_tp_On = 1U;
          *c5_light = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c5_IN_On:
      CV_CHART_EVAL(4,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      if (CV_TRANSITION_EVAL(11U, !(_SFD_CCP_CALL(11,0,((*c5_BrakeSw)!=0)) != 0))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c5_tp_On = 0U;
        chartInstance->c5_is_c5_BuckyWagon_01 = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c5_is_c5_BuckyWagon_01 = c5_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c5_tp_Off = 1U;
        *c5_light = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_light, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(4,0,0);
      chartInstance->c5_is_c5_BuckyWagon_01 = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
  _sfEvent_ = c5_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c5_exit_internal_Flash(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c5_is_Flash) {
   case c5_IN_FlashOff:
    CV_STATE_EVAL(0,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c5_tp_FlashOff = 0U;
    chartInstance->c5_is_Flash = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    break;

   case c5_IN_FlashOn:
    CV_STATE_EVAL(0,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c5_tp_FlashOn = 0U;
    chartInstance->c5_is_Flash = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    break;

   default:
    CV_STATE_EVAL(0,1,0);
    chartInstance->c5_is_Flash = (uint8_T)c5_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    break;
  }
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber)
{
}

const mxArray *sf_c5_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c5_nameCaptureInfo;
}

static const mxArray *c5_sf_marshall(void *chartInstanceVoid, void *c5_u)
{
  const mxArray *c5_y = NULL;
  uint8_T c5_b_u;
  const mxArray *c5_b_y = NULL;
  SFc5_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc5_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c5_y = NULL;
  c5_b_u = *((uint8_T *)c5_u);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c5_y, c5_b_y);
  return c5_y;
}

static const mxArray *c5_b_sf_marshall(void *chartInstanceVoid, void *c5_u)
{
  const mxArray *c5_y = NULL;
  boolean_T c5_b_u;
  const mxArray *c5_b_y = NULL;
  SFc5_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc5_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c5_y = NULL;
  c5_b_u = *((boolean_T *)c5_u);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c5_y, c5_b_y);
  return c5_y;
}

static uint8_T c5_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_flashCntr, const char_T *
  c5_name)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  sf_mex_import(c5_name, sf_mex_dup(c5_flashCntr), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_flashCntr);
  return c5_y;
}

static boolean_T c5_b_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c5_light, const char_T *
  c5_name)
{
  boolean_T c5_y;
  boolean_T c5_b0;
  sf_mex_import(c5_name, sf_mex_dup(c5_light), &c5_b0, 1, 11, 0U, 0, 0U, 0);
  c5_y = c5_b0;
  sf_mex_destroy(&c5_light);
  return c5_y;
}

static const mxArray *c5_c_emlrt_marshallIn(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c5_b_setSimStateSideEffectsInfo, const char_T *c5_name)
{
  const mxArray *c5_y = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_duplicatearraysafe
                (&c5_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c5_b_setSimStateSideEffectsInfo);
  return c5_y;
}

static uint8_T c5__u8_s32_(SFc5_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c5_b)
{
  uint8_T c5_a;
  c5_a = (uint8_T)c5_b;
  if (c5_a != c5_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c5_a;
}

static void init_test_point_addr_map(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c5_testPointAddrMap[0] = &chartInstance->c5_tp_Flash;
  chartInstance->c5_testPointAddrMap[1] = &chartInstance->c5_tp_FlashOff;
  chartInstance->c5_testPointAddrMap[2] = &chartInstance->c5_tp_FlashOn;
  chartInstance->c5_testPointAddrMap[3] = &chartInstance->c5_tp_Off;
  chartInstance->c5_testPointAddrMap[4] = &chartInstance->c5_tp_On;
}

static void **get_test_point_address_map(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c5_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc5_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c5_testPointMappingInfo;
}

static void init_dsm_address_info(SFc5_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c5_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(462335707U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2662496420U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4162264984U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(880408460U);
}

mxArray *sf_c5_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(772832129U);
    pr[1] = (double)(3674014360U);
    pr[2] = (double)(4268170562U);
    pr[3] = (double)(2932679802U);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c5_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[29],T\"flashCntr\",},{M[1],M[25],T\"light\",},{M[1],M[31],T\"timer\",},{M[8],M[0],T\"is_active_c5_BuckyWagon_01\",},{M[9],M[0],T\"is_c5_BuckyWagon_01\",},{M[9],M[5],T\"is_Flash\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc5_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           5,
           5,
           14,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"light",0,
                              (MexFcnForType)c5_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"BrakeSw",
                              0,(MexFcnForType)c5_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"FlashEn",
                              0,(MexFcnForType)c5_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"flashCnt",
                              0,(MexFcnForType)c5_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "flashCntr",0,(MexFcnForType)c5_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "flashTime",0,(MexFcnForType)c5_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
                              (MexFcnForType)c5_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,3);
          _SFD_CH_SUBSTATE_INDEX(2,4);
          _SFD_ST_SUBSTATE_COUNT(0,2);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,2,1,1,0,0,NULL,NULL);
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

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              0,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(5,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

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

        _SFD_TRANS_COV_WTS(13,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c5_light;
          boolean_T *c5_BrakeSw;
          uint8_T *c5_FlashEn;
          uint8_T *c5_flashCnt;
          uint8_T *c5_flashCntr;
          uint8_T *c5_flashTime;
          uint8_T *c5_timer;
          c5_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c5_flashTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c5_flashCntr = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c5_flashCnt = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c5_FlashEn = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c5_BrakeSw = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c5_light = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c5_light);
          _SFD_SET_DATA_VALUE_PTR(1U, c5_BrakeSw);
          _SFD_SET_DATA_VALUE_PTR(2U, c5_FlashEn);
          _SFD_SET_DATA_VALUE_PTR(3U, c5_flashCnt);
          _SFD_SET_DATA_VALUE_PTR(4U, c5_flashCntr);
          _SFD_SET_DATA_VALUE_PTR(5U, c5_flashTime);
          _SFD_SET_DATA_VALUE_PTR(6U, c5_timer);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c5_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc5_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c5_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_BuckyWagon_01
    ((SFc5_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c5_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c5_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c5_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c5_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c5_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c5_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c5_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_BuckyWagon_01((SFc5_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",5,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",5,4);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",5,3);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2702530860U));
  ssSetChecksum1(S,(1810741647U));
  ssSetChecksum2(S,(2941011700U));
  ssSetChecksum3(S,(805712891U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c5_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",5);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c5_BuckyWagon_01(SimStruct *S)
{
  SFc5_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc5_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc5_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc5_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c5_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c5_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c5_BuckyWagon_01;
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

void c5_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_BuckyWagon_01_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Flash", "Flash", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Flash.FlashOff", "FlashOff", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Flash.FlashOn", "FlashOn", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Off", "Off", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/On", "On", 0, 0, 0, 0, 0 } };

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
  SFc5_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc5_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
